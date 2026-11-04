#include "bottom_ui.h"

#include <citro2d.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#include "c3d_backend.h"
#include "mm64_game.h"
#include "mm64_savestate.h"
#include "notes.h"

#ifndef MM64_VERSION
#define MM64_VERSION "dev"
#endif

#define SCREEN_W 320
#define SCREEN_H 240
#define TAB_H 32

typedef enum { PAGE_INVENTORY, PAGE_MAP, PAGE_STATUS, PAGE_NOTES, PAGE_SYSTEM, PAGE_COUNT } Page;
static const char* const page_names[PAGE_COUNT] = { "Inventory", "Map", "Status", "Notes", "System" };
// The first four pages have text tabs; the System page (save states, restart, quit) opens from the
// button with Data (the save monkey) dancing at the right end of the tab bar.
#define TEXT_TABS 4
#define TAB_W 70.0f

// Palette
#define COL_BG        C2D_Color32(0x0F, 0x17, 0x2A, 0xFF)
#define COL_PANEL     C2D_Color32(0x1E, 0x29, 0x3B, 0xFF)
#define COL_GLASS     C2D_Color32(0x08, 0x0E, 0x2A, 0xA8) // translucent panel over the background
#define COL_BORDER    C2D_Color32(0x7D, 0xA2, 0xE8, 0xFF)
#define COL_TAB       C2D_Color32(0x1E, 0x3A, 0x8A, 0xFF)
#define COL_ACCENT    C2D_Color32(0x3B, 0x82, 0xF6, 0xFF)
#define COL_DANGER    C2D_Color32(0xDC, 0x26, 0x26, 0xFF)
#define COL_TEXT      C2D_Color32(0xFF, 0xFF, 0xFF, 0xFF)
#define COL_MUTED     C2D_Color32(0x94, 0xA3, 0xB8, 0xFF)

typedef struct {
    float x, y, w, h;
} Rect;

static bool hit(Rect r, int px, int py) {
    return px >= r.x && px < r.x + r.w && py >= r.y && py < r.y + r.h;
}

// Notes page layout
static const Rect btn_prev = { 8, 40, 40, 28 };
static const Rect btn_next = { 272, 40, 40, 28 };
static const Rect text_box = { 8, 92, 304, 86 };
static const Rect btn_new = { 8, 184, 96, 26 };
static const Rect btn_edit = { 112, 184, 96, 26 };
static const Rect btn_delete = { 216, 184, 96, 26 };

// System page: the Data button, the main menu (2x2), slot lists for Save and Load.
static const Rect data_button = { 4 * TAB_W, 0, SCREEN_W - 4 * TAB_W, TAB_H };
static Rect system_button(int i) { Rect r = { 16 + (i % 2) * 148.0f, 72 + (i / 2) * 64.0f, 140, 56 }; return r; }
static Rect slot_row(int i) { Rect r = { 16, 66 + i * 44.0f, 288, 40 }; return r; }
static const Rect btn_back = { 16, 202, 80, 26 };
// Data page, along the bottom: the credits (on the top screen) and the display and sound settings.
static const Rect btn_credits = { 8, 200, 80, 28 };
static const Rect btn_widescreen = { 92, 200, 112, 28 };
static const Rect btn_sound = { 208, 200, 104, 28 };

// Settings kept across restarts (DATA_PATH/settings.txt, "name value" lines).
extern volatile bool n64_widescreen; // n64_renderer.cpp
static bool sound_surround;            // the DSP's virtual surround instead of plain stereo
static char settings_path[160];

static void settings_load(void) {
    FILE* f = fopen(settings_path, "r");
    if (!f) return;
    char name[32];
    int value;
    while (fscanf(f, "%31s %d", name, &value) == 2) {
        if (strcmp(name, "widescreen") == 0) n64_widescreen = value != 0;
        if (strcmp(name, "surround") == 0) sound_surround = value != 0;
    }
    fclose(f);
    mm64_set_surround(sound_surround);
}

static void settings_save(void) {
    FILE* f = fopen(settings_path, "w");
    if (!f) return;
    fprintf(f, "widescreen %d\n", n64_widescreen ? 1 : 0);
    fprintf(f, "surround %d\n", sound_surround ? 1 : 0);
    fclose(f);
}
typedef enum { SYS_MENU, SYS_SAVE, SYS_LOAD } SystemView;
static SystemView sys_mode;
static int sys_confirm = -1;        // menu button (2 restart, 3 quit) or slot waiting for a second tap
static char sys_message[64];
static u32 sys_message_until;
static int sys_busy_slot = -1;      // slot of the save/load in progress
static u32 sys_busy_since;
static Mm64SlotInfo slots[MM64_SAVE_SLOTS];
static BottomUiAction pending_action;

// HUD column (Inventory and Status pages): the game's life and weapon-energy gauges, moved here
// from the top screen, side by side as in the game.
static const Rect hud_panel = { 4, TAB_H + 4, 80, 170 };

// Inventory page layout, right of the HUD column: the Zenny box, section buttons, then the
// section's items like the game's start menu: Special Items as its icon grid, the others as a
// two-column list. The selected item's name and description go in the panel along the bottom.
#define INV_ROWS 6
#define INV_PER_SCREEN (INV_ROWS * 2)
static const char* const section_names[MM64_ITEM_SECTIONS] = { "Items", "Special", "Buster", "Weapons" };
static const Rect content = { 88, TAB_H + 4, 228, 170 };
static const Rect inv_list = { 90, 92, 224, 86 };   // two columns, the game font's names need the room
static const Rect inv_up = { 160, 181, 36, 22 };    // previous / next page, under the list
static const Rect inv_down = { 244, 181, 36, 22 };
static const Rect inv_desc = { 4, 208, SCREEN_W - 8, 30 };
static Rect section_button(int i) { Rect r = { 90 + i * 56.0f, 68, 53, 20 }; return r; }
static Mm64ItemSection inv_section = MM64_ITEMS_NORMAL;
static int inv_scroll;
static int inv_selected[MM64_ITEM_SECTIONS]; // list index, or grid slot for Special Items
// The Map Binder (this port's own Special Item, owned once any dungeon map is found): the slot
// after the game's 18; selecting it opens the list of dungeon maps found.
#define BINDER_SLOT 18
static bool binder_open;
static const Rect binder_back = { 88 + 228 - 52, 94, 46, 16 };
static Rect binder_row(int i) { Rect r = { 94, 114 + i * 22.0f, 220, 20 }; return r; }

// Special Items grid: the game's 18 slots in its order (start menu message order), each one item or
// a group shown with a count (jackets are upgrades of one slot; keys and ID cards come in threes).
#define GRID_COLS 6
#define GRID_CELL 28.0f
static const unsigned char special_slots[18][3] = {
    { 40 }, { 36 }, { 38 }, { 37 }, { 62, 63, 64 }, { 42 },
    { 43 }, { 44 }, { 45 }, { 46 }, { 47 }, { 48 },
    { 65 }, { 49 }, { 50, 51, 52 }, { 53, 54, 55 }, { 56, 57, 58 }, { 59, 60, 61 },
};
static Rect grid_cell(int slot) {
    Rect r = { content.x + (content.w - GRID_COLS * GRID_CELL) / 2 + (slot % GRID_COLS) * GRID_CELL, 92 + (slot / GRID_COLS) * GRID_CELL, GRID_CELL, GRID_CELL };
    return r;
}
#include "item_text.inc"

// Map page: three views, chosen with buttons along its top.
typedef enum { MAP_MINI, MAP_WORLD, MAP_DUNGEON, MAP_VIEWS } MapView;
static const char* const map_view_names[MAP_VIEWS] = { "Mini Map", "World Map", "Dungeon" };
static MapView map_view = MAP_WORLD;
static Rect map_view_button(int i) { Rect r = { 92 + i * 74.0f, TAB_H + 6, 70, 18 }; return r; }
static const Rect map_area = { 90, TAB_H + 28, 224, 144 };
static const Rect map_zoom_out = { 90 + 224 - 46, TAB_H + 30, 20, 18 };
static const Rect map_zoom_in = { 90 + 224 - 23, TAB_H + 30, 20, 18 };
// Dungeon view: zoom (screen pixels per map pixel; 0 = not set yet), the map point at the centre.
static const float dungeon_zooms[] = { 0.0f, 0.35f, 0.5f, 0.75f, 1.0f, 1.5f, 2.6f }; // [0] = whole map; 2.6 = the original's pixels
static int dungeon_zoom = 1;
static int dungeon_shown = -1; // chosen in the Map Binder: shown when Mega Man is not in a dungeon
static float dungeon_cx = -1, dungeon_cy = -1; // -1: centre on Mega Man
// World view: zoom (screen pixels per world-map pixel) and the map point at the centre.
static const float world_zooms[] = { 1.0f, 1.6f, 2.4f, 3.3f }; // [0] = whole map, 1:1
static int world_zoom;
static float world_cx = -1, world_cy = -1; // -1: centre on Mega Man's area
static bool map_drag;
static int drag_x, drag_y;
// Dungeon view drawing: with the pen on, dragging draws instead of scrolling. Strokes are kept in
// map pixels (they zoom and scroll with the map), one drawing per dungeon, saved to
// DATA_PATH/drawing_<dungeon>.bin when leaving the view. A point with x = 0xFFFF ends a stroke.
#define DRAW_POINTS 8192
typedef struct { u16 x, y; } DrawPoint;
static DrawPoint drawing[DRAW_POINTS];
static int drawing_count;
static int drawing_dungeon = -1; // whose drawing is loaded
static bool drawing_dirty, pen_on, pen_down, clear_armed;
static float pen_last_x, pen_last_y;
static char data_dir[96];
static const Rect pen_btn = { 192, TAB_H + 28 + 144 - 20, 34, 18 };
static const Rect undo_btn = { 228, TAB_H + 28 + 144 - 20, 38, 18 };
static const Rect clear_btn = { 268, TAB_H + 28 + 144 - 20, 44, 18 };
// The Map page's view, zooms and positions are kept across visits and restarts (DATA_PATH/map_view.txt).
static char map_prefs_path[128];
static bool map_prefs_dirty;

static C2D_TextBuf text_buf;
static C2D_TextBuf measure_buf; // scratch for measuring text while wrapping
static C2D_TextBuf cache_buf;   // parsed text kept across frames (see get_text)
// The Notes page can be closed (0): it then dims down over a quarter second, shows "Coming Soon!"
// and ignores touches. It was closed in v29 while opening the system keyboard crashed the CIA on
// the New 3DS (the CIA didn't map VRAM, which the keyboard launch reads; fixed in assets/cia.rsf).
#define NOTES_ENABLED 1
static float notes_opened_at;
static void draw_notes_coming_soon(void);
// Credits (Data page button): they scroll up the top screen in the game font while the game waits;
// SELECT returns. Lines starting with '#' are headings.
static bool credits_open;
static float credits_started;
static const char* const credits_lines[] = {
    "#MEGA MAN 64 3DS",
    "A port of Mega Man 64",
    "to the New Nintendo 3DS",
    "",
    "#Original Game",
    "Mega Man 64",
    "Capcom",
    "Game graphics, font, icons,",
    "sounds and music: Capcom",
    "",
    "#Port",
    "Dankey Kong",
    "with Claude (Anthropic)",
    "",
    "#Recompilation",
    "N64: Recompiled",
    "Mr-Wiseguy and contributors",
    "N64 Modern Runtime",
    "N64Recomp contributors",
    "Mega Man 64: Recompiled,",
    "symbols and decompilation",
    "MegaMan64Recomp team",
    "Mobile port reference",
    "DevZer0D4Y",
    "",
    "#Maps and Art",
    "Ocean Tower dungeon map",
    "VGCartography",
    "World map illustration",
    "provided by Dankey Kong",
    "Dig Scan art",
    "provided by Dankey Kong",
    "Mega Man map icon",
    "provided by Dankey Kong",
    "HOME menu banner box art",
    "Capcom",
    "Mega Man 64 ReVolted logo",
    "provided by Dankey Kong",
    "Banner sound: Capcom logo jingle",
    "Capcom",
    "",
    "#3DS Tools and Libraries",
    "devkitPro: devkitARM, libctru,",
    "citro3d, citro2d",
    "makerom: 3DSGuy, Project CTR",
    "bannertool",
    "concurrentqueue: Cameron Desrochers",
    "Azahar emulator (testing)",
    "Python, NumPy, Pillow, PyAV,",
    "PyMuPDF (asset tools)",
    "",
    "#Thanks for playing!",
    "",
    "Not affiliated with",
    "Capcom or Nintendo.",
};

static Page page = PAGE_INVENTORY;
// Status page: the Reaverbots row opens the kill list (scrolls by dragging or with the arrows).
static const Rect kills_row = { 94, TAB_H + 88, 216, 36 };
static const Rect kill_list = { 94, TAB_H + 28, 192, 140 };
static const Rect status_back = { 88 + 228 - 52, TAB_H + 6, 46, 16 };
static const Rect status_up = { 290, TAB_H + 30, 22, 30 };
static const Rect status_down = { 290, TAB_H + 136, 22, 30 };
#define KILL_ROW_H 18.0f
static bool kills_open, kills_drag;
static float kills_scroll;
static int kills_drag_y;
static Notes notes;
static int current_note;
static bool confirm_delete;
static char notes_path[128];

// The game's start-menu background tile, as a texture for citro2d.
#include "menu_bg_tile.inc"
static C3D_Tex bg_tex;
static bool bg_ready;
// The game's ZENNY box and digits (start-menu header art).
#include "zenny_sheet.inc"
// 4x versions of the font and the ZENNY sheet (tools/make_hd_ui.py), drawn smoothly at any size.
#include "game_font_hd_bin.h"
#include "zenny_hd_bin.h"
#define HD 4
static C3D_Tex zenny_tex;
static bool zenny_ready;
// The game's Special Items icons (start-menu art).
#include "item_icons.inc"
static C3D_Tex icon_tex;
static bool icons_ready;
// Data's save dance (frames of the game's model).
#include "data_sprite.inc"
// Map tab: world map with its location bubbles, the opening dungeon's isometric map, Mega Man's head.
#include "world_map.inc"
#include "dungeon_map.inc"
// The other area maps (tools/make_maps.py), stored as ETC1A4 tiles.
typedef struct {
    const char* file; // romfs/maps/<file>_<level>.bin
    short w, h, levels;
    const MapLevel* level;
    const short* slots;
    const DungeonLoot* loot;
    short loot_count;
} AreaMapData;
#include "area_maps.inc"
// Every map: the Ocean Tower's (RGBA8 tiles, signed char slots) first, then area_map_data.
typedef struct {
    const char* file;
    float w, h;
    int levels;
    const MapLevel* level;
    const signed char* slots8;
    const short* slots16;
    const DungeonLoot* loot;
    int loot_count;
    GPU_TEXCOLOR format;
} MapDef;
#define MAP_DEFS (1 + (int)(sizeof(area_map_data) / sizeof(area_map_data[0])))
static MapDef map_defs[MAP_DEFS];
static const MapDef* cur_map = &map_defs[0]; // the map the view shows
static void map_defs_init(void) {
    map_defs[0] = (MapDef){ "ocean_tower", OCEAN_TOWER_W, OCEAN_TOWER_H, OCEAN_TOWER_LEVELS, ocean_tower_levels,
        ocean_tower_tile_slots, NULL, ocean_tower_loot, (int)(sizeof(ocean_tower_loot) / sizeof(ocean_tower_loot[0])), GPU_RGBA8 };
    for (int i = 1; i < MAP_DEFS; i++) {
        const AreaMapData* a = &area_map_data[i - 1];
        map_defs[i] = (MapDef){ a->file, a->w, a->h, a->levels, a->level, NULL, a->slots, a->loot, a->loot_count, GPU_ETC1A4 };
    }
}
static int map_slot(const MapDef* m, int index) { return m->slots8 ? m->slots8[index] : m->slots16[index]; }
#include "dig_scan_icon.inc"
#include "dungeon_maps.h"
#include "mm64_ext.h"
#include "mm64_paths.h"
#include "rom_check.h"
static C3D_Tex world_tex, bubbles_tex, dig_scan_tex;
static bool maps_ready;
static void map_tiles_release(void);
static void map_prefs_load(void);
static void map_prefs_save(void);
static void drawing_save(void);
// The world map for zoomed views (romfs/maps/world_hi.bin), read when first needed.
static C3D_Tex world_hi_tex;
static int world_hi_state; // 0 not read yet, 1 ready, -1 unavailable
// The game's text font (game_font.inc, from tools/make_game_font.py): bottom-screen text uses it.
#include "game_font.inc"
static C3D_Tex font_tex;
static bool font_ready;
static const GameGlyph* font_glyph[128];
static C3D_Tex data_tex;
static bool data_ready;

// Copies a row-major RGBA8 image into a texture in the GPU's tiled layout (8x8 tiles, Morton order).
static void swizzle_into(C3D_Tex* tex, const u32* src, int w, int h) {
    u32* dst = (u32*)tex->data;
    memset(dst, 0, tex->width * tex->height * 4);
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            int m = (x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3);
            dst[((y / 8) * (tex->width / 8) + x / 8) * 64 + m] = src[y * w + x];
        }
    }
    C3D_TexFlush(tex);
}
static u32 frame_count;
// Seconds since the UI started, for animations: they keep an even speed when a frame runs late.
static float ui_time;

void bottom_ui_init(const char* data_path) {
    text_buf = C2D_TextBufNew(4096);
    measure_buf = C2D_TextBufNew(NOTE_TEXT_MAX);
    cache_buf = C2D_TextBufNew(4096);
    snprintf(notes_path, sizeof(notes_path), "%s/notes.txt", data_path);
    snprintf(map_prefs_path, sizeof(map_prefs_path), "%s/map_view.txt", data_path);
    map_defs_init();
    snprintf(data_dir, sizeof(data_dir), "%s", data_path);
    snprintf(settings_path, sizeof(settings_path), "%s/settings.txt", data_path);
    settings_load();
    map_prefs_load();
    notes_load(&notes, notes_path);
    current_note = notes.count > 0 ? notes.count - 1 : 0;

    if (C3D_TexInit(&bg_tex, 64, 64, GPU_RGBA8)) {
        C3D_TexSetFilter(&bg_tex, GPU_NEAREST, GPU_NEAREST);
        memcpy(bg_tex.data, menu_bg_tile, sizeof(menu_bg_tile));
        C3D_TexFlush(&bg_tex);
        bg_ready = true;
    }
    // Swizzle the row-major sheet into the GPU's tiled layout (8x8 tiles in Morton order).
    if (C3D_TexInit(&zenny_tex, 1024, 64, GPU_RGBA8)) {
        C3D_TexSetFilter(&zenny_tex, GPU_LINEAR, GPU_LINEAR);
        swizzle_into(&zenny_tex, (const u32*)zenny_hd_bin, ZENNY_SHEET_W * HD, ZENNY_SHEET_H * HD);
        zenny_ready = true;
    }
    if (C3D_TexInit(&icon_tex, ITEM_ICONS_W, ITEM_ICONS_H, GPU_RGBA8)) {
        C3D_TexSetFilter(&icon_tex, GPU_LINEAR, GPU_LINEAR);
        swizzle_into(&icon_tex, item_icons, ITEM_ICONS_W, ITEM_ICONS_H);
        icons_ready = true;
    }
    if (C3D_TexInit(&data_tex, DATA_SPRITE_W, DATA_SPRITE_H, GPU_RGBA8)) {
        C3D_TexSetFilter(&data_tex, GPU_LINEAR, GPU_LINEAR);
        swizzle_into(&data_tex, data_sprite, DATA_SPRITE_W, DATA_SPRITE_H);
        data_ready = true;
    }
    // Map tab textures.
    if (C3D_TexInit(&world_tex, 256, 256, GPU_RGBA8) && C3D_TexInit(&bubbles_tex, WORLD_BUBBLES_W, WORLD_BUBBLES_H, GPU_RGBA8) &&
        C3D_TexInit(&dig_scan_tex, DIG_SCAN_ATLAS_W, DIG_SCAN_ATLAS_H, GPU_RGBA8)) {
        C3D_TexSetFilter(&dig_scan_tex, GPU_NEAREST, GPU_NEAREST); // drawn 1:1
        swizzle_into(&dig_scan_tex, dig_scan_icon, DIG_SCAN_ATLAS_W, DIG_SCAN_ATLAS_H);
        C3D_TexSetFilter(&world_tex, GPU_NEAREST, GPU_NEAREST);   // drawn 1:1
        C3D_TexSetFilter(&bubbles_tex, GPU_NEAREST, GPU_NEAREST);
        swizzle_into(&world_tex, world_map, WORLD_MAP_W, WORLD_MAP_H);
        swizzle_into(&bubbles_tex, world_bubbles, WORLD_BUBBLES_W, WORLD_BUBBLES_H);
        maps_ready = true;
    }
    // Font atlas (4x): letter bodies white, their shadow dark, so tinting colours the letters only.
    if (C3D_TexInit(&font_tex, 1024, 256, GPU_RGBA8)) {
        C3D_TexSetFilter(&font_tex, GPU_LINEAR, GPU_LINEAR);
        swizzle_into(&font_tex, (const u32*)game_font_hd_bin, GAME_FONT_W * HD, GAME_FONT_H * HD);
        for (size_t i = 0; i < sizeof(game_font_glyphs) / sizeof(game_font_glyphs[0]); i++) {
            font_glyph[(unsigned char)game_font_glyphs[i].ch] = &game_font_glyphs[i];
        }
        font_ready = true;
    }
}

void bottom_ui_exit(void) {
    C2D_TextBufDelete(text_buf);
    C2D_TextBufDelete(measure_buf);
    C2D_TextBufDelete(cache_buf);
    if (bg_ready) C3D_TexDelete(&bg_tex);
    if (zenny_ready) C3D_TexDelete(&zenny_tex);
    if (icons_ready) C3D_TexDelete(&icon_tex);
    if (data_ready) C3D_TexDelete(&data_tex);
    if (font_ready) C3D_TexDelete(&font_tex);
    map_tiles_release();
    if (map_prefs_dirty) map_prefs_save();
    drawing_save();
    if (world_hi_state > 0) C3D_TexDelete(&world_hi_tex);
    if (maps_ready) {
        C3D_TexDelete(&world_tex);
        C3D_TexDelete(&bubbles_tex);
        C3D_TexDelete(&dig_scan_tex);
    }
}

// --- Notes -------------------------------------------------------------------------------------

// Opens the system keyboard; returns true if the player confirmed. The game is paused meanwhile.
static bool edit_text(char* text, size_t size, const char* hint, bool paused) {
    if (!paused) mm64_set_paused(true);
    static char buf[NOTE_TEXT_MAX];
    SwkbdState kb;
    swkbdInit(&kb, SWKBD_TYPE_NORMAL, 2, (int)size - 1);
    swkbdSetHintText(&kb, hint);
    swkbdSetInitialText(&kb, text);
    swkbdSetFeatures(&kb, SWKBD_MULTILINE | SWKBD_PREDICTIVE_INPUT);
    swkbdSetValidation(&kb, SWKBD_NOTEMPTY_NOTBLANK, 0, 0);
    SwkbdButton button = swkbdInputText(&kb, buf, sizeof(buf));
    if (!paused) mm64_set_paused(false);
    if (button != SWKBD_BUTTON_CONFIRM) return false;
    snprintf(text, size, "%s", buf);
    return true;
}

static void new_note(bool paused) {
    if (notes.count >= NOTES_MAX) return;
    Note note = { 0 };
    // The area and time are taken when the player starts writing, i.e. where Mega Man is.
    Mm64Location loc;
    if (mm64_get_location(&loc)) {
        note.area = loc.area;
        snprintf(note.area_name, sizeof(note.area_name), "%s", loc.area_name);
    }
    note.written = time(NULL);
    if (!edit_text(note.text, sizeof(note.text), "Write a note", paused)) return;
    notes.items[notes.count] = note;
    current_note = notes.count++;
    notes_save(&notes, notes_path);
}

static void notes_touch(int px, int py, bool paused) {
    bool was_confirming = confirm_delete;
    confirm_delete = false;
    if (hit(btn_new, px, py)) {
        mm64_ui_sound(MM64_SOUND_SELECT);
        new_note(paused);
    } else if (notes.count == 0) {
        return;
    } else if (hit(btn_prev, px, py)) {
        mm64_ui_sound(MM64_SOUND_CURSOR); current_note = (current_note + notes.count - 1) % notes.count;
    } else if (hit(btn_next, px, py)) {
        mm64_ui_sound(MM64_SOUND_CURSOR); current_note = (current_note + 1) % notes.count;
    } else if (hit(btn_edit, px, py) || hit(text_box, px, py)) {
        mm64_ui_sound(MM64_SOUND_SELECT);
        Note* note = &notes.items[current_note];
        if (edit_text(note->text, sizeof(note->text), "Edit note", paused)) notes_save(&notes, notes_path);
    } else if (hit(btn_delete, px, py)) {
        mm64_ui_sound(was_confirming ? MM64_SOUND_BACK : MM64_SOUND_CURSOR);
        if (!was_confirming) {
            confirm_delete = true; // second tap deletes
            return;
        }
        memmove(&notes.items[current_note], &notes.items[current_note + 1], (notes.count - current_note - 1) * sizeof(Note));
        notes.count--;
        if (current_note >= notes.count) current_note = notes.count > 0 ? notes.count - 1 : 0;
        notes_save(&notes, notes_path);
    }
}

// --- System page ---------------------------------------------------------------------------------

static void refresh_slots(void) {
    for (int i = 0; i < MM64_SAVE_SLOTS; i++) mm64_slot_info(i, &slots[i]);
}

static void system_message(const char* text) {
    snprintf(sys_message, sizeof(sys_message), "%s", text);
    sys_message_until = frame_count + 240;
}

static void system_touch(int px, int py) {
    int was_confirming = sys_confirm;
    sys_confirm = -1;
    if (sys_busy_slot >= 0) return; // a save or load is under way
    if (sys_mode == SYS_MENU) {
        if (hit(btn_credits, px, py)) {
            mm64_ui_sound(MM64_SOUND_SELECT);
            credits_open = true;
            credits_started = ui_time;
            return;
        }
        if (hit(btn_widescreen, px, py)) {
            mm64_ui_sound(MM64_SOUND_SELECT);
            n64_widescreen = !n64_widescreen; // from the game's next frame
            settings_save();
            return;
        }
        if (hit(btn_sound, px, py)) {
            sound_surround = !sound_surround;
            mm64_set_surround(sound_surround);
            mm64_ui_sound(MM64_SOUND_SELECT); // heard in the new mode
            settings_save();
            return;
        }
        for (int i = 0; i < 4; i++) {
            if (!hit(system_button(i), px, py)) continue;
            mm64_ui_sound(MM64_SOUND_SELECT);
            if (i == 0 || i == 1) {
                refresh_slots();
                sys_mode = i == 0 ? SYS_SAVE : SYS_LOAD;
            } else if (was_confirming != i) {
                sys_confirm = i; // Restart and Quit need a second tap
            } else {
                pending_action = i == 2 ? BOTTOM_UI_RESTART : BOTTOM_UI_QUIT;
            }
        }
        return;
    }
    if (hit(btn_back, px, py)) {
        mm64_ui_sound(MM64_SOUND_BACK);
        sys_mode = SYS_MENU;
        return;
    }
    for (int i = 0; i < MM64_SAVE_SLOTS; i++) {
        if (!hit(slot_row(i), px, py)) continue;
        mm64_ui_sound(MM64_SOUND_SELECT);
        if (sys_mode == SYS_SAVE) {
            if (slots[i].used && was_confirming != 10 + i) {
                sys_confirm = 10 + i; // overwriting needs a second tap
                return;
            }
            if (mm64_request_save(i)) {
                sys_busy_slot = i;
                sys_busy_since = frame_count;
                pending_action = BOTTOM_UI_RESUME;
            }
        } else if (slots[i].used) {
            if (mm64_request_load(i)) {
                sys_busy_slot = i;
                sys_busy_since = frame_count;
                pending_action = BOTTOM_UI_RESUME;
            } else {
                system_message("That slot can't be read.");
            }
        }
    }
}

// Follows a save or load in progress. Both run during gameplay; elsewhere (title screen, dialogue,
// cutscenes) they wait, and give up after a while.
static void system_update(void) {
    if (sys_busy_slot < 0) return;
    char text[64];
    switch (mm64_savestate_status()) {
        case MM64_SAVESTATE_DONE:
            snprintf(text, sizeof(text), sys_mode == SYS_SAVE ? "Saved to slot %d." : "Loaded slot %d.", sys_busy_slot + 1);
            system_message(text);
            break;
        case MM64_SAVESTATE_FAILED:
            system_message(sys_mode == SYS_SAVE ? "Saving failed." : "Loading failed.");
            break;
        default:
            if (frame_count - sys_busy_since < 600) return;
            mm64_savestate_cancel();
            system_message("Only possible while playing. Try again in game.");
            break;
    }
    sys_busy_slot = -1;
    refresh_slots();
    sys_mode = SYS_MENU;
}

BottomUiAction bottom_ui_take_action(void) {
    BottomUiAction a = pending_action;
    pending_action = BOTTOM_UI_NONE;
    return a;
}

// --- Input ---------------------------------------------------------------------------------------

static float dungeon_scale(void) {
    float fit = fminf(map_area.w / cur_map->w, map_area.h / cur_map->h);
    return dungeon_zoom == 0 ? fit : fmaxf(fit, dungeon_zooms[dungeon_zoom]);
}

static float world_scale(void) {
    return world_zooms[world_zoom];
}

static void map_prefs_load(void) {
    FILE* f = fopen(map_prefs_path, "r");
    if (!f) return;
    int view, wz, dz;
    float wx, wy, dx, dy;
    if (fscanf(f, "%d %d %f %f %d %f %f", &view, &wz, &wx, &wy, &dz, &dx, &dy) == 7) {
        if (view >= 0 && view < MAP_VIEWS) map_view = (MapView)view;
        if (wz >= 0 && wz < (int)(sizeof(world_zooms) / sizeof(world_zooms[0]))) world_zoom = wz;
        if (dz >= 0 && dz < (int)(sizeof(dungeon_zooms) / sizeof(dungeon_zooms[0]))) dungeon_zoom = dz;
        world_cx = wx;
        world_cy = wy;
        dungeon_cx = dx;
        dungeon_cy = dy;
    }
    fclose(f);
}

static void map_prefs_save(void) {
    FILE* f = fopen(map_prefs_path, "w");
    if (!f) return;
    fprintf(f, "%d %d %.1f %.1f %d %.1f %.1f\n", (int)map_view, world_zoom, world_cx, world_cy, dungeon_zoom, dungeon_cx, dungeon_cy);
    fclose(f);
    map_prefs_dirty = false;
}

static void drawing_save(void) {
    if (!drawing_dirty || drawing_dungeon < 0) return;
    char path[128];
    snprintf(path, sizeof(path), "%s/drawing_%d.bin", data_dir, drawing_dungeon);
    FILE* f = fopen(path, "wb");
    if (f) {
        fwrite(drawing, sizeof(DrawPoint), drawing_count, f);
        fclose(f);
    }
    drawing_dirty = false;
}

// The drawing for dungeon `id` (the previous one saved first).
static void drawing_use(int id) {
    if (id == drawing_dungeon) return;
    drawing_save();
    drawing_dungeon = id;
    drawing_count = 0;
    char path[128];
    snprintf(path, sizeof(path), "%s/drawing_%d.bin", data_dir, id);
    FILE* f = fopen(path, "rb");
    if (f) {
        drawing_count = (int)fread(drawing, sizeof(DrawPoint), DRAW_POINTS, f);
        fclose(f);
    }
}

static void drawing_add(float x, float y) {
    if (drawing_count >= DRAW_POINTS - 1) return; // keep room for the stroke's end
    drawing[drawing_count].x = (u16)fminf(fmaxf(x, 0), cur_map->w);
    drawing[drawing_count].y = (u16)fminf(fmaxf(y, 0), cur_map->h);
    drawing_count++;
    drawing_dirty = true;
}

static void drawing_end_stroke(void) {
    if (drawing_count > 0 && drawing[drawing_count - 1].x != 0xFFFF) {
        drawing[drawing_count].x = 0xFFFF;
        drawing[drawing_count].y = 0;
        drawing_count++;
    }
    pen_down = false;
}

static void drawing_undo(void) {
    if (drawing_count > 0 && drawing[drawing_count - 1].x == 0xFFFF) drawing_count--;
    while (drawing_count > 0 && drawing[drawing_count - 1].x != 0xFFFF) drawing_count--;
    drawing_dirty = true;
}

// The dungeon view's map point under a screen point (as last drawn).
static float dungeon_view_x0, dungeon_view_y0;
static void dungeon_screen_to_map(int px, int py, float* x, float* y) {
    float sc = dungeon_scale();
    *x = dungeon_view_x0 + (px - map_area.x) / sc;
    *y = dungeon_view_y0 + (py - map_area.y) / sc;
}

// Map page input: the view buttons; on the World and Dungeon views -/+ zoom, dragging scrolls, and
// on the Dungeon view the head button goes back to Mega Man.
static void map_touch(u32 down, u32 held, touchPosition touch) {
    if (down & KEY_TOUCH) {
        for (int i = 0; i < MAP_VIEWS; i++) {
            if (hit(map_view_button(i), touch.px, touch.py)) {
                if (map_view != (MapView)i) mm64_ui_sound(MM64_SOUND_CURSOR);
                map_view = (MapView)i;
                map_prefs_dirty = true;
                if (pen_down) drawing_end_stroke();
                drawing_save();
                return;
            }
        }
    }
    if (map_view != MAP_DUNGEON && map_view != MAP_WORLD) return;
    bool world = map_view == MAP_WORLD;
    int* zoom = world ? &world_zoom : &dungeon_zoom;
    int zooms = world ? (int)(sizeof(world_zooms) / sizeof(world_zooms[0])) : (int)(sizeof(dungeon_zooms) / sizeof(dungeon_zooms[0]));
    if (down & KEY_TOUCH) {
        if (hit(map_zoom_out, touch.px, touch.py)) {
            if (*zoom > 0) { (*zoom)--; mm64_ui_sound(MM64_SOUND_CURSOR); }
            map_prefs_dirty = true;
            return;
        }
        if (hit(map_zoom_in, touch.px, touch.py)) {
            if (*zoom < zooms - 1) { (*zoom)++; mm64_ui_sound(MM64_SOUND_CURSOR); }
            map_prefs_dirty = true;
            return;
        }
        if (!world && drawing_dungeon >= 0) {
            if (hit(pen_btn, touch.px, touch.py)) { mm64_ui_sound(MM64_SOUND_SELECT); pen_on = !pen_on; clear_armed = false; return; }
            if (hit(undo_btn, touch.px, touch.py)) { mm64_ui_sound(MM64_SOUND_BACK); drawing_undo(); clear_armed = false; return; }
            if (hit(clear_btn, touch.px, touch.py)) {
                // Two taps: the first arms it.
                if (clear_armed) { mm64_ui_sound(MM64_SOUND_BACK); drawing_count = 0; drawing_dirty = true; clear_armed = false; }
                else { mm64_ui_sound(MM64_SOUND_CURSOR); clear_armed = true; }
                return;
            }
            clear_armed = false;
            if (pen_on && hit(map_area, touch.px, touch.py)) {
                float x, y;
                dungeon_screen_to_map(touch.px, touch.py, &x, &y);
                drawing_add(x, y);
                pen_down = true;
                pen_last_x = touch.px;
                pen_last_y = touch.py;
                return;
            }
        }
        map_drag = hit(map_area, touch.px, touch.py);
        drag_x = touch.px;
        drag_y = touch.py;
        return;
    }
    if (pen_down) {
        if (!(held & KEY_TOUCH)) {
            drawing_end_stroke();
        } else if (fabsf(touch.px - pen_last_x) + fabsf(touch.py - pen_last_y) >= 2) {
            float x, y;
            dungeon_screen_to_map(touch.px, touch.py, &x, &y);
            drawing_add(x, y);
            pen_last_x = touch.px;
            pen_last_y = touch.py;
        }
        return;
    }
    if (!(held & KEY_TOUCH)) {
        map_drag = false;
    } else if (map_drag) {
        // Drag to scroll: the map follows the stylus.
        float sc = world ? world_scale() : dungeon_scale();
        float* cx = world ? &world_cx : &dungeon_cx;
        float* cy = world ? &world_cy : &dungeon_cy;
        *cx -= (touch.px - drag_x) / sc;
        *cy -= (touch.py - drag_y) / sc;
        drag_x = touch.px;
        drag_y = touch.py;
        map_prefs_dirty = true;
    }
}

// A notice along the bottom of the screen for a few seconds (found items).
static char notice[64];
static float notice_until;

void bottom_ui_update(u32 down, u32 held, touchPosition touch, bool paused) {
    frame_count++;
    static u64 start_tick;
    if (!start_tick) start_tick = svcGetSystemTick();
    ui_time = (float)((double)(svcGetSystemTick() - start_tick) / SYSCLOCK_ARM11);
    int found = mm64_ext_take_found_map();
    if (found >= 0) {
        snprintf(notice, sizeof(notice), "Dig Scan found! (%s)", dungeon_list[found].name);
        notice_until = ui_time + 5.0f;
        mm64_ui_sound(MM64_SOUND_SELECT);
    }
    if (credits_open) {
        // Credits on the top screen: SELECT returns; nothing else on the bottom screen meanwhile.
        if (down & KEY_SELECT) {
            mm64_ui_sound(MM64_SOUND_BACK);
            credits_open = false;
        }
        return;
    }
    if (map_prefs_dirty && page != PAGE_MAP) map_prefs_save(); // left the Map page
    if (drawing_dirty && !pen_down && (page != PAGE_MAP || map_view != MAP_DUNGEON)) drawing_save();
    // Cutscenes: the bottom screen is decorative only and ignores input - also while paused.
    if (mm64_in_cutscene()) {
        system_update();
        return;
    }

    if (paused) {
        if (down & KEY_R) page = (page + 1) % PAGE_COUNT;
        if (down & KEY_L) page = (page + PAGE_COUNT - 1) % PAGE_COUNT;
    }
    system_update();
    // Drags, and the stylus lifting (which ends a drag or a pen stroke).
    if (page == PAGE_MAP && !(down & KEY_TOUCH) && (!(held & KEY_TOUCH) || touch.py >= TAB_H)) map_touch(down, held, touch);
    if (!(held & KEY_TOUCH)) {
        kills_drag = false;
    } else if (kills_drag && page == PAGE_STATUS && !(down & KEY_TOUCH)) {
        kills_scroll -= touch.py - kills_drag_y; // the list follows the stylus (clamped when drawn)
        kills_drag_y = touch.py;
    }
    if (down & KEY_TOUCH) {
        if (touch.py < TAB_H) {
            Page tapped = hit(data_button, touch.px, touch.py) ? PAGE_SYSTEM : (Page)(touch.px / (int)TAB_W);
            if (tapped != page) mm64_ui_sound(MM64_SOUND_CURSOR);
            if (tapped == PAGE_NOTES && page != PAGE_NOTES) notes_opened_at = ui_time; // "Coming Soon!" drops in
            page = tapped;
            confirm_delete = false;
            sys_confirm = -1;
            if (page == PAGE_SYSTEM && sys_busy_slot < 0) sys_mode = SYS_MENU;
        } else if (page == PAGE_SYSTEM) {
            system_touch(touch.px, touch.py);
        } else if (page == PAGE_NOTES) {
            if (NOTES_ENABLED) notes_touch(touch.px, touch.py, paused);
        } else if (page == PAGE_MAP) {
            map_touch(down, held, touch);
        } else if (page == PAGE_STATUS) {
            if (!kills_open) {
                if (hit(kills_row, touch.px, touch.py)) { mm64_ui_sound(MM64_SOUND_SELECT); kills_open = true; kills_scroll = 0; }
            } else if (hit(status_back, touch.px, touch.py)) {
                mm64_ui_sound(MM64_SOUND_BACK); kills_open = false;
            } else if (hit(status_up, touch.px, touch.py)) {
                mm64_ui_sound(MM64_SOUND_CURSOR); kills_scroll -= 4 * KILL_ROW_H;
            } else if (hit(status_down, touch.px, touch.py)) {
                mm64_ui_sound(MM64_SOUND_CURSOR); kills_scroll += 4 * KILL_ROW_H;
            } else if (hit(kill_list, touch.px, touch.py)) {
                kills_drag = true;
                kills_drag_y = touch.py;
            }
        } else if (page == PAGE_INVENTORY) {
            for (int i = 0; i < MM64_ITEM_SECTIONS; i++) {
                if (hit(section_button(i), touch.px, touch.py)) {
                    if (inv_section != (Mm64ItemSection)i) mm64_ui_sound(MM64_SOUND_CURSOR);
                    inv_section = (Mm64ItemSection)i;
                    inv_scroll = 0;
                    binder_open = false;
                }
            }
            if (inv_section == MM64_ITEMS_SPECIAL && binder_open) {
                if (hit(binder_back, touch.px, touch.py)) { mm64_ui_sound(MM64_SOUND_BACK); binder_open = false; }
                for (int i = 0, row = 0; i < DUNGEON_COUNT; i++) {
                    if (!dungeon_map_owned(i)) continue; // (towns and fields are never in the Binder)
                    if (hit(binder_row(row++), touch.px, touch.py)) {
                        mm64_ui_sound(MM64_SOUND_SELECT);
                        // Open that dungeon's map on the Map tab.
                        dungeon_shown = i;
                        dungeon_cx = -1;
                        map_view = MAP_DUNGEON;
                        page = PAGE_MAP;
                    }
                }
            } else if (inv_section == MM64_ITEMS_SPECIAL) {
                for (int slot = 0; slot < 18; slot++) {
                    if (hit(grid_cell(slot), touch.px, touch.py)) { mm64_ui_sound(MM64_SOUND_CURSOR); inv_selected[inv_section] = slot; }
                }
                if (dungeon_maps_any() && hit(grid_cell(BINDER_SLOT), touch.px, touch.py)) {
                    mm64_ui_sound(MM64_SOUND_SELECT);
                    inv_selected[inv_section] = BINDER_SLOT;
                    binder_open = true;
                }
            } else {
                if (hit(inv_up, touch.px, touch.py) && inv_scroll > 0) { mm64_ui_sound(MM64_SOUND_CURSOR); inv_scroll -= INV_PER_SCREEN; }
                if (hit(inv_down, touch.px, touch.py)) { mm64_ui_sound(MM64_SOUND_CURSOR); inv_scroll += INV_PER_SCREEN; } // clamped when drawing
                if (hit(inv_list, touch.px, touch.py)) {
                    mm64_ui_sound(MM64_SOUND_CURSOR);
                    int col = (touch.px - (int)inv_list.x) / (int)(inv_list.w / 2), row = (touch.py - (int)inv_list.y) / 14;
                    if (row < INV_ROWS) inv_selected[inv_section] = inv_scroll + col * INV_ROWS + row; // checked when drawing
                }
            }
        }
    }
}

// --- Drawing -------------------------------------------------------------------------------------

// Parsed text is cached across frames: parsing every string on every frame was a large part of
// the bottom screen's cost. The cache is emptied when full; strings too long for it are parsed into
// the per-frame buffer.
#define TEXT_CACHE_SIZE 64
#define TEXT_KEY_MAX 96
typedef struct {
    char key[TEXT_KEY_MAX];
    C2D_Text text;
} CachedText;
static CachedText text_cache[TEXT_CACHE_SIZE];
static int text_cache_count;
static const C2D_Text* get_text(const char* str, C2D_Text* scratch) {
    if (strlen(str) >= TEXT_KEY_MAX) {
        C2D_TextParse(scratch, text_buf, str);
        C2D_TextOptimize(scratch);
        return scratch;
    }
    for (int i = 0; i < text_cache_count; i++) {
        if (strcmp(text_cache[i].key, str) == 0) return &text_cache[i].text;
    }
    if (text_cache_count == TEXT_CACHE_SIZE || C2D_TextBufGetNumGlyphs(cache_buf) + strlen(str) > 4000) {
        C2D_TextBufClear(cache_buf);
        text_cache_count = 0;
    }
    CachedText* c = &text_cache[text_cache_count++];
    snprintf(c->key, sizeof(c->key), "%s", str);
    C2D_TextParse(&c->text, cache_buf, str);
    C2D_TextOptimize(&c->text);
    return &c->text;
}

// --- Game font ------------------------------------------------------------------------------------
// Text is drawn with the game's own font when every character is in it; anything else (a note with
// characters the game never used) falls back to the system font. `scale` keeps the system font's
// meaning; the game's 12-pixel glyphs are drawn at a whole or half multiple of their size closest to
// scale * 2.4 (the sizes the layouts were made for), from the 4x atlas, so 1.5x is smooth too.
static float FONT_SCALE(float scale) {
    float g = scale * 2.4f;
    return g < 1.3f ? 1.0f : g < 1.8f ? 1.5f : 2.0f;
}
#define FONT_LINE 13.0f

// UTF-8 -> font codes (ASCII, plus 1 = alpha and 2 = omega from item names; the middle dot shows as
// a hyphen). Returns the length, or -1 if a character isn't in the font.
static int font_codes(const char* str, unsigned char* out, int max) {
    int n = 0;
    for (const unsigned char* p = (const unsigned char*)str; *p && n < max; p++) {
        unsigned char c = *p;
        if (c == 0xC2 && p[1] == 0xB7) { c = '-'; p++; }
        else if (c == 0xCE && p[1] == 0xB1) { c = 1; p++; }
        else if (c == 0xCE && p[1] == 0xA9) { c = 2; p++; }
        else if (c >= 0x80) return -1;
        if (c != ' ' && c != '\n' && !font_glyph[c]) return -1;
        out[n++] = c;
    }
    return n;
}

static float font_advance(unsigned char c, float g) {
    return c == ' ' ? 4.0f * g : (font_glyph[c]->width + 1) * g;
}

static float font_width(const unsigned char* s, int n, float g) {
    float w = 0;
    for (int i = 0; i < n; i++) w += font_advance(s[i], g);
    return w > 0 ? w - g : 0;
}

static void font_line(const unsigned char* s, int n, float x, float y, float g, u32 color) {
    C2D_ImageTint tint;
    C2D_PlainImageTint(&tint, color, 1.0f);
    C2D_SetTintMode(C2D_TintMult);
    x = floorf(x + 0.5f);
    y = floorf(y + 0.5f);
    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];
        if (c != ' ') {
            const GameGlyph* gl = font_glyph[c];
            float left = ((gl->cell % GAME_FONT_COLS) * 12 + gl->x0) * HD, top = (gl->cell / GAME_FONT_COLS) * 12 * HD;
            float w = gl->width * HD, h = 12 * HD;
            Tex3DS_SubTexture sub = { (u16)w, (u16)h, left / 1024.0f, 1.0f - top / 256.0f, (left + w) / 1024.0f, 1.0f - (top + h) / 256.0f };
            C2D_Image img = { &font_tex, &sub };
            C2D_DrawImageAt(img, x, y, 0, &tint, g / HD, g / HD);
        }
        x += font_advance(c, g);
    }
    C2D_SetTintMode(C2D_TintSolid);
}

// Draws font codes with line breaks, optional word wrap at wrap_width, and C2D alignment flags.
static void font_text_g(const unsigned char* s, int n, float x, float y, float g, u32 color, u32 flags, float wrap_width);
static void font_text(const unsigned char* s, int n, float x, float y, float scale, u32 color, u32 flags, float wrap_width) {
    font_text_g(s, n, x, y, FONT_SCALE(scale), color, flags, wrap_width);
}

// The same at a given glyph scale (g: game font pixels per screen pixel).
static void font_text_g(const unsigned char* s, int n, float x, float y, float g, u32 color, u32 flags, float wrap_width) {
    bool wrap = (flags & C2D_WordWrap) && wrap_width > 0;
    int start = 0;
    while (start <= n) {
        // One line: up to a line break, or the last space that still fits when wrapping.
        int end = start, last_space = -1;
        while (end < n && s[end] != '\n') {
            if (wrap && s[end] == ' ') last_space = end;
            if (wrap && font_width(s + start, end - start + 1, g) > wrap_width && last_space > start) {
                end = last_space;
                break;
            }
            end++;
        }
        float w = font_width(s + start, end - start, g);
        float lx = (flags & C2D_AlignCenter) ? x - w / 2 : (flags & C2D_AlignRight) ? x - w : x;
        font_line(s + start, end - start, lx, y, g, color);
        y += FONT_LINE * g;
        if (end >= n) break;
        start = end + 1; // past the line break or the wrapping space
    }
}

static void draw_text(const char* str, float x, float y, float scale, u32 color, u32 flags, float wrap_width) {
    unsigned char codes[512];
    int n = font_ready ? font_codes(str, codes, sizeof(codes)) : -1;
    if (n >= 0) {
        font_text(codes, n, x, y, scale, color, flags, wrap_width);
        return;
    }
    C2D_Text scratch;
    const C2D_Text* t = get_text(str, &scratch);
    if (flags & C2D_WordWrap) {
        C2D_DrawText(t, C2D_WithColor | flags, x, y, 0, scale, scale, color, wrap_width);
    } else {
        C2D_DrawText(t, C2D_WithColor | flags, x, y, 0, scale, scale, color);
    }
}

static float text_width(const char* str, float scale) {
    unsigned char codes[512];
    int n = font_ready ? font_codes(str, codes, sizeof(codes)) : -1;
    if (n >= 0) return font_width(codes, n, FONT_SCALE(scale));
    C2D_Text t;
    C2D_TextBufClear(measure_buf);
    C2D_TextParse(&t, measure_buf, str);
    float w;
    C2D_TextGetDimensions(&t, scale, scale, &w, NULL);
    return w;
}

// Word-wraps text that may contain line breaks into lines at most `w` wide. (Drawn with
// C2D_WordWrap, everything after the first line break went missing.)
#define WRAP_MAX_LINES 24
static int wrap_lines(const char* text, float w, float scale, char lines[][NOTE_TEXT_MAX]) {
    int count = 0;
    char line[NOTE_TEXT_MAX];
    char candidate[NOTE_TEXT_MAX];
    size_t len = 0;
    line[0] = '\0';
    for (const char* p = text; count < WRAP_MAX_LINES; ) {
        // Next word (without its trailing space) or a line break / end of text.
        const char* word = p;
        while (*p && *p != ' ' && *p != '\n') p++;
        size_t word_len = (size_t)(p - word);
        if (word_len) {
            snprintf(candidate, sizeof(candidate), "%s%s%.*s", line, len ? " " : "", (int)word_len, word);
            if (len && text_width(candidate, scale) > w) {
                snprintf(lines[count++], NOTE_TEXT_MAX, "%s", line);
                if (count == WRAP_MAX_LINES) break;
                snprintf(line, sizeof(line), "%.*s", (int)word_len, word);
            } else {
                snprintf(line, sizeof(line), "%s", candidate);
            }
            len = strlen(line);
        }
        if (*p == ' ') {
            p++;
            continue;
        }
        // Line break or end: flush the line.
        if (len || *p == '\n') {
            snprintf(lines[count++], NOTE_TEXT_MAX, "%s", line);
            line[0] = '\0';
            len = 0;
        }
        if (!*p) break;
        p++;
    }
    return count;
}

// Draws wrapped text into a box, dropping lines past its bottom. The wrapping is redone only when
// the text or box changes.
static void draw_wrapped(const char* text, float x, float y, float w, float h, float scale, u32 color) {
    static char cached_text[NOTE_TEXT_MAX];
    static float cached_w, cached_scale;
    static char lines[WRAP_MAX_LINES][NOTE_TEXT_MAX];
    static int line_count = -1;
    if (line_count < 0 || cached_w != w || cached_scale != scale || strcmp(cached_text, text) != 0) {
        snprintf(cached_text, sizeof(cached_text), "%s", text);
        cached_w = w;
        cached_scale = scale;
        line_count = wrap_lines(text, w, scale, lines);
    }
    float line_h = scale * fontGetInfo(NULL)->lineFeed;
    for (int i = 0; i < line_count && h >= line_h; i++) {
        draw_text(lines[i], x, y, scale, color, 0, 0);
        y += line_h;
        h -= line_h;
    }
}

static void draw_button(Rect r, const char* label, u32 color) {
    C2D_DrawRectSolid(r.x, r.y, 0, r.w, r.h, color);
    draw_text(label, r.x + r.w / 2, r.y + 6, 0.5f, COL_TEXT, C2D_AlignCenter, 0);
}

static void draw_arrow_vertical(Rect r, bool up, bool enabled) {
    C2D_DrawRectSolid(r.x, r.y, 0, r.w, r.h, COL_PANEL);
    u32 c = enabled ? COL_TEXT : COL_MUTED;
    float cx = r.x + r.w / 2, cy = r.y + r.h / 2, s = 7;
    if (up) {
        C2D_DrawTriangle(cx - s, cy + s / 2, c, cx + s, cy + s / 2, c, cx, cy - s, c, 0);
    } else {
        C2D_DrawTriangle(cx - s, cy - s / 2, c, cx + s, cy - s / 2, c, cx, cy + s, c, 0);
    }
}

static void draw_arrow(Rect r, bool right) {
    C2D_DrawRectSolid(r.x, r.y, 0, r.w, r.h, COL_PANEL);
    float cx = r.x + r.w / 2, cy = r.y + r.h / 2, s = 7;
    if (right) {
        C2D_DrawTriangle(cx - s / 2, cy - s, COL_TEXT, cx - s / 2, cy + s, COL_TEXT, cx + s, cy, COL_TEXT, 0);
    } else {
        C2D_DrawTriangle(cx + s / 2, cy - s, COL_TEXT, cx + s / 2, cy + s, COL_TEXT, cx - s, cy, COL_TEXT, 0);
    }
}


// The start menu's tiled background, drifting diagonally like the game's.
static void draw_menu_background(void) {
    if (!bg_ready) {
        C2D_DrawRectSolid(0, 0, 0, SCREEN_W, SCREEN_H, COL_BG);
        return;
    }
    static const Tex3DS_SubTexture sub = { 64, 64, 0.0f, 1.0f, 1.0f, 0.0f };
    C2D_Image tile = { &bg_tex, &sub };
    float off = fmodf(ui_time * 15.0f, 64.0f);
    for (float y = -off; y < SCREEN_H; y += 64) {
        for (float x = -off; x < SCREEN_W; x += 64) {
            C2D_DrawImageAt(tile, x, y, 0, NULL, 1.0f, 1.0f);
        }
    }
}

// A translucent box with a light border, like the game's menu windows.
static void draw_glass(float x, float y, float w, float h) {
    C2D_DrawRectSolid(x, y, 0, w, h, COL_GLASS);
    C2D_DrawRectSolid(x, y, 0, w, 1, COL_BORDER);
    C2D_DrawRectSolid(x, y + h - 1, 0, w, 1, COL_BORDER);
    C2D_DrawRectSolid(x, y, 0, 1, h, COL_BORDER);
    C2D_DrawRectSolid(x + w - 1, y, 0, 1, h, COL_BORDER);
}

// Data, the monkey who saves your game, doing his save dance on the System button: frames of the
// game's own model (data_sprite.inc, captured by tools/make_data_sprite.py), swaying side to side.
static void draw_data(float cx, float bottom, float height, float t) {
    if (!data_ready) return;
    static const unsigned char dance[] = { 0, 1, 2, 3, 2, 1, 4, 5, 6, 7, 6, 5 };
    int frame = dance[(int)(t / 0.13f) % (int)sizeof(dance)];
    Tex3DS_SubTexture sub = { 64, 64, (frame % 4) * 64 / 256.0f, 1.0f - (frame / 4) * 64 / 128.0f,
                              (frame % 4 + 1) * 64 / 256.0f, 1.0f - (frame / 4 + 1) * 64 / 128.0f };
    C2D_Image img = { &data_tex, &sub };
    float scale = height / 64.0f;
    C2D_DrawImageAt(img, cx - 32 * scale, bottom - 64 * scale, 0, NULL, scale, scale);
}

// One tab: a 1-pixel frame (bright when it's the open page, soft otherwise) around its fill, with a
// lighter line along the top edge; tabs sit 2 pixels apart.
static void draw_tab_frame(float x, float w, bool active) {
    const float y = 1, h = TAB_H - 2;
    u32 frame = active ? COL_BORDER : C2D_Color32(0x4A, 0x66, 0xB0, 0xFF);
    u32 fill = active ? COL_ACCENT : C2D_Color32(0x1E, 0x3A, 0x8A, 0xE0);
    u32 shine = active ? C2D_Color32(0x93, 0xC5, 0xFD, 0xFF) : C2D_Color32(0x35, 0x52, 0xA0, 0xFF);
    C2D_DrawRectSolid(x + 1, y, 0, w - 2, h, frame);
    C2D_DrawRectSolid(x + 2, y + 1, 0, w - 4, h - 2, fill);
    C2D_DrawRectSolid(x + 2, y + 1, 0, w - 4, 1, shine);
}

// A button in the tabs' style (draw_tab_frame): outline, fill and a highlight along the top. Bright
// fills (the selected option, Save/Load, a confirm in red) get the bright outline, like the active tab.
static void draw_framed(Rect r, u32 fill) {
    bool bright = fill == COL_ACCENT || fill == COL_DANGER;
    u32 frame = bright ? COL_BORDER : C2D_Color32(0x4A, 0x66, 0xB0, 0xFF);
    u32 shine = fill == COL_ACCENT ? C2D_Color32(0x93, 0xC5, 0xFD, 0xFF)
              : fill == COL_DANGER ? C2D_Color32(0xF8, 0x71, 0x71, 0xFF)
              : fill == COL_PANEL ? C2D_Color32(0x33, 0x41, 0x55, 0xFF) : C2D_Color32(0x35, 0x52, 0xA0, 0xFF);
    C2D_DrawRectSolid(r.x, r.y, 0, r.w, r.h, frame);
    C2D_DrawRectSolid(r.x + 1, r.y + 1, 0, r.w - 2, r.h - 2, fill);
    C2D_DrawRectSolid(r.x + 1, r.y + 1, 0, r.w - 2, 1, shine);
}

static void draw_framed_button(Rect r, const char* label, u32 fill) {
    draw_framed(r, fill);
    draw_text(label, r.x + r.w / 2, r.y + 6, 0.5f, COL_TEXT, C2D_AlignCenter, 0);
}

static void draw_tabs(void) {
    C2D_DrawRectSolid(0, 0, 0, SCREEN_W, TAB_H, C2D_Color32(0x05, 0x0A, 0x1E, 0xE0)); // behind the gaps
    for (int i = 0; i < TEXT_TABS; i++) {
        draw_tab_frame(i * TAB_W, TAB_W, i == (int)page);
        draw_text(page_names[i], i * TAB_W + TAB_W / 2, 8, 0.5f, COL_TEXT, C2D_AlignCenter, 0);
    }
    Rect h = data_button;
    draw_tab_frame(h.x, h.w, page == PAGE_SYSTEM);
    // Data fills the lower 53 of his 64-pixel cells: at a 31-pixel cell he's 26 tall, centred in the
    // button.
    const float cell = 31.0f, figure = cell * 53.0f / 64.0f;
    draw_data(h.x + h.w / 2, h.y + (h.h + figure) / 2, cell, ui_time);
}

// Draws a piece of the ZENNY sheet (sheet pixels) at x, y, scaled.
static void draw_sheet(float sx, float sy, float sw, float sh, float x, float y, float scale) {
    sx *= HD; sy *= HD; sw *= HD; sh *= HD;
    Tex3DS_SubTexture sub = { (u16)sw, (u16)sh, sx / 1024.0f, 1.0f - sy / 64.0f, (sx + sw) / 1024.0f, 1.0f - (sy + sh) / 64.0f };
    C2D_Image img = { &zenny_tex, &sub };
    C2D_DrawImageAt(img, x, y, 0, NULL, scale / HD, scale / HD);
}

// The game's ZENNY box with the amount in its digits, like the start menu's header. The box is
// drawn in two parts with the value area widened a little, as the game does. 100x16 at scale 1.
#define ZENNY_BOX_W 100
static void draw_zenny_box(float x, float y, float scale, unsigned zenny) {
    if (!zenny_ready) return;
    draw_sheet(0, 0, 64, 16, x, y, scale);
    draw_sheet(54, 0, 42, 16, x + 58 * scale, y, scale);
    char digits[16];
    int n = snprintf(digits, sizeof(digits), "%u", zenny);
    float dx = x + (ZENNY_BOX_W - 7) * scale; // right edge of the value area
    for (int i = n - 1; i >= 0; i--) {
        dx -= 8 * scale;
        draw_sheet(96 + (digits[i] - '0') * 8, 0, 8, 8, dx, y + 4 * scale, scale);
    }
}

// The game's gauges (n64_bottom_overlay_fit) in the HUD column. On the top screen life spans about
// x 47-90, y 136-234 and weapon energy x 311-338, y 165-232. Each is placed by its own extent, so it
// stays put while the game slides its HUD in after a load, and never leaves the column.
static void draw_hud_column(void) {
    draw_glass(hud_panel.x, hud_panel.y, hud_panel.w, hud_panel.h);
    // Centred in the column: life (44 wide) and energy (28) side by side with a 4-pixel gap, their
    // bottoms where they'd be with the usual 98-pixel-tall life gauge centred (energy 2 higher).
    float bottom = hud_panel.y + (hud_panel.h - 98) / 2 + 98;
    float x = hud_panel.x + (hud_panel.w - (44 + 4 + 28)) / 2;
    float max_h = bottom - (hud_panel.y + 4);
    n64_bottom_overlay_fit(1, x, bottom, 44, max_h);
    n64_bottom_overlay_fit(2, x + 44 + 4, bottom - 2, 28, max_h - 2);
}

static bool owns(const unsigned char* ids, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) return true;
    }
    return false;
}

// The selected item's name (green, as in the game) and its description along the bottom.
// The panel along the bottom: the name in green, the description following it on the same line and
// wrapping onto the next. A description that wouldn't fit in the two lines is drawn smaller (0.8x:
// three lines of the smaller size after the name's line would not fit, so it also starts after it).
static void draw_name_and_text(const char* name, const char* text) {
    const u32 green = C2D_Color32(0x58, 0xF0, 0x70, 0xFF);
    float x = inv_desc.x + 6, y = inv_desc.y + 2, w = inv_desc.w - 12;
    unsigned char nc[64], tc[256];
    int nn = font_ready ? font_codes(name, nc, sizeof(nc)) : -1;
    int tn = font_ready ? font_codes(text, tc, sizeof(tc)) : -1;
    if (nn < 0 || tn < 0) { // characters outside the game font: the old two-line layout
        draw_text(name, x, inv_desc.y + 1, 0.44f, green, 0, 0);
        draw_text(text, x, inv_desc.y + 15, 0.36f, COL_TEXT, C2D_WordWrap, w);
        return;
    }
    font_text_g(nc, nn, x, y, 1.0f, green, 0, 0);
    float indent = font_width(nc, nn, 1.0f) + 8;
    for (int pass = 0; pass < 2; pass++) {
        float g = pass == 0 ? 1.0f : 0.8f;
        // The longest start of the text, ending at a space, that fits after the name.
        int cut = 0;
        for (int i = 0; i <= tn; i++) {
            if ((i == tn || tc[i] == ' ') && font_width(tc, i, g) <= w - indent) cut = i;
            if (font_width(tc, i, g) > w - indent) break;
        }
        int rest = cut < tn ? cut + 1 : tn;
        bool fits = font_width(tc + rest, tn - rest, g) <= w;
        if (!fits && pass == 0) continue;
        float y1 = y + (1.0f - g) * 12; // the smaller first part shares the name's baseline
        font_text_g(tc, cut, x + indent, y1, g, COL_TEXT, 0, 0);
        if (rest < tn) font_text_g(tc + rest, tn - rest, x, y + 13, g, COL_TEXT, C2D_WordWrap, w);
        return;
    }
}

static void draw_item_description(int id) {
    C2D_DrawRectSolid(inv_desc.x, inv_desc.y, 0, inv_desc.w, inv_desc.h, C2D_Color32(0x05, 0x0A, 0x1E, 0xD8));
    if (id < 0) return;
    char name[48], text[160];
    if (!mm64_item_name(id, name, sizeof(name))) return;
    const char* d = id < (int)(sizeof(item_desc) / sizeof(item_desc[0])) ? item_desc[id] : "";
    size_t n = 0;
    for (; *d && n + 1 < sizeof(text); d++) text[n++] = *d == '\n' ? ' ' : *d; // one line, wrapped below
    text[n] = '\0';
    draw_name_and_text(name, text);
}

static void draw_tex(C3D_Tex* tex, float sx, float sy, float sw, float sh, float x, float y, float w, float h, const C2D_ImageTint* tint);

// The Dig Scan icon, pre-scaled to each size it is shown at (dig_scan_icon.inc) and drawn 1:1.
static void draw_dig_scan(int size, float x, float y) {
    draw_tex(&dig_scan_tex, size == DIG_SCAN_LARGE ? 0 : DIG_SCAN_LARGE + 2, 0, size, size, floorf(x), floorf(y), size, size, NULL);
}

static void draw_binder_description(void) {
    C2D_DrawRectSolid(inv_desc.x, inv_desc.y, 0, inv_desc.w, inv_desc.h, C2D_Color32(0x05, 0x0A, 0x1E, 0xD8));
    draw_name_and_text("Map Binder", "Holds the Dig Scan maps found in dungeons. Each one shows where that dungeon's loot is.");
}

static void draw_icon(int slot, float x, float y, float scale) {
    Tex3DS_SubTexture sub = { 32, 32, (slot % 8) * 32 / 256.0f, 1.0f - (slot / 8) * 32 / 128.0f,
                              (slot % 8 + 1) * 32 / 256.0f, 1.0f - (slot / 8 + 1) * 32 / 128.0f };
    C2D_Image img = { &icon_tex, &sub };
    C2D_DrawImageAt(img, x, y, 0, NULL, scale, scale);
}

// Special Items as the game's grid: owned slots show their icon (with a count for groups), empty
// slots a plain box; the selected slot is outlined.
static void draw_special_grid(const unsigned char* ids, int count) {
    int selected_id = -1;
    for (int slot = 0; slot < 18; slot++) {
        Rect r = grid_cell(slot);
        int owned = 0, last = -1;
        for (int k = 0; k < 3 && special_slots[slot][k]; k++) {
            if (owns(ids, count, special_slots[slot][k])) { owned++; last = special_slots[slot][k]; }
        }
        if (owned && icons_ready) {
            draw_icon(slot, r.x + 1, r.y + 1, (GRID_CELL - 2) / 32.0f);
        } else {
            C2D_DrawRectSolid(r.x + 2, r.y + 2, 0, r.w - 4, r.h - 4, C2D_Color32(0x40, 0x40, 0x48, 0xC0));
        }
        if (owned > 1) {
            char n[8];
            snprintf(n, sizeof(n), "x%d", owned);
            draw_text(n, r.x + r.w - 2, r.y + r.h - 11, 0.32f, COL_TEXT, C2D_AlignRight, 0);
        }
        if (slot == inv_selected[MM64_ITEMS_SPECIAL]) {
            u32 c = C2D_Color32(0xFF, 0xE0, 0x40, 0xFF);
            C2D_DrawRectSolid(r.x, r.y, 0, r.w, 1, c);
            C2D_DrawRectSolid(r.x, r.y + r.h - 1, 0, r.w, 1, c);
            C2D_DrawRectSolid(r.x, r.y, 0, 1, r.h, c);
            C2D_DrawRectSolid(r.x + r.w - 1, r.y, 0, 1, r.h, c);
            selected_id = last;
        }
    }
    if (dungeon_maps_any()) {
        Rect r = grid_cell(BINDER_SLOT);
        if (maps_ready) draw_dig_scan(DIG_SCAN_LARGE, r.x + 1, r.y + 1);
        if (inv_selected[MM64_ITEMS_SPECIAL] == BINDER_SLOT) {
            u32 c = C2D_Color32(0xFF, 0xE0, 0x40, 0xFF);
            C2D_DrawRectSolid(r.x, r.y, 0, r.w, 1, c);
            C2D_DrawRectSolid(r.x, r.y + r.h - 1, 0, r.w, 1, c);
            C2D_DrawRectSolid(r.x, r.y, 0, 1, r.h, c);
            C2D_DrawRectSolid(r.x + r.w - 1, r.y, 0, 1, r.h, c);
            draw_binder_description();
            return;
        }
    }
    draw_item_description(selected_id);
}

// The Map Binder's list: the dungeon maps found so far; tapping one opens it on the Map tab.
static void draw_binder(void) {
    draw_text("Map Binder", 96, 96, 0.44f, C2D_Color32(0x58, 0xF0, 0x70, 0xFF), 0, 0);
    draw_button(binder_back, "Back", COL_PANEL);
    int row = 0;
    for (int i = 0; i < DUNGEON_COUNT; i++) {
        if (!dungeon_map_owned(i)) continue;
        Rect r = binder_row(row++);
        C2D_DrawRectSolid(r.x, r.y, 0, r.w, r.h, C2D_Color32(0x10, 0x20, 0x50, 0xC0));
        if (maps_ready) draw_dig_scan(DIG_SCAN_SMALL, r.x + 2, r.y + 1);
        draw_text(dungeon_list[i].name, r.x + 24, r.y + 4, 0.4f, COL_TEXT, 0, 0);
        draw_text("Dig Scan", r.x + r.w - 4, r.y + 4, 0.36f, COL_MUTED, C2D_AlignRight, 0);
    }
    draw_binder_description();
}

// Mirrors the game's start menu: Zenny, then the owned items of one section at a time, with the
// game's own names, icons and descriptions (mm64_get_items / mm64_item_name, item_icons.inc,
// item_text.inc).
static void draw_inventory(void) {
    char line[64];
    unsigned zenny;
    if (!mm64_get_zenny(&zenny)) {
        draw_text("Game not running.", 12, TAB_H + 12, 0.5f, COL_MUTED, 0, 0);
        return;
    }
    draw_hud_column();
    draw_glass(content.x, content.y, content.w, content.h);
    draw_zenny_box(content.x + (content.w - ZENNY_BOX_W * 1.5f) / 2, TAB_H + 7, 1.5f, zenny);

    for (int i = 0; i < MM64_ITEM_SECTIONS; i++) {
        Rect r = section_button(i);
        C2D_DrawRectSolid(r.x, r.y, 0, r.w, r.h, i == (int)inv_section ? COL_ACCENT : COL_PANEL);
        draw_text(section_names[i], r.x + r.w / 2, r.y + 4, 0.4f, COL_TEXT, C2D_AlignCenter, 0);
    }

    unsigned char ids[64];
    int count = mm64_get_items(inv_section, ids, 64);
    if (inv_section == MM64_ITEMS_SPECIAL) {
        if (binder_open && dungeon_maps_any()) draw_binder();
        else draw_special_grid(ids, count);
        return;
    }
    if (count == 0) {
        draw_text("Nothing here yet.", inv_list.x + 4, inv_list.y + 4, 0.46f, COL_MUTED, 0, 0);
        draw_item_description(-1);
        return;
    }
    if (inv_scroll >= count) inv_scroll = ((count - 1) / INV_PER_SCREEN) * INV_PER_SCREEN;
    int* sel = &inv_selected[inv_section];
    if (*sel >= count) *sel = count - 1;
    for (int i = 0; i < INV_PER_SCREEN && inv_scroll + i < count; i++) {
        char name[48];
        if (!mm64_item_name(ids[inv_scroll + i], name, sizeof(name))) continue;
        float x = inv_list.x + 2 + (i / INV_ROWS) * (inv_list.w / 2);
        float y = inv_list.y + 1 + (i % INV_ROWS) * 14;
        if (inv_scroll + i == *sel) C2D_DrawRectSolid(x - 2, y, 0, inv_list.w / 2 - 2, 13, C2D_Color32(0x3B, 0x82, 0xF6, 0x90));
        draw_text(name, x, y + 1, 0.38f, COL_TEXT, 0, 0);
    }
    if (count > INV_PER_SCREEN) {
        draw_arrow_vertical(inv_up, true, inv_scroll > 0);
        draw_arrow_vertical(inv_down, false, inv_scroll + INV_PER_SCREEN < count);
        snprintf(line, sizeof(line), "%d/%d", inv_scroll / INV_PER_SCREEN + 1, (count + INV_PER_SCREEN - 1) / INV_PER_SCREEN);
        draw_text(line, (inv_up.x + inv_up.w + inv_down.x) / 2, inv_up.y + 5, 0.36f, COL_MUTED, C2D_AlignCenter, 0);
    }
    draw_item_description(ids[*sel]);
}


// The game's minimap, moved here from the top screen's upper left corner (n64_bottom_overlay
// region 3; about 52x54 pixels there at x 54, y 35), enlarged under the area name.
// The world map's bubble for an area (and room: the Flutter is rooms 6-10 of Cardon Forest).
static const WorldBubble* world_bubble_for(int area, int room) {
    const char* name = NULL;
    switch (area) {
        case 3: name = room >= 6 && room <= 10 ? "Flutter" : "Cardon Forest"; break;
        case 12: case 14: case 27: name = "Cardon Forest"; break;
        case 4: name = "Apple Market"; break;
        case 5: name = "Downtown"; break;
        case 6: case 15: name = "City Hall"; break;
        case 8: case 28: name = "Uptown"; break;
        case 10: case 17: case 19: name = "Clozer Woods"; break;
        case 11: case 13: case 20: name = "Lake Jyun"; break;
        case 16: name = "Yass Plains"; break;
        case 9: case 18: case 25: case 26: case 29: name = "Old City"; break;
        default: return NULL;
    }
    for (size_t i = 0; i < sizeof(world_bubble_list) / sizeof(world_bubble_list[0]); i++) {
        if (!strcmp(world_bubble_list[i].name, name)) return &world_bubble_list[i];
    }
    return NULL;
}

static void draw_tex(C3D_Tex* tex, float sx, float sy, float sw, float sh, float x, float y, float w, float h, const C2D_ImageTint* tint) {
    Tex3DS_SubTexture sub = { (u16)sw, (u16)sh, sx / tex->width, 1.0f - sy / tex->height, (sx + sw) / tex->width, 1.0f - (sy + sh) / tex->height };
    C2D_Image img = { tex, &sub };
    C2D_DrawParams params = { { x, y, w, h }, { 0, 0 }, 0, 0 };
    C2D_DrawImage(img, &params, tint);
}

static void draw_map_message(const char* text) {
    draw_text(text, map_area.x + map_area.w / 2, map_area.y + map_area.h / 2 - 8, 0.5f, COL_MUTED, C2D_AlignCenter, 0);
}

// Drawing on the Map page is limited to the map area (the GPU's scissor; the bottom screen's
// framebuffer is portrait, 240x320, so screen (x, y) is (240 - y, 320 - x) there).
static void map_clip(bool on) {
    C2D_Flush();
    if (on) {
        C3D_SetScissor(GPU_SCISSOR_NORMAL, 240 - (u32)(map_area.y + map_area.h), 320 - (u32)(map_area.x + map_area.w),
            240 - (u32)map_area.y, 320 - (u32)map_area.x);
    } else {
        C3D_SetScissor(GPU_SCISSOR_DISABLE, 0, 0, 0, 0);
    }
}

static bool world_hi_ready(void) {
    if (world_hi_state == 0) {
        world_hi_state = -1;
        FILE* f = fopen("romfs:/maps/world_hi.bin", "rb");
        if (f && C3D_TexInit(&world_hi_tex, 512, 512, GPU_RGBA8)) {
            C3D_TexSetFilter(&world_hi_tex, GPU_LINEAR, GPU_LINEAR);
            if (fread(world_hi_tex.data, 1, 512 * 512 * 4, f) == 512 * 512 * 4) {
                C3D_TexFlush(&world_hi_tex);
                world_hi_state = 1;
            } else {
                C3D_TexDelete(&world_hi_tex);
            }
        }
        if (f) fclose(f);
    }
    return world_hi_state > 0;
}

// World map: available from Cardon Forest on (not in the opening dungeon or the opening's scenes).
// Every location bubble shows (at its own size whatever the zoom); the one for where Mega Man is
// gets a blinking outline, and a blinking blue marker sits on the spot it points at. Zoomed in, the
// map comes from a sharper copy and scrolls by dragging.
static void draw_world_map(const Mm64Player* pl) {
    if (!maps_ready || pl->area <= 2) {
        draw_map_message("Map Unavailable");
        return;
    }
    const WorldBubble* here = world_bubble_for(pl->area, pl->room);
    float sc, vx0, vy0;
    bool zoomed = world_zoom > 0 && world_hi_ready();
    if (!zoomed) {
        // Stored at its on-screen size: drawn 1:1 on whole pixels.
        sc = 1;
        vx0 = -floorf((map_area.w - WORLD_MAP_W) / 2);
        vy0 = -floorf((map_area.h - WORLD_MAP_H) / 2);
        draw_tex(&world_tex, 0, 0, WORLD_MAP_W, WORLD_MAP_H, map_area.x - vx0, map_area.y - vy0, WORLD_MAP_W, WORLD_MAP_H, NULL);
    } else {
        sc = world_scale();
        if (world_cx < 0) {
            world_cx = here ? here->tx : WORLD_MAP_W / 2.0f;
            world_cy = here ? here->ty : WORLD_MAP_H / 2.0f;
        }
        float hw = map_area.w / 2 / sc, hh = map_area.h / 2 / sc;
        world_cx = fminf(fmaxf(world_cx, hw), WORLD_MAP_W - hw);
        world_cy = fminf(fmaxf(world_cy, hh), WORLD_MAP_H - hh);
        vx0 = world_cx - hw;
        vy0 = world_cy - hh;
        map_clip(true);
        float k = (float)WORLD_HI_W / WORLD_MAP_W;
        draw_tex(&world_hi_tex, vx0 * k, vy0 * k, 2 * hw * k, 2 * hh * k, map_area.x, map_area.y, map_area.w, map_area.h, NULL);
    }
#define WX(p) (map_area.x + ((p) - vx0) * sc)
#define WY(p) (map_area.y + ((p) - vy0) * sc)
    const u32 line_col = C2D_Color32(0x28, 0x1E, 0x19, 0xFF);
    const size_t count = sizeof(world_bubble_list) / sizeof(world_bubble_list[0]);
    float bx[16], by[16];
    for (size_t i = 0; i < count && i < 16; i++) {
        const WorldBubble* b = &world_bubble_list[i];
        // Each bubble keeps its own size, centred where it was on the whole map.
        bx[i] = floorf(WX(b->x + b->w / 2.0f) - b->w / 2.0f);
        by[i] = floorf(WY(b->y + b->h / 2.0f) - b->h / 2.0f);
        if (b->lx < 0) continue;
        float tx = WX(b->tx), ty = WY(b->ty);
        float lx = fminf(fmaxf(tx, bx[i]), bx[i] + b->w), ly = fminf(fmaxf(ty, by[i]), by[i] + b->h);
        C2D_DrawLine(lx, ly, line_col, tx, ty, line_col, 1.0f, 0);
    }
    for (size_t i = 0; i < count && i < 16; i++) {
        const WorldBubble* b = &world_bubble_list[i];
        draw_tex(&bubbles_tex, b->ax, b->ay, b->w, b->h, bx[i], by[i], b->w, b->h, NULL);
    }
    // Blinking: on for half a second, off for a quarter.
    if (here && fmodf(ui_time, 0.75f) < 0.5f) {
        size_t i = (size_t)(here - world_bubble_list);
        const u32 glow = C2D_Color32(0xFF, 0xE0, 0x30, 0xFF);
        float x = bx[i] - 1, y = by[i] - 1, w = here->w + 2, h = here->h + 2;
        C2D_DrawRectSolid(x, y, 0, w, 1, glow);
        C2D_DrawRectSolid(x, y + h - 1, 0, w, 1, glow);
        C2D_DrawRectSolid(x, y, 0, 1, h, glow);
        C2D_DrawRectSolid(x + w - 1, y, 0, 1, h, glow);
        float mx = WX(here->tx), my = WY(here->ty);
        C2D_DrawCircleSolid(mx, my, 0, 3.2f, C2D_Color32(0xFF, 0xFF, 0xFF, 0xFF));
        C2D_DrawCircleSolid(mx, my, 0, 2.2f, C2D_Color32(0x20, 0x60, 0xF0, 0xFF));
    }
#undef WX
#undef WY
    if (zoomed) map_clip(false);
    draw_button(map_zoom_out, "-", COL_PANEL);
    draw_button(map_zoom_in, "+", COL_PANEL);
}


// Map pixels come from the app's RomFS (tools/make_dungeon_map.py, tools/make_maps.py): a pyramid of
// levels in 256x256 tiles stored ready for the GPU (RGBA8 for the Ocean Tower, ETC1A4 for the rest).
// Tiles are read when first needed into a small cache (least recently used goes; a few reads a
// frame); the coarsest level stands in for tiles not read yet. The cache is freed when the
// dungeon view is not showing.
#define MAP_TILE 256
#define MAP_TILE_CACHE 14
#define MAP_TILE_READS_PER_FRAME 2
typedef struct {
    C3D_Tex tex;
    int level, col, row;
    u32 used; // frame it was last drawn
    bool live, loaded;
} MapTile;
static MapTile map_tiles[MAP_TILE_CACHE];
#define MAP_MAX_LEVELS 8
static FILE* map_level_file[MAP_MAX_LEVELS];
static const MapDef* map_files_of; // the map whose files are open and whose tiles are cached
static int map_tile_reads; // this frame

static void map_tiles_release(void) {
    for (int i = 0; i < MAP_TILE_CACHE; i++) {
        if (map_tiles[i].live) C3D_TexDelete(&map_tiles[i].tex);
        map_tiles[i].live = map_tiles[i].loaded = false;
    }
    for (int l = 0; l < MAP_MAX_LEVELS; l++) {
        if (map_level_file[l]) fclose(map_level_file[l]);
        map_level_file[l] = NULL;
    }
    map_files_of = NULL;
}

// The tile's texture if it is in the cache or could be read now; NULL otherwise, and
// &map_tile_empty for a fully transparent tile (not stored).
static C3D_Tex map_tile_empty;
static C3D_Tex* map_tile(int level, int col, int row) {
    if (map_files_of != cur_map) {
        map_tiles_release(); // another map: its own files, and its own tile formats
        map_files_of = cur_map;
    }
    int slot = map_slot(cur_map, cur_map->level[level].first + row * cur_map->level[level].cols + col);
    if (slot < 0) return &map_tile_empty;
    MapTile* victim = NULL;
    for (int i = 0; i < MAP_TILE_CACHE; i++) {
        MapTile* t = &map_tiles[i];
        if (t->loaded && t->level == level && t->col == col && t->row == row) {
            t->used = frame_count;
            return &t->tex;
        }
        // Reuse a slot not drawn in the last two frames (the GPU may still be reading the last one).
        if (t->loaded && frame_count - t->used < 2) continue;
        if (!victim || !t->loaded || (victim->loaded && t->used < victim->used)) victim = t;
    }
    if (!victim || map_tile_reads >= MAP_TILE_READS_PER_FRAME) return NULL;
    map_tile_reads++;
    if (!map_level_file[level]) {
        char path[64];
        snprintf(path, sizeof(path), "romfs:/maps/%s_%d.bin", cur_map->file, level);
        map_level_file[level] = fopen(path, "rb");
        if (!map_level_file[level]) return NULL;
    }
    if (!victim->live) {
        if (!C3D_TexInit(&victim->tex, MAP_TILE, MAP_TILE, cur_map->format)) return NULL;
        C3D_TexSetFilter(&victim->tex, GPU_LINEAR, GPU_LINEAR);
        C3D_TexSetWrap(&victim->tex, GPU_CLAMP_TO_EDGE, GPU_CLAMP_TO_EDGE);
        victim->live = true;
    }
    const size_t bytes = cur_map->format == GPU_RGBA8 ? MAP_TILE * MAP_TILE * 4 : MAP_TILE * MAP_TILE; // ETC1A4: 1 byte a texel
    FILE* f = map_level_file[level];
    victim->loaded = false;
    if (fseek(f, (long)(slot * bytes), SEEK_SET) || fread(victim->tex.data, 1, bytes, f) != bytes) return NULL;
    C3D_TexFlush(&victim->tex);
    victim->level = level;
    victim->col = col;
    victim->row = row;
    victim->used = frame_count;
    victim->loaded = true;
    return &victim->tex;
}

// Draws the part of one level's tiles inside map rect (mx0, my0)-(mx1, my1); the view's top left is
// map point (vx0, vy0) at sc screen pixels per map pixel. Returns false if a tile was missing.
static bool draw_map_level(int level, float mx0, float my0, float mx1, float my1, float vx0, float vy0, float sc, bool fallback) {
    const MapLevel* L = &cur_map->level[level];
    float k = L->texels; // texels per map pixel
    bool complete = true;
    int c0 = (int)(mx0 * k) / MAP_TILE, c1 = (int)fminf(ceilf(mx1 * k) / MAP_TILE, L->cols - 1);
    int r0 = (int)(my0 * k) / MAP_TILE, r1 = (int)fminf(ceilf(my1 * k) / MAP_TILE, L->rows - 1);
    for (int r = r0; r <= r1; r++) {
        for (int c = c0; c <= c1; c++) {
            // This tile's part of the rect, in texels of the level.
            float tx0 = fmaxf(mx0 * k, c * MAP_TILE), ty0 = fmaxf(my0 * k, r * MAP_TILE);
            float tx1 = fminf(fminf(mx1 * k, (c + 1) * MAP_TILE), L->w), ty1 = fminf(fminf(my1 * k, (r + 1) * MAP_TILE), L->h);
            if (tx1 <= tx0 || ty1 <= ty0) continue;
            C3D_Tex* tex = map_tile(level, c, r);
            if (tex == &map_tile_empty) continue;
            if (!tex) {
                complete = false;
                // Not read yet: the coarsest level in its place.
                if (fallback) draw_map_level(cur_map->levels - 1, tx0 / k, ty0 / k, tx1 / k, ty1 / k, vx0, vy0, sc, false);
                continue;
            }
            draw_tex(tex, tx0 - c * MAP_TILE, ty0 - r * MAP_TILE, tx1 - tx0, ty1 - ty0,
                map_area.x + (tx0 / k - vx0) * sc, map_area.y + (ty0 / k - vy0) * sc, (tx1 - tx0) / k * sc, (ty1 - ty0) / k * sc, NULL);
        }
    }
    return complete;
}

static void draw_dungeon_map(const Mm64Player* pl) {
    // The map of where Mega Man is, else the dungeon map chosen in the Map Binder.
    int id = dungeon_for_place(pl->area, pl->room);
    bool inside = id >= 0;
    if (!inside && dungeon_map_owned(dungeon_shown)) id = dungeon_shown;
    if (!maps_ready || id < 0) {
        draw_map_message("No dungeon map here");
        return;
    }
    if (cur_map != &map_defs[dungeon_list[id].map]) {
        cur_map = &map_defs[dungeon_list[id].map];
        dungeon_cx = -1; // a new map: start in the middle
    }
    float sc = dungeon_scale();
    if (dungeon_cx < 0) {
        dungeon_cx = cur_map->w / 2.0f;
        dungeon_cy = cur_map->h / 2.0f;
    }
    // Keep the view on the map (centred where the map is smaller than the view).
    float hw = map_area.w / 2 / sc, hh = map_area.h / 2 / sc;
    dungeon_cx = cur_map->w <= 2 * hw ? cur_map->w / 2.0f : fminf(fmaxf(dungeon_cx, hw), cur_map->w - hw);
    dungeon_cy = cur_map->h <= 2 * hh ? cur_map->h / 2.0f : fminf(fmaxf(dungeon_cy, hh), cur_map->h - hh);
    float vx0 = dungeon_cx - hw, vy0 = dungeon_cy - hh;
    dungeon_view_x0 = vx0;
    dungeon_view_y0 = vy0;
    drawing_use(id);
    // Only the visible part of the map is drawn (no clipping on the bottom screen).
    float sx0 = fmaxf(0, vx0), sy0 = fmaxf(0, vy0);
    float sx1 = fminf(cur_map->w, vx0 + 2 * hw), sy1 = fminf(cur_map->h, vy0 + 2 * hh);
    map_clip(true);
    // The level with at least one texel per screen pixel (or the finest).
    int level = cur_map->levels - 1;
    while (level > 0 && cur_map->level[level].texels < sc * 0.999f) level--;
    map_tile_reads = 0;
    // Keep the coarsest level read: it stands in for tiles still to come.
    const MapLevel* coarse = &cur_map->level[cur_map->levels - 1];
    for (int r = 0; r < coarse->rows; r++) {
        for (int c = 0; c < coarse->cols; c++) map_tile(cur_map->levels - 1, c, r);
    }
    draw_map_level(level, sx0, sy0, sx1, sy1, vx0, vy0, sc, level != cur_map->levels - 1);
    // With the dungeon's map (Dig Scan) found, its loot: a pulsing gold diamond with a red edge,
    // named once zoomed in far enough.
    bool owned = dungeon_map_owned(id);
    if (owned) {
        float pulse = 3.5f + (fmodf(ui_time, 0.53f) < 0.27f ? 0.0f : 0.8f);
        u32 red = C2D_Color32(0xD0, 0x20, 0x20, 0xFF), gold = C2D_Color32(0xFF, 0xD8, 0x30, 0xFF);
        for (int i = 0; i < cur_map->loot_count; i++) {
            const DungeonLoot* l = &cur_map->loot[i];
            float x = map_area.x + (l->x - vx0) * sc, y = map_area.y + (l->y - vy0) * sc;
            if (x < map_area.x + 4 || x > map_area.x + map_area.w - 4 || y < map_area.y + 4 || y > map_area.y + map_area.h - 4) continue;
            float r = pulse + 1.2f;
            C2D_DrawTriangle(x, y - r, red, x - r, y, red, x + r, y, red, 0);
            C2D_DrawTriangle(x, y + r, red, x - r, y, red, x + r, y, red, 0);
            r = pulse;
            C2D_DrawTriangle(x, y - r, gold, x - r, y, gold, x + r, y, gold, 0);
            C2D_DrawTriangle(x, y + r, gold, x - r, y, gold, x + r, y, gold, 0);
            if (sc >= 0.5f) {
                // Its name under it, kept inside the map.
                float w = text_width(l->name, 0.32f);
                float lx = fminf(fmaxf(x - w / 2, map_area.x + 2), map_area.x + map_area.w - 2 - w);
                draw_text(l->name, lx, y + 6, 0.32f, COL_TEXT, 0, 0);
            }
        }
    }
    // The player's drawing.
    const u32 ink = C2D_Color32(0xFF, 0x30, 0x30, 0xFF);
    for (int i = 1; i < drawing_count; i++) {
        const DrawPoint* a = &drawing[i - 1];
        const DrawPoint* b = &drawing[i];
        if (a->x == 0xFFFF || b->x == 0xFFFF) continue;
        C2D_DrawLine(map_area.x + (a->x - vx0) * sc, map_area.y + (a->y - vy0) * sc, ink,
            map_area.x + (b->x - vx0) * sc, map_area.y + (b->y - vy0) * sc, ink, 2.0f, 0);
    }
    // The Dig Scan found here: its icon in the corner.
    if (owned) draw_dig_scan(DIG_SCAN_LARGE, map_area.x + 2, map_area.y + map_area.h - 2 - DIG_SCAN_LARGE);
    map_clip(false);
    if (!inside) {
        // Viewed from the Map Binder: the dungeon's name in the upper left corner.
        float w = text_width(dungeon_list[id].name, 0.36f) + 8;
        C2D_DrawRectSolid(map_area.x + 2, map_area.y + 2, 0, w, 14, C2D_Color32(0x05, 0x0A, 0x1E, 0xB0));
        draw_text(dungeon_list[id].name, map_area.x + 6, map_area.y + 3, 0.36f, COL_TEXT, 0, 0);
    }
    // Drawing tools.
    draw_button(pen_btn, "Pen", pen_on ? COL_ACCENT : COL_PANEL);
    draw_button(undo_btn, "Undo", COL_PANEL);
    draw_button(clear_btn, clear_armed ? "Sure?" : "Clear", clear_armed ? COL_DANGER : COL_PANEL);
    // Zoom buttons.
    draw_button(map_zoom_out, "-", COL_PANEL);
    draw_button(map_zoom_in, "+", COL_PANEL);
}

static void draw_mini_map(const Mm64Location* loc) {
    draw_text(loc->area_name, map_area.x + map_area.w / 2, map_area.y + 2, 0.5f, COL_TEXT, C2D_AlignCenter, 0);
    // The game's minimap, moved here from the top screen's upper left corner (n64_bottom_overlay
    // region 3; about 52x54 pixels there at x 54, y 35), enlarged.
    const float scale = 2.2f;
    float x = map_area.x + (map_area.w - 52 * scale) / 2, y = map_area.y + 20;
    if (!n64_bottom_overlay(3, 54, 35, x, y, scale)) {
        draw_text("No map shown right now.", map_area.x + map_area.w / 2, y + 45, 0.5f, COL_MUTED, C2D_AlignCenter, 0);
    }
}

static void draw_map(void) {
    Mm64Location loc;
    Mm64Player pl;
    if (!mm64_get_location(&loc) || !mm64_get_player(&pl)) {
        draw_glass(4, TAB_H + 4, SCREEN_W - 8, 170);
        draw_text("Game not running.", 12, TAB_H + 12, 0.5f, COL_MUTED, 0, 0);
        return;
    }
    draw_hud_column();
    draw_glass(content.x, content.y, content.w, content.h);
    for (int i = 0; i < MAP_VIEWS; i++) {
        Rect r = map_view_button(i);
        C2D_DrawRectSolid(r.x, r.y, 0, r.w, r.h, i == (int)map_view ? COL_ACCENT : COL_PANEL);
        // In a town or field with a map of its own, the third view is its "Area" map.
        const char* name = map_view_names[i];
        if (i == MAP_DUNGEON) {
            int id = dungeon_for_place(pl.area, pl.room);
            if (id >= 0 && !dungeon_list[id].dungeon) name = "Area";
        }
        draw_text(name, r.x + r.w / 2, r.y + 3, 0.4f, COL_TEXT, C2D_AlignCenter, 0);
    }
    switch (map_view) {
        case MAP_MINI: draw_mini_map(&loc); break;
        case MAP_WORLD: draw_world_map(&pl); break;
        case MAP_DUNGEON: draw_dungeon_map(&pl); break;
        default: break;
    }
}

// Reaverbots by name (the game doesn't name them; kinds seen so far are listed here, per area and
// descriptor - see mm64_ext_tick). Others show as "Reaverbot (<area>)" until they're named.
static const struct { int area; u32 desc; const char* name; } reaverbot_names[] = {
    { 0, 0x8023E898, "Horokko" }, // the opening dungeon's green hopping Reaverbots
};

typedef struct { char name[40]; unsigned count; } KillRow;

// The kill list merged by name, most defeated first.
static int kill_rows(KillRow* rows, int max) {
    const Mm64Ext* e = mm64_ext();
    int n = 0;
    for (int i = 0; i < MM64_EXT_KILL_KINDS; i++) {
        const Mm64Kill* k = &e->kills[i];
        if (!k->used || !k->count) continue;
        char name[40] = "";
        for (size_t j = 0; j < sizeof(reaverbot_names) / sizeof(reaverbot_names[0]); j++) {
            if (reaverbot_names[j].area == k->area && reaverbot_names[j].desc == k->desc) snprintf(name, sizeof(name), "%s", reaverbot_names[j].name);
        }
        if (!name[0]) {
            char area[24];
            if (!mm64_area_name(k->area, area, sizeof(area))) snprintf(area, sizeof(area), "Area %d", k->area);
            snprintf(name, sizeof(name), "Reaverbot (%s)", area);
        }
        int r = 0;
        while (r < n && strcmp(rows[r].name, name)) r++;
        if (r == n) {
            if (n == max) continue;
            snprintf(rows[n].name, sizeof(rows[n].name), "%s", name);
            rows[n++].count = 0;
        }
        rows[r].count += k->count;
    }
    for (int i = 1; i < n; i++) { // insertion sort, most first
        KillRow t = rows[i];
        int j = i;
        while (j > 0 && rows[j - 1].count < t.count) { rows[j] = rows[j - 1]; j--; }
        rows[j] = t;
    }
    return n;
}

static void draw_status(void) {
    char line[96];
    Mm64Location loc;
    if (!mm64_get_location(&loc)) {
        draw_glass(4, TAB_H + 4, SCREEN_W - 8, 170);
        draw_text("Game not running.", 12, TAB_H + 12, 0.5f, COL_MUTED, 0, 0);
        return;
    }
    draw_hud_column();
    draw_glass(content.x, content.y, content.w, content.h);
    float x = content.x + 8;
    const Mm64Ext* e = mm64_ext();
    if (kills_open) {
        // Reaverbots defeated, by kind: a list that scrolls by dragging (or the arrows).
        draw_text("Reaverbots Defeated", x, TAB_H + 8, 0.46f, C2D_Color32(0x58, 0xF0, 0x70, 0xFF), 0, 0);
        draw_button(status_back, "Back", COL_PANEL);
        KillRow rows[MM64_EXT_KILL_KINDS];
        int n = kill_rows(rows, MM64_EXT_KILL_KINDS);
        float max_scroll = fmaxf(0, n * KILL_ROW_H - kill_list.h);
        kills_scroll = fminf(fmaxf(kills_scroll, 0), max_scroll);
        if (n == 0) draw_text("None yet.", x, kill_list.y + 4, 0.46f, COL_MUTED, 0, 0);
        for (int i = 0; i < n; i++) {
            float y = kill_list.y + i * KILL_ROW_H - kills_scroll;
            if (y < kill_list.y - 1 || y + KILL_ROW_H > kill_list.y + kill_list.h + 1) continue; // whole rows only
            if (i % 2 == 0) C2D_DrawRectSolid(kill_list.x, y, 0, kill_list.w, KILL_ROW_H - 1, C2D_Color32(0x10, 0x20, 0x50, 0x90));
            draw_text(rows[i].name, kill_list.x + 4, y + 2, 0.4f, COL_TEXT, 0, 0);
            snprintf(line, sizeof(line), "%u", rows[i].count);
            draw_text(line, kill_list.x + kill_list.w - 4, y + 2, 0.4f, COL_TEXT, C2D_AlignRight, 0);
        }
        draw_arrow_vertical(status_up, true, kills_scroll > 0);
        draw_arrow_vertical(status_down, false, kills_scroll < max_scroll);
        return;
    }
    draw_text("Area", x, TAB_H + 8, 0.42f, COL_MUTED, 0, 0);
    draw_text(loc.area_name, x, TAB_H + 22, 0.6f, COL_TEXT, 0, 0);
    draw_text("Zenny Earned", x, TAB_H + 50, 0.42f, COL_MUTED, 0, 0);
    snprintf(line, sizeof(line), "%lu", (unsigned long)e->zenny_earned);
    draw_text(line, x, TAB_H + 64, 0.6f, COL_TEXT, 0, 0);
    // Reaverbots defeated: tap for the list by kind.
    C2D_DrawRectSolid(kills_row.x, kills_row.y, 0, kills_row.w, kills_row.h, C2D_Color32(0x10, 0x20, 0x50, 0xC0));
    draw_text("Reaverbots Defeated", kills_row.x + 4, kills_row.y + 3, 0.42f, COL_MUTED, 0, 0);
    snprintf(line, sizeof(line), "%lu", (unsigned long)e->kills_total);
    draw_text(line, kills_row.x + 4, kills_row.y + 17, 0.6f, COL_TEXT, 0, 0);
    draw_text("List >", kills_row.x + kills_row.w - 4, kills_row.y + 17, 0.4f, COL_ACCENT, C2D_AlignRight, 0);
    snprintf(line, sizeof(line), "Notes saved: %d", notes.count);
    draw_text(line, x, TAB_H + 136, 0.45f, COL_TEXT, 0, 0);
}

static void draw_notes_coming_soon(void) {
    float t = fminf(fmaxf((ui_time - notes_opened_at) / 0.25f, 0), 1);
    C2D_DrawRectSolid(0, TAB_H, 0, SCREEN_W, SCREEN_H - TAB_H, C2D_Color32(0x00, 0x00, 0x00, (u8)(0xB0 * t)));
    u32 a = (u32)(0xFF * t);
    draw_text("Coming Soon!", SCREEN_W / 2, SCREEN_H / 2 - 16, 0.9f, (COL_TEXT & 0x00FFFFFF) | (a << 24), C2D_AlignCenter, 0);
}

static void draw_notes(void) {
    char line[96];
    draw_arrow(btn_prev, false);
    draw_arrow(btn_next, true);
    if (notes.count == 0) {
        draw_text("No notes yet", SCREEN_W / 2, 46, 0.55f, COL_TEXT, C2D_AlignCenter, 0);
        draw_text("Tap New to write one. It records the area Mega Man is in.",
            text_box.x + 6, text_box.y + 6, 0.48f, COL_MUTED, C2D_WordWrap, text_box.w - 12);
    } else {
        const Note* note = &notes.items[current_note];
        snprintf(line, sizeof(line), "Note %d of %d", current_note + 1, notes.count);
        draw_text(line, SCREEN_W / 2, 46, 0.55f, COL_TEXT, C2D_AlignCenter, 0);

        char when[32] = "";
        struct tm* t = gmtime(&note->written); // the 3DS clock is local time
        if (t) strftime(when, sizeof(when), "%b %d %H:%M", t);
        snprintf(line, sizeof(line), "%s  \xC2\xB7  %s", note->area_name, when);
        draw_text(line, 12, 74, 0.42f, COL_MUTED, 0, 0);

        C2D_DrawRectSolid(text_box.x, text_box.y, 0, text_box.w, text_box.h, COL_PANEL);
        draw_wrapped(note->text, text_box.x + 6, text_box.y + 4, text_box.w - 12, text_box.h - 8, 0.48f, COL_TEXT);
    }
    draw_button(btn_new, "New", COL_ACCENT);
    draw_button(btn_edit, "Edit", notes.count ? COL_TAB : COL_PANEL);
    draw_button(btn_delete, confirm_delete ? "Sure?" : "Delete", confirm_delete ? COL_DANGER : (notes.count ? COL_TAB : COL_PANEL));
}

static void draw_system(void) {
    char line[96];
    if (sys_mode == SYS_MENU) {
        draw_text("Hardware Options", SCREEN_W / 2, 44, 0.6f, COL_TEXT, C2D_AlignCenter, 0);
        draw_text("v" MM64_VERSION, SCREEN_W - 10, 44, 0.36f, COL_MUTED, C2D_AlignRight, 0);
        draw_framed_button(btn_credits, "Credits", COL_TAB);
        draw_framed_button(btn_widescreen, n64_widescreen ? "Widescreen: On" : "Widescreen: Off", n64_widescreen ? COL_ACCENT : COL_TAB);
        draw_framed_button(btn_sound, sound_surround ? "Sound: Surround" : "Sound: Stereo", sound_surround ? COL_ACCENT : COL_TAB);
        static const char* const labels[4] = { "Save Game", "Load", "Restart", "Quit" };
        for (int i = 0; i < 4; i++) {
            Rect r = system_button(i);
            bool confirming = sys_confirm == i;
            draw_framed(r, confirming ? COL_DANGER : (i < 2 ? COL_ACCENT : COL_TAB));
            draw_text(confirming ? "Tap again" : labels[i], r.x + r.w / 2, r.y + r.h / 2 - 9, 0.6f, COL_TEXT, C2D_AlignCenter, 0);
        }
    } else {
        draw_text(sys_mode == SYS_SAVE ? "Save to which slot?" : "Load which slot?", SCREEN_W / 2, 42, 0.55f, COL_TEXT, C2D_AlignCenter, 0);
        for (int i = 0; i < MM64_SAVE_SLOTS; i++) {
            Rect r = slot_row(i);
            bool usable = sys_mode == SYS_SAVE || slots[i].used;
            bool confirming = sys_confirm == 10 + i;
            draw_framed(r, confirming ? COL_DANGER : (usable ? COL_TAB : COL_PANEL));
            snprintf(line, sizeof(line), "Slot %d", i + 1);
            draw_text(line, r.x + 8, r.y + 4, 0.5f, usable ? COL_TEXT : COL_MUTED, 0, 0);
            if (confirming) {
                draw_text("Tap again to overwrite", r.x + 8, r.y + 21, 0.42f, COL_TEXT, 0, 0);
            } else if (slots[i].used) {
                char when[32] = "";
                struct tm* t = gmtime(&slots[i].saved); // the 3DS clock is local time
                if (t) strftime(when, sizeof(when), "%b %d %H:%M", t);
                snprintf(line, sizeof(line), "%s  \xC2\xB7  %s", slots[i].area_name, when);
                draw_text(line, r.x + 8, r.y + 21, 0.42f, COL_MUTED, 0, 0);
            } else {
                draw_text("Empty", r.x + 8, r.y + 21, 0.42f, COL_MUTED, 0, 0);
            }
        }
        draw_framed_button(btn_back, "Back", COL_PANEL);
    }
    if (sys_busy_slot >= 0) {
        snprintf(line, sizeof(line), "%s slot %d... (happens during gameplay)", sys_mode == SYS_SAVE ? "Saving to" : "Loading", sys_busy_slot + 1);
        draw_text(line, SCREEN_W / 2, 206, 0.42f, COL_TEXT, C2D_AlignCenter, 0);
    } else if (frame_count < sys_message_until) {
        draw_text(sys_message, SCREEN_W / 2, sys_mode == SYS_MENU ? 206 : 186, 0.45f, COL_TEXT, C2D_AlignCenter, 0);
    }
}

static void draw_page(bool paused, const char* footer);

bool bottom_ui_credits_active(void) {
    return credits_open;
}

// Draws the credits into the current scene (the top screen, 400x240).
void bottom_ui_draw_credits(void) {
    const float w = 400, h = 240, line_h = 16, gap_after_heading = 6;
    float y = h + 10 - (ui_time - credits_started) * 24; // 24 pixels a second, from below the screen
    for (size_t i = 0; i < sizeof(credits_lines) / sizeof(credits_lines[0]); i++) {
        bool heading = credits_lines[i][0] == '#';
        float lh = heading ? line_h + 8 + gap_after_heading : line_h;
        if (y + lh > 0 && y < h) {
            if (heading) {
                draw_text(credits_lines[i] + 1, w / 2, y, 0.65f, C2D_Color32(0x58, 0xF0, 0x70, 0xFF), C2D_AlignCenter, 0);
            } else if (credits_lines[i][0]) {
                draw_text(credits_lines[i], w / 2, y, 0.42f, COL_TEXT, C2D_AlignCenter, 0);
            }
        }
        y += lh;
    }
    // Round again once the last line has gone off the top.
    if (y < -10) credits_started = ui_time;
    C2D_DrawRectSolid(0, h - 16, 0, w, 16, C2D_Color32(0x00, 0x00, 0x00, 0xC0));
    draw_text("SELECT: back", w - 8, h - 15, 0.36f, COL_MUTED, C2D_AlignRight, 0);
}


// Cutscenes: the page stays, dimmed and not answering touch, apart from the gauges (the game hides
// its HUD; the bottom screen keeps showing them), with a reminder that Select skips the scene.
static void draw_cutscene(const char* footer) {
    draw_page(false, footer);
    const u32 dim = C2D_Color32(0x00, 0x00, 0x00, 0xA0);
    if (page == PAGE_INVENTORY || page == PAGE_MAP || page == PAGE_STATUS) {
        Rect h = hud_panel;
        C2D_DrawRectSolid(0, 0, 0, SCREEN_W, h.y, dim);
        C2D_DrawRectSolid(0, h.y + h.h, 0, SCREEN_W, SCREEN_H - h.y - h.h, dim);
        C2D_DrawRectSolid(0, h.y, 0, h.x, h.h, dim);
        C2D_DrawRectSolid(h.x + h.w, h.y, 0, SCREEN_W - h.x - h.w, h.h, dim);
    } else {
        C2D_DrawRectSolid(0, 0, 0, SCREEN_W, SCREEN_H, dim);
    }
    // On the Data page (one window across the screen) the message spans that window.
    Rect box = page == PAGE_SYSTEM ? (Rect){ 12, TAB_H + 64, SCREEN_W - 24, 44 } : (Rect){ content.x + 8, TAB_H + 64, content.w - 16, 44 };
    C2D_DrawRectSolid(box.x, box.y, 0, box.w, box.h, C2D_Color32(0x05, 0x0A, 0x1E, 0xE0));
    C2D_DrawRectSolid(box.x, box.y, 0, box.w, 1, COL_ACCENT);
    C2D_DrawRectSolid(box.x, box.y + box.h - 1, 0, box.w, 1, COL_ACCENT);
    draw_text("Press SELECT", box.x + box.w / 2, box.y + 6, 0.5f, COL_TEXT, C2D_AlignCenter, 0);
    draw_text("to skip the cutscene", box.x + box.w / 2, box.y + 24, 0.42f, COL_MUTED, C2D_AlignCenter, 0);
}

static void draw_notice(void) {
    if (ui_time >= notice_until) return;
    Rect box = { 20, SCREEN_H - 62, SCREEN_W - 40, 34 };
    C2D_DrawRectSolid(box.x, box.y, 0, box.w, box.h, C2D_Color32(0x05, 0x0A, 0x1E, 0xF0));
    C2D_DrawRectSolid(box.x, box.y, 0, box.w, 1, COL_ACCENT);
    C2D_DrawRectSolid(box.x, box.y + box.h - 1, 0, box.w, 1, COL_ACCENT);
    if (maps_ready) draw_dig_scan(DIG_SCAN_LARGE, box.x + 4, box.y + (box.h - DIG_SCAN_LARGE) / 2);
    draw_text(notice, box.x + 36, box.y + 9, 0.5f, C2D_Color32(0x58, 0xF0, 0x70, 0xFF), 0, 0);
}

void bottom_ui_draw(bool paused, const char* footer) {
    C2D_TextBufClear(text_buf);
    if (mm64_in_cutscene()) {
        draw_cutscene(footer);
    } else {
        draw_page(paused, footer);
    }
    draw_notice();
}

// --- No ROM (shared builds: the player's own dump, rom_check.c) --------------------------------------

// While the ROM is read through the first time (a few seconds).
void bottom_ui_draw_rom_progress(const char* message, int percent) {
    C2D_TextBufClear(text_buf);
    draw_menu_background();
    draw_glass(4, 4, SCREEN_W - 8, SCREEN_H - 8);
    draw_text("Checking the ROM", SCREEN_W / 2, 40, 0.7f, COL_TEXT, C2D_AlignCenter, 0);
    draw_text(message, SCREEN_W / 2, 92, 0.45f, COL_TEXT, C2D_AlignCenter, 0);
    C2D_DrawRectSolid(40, 112, 0, 240, 14, COL_PANEL);
    C2D_DrawRectSolid(42, 114, 0, 236 * percent / 100, 10, COL_ACCENT);
    draw_text("Only the first time.", SCREEN_W / 2, 140, 0.45f, COL_MUTED, C2D_AlignCenter, 0);
}

// No usable ROM: what was found and where the player's dump goes.
void bottom_ui_draw_rom_help(const char* state, const char* found) {
    u32 warn = C2D_Color32(0xFF, 0xC0, 0x60, 0xFF);
    C2D_TextBufClear(text_buf);
    draw_menu_background();
    draw_glass(4, 4, SCREEN_W - 8, SCREEN_H - 8);
    draw_text("Mega Man 64 ROM", SCREEN_W / 2, 12, 0.7f, COL_TEXT, C2D_AlignCenter, 0);
    float y = 44;
    draw_text(state, 12, y, 0.45f, warn, 0, 0);
    if (found && found[0]) draw_text(found, 12, y += 16, 0.4f, COL_MUTED, C2D_WordWrap, SCREEN_W - 24);
    // (No colons: the game font draws them like semicolons.)
    draw_text("Put your own dump of Mega Man 64 (USA)", 12, y += 30, 0.45f, COL_TEXT, 0, 0);
    draw_text("on the SD card, in " MM64_DATA_DIR "/", 12, y += 16, 0.45f, COL_TEXT, 0, 0);
    draw_text("(or in /roms/n64/)", 12, y += 16, 0.45f, COL_TEXT, 0, 0);
    draw_text("Any file name. .z64, .v64 or .n64. 32 MB.", 12, y += 20, 0.45f, COL_MUTED, 0, 0);
    draw_text("SHA-1 of the right one (as .z64)", 12, y += 16, 0.45f, COL_MUTED, 0, 0);
    char half[21];
    snprintf(half, sizeof(half), "%.20s", ROM_SHA1_USA);
    draw_text(half, 24, y += 16, 0.45f, COL_MUTED, 0, 0);
    draw_text(ROM_SHA1_USA + 20, 24, y += 16, 0.45f, COL_MUTED, 0, 0);
    draw_text("Then start the game again. START to exit.", SCREEN_W / 2, 210, 0.45f, COL_TEXT, C2D_AlignCenter, 0);
}

// The top screen meanwhile (400 wide).
void bottom_ui_draw_rom_top(const char* state) {
    u32 warn = C2D_Color32(0xFF, 0xC0, 0x60, 0xFF);
    C2D_TextBufClear(text_buf);
    draw_text("Mega Man 64", 200, 64, 0.9f, COL_TEXT, C2D_AlignCenter, 0);
    draw_text("ROM needed", 200, 98, 0.7f, COL_TEXT, C2D_AlignCenter, 0);
    draw_text(state, 200, 146, 0.45f, warn, C2D_AlignCenter, 0);
    draw_text("See the bottom screen for what to do.", 200, 170, 0.45f, COL_MUTED, C2D_AlignCenter, 0);
    draw_text("v" MM64_VERSION, 392, 222, 0.36f, COL_MUTED, C2D_AlignRight, 0);
}

static void draw_page(bool paused, const char* footer) {
    draw_menu_background();
    if (credits_open) {
        draw_text("Credits", SCREEN_W / 2, SCREEN_H / 2 - 30, 0.7f, COL_TEXT, C2D_AlignCenter, 0);
        draw_text("are on the top screen.", SCREEN_W / 2, SCREEN_H / 2 - 4, 0.45f, COL_MUTED, C2D_AlignCenter, 0);
        draw_text("Press SELECT to return.", SCREEN_W / 2, SCREEN_H / 2 + 16, 0.45f, COL_MUTED, C2D_AlignCenter, 0);
        return;
    }
    draw_tabs();
    switch (page) {
        case PAGE_INVENTORY: draw_inventory(); break;
        case PAGE_MAP: draw_map(); break;
        case PAGE_STATUS: draw_status(); break;
        case PAGE_NOTES:
            // Notes only: no gauges, Zenny or hints.
            draw_glass(4, TAB_H + 4, SCREEN_W - 8, SCREEN_H - TAB_H - 8);
            draw_notes();
            if (!NOTES_ENABLED) draw_notes_coming_soon();
            break;
        case PAGE_SYSTEM:
            draw_glass(4, TAB_H + 4, SCREEN_W - 8, SCREEN_H - TAB_H - 8);
            draw_system();
            break;
        default: break;
    }
    if (page != PAGE_MAP || map_view != MAP_DUNGEON) map_tiles_release(); // the dungeon map's tile cache
    if (page != PAGE_NOTES && page != PAGE_SYSTEM && page != PAGE_INVENTORY) {
        C2D_DrawRectSolid(0, SCREEN_H - 30, 0, SCREEN_W, 30, COL_GLASS);
        draw_text(paused ? "Game paused \xC2\xB7 Start to resume" : "Start: pause game", 8, SCREEN_H - 28, 0.42f, COL_MUTED, 0, 0);
    }
    if (footer) draw_text(footer, 8, SCREEN_H - 14, 0.36f, C2D_Color32(0x64, 0x74, 0x8B, 0xFF), 0, 0);
}
