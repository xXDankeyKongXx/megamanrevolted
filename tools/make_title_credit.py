# Builds "DANKEY KONG 2026" for the title screen out of the game's own copyright lettering, so it
# matches exactly: letters cut from the two copyright lines (assets/title/copyright_line1.png and
# _line2.png, the game's 255x16 and 159x16 strips as the renderer decodes them). K, Y and 6 aren't in
# them: K and 6 are drawn in the lettering's own pixel pattern and coloured row by row from real
# letters (D, 9), Y is V's top on T's stem. Output: source/render/title_credit.inc, a 128x16
# RGBA8 texture stored ready for the GPU (8x8 tiles, Morton order).
# Run: python -I tools/make_title_credit.py
import numpy as np
from PIL import Image

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
L1 = np.asarray(Image.open(ROOT + "/assets/title/copyright_line1.png").convert("RGBA")).copy()
L2 = np.asarray(Image.open(ROOT + "/assets/title/copyright_line2.png").convert("RGBA")).copy()

def cut(line, x0, x1):
    return line[:, x0:x1 + 1].copy()

def recolour(glyph, model):
    # Each pixel takes the colour the model glyph has in the same row for that brightness class
    # (bright core or blue rim), so moved pieces shade like the rest of the lettering.
    out = glyph.copy()
    for y in range(glyph.shape[0]):
        row = model[y]
        lit = row[row[:, 3] > 0]
        if not len(lit):
            continue
        core = lit[lit[:, 0] > 150]
        rim = lit[lit[:, 0] <= 150]
        for x in range(glyph.shape[1]):
            p = glyph[y, x]
            if p[3] == 0:
                continue
            src = core if p[0] > 150 and len(core) else (rim if len(rim) else lit)
            out[y, x, :3] = np.median(src[:, :3], axis=0)
    return out

G = {
    "D": cut(L2, 82, 87),
    "A": cut(L1, 144, 149),
    "N": cut(L1, 82, 87),
    "E": cut(L1, 202, 206),
    "O": cut(L2, 59, 64),
    "G": cut(L1, 172, 176),
    "2": cut(L1, 121, 125),
    "0": cut(L1, 126, 130),
}
nine = cut(L1, 103, 107)
def drawn(rows, model):
    # A letter drawn in the lettering's own pattern ('#' bright core, '+' blue rim, rows 5-11),
    # coloured row by row from a real letter.
    g = np.zeros((16, len(rows[0]), 4), np.uint8)
    for y, row in enumerate(rows):
        for x, c in enumerate(row):
            if c == "#":
                g[5 + y, x] = (255, 255, 255, 255)
            elif c == "+":
                g[5 + y, x] = (60, 120, 220, 255)
    return recolour(g, model)

# 6: drawn like the 0 and 9 beside it (the 9 turned over reads as an 8 at this size).
G["6"] = drawn([".+##+",
                "##+..",
                "#+...",
                "####+",
                "#+.##",
                "#+.##",
                "+###+"], nine)

# K: stem like D's, arms meeting at the middle row.
G["K"] = drawn(["+..++",
                "#+.##",
                "#+##+",
                "###+.",
                "#+##+",
                "#+.##",
                "#+..#"], G["D"])
# Y: V's top rows on T's stem.
V = cut(L1, 222, 227)
T = cut(L2, 76, 81)
Y = np.zeros_like(V)
Y[:9] = V[:9]
Y[9:] = T[9:, :V.shape[1]]
G["Y"] = Y

TEXT = "DANKEY KONG 2026"
SPACE = 3  # the game's word gap ("2000 ALL")
cols = []
for c in TEXT:
    if c == " ":
        cols.append(np.zeros((16, SPACE, 4), np.uint8))
    else:
        cols.append(G[c])
img = np.concatenate(cols, axis=1)
xs = np.nonzero(img[:, :, 3].max(axis=0) > 0)[0]
img = img[:, xs.min():xs.max() + 1]
TW = img.shape[1]
tex = np.zeros((16, 128, 4), np.uint8)
tex[:, :TW] = img
Image.fromarray(tex, "RGBA").save(ROOT + "/tools/tmp/title_credit.png")
v = tex.astype(np.uint32)
v = (v[:, :, 0] << 24) | (v[:, :, 1] << 16) | (v[:, :, 2] << 8) | v[:, :, 3]
out = np.zeros(128 * 16, np.uint32)
for y in range(16):
    for x in range(128):
        m = (x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3)
        out[((y // 8) * 16 + x // 8) * 64 + m] = v[y, x]
body = "\n".join("    " + ", ".join("0x%08X" % w for w in out[k:k + 8]) + "," for k in range(0, len(out), 8))
open(ROOT + "/source/render/title_credit.inc", "w", newline="\n").write(
    "// \"DANKEY KONG 2026\" for the title screen (tools/make_title_credit.py), in the game's copyright\n"
    "// lettering: a 128x16 RGBA8 texture, Morton-tiled; the text is TITLE_CREDIT_W pixels wide from the left.\n"
    "#define TITLE_CREDIT_W %d\n" % TW +
    "static const uint32_t title_credit_texels[128 * 16] = {\n" + body + "\n};\n")
print("text width", TW)
