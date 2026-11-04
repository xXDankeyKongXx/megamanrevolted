# Builds Data's dance for the System button from captures of his real model:
#   source/ui/data_sprite.inc   256x128 RGBA8 atlas, 8 cells of 64x64 (4 per row... see CELLS)
#
# Inputs: assets/data/*.png, 320x240 top-screen captures of the game drawing only Data (the
# renderer's "isolate" capture mode, pokes.txt "<vi> isolate 314700 316000": draws textured from his
# textures at RDRAM 0x314700-0x316000, zoomed, on magenta) while he does his save dance after
# "Come talk to me if you want to save" at the Flutter crash site (area 3 room 1, NPC record at
# 0x80200370). His dance is a few held poses leaning one way; the other side is mirrored.
# Run: python -I tools/make_data_sprite.py
import numpy as np
from PIL import Image, ImageOps

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
POSES = ["front", "lean_a", "lean_b", "lean_c", "front_b"]
CELL = 64

def cut(name):
    im = np.asarray(Image.open("%s/assets/data/%s.png" % (ROOT, name)).convert("RGB")).astype(np.int32)
    # Distance from magenta -> alpha, so the filtered edges blend instead of keeping a pink fringe.
    dist = np.abs(im[:, :, 0] - 255) + im[:, :, 1] + np.abs(im[:, :, 2] - 255)
    a = np.clip((dist - 60) * 255 // 120, 0, 255)
    # Remove the magenta that bled into edge pixels.
    t = (a / 255.0)[:, :, None]
    mag = np.array([255, 0, 255])
    rgb = np.where(t > 0, (im - mag * (1 - t)) / np.maximum(t, 1e-3), 0)
    rgba = np.dstack([np.clip(rgb, 0, 255), a]).astype(np.uint8)
    return Image.fromarray(rgba, "RGBA")

frames = [cut(p) for p in POSES]
frames += [ImageOps.mirror(cut(p)) for p in ("lean_a", "lean_b", "lean_c")]
# One bounding box for every frame keeps his feet in place between poses.
box = None
for f in frames:
    b = f.getbbox()
    box = b if box is None else (min(box[0], b[0]), min(box[1], b[1]), max(box[2], b[2]), max(box[3], b[3]))
# Mirrored frames: mirror the box horizontally as well, then take the union.
w = frames[0].width
mbox = (w - box[2], box[1], w - box[0], box[3])
box = (min(box[0], mbox[0]), box[1], max(box[2], mbox[2]), box[3])
bw, bh = box[2] - box[0], box[3] - box[1]
scale = CELL / max(bw, bh)
cw, ch = round(bw * scale), round(bh * scale)

atlas = Image.new("RGBA", (256, 128), (0, 0, 0, 0))
for i, f in enumerate(frames):
    cell = f.crop(box).resize((cw, ch), Image.LANCZOS)
    x, y = (i % 4) * CELL + (CELL - cw) // 2, (i // 4) * CELL + (CELL - ch)
    atlas.alpha_composite(cell, (x, y))
atlas.save(ROOT + "/tools/tmp/data_atlas.png")

px = np.asarray(atlas).astype(np.uint32)
vals = (px[:, :, 0] << 24) | (px[:, :, 1] << 16) | (px[:, :, 2] << 8) | px[:, :, 3]
out = ["// Data's save dance, captured from the game's own model (tools/make_data_sprite.py): 256x128",
       "// RGBA8 (0xRRGGBBAA), row-major; 64x64 cells, 4 per row: front, lean a/b/c, front b, then the",
       "// leans mirrored. Feet at the bottom of each cell.",
       "#define DATA_SPRITE_W 256", "#define DATA_SPRITE_H 128", "#define DATA_FRAMES %d" % len(frames),
       "static const u32 data_sprite[DATA_SPRITE_W * DATA_SPRITE_H] = {"]
flat = vals.flatten()
for k in range(0, len(flat), 8):
    out.append("    " + ", ".join("0x%08X" % v for v in flat[k:k + 8]) + ",")
out.append("};")
open(ROOT + "/source/ui/data_sprite.inc", "w", newline="\n").write("\n".join(out) + "\n")
print("frames", len(frames), "cell", cw, "x", ch)
