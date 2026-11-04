# Builds the Map tab's area maps (dungeons, and towns/fields) from the user's isometric maps in
# isometric/ (VGCartography "Digger's Journal" images): each map's rooms alone - background,
# titles, portraits and legends removed, item labels erased and kept as loot spots - scaled to map
# units and stored as a pyramid of 256x256 ETC1A4 tiles (encoded by tex3ds, ready for the GPU).
# Images holding several maps (zones, interiors) give one map each, cut out by a box.
#   romfs/maps/<id>_<level>.bin   tiles of each level, row by row; fully transparent ones left out
#   source/ui/area_maps.inc       per map: size, levels, tile slots, loot (map units)
# Run: python -I tools/make_maps.py [<id> ...]   (default: all; the .inc always lists every map)
import os
import subprocess
import sys

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
sys.path.insert(0, ROOT + "/tools/tmp/pylib")
import cv2  # noqa: E402
import numpy as np  # noqa: E402
from PIL import Image  # noqa: E402

Image.MAX_IMAGE_PIXELS = None
sys.path.insert(0, ROOT + "/tools")
from find_map_labels import find_labels  # noqa: E402

T = 256
UNITS = 0.45          # map units per source pixel (the Ocean Tower map's scale: 958 units ~ 2130 px)
MAX_UNITS = 2400      # a map wider than this is scaled down to it
TEX3DS = "/opt/devkitpro/tools/bin/tex3ds"
BASH = "G:/devkitPro/msys2/usr/bin/bash.exe"

# Each map: id (file names), title, source image, background rule, boxes outside the map (titles,
# portraits, legends, place labels; source px), an optional box the map lies in (images with several
# maps), and its loot: label index (tools/find_map_labels.py's numbering for the image) -> name.
MAPS = [
    dict(id="cardon_subgate", title="Cardon Forest Sub-Gate", src="MegaManLegends-CardonForestSub-Gate.png",
         bg="vgc", exclude=[(0, 0, 1690, 232), (30, 250, 1160, 650), (2940, 1590, 3400, 1850), (2750, 350, 3025, 432)],
         loot={3: "Starter Key", 4: "Old Bone", 5: "Spring Set", 6: "Starter Key", 7: "Yellow Refractor",
               8: "Starter Key", 10: "2,300 Zenny", 12: "Old Doll", 13: "300 Zenny", 14: "Grenade Kit"}),
    dict(id="clozer_subgate", title="Clozer Woods Sub-Gate", src="MegaManLegends-ClozerWoodsSub-Gate.png",
         bg="vgc", exclude=[(0, 0, 1700, 262), (0, 262, 1100, 1100), (1085, 395, 1275, 590), (39, 2310, 483, 2560), (2840, 1530, 3000, 1625)],
         erase=[(1905, 313, 2175, 398)],
         loot={2: "450 Zenny", 3: "Tele-lens", 4: "ID Card", 5: "920 Zenny", 6: "Antique Bell", 7: "1,840 Zenny",
               8: "1,200 Zenny", 9: "Guidance Unit", 11: "Target Sensor", 12: "ID Card", 14: "ID Card"}),
    dict(id="lakejyun_subgate", title="Lake Jyun Sub-Gate", src="MegaManLegends-LakeJyunSub-Gate.png",
         bg="vgc_floors",
         exclude=[(0, 0, 1520, 240), (130, 1100, 1790, 1510), (4490, 1550, 5560, 2160), (5840, 3150, 6322, 3473)],
         erase=[(70, 3290, 330, 3410), (3605, 820, 3800, 925), (4890, 1445, 5085, 1540)],
         loot={0: "Red Refractor", 1: "5,130 Zenny", 2: "Starter Key", 3: "Joint Plug", 4: "Gatling Part", 5: "Starter Key",
               6: "Starter Key", 7: "Ring", 8: "220 Zenny", 9: "1,240 Zenny", 10: "Old Hoverjets"}),
    dict(id="main_gate", title="Main Gate", src="MegaManLegends-MainGate.png",
         bg="vgc", exclude=[(0, 0, 2175, 760), (2960, 1190, 3458, 1479)],
         erase=[(585, 825, 735, 905), (1180, 1100, 1350, 1185), (2175, 760, 2330, 840)],
         loot={1: "Proto-Refractor", 2: "Buster Unit Ω", 3: "Power Stream", 5: "Shiny Red Stone", 6: "2,170 Zenny",
               8: "10,000 Zenny", 9: "Blunted Drill", 10: "Autofire Unit"}),
    dict(id="city_hall", title="City Hall", src="MegaManLegends-KatteloxIsland-CityHall.png", dungeon=False,
         bg="town", holes=80000,  # holes: dark windows and roofs inside the district
         exclude=[(0, 0, 1740, 210), (80, 450, 360, 535), (880, 400, 1225, 715), (5240, 280, 5935, 815),
                             (4930, 2410, 5500, 2815), (40, 2190, 1820, 3212), (5780, 2230, 6612, 3212)],
         erase=[(1815, 2228, 2070, 2360), (4560, 490, 4800, 605)]),
    dict(id="lake_jyun", title="Lake Jyun", src="MegaManLegends-LakeJyun.png", dungeon=False,
         bg="field", holes=80000,
         # (the sky on each side of the lake's top walls, in steps that stay clear of the diagonal walls)
         exclude=[(0, 0, 2350, 360), (2350, 0, 3300, 330), (3300, 0, 3700, 250), (6500, 0, 8000, 360),
                  (55, 435, 320, 505), (1390, 2800, 2060, 3290), (4540, 3020, 5010, 3430)],
         erase=[(7670, 2300, 7860, 2380)]),
    # The City Hall image's interiors, each cut out by its box.
    dict(id="police_station", title="Police Station", src="MegaManLegends-KatteloxIsland-CityHall.png", dungeon=False,
         bg="town", holes=20000, units=1.0, box=(4975, 2425, 5430, 2805), exclude=[(5236, 2754, 5480, 2800)]),
    # The whole Underground Ruins (area 9: its zones are rooms of one area, drawn as one network).
    dict(id="city_hall_inside", title="City Hall", src="MegaManLegends-KatteloxIsland-CityHall.png", dungeon=False,
         bg="town", holes=20000, units=0.8, box=(5265, 300, 5895, 800), exclude=[(5685, 740, 5835, 785)],
         exclude_poly=[[(5265, 680), (5500, 800), (5265, 800)]]),  # the road below the lobby
    dict(id="bank", title="Bank", src="MegaManLegends-KatteloxIsland-CityHall.png", dungeon=False,
         bg="town", holes=20000, units=1.0, box=(915, 440, 1220, 685), exclude=[(900, 628, 1002, 680)]),
    # The whole Underground Ruins (area 9: its zones are rooms of one area, drawn as one network).
    dict(id="ruins", title="Underground Ruins", src="MegaManLegends-UndergroundRuins.png",
         bg="vgc_warm", yellow_names=True, exclude=[(0, 0, 1600, 265), (75, 295, 1210, 665), (15, 1015, 2545, 2235), (195, 4555, 1005, 5585)],
         erase=[(3530, 845, 3860, 940), (5695, 1745, 6005, 1842), (3838, 3062, 4166, 3158), (1872, 2990, 2202, 3086),
                (3604, 4450, 3932, 4546)],
         loot={0: "Main Core Shard", 1: "Rapid Striker", 3: "660 Zenny", 4: "Old Launcher", 5: "Pen Light", 6: "920 Zenny",
               7: "5,600 Zenny", 10: "2,600 Zenny", 11: "Rapid Fire", 12: "Shiny Object", 13: "1,620 Zenny", 15: "Buster Unit",
               16: "Old Shield", 18: "1,180 Zenny", 19: "2,280 Zenny", 21: "9,240 Zenny", 22: "Rollerboard",
               23: "Generator Part", 24: "820 Zenny", 25: "2,840 Zenny", 26: "4,520 Zenny", 27: "Triple Access",
               28: "780 Zenny", 31: "Cannon Kit", 33: "960 Zenny", 34: "Rapidfire Barrel", 35: "Ancient Book",
               36: "Weapon Plans", 37: "Blaster Unit R", 39: "1,510 Zenny", 41: "1,780 Zenny"}),
]


def background_vgc(a):
    """The blue gear pattern (fading to black) of the dungeon maps."""
    r, g, b = a[..., 0], a[..., 1], a[..., 2]
    return ((b > r + 25) & (b > g + 10) & (b < 125)) | (a.max(axis=2) < 40)


def background_vgc_floors(a):
    """The same, for maps with dark blue floors (Lake Jyun Sub-Gate): those have more green than the
    pattern (green ~50-75 against ~15-40)."""
    return background_vgc(a) & ~((a[..., 1] >= 48) & (a.max(axis=2) >= 40))


def background_town(a, band=0.095):
    """Town/field maps: sky and clouds along the top, a dark green-black field, the blue pattern at
    the bottom. `band`: the share of rows above the map that is all sky (and its treeline)."""
    H = a.shape[0]
    r, g, b = a[..., 0], a[..., 1], a[..., 2]
    rows = np.arange(H)[:, None]
    top = np.zeros(a.shape[:2], bool)
    top[:int(H * band)] = True
    sky = (b > 150) & (b > r + 40) & (rows < H * 0.12)
    clouds = (a.min(axis=2) > 200) & (rows < H * 0.12)
    dark = a.max(axis=2) < 70
    return top | sky | clouds | dark | background_vgc(a)


def background_vgc_warm(a):
    """The same, for maps with very dark brown floors (Underground Ruins): those are warm (red well
    above blue), the background neutral or blue."""
    return background_vgc(a) & ~((a[..., 0] >= a[..., 2] + 10) & (a.max(axis=2) >= 20))


BACKGROUNDS = {"vgc": background_vgc, "vgc_floors": background_vgc_floors, "vgc_warm": background_vgc_warm, "town": background_town,
               "field": lambda a: background_town(a, 0.0)}  # the map reaches into the sky band


def fill_small_holes(mask, limit, narrow=0):
    """Fills enclosed holes that are small, or (narrow > 0) thin: at most `narrow` px from their edge
    anywhere, like a dark corridor floor between its walls (wide enclosed spaces are background)."""
    holes = (~mask).astype(np.uint8)
    n, lab, stats, _ = cv2.connectedComponentsWithStats(holes, connectivity=4)
    h, w = mask.shape
    out = mask.copy()
    dist = cv2.distanceTransform(holes, cv2.DIST_L2, 3) if narrow else None
    for i in range(1, n):
        x, y, bw, bh, area = stats[i]
        touches = x == 0 or y == 0 or x + bw == w or y + bh == h
        if touches:
            continue
        comp = lab[y:y + bh, x:x + bw] == i
        if area < limit or (narrow and dist[y:y + bh, x:x + bw][comp].max() <= narrow):
            out[y:y + bh, x:x + bw][comp] = True
    return out


def extract(m):
    im = Image.open(ROOT + "/isometric/" + m["src"]).convert("RGB")
    a = np.asarray(im).astype(np.int32)
    H, W = a.shape[:2]
    labels = find_labels(a)
    fg = ~BACKGROUNDS[m["bg"]](a)
    # Labels are part of the map's area (erased and filled in below).
    erase = np.zeros((H, W), bool)
    for x0, y0, x1, y1 in labels:
        erase[max(0, y0 - 6):y1 + 6, max(0, x0 - 6):x1 + 6] = True  # with the frame and its shadow
    # Yellow place names (exits to the surface, sub-gates): painted out like the labels.
    if m.get("yellow_names"):
        r, g, b = a[..., 0], a[..., 1], a[..., 2]
        yellow = ((r > 200) & (g > 150) & (b < 90)).astype(np.uint8)
        yellow = cv2.dilate(yellow, np.ones((25, 41), np.uint8))
        n3, lab3, stats3, _ = cv2.connectedComponentsWithStats(yellow, connectivity=8)
        for i in range(1, n3):
            x, y, bw, bh, area = stats3[i]
            if bw < 600 and bh < 200:
                erase[y:y + bh, x:x + bw] |= lab3[y:y + bh, x:x + bw] == i
    # Place names written over the map ("- Surface -", zone names): painted out like the labels.
    for x0, y0, x1, y1 in m.get("erase", []):
        box = np.zeros((H, W), bool)
        box[y0:y1, x0:x1] = True
        erase |= box & ~BACKGROUNDS[m["bg"]](a)
    allowed = np.ones((H, W), bool)
    for x0, y0, x1, y1 in m.get("exclude", []):
        allowed[y0:y1, x0:x1] = False
    for poly in m.get("exclude_poly", []):
        cut = np.zeros((H, W), np.uint8)
        cv2.fillPoly(cut, [np.array(poly, np.int32)], 1)
        allowed &= cut == 0
    if "box" in m:
        x0, y0, x1, y1 = m["box"]
        inside = np.zeros((H, W), bool)
        inside[y0:y1, x0:x1] = True
        allowed &= inside
    fg &= allowed
    erase &= allowed
    # Big connected pieces only (rooms, corridors; labels count as joining them), then holes filled.
    n, lab, stats, _ = cv2.connectedComponentsWithStats((fg | erase).astype(np.uint8), connectivity=4)
    keep = np.zeros(n, bool)
    keep[1:] = stats[1:, cv2.CC_STAT_AREA] > 6000
    mask = keep[lab] & ~erase
    mask = fill_small_holes(mask | (keep[lab] & erase), m.get("holes", 6000), m.get("narrow", 0)) & ~erase
    # Under the labels: map where the map's outline, carried across them, says so.
    cov = cv2.inpaint(mask.astype(np.uint8) * 255, erase.astype(np.uint8) * 255, 9, cv2.INPAINT_TELEA)
    mask |= erase & (cov > 127)
    mask &= allowed
    # The background's dark gear dots where they touch the map: small dark grey blobs on its outer edge.
    if m["bg"].startswith("vgc"):
        r, g, b = a[..., 0], a[..., 1], a[..., 2]
        grey = mask & (a.max(axis=2) < 90) & (np.abs(r - g) < 22) & (np.abs(g - b) < 30)
        outside = cv2.dilate((~mask).astype(np.uint8), np.ones((5, 5), np.uint8)) > 0
        n2, lab2, stats2, _ = cv2.connectedComponentsWithStats(grey.astype(np.uint8), connectivity=8)
        for i in range(1, n2):
            x, y, bw, bh, area = stats2[i]
            if area > 3000:
                continue
            comp = lab2[y:y + bh, x:x + bw] == i
            edge = (comp & outside[y:y + bh, x:x + bw]).sum()
            ring = (cv2.dilate(comp.astype(np.uint8), np.ones((3, 3), np.uint8)) > 0) & ~comp
            if edge > 0 and edge >= 0.15 * max(1, ring.sum()):
                mask[y:y + bh, x:x + bw] &= ~comp
    erase &= mask
    # Inpaint the labels from the map around them (colour and coverage).
    rgb = cv2.inpaint(np.ascontiguousarray(a.astype(np.uint8)), erase.astype(np.uint8) * 255, 6, cv2.INPAINT_TELEA)
    # Loot: under the label's centre (the item is drawn just below its label).
    loot = []
    for i, name in m.get("loot", {}).items():
        x0, y0, x1, y1 = labels[i]
        loot.append((name, (x0 + x1) / 2, y1 + 14))
    ys, xs = np.nonzero(mask)
    box = (xs.min(), ys.min(), xs.max() + 1, ys.max() + 1)
    return rgb, mask, box, loot


def encode_tile(rgba_tile, tmp):
    Image.fromarray(rgba_tile, "RGBA").save(tmp + ".png")
    unix = lambda p: "/" + p[0].lower() + p[2:] if p[1] == ":" else p
    subprocess.run([BASH, "-lc", f'{TEX3DS} -f etc1a4 -q high -z none -r -o "{unix(tmp)}.bin" "{unix(tmp)}.png"'], check=True,
                   capture_output=True)
    data = open(tmp + ".bin", "rb").read()
    data = data[4:]  # tex3ds' 4-byte header (compression type and size), then the GPU-ready texels
    assert len(data) == T * T, len(data)
    return data


def build(m):
    rgb, mask, (cx0, cy0, cx1, cy1), loot = extract(m)
    scale = min(m.get("units", UNITS), MAX_UNITS / (cx1 - cx0))
    map_w = round((cx1 - cx0) * scale)
    map_h = round((cy1 - cy0) * scale)
    rgba = np.dstack([rgb[cy0:cy1, cx0:cx1].astype(np.float32), mask[cy0:cy1, cx0:cx1] * 255.0])
    rgba[:, :, :3] *= rgba[:, :, 3:4] / 255  # premultiplied: no colour from transparent pixels
    # Level 0 at one texel per map unit (zoom 1.0 on the bottom screen is one pixel per unit).
    cur = np.asarray(Image.fromarray(np.clip(rgba + 0.5, 0, 255).astype(np.uint8), "RGBA").resize((map_w, map_h), Image.LANCZOS)).astype(np.float32)
    os.makedirs(ROOT + "/romfs/maps", exist_ok=True)
    tmp = ROOT + "/tools/tmp/tile"
    levels, slots, level = [], [], 0
    while True:
        h, w = cur.shape[:2]
        cols, rows = (w + T - 1) // T, (h + T - 1) // T
        img = cur.copy()
        al = img[:, :, 3:4]
        img[:, :, :3] = np.where(al > 0, img[:, :, :3] * 255 / np.maximum(al, 1), 0)
        img = np.clip(img + 0.5, 0, 255).astype(np.uint8)
        pad = np.zeros((rows * T, cols * T, 4), np.uint8)
        pad[:h, :w] = img
        first, stored = len(slots), 0
        with open(ROOT + "/romfs/maps/%s_%d.bin" % (m["id"], level), "wb") as f:
            for r in range(rows):
                for c in range(cols):
                    t = pad[r * T:(r + 1) * T, c * T:(c + 1) * T]
                    if t[:, :, 3].max() == 0:
                        slots.append(-1)
                        continue
                    f.write(encode_tile(t, tmp))
                    slots.append(stored)
                    stored += 1
        levels.append((w, h, cols, rows, w / map_w, first))
        if level == 0:
            Image.fromarray(img, "RGBA").save(ROOT + "/tools/tmp/iso/%s_map.png" % m["id"])
        if cols * rows <= 2:
            break
        nw, nh = (w + 1) // 2, (h + 1) // 2
        cur = np.asarray(Image.fromarray(np.clip(cur + 0.5, 0, 255).astype(np.uint8), "RGBA").resize((nw, nh), Image.LANCZOS)).astype(np.float32)
        level += 1
    loot_units = [(n, (x - cx0) * scale, (y - cy0) * scale) for n, x, y in loot]
    info = dict(id=m["id"], title=m["title"], w=map_w, h=map_h, levels=levels, slots=slots, loot=loot_units,
                scale=scale, x0=int(cx0), y0=int(cy0))
    import json
    json.dump(info, open(ROOT + "/tools/tmp/iso/%s.json" % m["id"], "w"))
    print(m["id"], map_w, map_h, "levels", len(levels), "tiles", sum(1 for s in slots if s >= 0))
    return info


def write_inc():
    import json
    out = ["// Area maps for the Map tab (tools/make_maps.py): tiles in romfs/maps/<id>_<level>.bin, 256x256",
           "// ETC1A4. Coordinates are map units (zoom 1.0 = one bottom-screen pixel per unit).", ""]
    entries = []
    for m in MAPS:
        p = ROOT + "/tools/tmp/iso/%s.json" % m["id"]
        if not os.path.exists(p):
            continue
        info = json.load(open(p))
        i = info["id"]
        out.append("static const MapLevel %s_levels[] = {" % i)
        for w, h, c, r, t, first in info["levels"]:
            out.append("    { %d, %d, %d, %d, %.6ff, %d }," % (w, h, c, r, t, first))
        out.append("};")
        out.append("static const short %s_slots[] = {" % i)
        s = info["slots"]
        for k in range(0, len(s), 24):
            out.append("    " + ", ".join(str(v) for v in s[k:k + 24]) + ",")
        out.append("};")
        if info["loot"]:
            out.append("static const DungeonLoot %s_loot[] = {" % i)
            for n, x, y in info["loot"]:
                # Non-ASCII (the Omega) as UTF-8 byte escapes.
                cname = "".join(c if ord(c) < 128 else "".join("\\x%02X" % b for b in c.encode("utf-8")) for c in n)
                out.append('    { "%s", %.1ff, %.1ff },' % (cname, x, y))
            out.append("};")
        entries.append('    { "%s", %d, %d, %d, %s_levels, %s_slots, %s, %d },' % (
            i, info["w"], info["h"], len(info["levels"]), i, i, ("%s_loot" % i) if info["loot"] else "NULL", len(info["loot"])))
    out.append("")
    out.append("static const AreaMapData area_map_data[] = {")
    out += entries
    out.append("};")
    open(ROOT + "/source/ui/area_maps.inc", "w", newline="\n").write("\n".join(out) + "\n")


if __name__ == "__main__":
    want = sys.argv[1:]
    for m in MAPS:
        if not want or m["id"] in want:
            build(m)
    write_inc()
