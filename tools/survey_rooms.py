# Development: visits rooms of an area in the local Azahar and keeps a screenshot and a RAM dump of
# each (for finding objects). Loads save slot 3, warps (pokes.txt "warp"), turns the camera.
# Usage: python tools/survey_rooms.py <area> <room> [<room> ...]   Output: tools/tmp/rooms/a<area>_r<room>_*.{bmp,bin}
import os, shutil, subprocess, sys, glob

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SD = os.path.join(ROOT, "azahar", "user", "sdmc", "3ds", "mm64")
OUT = os.path.join(ROOT, "tools", "tmp", "rooms")
FILES = ("autoinput.txt", "pokes.txt", "snapshots.txt", "snapshots_full.txt")

# Title -> Continue -> slot 3 (the only game save here) -> Yes; in control at about VI 2950.
LOAD_SAVE = ["1300 10 SELECT", "1700 10 A", "2100 10 DOWN", "2250 10 DOWN", "2400 10 A", "2700 10 A", "3000 10 A"]
SHOTS = [3500, 3700, 3900]


def visit(area, room):
    for f in glob.glob(os.path.join(SD, "snap_*")):
        shutil.rmtree(f) if os.path.isdir(f) else os.remove(f)
    with open(os.path.join(SD, "autoinput.txt"), "w") as f:
        # Turn (the Circle Pad turns Mega Man and the camera) between shots.
        f.write("\n".join(LOAD_SAVE + ["3550 40 STICK:-150,0", "3750 40 STICK:-150,0"]) + "\n")
    with open(os.path.join(SD, "pokes.txt"), "w") as f:
        f.write(f"3150 warp {area} {room}\n")
    with open(os.path.join(SD, "snapshots.txt"), "w") as f:
        f.write("\n".join(map(str, SHOTS)) + "\n")
    open(os.path.join(SD, "snapshots_full.txt"), "w").close()
    subprocess.run(["powershell", "-ExecutionPolicy", "Bypass", "-File", os.path.join(ROOT, "tools", "test_run.ps1"),
                    "-Emu", "azahar", "-Seconds", "100", "-LogLines", "1"], capture_output=True)
    os.makedirs(OUT, exist_ok=True)
    for v in SHOTS:
        for ext in (".bmp", ".bin"):
            p = os.path.join(SD, f"snap_{v}{ext}")
            if os.path.exists(p):
                shutil.move(p, os.path.join(OUT, f"a{area}_r{room}_{v}{ext}"))
    log = os.path.join(SD, "runtime.log")
    lines = [l for l in open(log, errors="replace") if "[snap]" in l or "[pokes]" in l]
    print(area, room, "".join(lines).strip().replace("\n", " | "))


if __name__ == "__main__":
    area = int(sys.argv[1])
    saved = {}
    for f in FILES:
        p = os.path.join(SD, f)
        if os.path.exists(p):
            saved[f] = open(p, "rb").read()
    try:
        for room in map(int, sys.argv[2:]):
            visit(area, room)
    finally:
        for f in FILES:
            p = os.path.join(SD, f)
            if os.path.exists(p):
                os.remove(p)
            if f in saved:
                open(p, "wb").write(saved[f])
        for f in glob.glob(os.path.join(SD, "snap_*")):
            shutil.rmtree(f) if os.path.isdir(f) else os.remove(f)
