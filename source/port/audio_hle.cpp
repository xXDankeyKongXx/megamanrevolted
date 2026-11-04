// Native (HLE) implementation of Mega Man 64's audio microcode (aspMain, NuSystem's "n_audio" ABI).
//
// The recompiled microcode (recomp/rsp/aspMain.cpp) is exact but slow on the 3DS: the RSP vector
// unit has no SIMD path on ARM11, and a 24-voice scene took ~39 ms per 16.7 ms audio frame, which
// starved the game's graphics threads (a ~35 s black screen after the title menu). This does the
// same work in plain integer code. Each command follows the microcode's arithmetic (VMULF rounding,
// saturating adds, 32-bit envelope ramps per 8-sample group), so its output matches the recompiled
// microcode; audio_hle_compare (below) checks that at runtime in development builds.
//
// DMEM is the runtime's RSP data memory (librecomp/rsp.hpp): recomp::rsp::run_task loads the
// microcode's data segment (command table, constants, resample filter table at 0xB0) before calling
// the microcode function, as on hardware. Addresses below are the microcode's DMEM layout.

#include <3ds.h>

#include <arm_acle.h>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

#include "recomp.h"
#include "librecomp/rsp.hpp"
#include "audio_hle.hpp"

namespace {

constexpr uint32_t main_buf = 0x4F0;  // all command buffer offsets are relative to this
constexpr uint32_t main2_buf = 0x660;
constexpr uint32_t dry_left = 0x9D0;
constexpr uint32_t dry_right = 0xB40;
constexpr uint32_t wet_left = 0xCB0;
constexpr uint32_t wet_right = 0xE20;
constexpr uint32_t frame_bytes = 0x170; // 184 samples
constexpr uint32_t scratch = 0xFA0;     // state DMA area of ADPCM/RESAMPLE/ENVMIXER
constexpr uint32_t volume_state = 0xFE0; // SETVOL: targets, rates, dry/wet (ENVMIXER saves these)
constexpr uint32_t left_volume = 0xFF0;
constexpr uint32_t loop_address = 0x00E; // SETLOOP (a word at an odd halfword offset)
constexpr uint32_t adpcm_book = 0x3F0;
constexpr uint32_t resample_table = 0x0B0;

// DMEM and RDRAM both hold big-endian data as host-order 32-bit words (byte address ^ 3).
inline uint8_t& d8(uint32_t addr) { return dmem[(addr ^ 3) & 0xFFF]; }
inline int16_t& d16(uint32_t addr) { return *reinterpret_cast<int16_t*>(&dmem[(addr ^ 2) & 0xFFE]); }
inline uint32_t d32(uint32_t addr) {
    return (uint32_t)d8(addr) << 24 | (uint32_t)d8(addr + 1) << 16 | (uint32_t)d8(addr + 2) << 8 | d8(addr + 3);
}

inline int16_t clamp16(int64_t x) { return x > 32767 ? 32767 : x < -32768 ? -32768 : (int16_t)x; }

// VMULF: (2ab + 0x8000) >> 16, which is (ab + 0x4000) >> 15. (ab is at most 2^30, so no overflow.)
inline int16_t vmulf(int32_t a, int32_t b) { return (int16_t)__ssat((a * b + 0x4000) >> 15, 16); }

// VMULF(dst, 0x7FFF) then VMACF(src, gain): the microcode's mix of src*gain into dst. The sum can
// exceed 32 bits only where the result clamps anyway, so saturating adds give the exact result.
inline int16_t mix(int32_t dst, int32_t src, int32_t gain) {
    return (int16_t)__ssat(__qadd(__qadd(dst * 0x7FFF, src * gain), 0x4000) >> 15, 16);
}

// A 4-byte-aligned DMEM buffer as host halfwords. Each 32-bit word holds two samples swapped, so
// sample i is at index i ^ 1; element-wise work on equally aligned buffers can ignore that.
inline int16_t* samples(uint32_t addr) { return reinterpret_cast<int16_t*>(&dmem[addr & 0xFFC]); }

// RSP DMA as the runtime does it (librecomp/rsp.hpp): len bytes, RDRAM address 8-byte aligned.
void dma_read(uint8_t* rdram, uint32_t dmem_addr, uint32_t dram_addr, uint32_t len) {
    dram_addr &= 0xFFFFF8;
    if ((dmem_addr & 3) == 0 && (len & 3) == 0 && dmem_addr + len <= 0x1000) {
        memcpy(&dmem[dmem_addr], rdram + dram_addr, len);
        return;
    }
    for (uint32_t i = 0; i < len; i++) d8(dmem_addr + i) = rdram[(dram_addr + i) ^ 3];
}

void dma_write(uint8_t* rdram, uint32_t dmem_addr, uint32_t dram_addr, uint32_t len) {
    dram_addr &= 0xFFFFF8;
    if ((dmem_addr & 3) == 0 && (len & 3) == 0 && dmem_addr + len <= 0x1000) {
        memcpy(rdram + dram_addr, &dmem[dmem_addr], len);
        return;
    }
    for (uint32_t i = 0; i < len; i++) rdram[(dram_addr + i) ^ 3] = d8(dmem_addr + i);
}

void clearbuff(uint32_t w1, uint32_t w2) {
    uint32_t addr = (w1 & 0xFFFF) + main_buf;
    int32_t count = w2 & 0xFFFF;
    do { // 16 bytes at a time, at least once
        for (int i = 0; i < 16; i++) d8(addr + i) = 0;
        addr += 16;
        count -= 16;
    } while (count > 0);
}

void dmemmove(uint32_t w1, uint32_t w2) {
    uint32_t src = (w1 & 0xFFFF) + main_buf;
    uint32_t dst = (w2 >> 16) + main_buf;
    int32_t count = w2 & 0xFFFF;
    do {
        uint8_t chunk[16];
        for (int i = 0; i < 16; i++) chunk[i] = d8(src + i);
        for (int i = 0; i < 16; i++) d8(dst + i) = chunk[i];
        src += 16;
        dst += 16;
        count -= 16;
    } while (count > 0);
}

void setvol(uint32_t w1, uint32_t w2) {
    uint32_t flags = w1 >> 16;
    if (flags & 4) {
        if (flags & 2) {
            d16(left_volume) = (int16_t)w1;
            d16(volume_state + 0xC) = (int16_t)(w2 >> 16); // dry
            d16(volume_state + 0xE) = (int16_t)w2;         // wet
        } else {
            d16(volume_state + 0x6) = (int16_t)w1;         // right target
            d16(volume_state + 0x8) = (int16_t)(w2 >> 16); // right rate
            d16(volume_state + 0xA) = (int16_t)w2;
        }
    } else {
        d16(volume_state + 0x0) = (int16_t)w1;             // left target
        d16(volume_state + 0x2) = (int16_t)(w2 >> 16);     // left rate
        d16(volume_state + 0x4) = (int16_t)w2;
    }
}

void interleave() {
    for (uint32_t i = 0; i < frame_bytes / 2; i++) {
        d16(main_buf + i * 4) = d16(dry_left + i * 2);
        d16(main_buf + i * 4 + 2) = d16(dry_right + i * 2);
    }
}

void mixer(uint32_t w1, uint32_t w2) {
    int32_t gain = (int16_t)w1;
    uint32_t src = (w2 >> 16) + main_buf;
    uint32_t dst = (w2 & 0xFFFF) + main_buf;
    if (((src | dst) & 3) == 0 && dst + frame_bytes <= 0x1000 && src + frame_bytes <= 0x1000) {
        int16_t* d = samples(dst);
        const int16_t* sp = samples(src);
        for (uint32_t i = 0; i < frame_bytes / 2; i++) d[i] = mix(d[i], sp[i], gain);
        return;
    }
    for (uint32_t i = 0; i < frame_bytes; i += 2) {
        d16(dst + i) = mix(d16(dst + i), d16(src + i), gain);
    }
}

void adpcm(uint8_t* rdram, uint32_t w1, uint32_t w2) {
    uint32_t address = w1 & 0xFFFFFF;
    uint32_t flags = w2 >> 28;
    int32_t count = (w2 >> 16) & 0xFFF;
    uint32_t in = ((w2 >> 12) & 0xF) + main_buf;
    uint32_t out = (w2 & 0xFFF) + main_buf;

    if (flags & 1) {
        for (int i = 0; i < 32; i++) d8(out + i) = 0;
    } else {
        dma_read(rdram, out, (flags & 2) ? d32(loop_address) : address, 32);
    }
    int16_t last[16];
    for (int i = 0; i < 16; i++) last[i] = d16(out + i * 2);

    while (count > 0) {
        out += 32;
        uint8_t header = d8(in++);
        unsigned scale = header >> 4;
        unsigned rshift = scale < 12 ? 12 - scale : 0;
        int16_t book[16];
        uint32_t entry = adpcm_book + (header & 0xF) * 32;
        for (int i = 0; i < 16; i++) book[i] = d16(entry + i * 2);

        int16_t residual[16];
        for (int i = 0; i < 8; i++) {
            uint8_t byte = d8(in++);
            residual[i * 2] = (int16_t)((byte & 0xF0) << 8) >> rshift;
            residual[i * 2 + 1] = (int16_t)((byte & 0x0F) << 12) >> rshift;
        }
        // Two halves of 8 samples, each predicted from the previous two output samples.
        for (int half = 0; half < 2; half++) {
            int32_t l1 = last[half ? 6 : 14];
            int32_t l2 = last[half ? 7 : 15];
            const int16_t* res = residual + half * 8;
            int16_t* dst = last + half * 8;
            for (int i = 0; i < 8; i++) {
                int32_t acc = (int32_t)res[i] << 11;
                acc += book[i] * l1 + book[8 + i] * l2;
                for (int j = 0; j < i; j++) acc += book[8 + j] * res[i - 1 - j];
                dst[i] = clamp16(acc >> 11);
            }
        }
        for (int i = 0; i < 16; i++) d16(out + i * 2) = last[i];
        count -= 32;
    }
    dma_write(rdram, out, address, 32);
}

void resample(uint8_t* rdram, uint32_t w1, uint32_t w2) {
    uint32_t address = w1 & 0xFFFFFF;
    uint32_t pos = ((w2 >> 2) & 0xFFF) + main_buf - 8; // 4 history samples before the input
    uint32_t out = (w2 & 3) ? main2_buf : main_buf;
    uint32_t step = ((w2 >> 14) & 0xFFFF) << 1;
    uint32_t frac;

    if (w2 >> 30) {
        for (int i = 0; i < 8; i++) d8(pos + i) = 0;
        frac = 0;
    } else {
        dma_read(rdram, scratch, address, 16);
        for (int i = 0; i < 8; i++) d8(pos + i) = d8(scratch + i);
        frac = (uint16_t)d16(scratch + 8);
    }

    // Copy the input samples this frame reads into a plain array (positions only move forward).
    uint32_t end = pos, f = frac;
    for (uint32_t i = 0; i < frame_bytes / 2; i++) {
        f += step;
        end += (f >> 16) * 2;
        f &= 0xFFFF;
    }
    static int16_t in[0x800 + 4];
    uint32_t in_count = (end - pos) / 2 + 4;
    if (in_count > sizeof(in) / sizeof(in[0])) in_count = sizeof(in) / sizeof(in[0]);
    for (uint32_t i = 0; i < in_count; i++) in[i] = d16(pos + i * 2);

    const int16_t* table = samples(resample_table); // 64 entries of 4 taps, swapped in pairs
    uint32_t at = 0;
    for (uint32_t i = 0; i < frame_bytes; i += 2) {
        const int16_t* t = table + (frac >> 10) * 4;
        const int16_t* x = in + at;
        int32_t p0 = vmulf(x[0], t[1]);
        int32_t p1 = vmulf(x[1], t[0]);
        int32_t p2 = vmulf(x[2], t[3]);
        int32_t p3 = vmulf(x[3], t[2]);
        d16(out + i) = (int16_t)__ssat(__ssat(p0 + p1, 16) + __ssat(p2 + p3, 16), 16);
        frac += step;
        at += frac >> 16;
        frac &= 0xFFFF;
    }
    pos += at * 2;

    for (int i = 0; i < 8; i++) d8(scratch + i) = d8(pos + i);
    d16(scratch + 8) = (int16_t)frac;
    dma_write(rdram, scratch, address, 16);
}

// One channel's volume ramp: eight lanes (one per sample of an 8-sample group), each a 32-bit
// value whose high half is the gain, stepped by `rate` per group and clamped to `target`.
struct Ramp {
    int16_t hi[8];
    uint16_t lo[8];
    int32_t rate;
    int16_t target;

    void step() {
        for (int k = 0; k < 8; k++) {
            int64_t v = ((int64_t)hi[k] << 16 | lo[k]) + rate;
            lo[k] = (uint16_t)v;
            hi[k] = clamp16(v >> 16);
        }
        clamp();
    }
    void clamp() {
        for (int k = 0; k < 8; k++) {
            hi[k] = (rate >> 16) >= 0 ? (hi[k] < target ? hi[k] : target) : (hi[k] > target ? hi[k] : target);
        }
    }
    void init(int16_t volume) {
        for (int k = 0; k < 8; k++) {
            uint32_t f = k == 7 ? 0xFFFF : 0x2000 * (k + 1);
            int64_t acc = ((int64_t)f * (uint16_t)rate >> 16) + (int64_t)f * (int16_t)(rate >> 16) + ((int64_t)volume << 16);
            int64_t high = acc >> 16;
            hi[k] = clamp16(high);
            lo[k] = (high >= -32768 && high <= 32767) ? (uint16_t)acc : (acc < 0 ? 0 : 0xFFFF);
        }
        clamp();
    }
};

void envmixer(uint8_t* rdram, uint32_t w1, uint32_t w2) {
    uint32_t address = w2 & 0xFFFFFF;
    bool init = (w1 >> 16) & 1;
    if (!init) {
        dma_read(rdram, scratch, address, 0x50);
    }
    Ramp left, right;
    left.target = d16(volume_state + 0x0);
    left.rate = (int32_t)((uint32_t)(uint16_t)d16(volume_state + 0x2) << 16 | (uint16_t)d16(volume_state + 0x4));
    right.target = d16(volume_state + 0x6);
    right.rate = (int32_t)((uint32_t)(uint16_t)d16(volume_state + 0x8) << 16 | (uint16_t)d16(volume_state + 0xA));
    int32_t dry = d16(volume_state + 0xC);
    int32_t wet = d16(volume_state + 0xE);

    if (init) {
        left.init(d16(left_volume));
        right.init((int16_t)w1);
    } else {
        for (int k = 0; k < 8; k++) {
            left.hi[k] = d16(scratch + 0x00 + k * 2);
            left.lo[k] = (uint16_t)d16(scratch + 0x10 + k * 2);
            right.hi[k] = d16(scratch + 0x20 + k * 2);
            right.lo[k] = (uint16_t)d16(scratch + 0x30 + k * 2);
        }
        left.step();
        right.step();
    }

    int16_t* in = samples(main_buf);
    int16_t* dl = samples(dry_left);
    int16_t* wl = samples(wet_left);
    int16_t* dr = samples(dry_right);
    int16_t* wr = samples(wet_right);
    for (uint32_t base = 0; base < frame_bytes / 2; base += 8) {
        if (base != 0) {
            left.step();
            right.step();
        }
        // Gains per host index: index j holds sample j ^ 1 of the group.
        int32_t gdl[8], gwl[8], gdr[8], gwr[8];
        for (int k = 0; k < 8; k++) {
            gdl[k ^ 1] = vmulf(left.hi[k], dry);
            gwl[k ^ 1] = vmulf(left.hi[k], wet);
            gdr[k ^ 1] = vmulf(right.hi[k], dry);
            gwr[k ^ 1] = vmulf(right.hi[k], wet);
        }
        for (int j = 0; j < 8; j++) {
            uint32_t i = base + j;
            int32_t x = in[i];
            dl[i] = mix(dl[i], x, gdl[j]);
            wl[i] = mix(wl[i], x, gwl[j]);
            dr[i] = mix(dr[i], x, gdr[j]);
            wr[i] = mix(wr[i], x, gwr[j]);
        }
    }

    for (int k = 0; k < 8; k++) {
        d16(scratch + 0x00 + k * 2) = left.hi[k];
        d16(scratch + 0x10 + k * 2) = (int16_t)left.lo[k];
        d16(scratch + 0x20 + k * 2) = right.hi[k];
        d16(scratch + 0x30 + k * 2) = (int16_t)right.lo[k];
    }
    dma_write(rdram, scratch, address, 0x50);
}

} // namespace

// Development: time per command type, logged every 300 tasks.
static uint64_t op_ticks[16];
static uint32_t op_count[16];
static uint32_t timed_tasks;

RspExitReason audio_hle_run(uint8_t* rdram, uint32_t alist_addr, uint32_t alist_size) {
    for (uint32_t off = 0; off + 8 <= alist_size; off += 8) {
        uint32_t w1 = (uint32_t)MEM_W(off, (int32_t)alist_addr);
        uint32_t w2 = (uint32_t)MEM_W(off + 4, (int32_t)alist_addr);
        uint64_t op_start = svcGetSystemTick();
        uint32_t op = (w1 >> 24) & 0xF;
        switch (op) {
            case 0x1: adpcm(rdram, w1, w2); break;
            case 0x2: clearbuff(w1, w2); break;
            case 0x3: envmixer(rdram, w1, w2); break;
            case 0x4: { // LOADBUFF
                uint32_t count = (w1 >> 12) & 0xFFF;
                if (count) dma_read(rdram, (w1 & 0xFFF) + main_buf, w2 & 0xFFFFFF, count);
                break;
            }
            case 0x5: resample(rdram, w1, w2); break;
            case 0x6: { // SAVEBUFF
                uint32_t count = (w1 >> 12) & 0xFFF;
                if (count) dma_write(rdram, (w1 & 0xFFF) + main_buf, w2 & 0xFFFFFF, count);
                break;
            }
            case 0x9: setvol(w1, w2); break;
            case 0xA: dmemmove(w1, w2); break;
            case 0xB: dma_read(rdram, adpcm_book, w2 & 0xFFFFFF, w1 & 0xFFFF); break; // LOADADPCM
            case 0xC: mixer(w1, w2); break;
            case 0xD: interleave(); break;
            case 0xE: d16(volume_state + 0xA) = (int16_t)w2; break; // right rate, low half
            case 0xF: { // SETLOOP
                uint32_t loop = w2 & 0xFFFFFF;
                for (int i = 0; i < 4; i++) d8(loop_address + i) = (uint8_t)(loop >> (24 - i * 8));
                break;
            }
            default: break; // 0 is a no-op; 7 and 8 are unused by this ABI
        }
        op_ticks[op] += svcGetSystemTick() - op_start;
        op_count[op]++;
    }
    if (++timed_tasks % 300 == 0) {
        fprintf(stderr, "[audiohle] us per task by op:");
        for (int i = 0; i < 16; i++) {
            if (op_count[i]) fprintf(stderr, " %X:%llu(x%lu)", i, (unsigned long long)(op_ticks[i] / 300 / (SYSCLOCK_ARM11 / 1000000)), (unsigned long)(op_count[i] / 300));
            op_ticks[i] = 0;
            op_count[i] = 0;
        }
        fputc('\n', stderr);
    }
    return RspExitReason::Broke;
}

// --- Development: compare against the recompiled microcode ----------------------------------------

namespace {

struct Region {
    uint32_t start, len;
    uint8_t op;
};

void collect_written_regions(uint8_t* rdram, uint32_t alist_addr, uint32_t alist_size, std::vector<Region>& regions) {
    for (uint32_t off = 0; off + 8 <= alist_size; off += 8) {
        uint32_t w1 = (uint32_t)MEM_W(off, (int32_t)alist_addr);
        uint32_t w2 = (uint32_t)MEM_W(off + 4, (int32_t)alist_addr);
        uint8_t op = (w1 >> 24) & 0xF;
        uint32_t addr = 0, len = 0;
        switch (op) {
            case 0x1: addr = w1; len = 32; break;
            case 0x3: addr = w2; len = 0x50; break;
            case 0x5: addr = w1; len = 16; break;
            case 0x6: addr = w2; len = (w1 >> 12) & 0xFFF; break;
            default: continue;
        }
        addr &= 0xFFFFF8;
        len = (len + 7) & ~7u;
        if (len && addr + len <= 0x800000) regions.push_back({addr, len, op});
    }
}

} // namespace

RspExitReason audio_hle_compare(uint8_t* rdram, uint32_t alist_addr, uint32_t alist_size, RspUcodeFunc* microcode, uint32_t ucode_addr) {
    static unsigned task_number = 0;
    task_number++;

    std::vector<Region> regions;
    collect_written_regions(rdram, alist_addr, alist_size, regions);
    std::vector<uint8_t> before, after_lle;
    for (const Region& r : regions) before.insert(before.end(), rdram + r.start, rdram + r.start + r.len);
    std::vector<uint8_t> dmem_before(dmem, dmem + 0x1000);

    RspExitReason ret = microcode(rdram, ucode_addr);
    for (const Region& r : regions) after_lle.insert(after_lle.end(), rdram + r.start, rdram + r.start + r.len);

    // Restore in reverse so overlapping regions end up with their original contents.
    size_t pos = before.size();
    for (size_t i = regions.size(); i-- > 0;) {
        pos -= regions[i].len;
        memcpy(rdram + regions[i].start, before.data() + pos, regions[i].len);
    }
    memcpy(dmem, dmem_before.data(), 0x1000);
    audio_hle_run(rdram, alist_addr, alist_size);

    unsigned diffs = 0, max_diff = 0;
    int first_op = -1;
    uint32_t first_addr = 0;
    pos = 0;
    for (const Region& r : regions) {
        for (uint32_t i = 0; i < r.len; i += 2) {
            int16_t hle = *reinterpret_cast<int16_t*>(rdram + ((r.start + i) ^ 2));
            int16_t lle = *reinterpret_cast<const int16_t*>(after_lle.data() + ((pos + i) ^ 2));
            if (hle != lle) {
                diffs++;
                unsigned d = (unsigned)abs(hle - lle);
                if (d > max_diff) max_diff = d;
                if (first_op < 0) { first_op = r.op; first_addr = r.start + i; }
            }
        }
        pos += r.len;
    }
    static unsigned clean_tasks = 0;
    if (diffs) {
        fprintf(stderr, "[audiohle] task %u: %u/%u halfwords differ, max %u, first in op %X at %06X\n",
            task_number, diffs, (unsigned)(pos / 2), max_diff, first_op, (unsigned)first_addr);
    } else if (++clean_tasks % 50 == 0) {
        fprintf(stderr, "[audiohle] %u tasks matched exactly (task %u)\n", clean_tasks, task_number);
    }
    return ret;
}
