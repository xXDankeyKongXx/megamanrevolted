# Building the CIA (Phase 6)

The CIA installs Mega Man 64 on the HOME menu with its own icon and banner. Without
`sdmc:/3ds/dspfirm.cdc` audio goes through CSND instead of the DSP. Save states, notes and the game's
save stay in `sdmc:/3ds/mm64/` (`mm64-o3ds/` for the Old 3DS build). Since v61 there are two kinds:

- **Shared** (`make cia`, `dist/mm64-3ds-v<N>.cia`; the .3dsx too): no ROM inside. The player puts
  their own dump in `sdmc:/3ds/mm64/` (or `sdmc:/roms/n64/`), any name, .z64/.v64/.n64.
  `source/port/rom_check.c` finds it, checks its SHA-1 against the USA release
  (`f24fe0aff01aec018e2dd558ec4f076cf328129f`, as .z64) once, converts a .v64/.n64 into
  `MegaMan64.us.rev1.z64`, and remembers the check in `rom_verified.txt`. With no usable ROM both
  screens say what's wrong and where the dump goes.
- **Personal** (`make cia-personal`, `dist/mm64-3ds-v<N>-personal.cia`): `Mega Man 64.z64` packed into
  the RomFS (`build/romfs_personal/rom/megaman64.z64`), used without a check. **For the owner's own
  console only, never for sharing.** `make cia` refuses to build if a ROM is left in `romfs/rom/`.

`make o3ds` builds the Old 3DS release and both CIAs.

## Tools (already in `tools/cia/`)

| Tool | Version | Source |
|---|---|---|
| `makerom.exe` | v0.19.0 (Windows x86_64) | github.com/3DSGuy/Project_CTR, release `makerom-v0.19.0`, `makerom-v0.19.0-win_x86_64.zip` (246,600 bytes) |
| `bannertool.exe` | 1.2.0 (windows-x86_64 build) | github.com/diasurgical/bannertool, release `1.2.0`, `bannertool.zip` (2,596,691 bytes) |

Downloaded 2026-10-18. Both print their version when run without arguments.

## Inputs

| File | What | Made by |
|---|---|---|
| `assets/banner/banner.png` | 256x128 HOME menu banner: the N64 box in perspective with the logo under it | `python -I tools/make_banner.py` |
| `assets/banner/banner.wav` | banner sound: first 3 s of the Capcom logo jingle (`assets/banner/capcom_logo.mp3`) with a fade | `tools/make_banner.py` (PyAV) |
| `assets/banner/icon.png` | 48x48 icon (front cover art), also used for the .3dsx SMDH | `tools/make_banner.py` |
| `assets/cia.rsf` | makerom settings: title "Mega Man 64", product code `CTR-H-MM64`, unique ID `0xF6464`, SD card access, New 3DS mode (804 MHz, L2 cache, 124 MB) | hand-written |
| `mm64-3ds.elf`, `mm64-3ds.smdh` | the app and its title/icon block | `make` |

`tools/make_banner.py` needs the box scan `n64'.jfif` in the project folder and
`assets/banner/logo_src.png` (MegaMan64.svg from the PC port rendered with PyMuPDF).

## Procedure

1. Regenerate the art if the scan or logo changed: `python -I tools/make_banner.py`.
2. Build: from the devkitPro MSYS2 shell,
   `cd "/g/!VibeCodeMashups/Megaman643DS" && export DEVKITPRO=/opt/devkitpro DEVKITARM=/opt/devkitpro/devkitARM && make -j6 cia cia-personal`
   which runs:
   - `bannertool makebanner -i assets/banner/banner.png -a assets/banner/banner.wav -o build/banner.bnr`
   - `makerom -f cia -o mm64-3ds.cia -elf mm64-3ds.elf -rsf assets/cia.rsf -icon mm64-3ds.smdh -banner build/banner.bnr -exefslogo -target t`
3. Install `mm64-3ds.cia` with FBI (or another CIA installer) on a New 3DS with custom firmware, or
   in Azahar via File > Install CIA.

First built 2026-10-19 (v23, then v24): `make cia` also stamps the title version (`-minor
$(VERSION)`, so installs of newer builds are updates) and copies it to `dist/mm64-3ds-v<VERSION>.cia`.
Build a release first (`make release`) so the SMDH carries the same version. The CIA includes the
RomFS (`RootPath: $(ROMFS_ROOT)` in the rsf, `romfs/` or the personal copy: the dungeon and world map images).
- makerom v0.19 rejected `UseExtendedSaveDataAccess` in the rsf; the key was removed.
- The DSP memory mapping (`1ff00000-1ff7ffff`) must be read/write: read-only crashed NDSP on hardware (v26).
- VRAM (`1f000000-1f5fffff`) must be mapped too: launching the system keyboard reads it, and without
  the mapping New note crashed the CIA (v28 on hardware; reproduced in Azahar with the installed CIA,
  where the .3dsx, run with the launcher's mappings, was fine). Fixed in v30.
- Checked in Azahar: `azahar.exe -i dist/mm64-3ds-v23.cia` installs title `000400000F646400`;
  launched from its .app it boots, uses core 2, reaches gameplay and reads the RomFS maps.
- Still to check on a real New 3DS: install with FBI, 804 MHz / 124 MB mode, DSP firmware
  (`sdmc:/3ds/dspfirm.cdc` is needed for sound, as for the .3dsx).
- Release builds draw no debug counters on the bottom screen (v24); test stats go to status.txt.

## Notes

- Restart on the System page uses `aptSetChainloaderToSelf()`: for the CIA it relaunches the title;
  from the Homebrew Launcher it returns there.
- The banner is a flat 3D-looking image: bannertool turns a PNG into the HOME menu's banner model.
  A rotating 3D box would need a custom CGFX model, which these tools don't make.
- Changing the unique ID makes it a different title (separate HOME menu entry).

## Old 3DS build

`make o3ds` builds the Old 3DS variant: `dist/mm64-3ds-o3ds-v<N>.3dsx` and `.cia`. It is a separate app
(title ID `000400000F646500`, "Mega Man 64 (Old 3DS)" on the HOME menu) with its own data folder,
`sdmc:/3ds/mm64-o3ds`, so it installs alongside the New 3DS version. `assets/cia-o3ds.rsf` asks for the
80 MB memory mode and lets the app use core 1. Its build files go to `build-o3ds/`.
Test in Azahar's Old 3DS mode: `powershell -File tools/test_run.ps1 -O3DS` (sets `is_new_3ds` for that
run; a normal run sets it back).
