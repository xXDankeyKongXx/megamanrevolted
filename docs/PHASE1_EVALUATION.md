# Phase 1 — Project Evaluation (N64Recomp route)

## ROM
- `Mega Man 64.z64` — USA (`NM6E`), big-endian z64.
- SHA-1 `f24fe0aff01aec018e2dd558ec4f076cf328129f` — **matches** what MegaMan64Recompiled and MegaMan64Decomp expect.
- N64Recomp config expects it at `MegaMan64.us.rev1.z64`.

## Reference repos (`reference/`, shallow clones, read-only)
| Repo | Use |
|---|---|
| MegaMan64Recompiled | `us.rev1.toml` (entrypoint 0x80025C00, stubs, hooks), `aspMain.us.rev1.toml`, game-specific patches |
| MegaMan64RecompSyms | `megaman64.us.rev1.syms.toml` — 45 sections, ~10k functions, 258 named |
| N64Recomp | Recompiler (`N64Recomp`, `RSPRecomp`) — runs on the PC, not on 3DS |
| N64ModernRuntime | `ultramodern` (libultra reimplementation) + `librecomp` (PI/flash/overlays/cont) |
| MegaMan64Recompiled-Mobile | Proof the recomp builds for ARM (Android/iOS) |
| MegaMan64Decomp | Barely started (8 C functions) — symbol/name source only |

## Code layout
- `.main`: ROM 0x1000, VRAM 0x80025C00, 0xAD8D0 bytes.
- 32 large overlays sharing VRAM 0x80225150; 10 small ones (+_1 variants) at 0x802584C0.
- Overlays are loaded by `Overlay_Loader` → hooked to `recomp_load_overlays`.

## Libraries the game links
- **libultra OS**: threads, message queues, timers, VI manager, PI manager, `osScheduler` (`__sc*`).
- **Graphics microcode**: `gspF3DEX2_fifo` + `gspL3DEX2_fifo` (standard GBI → translatable).
- **Audio**: libultra synth (`alSyn*`, `alAdpcmPull`, …) + `aspMain` RSP audio ucode (RSPRecomp → C).
- **Saves**: FlashRAM (`osFlash*`, 128 KiB). Also Controller Pak (`osPfs*`) and Rumble (`osMotor*`).
- **Input**: `osCont*`, `PadMgr_ThreadEntry`.
- libc bits: `_Printf`, `sprintf`, `bcopy`, `__divdi3`/`__udivdi3`.

## What we keep vs. replace for 3DS
| Piece | Status |
|---|---|
| Recompiled game C (`RecompiledFuncs/`) | Keep — portable C, compile with devkitARM |
| RSP audio (aspMain → C) | Keep — runs on CPU |
| librecomp (overlays, flash, PI, cont glue) | Keep, minor porting (std::filesystem paths → sdmc:/) |
| ultramodern threads/events/timers | **Port** to libctru threads/LightEvents (has Win32/pthread backends) |
| RDRAM allocation | **Rewrite** — uses 4 GB VirtualAlloc/mmap reservation with guard pages; 3DS has no mmap → plain 8 MB linear buffer + bounds strategy |
| RT64 renderer | **Replace** — write F3DEX2 → Citro3D (PICA200) renderer |
| SDL audio/input, RmlUi menus | **Replace** — NDSP, hid*, bottom-screen UI |

## Known risks
1. **64-bit registers**: `typedef uint64_t gpr` — every recompiled op is 64-bit math on a 32-bit ARM11. Biggest performance risk; may need an N64Recomp patch to emit 32-bit ops where safe.
2. **No virtual-memory tricks** on 3DS: guard-page reservation must go.
3. **Code size**: ~2.8 MB of MIPS code/data → likely 10–20 MB ARM binary. Fits New 3DS (124/178 MB app RAM); tight on Old 3DS.
4. **Renderer**: PICA200 is fixed-function-ish (no programmable fragment shader) — N64 combiner modes must map to TEV stages.

## Tooling found on this PC
- Citra Nightly installed at `C:\Users\gates\AppData\Local\Citra\nightly-mingw\citra-qt.exe` (project has a shortcut only).
- git, Python 3.12 present. **No** devkitPro, make, or ARM toolchain yet.

---

# Phase 2 — Toolchain (step 1: devkitPro) ✅

- Installed at **`G:\devkitPro`** (C: has ~0.1 GB free — keep everything off C:).
- devkitARM r68 (GCC 16.1.0), libctru 2.7.0, citro3d 1.7.1, citro2d 1.7.0, picasso 2.7.2, tex3ds 2.3.0, 3dstools 1.3.1, 3ds-cmake.
- `DEVKITPRO`/`DEVKITARM` are **not** set in the Windows environment; they are set by the devkitPro MSYS2 login shell (`/opt/devkitpro`). Build with:
  `G:\devkitPro\msys2\usr\bin\bash.exe -lc "cd '<dir>' && make"` (with `MSYSTEM=MSYS`).
- Smoke test: `build-test/both_screens` built to `.3dsx` and launched in Citra Nightly.
- Not yet installed (Phase 6): `makerom` and `bannertool` for CIA packaging.

# Phase 2 — step 2: PC-side recomp tools ✅

- Host compiler: existing MinGW g++ 12.1 at `C:\msys64\mingw64\bin` (nothing new installed on C:).
- CMake 4.0.2 from devkitPro's MSYS2. Build script: `tools/build_n64recomp.sh`
  (needs `-DCMAKE_DEPENDS_USE_COMPILER=OFF` — MSYS cmake can't parse MinGW `C:/` depfile paths).
- Output: `tools/n64recomp/N64Recomp.exe`, `tools/n64recomp/RSPRecomp.exe`.

# Phase 2 — step 3: recompile the ROM ✅

- 3DS configs: `recomp/us.rev1.3ds.toml` (PC-only RT64 tagging/widescreen hooks removed; keeps
  overlay-loader hook, main-thread yield, graphics-thread stubs) and `recomp/aspMain.us.rev1.3ds.toml`.
- Run from `recomp/`: `../tools/n64recomp/N64Recomp.exe us.rev1.3ds.toml` then
  `../tools/n64recomp/RSPRecomp.exe aspMain.us.rev1.3ds.toml`.
- Result: 10,202 functions → `recomp/RecompiledFuncs/` (205 `funcs_N.c`, `funcs.h`, `lookup.cpp`,
  `recomp_overlays.inl`, 58 MB) and `recomp/rsp/aspMain.cpp`. Generated — regenerate, don't hand-edit.
- `runtime/include/recomp.h` = 3DS copy of N64Recomp's header. Change: portable DMULT/DMULTU
  (ARM32 GCC has no `__int128`), verified bit-exact vs. native int128 on 400k cases. Game code never
  calls DMULT/DMULTU, but the header must compile.
- ARM compile smoke test: `tools/test_compile_recomp.sh` (objects in `tools/test-objs/`).

# Phase 2 — step 4: local Citra + project Makefile ✅

- **Portable Citra** at `citra/` (copied from the C: install). `citra/user/` makes it portable, so its
  SD card is `citra/user/sdmc/` on G:. Settings copied from the C: install; New 3DS mode is on.
- **Makefile** (devkitPro 3DS template): target `mm64-3ds`, links citro2d/citro3d/ctru, C++20.
  - `make` → `mm64-3ds.3dsx`
  - `make deploy` → copies the 3dsx + ROM (`MegaMan64.us.rev1.z64`) to `citra/user/sdmc/3ds/mm64/`
  - `make run` → deploy + launch the local Citra (run from your own terminal; Claude's sandbox closes
    child windows when its command ends, so Claude launches Citra via PowerShell Start-Process instead).
  - Build shell: `G:\devkitPro\msys2\usr\bin\bash.exe -lc "cd '/g/!VibeCodeMashups/Megaman643DS' && make run"`
- **Skeleton app** `source/main.c`: top = status console (hardware, ROM check, frame counter);
  bottom = citro2d page tabs (Inventory / Notes) per `docs/BOTTOM_SCREEN_SPEC.md`; Start pauses the
  top only; L/R or touch switch pages; Start+Select exits. Recompiled code is **not linked yet**.

## Phase 3 to-do (from the compile test)
- 75+ libultra `*_recomp` functions → port N64ModernRuntime (ultramodern/librecomp) to libctru.
  Not yet provided anywhere: `osPfsNumFiles`, `osPfsRepairId`, `osUnmapTLBAll`.
- Game hooks: `recomp_load_overlays`, `yield_self`.
- RDRAM: replace VirtualAlloc/mmap reservation with a linear 8 MB buffer.
- ARM code size of recompiled game: ~7.9 MB text (198/202 files measured) + 23 KB audio ucode.

# Phase 3 — OS layer (in progress)

## Design
- N64ModernRuntime is callback-driven (renderer, audio, input, RSP, errors), so it is ported nearly
  as-is and the 3DS pieces plug in through callbacks.
- `runtime/ultramodern/`, `runtime/librecomp/` (core files only) copied from the reference clone.
  3DS edits are marked "3DS port":
  - `thirdparty/concurrentqueue/lightweightsemaphore.h`: semaphore backend on libctru kernel
    semaphores (`svcCreateSemaphore` / `svcWaitSynchronization`, supports timed waits).
  - `include/ultramodern/renderer_context.hpp`: `WindowHandle = void*` on 3DS.
  - `ultramodern/threads.cpp`: no-op thread name/priority on 3DS.
  - `ultramodern/error_handling.cpp`: `std::_Exit` (newlib has no `quick_exit`).
  - `ultramodern/rsp.cpp` renamed `ultramodern_rsp.cpp` (devkitPro Makefile names objects by basename).
- `runtime/librecomp/recomp_3ds.cpp` replaces librecomp's `recomp.cpp`: no mod loader, no JIT, no
  launcher; RDRAM is a plain 8 MB buffer (no mmap guard pages on 3DS); ROM read from SD as `.z64`.
- `source/port/mm64_game.cpp`: game entry (`megaman.n64.us.1.0`, FlashRAM), overlay table,
  `recomp_load_overlays` hook, stubs for `osPfsNumFiles`/`osPfsRepairId`/`osUnmapTLBAll`,
  audio RSP tasks → recompiled `aspMain`, placeholder renderer/audio/input that only count activity.
- Build flags: C++ exceptions + RTTI on; `-funwind-tables` everywhere because ultramodern ends N64
  threads by throwing through recompiled C frames; no `-g` (debug info for 58 MB of C is huge).
- Saves: `sdmc:/3ds/mm64/saves/megaman.n64.us.1.0.bin` (same identity as the PC/mobile ports).

## Phase 3 status (2026-10-17)
- ✅ Full app links: game + ported runtime + front end → `mm64-3ds.3dsx` (9.1 MB).
- ✅ Fixed on the way: `extern "C"` around libctru SVC includes; generated functions marked `weak`
  under GCC (runtime's `__divdi3_recomp` etc. override, as on Clang/PC); libultra `osGetTime`
  renamed `ultramodern_osGetTime` (clashes with libctru); hook declarations via
  `recomp_include` → `source/port/mm64_hooks.h`; GCC ICE on funcs_183.c under heavy `-j` (use `-j6`).
- ✅ ROM is **streamed from SD** for PI DMA (`pi.cpp`, `recomp::set_rom_file`): loading all 32 MB
  threw `std::bad_alloc` (3dsx app heap ≈ 64 MB minus 32 MB linear heap minus code).
- ✅ Boot reaches the game entrypoint (`runtime.log`), UI keeps running.
- ✅ **Heap corruption fixed:** the runtime stores PI handles at `0x80800000` (just past the game's
  8 MB) and patch data from `0x80801000`; PC maps 512 MB so it never noticed. RDRAM is now 9 MB.
- ✅ **Starvation fixed:** the 3DS kernel doesn't time-slice equal priorities, so a spinning game
  thread froze the VI thread. `set_native_thread_priority` now maps: VI 0x19, timer 0x1A,
  SP task/gfx 0x1B, game threads 0x31 (below the UI main thread at 0x30).
- ✅ **Game hang fixed:** `nuGfxTaskAllEndWait` (`func_80092EB0_6E2B0`) busy-waits; native override
  in `source/port/mm64_patches.cpp` yields 1 ms per check (same fix as the PC port). Recompiled
  functions are weak, so any native function with the same name overrides it — that's the patch
  mechanism (no MIPS compiler needed). PC-only patches (widescreen, RT64 tags) not ported.
- ✅ **Milestone:** game runs its loop in Citra (New 3DS mode) for 60 s+: ~15 display lists/s,
  ~30 audio tasks/s, VI 60 Hz, no crashes. Nothing is drawn yet (placeholder renderer) — Phase 4.
- Diagnostics: `citra/user/sdmc/3ds/mm64/runtime.log` (stderr) and `status.txt` (stats every 2 s).
- ⚠️ C: drive hit 0 MB free during this session; tools (and Citra) need some free space on C:.

# Phase 4 — Renderer (core working)

## Architecture
- `source/render/n64_renderer.cpp` (graphics thread): F3DEX2/RDP display-list interpreter. CPU
  transform & lighting (matrices, viewport, lights, texgen, fog alpha, culling), RDP state, texture
  loads tracked by TMEM address and decoded from RDRAM (RGBA16/32, IA4/8/16, I4/8, CI4/8 + TLUT) into
  8x8-tiled RGBA8, fill/texture rectangles (incl. COPY/FILL modes, flip), scissor. Builds one
  `FrameData` per N64 framebuffer; publishes it when the VI starts showing that framebuffer.
  Frames that don't redraw the whole screen are composited onto the previous frame (one level).
- `source/render/c3d_backend.cpp` (main thread): N64 combiner `(a-b)*c+d` → PICA200 TexEnv stages
  (constant folding, lerp/MAD fusion, 2-cycle via combiner buffer), blend/alpha-test/depth/scissor,
  texture cache, redundant-state elimination. Top screen = 240x400 portrait target, 4:3 pillarbox.
- `source/render/n64.v.pica`: pass-through vertex shader (vertices arrive in clip space).
- Verified on screen: Licensed-by-Nintendo, CAPCOM logo (hundreds of tiles), title backdrop (sky/sea).

## Bugs found and fixed on the way
- Texture V flip (double flip), `C3D_TexBind(1, nullptr)` crash in citro2d's next draw,
  citro2d text corrupted (restore alpha blend/cull/scissor after the N64 pass),
  GPU command buffer overflow at ~500 draws (1 MB cmdbuf + redundant-state elimination),
  compositing snowball (coverage test + one-level composite).

## Known gaps / next steps
- 3D gameplay not verified yet (needs input to get past the title — Phase 5).
- Not implemented: fog blending, L3DEX2 lines, LOD/mipmaps, YUV, exact N64 signed combiner math.
- **Citra is slow** with any top-screen GPU rendering on this PC (even citro2d): ~25-40% speed.
  Not a 3DS-side cost (guest CPU headroom identical with/without drawing). A newer emulator
  (Azahar, Citra's maintained successor) should be tried for faster iteration.
- Guest CPU hits 0% idle in heavy scenes — real-hardware performance work needed later
  (64-bit gpr ops, texture hashing per draw, running the gfx thread on a second core).
- Debug aids currently ON: N64Recomp `trace_mode` (trace.h ring buffer), watchdog, perf logs,
  screenshot every 180 frames (`DEV_SCREENSHOT_INTERVAL` in main.c). Turn off for release builds.
- Tools: `tools/test_run.ps1` (timed Citra run + logs), `tools/snap.py` (screenshot → PNG).

# Phase 4 follow-ups (2026-10-17, with Azahar)
- **Azahar 2126.2** (portable, `azahar/`, data in `azahar/user/`) runs ~3-4x faster than the 2022
  Citra nightly here. Default test emulator: `tools/run_emu.ps1 [-Emu azahar|citra]`,
  `tools/test_run.ps1`; `make deploy` copies to both emulators' SD cards.
- Fixed: 2-cycle combiner (COMBINED now read from PREVIOUS at cycle 2's first stage; buffer path
  only for multi-stage cycle 2, with the correct stage-1..4 buffer mask), frames piling up per
  framebuffer (full-screen fill resets it), full RDP blender decode (P/A/M/B → opaque / alpha /
  constant alpha / keep-memory).
- Verified on screen: title screen with 3D logo + Servbots, intro text, **first 3D gameplay scene
  (Mega Man in the ruins)**.

# Phase 5 — Input, audio, pause ✅ (first pass)
- Input: `source/port/input_3ds.cpp` (mapping in `docs/CONTROLS.md`). Verified by scripted input
  (`autoinput.txt`) driving the game from the title into gameplay.
- Audio: `source/port/audio_3ds.cpp` — NDSP channel 0, stereo PCM16, 24 wave buffers, accurate
  "frames remaining". Needs `sdmc:/3ds/dspfirm.cdc` (real 3DS: run DSP1 once; emulators: any
  placeholder file — one is in `azahar/user/sdmc/3ds/`). Not yet listened to.
- Pause: 3DS Start → `mm64_set_paused` → ultramodern stops VI/AI interrupts + NDSP channel paused.
  Verified: display lists and audio tasks freeze while the UI keeps running.
- Rumble Pak reported as inserted (as on PC).
- Diagnostics added: blocked-thread table (`ultramodern_debug_dump_waits`), shown-frame dump on stall.

## Post-menu stall fix (2026-10-17)
The ~35-40 s black screen after the title menu had two causes, both CPU starvation of the graphics
threads (NuSystem gfx manager pri 60, frame thread pri 50):
1. **No preemption.** ultramodern only switches game threads inside OS calls, so a low-priority
   thread in a long loop (an O(n^2) object-list quicksort, func_8002E34C, in a pri-10 thread) held
   the CPU while VI/SP/DP messages piled up. Fix: recompiled-function entry (`TRACE_ENTRY`,
   `source/port/trace.h`) is now an interrupt point: when an external message is pending it calls
   `ultramodern_preempt_point` (mesgqueue.cpp), which delivers it and yields to a higher-priority
   thread, unless the game disabled interrupts (`__osDisableInt`/`__osRestoreInt` now tracked).
2. **Audio slower than real time.** The recompiled RSP audio microcode (aspMain) has no SIMD path on
   ARM11: a 24-voice scene took ~39 ms per 16.7 ms audio frame, so the audio threads (pri 110/70)
   never yielded. Fix: `source/port/audio_hle.cpp`, a native implementation of the microcode's
   command list (NuSystem n_audio ABI: ADPCM, RESAMPLE, ENVMIXER, MIXER, ...). It follows the
   microcode's arithmetic and matched it **bit-exactly on all ~2,840 tasks** of a 2-minute run
   (`MM64_AUDIO_COMPARE` in mm64_game.cpp re-runs that check). Heavy scene now ~9.6 ms per task.
Also: PI DMA from the SD-card ROM now goes through a 4 MB LRU cache of 64 KB blocks (pi.cpp).
Result: display lists keep rising through the former stall (Azahar, 120 s autoinput run).

## First user test fixes (2026-10-17)
From the user's test on Android Azahar (no audio, missing item in the first cutscene, a crash in that
cutscene, choppy frame rate):
- **Audio on emulators**: without `sdmc:/3ds/dspfirm.cdc` NDSP failed to start. Under Citra/Azahar
  (detected by svcGetSystemInfo 0x20000) a blank firmware image is passed to `ndspUseComponent`;
  their DSP emulation accepts any image. A real console still needs the DSP1 dump.
- **Missing crystal**: its combiner multiplies alpha by LOD_FRAC, which the backend treated as 0.
  Without mip levels the RDP reports 0xFF ("distant"), so LOD_FRAC is now 1.0.
- **Frame rate** (Azahar, opening cutscene ~15 -> ~28 fps, first corridor ~5 -> ~14 fps):
  - Runtime threads on chosen cores (`runtime/include/ultramodern/core_thread.hpp`; std::thread
    always used core 0): game threads, audio-task and display-list threads on the New 3DS's core 2,
    UI on core 0.
  - Native `memcpy` override (the game's copies byte by byte) in `source/port/mm64_patches.cpp`.
  - Audio HLE: mixer/resampler/envelope mixer on host-order sample arrays with ARM saturating
    instructions (still bit-exact on 5,800 compared tasks).
  - Top screen redrawn only when the game finishes a frame (citro3d keeps the last image).
  - Bottom screen: parsed text cached across frames, note wrapping cached, debug footer only on
    scripted test runs.
  - Texture binding: per-display-list memo and a faster word-wise hash of texture source bytes.
  - Still heavy: display-list interpretation (~35 ms per gameplay frame in Azahar) and the
    game's own logic; gameplay in Mega Man 64 is slow on N64 too.
- **Crash / freeze**: the user's crash wasn't reproduced as such. After moving threads to core 2,
  a full stall appeared at one point of the opening cutscene (VI ~4800-4950). Heartbeat counters
  (`ultramodern_debug_dump_native`, in the watchdog log) showed the graphics thread stuck in its
  action-queue wait while nothing on core 2 progressed. Cause: priority-inversion livelock in
  moodycamel's LightweightSemaphore. A signaller raises the atomic count and then releases the
  kernel semaphore; a waiter whose timeout fired in between spins until the release. The 3DS
  kernel doesn't time-slice, so when the signaller was a lower-priority game thread on the same core
  (preempted by the waking graphics thread), it never ran again. On 3DS the waiter now blocks on
  the kernel semaphore once a release is owed (`lightweightsemaphore.h`). Also: moodycamel's queue
  identified producer threads by `std::this_thread::get_id()`, which libctru threads created with
  `threadCreate` don't have distinct values for; it now uses its thread-local-address id on 3DS.

## Enemy-area performance (2026-10-17)
User report: frame rate drops sharply in areas with enemies; goal 30-60 fps natively. Measured in
the prologue's Reaverbot fight with a scripted run (autoinput now uses game VI time, so scripts
survive performance changes; `snapshots.txt` likewise, with full RAM/texture/draw dumps only when
`snapshots_full.txt` exists). A phase sampler (interpreter phase marker + audio flag, sampled by the
1 ms profiler thread, logged as `[cores]`) showed the game core saturated: audio ~28%, texture
hashing/decoding ~27%, geometry ~20%, game code ~20%.
- Audio microcode thread moved to core 0 (the UI leaves it mostly idle).
- Texture caches no longer thrash: the interpreter kept at most 512 decoded textures and cleared
  them all when full (a busy area binds ~500 per frame), so it re-decoded constantly; now 2048 with
  eviction of textures unused for 4 display lists. GPU-side cache limit 400 -> 1024.
- Texture source cache: each source (address + layout) keeps its content hash and a 16-word
  fingerprint; the full hash is redone only when the fingerprint changes or every 8th display list.
  Hashed bytes per frame ~150 KB -> ~5 KB. Palette hash computed once per LOADTLUT.
- Result (Azahar): fight ~11.5 -> 27-29 fps (dips to ~23), corridor ~14 -> 29-30, cutscenes 30.
- The game caps itself at 30 fps (title demo runs at exactly 30), so 30 is the native ceiling;
  60 would need frame interpolation.
- Black areas when the camera is pressed against a wall are normal game behaviour (user).

## Y as inspect, more headroom (2026-10-17)
- 3DS Y is now N64 C-Down (talk / inspect). The dialogue's C-Down icon (font glyph code 0x53; the
  font is a 4-bit sheet in static data at RAM 0x800B5104, glyph index = code - 0x12) is redrawn as a
  Y in the game's button style at boot (`mm64_patch_font`, mm64_patches.cpp, via on_init_callback).
- Game-core load at 30 fps in the first corridor went from ~88% to ~75%: persistent texture bind
  cache (one lookup + fingerprint per repeat bind; texture lookups 12% -> 3%), vertices read as words
  with precomputed factors (10% -> 6%), fewer divisions per emitted vertex, draws moved not copied.
- Autoinput: `TAP:<n>` repeats a line's buttons every n VIs; up to 256 steps.

## Open issues
- Audio HLE could be made faster still (~30% of CPU in the 24-voice scene on the emulator).
- Performance on real hardware (guest CPU saturates in heavy scenes), fog, lines, mipmaps.
- Bottom-screen Inventory page: item/weapon/Zenny RAM not located yet (Status, Notes, cutscene
  screen are done, see docs/BOTTOM_SCREEN_SPEC.md).

## v13 (2026-10-18): opening and boot logo

- Boot logo: rectangles now read a zero shade colour like the RDP (they have none); the Capcom
  logo's full-screen background quad uses SHADE and had come out white instead of black.
- Opening order: the game goes logo -> "In a world covered by endless water..." narration (main
  loop 0x8003E1B8 in area 1) -> title (front end 0x8005D240) and New Game starts the main loop in
  area 0. mm64_scene_redirect (mm64_game.cpp, fed by a native func_800292E8) skips the narration at
  boot the way a player does (input_3ds.cpp taps Start once a second while it runs, top screen held
  black; skipping during its first moments or holding Start into the title hangs the front end) and
  plays it when a new game starts: area 1 with 0x801BC46A = 0x80 (no player in the scene), then
  area 0 with the new game's values once it ends or is skipped. Save-state loads bypass this.
  Development: DATA_PATH/original_opening.txt keeps the game's own order.

## v14 (2026-10-18): HUD diversion fixes

- Only HUD-textured 2D draws (texture source RDRAM 0x162000-0x166C00) can be moved to the bottom
  screen: the opening narration's ocean, drawn the same way in the life gauge's corner, had gone
  missing (a black box on the left).
- A HUD pass now counts for 4 display lists, so frames rendered without one no longer flash the
  gauges back onto the top screen.
- Gauges centred in their column; the version line sits inside the System page's panel.

## v16 (2026-10-18): Map sub-tabs
- Map page has three views: Mini Map (the game's minimap, as before), World Map (default) and Dungeon.
- World Map: the user's island map (tools/make_world_map.py -> source/ui/world_map.inc), bubbles cut
  out into an atlas. Shows "Map Unavailable" in areas 0-2 (opening dungeon and scenes); otherwise only
  the current area's bubble, with a blinking blue marker where it points (area -> bubble table in
  world_bubble_for, bottom_ui.c).
- Dungeon: the Ocean Tower isometric map (tools/make_dungeon_map.py -> data/ocean_tower.bin,
  958x512 RGBA5551, and source/ui/dungeon_map.inc). Drag to scroll, -/+ to zoom (fit, 0.35-1.0).
  Loot spots are stored in ocean_tower_loot[] and hidden (for a future reveal item). Mega Man's head
  (map_icon.inc) is placed by an affine calibration from area 0 room 1's start corridor; exact along
  that corridor, approximate elsewhere.
- Game-font text snapped to whole pixels (letters dropped at half-pixel positions).
- Dev: autoinput DRAG:<x>,<y> moves a held touch without a new press.

## v17 (2026-10-18): new world map art
- World map is now the user's redrawn island (assets/maps/world2_src.png), stored at its on-screen
  size (155x144, drawn 1:1), background outside the pipe frame transparent.
- All ten location bubbles show, redrawn smaller in the original style; their places come from an
  affine fit of red landmark icons shared by the old and new maps (fit error under 7 source px).
- The bubble for where Mega Man is gets a blinking yellow outline; the blue marker still blinks on
  its spot.

## v18 (2026-10-18): Dig Scan dungeon maps and the Map Binder
- Dig Scan (source/ui/dungeon_maps.c/.h): one map item per dungeon (registry: Ocean Tower = area 0).
  Owned maps are a bit mask saved in DATA_PATH/dungeon_maps.txt and cleared on New Game. Not
  obtainable in the game yet; dev grant: pokes.txt "<vi> digscan <dungeon>".
- With a dungeon's Dig Scan: its loot shows on the Dungeon view (pulsing gold diamonds, names once
  zoomed to 0.5+), and the Dig Scan icon (tools/make_dig_scan_icon.py) sits in the map's corner.
- Map Binder: Special Items slot 19 (after the game's 18), shown once any Dig Scan is owned. Tapping it
  lists the dungeon maps found; tapping one opens it on the Map tab (also viewable outside the dungeon,
  with its name in the corner).
- To do when made obtainable: tie owned maps to the game's save file instead of one app-wide file.

## v19 (2026-10-18): map image quality
- RomFS turned on (Makefile ROMFS := romfs, romfsInit in main.c, cia.rsf RootPath romfs).
- Dungeon map: a tile pyramid in romfs/maps/ocean_tower_<n>.bin (tools/make_dungeon_map.py), level 0
  at the original picture's full resolution (2487x1328), RGBA8 (no more 16-bit banding). 256x256
  tiles are read on demand into a 14-tile cache (3.5 MB of linear memory, freed when the Dungeon view
  is not showing), 2 reads per frame, with the coarsest level standing in meanwhile. Zoom now goes
  to 1.5 and 2.6 (the original's own pixels). The old data/ocean_tower.bin is gone.
- Dig Scan icon pre-scaled to the sizes it is shown at (26 and 18 px) and drawn 1:1; the dungeon
  map's badge has no backing box. Mega Man's head on the dungeon map drawn 1:1 (16 px).

## v20 (2026-10-18): smaller build
- v19 (31 MB) was over the 30 MB phone upload limit. Fully transparent dungeon-map tiles are no longer
  stored (ocean_tower_tile_slots[] in dungeon_map.inc, -1 = empty): 26 of 83 tiles, 25.7 MB build.

## v21 (2026-10-19): bottom-screen frame pacing
Measured in Azahar with a new log line ([perf] frames: gaps between UI frames in vblanks). Before:
mostly 2-vblank gaps (30 fps) and ~6 stalls of 3+ vblanks per 60 frames, ~43 UI fps.
- Audio tasks (~6 ms each, ~30/s, core 0 above the UI) started mid-frame and pushed UI frames past a
  vblank. Now a new audio task waits (max 8 ms) while the UI is building a frame
  (ultramodern_ui_busy, set between C3D_FrameBegin and C3D_FrameEnd) and runs in the UI's idle
  time. Tried and rejected: audio below the UI (audio dropouts 28 vs 2, game 7% slower) and audio on
  core 1 with APT_SetAppCpuTimeLimit (game ~12 fps).
- No SD card I/O on the UI thread: status.txt was rewritten every 10 frames (the 3+ vblank stalls);
  now the watchdog writes it every 2 s. stderr is buffered in memory (32 KB) and flushed by the
  watchdog every 2 s and on terminate / runtime message boxes.
- Bottom-screen animations (background scroll, Data, blinks, loot pulse) run on real time, so they
  keep an even speed when a frame is late.
- After: ~55 UI fps; 60 fps in most stretches, an even 30 when the game draws every frame (GPU-bound
  top screen); no 3+ vblank stalls; audio and game speed as before.

## v22 (2026-10-19): per-save data, save/Continue fixes, map, status, drawing, sounds
- **Game saves were never written** on 3DS: librecomp's finalize used std::filesystem::copy_file,
  which fails on the SD card (every save logged "Failed to write to the save file", .bin stayed
  empty). runtime/librecomp/files.cpp now renames (old -> .bak, .temp -> save).
- **Continue was broken since v13**: the opening reorder treated every title -> main loop with area 0
  as New Game. Continue is bit 0 of the scene flags 0x801BC46A (+0x82 of the main loop's state at
  0x801BC3E8; func_8003E2F0 unpacks the save when set); New Game now requires it clear.
- Per-save data (source/port/mm64_ext.*): Dig Scans, Zenny Earned, kills. Stored in the unused tail
  of the game's flash slot (+0x1C00; slot N at N*0x2000, image at +0, name at +0x1900) by a hook at
  the start of func_800875E8 (recomp/us.rev1.3ds.toml; slot = name digits [4..5]); loaded on Continue
  by matching the loaded image against each slot; in save states (SlotFile v3); cleared on New Game.
  dungeon_maps.txt is gone. Dev: pokes "gamesave N" (a real game save to slot N).
- Cutscenes: page dimmed except the gauge column, "Press SELECT to skip the cutscene"; the renderer
  keeps the last frame that drew each HUD part (overlay_source) so gauges stay while the HUD is hidden.
- Dungeon head icon: room 1 recalibrated (start = corridor dead end (660,252), 6910-unit walk ends at
  (895,362), +x up-right at the same scale); rooms have separate coordinates; other rooms not shown.
- Map tab: view/zooms/positions saved to map_view.txt; Dungeon head button recentres; World Map
  zooms (1, 1.6, 2.4, 3.3) and drags using romfs/maps/world_hi.bin (512x476); map drawing clipped
  with the GPU scissor.
- Status: Zenny Earned and Reaverbots Defeated (tap: list by kind). Kills: actor slots 0-7 at
  0x801FFBE0 (0x3C8 each), in use when byte 2 = 3, byte 0 3 -> 0 on defeat; kind = descriptor word
  at +0x78 (area overlay; 0x8023E898 = Horokko in area 0). Counting pauses 2 s after loads and room
  changes. Unknown kinds show as "Reaverbot (<area>)" until named in reaverbot_names[].
- Dungeon drawing: Pen / Undo / Clear (two taps), strokes in map pixels, drawing_<dungeon>.bin.
- Menu sounds: the game's own (ids via a native func_8002A2F8: 129 cursor, 130 select, 131 back,
  132 menu open), recorded from the port's output at boot (pokes "audiorec", "sfx"), cut by
  tools/make_ui_sounds.py into data/ui_*.bin and played on NDSP channel 1 (works while paused).
- Fixed: stylus release never reached the Map page (drags/strokes didn't end).

## v23-v24 (2026-10-19): first CIA
- `make cia` works (see docs/CIA_BUILD.md): version-stamped, copied to dist/, RomFS included,
  installed and run in Azahar. v24 removes the bottom screen's debug counters (DL/VI/draws/verts).

## v25 (2026-10-19): first real-hardware fix
- User report: the CIA on a New 3DS showed the splash and went back to the HOME menu. Cause: a 3DS
  application may hold only 8 kernel semaphores, and the runtime's queues each created one
  (moodycamel LightweightSemaphore -> svcCreateSemaphore). Azahar logs "ResourceLimit ... exceeds
  limit 8 for resource type 5" for the installed CIA and the game stalled at VI 3; the .3dsx in the
  emulator didn't hit the limit, so this was never seen. Now a user-space semaphore on the address
  arbiter (runtime/thirdparty/concurrentqueue/lightweightsemaphore.h); no kernel objects per queue.
  Installed CIA: 0 limit errors, game runs.
- The log is unbuffered for the first 600 UI frames, so early failures are recorded.

## v26 (2026-10-19): standalone CIA
- The ROM is packed into the app (romfs/rom/megaman64.z64); main.c uses the SD card's ROM if present
  and valid, else the packed one. Tested: installed CIA with no ROM on the SD card boots and plays.
- Audio without DSP firmware: CSND backend in audio_3ds.cpp (two looping mono rings, position from
  the system clock, menu sounds on a third channel), used when ndspInit fails (no dspfirm.cdc) or
  with DATA_PATH/force_csnd.txt. Tested in Azahar: no drops, normal game speed (Azahar's CSND output
  itself not verified by ear).
- Sizes: CIA ~56 MB, .3dsx ~60 MB (the ROM is 32 MB and barely compresses).

## v27 (2026-10-19): CIA crash on hardware fixed
- User's New 3DS: Luma exception screen, data abort (permission) writing 0x1FF57FFE, PC in
  ndspSetCounter (libctru NDSP writing DSP shared memory). The rsf mapped 1ff00000-1ff7ffff
  read-only (":r"); now read/write. (HBL's host maps it RW, Azahar doesn't enforce it.)

## v28 (2026-10-19): crash log for real hardware
- v27 on the user's New 3DS: data abort on core 2 (game thread) in func_800870A0 reading through
  0xA0B4FBEB (past the 8 MB of RDRAM): the game loop walks a block of 16-bit values sized by
  halfwords at +4/+6 of its first argument, which held garbage. Doesn't happen in Azahar.
- crash_log.c: every runtime thread (CoreThread) and the main thread get a libctru exception handler
  that writes sdmc:/3ds/mm64/crash.txt (registers, core, last 64 game functions, area/room/scene
  flags, time) through FS directly, then panics. Azahar doesn't raise data aborts for the test write
  (pokes "crashtest"), so it's untested there. The matching ELF for symbol lookup is kept as
  dist/mm64-3ds-v28.elf.

## v29 (2026-10-19): Notes closed for now
- On the user's New 3DS, v28 runs (the func_800870A0 crash didn't recur), but New note crashes
  when it opens the system keyboard (swkbd); fine in Azahar. Cause not known yet (crash.txt /
  runtime.log from the console requested). Until then the Notes page dims down and shows
  "Coming Soon!" and ignores touches (NOTES_ENABLED 0 in bottom_ui.c; the notes code is unchanged).

## v30 (2026-10-19): Notes back, keyboard crash fixed
- New note crashed the CIA on the New 3DS. Reproduced in Azahar only with the installed CIA (the
  .3dsx was fine): with LLE applets the emulator logged "unknown GetPointer @ 0x1f180000" (VRAM)
  during the keyboard launch; with HLE applets the emulator itself died. The CIA's exheader mapped
  only the DSP memory, not VRAM. Mapping 1f000000-1f5fffff in assets/cia.rsf fixes it in Azahar (the
  keyboard opens and the game waits). Notes re-enabled (NOTES_ENABLED 1). Not yet confirmed on the
  console.
- Note: dist/mm64-3ds-v29.cia was overwritten by test builds during this investigation.

## v31 (2026-10-19): Credits
- Data page: a Credits button. The credits scroll up the top screen in the game font (24 px/s,
  headings in the menu green, repeating) while the game waits; SELECT returns, and SELECT is kept
  from the game until it's let go (so the game's own start menu doesn't open). The bottom screen
  says where the credits are. The top screen's last game frame is drawn again afterwards
  (n64_top_redraw). Credited name per the user: "Dankey Kong".

## v32 (2026-10-19): refractor cutscene frame rate, framed tabs
- User report: big frame-rate drop in the cutscene where Mega Man takes the refractor. Measured
  (Azahar): ~26 s at 21-24 fps (VI 9000-10600), texture decoding up to 46% of the game core,
  ~30 GPU uploads + evictions per UI frame. Cause (texlog dev poke): ~100 CI4 textures cut from one
  128-wide sheet whose indices stay the same while the palette changes every frame, so each was a
  new texture every frame, decoded texel by texel, uploaded to a new GPU texture.
- n64_renderer.cpp: CI textures keep their decoded indices (index_cache, keyed without the palette);
  a palette change costs one table lookup per texel; draw-dump diagnostics skipped for them.
  c3d_backend.cpp: TexImage::gpu_slot gives palette textures one GPU texture per index set, re-
  uploaded in place when only the palette changed (unless already drawn this frame with another).
- After: 30 fps through the cutscene (one 25.6 reading at the camera cut), texture decoding ~12%,
  GPU evictions 0. Dev: pokes "texlog N" logs the next N texture decodes.
- Bottom screen tabs: 1-pixel frames (bright for the open page), a light top edge, 2-pixel gaps.

## v33 (2026-10-19): clean exit; audio diagnostics
- Closing from the HOME menu crashed on the console. Reproduced with Quit in Azahar: after main's
  teardown a still-running thread called into the C library during its shutdown (a null call in
  __libc_lock_acquire; returning from main would also destroy the runtime's static std::thread
  objects while their threads run). Now: pause the game, wait ~100 ms, audio and graphics off, then
  aptExit() (tells APT the app is closing; does Restart's relaunch) and svcExitProcess(). Azahar: no
  exceptions, all threads ended by the kernel.
- No audio on the console: not reproducible in Azahar (the CIA's main thread is 0x30 there, NDSP
  runs). The log now says which audio path started and every ~4 s whether the DSP channel plays,
  its position, buffers queued/done, the peak and drops - runtime.log from the console requested.

## v34 (2026-10-20): "Mega Man 64 ReVolted" logo
- User's new logo (assets/banner/revolted_logo_src.jpg) cut from its black background by brightness
  (tools/make_revolted_logo.py -> assets/banner/revolted_logo.png).
- HOME menu banner: the same box art, the new logo under it (tools/make_banner.py, 150 px wide).
- Title screen: the game's logo is one 255x128 CI8 image at RDRAM 0x291480 drawn as 16 strips of
  255x8 at (72, 8) (found with texlog, isolate mode and a draw dump). n64_renderer.cpp decodes those
  strips from title_logo.inc (tools/make_title_logo.py: the new logo in the old one's extent, x 5-252,
  y 40-117) when address, format and content hash match, so nothing else can be swapped.
- Credits: "Mega Man 64 ReVolted logo - provided by Dankey Kong".

## v35 (2026-10-20): "DANKEY KONG 2026" on the title screen
- Second copyright line of the PRESS START screen, right-aligned under the first line's end (x 322,
  y 210), drawn with citro2d after any top-screen frame that drew the game's second copyright strip
  (CI4 159x16 from 0x27F530) - so it comes and goes with the copyright text.
- Lettering: built from the game's own copyright glyphs (assets/title/copyright_line1/2.png, the
  decoded strips): D A N E O G 2 0 cut as they are, Y from V's top on T's stem, K and 6 drawn in the
  lettering's pixel pattern and coloured row by row from real letters; word gap 3 px like the game's
  (tools/make_title_credit.py -> source/render/title_credit.inc, pre-tiled 128x16 RGBA8).

## v36 (2026-10-20): cleaner logo edges
- User: small pixelated white bits around the new logo. Causes: the cut-out brightened its soft edge
  pixels, the shrink used Lanczos (ringing on the thin rim), and the logo's own light outer bevel
  (~10-14 px in the source) breaks up into single white pixels at 1/7 size. Now: no edge brightening,
  premultiplied box (averaging) resizes for the title logo and banner, and the outer 14 px bevel band
  darkened to 35% at the edge (a dark outline; inner bevels unchanged). tools/make_revolted_logo.py.

## v37: sound on real consoles
- Hardware report: game sound stayed silent until a bottom-screen menu sound played (menu channel 1),
  which then got the game's channel 0 going. Now a short silent buffer goes out on channel 1 at
  startup, and again whenever channel 0 stops moving with audio queued (not paused) for 20 chunks.
- Game sound was quiet: the game's mix peaks at ~13400 (about 40% of full scale). Output is now
  boosted 2x with clipping (peak ~26800 in the emulator, nothing dropped).
- Data page: a small sound status line under "Game" (DSP/CSND, playing, position, buffers
  queued/done, peak, dropped, k = wake-ups sent) for photos from hardware.

## v38: game sound stuck on real consoles
- Console runtime.log (fetched over FTP): the game queued exactly 24 buffers (all of them, 50784
  frames) and the DSP never played any (`playing 0 ... done 0`, then dropped=108192). v37's wake-up
  check sat after the "all buffers in flight" early return, so it could fire at most once.
- Now: every chunk checks the game channel; with audio queued and no movement for 30 chunks it
  clears the channel's queue (NDSP resyncs it with the DSP), frees the buffers and kicks the menu
  channel. Logged as "[audio] ndsp channel stuck". Also waits for 4 DSP frames after ndspInit
  before the game can queue audio. Status line adds f = DSP frame counter (is the DSP alive).
- Kernel crash on v36 after a dungeon boss (Luma dump 6): SVC mode (CPSR 0x133), PC 3FEF3FFE, LR 0,
  DFSR 0x805 FAR 089D1BC8 (a write to an unmapped page in the heap range). crash.txt was empty, so our
  handler never ran. Cause not found yet.

## v39: audio quality, kernel crash at scene changes
- Clipping: v37's fixed 2x boost clipped loud moments (the game's own mix reaches ~30000 on
  hardware). Now a per-chunk limiter: up to 2x, cut so the chunk peak stays under 30500 (ramped over
  64 frames), released 0.01 per chunk. Game channel resampling is polyphase (DSP side).
- Pops: ultramodern's reported-remaining offset raised from 0.5 to 2 VIs (more audio queued ahead),
  and underruns are counted (status line "under", log "underruns").
- Second identical kernel crash (SVC mode, PC 3FEF3FFE) in the cutscene before Cardon Forest. Both
  crashes were at scene changes, and the game destroys and recreates 4-6 threads at every scene
  change, each a system thread created/ended on core 2. CoreThread is now a thread pool
  (core_thread.hpp): finished threads wait for the next function, so after the first scenes no
  system thread is created or ended again (15 total in a 150 s run). threads.cpp resets
  thread_self/is_game_thread when a game thread ends.

## v40: ROM in memory
- Hardware report (v39): audio bugs during the voiced ship cutscene after the Prologue ruins boss,
  the crash again, and a freeze in the first (text) conversation with Data. All the kernel crashes
  were in voiced cutscenes, whose voice clips stream from ROM: PI DMA past the 4 MB block cache was
  a 64 KB romfs read (FS service IPC) on the audio thread.
- The whole 32 MB ROM is now read into the heap at boot when 16 MB stays spare (heap free before:
  ~63 MB; after: 33-39 MB during play). PI DMA is a memcpy; the file/block cache remain as the
  fallback (Old 3DS). Log: "[rom] loaded into memory".
- [mem] log line now reports heap free (sbrk room + malloc free lists).
- One of three 120 s emulator runs ended with the emulator gone (no crash.txt, nothing in the
  Azahar log); the next two were fine.
- Text conversation freeze: not diagnosed yet; needs runtime.log from the console after it happens
  (the watchdog's [waits] dump shows where each game thread is).

## v41: out of memory, ground cracks
- Console runtime.log (v39, fetched over FTP) ended with "[terminate] uncaught exception:
  std::bad_alloc" ~7 min in, in a Cardon Forest cutscene: the app ran out of heap. (The log also had
  stretches of binary garbage: unflushed SD clusters from the power-off, not the game.)
- Renderer memory (new "[mem] renderer" and "[mem] heap in use" log lines):
  - Texture caches were limited by count only (2048 decoded textures, 4096 index images, and the
    8192-entry bind memo kept images alive too). Now byte budgets: 8 MB decoded textures, 2 MB
    indices; trimming clears the bind memo.
  - Frames for buffers the VI never shows collected draws up to 200k vertices and were only emptied
    (capacity kept): ~10 MB that grew all session. Now dropped and freed past 40k vertices / 3000
    draws.
  - 10 min emulator run: heap in use 48.5 -> 58.2 MB before, flat 49-52 MB after.
- Ground cracks (sky visible between ground pieces in Cardon Forest, console only): solid 3D
  triangles (opaque, depth-writing) are widened by 0.45 px around their centroid in screen space
  (widen()), covering the PICA200's float24 / missing N64 subpixel snapping. Can't be seen in the
  emulator (it rasterises in float32).

## v42: gauges stay in their box
- Report: after loading a game the gauges ("tanks") on the bottom screen moved and left their box.
  The bottom screen copied them with a fixed source position, so the game's HUD slide-in (and any
  other movement of the gauges on the top screen) moved them too.
- n64_bottom_overlay_fit (c3d_backend.cpp): each gauge is placed by its actual extent in the frame
  that last drew it, bottom-left corner at a fixed point of the HUD column, shrunk if it would be
  taller/wider than the column. Life 44 wide, energy 28 wide, energy 2 px higher (as in the game).
- Checked in the emulator loading slot 3 (Cardon Forest): steady in the column from the first frame.

## v43: widescreen
- Data page: "Widescreen: On/Off" button (saved in DATA_PATH/settings.txt as "widescreen 0/1");
  the version moved up beside the "Game" heading.
- Renderer (n64_widescreen): no stretching - everything keeps the 4:3 picture's pixel scale.
  - 3D (perspective projection) draws whose N64 scissor spans the width get the full 400-px
    scissor; the game sends geometry past its 4:3 frustum, so the sides fill in. Projection loads
    now start a new draw (state_dirty) since the scissor depends on it.
  - Untextured fills spanning the width (fades, cutscene bars, depth clears) are widened.
  - Fades: rects covering the whole picture are widened whatever their blending, and flat
    triangles with corners on the 4:3 corners (full-screen quads) are scaled to the screen.
  - Backdrops drawn as solid screen-space tiles at the 4:3 edges: the sky (32x32 tiles, the edge
    ones trimmed by the game) continues its texture past the trim with mirrored wrap; the title
    and Load Data backgrounds (256-wide padded strips) get mirrored copies of their edge strips.
  - The HUD, text and translucent 2D stay in the 4:3 picture.
- Known: objects the game culls at its own 4:3 view edges can appear late in the side strips.

## v44: surround sound option
- The game's own Options menu already has Sound: Stereo/Mono (default Stereo); a 10 s gameplay
  recording showed real stereo (channels correlate 0.999, sound effects panned up to ~1000 apart).
- Data page: "Sound: Stereo / Surround" button, saved in settings.txt ("surround 0/1"):
  audio3ds::set_surround switches the DSP between NDSP_OUTPUT_STEREO and NDSP_OUTPUT_SURROUND (the
  console's virtual surround). The menu sound plays in the new mode when tapped. No effect on the
  CSND fallback. Bottom row is now Credits / Widescreen / Sound.
- The Data page's sound status line is shorter (it ran off both edges): playing, buffers queued,
  gaps (underruns), dropped.
- The Data page heading reads "Hardware Options" (was "Game").
- The sound status line is no longer drawn on the Data page (audio3ds::status_line / mm64_audio_status remain for development).

## v45: framed Data page buttons
- Data page buttons (Save Game, Load, Restart, Quit, Credits, Widescreen, Sound, the slot rows and Back) are drawn like the tabs: outline, fill inset 1 px, highlight along the top (draw_framed). Bright fills (accent, red confirm) get the bright outline, as the active tab does.

## v46: C-Stick camera, heap fragmentation
- Hardware report: using the C-Stick crashed the game. The log (FTP) ended in std::bad_alloc with
  25-31 MB of heap free - but only ~2 MB at the heap's top and the rest in freed holes: fragmented.
  The renderer built every frame in a new FrameData whose vertex/draw lists grew from nothing by
  doubling (megabytes allocated and freed per frame); turning the camera fast brings in new
  scenery and textures on top of that.
- Frame pool (n64_renderer.cpp new_frame/recycle_frame): released frames are emptied and reused
  with their capacity; oversized ones (past frame_trim_*) are freed. 5 min of constant camera
  turning in Cardon Forest: freed-hole memory stays under 1 MB (was 23-29 MB), heap free flat
  ~24 MB in one block.
- C-Stick = camera (input_3ds.cpp): the game has no free camera; holding C-Right gives free look
  steered by the analog stick. While the C-Stick is pushed past a deadzone, C-Right is held and
  the C-Stick's direction replaces the Circle Pad. Before, its directions were C-buttons: C-Up
  opened the world map, C-Left is an action (now on ZL), C-Down talks (still on Y). ZR is Z.
- autoinput.txt accepts CUP/CDOWN/CLEFT/CRIGHT (C-Stick directions).

## v47: controls, cutscene lock
- ZL and ZR are both Z (lock-on) again; the game C-Left action has no 3DS button. C-Stick = camera (free look), Y = interact, A/B unchanged.
- Cutscenes: the bottom screen ignores input also while the top screen is paused (Start), and shows the cutscene overlay then too.
- On the Data page the "Press SELECT / to skip the cutscene" box spans the page window (12 px margins).

## v48: Old 3DS build variant
- `make o3ds` (Makefile O3DS=1): separate app (UniqueId 0xF6465, "MM64 O3DS", data folder
  sdmc:/3ds/mm64-o3ds via source/port/mm64_paths.h), build dir build-o3ds, assets/cia-o3ds.rsf
  (SystemMode 80MB, AffinityMask 3), GPU (linear) heap 24 MB instead of 32.
- Hardware-detected adaptations (source/port/mm64_platform.h), in either build:
  - Old 3DS: APT_SetAppCpuTimeLimit(80) and game threads on core 1 instead of core 2
    (core_thread.hpp); display lists skipped while the screen hasn't taken the last frame, never
    two in a row (n64_frame_skip).
  - Under 100 MB for the app: ROM streamed from the file (no preload), decoded texture budget
    4 MB / index 2->1 MB, GPU texture cache 640.
  - Controls: D-Pad Up = Z (lock-on), D-Pad Down held = free look.
- Azahar in Old 3DS mode (test_run.ps1 -O3DS): 150 s New Game run, threads on core 1, ROM
  streamed, no errors. Azahar doesn't model the Old 3DS CPU speed or its exact memory, so speed
  and headroom need a real Old 3DS.

## v49: audio margin, decals
- Hardware: occasional buzzes and some static. A 20 s emulator recording of busy gameplay had no clicks or clipping (limiter idle at 2x, peak 14284), so the buzzes come from the DSP running short on the console. ultramodern buffer_offset_frames 2 -> 3 VIs (~50 ms); limiter max gain 2.0 -> 1.7 (2x also doubled the mix noise floor).
- Ground-gap widening (widen) no longer applies to decal draws (ZMODE_DEC): roads/markings drawn over the ground looked off in Cardon Forest.

## v51: more area maps (isometric/)
- tools/make_maps.py: generic builder for the user's VGCartography maps. Per map: background rule
  (vgc blue pattern / vgc_floors for dark floors / town / field with sky), exclusion boxes (titles,
  portraits, legends), erase boxes (place names over the map, inpainted), optional box (images
  with several maps). Labels (navy boxes, RGB 11,16,78) found by tools/find_map_labels.py, erased
  (frame included) and inpainted; their coverage carried across by inpainting the mask. Loot = the
  item/zenny labels (green/grey text), named by hand per label index. Units: 0.45 per source px
  (Ocean Tower's scale), max 2400 wide. Tiles 256x256 ETC1A4 via tex3ds (-q high -z none -r, 4-byte
  header stripped): a quarter of RGBA8. Output romfs/maps/<id>_<level>.bin + source/ui/area_maps.inc.
- App: map table (Ocean Tower RGBA8 + area_map_data ETC1A4), registry dungeon_list
  {name, area, room (-1 any), map, dungeon}. Towns/fields (dungeon=false): always shown, no loot,
  third Map sub-tab reads "Area". Tile cache emptied when the map changes. Mega Man's head only on
  the calibrated Ocean Tower so far.
- Maps: Cardon Forest Sub-Gate (area 14), Clozer Woods Sub-Gate (19), Lake Jyun Sub-Gate (20),
  Main Gate (26), City Hall district (6), Lake Jyun (13, listed "Boat Shop": the lakeside walkway).
- Still to do: Underground Ruins (area 9, rooms 0-4; zones 1-5 interlock in the image - match each
  room's minimap against the image's overhead map), City Hall interiors (Bank, City Hall, Police
  Station insets), head calibration for the new maps.

## v52: Underground Ruins and City Hall interiors
- Underground Ruins (area 9): one map for the whole network. The game's Mini Map in each of its
  rooms shows only a tiny local outline (rooms 0, 3: four corner marks; 1: a dot; 2: a line; 4:
  nothing), so rooms can't be matched to the image's zones from it, and the zones interlock in the
  image. One map with all 32 loot spots (traps, "Drill Arm required", "Junk Shop Owner" and the
  "Overhead Map" caption left out). New rules: vgc_warm (dark brown floors: red >= blue + 10),
  yellow_names (yellow place names detected and painted out).
- City Hall interiors, cut from the City Hall image by box: Police Station (area 15 room 0),
  City Hall (15/2, lobby and Mayor's office; the road below cut by exclude_poly), Bank (15/3).
  Larger scale (units 0.8-1.0) as they're small. Room 1 of area 15 (an office) has no map.

## v53: no Mega Man marker on area maps
- Removed at the user's request: Mega Man's head on the Dungeon/Area map view (it worked only in Ocean Tower room 1; the new maps had no calibration) and the centre-on-Mega-Man button. Maps open centred. source/ui/map_icon.inc deleted (tools/make_map_icon.py can rebuild it).
- Calibration attempts (not shipped): walk probes (tools/walk_probe.py) and a teleport floor probe; the latter failed (outside a room he falls forever, height wraps, positions stop applying).

## v54: Dig Scan obtainable, phantom weapons
- The Prologue Ruins' (Ocean Tower) Dig Scan is in the 580 Zenny chest (next to the Power Raiser's):
  mm64_ext_tick grants dungeon map 0 when Zenny rises by exactly 58 (the game counts tens) in area 0
  and it isn't owned yet. Every Zenny gain in area 0 is logged ("[ext] Zenny +N in area 0 room R")
  to confirm the chest's amount on hardware. The bottom screen shows "Dig Scan found! (<dungeon>)"
  with the icon for 5 s and the select sound (mm64_ext_take_found_map; notice drawn over every page,
  cutscenes too). Tested in the emulator by poking +58.
- Weapons section listed Grand Grenade, Splash Mine, Shield Arm, Shining Laser on a new game: the
  game sets item flags 142-147 at every New Game (same in a later save), while its own Special
  Weapons page won't open. Those four are left out of the bottom screen's Weapons list; where the
  game records owned special weapons is still unknown (needs a save with one).

## v55: special weapons read from the right place
- Owned special weapons are 16 bits at 0x80205640 (GameShark "Have All Special Weapons" 81205640
  FFFF, almarsguides.com), MSB first: bit i = item 132 + i (0 Normal Arm, 1 MegaMan Buster - never
  listed, 2 Machine Buster ... 13 Shining Laser). Checked with FFFF, C000, A000 against the game's
  own Special Weapons page, and A800 on the bottom screen (Machine Buster, Drill Arm). The item
  flags formula (0x500 + id - 4) put weapons at 0x80205658, past the table: wrong for weapons only.
  The v54 workaround (hiding 142-145) is gone; the Normal Arm and MegaMan Buster are left out.
- Neighbours from the same codes: special items 0x8020564C-F, normal items 0x80205650-57 (match
  the flags formula already used).

## v56: sharper bottom-screen text and ZENNY box
- tools/make_hd_ui.py: 4x versions of the game font (data/game_font_hd.bin, 768x240) and the ZENNY
  sheet (data/zenny_hd.bin, 704x64) - EPX/Scale2x three times (8x) then a premultiplied 2x2 average
  (anti-aliased). Drawn with linear filtering from 1024x256 / 1024x64 textures (HD = 4 in
  bottom_ui.c). Text keeps its sizes (1x / 1.5x / 2x steps), so layouts don't move; the 1.5x size,
  uneven with nearest filtering before, is now smooth.

## v57: item descriptions fit
- Inventory description panel (30 px): the description now follows the green name on the same line and wraps onto the second (draw_name_and_text); if it still would not fit it is drawn at 0.8x (smooth with the 4x font). Before, it started on its own line and a second line ran off the screen. Map Binder uses the same.

## v58: widescreen fades and ground
- Fades (user: "like the Bomberman 64 port"): measured side vs middle brightness frame by frame in
  widescreen - Load menu -> game fade, area-change fade-in, ~2 min of the opening: the sides always
  darken with the middle. Made the rule more forgiving like BMan643DS: an untextured rectangle over
  >= 90% of the width (and its height, if >= 90%) is treated as full-screen, then widened.
- "Textures missing in widescreen": G_CULLDL was already ignored. The game picks the ground tiles to
  draw from its 4:3 view (func_800868C0, "render_fill_tile": tile range a0-a3 on a 128-unit grid).
  source/port/mm64_wide_patches.c: the recompiled function copied unchanged with the range widened
  by 12 units each side while widescreen is on (MegaMan64Recompiled asks for the whole grid). An A/B
  in Cardon Forest showed no visible difference there, so the user's case isn't confirmed fixed.
- tools/emu_capture.py: scripted emulator runs that put the data folder back exactly (no wildcard
  deletes).

## v59: widescreen gaps in the opening and when turning
- Opening narration (user: textures missing in the opening cutscene): a black strip top right. The
  sky is stacked layers of 32x32 texture rectangles; one layer ends its right-hand tiles at 319.75
  (quarter-pixel edges), so the "touches the 4:3 edge" test (lrx >= 320) failed for it. Edge tests
  for widening/mirroring now allow 1 px on each side. Narration checked: sky to both edges.
- Fast L/R in Cardon Forest (user: sometimes missing): ground tile margin 12 -> 20 grid units (five
  tiles), as the range is picked from where the camera was. Emulator, 12 quick L/R swings: no
  sky/black in the lower side strips in 220 frames (also none at 12). Cost there: display lists
  ~23.4 ms vs ~22.0 ms in 4:3 (+7%).

## v60: widescreen keeps 30 fps
- Measured (emulator, Cardon Forest, 16 L/R swings + walking): 4:3 ~29.3 fps, widescreen with the
  fixed 20-unit ground margin ~28.6 fps (display lists +2-7%; the top screen's draw time the same).
- Ground margin now adapts (mm64_wide_patches.c adapt_margin): average time between the game's
  tile-range calls (one per game frame); every 15 frames, over 34.2 ms -> margin - 2 (min 8),
  under 33.6 ms -> + 1 (max 20). Logged every ~4 s: "[wide] game frame N ms, ground margin M".
- Back-to-back emulator runs (the emulator itself was below 30 fps there, so the margin sat at 8):
  4:3 26.8 / 27.4 fps, widescreen 26.9 / 26.9 - no measurable cost. Hardware should keep a larger
  margin where the game makes 30.

## v62 — stereoscopic 3D (ported from the Pokemon Snap port), widescreen-ready
- The 3D slider sets the depth (16 steady steps, 0.05 of the half width at most); at 0 the screen's 3D mode is off and nothing extra is drawn. Off while the credits cover the top screen. DATA_PATH/stereotest.txt forces full depth and puts the right eye in screenshots (development).
- c3d_backend.cpp draws each frame twice from one vertex upload (left target, then a GFX_RIGHT target). n64.v.pica shifts 3D vertices by s * (w - min(C, 2w)): distance C on the screen's plane, pop-out capped at -s. C = 500 (uniform stereo_conv): Mega Man is at clip w ~510 in play, scenery 3000-6000 ([stereo] log every 300 frames). 2D (HUD, menus, text, fades) stays flat; 2D drawn before a frame's first 3D draw (the sky tiles) is the background: fully shifted and stretched by as much, so no edge is uncovered (4:3 or widescreen).
- Widescreen: the sky's inner tiles kept the 4:3 scissor while the widened edge tiles moved with the shift, leaving a gap at x 360. Rectangles wholly inside the picture under a full-width N64 scissor now get the full-width scissor (no change at 1:1).
- The sky tiles end a quarter pixel short of the next (0..159.75, 160..): invisible at 1:1, black seams once shifted by fractions of a pixel. Textured rect edges at .75 are carried on to the whole pixel.
- The title screen's "Dankey Kong 2026" credit is drawn into both eyes.
- Tested in Azahar (Cardon Forest, 4:3 and widescreen, full depth). GPU cost on the console untested: the top screen is drawn twice while the slider is up.

## v63 — 30 fps area sweep
- Sweep: save slot 3, then the dev warp (pokes "warp") through every area with walking and turning, game fps per area from the watchdog (60 x display lists / VI frames). Emulator only: Azahar times the CPU, not the 3DS GPU.
- Before (v62, 3D off): Cardon Forest 24.8, Apple Market 22.8, Downtown 24.3, City Hall 20-21, Uptown 26.4, Clozer Woods 24.9, Sub-City 24; ruins and interiors ~30. v60 measured the same (no regression).
- Found by switching parts off one at a time: with triangles not emitted the game made 30; skipping only the UI's top-screen draw took City Hall 21 -> 26.
- Audio tasks no longer wait for the UI to finish its frame (events.cpp). The game sends its next display list only after the audio task, and in busy areas (UI frames of 15-20 ms) the up-to-8 ms wait cost ~5 fps. City Hall 21 -> 26.6.
- Off-screen triangles (all three corners past one edge, x with a 15% margin for widescreen and the stereo shift, or behind the camera) are dropped before any other work: ~40% of triangles in the open areas, also less for the UI core and the GPU.
- Per-vertex screen position (sx, sy) and off-screen flags computed once in load_vertices; culling and widen() use them (widen: no divides, fast_rsqrt). The UV reciprocals are refreshed per draw, not per triangle. Lighting directions cached until the matrix or lights change.
- State commands mark the draw state changed only when they change something (draw calls -12..-26%).
- n64_renderer.cpp built with -O3 -fno-math-errno. get_function (indirect calls in game code) has a direct-mapped cache in front of its hash map.
- After (3D off): every area 29-30 except Sub-City ~26 (7,200 vertices / 4,300 triangles per frame, 56% more than Cardon) and the first seconds after loading. Widescreen + full 3D: Cardon 29.3, City Hall 28.9 (CPU side only).
- Dev log: "[perf] geometry per DL" (commands, vertices, matrices, triangles, back-face and off-screen culls, published frames).

## v64 — Sub-City
- Sub-City is the slowest area left: the whole city is sent every frame (open views ~17,700 display-list commands, 8,400 vertices, 4,700 triangles, over half of them off screen). Emulator: 22-25 fps looking across the city, 30 facing a wall. Game alone (display lists skipped) makes 30, so it's game + interpreter sharing core 2.
- The game's object sort (quicksort func_8002E34C with comparator func_8002E31C, ~15% of game time in every area) is native now (mm64_patches.cpp), the comparator inlined. It keeps the original's exact order, including its "last swap" global. Sub-City doorway +0.6 fps; walking 24-25 -> 25-28.
- Tried and dropped: interpreter on core 0 (10 fps at priority 0x2F or 0x31: core 0 is busy with the UI's top-screen build, ~7 ms, and audio), caching each vertex's GPU form per draw (no gain).
- Testing note: warping into Sub-City starts its arrival scene, which leaves the area about a minute later; standing-still runs measure the entrance doorway.
- CIA title version: build N is major N/64, minor N%64 (makerom's minor is at most 63), so v64 = 1.0.0 installs over v63 = 0.63.0.
