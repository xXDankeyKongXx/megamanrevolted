# Development: for each room, warps there (loading save slot 3 first) and captures the bottom
# screen's Mini Map (the game's own minimap, moved to the bottom screen) plus the top screen.
# Usage: python tools/survey_minimaps.py <area> <room> [<room> ...]   Output: tools/tmp/minimaps/a<area>_r<room>.bmp
import os, shutil, subprocess, sys, glob

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SD = os.path.join(ROOT, "azahar", "user", "sdmc", "3ds", "mm64")
OUT = os.path.join(ROOT, "tools", "tmp", "minimaps")
FILES = ("autoinput.txt", "pokes.txt", "snapshots.txt")
LOAD_SAVE = ["1300 10 SELECT", "1700 10 A", "2100 10 DOWN", "2250 10 DOWN", "2400 10 A", "2700 10 A", "3000 10 A"]


def visit(area, room):
    for f in glob.glob(os.path.join(SD, "snap_*")):
        os.remove(f)
    # Map tab, Mini Map view.
    open(os.path.join(SD, "autoinput.txt"), "w").write("\n".join(LOAD_SAVE + ["3600 6 TOUCH:105,12", "3700 6 TOUCH:127,47"]) + "\n")
    open(os.path.join(SD, "pokes.txt"), "w").write(f"3150 warp {area} {room}\n")
    open(os.path.join(SD, "snapshots.txt"), "w").write("3900\n")
    subprocess.run(["powershell", "-ExecutionPolicy", "Bypass", "-File", os.path.join(ROOT, "tools", "test_run.ps1"),
                    "-Emu", "azahar", "-Seconds", "95", "-LogLines", "1"], capture_output=True)
    os.makedirs(OUT, exist_ok=True)
    p = os.path.join(SD, "snap_3900.bmp")
    if os.path.exists(p):
        shutil.move(p, os.path.join(OUT, f"a{area}_r{room}.bmp"))
    lines = [l.strip() for l in open(os.path.join(SD, "runtime.log"), errors="replace") if "[snap]" in l]
    print(area, room, lines[-1] if lines else "no snapshot", flush=True)


if __name__ == "__main__":
    area = int(sys.argv[1])
    saved = {f: open(os.path.join(SD, f), "rb").read() for f in FILES if os.path.exists(os.path.join(SD, f))}
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
            os.remove(f)
