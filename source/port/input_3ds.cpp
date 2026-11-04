#include <cstdio>
// 3DS controls -> N64 controller for ultramodern's input callbacks.
// The main thread publishes a snapshot each frame (mm64_input_update); the game thread reads it
// from get_input. Mapping is documented in docs/CONTROLS.md.

#include <3ds.h>

#include <algorithm>
#include <atomic>

#include "input_3ds.hpp"
#include "mm64_game.h"
#include "mm64_platform.h"

namespace {

// libultra button bits
constexpr uint16_t N64_A = 0x8000, N64_B = 0x4000, N64_Z = 0x2000, N64_START = 0x1000;
constexpr uint16_t N64_DU = 0x0800, N64_DD = 0x0400, N64_DL = 0x0200, N64_DR = 0x0100;
constexpr uint16_t N64_L = 0x0020, N64_R = 0x0010;
constexpr uint16_t N64_CU = 0x0008, N64_CD = 0x0004, N64_CL = 0x0002, N64_CR = 0x0001;

struct Mapping {
    u32 key;
    uint16_t n64;
};

// 3DS Start is reserved for the front end (pause the top screen), so N64 Start is on Select.
constexpr Mapping mappings[] = {
    { KEY_A, N64_A },
    { KEY_B, N64_B },
    { KEY_ZL, N64_Z },  // lock-on
    { KEY_ZR, N64_Z },
    { KEY_SELECT, N64_START },
    { KEY_L, N64_L },
    { KEY_R, N64_R },
    { KEY_DUP, N64_DU },
    { KEY_DDOWN, N64_DD },
    { KEY_DLEFT, N64_DL },
    { KEY_DRIGHT, N64_DR },
    { KEY_X, N64_CU },
    { KEY_Y, N64_CD },  // talk / inspect (the game's C-Down); its dialogue icon shows a Y (mm64_patches.cpp)
};

// Circle Pad reports roughly +/-156 at full tilt; the C-Stick about the same.
constexpr float circle_pad_max = 150.0f;
constexpr int cstick_deadzone = 24;

std::atomic<uint16_t> n64_buttons{ 0 };
std::atomic<int16_t> pad_x{ 0 }, pad_y{ 0 };

} // namespace

// The C-Stick is the camera. The game has no free camera: it stays behind Mega Man, and holding C-Right
// gives a free-look view whose direction the analog stick moves (up/down tilt, left/right turn). So
// while the C-Stick is pushed, C-Right is held for it and its direction stands in for the Circle Pad.
extern "C" void mm64_input_update(unsigned keys_held, int circle_x, int circle_y, int cstick_x, int cstick_y, bool game_paused) {
    if (game_paused) {
        // The game is frozen; buttons belong to the bottom-screen UI.
        n64_buttons = 0;
        pad_x = 0;
        pad_y = 0;
        return;
    }
    uint16_t buttons = 0;
    for (const Mapping& m : mappings) {
        if (keys_held & m.key) buttons |= m.n64;
    }
    // Old 3DS (no ZL/ZR or C-Stick): D-Pad Up is lock-on (Z), and holding D-Pad Down is the camera -
    // free look, steered with the Circle Pad. (The D-Pad's other uses are covered by the Circle Pad.)
    if (!mm64_is_new3ds()) {
        buttons &= (uint16_t)~(N64_DU | N64_DD);
        if (keys_held & KEY_DUP) buttons |= N64_Z;
        if (keys_held & KEY_DDOWN) buttons |= N64_CR;
    }
    // Scripted input (autoinput) gives only the C-Stick's direction bits.
    if (cstick_x == 0 && cstick_y == 0) {
        cstick_x = (keys_held & KEY_CSTICK_RIGHT) ? 150 : (keys_held & KEY_CSTICK_LEFT) ? -150 : 0;
        cstick_y = (keys_held & KEY_CSTICK_UP) ? 150 : (keys_held & KEY_CSTICK_DOWN) ? -150 : 0;
    }
    if (cstick_x * cstick_x + cstick_y * cstick_y > cstick_deadzone * cstick_deadzone) {
        buttons |= N64_CR;
        circle_x = cstick_x;
        circle_y = cstick_y;
    }
    n64_buttons = buttons;
    pad_x = (int16_t)circle_x;
    pad_y = (int16_t)circle_y;
}

extern "C" { extern volatile bool mm64_boot_skip; } // mm64_game.cpp

bool input3ds::get_input(int controller_num, uint16_t* buttons, float* x, float* y) {
    if (controller_num != 0) return false;
    *buttons = n64_buttons;
    static unsigned skip_polls;
    if (mm64_boot_skip) {
        // Skipping the boot narration: tap Start (pressed every other block of 4 polls), once it has
        // been running for a while; skipping while it still loads hangs the game.
        unsigned p = skip_polls++;
        if (p >= 20 && (p - 20) % 30 < 4) {
            *buttons |= N64_START;
            if ((p - 20) % 30 == 0) fprintf(stderr, "[skip] tap at poll %u, %.2f s\n", p, svcGetSystemTick() / (double)SYSCLOCK_ARM11);
        }
    } else {
        skip_polls = 0;
    }
    *x = std::clamp(pad_x / circle_pad_max, -1.0f, 1.0f);
    *y = std::clamp(pad_y / circle_pad_max, -1.0f, 1.0f);
    return true;
}
