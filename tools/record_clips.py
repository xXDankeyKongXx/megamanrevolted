# Records gameplay clips in the local Azahar: scripted input (autoinput.txt), optional warp
# (pokes.txt), both screens captured every STEP game VIs (snapshots.txt), encoded as an MP4.
# Usage: python tools/record_clips.py [clip-name ...]   (default: all clips)
# Output: dist/clips/<name>.mp4
import os, subprocess, sys, glob
import av
from PIL import Image

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SD = os.path.join(ROOT, "azahar", "user", "sdmc", "3ds", "mm64")
OUT = os.path.join(ROOT, "dist", "clips")
STEP = 2  # VIs between captures (the game runs at 30 fps: every frame)

# Title -> Continue -> slot 3 (Cardon Forest); in control at about VI 2950.
LOAD_SLOT3 = ["1300 10 SELECT", "1700 10 A", "2100 10 DOWN", "2250 10 DOWN", "2400 10 A", "2700 10 A", "3000 10 A"]

# Bottom-screen tabs (touch, 320x240).
# Map page views (map_view_button in bottom_ui.c): Mini Map, World Map, Dungeon.
MAP_VIEW = {"mini": "TOUCH:127,47", "world": "TOUCH:201,47", "dungeon": "TOUCH:275,47"}
TAB = {"inventory": "TOUCH:32,12", "map": "TOUCH:105,12", "status": "TOUCH:170,12", "notes": "TOUCH:235,12", "data": "TOUCH:296,12"}

CLIPS = {
    # name: (warp area or None, input lines after loading, first VI recorded, seconds)
    # Movement loops around in front of the camera so Mega Man stays in view.
    "cardon_forest_run_jump": (None, [
        f"3150 6 {TAB['inventory']}",
        "3250 100 STICK:150,0", "3350 100 STICK:0,-150", "3450 100 STICK:-150,0", "3550 100 STICK:0,150",
        "3300 12 A", "3420 12 A", "3520 12 A", "3640 12 A",
    ], 3250, 8),
    "cardon_forest_buster": (None, [
        f"3150 6 {TAB['status']}",
        "3250 480 B TAP:10",
        "3290 120 STICK:150,0",
        "3450 120 STICK:-150,0",
        "3610 100 STICK:0,-150",
    ], 3250, 8),
    "cardon_forest_map": (None, [
        f"3150 6 {TAB['map']}", f"3200 6 {MAP_VIEW['mini']}",
        "3250 120 STICK:150,0", "3370 120 STICK:0,-150", "3490 120 STICK:-150,0", "3610 120 STICK:0,150",
    ], 3250, 8),
    "apple_market_map": (4, [
        f"3700 6 {TAB['map']}", f"3750 6 {MAP_VIEW['world']}",
        "3800 120 STICK:0,150", "3920 120 STICK:150,0", "4040 120 STICK:0,-150", "4160 120 STICK:-150,0",
    ], 3800, 8),
    "cardon_ruins_dungeon": (14, [
        f"3700 6 {TAB['map']}", f"3750 6 {MAP_VIEW['mini']}",
        "3800 120 STICK:0,150", "3920 120 STICK:150,0", "4040 120 STICK:0,-150", "4160 120 STICK:-150,0",
        "3880 12 A", "4100 160 B TAP:10",
    ], 3800, 8),
}


def run(name):
    warp, lines, start, seconds = CLIPS[name]
    end = start + seconds * 60
    for f in glob.glob(os.path.join(SD, "snap_*.bmp")):
        os.remove(f)
    with open(os.path.join(SD, "autoinput.txt"), "w") as f:
        f.write("\n".join(LOAD_SLOT3 + lines) + "\n")
    pokes = os.path.join(SD, "pokes.txt")
    if warp is not None:
        with open(pokes, "w") as f:
            f.write(f"3150 warp {warp} 0\n")
    elif os.path.exists(pokes):
        os.remove(pokes)
    with open(os.path.join(SD, "snapshots.txt"), "w") as f:
        f.write("\n".join(str(v) for v in range(start, end, STEP)) + "\n")
    seconds_run = end // 60 + 50
    subprocess.run(["powershell", "-ExecutionPolicy", "Bypass", "-File", os.path.join(ROOT, "tools", "test_run.ps1"),
                    "-Emu", "azahar", "-Seconds", str(seconds_run), "-LogLines", "1"], capture_output=True)
    # A capture the UI loop missed (it fell behind) repeats the one before, so the clip keeps time.
    frames, last, missed = [], None, 0
    for v in range(start, end, STEP):
        p = os.path.join(SD, f"snap_{v}.bmp")
        try:
            last = Image.open(p).convert("RGB")
        except OSError:
            missed += 1
        if last is not None:
            frames.append(last)
    print(name, "missed captures:", missed)
    if not frames:
        print(name, "no frames")
        return
    os.makedirs(OUT, exist_ok=True)
    out = os.path.join(OUT, name + ".mp4")
    # H.264, both screens stacked as on the console, scaled 2x (nearest) so phones don't blur them.
    w, h = frames[0].size
    with av.open(out, "w") as container:
        stream = container.add_stream("libx264", rate=60 // STEP)
        stream.width, stream.height = w * 2, h * 2
        stream.pix_fmt = "yuv420p"
        stream.options = {"crf": "18", "preset": "slow"}
        for im in frames:
            big = im.resize((w * 2, h * 2), Image.NEAREST)
            for packet in stream.encode(av.VideoFrame.from_image(big)):
                container.mux(packet)
        for packet in stream.encode():
            container.mux(packet)
    print(name, len(frames), "frames", os.path.getsize(out) // 1024, "KB")


if __name__ == "__main__":
    names = sys.argv[1:] or list(CLIPS)
    # Development files already there (pokes, snapshot lists) are put back afterwards.
    saved = {}
    for f in ("autoinput.txt", "pokes.txt", "snapshots.txt"):
        p = os.path.join(SD, f)
        if os.path.exists(p):
            with open(p, "rb") as fh:
                saved[f] = fh.read()
    try:
        for n in names:
            run(n)
    finally:
        for f in ("autoinput.txt", "pokes.txt", "snapshots.txt"):
            p = os.path.join(SD, f)
            if os.path.exists(p):
                os.remove(p)
            if f in saved:
                with open(p, "wb") as fh:
                    fh.write(saved[f])
        for f in glob.glob(os.path.join(SD, "snap_*.bmp")):
            os.remove(f)
