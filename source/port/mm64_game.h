#ifndef MM64_GAME_H
#define MM64_GAME_H

// C interface between the 3DS front end (main.c) and the C++ game runtime (mm64_game.cpp).

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    MM64_BOOT_STARTED,
    MM64_BOOT_ROM_NOT_FOUND,
    MM64_BOOT_ROM_WRONG_FORMAT,
    MM64_BOOT_OUT_OF_MEMORY,
} Mm64BootResult;

typedef struct {
    unsigned display_lists; // graphics tasks the game submitted
    unsigned display_lists_done; // ... and finished interpreting
    unsigned frames;        // VI frames presented
    unsigned audio_tasks;   // audio microcode tasks executed
    unsigned audio_rsp_ms; // total time in the audio microcode
    unsigned audio_queued_frames, audio_dropped_frames; // sent to / dropped before NDSP
    int audio_peak;        // loudest sample so far (0 = silence)
    bool audio_playing;    // NDSP channel running
} Mm64Stats;

// Starts the game on its own threads and returns immediately.
Mm64BootResult mm64_boot(const char* rom_path, const char* data_path);

void mm64_get_stats(Mm64Stats* out);

// Freezes the game (no VI/AI interrupts, audio paused) while the front end keeps running.
void mm64_set_paused(bool paused);

// Main thread, once per frame: current 3DS controls (hidKeysHeld, Circle Pad). While the game is
// paused the N64 controller reads as idle. Mapping in input_3ds.cpp / docs/CONTROLS.md.
void mm64_input_update(unsigned keys_held, int circle_x, int circle_y, int cstick_x, int cstick_y, bool game_paused);

void mm64_shutdown(void);

// Game state for the bottom screen, read from game RAM. All return false before the game has booted.
typedef struct {
    int area;            // the game's stage number (what its save files record)
    char area_name[24];  // e.g. "Apple Market", from the game's own location-name table
} Mm64Location;
bool mm64_get_location(Mm64Location* out);
bool mm64_area_name(int area, char* out, unsigned size); // the name the bottom screen uses for an area

// The game's menu sounds, for the bottom screen (played natively, so also while paused).
enum { MM64_SOUND_CURSOR, MM64_SOUND_SELECT, MM64_SOUND_BACK };
void mm64_ui_sound(int which);
void mm64_audio_status(char* out, unsigned size); // one line on the sound output (Data page)
void mm64_set_surround(bool on); // sound output: the console's virtual surround, or plain stereo
bool mm64_in_cutscene(void);

// Inventory, read from game RAM (see mm64_game.cpp). Sections as in the game's start menu.
typedef enum { MM64_ITEMS_NORMAL, MM64_ITEMS_SPECIAL, MM64_ITEMS_BUSTER, MM64_ITEMS_WEAPONS, MM64_ITEM_SECTIONS } Mm64ItemSection;
// Fills `ids` with the owned item IDs of a section (in ID order); returns how many.
int mm64_get_items(Mm64ItemSection section, unsigned char* ids, int max);
// The game's own name for an item ID (UTF-8; its alpha/omega part marks become Greek letters).
bool mm64_item_name(int id, char* out, unsigned size);
// Zenny as the game shows it.
bool mm64_get_zenny(unsigned* out);

// Mega Man's gauges (drawn on the bottom screen; the top-screen versions are hidden, mm64_patches.cpp).
typedef struct {
    int life, life_max;
    bool weapon_shown;        // a special weapon with an energy gauge is equipped
    int energy, energy_max;   // energy_max 0x7FFF = unlimited
} Mm64Gauges;
bool mm64_get_gauges(Mm64Gauges* out);

// Development: log the most recent recompiled functions entered (needs trace_mode in the recomp config).
void mm64_trace_dump(void);

// Development: sampling profiler over recompiled functions (needs trace_mode).
void mm64_profile_start(void);
void mm64_profile_dump(void);

// Development: read a 32-bit word of N64 RDRAM (KSEG0 address).
unsigned int mm64_debug_peek(unsigned int address);

// Development: log every area name (see mm64_get_location).
void mm64_debug_log_area_names(void);

typedef struct {
    int x, y, z;   // game units; z is height
    int yaw;       // 4096 per turn
    int area, room;
} Mm64Player;
bool mm64_get_player(Mm64Player* out);

#ifdef __cplusplus
}
#endif

#endif
