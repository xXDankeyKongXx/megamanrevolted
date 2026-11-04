# Builds the Map tab's world map (source/ui/world_map.inc) from the user's island map
# (assets/maps/world2_src.png, 1303x1207), with the location bubbles of the earlier map
# (assets/maps/world_src.jpg, 400x300) laid over it:
#   - the map at its on-screen size (WORLD_MAP_W x WORLD_MAP_H, drawn 1:1), RGBA, with the
#     background outside the pipe frame made transparent
#   - the bubbles, redrawn small in the original's style (cream box, dark border, dark text), in an
#     atlas; where each sits, where its pointer line starts and the spot it marks, in map pixels
# The old map's spots are placed on the new one by an affine fit of landmarks both maps show.
# Run: python -I tools/make_world_map.py
import numpy as np
from PIL import Image, ImageDraw, ImageFont

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
src = Image.open(ROOT + "/assets/maps/world2_src.png").convert("RGB")
W, H = src.size
a = np.asarray(src).astype(np.int32)

# Landmarks: (old map x, y) -> (new map x, y). Red location icons on both maps.
LANDMARKS = [((118, 117), (330, 470)), ((253, 103), (868, 423)), ((178, 190), (566, 765)),
             ((227, 224), (762, 898)), ((275, 150), (957, 597))]
A = np.array([[ox, oy, 1] for (ox, oy), _ in LANDMARKS], float)
B = np.array([n for _, n in LANDMARKS], float)
M = np.linalg.lstsq(A, B, rcond=None)[0]   # 3x2: [x y 1] @ M = new
def to_new(p):
    return np.array([p[0], p[1], 1.0]) @ M
res = A @ M - B
print("landmark fit error (new px):", np.round(np.hypot(res[:, 0], res[:, 1]), 1))

# Old map bubbles: name, box (x0, y0, x1, y1), pointer line start (near the box) or None, spot.
BUBBLES = [
    ("City Hall", (95, 39, 172, 58), (166, 52), (179, 77)),
    ("Yass Plains", (205, 37, 283, 49), None, (232, 62)),
    ("Downtown", (77, 63, 148, 77), (138, 77), (162, 101)),
    ("Old City", (244, 71, 300, 83), (246, 83), (224, 107)),
    ("Lake Jyun", (66, 90, 146, 103), None, (118, 117)),
    ("Clozer Woods", (234, 131, 322, 143), None, (275, 150)),
    ("Uptown", (84, 155, 136, 169), (118, 152), (148, 129)),
    ("Flutter", (95, 177, 150, 190), (150, 187), (178, 190)),
    ("Apple Market", (208, 180, 299, 194), (216, 182), (196, 152)),
    ("Cardon Forest", (122, 210, 217, 224), None, (227, 224)),
]

# Transparent outside the frame: the light blue background reached from the image's edges (the
# pipes stop the fill, so the sea inside stays).
r, g, b = a[:, :, 0], a[:, :, 1], a[:, :, 2]
blue = (b > r + 80) & (g > 95)
outside = np.zeros((H, W), bool)
stack = [(y, x) for y in range(H) for x in (0, W - 1) if blue[y, x]] + \
        [(y, x) for x in range(W) for y in (0, H - 1) if blue[y, x]]
for y, x in stack:
    outside[y, x] = True
while stack:
    y, x = stack.pop()
    for yy, xx in ((y + 1, x), (y - 1, x), (y, x + 1), (y, x - 1)):
        if 0 <= yy < H and 0 <= xx < W and blue[yy, xx] and not outside[yy, xx]:
            outside[yy, xx] = True
            stack.append((yy, xx))
print("outside fraction %.3f" % outside.mean())

# On-screen size: the Map tab's map area is 144 pixels tall.
SH = 144
SW = round(W * SH / H)
s = SH / H
rgba = np.dstack([a.astype(np.float32), np.where(outside, 0, 255).astype(np.float32)])
rgba[:, :, :3] *= rgba[:, :, 3:4] / 255   # premultiplied, so no blue fringe
small = np.asarray(Image.fromarray(np.clip(rgba, 0, 255).astype(np.uint8), "RGBA").resize((SW, SH), Image.LANCZOS)).astype(np.float32)
al = small[:, :, 3:4]
small[:, :, :3] = np.where(al > 0, small[:, :, :3] * 255 / np.maximum(al, 1), 0)
base = Image.fromarray(np.clip(small, 0, 255).astype(np.uint8), "RGBA")
base.save(ROOT + "/tools/tmp/world_base.png")

def to_screen(p):
    return to_new(p) * s

# Bubbles: text rendered 4x and reduced, for even letters at this size.
SS = 4
font = ImageFont.load_default(size=6.5 * SS)
FILL, EDGE, INK = (250, 240, 215, 255), (40, 30, 25, 255), (20, 16, 12, 255)
sprites = []
for name, (x0, y0, x1, y1), line, spot in BUBBLES:
    d = ImageDraw.Draw(Image.new("L", (1, 1)))
    l, t, rr, bb = d.textbbox((0, 0), name, font=font)
    tw, th = (rr - l) / SS, (bb - t) / SS
    bw, bh = int(np.ceil(tw)) + 5, int(np.ceil(th)) + 4
    big = Image.new("RGBA", (bw * SS, bh * SS), (0, 0, 0, 0))
    bd = ImageDraw.Draw(big)
    bd.rounded_rectangle((0, 0, bw * SS - 1, bh * SS - 1), radius=2 * SS, fill=FILL, outline=EDGE, width=SS)
    bd.text(((bw * SS - (rr - l)) / 2 - l, (bh * SS - (bb - t)) / 2 - t), name, font=font, fill=INK)
    sp = big.resize((bw, bh), Image.LANCZOS)
    # Placed where the old bubble's centre falls, kept on the map.
    cx, cy = to_screen(((x0 + x1) / 2, (y0 + y1) / 2))
    bx = min(max(round(cx - bw / 2), 1), SW - bw - 1)
    by = min(max(round(cy - bh / 2), 1), SH - bh - 1)
    tx, ty = to_screen(spot)
    if line:
        lx, ly = to_screen(line)
        lx, ly = min(max(lx, bx), bx + bw), min(max(ly, by), by + bh)   # onto the smaller box
    else:
        lx = ly = -1
    sprites.append((name, sp, (bx, by), (lx, ly), (tx, ty)))

AW = 128
x = y = row_h = 0
places = []
for name, sp, *_ in sprites:
    if x + sp.width > AW:
        x, y = 0, y + row_h + 1
        row_h = 0
    places.append((x, y))
    x += sp.width + 1
    row_h = max(row_h, sp.height)
AH = 8
while AH < y + row_h:
    AH *= 2
atlas = Image.new("RGBA", (AW, AH), (0, 0, 0, 0))
for (name, sp, *_), p in zip(sprites, places):
    atlas.alpha_composite(sp, p)
atlas.save(ROOT + "/tools/tmp/world_bubbles.png")

# Preview with every bubble.
prev = base.copy()
pd = ImageDraw.Draw(prev)
for (name, sp, (bx, by), (lx, ly), (tx, ty)) in sprites:
    if lx >= 0:
        pd.line((lx, ly, tx, ty), fill=EDGE, width=1)
    prev.alpha_composite(sp, (bx, by))
    pd.point((tx, ty), fill=(40, 100, 255, 255))
prev.resize((SW * 4, SH * 4), Image.NEAREST).save(ROOT + "/tools/tmp/world_preview.png")

def words(im):
    v = np.asarray(im).astype(np.uint32)
    v = (v[:, :, 0] << 24) | (v[:, :, 1] << 16) | (v[:, :, 2] << 8) | v[:, :, 3]
    flat = v.flatten()
    return "\n".join("    " + ", ".join("0x%08X" % w for w in flat[k:k + 8]) + "," for k in range(0, len(flat), 8))

lines = ["// World map for the Map tab (tools/make_world_map.py, from the user's island map) at its",
         "// on-screen size, and its location bubbles. RGBA8 (0xRRGGBBAA) row-major. Coordinates are in",
         "// map pixels.",
         "#define WORLD_MAP_W %d" % SW, "#define WORLD_MAP_H %d" % SH,
         "static const u32 world_map[WORLD_MAP_W * WORLD_MAP_H] = {", words(base), "};",
         "#define WORLD_BUBBLES_W %d" % AW, "#define WORLD_BUBBLES_H %d" % AH,
         "static const u32 world_bubbles[WORLD_BUBBLES_W * WORLD_BUBBLES_H] = {", words(atlas), "};",
         "typedef struct { const char* name; short ax, ay, w, h; float x, y, lx, ly, tx, ty; } WorldBubble;",
         "// name, atlas x/y and size, the bubble's place on the map, where its pointer line starts",
         "// (lx < 0: no line) and the spot it marks",
         "static const WorldBubble world_bubble_list[] = {"]
for (name, sp, (bx, by), (lx, ly), (tx, ty)), (px, py) in zip(sprites, places):
    lines.append('    { "%s", %d, %d, %d, %d, %d.0f, %d.0f, %.1ff, %.1ff, %.1ff, %.1ff },' %
                 (name, px, py, sp.width, sp.height, bx, by, lx, ly, tx, ty))
lines.append("};")
open(ROOT + "/source/ui/world_map.inc", "w", newline="\n").write("\n".join(lines) + "\n")
print("map", SW, SH, "atlas", AW, AH)

# Zoomed views: the map at 512 wide (3.3 texels per map pixel), in RomFS as one 512x512 RGBA8
# texture stored ready for the GPU (8x8 tiles, Morton order), the same layout as swizzle_into.
import os
HW = 512
HH = round(SH * HW / SW)
hi = np.asarray(Image.fromarray(np.clip(rgba, 0, 255).astype(np.uint8), "RGBA").resize((HW, HH), Image.LANCZOS)).astype(np.float32)
al = hi[:, :, 3:4]
hi[:, :, :3] = np.where(al > 0, hi[:, :, :3] * 255 / np.maximum(al, 1), 0)
hi = np.clip(hi + 0.5, 0, 255).astype(np.uint8)
tex = np.zeros((512, 512, 4), np.uint8)
tex[:HH, :HW] = hi
v = tex.astype(np.uint32)
v = (v[:, :, 0] << 24) | (v[:, :, 1] << 16) | (v[:, :, 2] << 8) | v[:, :, 3]
morton = np.zeros((8, 8), np.int64)
for yy in range(8):
    for xx in range(8):
        morton[yy, xx] = (xx & 1) | ((yy & 1) << 1) | ((xx & 2) << 1) | ((yy & 2) << 2) | ((xx & 4) << 2) | ((yy & 4) << 3)
out = np.zeros(512 * 512, np.uint32)
blocks = v.reshape(64, 8, 64, 8).transpose(0, 2, 1, 3)
for by in range(64):
    for bx in range(64):
        base = (by * 64 + bx) * 64
        out[base + morton.flatten()] = blocks[by, bx].flatten()
os.makedirs(ROOT + "/romfs/maps", exist_ok=True)
open(ROOT + "/romfs/maps/world_hi.bin", "wb").write(out.astype("<u4").tobytes())
with open(ROOT + "/source/ui/world_map.inc", "a", newline="\n") as f:
    f.write("// Zoomed views: romfs/maps/world_hi.bin, WORLD_HI_W x WORLD_HI_H in a 512x512 RGBA8 texture.\n")
    f.write("#define WORLD_HI_W %d\n#define WORLD_HI_H %d\n" % (HW, HH))
print("hi", HW, HH)
