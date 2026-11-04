# Development: warps to an area/room (save slot 3 loaded first), screenshots the start, then walks
# forward (Circle Pad up) logging Mega Man's position every 20 VIs - for calibrating area maps.
# Usage: python tools/walk_probe.py <area> <room> [<seconds of walking>] [<stick x,y>]
# Output: tools/tmp/probe/a<area>_r<room>.bmp (start), positions printed (vi x y z yaw).
import os, re, shutil, subprocess, sys, glob

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SD = os.path.join(ROOT, "azahar", "user", "sdmc", "3ds", "mm64")
OUT = os.path.join(ROOT, "tools", "tmp", "probe")
FILES = ("autoinput.txt", "pokes.txt", "snapshots.txt")
LOAD_SAVE = ["1300 10 SELECT", "1700 10 A", "2100 10 DOWN", "2250 10 DOWN", "2400 10 A", "2700 10 A", "3000 10 A"]


def probe(area, room, walk, stick="0,150"):
    for f in glob.glob(os.path.join(SD, "snap_*")):
        os.remove(f)
    start, end = 3600, 3600 + walk * 60
    open(os.path.join(SD, "autoinput.txt"), "w").write("\n".join(LOAD_SAVE + [f"{start} {end - start} STICK:{stick}"]) + "\n")
    open(os.path.join(SD, "pokes.txt"), "w").write(f"3150 warp {area} {room}\n")
    open(os.path.join(SD, "snapshots.txt"), "w").write("\n".join(str(v) for v in range(start - 20, end + 1, 20)) + "\n")
    subprocess.run(["powershell", "-ExecutionPolicy", "Bypass", "-File", os.path.join(ROOT, "tools", "test_run.ps1"),
                    "-Emu", "azahar", "-Seconds", str(end // 60 + 40), "-LogLines", "1"], capture_output=True)
    os.makedirs(OUT, exist_ok=True)
    p = os.path.join(SD, f"snap_{start - 20}.bmp")
    if os.path.exists(p):
        shutil.copy(p, os.path.join(OUT, f"a{area}_r{room}.bmp"))
    pts = []
    for l in open(os.path.join(SD, "runtime.log"), errors="replace"):
        m = re.search(r"\[snap\] vi (\d+) area (\d+) room (\d+) x (-?\d+) y (-?\d+) z (-?\d+) yaw (-?\d+)", l)
        if m:
            pts.append(tuple(int(v) for v in m.groups()))
    for f in glob.glob(os.path.join(SD, "snap_*")):
        os.remove(f)
    return pts


if __name__ == "__main__":
    area, room = int(sys.argv[1]), int(sys.argv[2])
    walk = int(sys.argv[3]) if len(sys.argv) > 3 else 5
    stick = sys.argv[4] if len(sys.argv) > 4 else "0,150"
    saved = {f: open(os.path.join(SD, f), "rb").read() for f in FILES if os.path.exists(os.path.join(SD, f))}
    try:
        for p in probe(area, room, walk, stick):
            print(*p)
    finally:
        for f in FILES:
            path = os.path.join(SD, f)
            if os.path.exists(path):
                os.remove(path)
            if f in saved:
                open(path, "wb").write(saved[f])
