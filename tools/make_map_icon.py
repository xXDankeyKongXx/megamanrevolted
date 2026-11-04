# Mega Man's head icon for the dungeon map (from the user's 300x300 pixel art, a 16x16 grid at
# 18.75 source pixels each): source/ui/map_icon.inc, 16x16 RGBA8 (0xRRGGBBAA), row-major.
# Run: python -I tools/make_map_icon.py
import numpy as np
from PIL import Image

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
im = np.asarray(Image.open(ROOT + "/assets/maps/megaman_icon_src.png").convert("RGBA"))
N, step = 16, 300 / 16
px = [im[int((y + 0.5) * step), int((x + 0.5) * step)] for y in range(N) for x in range(N)]
vals = ["0x%02X%02X%02X%02X" % (p[0], p[1], p[2], 255 if p[3] >= 128 else 0) for p in px]
Image.fromarray(np.array(px, np.uint8).reshape(N, N, 4), "RGBA").resize((128, 128), Image.NEAREST).save(ROOT + "/tools/tmp/map_icon.png")
out = ["// Mega Man's head for the dungeon map (tools/make_map_icon.py): 16x16 RGBA8, row-major.",
       "static const u32 map_icon[16 * 16] = {"]
out += ["    " + ", ".join(vals[k:k + 8]) + "," for k in range(0, len(vals), 8)]
out.append("};")
open(ROOT + "/source/ui/map_icon.inc", "w", newline="\n").write("\n".join(out) + "\n")
