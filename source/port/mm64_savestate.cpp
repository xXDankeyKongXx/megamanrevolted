// Save states (see mm64_savestate.h).
//
// A full snapshot of game memory can't be restored here: the game runs its logic as many threads
// (one per "process", some created on the fly), and in the recompiled game each one is a native
// thread blocked deep inside native frames of game code. RDRAM alone doesn't describe them, and
// they can't be recreated after a restart. So a slot keeps what the game itself saves.
//
// Game knowledge (MegaMan64 US rev 1):
// - Saving: func_800740B0 packs the live state (player struct at 0x802049B0 including position,
//   item flags at 0x802055A8, Zenny, area...) into the 0x1800-byte image at 0x80193C70, and
//   func_800743A8 adds its checksums; the game then writes that image to flash.
// - Loading: the title's Continue starts func_8003E2F0 in the main process. With bit 0 of the
//   process' byte 0x82 set it unpacks the image (func_80074A9C) instead of starting a new game,
//   re-initialises the game systems and starts the saved area.
// - func_800292E8(fn) restarts the calling thread's process at fn; the process slots are
//   0x1C8-byte records at 0x801BB930, indexed by 0x36 - thread priority.
// Both run on the main game thread: requests are carried out from the HUD gauge pass
// (mm64_savestate_hud_pass, called by the func_80049204 override in mm64_patches.cpp), which
// gameplay runs every frame on that thread.

#include "mm64_savestate.h"

#include <atomic>
#include <cstdint>
#include <cstdio>
#include <cstddef>
#include <cstring>
#include <sys/stat.h>

#include "mm64_game.h"
#include "mm64_ext.h"
#include "recomp.h"

extern "C" void func_800740B0_4F4B0(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_800743A8_4F7A8(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_800292E8_46E8(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80074A9C_4FE9C(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80073F90_4F390(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8004C500_27900(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80069A40_44E40(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_800601D0_3B5D0(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80072110_4D510(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8004A5BC_259BC(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8004BE1C_2721C(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80061090_3C490(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_8002A2AC_56AC(uint8_t* rdram, recomp_context* ctx);
extern "C" void func_80061724_3CB24(uint8_t* rdram, recomp_context* ctx);
extern "C" void osGetThreadPri_recomp(uint8_t* rdram, recomp_context* ctx);
extern "C" { extern volatile bool mm64_scene_bypass; } // mm64_game.cpp: keep the opening reorder out of loads

namespace {

constexpr uint32_t save_image = 0x80193C70;
constexpr uint32_t save_image_size = 0x1800;
constexpr uint32_t area_byte = 0x801BC438;
constexpr uint32_t main_loop = 0x8003E1B8;      // gameplay main loop (area changes restart it)
constexpr uint32_t reload_flag = 0x801BC46A;    // cleared by area changes (func_8005D6F4)
// Mega Man's position in the player struct (0x802049B0): x, z, y as s16 at +0x14 and as 16.16
// fixed point at +0x1C, then the same again for the previous frame at +0x2C; yaw (s16) at +0x56.
// Loading restarts the area at its entrance, so they're written back once it's running.
constexpr uint32_t player_position = 0x802049C4;
constexpr uint32_t player_position_size = 0x30;
constexpr uint32_t player_yaw = 0x80204A06;
constexpr char magic[8] = { 'M', 'M', '6', '4', 'S', 'S', '2', 0 };

struct SlotFile {
    char magic[8];
    uint32_t version;
    int32_t area;
    char area_name[32];
    int64_t saved;
    uint8_t position[player_position_size]; // RDRAM bytes as stored by the runtime (word-swapped)
    int16_t yaw;
    int16_t pad;
    uint8_t image[save_image_size]; // RDRAM bytes as stored by the runtime (word-swapped)
    Mm64Ext ext;                    // version 3: the port's per-save data (mm64_ext.h)
};

char data_dir[128];
SlotFile pending;                  // image being saved or loaded
std::atomic<int> request{ 0 };     // 0 none, 1 save, 2 load (set by the UI), 3 load armed for load_process
int load_process = -1;
int warp_area = -1, warp_room = 0; // development: area change without a save image (mm64_debug_warp)
std::atomic<int> request_slot{ 0 };
std::atomic<bool> save_ready{ false }; // the game thread filled `pending`; the UI thread writes it
std::atomic<int> status{ MM64_SAVESTATE_IDLE };
int position_pending = 0; // HUD passes to wait before restoring the position after a load (0 = none)

void slot_path(int slot, char* out, size_t size) {
    snprintf(out, size, "%s/slot%d.bin", data_dir, slot + 1);
}

bool read_slot(int slot, SlotFile* out) {
    char path[160];
    slot_path(slot, path, sizeof(path));
    FILE* f = fopen(path, "rb");
    if (!f) return false;
    // Version 2 slots (before the per-save data) still load; they leave it as it is.
    memset(&out->ext, 0, sizeof(out->ext));
    size_t n = fread(out, 1, sizeof(*out), f);
    bool ok = memcmp(out->magic, magic, sizeof(magic)) == 0 &&
        ((out->version == 2 && n >= offsetof(SlotFile, ext)) || (out->version == 3 && n == sizeof(*out)));
    fclose(f);
    return ok;
}

// Calls a recompiled function on the game thread without disturbing the caller's registers.
void call_game(uint8_t* rdram, recomp_context* ctx, void (*fn)(uint8_t*, recomp_context*)) {
    recomp_context saved = *ctx;
    fn(rdram, ctx);
    *ctx = saved;
}

void copy_from_rdram(uint8_t* rdram, uint8_t* out) {
    memcpy(out, rdram + (save_image - 0x80000000), save_image_size); // word-aligned, kept as stored
}

void copy_to_rdram(uint8_t* rdram, const uint8_t* in) {
    memcpy(rdram + (save_image - 0x80000000), in, save_image_size);
}

} // namespace

extern "C" void mm64_savestate_init(const char* data_path) {
    snprintf(data_dir, sizeof(data_dir), "%s/savestates", data_path);
    mkdir(data_dir, 0777);
}

extern "C" bool mm64_slot_info(int slot, Mm64SlotInfo* out) {
    // Slot headers are small; the UI caches them (bottom_ui.c), so reading here is fine.
    memset(out, 0, sizeof(*out));
    char path[160];
    slot_path(slot, path, sizeof(path));
    FILE* f = fopen(path, "rb");
    if (!f) return false;
    SlotFile header;
    size_t header_size = offsetof(SlotFile, image);
    bool ok = fread(&header, 1, header_size, f) == header_size && memcmp(header.magic, magic, sizeof(magic)) == 0;
    fclose(f);
    if (!ok) return false;
    out->used = true;
    snprintf(out->area_name, sizeof(out->area_name), "%s", header.area_name);
    out->saved = (time_t)header.saved;
    return true;
}

extern "C" bool mm64_request_save(int slot) {
    if (slot < 0 || slot >= MM64_SAVE_SLOTS || request.load() != 0) return false;
    request_slot = slot;
    status = MM64_SAVESTATE_WAITING;
    request = 1;
    return true;
}

extern "C" bool mm64_request_load(int slot) {
    if (slot < 0 || slot >= MM64_SAVE_SLOTS || request.load() != 0) return false;
    if (!read_slot(slot, &pending)) {
        status = MM64_SAVESTATE_FAILED;
        return false;
    }
    request_slot = slot;
    status = MM64_SAVESTATE_WAITING;
    request = 2;
    return true;
}

extern "C" Mm64SaveStateStatus mm64_savestate_status(void) {
    return (Mm64SaveStateStatus)status.load();
}

// Development: a real game save to flash slot `slot`, as the game's own save menu does it
// (func_80073F90(0, name_table[slot], save image, 0x1800); the names are at 0x800B45E0).
extern "C" bool mm64_debug_game_save(int slot) {
    if (request.load() != 0) return false;
    request_slot = slot;
    request = 5; // carried out in the HUD pass
    return true;
}

extern "C" bool mm64_debug_warp(int area, int room) {
    if (request.load() != 0) return false;
    warp_area = area;
    warp_room = room;
    request = 2; // armed in the HUD pass like a load
    return true;
}

extern "C" void mm64_savestate_cancel(void) {
    int r = request.load();
    if ((r == 1 || r == 2) && request.compare_exchange_strong(r, 0)) status = MM64_SAVESTATE_IDLE;
}

extern "C" void mm64_savestate_update(void) {
    if (!save_ready.load()) return;
    char path[160];
    slot_path(request_slot.load(), path, sizeof(path));
    FILE* f = fopen(path, "wb");
    bool ok = f && fwrite(&pending, 1, sizeof(pending), f) == sizeof(pending);
    if (f) fclose(f);
    fprintf(stderr, "[savestate] saved slot %d (%s): %s\n", request_slot.load() + 1, pending.area_name, ok ? "ok" : "write failed");
    save_ready = false;
    status = ok ? MM64_SAVESTATE_DONE : MM64_SAVESTATE_FAILED;
    request = 0;
}

// Game thread, during gameplay's HUD pass.
extern "C" void mm64_savestate_hud_pass(uint8_t* rdram, recomp_context* ctx) {
    if (position_pending > 0 && --position_pending == 0) {
        memcpy(rdram + (player_position - 0x80000000), pending.position, player_position_size);
        MEM_H(0, (int32_t)player_yaw) = pending.yaw;
        fprintf(stderr, "[savestate] position restored\n");
    }
    int r = request.load();
    if (r == 5) {
        call_game(rdram, ctx, func_800740B0_4F4B0);
        call_game(rdram, ctx, func_800743A8_4F7A8);
        recomp_context saved = *ctx;
        ctx->r4 = 0;
        ctx->r5 = (gpr)(int32_t)MEM_W(0, (int32_t)(0x800B45E0 + 4 * request_slot.load()));
        ctx->r6 = (gpr)(int32_t)save_image;
        ctx->r7 = save_image_size;
        func_80073F90_4F390(rdram, ctx);
        *ctx = saved;
        fprintf(stderr, "[savestate] development: game saved to flash slot %d\n", request_slot.load());
        request = 0;
        return;
    }
    if ((r != 1 && r != 2 && r != 4) || save_ready.load()) return;
    if (r == 1) {
        call_game(rdram, ctx, func_800740B0_4F4B0);
        call_game(rdram, ctx, func_800743A8_4F7A8);
        memcpy(pending.magic, magic, sizeof(magic));
        pending.version = 3;
        pending.ext = *mm64_ext();
        memcpy(pending.position, rdram + (player_position - 0x80000000), player_position_size);
        pending.yaw = MEM_H(0, (int32_t)player_yaw);
        Mm64Location loc;
        pending.area = MEM_BU(0, (int32_t)area_byte);
        snprintf(pending.area_name, sizeof(pending.area_name), "%s", mm64_get_location(&loc) ? loc.area_name : "?");
        pending.saved = (int64_t)time(nullptr);
        copy_from_rdram(rdram, pending.image);
        save_ready = true; // written to the SD card by mm64_savestate_update on the UI thread
        return;
    }
    // Load (and warp): armed here, carried out by the same process at the start of its next frame.
    recomp_context saved = *ctx;
    ctx->r4 = 0;
    osGetThreadPri_recomp(rdram, ctx);
    load_process = 0x36 - (int32_t)ctx->r2;
    *ctx = saved;
    request = 3;
}

// Game thread: a process starts its next frame (func_80029114 override in mm64_patches.cpp).
extern "C" void mm64_savestate_frame_start(uint8_t* rdram, recomp_context* ctx, int process) {
    if (request.load() != 3 || process != load_process) return;
    if (warp_area >= 0) {
        // Development warp: like an area change (func_8005D4CC / func_8005D6F4) to warp_area/room.
        fprintf(stderr, "[savestate] warp to area %d room %d\n", warp_area, warp_room);
        request = 0;
        MEM_B(0, (int32_t)area_byte) = (int8_t)warp_area;
        MEM_B(1, (int32_t)area_byte) = (int8_t)warp_room;
        warp_area = -1;
        recomp_context saved = *ctx;
        ctx->r4 = 0;
        func_80061724_3CB24(rdram, ctx);
        *ctx = saved;
        MEM_B(0, (int32_t)reload_flag) = 0;
        ctx->r4 = (int32_t)main_loop;
        mm64_scene_bypass = true;
        func_800292E8_46E8(rdram, ctx); // doesn't return
    }
    // Settled before anything runs: the restart below waits a few frames in this same hook, and it
    // never returns (func_800292E8 ends this thread; the game starts a new one for the process).
    request = 0;
    status = MM64_SAVESTATE_DONE;
    fprintf(stderr, "[savestate] loading slot %d (%s)\n", request_slot.load() + 1, pending.area_name);
    // The image goes where the game's flash load puts it and is applied the way the title's
    // Continue does (func_8003E2F0 unpacks it); then, like an area change (func_8005D6F4), the
    // stage is let go (func_80061724) and the main loop restarts into the saved area.
    copy_to_rdram(rdram, pending.image);
    if (pending.version >= 3) mm64_ext_set(&pending.ext);
    position_pending = 3; // restored on the third HUD pass of the reloaded area
    auto call_with = [&](void (*fn)(uint8_t*, recomp_context*), int32_t a0) {
        recomp_context saved = *ctx;
        ctx->r4 = a0;
        fn(rdram, ctx);
        *ctx = saved;
    };
    call_with(func_80074A9C_4FE9C, 0);
    call_with(func_80069A40_44E40, 1);
    call_with(func_80061724_3CB24, 0);
    MEM_B(0, (int32_t)reload_flag) = 0;
    ctx->r4 = (int32_t)main_loop;
    mm64_scene_bypass = true;
    func_800292E8_46E8(rdram, ctx); // doesn't return
}
