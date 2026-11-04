# Controls (3DS → N64)

Defined in `source/port/input_3ds.cpp`.

| 3DS | N64 / action |
|---|---|
| Circle Pad | Analog stick |
| A / B | A / B |
| ZL / ZR (New 3DS) | Z (lock-on) |
| L / R | L / R |
| X | C-Up |
| Y | C-Down (talk / inspect; the dialogue shows a Y icon for it) |
| C-Stick (New 3DS) | Camera: holds the game's free look (C-Right) and steers it - up/down tilt, left/right turn. Up/down follow the game's Options > Free Look (Reverse by default; Normal makes up look up) |
| D-Pad | D-Pad |
| **Select** | N64 **Start** (the game's own menu) |
| **Start** | Pause the top screen only (game + audio freeze; bottom screen stays live) |
| Start + Select | Quit the app |
| Touch (top tabs) | Switch bottom-screen page |
| L / R while paused | Switch bottom-screen page |

Notes
- The 3DS Start button is reserved for the pause described in `docs/BOTTOM_SCREEN_SPEC.md`,
  which is why N64 Start is on Select.
- Old 3DS has no ZL/ZR/C-Stick: lock-on, the game's C-Left action and the camera are unreachable there.
- The game's C-Left action has no 3DS button (the C-Stick is the camera).
- A Rumble Pak is reported as inserted (like the PC port); the 3DS has no motor, so rumble is ignored.
- Development: `sdmc:/3ds/mm64/autoinput.txt` scripts button presses for automated test runs
  (format in `source/main.c`, `autoinput_load`).

## Old 3DS / 2DS (no C-Stick, ZL or ZR)

Detected at run time, in either build:

| 3DS | N64 / action |
|---|---|
| D-Pad Up | Z (lock-on) |
| D-Pad Down (hold) | Camera: the game's free look, steered with the Circle Pad |
| D-Pad Left / Right | As on the New 3DS (turn) |
| Everything else | As above |
