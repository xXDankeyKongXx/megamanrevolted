#include "dungeon_maps.h"

#include "mm64_ext.h"

// Ids are saved (Dig Scans owned, map drawings): new maps go at the end.
const DungeonInfo dungeon_list[DUNGEON_COUNT] = {
    { "Ocean Tower", 0, -1, 0, true },             // the opening Reaverbot dungeon
    { "Cardon Forest Sub-Gate", 14, -1, 1, true }, // area 14 ("Cardon Ruins")
    { "Clozer Woods Sub-Gate", 19, -1, 2, true },  // area 19 ("Clozer Ruins")
    { "Lake Jyun Sub-Gate", 20, -1, 3, true },     // area 20 ("Lake Ruins")
    { "Main Gate", 26, -1, 4, true },
    { "City Hall", 6, -1, 5, false },              // the district around City Hall (town: always shown)
    { "Lake Jyun", 13, -1, 6, false },             // area 13 ("Boat Shop": the lakeside walkway)
    // City Hall area's buildings (area 15, by room).
    { "Police Station", 15, 0, 7, false },
    { "City Hall", 15, 2, 8, false },
    { "Bank", 15, 3, 9, false },
    // The Underground Ruins: one map for all its zones (area 9's rooms), with the zones' loot.
    { "Underground Ruins", 9, -1, 10, true },
};

int dungeon_for_place(int area, int room) {
    for (int i = 0; i < DUNGEON_COUNT; i++) {
        if (dungeon_list[i].area == area && (dungeon_list[i].room < 0 || dungeon_list[i].room == room)) return i;
    }
    return -1;
}

// Owned maps are part of the per-save data (mm64_ext.h): kept with each game save and save state.
bool dungeon_map_owned(int id) {
    return id >= 0 && id < DUNGEON_COUNT && dungeon_list[id].dungeon && (mm64_ext()->dungeon_maps >> id & 1);
}

bool dungeon_maps_any(void) {
    return mm64_ext()->dungeon_maps != 0;
}

void dungeon_map_grant(int id) {
    if (id < 0 || id >= DUNGEON_COUNT) return;
    mm64_ext()->dungeon_maps |= 1u << id;
}
