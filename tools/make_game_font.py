# Extracts the game's text font for the bottom screen into source/ui/game_font.inc.
#
# The font is a 4-bit sheet in the game's static data at RAM 0x800B5104 (128 bytes per pixel row).
# Glyphs are 12x12 in bands of 12 rows; each band holds 20 glyphs starting 24 pixels in (the first
# 24 pixels of each row belong to another texture), the last one running over the row's end into the
# next row (the game reads them with a 128-byte stride, so it is contiguous there). The band before
# the sheet holds the digits and some punctuation. Character -> (band, glyph) below was read off the
# sheet; widths are trimmed to each glyph's ink plus one pixel of spacing.
# Colours: index 1 is the letter body, 2 a softer body pixel, 3 the drop shadow (bottom/right); the
# atlas stores 255 / 180 / 80 for them, so the UI can tint the body any colour over a dark shadow.
# Input: a RAM dump (snapshots_full.txt), word-swapped as the runtime stores it.
# Run: python -I tools/make_game_font.py <snap_N.bin>
import sys

from PIL import Image

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
raw = open(sys.argv[1], "rb").read()
ram = bytes(raw[i ^ 3] for i in range(len(raw)))
SHEET = 0xB5104

def cell(band, k):
    """12x12 palette indices of glyph k (0-19) of a band (-1 = the digits band)."""
    base = SHEET + band * 12 * 128 + 12 + k * 6
    out = []
    for y in range(12):
        row = []
        for x in range(12):
            b = ram[base + y * 128 + x // 2]
            row.append((b >> 4) if x % 2 == 0 else (b & 15))
        out.append(row)
    return out

CHARS = {}
for i, ch in enumerate("0123456789"):
    CHARS[ch] = (-1, i)
CHARS.update({"'": (-1, 12), "!": (-1, 13), "?": (-1, 14), "(": (-1, 17), ")": (-1, 18)})
for i, ch in enumerate("ABCDEFGHIJKLMNOPQRST"):
    CHARS[ch] = (0, i)
for i, ch in enumerate("UVWXYZabcdefghijklmn"):
    CHARS[ch] = (1, i)
for i, ch in enumerate("opqrstuvwxyz"):
    CHARS[ch] = (2, i)
CHARS.update({"&": (2, 12), "/": (2, 15), "-": (2, 19), ",": (3, 8), '"': (3, 9), ".": (3, 10), "+": (3, 13), ":": (5, 4)})
CHARS.update({chr(1): (5, 2), chr(2): (5, 3)})  # alpha, omega (item names), as codes 1 and 2
CROP = {".": 4}  # "." is the first dot of the game's "..." glyph

ORDER = sorted(CHARS)
COLS = 16
atlas = Image.new("L", (COLS * 12, ((len(ORDER) + COLS - 1) // COLS) * 12), 0)
widths = {}
for n, ch in enumerate(ORDER):
    g = cell(*CHARS[ch])
    if ch in CROP:
        g = [[v if x < CROP[ch] else 0 for x, v in enumerate(row)] for row in g]
    ink = [x for x in range(12) if any(g[y][x] for y in range(12))]
    x0, x1 = (min(ink), max(ink)) if ink else (0, 3)
    widths[ch] = (x0, x1 - x0 + 1)
    for y in range(12):
        for x in range(12):
            v = g[y][x]
            atlas.putpixel(((n % COLS) * 12 + x, (n // COLS) * 12 + y), {0: 0, 1: 255, 2: 180, 3: 80}[v])
atlas.save(ROOT + "/tools/tmp/game_font.png")

out = ["// The game's text font (tools/make_game_font.py): 8-bit coverage, 12x12 glyphs, %d per row." % COLS,
       "#define GAME_FONT_W %d" % atlas.width, "#define GAME_FONT_H %d" % atlas.height, "#define GAME_FONT_COLS %d" % COLS,
       "static const unsigned char game_font_pixels[GAME_FONT_W * GAME_FONT_H] = {"]
px = list(atlas.tobytes())
for k in range(0, len(px), 24):
    out.append("    " + ",".join(str(v) for v in px[k:k + 24]) + ",")
out.append("};")
out.append("// For each character: atlas cell, first ink column and ink width (pixels).")
out.append("typedef struct { char ch; unsigned char cell, x0, width; } GameGlyph;")
out.append("static const GameGlyph game_font_glyphs[] = {")
for n, ch in enumerate(ORDER):
    c = "'\\''" if ch == "'" else ("'\\x%02x'" % ord(ch) if ord(ch) < 32 else "'%s'" % ch)
    out.append("    { %s, %d, %d, %d }," % (c, n, widths[ch][0], widths[ch][1]))
out.append("};")
open(ROOT + "/source/ui/game_font.inc", "w", newline="\n").write("\n".join(out) + "\n")
print(len(ORDER), "glyphs")
