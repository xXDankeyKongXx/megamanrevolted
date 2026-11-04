# Development: finds the item labels on a VGCartography map image (navy boxes, fill RGB 11,16,78)
# and writes a contact sheet of them, numbered, for reading their names.
# Usage: python tools/find_map_labels.py <image> <sheet.png>   Prints: index x0 y0 x1 y1 (source px)
import sys
sys.path.insert(0, __file__.replace("\\", "/").rsplit("/tools/", 1)[0] + "/tools/tmp/pylib")
import cv2
import numpy as np
from PIL import Image, ImageDraw

Image.MAX_IMAGE_PIXELS = None


def find_labels(a):
    fill = (np.abs(a - np.array([11, 16, 78])).max(axis=2) <= 6).astype(np.uint8)
    n, lab, stats, _ = cv2.connectedComponentsWithStats(fill, connectivity=8)
    boxes = []
    for i in range(1, n):
        x, y, w, h, area = stats[i]
        # A label: a wide, short box mostly filled (its text is the rest).
        if 24 <= w <= 400 and 8 <= h <= 60 and w > h and area > 0.45 * w * h:
            boxes.append((x, y, x + w, y + h))
    boxes.sort(key=lambda b: (b[1], b[0]))
    return boxes


if __name__ == "__main__":
    im = Image.open(sys.argv[1]).convert("RGB")
    a = np.asarray(im).astype(np.int32)
    boxes = find_labels(a)
    cell_w, cell_h = 420, 70
    cols = 3
    rows = (len(boxes) + cols - 1) // cols
    sheet = Image.new("RGB", (cell_w * cols, cell_h * max(rows, 1)), (40, 40, 40))
    d = ImageDraw.Draw(sheet)
    for i, (x0, y0, x1, y1) in enumerate(boxes):
        crop = im.crop((x0 - 2, y0 - 2, x1 + 2, y1 + 2))
        s = min(3.0, (cell_w - 50) / crop.width, (cell_h - 6) / crop.height)
        crop = crop.resize((max(1, int(crop.width * s)), max(1, int(crop.height * s))), Image.LANCZOS)
        cx, cy = (i % cols) * cell_w, (i // cols) * cell_h
        d.text((cx + 4, cy + 4), str(i), fill=(255, 255, 0))
        sheet.paste(crop, (cx + 40, cy + 3))
        print(i, x0, y0, x1, y1)
    sheet.save(sys.argv[2])
