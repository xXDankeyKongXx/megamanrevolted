// Native replacements for recompiled game functions.
//
// Recompiled functions are weak (see RECOMP_FUNC in runtime/include/recomp.h), so a strong
// definition here with the same name overrides the recompiled one at link time. These are the
// functional fixes from MegaMan64Recompiled/patches (which needs a MIPS compiler to build); its
// PC-only patches (widescreen, RT64 interpolation tags, extended display-list arenas) are not ported.

#include <cstdio>
#include <cstring>
#include <vector>

#include "recomp.h"

extern "C" void yield_self_1ms(uint8_t* rdram);
extern "C" int32_t osViGetCurrentFramebuffer();
extern "C" int32_t osViGetNextFramebuffer();

// memcpy (0x8009A3B4): the game's version copies one byte per loop iteration, and recompiled each byte
// costs an address translation and byte swap; it was among the busiest functions in gameplay.
// RDRAM holds 32-bit words in host order, so when source and destination share their alignment the
// middle of the copy is a plain word copy. Overlapping copies keep the original forward byte loop
// (its result differs from a block copy when the destination is ahead of the source). Registers end
// as the original leaves them.
extern "C" void memcpy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint32_t dst = (uint32_t)ctx->r4, src = (uint32_t)ctx->r5, n = (uint32_t)ctx->r6;
    ctx->r2 = ctx->r4;
    ctx->r3 = ctx->r4;
    if (n == 0) return;
    uint32_t d = dst, s = src, left = n;
    bool overlaps_forward = d > s && d < s + n;
    if (((d ^ s) & 3) == 0 && !overlaps_forward) {
        while (left && (d & 3)) {
            MEM_B(0, (gpr)(int32_t)d) = MEM_B(0, (gpr)(int32_t)s);
            d++; s++; left--;
        }
        uint32_t words = left / 4;
        memmove(rdram + (d - 0x80000000u), rdram + (s - 0x80000000u), words * 4);
        d += words * 4; s += words * 4; left -= words * 4;
    }
    while (left) {
        MEM_B(0, (gpr)(int32_t)d) = MEM_B(0, (gpr)(int32_t)s);
        d++; s++; left--;
    }
    ctx->r3 = (gpr)(int32_t)(dst + n);
    ctx->r5 = (gpr)(int32_t)(src + n);
    ctx->r6 = 0;
}

// nuGfxTaskAllEndWait: on N64 this spins until the pending graphics task count reaches zero while
// interrupts run the RSP/RDP. Under ultramodern only one game thread runs at a time, so the spin
// never ends; yield for 1 ms per check instead (same fix as the PC port's gfx_patches.c).
extern "C" void func_80092EB0_6E2B0(uint8_t* rdram, recomp_context* ctx) {
    constexpr int32_t pending_gfx_tasks = (int32_t)0x801FFBB0; // D_801FFBB0_1DAFB0
    while (MEM_W(0, pending_gfx_tasks) != 0) {
        yield_self_1ms(rdram);
    }
}

// nuScWaitTaskReady(task): NuSystem's graphics scheduler waits, retrace by retrace, until the task's
// framebuffer is neither the VI's current nor next buffer, so it never draws into the visible image.
// After the title menu the game submits a task without a NuSystem buffer swap, leaving the next
// task's target on screen; the original waited until an unrelated event swapped buffers (~40 s of
// black screen). Same check here, but bounded to a few retraces: drawing into the shown buffer at
// worst tears for one frame.
extern "C" void func_8009271C_6DB1C(uint8_t* rdram, recomp_context* ctx) {
    constexpr int32_t scheduler_disabled_flag = (int32_t)0x8021572D; // checked first by the original
    if (MEM_BU(0, scheduler_disabled_flag) == 1) return;
    int32_t task = (int32_t)ctx->r4;
    int32_t framebuffer = MEM_W(0xC, task);
    for (int waited_ms = 0; waited_ms < 50; waited_ms++) { // ~3 retraces
        if (osViGetCurrentFramebuffer() != framebuffer && osViGetNextFramebuffer() != framebuffer) return;
        yield_self_1ms(rdram);
    }
}

// --- HUD passes ----------------------------------------------------------------------------------
// The renderer moves the HUD gauges and the minimap to the bottom screen by where they're drawn.
// To keep other screens (the start menu draws its own boxes in the same corners) where they are,
// it only does so while the game's HUD routines run: these overrides count their calls.
extern "C" { volatile uint32_t mm64_hud_gauge_passes, mm64_hud_map_passes; }

// First step of the gauge routine (func_80048C7C, the only caller): runs the handler for the
// HUD's current state from the table at 0x800AD0F0.
extern "C" void mm64_savestate_hud_pass(uint8_t* rdram, recomp_context* ctx); // mm64_savestate.cpp
extern "C" void func_80049204_24604(uint8_t* rdram, recomp_context* ctx) {
    mm64_hud_gauge_passes = mm64_hud_gauge_passes + 1;
    mm64_savestate_hud_pass(rdram, ctx); // pending save-state requests run here, on the game thread
    int32_t state = MEM_BU(0x4, ctx->r4);
    int32_t handler = MEM_W(0, (int32_t)0x800AD0F0 + state * 4);
    LOOKUP_FUNC(handler)(rdram, ctx);
}

// Minimap pass: func_8004A6D8 then the minimap itself (func_8004A81C).
extern "C" void func_8004A6D8_25AD8(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8004A81C_25C1C(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8004A6B4_25AB4(uint8_t* rdram, recomp_context* ctx) {
    mm64_hud_map_passes = mm64_hud_map_passes + 1;
    func_8004A6D8_25AD8(rdram, ctx);
    func_8004A81C_25C1C(rdram, ctx);
}

// --- Process frame wait ---------------------------------------------------------------------------
// func_80029114(frames): the game's processes (one per thread, records of 0x1C8 bytes at 0x801BB930
// indexed by 0x36 - thread priority) call this to sleep until their next frame. Same behaviour here,
// plus a hook at the start of the process' next frame, where save-state loads run
// (mm64_savestate.cpp): between frames, like the game's own area changes, rather than in the middle
// of building a display list.
extern "C" void osGetThreadPri_recomp(uint8_t* rdram, recomp_context* ctx);
extern "C" void osRecvMesg_recomp(uint8_t* rdram, recomp_context* ctx);
extern "C" void mm64_savestate_frame_start(uint8_t* rdram, recomp_context* ctx, int process);
extern "C" { extern volatile int mm64_debug_sfx; } // below: sound requests
extern "C" { volatile bool mm64_debug_crash; }       // pokes.txt "<vi> crashtest 0"
static void queue_sound(uint8_t* rdram, int id, int32_t a1, int32_t a2);
extern "C" void func_80029114_4514(uint8_t* rdram, recomp_context* ctx) {
    int32_t frames = (int32_t)ctx->r4;
    ctx->r4 = 0;
    osGetThreadPri_recomp(rdram, ctx);
    int32_t process = 0x36 - (int32_t)ctx->r2;
    ctx->r2 = 1;
    if ((uint32_t)process >= 4) return;
    int32_t record = (int32_t)0x801BB930 + process * 0x1C8;
    int32_t queue = MEM_H(0x4, record);
    MEM_B(0x0, record) = 1;
    MEM_H(0x2, record) = 1;
    MEM_H(0x6, record) = (int16_t)frames;
    ctx->r4 = (int32_t)0x80134FD0 + queue * 24;
    ctx->r5 = 0;
    ctx->r6 = 1; // OS_MESG_BLOCK
    osRecvMesg_recomp(rdram, ctx);
    mm64_savestate_frame_start(rdram, ctx, process);
    if (mm64_debug_crash) *(volatile uint32_t*)0x10 = 1; // development: test the crash log (crash_log.c)
    int sfx = mm64_debug_sfx;
    if (sfx >= 0) {
        mm64_debug_sfx = -1;
        queue_sound(rdram, sfx, 0, 0);
    }
}

// --- Sound requests --------------------------------------------------------------------------------
// func_8002A2F8(id, a1, a2): queues a sound effect without a position (menus, messages): a 0x14-byte
// request (+0 0 = no position, +2 id, +4 a1, +8 a2) at the queue pointer in 0x801ADC8C, unless the
// queue (ending at 0x80210480) is full. Same natively, plus a log of the ids for finding the menu
// sounds (mm64_sound_log). func_8002A33C is the positional variant (+0 1, position from a1).
extern "C" { volatile bool mm64_sound_log; }
extern "C" unsigned mm64_debug_vi(void);
static void queue_sound(uint8_t* rdram, int id, int32_t a1, int32_t a2) {
    int32_t q = MEM_W(-0x2374, (int32_t)0x801B0000);
    if (q == (int32_t)0x80210480) return;
    MEM_B(0x0, q) = 0;
    MEM_H(0x2, q) = (int16_t)id;
    MEM_W(0x4, q) = a1;
    MEM_W(0x8, q) = a2;
    MEM_W(-0x2374, (int32_t)0x801B0000) = q + 0x14;
}

// Development: a sound effect to play, requested by the UI thread (pokes.txt "<vi> sfx <id>"),
// queued on the game thread at the next process frame.
extern "C" { volatile int mm64_debug_sfx = -1; }

extern "C" void func_8002A2F8_56F8(uint8_t* rdram, recomp_context* ctx) {
    int32_t q = MEM_W(-0x2374, (int32_t)0x801B0000);
    if (q != (int32_t)0x80210480) {
        MEM_B(0x0, q) = 0;
        MEM_H(0x2, q) = (int16_t)ctx->r4;
        MEM_W(0x4, q) = (int32_t)ctx->r5;
        MEM_W(0x8, q) = (int32_t)ctx->r6;
        MEM_W(-0x2374, (int32_t)0x801B0000) = q + 0x14;
    }
    if (mm64_sound_log) {
        fprintf(stderr, "[sound] vi %u id %d (%08X %08X)\n", mm64_debug_vi(), (int)(int16_t)ctx->r4, (unsigned)ctx->r5, (unsigned)ctx->r6);
    }
}

// --- Process restarts ------------------------------------------------------------------------------
// func_800292E8(fn): ends the calling process' thread and has the process tick start it again at fn
// (after the process' exit callback at +0x8, if any, following a 4-frame wait). The game changes
// scenes this way (logo, opening, title, gameplay). Same behaviour natively, so scene changes can be
// observed and redirected (mm64_scene_redirect).
extern "C" void osDestroyThread_recomp(uint8_t* rdram, recomp_context* ctx);
extern "C" uint32_t mm64_scene_redirect(uint32_t fn);
extern "C" void func_800292E8_46E8(uint8_t* rdram, recomp_context* ctx) {
    uint32_t target = (uint32_t)ctx->r4;
    ctx->r4 = 0;
    osGetThreadPri_recomp(rdram, ctx);
    int32_t process = 0x36 - (int32_t)ctx->r2;
    uint32_t fn = mm64_scene_redirect(target);
    if ((uint32_t)process < 4) {
        int32_t record = (int32_t)0x801BB930 + process * 0x1C8;
        if (MEM_W(0x8, record) != 0) {
            ctx->r4 = 4;
            func_80029114_4514(rdram, ctx);
            LOOKUP_FUNC(MEM_W(0x8, record))(rdram, ctx);
            MEM_W(0x8, record) = 0;
        }
        MEM_H(0x2, record) = 8;
        MEM_W(0x1C0, record) = (int32_t)fn;
        MEM_B(0x1, record) = 1;
    }
    ctx->r4 = 0;
    osDestroyThread_recomp(rdram, ctx);
}

// Development tools for finding game assets: native replacements of the asset decompressor and the
// event-flag test that log what the game loads and checks. Off in normal builds (they change how
// the game runs: no yielding while decompressing); build with -DMM64_ASSET_TOOLS to use them.
extern "C" { volatile bool mm64_asset_log; }
#ifdef MM64_ASSET_TOOLS
// --- Asset decompression -----------------------------------------------------------------------
// func_80026C80(desc, buffer, queue): the game's loader for compressed assets. desc: +0x0 source
// (a cart offset, or a RAM address when bit 31 is set), +0xC compressed size, +0x10 destination.
// The stream is a 32-bit uncompressed size followed by LZSS data: a flag byte per eight items (LSB
// first; 1 = literal byte), otherwise two bytes giving a 12-bit position in a 4 KB ring buffer
// (initially zero, writing from 0xFEE) and a length of (low nibble + 3). The original streams the
// source through `buffer` in 4 KB DMA chunks; this reads it in one go and decodes natively, and logs
// each file (mm64_asset_log) so the game's assets can be found and unpacked offline.
extern "C" void mm64_read_rom(uint32_t rom_offset, uint8_t* out, size_t num_bytes); // runtime pi.cpp
extern "C" void func_80026C80_2080(uint8_t* rdram, recomp_context* ctx) {
    int32_t desc = (int32_t)ctx->r4;
    uint32_t src = (uint32_t)MEM_W(0x0, desc);
    uint32_t size = (uint32_t)MEM_W(0xC, desc);
    int32_t dest = MEM_W(0x10, desc);
    static std::vector<uint8_t> in;
    in.resize(size + 4);
    if (src & 0x80000000u) {
        for (uint32_t i = 0; i < size; i++) in[i] = MEM_BU(i, (int32_t)src);
    } else {
        mm64_read_rom(src, in.data(), size);
    }
    uint32_t out_size = (uint32_t)in[0] << 24 | in[1] << 16 | in[2] << 8 | in[3];
    static uint8_t ring[4096];
    memset(ring, 0, sizeof(ring));
    uint32_t r = 0xFEE, pos = 4, produced = 0, flags = 0;
    while (produced < out_size) {
        flags >>= 1;
        if (!(flags & 0x100)) {
            if (pos >= size) break;
            flags = in[pos++] | 0xFF00;
        }
        if (flags & 1) {
            if (pos >= size) break;
            uint8_t c = in[pos++];
            MEM_B(produced++, dest) = (int8_t)c;
            ring[r] = c;
            r = (r + 1) & 0xFFF;
        } else {
            if (pos + 1 >= size + 1) break;
            uint32_t i = in[pos++];
            uint32_t j = in[pos++];
            i |= (j & 0xF0) << 4;
            uint32_t len = (j & 0x0F) + 3;
            for (uint32_t k = 0; k < len && produced < out_size; k++) {
                uint8_t c = ring[(i + k) & 0xFFF];
                MEM_B(produced++, dest) = (int8_t)c;
                ring[r] = c;
                r = (r + 1) & 0xFFF;
            }
        }
    }
    if (mm64_asset_log) {
        fprintf(stderr, "[asset] %s %08X packed %X unpacked %X -> %08X\n", (src & 0x80000000u) ? "ram" : "rom", src, size, out_size, (uint32_t)dest);
    }
}

// --- Event flags -----------------------------------------------------------------------------------
// func_8006033C(flag): tests one of the game's event flags (bit array at 0x802055A8, most significant
// bit first). Same behaviour natively; on test runs each distinct (flag, result, caller) is logged once,
// to find which flags decide what a room spawns.
#include <set>
extern "C" void func_8006033C_3B73C(uint8_t* rdram, recomp_context* ctx) {
    uint32_t flag = (uint32_t)ctx->r4;
    uint32_t set = (MEM_BU((int32_t)(flag >> 3), (int32_t)0x802055A8) & (0x80 >> (flag & 7))) != 0;
    if (mm64_asset_log) {
        static std::set<uint64_t> logged;
        uint64_t key = (uint64_t)flag << 33 | (uint64_t)set << 32 | (uint32_t)ctx->r31;
        if (logged.insert(key).second) fprintf(stderr, "[flag] %03X = %u from %08X\n", flag, set, (uint32_t)ctx->r31);
    }
    ctx->r2 = set;
    ctx->r3 = (int32_t)(0x80 >> (flag & 7));
    ctx->r4 = (int32_t)(flag >> 3);
    ctx->r5 = (int32_t)(flag & 7);
}

#endif // MM64_ASSET_TOOLS

// --- Dialogue icon: C-Down shows as Y -------------------------------------------------------------
// The 3DS Y button acts as the N64's C-Down (talk / inspect, input_3ds.cpp), so the dialogue's C-Down
// icon is redrawn as a Y. The game's text font is a 4-bit sheet in its static data (RAM 0x800B5104,
// 128 bytes per pixel row, 12x12 glyphs, 21 per row of the sheet); glyph code 0x53 is the C-Down
// icon (sheet index code - 0x12). The replacement keeps the game's button style: the circle of the
// B icon with the letter drawn in palette index 3, like the A/B icons' letters.
extern "C" void mm64_patch_font(uint8_t* rdram) {
    static const char* const y_icon[12] = {
        "000000000000",
        "000000000000",
        "000111123000",
        "001311132300",
        "021311131230",
        "011131311130",
        "011113121130",
        "011113111130",
        "021113111230",
        "001113112300",
        "000111123000",
        "000033330000",
    };
    constexpr uint32_t sheet = 0xB5104, stride = 128, per_row = 21;
    constexpr int code = 0x53;
    const int index = code - 0x12;
    const uint32_t gx = (index % per_row) * 12, gy = (index / per_row) * 12;
    for (uint32_t y = 0; y < 12; y++) {
        for (uint32_t x = 0; x < 12; x++) {
            uint32_t px = gx + x;
            uint32_t addr = sheet + (gy + y) * stride + px / 2;
            uint8_t v = (uint8_t)(y_icon[y][x] - '0');
            uint8_t& b = rdram[addr ^ 3];
            b = (px & 1) ? (uint8_t)((b & 0xF0) | v) : (uint8_t)((b & 0x0F) | (v << 4));
        }
    }
}


// The game's quicksort (pivot = first element, word swaps, its "last swap" pointer kept in a global
// that the next call reads even when it swapped nothing - kept exactly, the sort order depends on
// it). Native, with the draw-order comparator (byte +0xC of each entry, func_8002E31C) inlined: it
// sorts the object list every frame and was ~15% of the game's time.
static void mm64_qsort(uint8_t* rdram, recomp_context* ctx, int32_t base, int32_t n, int32_t size, int32_t cmp) {
    constexpr int32_t last = (int32_t)0x80162728;
    if (n <= 0 || size == 0) return;
    auto compare = [&](int32_t a, int32_t b) -> int32_t {
        if (cmp == (int32_t)0x8002E31C) {
            uint32_t ka = MEM_BU(0xC, MEM_W(0, a)), kb = MEM_BU(0xC, MEM_W(0, b));
            return ka == kb ? 0 : (ka < kb ? -1 : 1);
        }
        ctx->r4 = a;
        ctx->r5 = b;
        LOOKUP_FUNC(cmp)(rdram, ctx);
        return (int32_t)ctx->r2;
    };
    int32_t pivot = base, p = base + size;
    for (int32_t i = 0; i < n - 1; i++, p += size) {
        if (compare(pivot, p) <= 0) continue;
        int32_t next;
        if ((p - pivot) / size < 2) {
            next = p;
        } else {
            next = pivot + size;
            int32_t t = MEM_W(0, pivot);
            MEM_W(0, pivot) = MEM_W(0, next);
            MEM_W(0, next) = t;
        }
        MEM_W(0, last) = next;
        int32_t t = MEM_W(0, pivot);
        MEM_W(0, pivot) = MEM_W(0, p);
        MEM_W(0, p) = t;
        pivot = next;
    }
    int32_t left = (MEM_W(0, last) - base) / size + 1;
    MEM_W(0, last) = pivot;
    if (left >= 2) mm64_qsort(rdram, ctx, base, left, size, cmp);
    MEM_W(0, last) = pivot + size;
    int32_t right = n - left;
    if (right >= 2) mm64_qsort(rdram, ctx, pivot + size, right, size, cmp);
}

extern "C" void func_8002E34C_974C(uint8_t* rdram, recomp_context* ctx) {
    ctx->r29 = ADD32(ctx->r29, -0x40); // the game's frame, so a non-native comparator gets the stack below it
    mm64_qsort(rdram, ctx, (int32_t)ctx->r4, (int32_t)ctx->r5, (int32_t)ctx->r6, (int32_t)ctx->r7);
    ctx->r29 = ADD32(ctx->r29, 0x40);
}
