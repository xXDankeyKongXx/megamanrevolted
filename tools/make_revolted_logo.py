# Cuts the "Mega Man 64 ReVolted" logo (assets/banner/revolted_logo_src.jpg, chrome letters on black)
# out of its background, cleanly: alpha from brightness (the black around and inside the letters
# goes, the dark bevel shadows fade), stray specks of JPEG noise removed (tiny separate bits of the
# mask), the soft edge kept at its own colour (no brightening, which left light flecks), and the
# bright outer bevel toned down (it breaks up into white bits when shrunk).
# Output: assets/banner/revolted_logo.png (RGBA), cropped. Used by tools/make_banner.py (HOME menu
# banner) and tools/make_title_logo.py (the title screen). Small versions should be made with an
# averaging filter (BOX), not Lanczos, whose ringing puts bright dots along the thin chrome rim.
# Run: python -I tools/make_revolted_logo.py
import numpy as np
from PIL import Image, ImageFilter

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
src = Image.open(ROOT + "/assets/banner/revolted_logo_src.jpg").convert("RGB")
im = np.asarray(src).astype(np.float32)
lum = im.max(axis=2)
lo, hi = 18.0, 56.0
a = np.clip((lum - lo) / (hi - lo), 0, 1)
a = a * a * (3 - 2 * a)

# Specks: parts of the mask not connected to the logo's large shapes. Label the (slightly grown)
# mask and drop components under 400 pixels.
solid = Image.fromarray(((a > 0.05) * 255).astype(np.uint8)).filter(ImageFilter.MaxFilter(3))
m = np.asarray(solid) > 0
H, W = m.shape
lab = np.zeros((H, W), np.int32)
sizes = [0]
n = 0
for y in range(H):
    for x in np.nonzero(m[y] & (lab[y] == 0))[0]:
        if lab[y, x]:
            continue
        n += 1
        lab[y, x] = n
        stack = [(y, x)]
        cnt = 0
        while stack:
            cy, cx = stack.pop()
            cnt += 1
            for yy, xx in ((cy + 1, cx), (cy - 1, cx), (cy, cx + 1), (cy, cx - 1)):
                if 0 <= yy < H and 0 <= xx < W and m[yy, xx] and not lab[yy, xx]:
                    lab[yy, xx] = n
                    stack.append((yy, xx))
        sizes.append(cnt)
keep = np.array(sizes) >= 400
keep[0] = False
a = a * keep[lab]

# The outer bevel: a light band ~10 px wide along every outside edge. Shrunk to title-screen size
# it's about a pixel wide and breaks up into white bits, so the outermost 14 px are darkened
# (to 35% at the edge, easing in over the band) into a dark outline; inner bevels and faces stay.
mask = Image.fromarray(((a > 0.5) * 255).astype(np.uint8))
band = np.zeros(a.shape, np.float32)
inner = mask
for step in range(14):
    inner = inner.filter(ImageFilter.MinFilter(3))
    band += (np.asarray(inner) == 0) * (a > 0.5)
# band: 14 at the very edge, falling to 0 fourteen pixels in.
shade = 1.0 - 0.65 * (band / 14.0)
im = im * shade[..., None]

# Colour: the pixel as it is (over black it was already the right shade at full alpha; partly
# transparent edge pixels stay dark rather than being brightened).
rgba = np.dstack([im, a * 255]).clip(0, 255).astype(np.uint8)
out = Image.fromarray(rgba, "RGBA")
out = out.crop(out.getbbox())
out.save(ROOT + "/assets/banner/revolted_logo.png")
print("logo", out.size, "components kept", int(keep.sum()), "of", n)
