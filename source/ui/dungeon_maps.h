#ifndef DUNGEON_MAPS_H
#define DUNGEON_MAPS_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// Area maps for the Map tab's map view: one entry per map, for an area of the game (and a room of it,
// for areas whose rooms have maps of their own). Dungeon maps follow the Dig Scan rules: one Dig Scan
// per dungeon map, found only inside it; owning it shows the map's loot, and owning any adds the Map
// Binder to the Special Items. Maps of towns and fields are always shown, without loot.
typedef struct {
    const char* name;
    int area;    // the game's area number
    int room;    // -1: every room of the area
    int map;     // index into the map table (bottom_ui.c: map_defs)
    bool dungeon;
} DungeonInfo;
#define DUNGEON_COUNT 11
extern const DungeonInfo dungeon_list[DUNGEON_COUNT];

int dungeon_for_place(int area, int room); // -1: no map here
bool dungeon_map_owned(int id);
bool dungeon_maps_any(void); // the Map Binder
void dungeon_map_grant(int id);

#ifdef __cplusplus
}
#endif

#endif
