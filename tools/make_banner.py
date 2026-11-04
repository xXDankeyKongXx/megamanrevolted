# Builds the HOME menu art for the CIA from the box scan and the logo:
#   assets/banner/banner.png  256x128  a Nintendo 64 box rendered in perspective (front cover, title
#                                      spine on top, side flap on the right) with the Mega Man 64
#                                      logo under it
#   assets/banner/icon.png     48x48   front cover crop for the SMDH icon
#   assets/banner/banner.wav           the banner sound (the Capcom logo jingle, first 3 s)
# Inputs: assets/banner/front.jpg (the front cover the user provided, also the reference for the
# logo's look), "n64'.jfif" (box scan: back, spine and front side by side, turned 90 degrees, with the side
# flap along the bottom; a squashed thumbnail, so each face is resampled to the real box proportions)
# and assets/banner/revolted_logo.png (the "Mega Man 64 ReVolted" logo, tools/make_revolted_logo.py).
# Run: python -I tools/make_banner.py
import math
import wave

import numpy as np
from PIL import Image, ImageDraw, ImageEnhance, ImageFilter

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
scan = Image.open(ROOT + "/n64'.jfif").convert("RGB")

# Faces in scan coordinates; turning them 90 degrees counter-clockwise makes them upright.
front = Image.open(ROOT + "/assets/banner/front.jpg").convert("RGB")  # the cover, from the user (522x383)
spine = scan.crop((163, 0, 195, 183)).rotate(90, expand=True)  # title strip along the long edge
side = scan.crop((195, 183, 359, 225)).rotate(90, expand=True)  # red flap, N64 logo at the top

# A US Nintendo 64 box: front 7 x 5 (landscape), 1.4 deep. Units: inches; y up, z away from the viewer.
BW, BH, BD = 7.0, 5.0, 1.4
# One-point perspective like a product shot: the front faces the camera squarely (the cover stays
# undistorted) and the camera sits above and to the right, so the top and right side recede.
CAM_X, CAM_Y = 6.5, 6.0  # camera offset from the box's middle
DIST = 7.0               # camera distance from the front

def project(p):
    x, y, z = p[0] - BW / 2 - CAM_X, p[1] - BH / 2 - CAM_Y, p[2]
    k = DIST / (DIST + z)
    return x * k, -y * k

# Face corners (top-left, top-right, bottom-right, bottom-left as the face image is seen).
faces = {
    "front": [(0, BH, 0), (BW, BH, 0), (BW, 0, 0), (0, 0, 0)],
    "top": [(0, BH, BD), (BW, BH, BD), (BW, BH, 0), (0, BH, 0)],
    "right": [(BW, BH, 0), (BW, BH, BD), (BW, 0, BD), (BW, 0, 0)],
}
proj = {k: [project(c) for c in v] for k, v in faces.items()}

W, H = 256, 128
BOX_H = 74  # banner pixels for the box's projected height
xs = [p[0] for q in proj.values() for p in q]
ys = [p[1] for q in proj.values() for p in q]
scale = BOX_H / (max(ys) - min(ys))
off_x = W / 2 - (max(xs) + min(xs)) / 2 * scale
off_y = 3 - min(ys) * scale
quads = {k: [(x * scale + off_x, y * scale + off_y) for x, y in v] for k, v in proj.items()}

def perspective_coeffs(dst, src):
    """PIL PERSPECTIVE coefficients mapping output points dst to input points src."""
    rows, rhs = [], []
    for (x, y), (u, v) in zip(dst, src):
        rows.append([x, y, 1, 0, 0, 0, -u * x, -u * y]); rhs.append(u)
        rows.append([0, 0, 0, x, y, 1, -v * x, -v * y]); rhs.append(v)
    return np.linalg.solve(np.array(rows, float), np.array(rhs, float)).tolist()

def paste_face(img, face, quad):
    w, h = face.size
    coeffs = perspective_coeffs(quad, [(0, 0), (w, 0), (w, h), (0, h)])
    layer = face.convert("RGBA").transform(img.size, Image.PERSPECTIVE, coeffs, Image.BICUBIC)
    mask = Image.new("L", img.size, 0)
    ImageDraw.Draw(mask).polygon(quad, fill=255)
    img.paste(layer, (0, 0), mask)

banner = Image.new("RGBA", (W, H), (0, 0, 0, 0))

# Soft shadow on the "floor" under the box.
base = [quads["front"][3], quads["front"][2], quads["right"][2]]
sx0, sx1 = min(p[0] for p in base) - 4, max(p[0] for p in base) + 6
sy = max(p[1] for p in base)
shadow = Image.new("RGBA", (W, H), (0, 0, 0, 0))
ImageDraw.Draw(shadow).ellipse((sx0, sy - 6, sx1, sy + 6), fill=(0, 0, 0, 120))
banner.alpha_composite(shadow.filter(ImageFilter.GaussianBlur(3)))

# Faces at a generous resolution so the resampling stays sharp; lighting from the upper left.
paste_face(banner, ImageEnhance.Brightness(spine.resize((700, 140), Image.LANCZOS)).enhance(1.12), quads["top"])
paste_face(banner, ImageEnhance.Brightness(side.resize((140, 500), Image.LANCZOS)).enhance(0.68), quads["right"])
paste_face(banner, front.resize((700, 500), Image.LANCZOS), quads["front"])

# Box edges: a light highlight along the front's top and right edges, a dark outline around it all.
d = ImageDraw.Draw(banner)
f, t, r = quads["front"], quads["top"], quads["right"]
d.line([f[0], f[1]], fill=(255, 255, 255, 140))
d.line([f[1], f[2]], fill=(255, 255, 255, 90))
d.line([t[0], t[1], r[1], r[2], f[2], f[3], f[0], t[0]], fill=(10, 10, 20, 150))

# Logo under the box: "Mega Man 64 ReVolted" (assets/banner/revolted_logo.png, from
# tools/make_revolted_logo.py), already chrome, so it goes in as it is.
logo = Image.open(ROOT + "/assets/banner/revolted_logo.png").convert("RGBA")
lw = 150
lh = round(logo.height * lw / logo.width)
# Premultiplied, averaging resize: no dark fringe, and no ringing along the thin chrome rim.
la = np.asarray(logo).astype(np.float32)
la[:, :, :3] *= la[:, :, 3:4] / 255
ls = np.asarray(Image.fromarray(la.astype(np.uint8), "RGBA").resize((lw, lh), Image.BOX)).astype(np.float32)
ls[:, :, :3] = np.where(ls[:, :, 3:4] > 0, ls[:, :, :3] * 255 / np.maximum(ls[:, :, 3:4], 1), 0)
logo = Image.fromarray(np.clip(ls + 0.5, 0, 255).astype(np.uint8), "RGBA")
banner.alpha_composite(logo, ((W - lw) // 2, H - lh - 1))
banner.save(ROOT + "/assets/banner/banner.png")

# Icon: Mega Man's face and the logo from the cover, square.
icon = front.crop((70, 10, 70 + 330, 10 + 330))
icon.resize((48, 48), Image.LANCZOS).save(ROOT + "/assets/banner/icon.png")

# Banner sound: the Capcom logo jingle (assets/banner/capcom_logo.mp3, from the user), cut to the
# HOME menu's limit of about 3 seconds with a short fade-out; silence if the file is missing.
SOUND_SECONDS, FADE_SECONDS, RATE = 3.0, 0.4, 32000
try:
    import av
    container = av.open(ROOT + "/assets/banner/capcom_logo.mp3")
    resampler = av.AudioResampler(format="s16", layout="stereo", rate=RATE)
    chunks = []
    for frame in container.decode(audio=0):
        for out in resampler.resample(frame):
            chunks.append(out.to_ndarray().reshape(-1, 2))
    pcm = np.concatenate(chunks)[: int(SOUND_SECONDS * RATE)].astype(np.float32)
    fade = int(FADE_SECONDS * RATE)
    pcm[-fade:] *= np.linspace(1.0, 0.0, fade)[:, None]
    pcm = pcm.astype("<i2").tobytes()
except (ImportError, FileNotFoundError):
    pcm = bytes(4 * RATE)
with wave.open(ROOT + "/assets/banner/banner.wav", "wb") as w:
    w.setnchannels(2)
    w.setsampwidth(2)
    w.setframerate(RATE)
    w.writeframes(pcm)
print("box quads", {k: [(round(x), round(y)) for x, y in v] for k, v in quads.items()}, "logo", lw, lh, "sound", len(pcm) // 4 / RATE, "s")
