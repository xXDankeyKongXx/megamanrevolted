# Bottom Screen Design Spec

Requested by the user on 2026-10-17. Status: **implemented** (see Implementation).

## 1. Pause behavior
- **Start** toggles pause. It pauses the **top screen (the game) only**.
- The bottom screen stays live and interactive while the game is paused.
- Implementation idea: the runtime stops advancing the game threads/VI ticks while paused, and the
  3DS-side UI loop keeps running at 60 Hz on the bottom screen.

## 2. Menu pages (toggle between them on the bottom screen)
The bottom screen hosts the game's Start-menu options as pages the player can switch between
(tab bar / L-R / touch), for example:
- **Inventory** (and other in-game start-menu options: equipment, special items, status, map…)
  — read from game RAM (addresses to be mapped in Phase 3/4 from the decomp symbols + RAM search).
- **Notes** (new, 3DS-only page — see §3).

## 3. Notes page (3DS-only feature)
- Write notes (software keyboard via `swkbd`, possibly touch handwriting later).
- Multiple notes; **save** them and **swap between** them on that page.
- Each note **stores the name of the area where it was made** (e.g. "Apple Market"), so the player
  knows which part of the world it's about. (Clarified by the user: the area name, not coordinates.)
- Persisted to the SD card (e.g. `sdmc:/3ds/mm64/notes.json`), separate from the game save.

## 4. Cutscenes
- While a cutscene plays, the bottom screen shows a **Mega Man design/animation**.
- It is decorative only — **no input, no menu** during the cutscene.
- Needs: a reliable "cutscene active" flag in game RAM (to find in Phase 3/4) and the artwork asset.

## Open questions
- Artwork for the cutscene screen: the user supplies an image/animation, or we make an original pixel-art design.
- Which in-game menus to mirror first (Inventory is confirmed).
- Whether paused-state should also mute game audio (assumed yes).

## Implementation (2026-10-17)
Code: `source/ui/bottom_ui.c` (pages, cutscene screen), `source/ui/notes.c` (storage),
game-state reads in `source/port/mm64_game.cpp` (`mm64_get_location`, `mm64_in_cutscene`).
- **Tabs**: Inventory | Status | Notes. Touch the tab bar any time; L/R switch pages while paused.
- **Pause**: Start pauses the game (top screen) only; the bottom screen stays live.
- **Notes**: New / Edit / Delete (tap twice) buttons, arrows to swap notes, tap the text to edit.
  Writing uses the system keyboard; the game is paused while it is open. Each note stores the area
  (number and name, e.g. "Apple Market") and the time when it was started. Saved to
  `sdmc:/3ds/mm64/notes.txt` (one line per note, written via a temp file).
- **Cutscenes**: while `D_801BC5B0` (the game's HUD-hidden flag, set during cutscenes; found by
  diffing RAM snapshots, see `snapshots.txt` support in main.c) is set and the game isn't paused, the
  bottom screen shows only the start menu's scrolling background and ignores input. (Changed
  2026-10-17 at the user's request; it first showed a pixel-art Mega Man.)
- **Status**: the current area's name and the number of notes.
- **Background**: the game's own start-menu tile (64x64 CI4), tiled and drifting diagonally behind
  translucent panels and on the cutscene screen. The game's assets are compressed in the ROM in a
  format the port doesn't decode, so the tile was captured once from the renderer (decoded, in
  PICA200 layout) and is embedded in the build: `source/ui/menu_bg_tile.inc`.
- **Area names**: current stage byte `D_801BC438` (the value the game writes into its save file),
  named with the game's own 31-entry, 13-character location table at RAM 0x800B2BFC (ROM 0x8DFFC),
  the one its save screen uses. Text is in the game's glyph code (a-n = 0x30.., o-z = 0x3F..,
  A-T = 0x15.., U-Z = 0x2A.., space 0x4F; found by pattern-searching RAM for the start menu's
  "Use normal items."). Stage 0 (the prologue, "No data" in the table) shows as "Prologue ruins";
  unnamed placeholder stages show as "Area N". Some names repeat (two City Halls, Main Gates…).
  Verified in-game: all 31 entries decode as expected; only stage 0 has been reached in testing.

- **Inventory** (2026-10-18): Zenny plus the owned items of the start menu's four sections
  (Items, Special, Buster, Weapons; touch buttons, two-column list with up/down paging), using the
  game's own item names. Game data (found in the code, confirmed by writing values and opening the
  game's start menu):
  - Owning item ID n = event flag 0x500 + n - 4; flags are a bit array at 0x802055A8, MSB first.
  - Sections by ID: Buster Parts 4-35, Special Items 36-65, Normal Items 68-128, Special Weapons
    132-145 (66/67, 91 "EMPTY" and 129-131 "JUNK-ITEM" are placeholders).
  - Names: pointer table by item ID at RAM 0x800B28B4; glyph-coded strings ending at 0x91; 0xA0 is
    a spacing code with two parameter bytes; 0x80/0x81 are the alpha/omega part marks.
  - Zenny: word at 0x801BC404, shown x10 by the game (writing 7 shows 70 in its menu).
- **HUD column and Zenny box** (2026-10-18): Inventory and Status pages show a left column with the
  game's own life and weapon-energy gauges, moved off the top screen; Notes shows only the notes.
  - The renderer diverts the gauge triangles (no depth, screen-space, inside the gauge boxes on the
    top screen: life x 38-100, energy x 300-350, y 125-244) into a separate overlay list, but only
    while the game shows them (life: bit 2 of 0x801BC660; energy: 0x80204B21 set and bit 2 of
    0x801BC684). n64_bottom_overlay() draws that list on the bottom screen at any offset/scale.
  - Zenny uses the game's start-menu ZENNY box and digits (CI4 sheet at RAM 0x80168200, stride
    128, only resident while the start menu is open), decoded once into source/ui/zenny_sheet.inc.
- **Map tab** (2026-10-18), next to Inventory: the game's minimap, moved off the top screen's upper
  left corner (frame x 53-110, y 35-92) and drawn 2.4x under the area name, beside the HUD column.
  The minimap routine is func_8004A81C (drawn while 0x801BC441 == 0 and bit 1 of 0x800AD0C8).
  - Diversion only while the game's HUD routines ran since the last display list: native overrides
    of func_80049204 (first step of the gauge routine) and func_8004A6B4 (minimap pass) count their
    calls. Without this the start menu's own boxes in those corners were moved too.
- **System page / save states** (2026-10-18): button at the right of the tab bar with Data, the save
  monkey, doing his save dance with the game's own model (source/ui/data_sprite.inc).
  - How he was captured: Data first appears at the Flutter crash site (warp 3 1) once its cutscene
    has played; NPC records are 0x3C8 bytes from 0x801FFBE0 (position s16 at +0x14 and 16.16 at
    +0x1C), Data is the third (0x80200370). Mega Man was placed next to him facing -y (yaw 0, 4096
    per turn) to talk ("Hi! My name's Data! ... Come talk to me if you want to save"), then talked to
    again for the save dance, with the renderer's capture mode on (pokes.txt "<vi> isolate 314700
    316000": only draws textured from his textures at RDRAM 0x314700-0x316000, zoomed, on magenta,
    no compositing). Key poses saved to assets/data/*.png; tools/make_data_sprite.py keys out the
    magenta, mirrors the leans and packs the atlas.
- Native replacements (mm64_patches.cpp): the asset decompressor func_80026C80 (LZSS, logs
  "[asset]" lines on test runs; tools/unpack_assets.py unpacks the ROM's archive from them) and
  the event-flag test func_8006033C (logs "[flag]" lines on test runs).
  Save Game / Load (3 slots on SD at sdmc:/3ds/mm64/savestates/slotN.bin, with area name and time),
  Restart (relaunches the app: aptSetChainloaderToSelf) and Quit (to the HOME menu); Restart, Quit
  and overwriting a used slot need a second tap. Implementation: source/port/mm64_savestate.cpp.
  - Not a memory snapshot: the game runs each "process" as its own thread with native stacks, which
    RDRAM can't restore. A slot holds the game's own save image (func_800740B0 + func_800743A8 pack
    it at 0x80193C70, 0x1800 bytes) plus Mega Man's position block (0x802049C4, 0x30 bytes) and yaw.
  - Save runs in the HUD pass (func_80049204 override, main game thread). Load is armed there and runs
    at the start of the main process' next frame (func_80029114 override): unpack (func_80074A9C,
    func_80069A40), release the stage (func_80061724), clear 0x801BC46A, restart the main loop
    0x8003E1B8 via func_800292E8 (ends the thread; the process tick starts a new one). Three HUD passes
    later the position is written back.
  - Saving/loading only happens during gameplay; requests time out after ~10 s elsewhere. Enemies,
    dialogue and other room state restart with the room. Loading across areas uses the same path
    but has only been tested within the prologue.
- **Inventory like the game's start menu** (2026-10-18): Special Items as the game's 18-slot icon
  grid (icons from the menu's sheet at RAM 0x802A9300, extracted by tools/extract_icons.py into
  source/ui/item_icons.inc; slot order = the menu's message order, jackets/keys/ID cards grouped
  with counts), other sections as a selectable two-column list; the selected item's name (green)
  and description sit in a panel along the bottom.
  - Descriptions: the menu's message bank (RAM 0x802B94B0 while the menu is open: u16 LE offsets,
    then messages). Buster Parts/Normal Items = message 96 + item ID, Special Weapons 95 + ID,
    Special Items matched by the name in the message. tools/extract_item_text.py ->
    source/ui/item_text.inc. Message text codes: 0x86 line break, 0x95/0x9F end, 0xA0/0x8A/0x8C/
    0x93/0x89/0x9C control codes with parameters; 0x0C ', 0x13 , 0x4B &, 0x4E /, 0x5C ,, 0x61 +, 0x82 ;.
- **Asset compression** (for later): func_80026C80 is the ROM loader's LZSS (4 KB ring at
  0x800D5F70 starting at 0xFEE, flag byte LSB first, 1 = literal, else 12-bit position + 4-bit
  length + 3; stream starts with the uncompressed size). func_80027334(rom_start, rom_end, dest).
- **Dev warp**: pokes.txt line `<vi> warp <area> <room>` runs the area-change path used by
  save-state loads. Areas: 1 opening narration, 2 ending-type scene, 3 Cardon Forest (room 1 the
  Flutter crash site, 5 a house, 6 Roll's room, 7 Flutter corridor, 8 Mega Man's room; 9/10 hang),
  4 Apple Market, 5 Downtown, 6 City Hall, 21-24/30 cutscene stages.
- **Game font** (v13): bottom-screen text is drawn with the game's own font (source/ui/game_font.inc
  from tools/make_game_font.py; draw_text in bottom_ui.c), at whole/half multiples of its 12-pixel
  size so it stays crisp; text with characters the game's font lacks falls back to the system font.
  Font sheet: RAM 0x800B5104, 4-bit, 128 bytes per row; 12-row bands of 20 glyphs starting 24 px in
  (the last glyph runs over the row end), bands starting at codes 0x15, 0x2A, 0x3F, 0x53, 0x67,
  0x7B; the band before the sheet holds 0-9 and ' ! ? ( ). Palette index 1 = body, 2 = softer body,
  3 = drop shadow. (The C-Down -> Y glyph patch in mm64_patches.cpp assumed 21 glyphs per row from
  x 0; worth re-checking against this layout.)
- Dev tools used: `pokes.txt` (write RAM at a VI), VI-timed `autoinput.txt` with `TAP:<n>`.

## Still to do
- Equipped Buster parts / special weapon aren't shown yet; item icons are not drawn yet.
