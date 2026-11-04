# Builds 4x versions of the bottom screen's game art - the text font and the ZENNY box/digits - so
# they can be drawn smoothly at any size: each is enlarged 8x with EPX/Scale2x (three passes: pixel
# art's diagonals and curves become smooth lines, its flat areas and straight edges stay as they
# are), then averaged down to 4x (anti-aliased edges).
#   data/game_font_hd.bin  768x240 RGBA8: letter body white, its drop shadow dark (tinted by the UI)
#   data/zenny_hd.bin      704x64 RGBA8
# Both row-major, u32 0xRRGGBBAA little-endian, as bottom_ui.c's swizzle_into takes them.
# Run: python -I tools/make_hd_ui.py
import re

import numpy as np

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]


def read_inc(path, name):
    text = open(ROOT + "/source/ui/" + path).read()
    body = text[text.index(name):]
    body = body[body.index("{") + 1:body.index("};")]
    return [int(v, 0) for v in re.findall(r"0x[0-9A-Fa-f]+|\d+", body)]


def scale2x(a):
    """EPX on an array of labels (h, w): each pixel becomes 2x2."""
    p = np.pad(a, 1, mode="edge")
    P = p[1:-1, 1:-1]
    A, B, C, D = p[:-2, 1:-1], p[1:-1, 2:], p[1:-1, :-2], p[2:, 1:-1]  # up, right, left, down
    e0 = np.where((C == A) & (C != D) & (A != B), A, P)
    e1 = np.where((A == B) & (A != C) & (B != D), B, P)
    e2 = np.where((D == C) & (D != B) & (C != A), C, P)
    e3 = np.where((B == D) & (B != A) & (D != C), D, P)
    out = np.empty((a.shape[0] * 2, a.shape[1] * 2), a.dtype)
    out[0::2, 0::2], out[0::2, 1::2], out[1::2, 0::2], out[1::2, 1::2] = e0, e1, e2, e3
    return out


def upscale_labels(labels):
    for _ in range(3):
        labels = scale2x(labels)
    return labels  # 8x


def down2(rgba):
    """Premultiplied 2x2 average (8x -> 4x)."""
    a = rgba.astype(np.float64)
    a[..., :3] *= a[..., 3:4] / 255
    a = (a[0::2, 0::2] + a[0::2, 1::2] + a[1::2, 0::2] + a[1::2, 1::2]) / 4
    al = a[..., 3:4]
    a[..., :3] = np.where(al > 0, a[..., :3] * 255 / np.maximum(al, 1e-9), 0)
    return np.clip(a + 0.5, 0, 255).astype(np.uint8)


def write(path, rgba):
    v = rgba.astype(np.uint32)
    words = (v[..., 0] << 24) | (v[..., 1] << 16) | (v[..., 2] << 8) | v[..., 3]
    open(ROOT + "/data/" + path, "wb").write(words.astype("<u4").tobytes())


# Font: 255 body, 180 soft body, 80 shadow, 0 empty -> the same colours bottom_ui.c used.
font = np.array(read_inc("game_font.inc", "game_font_pixels"), np.int32).reshape(60, 192)
big = upscale_labels(font)
colour = {255: (255, 255, 255, 255), 180: (208, 208, 208, 255), 80: (16, 24, 40, 224), 0: (0, 0, 0, 0)}
rgba = np.zeros(big.shape + (4,), np.uint8)
for k, c in colour.items():
    rgba[big == k] = c
write("game_font_hd.bin", down2(rgba))

# ZENNY sheet: the colours themselves are the labels.
zen = np.array(read_inc("zenny_sheet.inc", "zenny_sheet[ZENNY_SHEET_W * ZENNY_SHEET_H]"), np.uint64).reshape(16, 176)
big = upscale_labels(zen)
rgba = np.stack([(big >> 24) & 255, (big >> 16) & 255, (big >> 8) & 255, big & 255], -1).astype(np.uint8)
write("zenny_hd.bin", down2(rgba))

# Previews.
from PIL import Image  # noqa: E402
for name, w, h in (("game_font_hd", 768, 240), ("zenny_hd", 704, 64)):
    d = np.frombuffer(open(ROOT + "/data/%s.bin" % name, "rb").read(), "<u4").reshape(h, w)
    im = np.stack([(d >> 24) & 255, (d >> 16) & 255, (d >> 8) & 255, d & 255], -1).astype(np.uint8)
    bg = Image.new("RGBA", (w, h), (40, 60, 120, 255))
    bg.alpha_composite(Image.fromarray(im, "RGBA"))
    bg.save(ROOT + "/tools/tmp/%s.png" % name)
print("ok")
