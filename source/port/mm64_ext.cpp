// Per-save data of the port (see mm64_ext.h).
//
// The game keeps each save in a 0x2000-byte slot of its flash: slot N at offset N * 0x2000 (two
// slots per 0x4000 sector), the 0x1800-byte save image at +0, a 0x20-byte name at +0x1900 (and the
// options at +0x1A00 in slot 0). The rest is unused; this data goes at +0x1C00. Saving
// (func_800875E8, which takes the slot number as the digits at name[4..5]) reads the whole sector,
// changes its slot and writes the sector back, so data put there first survives.

#include "mm64_ext.h"

#include <cstdio>
#include <cstring>

#include "recomp.h"
#include "recomp_3ds.hpp"
#include "dungeon_maps.h"

extern "C" uint32_t recomp_save_size(void);
extern "C" void recomp_save_read_ptr(void* out, uint32_t offset, uint32_t count);
extern "C" void recomp_save_write_ptr(const void* in, uint32_t offset, uint32_t count);

namespace {
constexpr uint32_t ext_magic = 0x5834364D; // "M64X"
constexpr uint16_t ext_version = 1;
constexpr uint32_t slot_size = 0x2000;
constexpr uint32_t ext_offset = 0x1C00;
constexpr uint32_t save_image = 0x80193C70;
constexpr uint32_t save_image_size = 0x1800;
static_assert(sizeof(Mm64Ext) <= slot_size - ext_offset, "per-save data too big for the slot's tail");

Mm64Ext live;
volatile int settle_frames = 120;
int found_map = -1; // see mm64_ext_take_found_map // counting waits after loads and room changes (see mm64_ext_tick)

void blank(Mm64Ext* e) {
    memset(e, 0, sizeof(*e));
    e->magic = ext_magic;
    e->version = ext_version;
    e->size = sizeof(Mm64Ext);
}

bool valid(const Mm64Ext* e) {
    return e->magic == ext_magic && e->version >= 1 && e->size >= offsetof(Mm64Ext, kills);
}
}

extern "C" Mm64Ext* mm64_ext(void) {
    if (live.magic != ext_magic) blank(&live);
    return &live;
}

extern "C" void mm64_ext_reset(void) {
    blank(&live);
    settle_frames = 120;
    fprintf(stderr, "[ext] new game: per-save data cleared\n");
}

extern "C" void mm64_ext_set(const Mm64Ext* in) {
    if (!valid(in)) return;
    settle_frames = 120;
    blank(&live);
    memcpy(&live, in, in->size < sizeof(live) ? in->size : sizeof(live));
    live.size = sizeof(live);
    fprintf(stderr, "[ext] per-save data set (dungeon maps %lx)\n", (unsigned long)live.dungeon_maps);
}

// Hook at the start of func_800875E8 (recomp/us.rev1.3ds.toml): $a0 is the save's name.
extern "C" void mm64_on_game_save(uint8_t* rdram, recomp_context* ctx) {
    int slot = (MEM_BU(ctx->r4, 4) - '0') * 10 + (MEM_BU(ctx->r4, 5) - '0');
    if (slot < 0 || (slot + 1) * slot_size > recomp_save_size()) return;
    recomp_save_write_ptr(mm64_ext(), slot * slot_size + ext_offset, sizeof(Mm64Ext));
    fprintf(stderr, "[ext] game saved to slot %d: per-save data stored\n", slot);
}

// The game read the chosen save into its save image before unpacking it: find the slot holding the
// same image (RDRAM is stored word-swapped; flash is in N64 byte order).
extern "C" void mm64_ext_on_continue(void) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return;
    static uint8_t image[save_image_size], slot_image[save_image_size];
    for (uint32_t i = 0; i < save_image_size; i++) image[i] = rdram[((save_image & 0xFFFFFF) + i) ^ 3];
    uint32_t slots = recomp_save_size() / slot_size;
    for (uint32_t s = 0; s < slots; s++) {
        recomp_save_read_ptr(slot_image, s * slot_size, save_image_size);
        if (memcmp(image, slot_image, save_image_size) != 0) continue;
        Mm64Ext e;
        recomp_save_read_ptr(&e, s * slot_size + ext_offset, sizeof(e));
        if (valid(&e)) mm64_ext_set(&e);
        else blank(&live); // saved before the port kept its own data
        settle_frames = 120;
        fprintf(stderr, "[ext] continue from slot %u: per-save data %s\n", s, valid(&e) ? "loaded" : "empty");
        return;
    }
    fprintf(stderr, "[ext] continue: no flash slot matches the loaded save; per-save data kept\n");
}

// Zenny Earned and Reaverbots defeated, from what the game does:
// - Zenny: the word at 0x801BC404 (shown x10); every increase is Zenny picked up (or sold for).
// - Enemies: slots 0-7 of the actor table at 0x801FFBE0 (0x3C8 bytes each). A slot in use has 3 in
//   byte 2; byte 0 is 3 while its enemy lives and drops to 0 when it's defeated (it stays 0 until the
//   slot is reused). The word at +0x78 points at the enemy's descriptor in the area's code.
// Loads, new games and room changes rewrite all of this, so counting waits a couple of seconds
// after each (changes then are not pickups or defeats).
extern "C" int mm64_ext_take_found_map(void) {
    int id = found_map;
    found_map = -1;
    return id;
}

extern "C" void mm64_ext_tick(void) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return;
    auto byte = [&](uint32_t a) { return rdram[(a & 0xFFFFFF) ^ 3]; };
    auto word = [&](uint32_t a) { return *reinterpret_cast<uint32_t*>(rdram + (a & 0xFFFFFF)); };
    constexpr uint32_t zenny = 0x801BC404, area_room = 0x801BC438, slots = 0x801FFBE0, slot_size = 0x3C8;
    static uint32_t last_zenny;
    static uint8_t last_alive[8];
    static int last_area = -1, last_room = -1;
    Mm64Ext* e = mm64_ext();
    int area = byte(area_room), room = byte(area_room + 1);
    if (area != last_area || room != last_room) settle_frames = 120;
    last_area = area;
    last_room = room;
    uint32_t z = word(zenny);
    uint8_t alive[8];
    for (int i = 0; i < 8; i++) alive[i] = byte(slots + i * slot_size + 2) == 3 ? byte(slots + i * slot_size) : 0;
    if (settle_frames > 0) {
        settle_frames = settle_frames - 1;
    } else {
        if (z > last_zenny && z - last_zenny < 100000) e->zenny_earned += (z - last_zenny) * 10;
        // The Prologue Ruins' Dig Scan is in the chest with the 580 Zenny (the game counts Zenny in
        // tens: +58), next to the Power Raiser's chest. Every Zenny gain there is logged, to check it.
        if (area == 0 && z > last_zenny) {
            fprintf(stderr, "[ext] Zenny +%lu in area 0 room %d\n", (unsigned long)(z - last_zenny) * 10, room);
            if (z - last_zenny == 58 && !dungeon_map_owned(0)) {
                dungeon_map_grant(0);
                found_map = 0;
                fprintf(stderr, "[ext] Dig Scan found: Ocean Tower\n");
            }
        }
        for (int i = 0; i < 8; i++) {
            if (last_alive[i] != 3 || alive[i] != 0) continue;
            uint32_t desc = word(slots + i * slot_size + 0x78);
            Mm64Kill* k = nullptr;
            for (Mm64Kill& c : e->kills) {
                if (c.used && c.area == area && c.desc == desc) { k = &c; break; }
            }
            for (Mm64Kill& c : e->kills) {
                if (!k && !c.used) { k = &c; k->used = 1; k->area = (uint8_t)area; k->desc = desc; }
            }
            if (k && k->count < 0xFFFF) k->count++;
            e->kills_total++;
            fprintf(stderr, "[ext] Reaverbot defeated: area %d kind %08lX (total %lu)\n", area, (unsigned long)desc, (unsigned long)e->kills_total);
        }
    }
    last_zenny = z;
    memcpy(last_alive, alive, sizeof(alive));
}
