# Cuts the game's menu sound effects out of a recording of the port's audio output
# (assets/sounds/menu_sfx_rec.raw: s16 stereo, 32 kHz, made at boot with nothing else playing by
# pokes.txt "120 audiorec 400000", "250 sfx 129", "350 sfx 130", "450 sfx 131") for the bottom
# screen's own sounds: data/ui_cursor.bin (129, cursor move), data/ui_select.bin (130, select) and
# data/ui_back.bin (131, back). Each is raw s16 stereo at 32 kHz.
# Run: python -I tools/make_ui_sounds.py
import numpy as np

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
SR = 32000
a = np.fromfile(ROOT + "/assets/sounds/menu_sfx_rec.raw", np.int16).reshape(-1, 2)
level = np.abs(a.astype(np.int32)).max(axis=1)

def cut(t0, t1, name):
    seg = slice(int(t0 * SR), int(t1 * SR))
    lv = level[seg]
    loud = np.nonzero(lv > 24)[0]
    s, e = loud[0], loud[-1] + 1
    clip = a[seg][max(0, s - 32):e + 64].copy()
    # A short fade at the end, so a cut tail doesn't click.
    fade = min(256, len(clip))
    clip[-fade:] = (clip[-fade:].astype(np.float32) * np.linspace(1, 0, fade)[:, None]).astype(np.int16)
    clip.astype("<i2").tofile(ROOT + "/data/" + name + ".bin")
    print(name, "%.3f s" % (len(clip) / SR), "peak", int(np.abs(clip).max()))

cut(1.3, 1.95, "ui_cursor")
cut(2.5, 3.25, "ui_select")
cut(3.8, 4.40, "ui_back")
