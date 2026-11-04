# Builds the title screen's replacement logo (source/render/title_logo.inc): "Mega Man 64 ReVolted"
# (assets/banner/revolted_logo.png) laid out in the game's 255x128 title logo image where the original
# logo sat (x 5-252, y 40-117), as RGBA8 (0xRRGGBBAA, like the renderer's decoded texels).
# The renderer swaps it in for the game's 16 logo strips (n64_renderer.cpp, title_logo_strip).
# Run: python -I tools/make_title_logo.py
import numpy as np
from PIL import Image

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
W, H = 255, 128
BOX = (5, 40, 253, 118)  # the original logo's extent
logo = Image.open(ROOT + "/assets/banner/revolted_logo.png").convert("RGBA")
bw, bh = BOX[2] - BOX[0], BOX[3] - BOX[1]
scale = min(bw / logo.width, bh / logo.height)
lw, lh = round(logo.width * scale), round(logo.height * scale)
# Premultiplied resize, so the transparent edge doesn't darken.
a = np.asarray(logo).astype(np.float32)
a[:, :, :3] *= a[:, :, 3:4] / 255
small = np.asarray(Image.fromarray(a.astype(np.uint8), "RGBA").resize((lw, lh), Image.BOX)).astype(np.float32)  # averaging: no ringing
al = small[:, :, 3:4]
small[:, :, :3] = np.where(al > 0, small[:, :, :3] * 255 / np.maximum(al, 1), 0)
canvas = Image.new("RGBA", (W, H), (0, 0, 0, 0))
canvas.alpha_composite(Image.fromarray(np.clip(small + 0.5, 0, 255).astype(np.uint8), "RGBA"),
                       (BOX[0] + (bw - lw) // 2, BOX[1] + (bh - lh) // 2))
canvas.save(ROOT + "/tools/tmp/title_logo_new.png")
v = np.asarray(canvas).astype(np.uint32)
v = ((v[:, :, 0] << 24) | (v[:, :, 1] << 16) | (v[:, :, 2] << 8) | v[:, :, 3]).flatten()
body = "\n".join("    " + ", ".join("0x%08X" % w for w in v[k:k + 8]) + "," for k in range(0, len(v), 8))
open(ROOT + "/source/render/title_logo.inc", "w", newline="\n").write(
    "// Title screen logo (tools/make_title_logo.py): 255x128 RGBA8 (0xRRGGBBAA), row-major.\n"
    "#define TITLE_LOGO_W 255\n#define TITLE_LOGO_H 128\n"
    "static const uint32_t title_logo[TITLE_LOGO_W * TITLE_LOGO_H] = {\n" + body + "\n};\n")
print("logo", lw, lh)
