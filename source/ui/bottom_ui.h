// Bottom-screen UI (docs/BOTTOM_SCREEN_SPEC.md): menu pages the player switches between with the
// tab bar or L/R (L/R only while paused, since they are game buttons in play), a Notes page, and a
// decorative Mega Man screen while a cutscene plays.
#ifndef BOTTOM_UI_H
#define BOTTOM_UI_H

#include <3ds.h>
#include <stdbool.h>

// What the System page asks the main loop to do.
typedef enum {
    BOTTOM_UI_NONE,
    BOTTOM_UI_RESUME,   // unpause the game (a save or load needs it running)
    BOTTOM_UI_RESTART,  // restart the app
    BOTTOM_UI_QUIT,     // quit to the HOME menu
} BottomUiAction;

void bottom_ui_init(const char* data_path);
void bottom_ui_exit(void);

// Once per frame, before drawing, with this frame's newly pressed keys and touch position. May open
// the system keyboard (the game is paused while it's up).
void bottom_ui_update(u32 down, u32 held, touchPosition touch, bool paused);
// Credits (opened from the Data page): drawn on the top screen while open; the game waits.
bool bottom_ui_credits_active(void);
void bottom_ui_draw_credits(void); // into the current scene (the top screen)

// Returns and clears the System page's request for the main loop, if any.
BottomUiAction bottom_ui_take_action(void);

// Draws into the current citro2d scene (the bottom screen target). `footer` is a development line.
void bottom_ui_draw(bool paused, const char* footer);

// Shared builds with no usable ROM on the SD card (rom_check.c): checking progress (0-100), then
// what to do, on the bottom screen; and a pointer to it on the top screen (a 400-wide scene).
void bottom_ui_draw_rom_progress(const char* message, int percent);
void bottom_ui_draw_rom_help(const char* state, const char* found);
void bottom_ui_draw_rom_top(const char* state);

#endif
