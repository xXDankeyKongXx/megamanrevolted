# Walks the game's compressed asset files in the ROM and unpacks them into tools/tmp/assets/.
#
# Format (func_80026C80, see docs/BOTTOM_SCREEN_SPEC.md): a big-endian 32-bit uncompressed size,
# then LZSS (4 KB ring from 0xFEE, flag byte LSB first, 1 = literal, else 12-bit position + 4-bit
# length + 3). Files sit back to back, 4-byte aligned, so the next one starts where a stream ends.
# Starting points: every file the game was seen loading (tools/tmp/assets_seen.txt, from the
# "[asset]" lines of a test run); the walk follows each one forward until a header doesn't look like
# an asset any more.
# Run: python -I tools/unpack_assets.py
import os
import sys

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
rom = open(ROOT + "/Mega Man 64.z64", "rb").read()
OUT = ROOT + "/tools/tmp/assets"
os.makedirs(OUT, exist_ok=True)

def unpack(off):
    """Returns (data, end offset) or None when the stream doesn't look valid."""
    size = int.from_bytes(rom[off:off + 4], "big")
    if size == 0 or size > 0x200000:
        return None
    out = bytearray()
    ring = bytearray(4096)
    r, p, flags = 0xFEE, off + 4, 0
    limit = min(len(rom), off + 4 + size * 2 + 64)
    while len(out) < size:
        if p >= limit:
            return None
        flags >>= 1
        if not flags & 0x100:
            flags = rom[p] | 0xFF00
            p += 1
        if flags & 1:
            c = rom[p]; p += 1
            out.append(c); ring[r] = c; r = (r + 1) & 0xFFF
        else:
            i, j = rom[p], rom[p + 1]; p += 2
            i |= (j & 0xF0) << 4
            for k in range((j & 0x0F) + 3):
                c = ring[(i + k) & 0xFFF]
                out.append(c); ring[r] = c; r = (r + 1) & 0xFFF
                if len(out) >= size:
                    break
    return bytes(out), p

seen = sorted(int(line.split()[0], 16) for line in open(ROOT + "/tools/tmp/assets_seen.txt"))
done = {}
for start in seen:
    off = start
    while off not in done:
        res = unpack(off)
        if res is None:
            break
        data, end = res
        done[off] = (len(data), end - off)
        open("%s/%07X.bin" % (OUT, off), "wb").write(data)
        off = (end + 3) & ~3
    sys.stdout.write("\r%d files" % len(done)); sys.stdout.flush()
with open(OUT + "/index.txt", "w") as f:
    for off in sorted(done):
        f.write("%07X %X %X\n" % (off, done[off][1], done[off][0]))
print("\nunpacked", len(done), "files,", sum(v[0] for v in done.values()) // 1024, "KB")
