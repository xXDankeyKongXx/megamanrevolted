# Builds the Dig Scan icon (a dungeon's map item; also the Map Binder's icon) from the user's art
# (assets/maps/dig_scan_src.png): black background made transparent, cropped, pre-scaled RGBA8 in
# source/ui/dig_scan_icon.inc.
# Run: python -I tools/make_dig_scan_icon.py
import numpy as np
from PIL import Image

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
a = np.asarray(Image.open(ROOT + "/assets/maps/dig_scan_src.png").convert("RGBA")).astype(np.float32)
H, W = a.shape[:2]
# Background: near-black connected to the edges.
dark = a[:, :, :3].max(axis=2) < 24
bg = np.zeros((H, W), bool)
stack = [(y, x) for y in range(H) for x in (0, W - 1) if dark[y, x]] + [(y, x) for x in range(W) for y in (0, H - 1) if dark[y, x]]
for y, x in stack:
    bg[y, x] = True
while stack:
    y, x = stack.pop()
    for yy, xx in ((y + 1, x), (y - 1, x), (y, x + 1), (y, x - 1)):
        if 0 <= yy < H and 0 <= xx < W and dark[yy, xx] and not bg[yy, xx]:
            bg[yy, xx] = True
            stack.append((yy, xx))
a[:, :, 3] = np.where(bg, 0, 255)
ys, xs = np.nonzero(~bg)
y0, y1, x0, x1 = ys.min(), ys.max() + 1, xs.min(), xs.max() + 1
side = max(y1 - y0, x1 - x0)
sq = np.zeros((side, side, 4), np.float32)
oy, ox = (side - (y1 - y0)) // 2, (side - (x1 - x0)) // 2
sq[oy:oy + y1 - y0, ox:ox + x1 - x0] = a[y0:y1, x0:x1]
sq[:, :, :3] *= sq[:, :, 3:4] / 255
# Pre-scaled to each size it is shown at (drawn 1:1): LARGE (Special Items grid, dungeon map corner)
# and SMALL (Map Binder list), side by side in one atlas.
LARGE, SMALL = 26, 18
def scaled(n):
    im = np.asarray(Image.fromarray(sq.astype(np.uint8), "RGBA").resize((n, n), Image.LANCZOS)).astype(np.float32)
    al = im[:, :, 3:4]
    im[:, :, :3] = np.where(al > 0, im[:, :, :3] * 255 / np.maximum(al, 1), 0)
    return np.clip(im + 0.5, 0, 255).astype(np.uint8)
AW, AH = 64, 32
atlas = np.zeros((AH, AW, 4), np.uint8)
atlas[:LARGE, :LARGE] = scaled(LARGE)
atlas[:SMALL, LARGE + 2:LARGE + 2 + SMALL] = scaled(SMALL)
Image.fromarray(atlas, "RGBA").resize((AW * 4, AH * 4), Image.NEAREST).save(ROOT + "/tools/tmp/dig_scan_icon.png")
v = atlas.astype(np.uint32)
v = ((v[:, :, 0] << 24) | (v[:, :, 1] << 16) | (v[:, :, 2] << 8) | v[:, :, 3]).flatten()
NL = chr(10)
body = NL.join("    " + ", ".join("0x%08X" % w for w in v[k:k + 8]) + "," for k in range(0, len(v), 8))
lines = ["// Dig Scan icon (tools/make_dig_scan_icon.py) at the sizes it is shown at: an RGBA8 (0xRRGGBBAA)",
         "// atlas, the large one at (0, 0), the small one at (DIG_SCAN_LARGE + 2, 0).",
         "#define DIG_SCAN_LARGE %d" % LARGE, "#define DIG_SCAN_SMALL %d" % SMALL,
         "#define DIG_SCAN_ATLAS_W %d" % AW, "#define DIG_SCAN_ATLAS_H %d" % AH,
         "static const u32 dig_scan_icon[DIG_SCAN_ATLAS_W * DIG_SCAN_ATLAS_H] = {", body, "};"]
open(ROOT + "/source/ui/dig_scan_icon.inc", "w", newline=NL).write(NL.join(lines) + NL)
print("crop", x0, y0, x1, y1)
