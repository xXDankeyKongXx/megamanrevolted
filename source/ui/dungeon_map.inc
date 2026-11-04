// Dungeon map of the opening Reaverbot dungeon (Ocean Tower, area 0) for the Map tab
// (tools/make_dungeon_map.py). Pixels: romfs/maps/ocean_tower_<level>.bin, 256x256 RGBA8 tiles.
// Map pixels (all coordinates here): the map is OCEAN_TOWER_W x OCEAN_TOWER_H.
#define OCEAN_TOWER_W 958
#define OCEAN_TOWER_H 512
// Map pixels per source pixel, and the crop origin in the source image (for calibration).
#define OCEAN_TOWER_SCALE 0.385203f
#define OCEAN_TOWER_X0 308
#define OCEAN_TOWER_Y0 959
// Levels, finest first: size in texels, tiles across and down, texels per map pixel, and where
// its tiles start in ocean_tower_tile_slots.
typedef struct { short w, h, cols, rows; float texels; short first; } MapLevel;
#define OCEAN_TOWER_LEVELS 4
static const MapLevel ocean_tower_levels[OCEAN_TOWER_LEVELS] = {
    { 2487, 1328, 10, 6, 2.596033f, 0 },
    { 1244, 664, 5, 3, 1.298539f, 60 },
    { 622, 332, 3, 2, 0.649269f, 75 },
    { 311, 166, 2, 1, 0.324635f, 81 },
};
// Each tile's place in its level's file, row by row; -1: fully transparent, not stored.
static const signed char ocean_tower_tile_slots[] = {
    0, 1, 2, 3, 4, 5, -1, -1, -1, -1, 6, 7, 8, 9, 10, 11, 12, 13, -1, -1, 14, 15, 16, 17, 18, 19, 20, 21, 22, -1, 23, 24, -1, 25, 26, 27, 28, 29, 30, 31, -1, -1, -1, -1, 32, 33, 34, 35, 36, -1, -1, -1, -1, -1, -1, -1, 37, -1, -1, -1, 0, 1, 2, 3, -1, 4, 5, 6, 7, 8, -1, -1, 9, 10, 11, 0, 1, 2, -1, 3, 4, 0, 1,
};
// Loot shown on the original map, hidden until the dungeon's Dig Scan is found (map pixels).
typedef struct { const char* name; float x, y; } DungeonLoot;
static const DungeonLoot ocean_tower_loot[] = {
    { "Zenny", 503.8f, 63.6f },
    { "Blue Refractor", 517.7f, 131.4f },
    { "Power Raiser", 40.1f, 274.6f },
    { "580 Zenny", 78.6f, 294.7f },
};
