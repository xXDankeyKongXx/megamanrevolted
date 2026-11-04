# Builds the Map tab's dungeon map for the opening Reaverbot dungeon (Ocean Tower, area 0) from
# the user's isometric map (assets/maps/ocean_tower_src.png, VGCartography): the isometric rooms
# alone (background, title, tower, enemy portraits and legends removed; annotation labels erased),
#   romfs/maps/ocean_tower_<n>.bin - a pyramid of levels, level 0 at the source's full resolution and
#                           each next one half the size, cut into 256x256 RGBA8 tiles stored ready for
#                           the GPU (8x8 tiles in Morton order), row by row
#   source/ui/dungeon_map.inc - the map's size in map pixels (the coordinates the app uses: the
#                           whole map is 958 wide), the levels, and the loot spots (hidden until the
#                           dungeon's Dig Scan is found)
# Run: python -I tools/make_dungeon_map.py
import numpy as np
from PIL import Image

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
src = Image.open(ROOT + "/assets/maps/ocean_tower_src.png").convert("RGB")
a = np.asarray(src).astype(np.int32)
H, W = a.shape[:2]
r, g, b = a[:, :, 0], a[:, :, 1], a[:, :, 2]

# Background: the dark blue pattern (and black). Room walls that are blue are brighter.
bg = ((b > r + 25) & (b > g + 10) & (b < 125)) | (a.max(axis=2) < 40)
fg = ~bg
# Not part of the map: everything above the rooms (sky, title, tower, enemy portraits), the tower's
# base at the left, and the legend boxes at the bottom left.
fg[:950, :] = False
fg[:1080, :330] = False
fg[2020:, :1170] = False
fg[:1170, 1950:] = False   # the Hanmuru Doll portrait's blades

# Connected components (4-neighbour) of the foreground; keep the big ones (rooms, corridors).
lab = np.zeros((H, W), np.int32)
sizes = [0]
n = 0
for y in range(H):
    row = fg[y]
    for x in np.nonzero(row & (lab[y] == 0))[0]:
        if lab[y, x]:
            continue
        n += 1
        stack = [(y, x)]
        lab[y, x] = n
        cnt = 0
        while stack:
            cy, cx = stack.pop()
            cnt += 1
            for yy, xx in ((cy + 1, cx), (cy - 1, cx), (cy, cx + 1), (cy, cx - 1)):
                if 0 <= yy < H and 0 <= xx < W and fg[yy, xx] and not lab[yy, xx]:
                    lab[yy, xx] = n
                    stack.append((yy, xx))
        sizes.append(cnt)
sizes = np.array(sizes)
keep = sizes > 6000
keep[0] = False
mask = keep[lab]

# Fill small holes (room details that read as background); big enclosed areas are open space.
holes = ~mask
hlab = np.zeros((H, W), np.int32)
m = 0
for y in range(H):
    for x in np.nonzero(holes[y] & (hlab[y] == 0))[0]:
        if hlab[y, x]:
            continue
        m += 1
        stack = [(y, x)]
        hlab[y, x] = m
        pix = []
        border = False
        while stack:
            cy, cx = stack.pop()
            pix.append((cy, cx))
            if cy in (0, H - 1) or cx in (0, W - 1):
                border = True
            for yy, xx in ((cy + 1, cx), (cy - 1, cx), (cy, cx + 1), (cy, cx - 1)):
                if 0 <= yy < H and 0 <= xx < W and holes[yy, xx] and not hlab[yy, xx]:
                    hlab[yy, xx] = m
                    stack.append((yy, xx))
        if not border and len(pix) < 4000:
            ys, xs = zip(*pix)
            mask[list(ys), list(xs)] = True

# Annotation labels (and the start marker with its Mega Man) are erased; where they sat on a room
# they are inpainted from the room around them. (x0, y0, x1, y1) in source pixels.
LABELS = [(1574, 1060, 1650, 1100), (1580, 1234, 1736, 1276), (1914, 1530, 1956, 1650),
          (1946, 1550, 2128, 1586), (2014, 1580, 2050, 1638), (524, 1600, 678, 1642),
          (288, 1626, 412, 1666), (514, 1730, 622, 1770), (1330, 1836, 1466, 1880)]
# Loot the map shows (hidden in the app for now): name and where it is, in source pixels.
LOOT = [("Zenny", 1616, 1124), ("Blue Refractor", 1652, 1300), ("Power Raiser", 412, 1672), ("580 Zenny", 512, 1724)]
rgb = a.astype(np.float32)
erase = np.zeros((H, W), bool)
for x0, y0, x1, y1 in LABELS:
    erase[y0:y1, x0:x1] = True
alpha = mask.astype(np.float32)
alpha[erase] = 0
known = ~erase
ys, xs = np.nonzero(erase)
# Start values: the mean of the surroundings; then membrane-relax colour and coverage.
rgb[ys, xs] = rgb[known & mask].mean(axis=0)
for _ in range(800):
    def nb(arr):
        return (arr[np.clip(ys - 1, 0, H - 1), xs] + arr[np.clip(ys + 1, 0, H - 1), xs] +
                arr[ys, np.clip(xs - 1, 0, W - 1)] + arr[ys, np.clip(xs + 1, 0, W - 1)]) / 4
    rgb[ys, xs] = nb(rgb)
    alpha[ys, xs] = nb(alpha)
rng = np.random.default_rng(64)
rgb[ys, xs] += rng.normal(0, 6, (len(ys), 1))
mask = alpha > 0.5

# Crop to the rooms. Map pixels: the crop scaled to 958 wide (the units of the calibration and loot).
yy, xx = np.nonzero(mask)
cx0, cy0, cx1, cy1 = xx.min(), yy.min(), xx.max() + 1, yy.max() + 1
MAP_W = 958
scale = MAP_W / (cx1 - cx0)
MAP_H = round((cy1 - cy0) * scale)
rgba = np.dstack([np.clip(rgb, 0, 255), mask * 255.0]).astype(np.float32)[cy0:cy1, cx0:cx1]
rgba[:, :, :3] *= rgba[:, :, 3:4] / 255   # premultiplied, so no colour bleeds in from transparent pixels

def unpremultiply(im):
    im = im.copy()
    al = im[:, :, 3:4]
    im[:, :, :3] = np.where(al > 0, im[:, :, :3] * 255 / np.maximum(al, 1), 0)
    return np.clip(im + 0.5, 0, 255).astype(np.uint8)

def morton_index():
    idx = np.zeros((8, 8), np.int64)
    for y in range(8):
        for x in range(8):
            idx[y, x] = (x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3)
    return idx
MORTON = morton_index()
T = 256

def tile_bytes(t):
    # Same layout as bottom_ui.c's swizzle_into: u32 0xRRGGBBAA per texel, 8x8 blocks row by row,
    # Morton order inside a block.
    v = t.astype(np.uint32)
    v = (v[:, :, 0] << 24) | (v[:, :, 1] << 16) | (v[:, :, 2] << 8) | v[:, :, 3]
    out = np.zeros(T * T, np.uint32)
    blocks = v.reshape(T // 8, 8, T // 8, 8).transpose(0, 2, 1, 3)   # by, bx, y, x
    for by in range(T // 8):
        for bx in range(T // 8):
            base = (by * (T // 8) + bx) * 64
            out[base + MORTON.flatten()] = blocks[by, bx].flatten()
    return out.astype("<u4").tobytes()

import os
os.makedirs(ROOT + "/romfs/maps", exist_ok=True)
levels = []
tile_slots = []
level = 0
cur = rgba
while True:
    h, w = cur.shape[:2]
    cols, rows = (w + T - 1) // T, (h + T - 1) // T
    img = unpremultiply(cur)
    pad = np.zeros((rows * T, cols * T, 4), np.uint8)
    pad[:h, :w] = img
    # Fully transparent tiles are left out of the file (tile_slots: -1).
    first = len(tile_slots)
    with open(ROOT + "/romfs/maps/ocean_tower_%d.bin" % level, "wb") as f:
        stored = 0
        for r in range(rows):
            for c in range(cols):
                t = pad[r * T:(r + 1) * T, c * T:(c + 1) * T]
                if t[:, :, 3].max() == 0:
                    tile_slots.append(-1)
                    continue
                f.write(tile_bytes(t))
                tile_slots.append(stored)
                stored += 1
    levels.append((w, h, cols, rows, w / MAP_W, first))
    if level == 0:
        Image.fromarray(img, "RGBA").save(ROOT + "/tools/tmp/ocean_tower_map.png")
    if cols * rows <= 2:
        break
    # Next level: half the size (premultiplied box-filtered Lanczos).
    nw, nh = (w + 1) // 2, (h + 1) // 2
    cur = np.asarray(Image.fromarray(np.clip(cur + 0.5, 0, 255).astype(np.uint8), "RGBA").resize((nw, nh), Image.LANCZOS)).astype(np.float32)
    level += 1
# The old single texture is gone.
if os.path.exists(ROOT + "/data/ocean_tower.bin"):
    os.remove(ROOT + "/data/ocean_tower.bin")

inc = ["// Dungeon map of the opening Reaverbot dungeon (Ocean Tower, area 0) for the Map tab",
       "// (tools/make_dungeon_map.py). Pixels: romfs/maps/ocean_tower_<level>.bin, 256x256 RGBA8 tiles.",
       "// Map pixels (all coordinates here): the map is OCEAN_TOWER_W x OCEAN_TOWER_H.",
       "#define OCEAN_TOWER_W %d" % MAP_W, "#define OCEAN_TOWER_H %d" % MAP_H,
       "// Map pixels per source pixel, and the crop origin in the source image (for calibration).",
       "#define OCEAN_TOWER_SCALE %.6ff" % scale, "#define OCEAN_TOWER_X0 %d" % cx0, "#define OCEAN_TOWER_Y0 %d" % cy0,
       "// Levels, finest first: size in texels, tiles across and down, texels per map pixel, and where",
       "// its tiles start in ocean_tower_tile_slots.",
       "typedef struct { short w, h, cols, rows; float texels; short first; } MapLevel;",
       "#define OCEAN_TOWER_LEVELS %d" % len(levels),
       "static const MapLevel ocean_tower_levels[OCEAN_TOWER_LEVELS] = {"]
for w, h, c, r, t, first in levels:
    inc.append("    { %d, %d, %d, %d, %.6ff, %d }," % (w, h, c, r, t, first))
inc += ["};",
        "// Each tile's place in its level's file, row by row; -1: fully transparent, not stored.",
        "static const signed char ocean_tower_tile_slots[] = {",
        "    " + ", ".join(str(v) for v in tile_slots) + ",",
        "};",
        "// Loot shown on the original map, hidden until the dungeon's Dig Scan is found (map pixels).",
        "typedef struct { const char* name; float x, y; } DungeonLoot;",
        "static const DungeonLoot ocean_tower_loot[] = {"]
for name, lx, ly in LOOT:
    inc.append('    { "%s", %.1ff, %.1ff },' % (name, (lx - cx0) * scale, (ly - cy0) * scale))
inc.append("};")
open(ROOT + "/source/ui/dungeon_map.inc", "w", newline="\n").write("\n".join(inc) + "\n")
print("map", MAP_W, MAP_H, "levels", levels)
