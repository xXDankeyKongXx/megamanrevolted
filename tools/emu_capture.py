# Development: one scripted emulator run with temporary test files, captures kept, the data folder
# left as it was. Usage (from Python):
#   from emu_capture import run
#   run(autoinput_lines, snapshots, out_dir, pokes=[], settings=None, seconds=100, full=False)
# Captures snap_<vi>.bmp (and .bin with full=True) are moved to out_dir.
import os, shutil, subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SD = os.path.join(ROOT, "azahar", "user", "sdmc", "3ds", "mm64")
TEMP_FILES = ("autoinput.txt", "pokes.txt", "snapshots.txt", "snapshots_full.txt", "settings.txt")


def _snap_files():
    return [f for f in os.listdir(SD) if f.startswith("snap_")]


def run(autoinput, snapshots, out_dir, pokes=(), settings=None, seconds=100, full=False):
    saved = {}
    for f in TEMP_FILES:
        p = os.path.join(SD, f)
        if os.path.exists(p):
            saved[f] = open(p, "rb").read()
            os.remove(p)
    try:
        open(os.path.join(SD, "autoinput.txt"), "w").write("\n".join(autoinput) + "\n")
        open(os.path.join(SD, "snapshots.txt"), "w").write("\n".join(str(v) for v in snapshots) + "\n")
        if pokes:
            open(os.path.join(SD, "pokes.txt"), "w").write("\n".join(pokes) + "\n")
        if settings is not None:
            open(os.path.join(SD, "settings.txt"), "w").write(settings)
        if full:
            open(os.path.join(SD, "snapshots_full.txt"), "w").close()
        subprocess.run(["powershell", "-ExecutionPolicy", "Bypass", "-File", os.path.join(ROOT, "tools", "test_run.ps1"),
                        "-Emu", "azahar", "-Seconds", str(seconds), "-LogLines", "1"], capture_output=True)
        os.makedirs(out_dir, exist_ok=True)
        for f in _snap_files():
            src = os.path.join(SD, f)
            if os.path.isdir(src):
                shutil.rmtree(src)
            else:
                shutil.move(src, os.path.join(out_dir, f))
    finally:
        for f in TEMP_FILES:
            p = os.path.join(SD, f)
            if os.path.exists(p):
                os.remove(p)
            if f in saved:
                open(p, "wb").write(saved[f])
    return open(os.path.join(SD, "runtime.log"), errors="replace").read()
