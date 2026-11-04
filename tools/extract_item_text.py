# Extracts the item descriptions the game's start menu shows into source/ui/item_text.inc.
#
# The descriptions are a message bank the menu loads into RAM only while it is open (here found at
# 0x802B94B0: a table of 16-bit little-endian offsets from the bank start, then the messages). For
# Buster Parts and Normal Items the description of item ID n is message 96 + n (Special Weapons 95 + n);
# Special Items messages carry the item's name, so they are matched to IDs through the game's name
# table (pointers at 0x800B28B4). Input: a RAM dump taken with the Normal Items screen open
# (snapshots_full.txt), word-swapped as the runtime stores it.
# Run: python -I tools/extract_item_text.py <snap_N.bin>
import struct
import sys

ROOT = __file__.replace("\\", "/").rsplit("/tools/", 1)[0]
raw = open(sys.argv[1], "rb").read()
ram = bytes(raw[i ^ 3] for i in range(len(raw)))

BANK = 0x2B94B0
NAMES = 0xB28B4
ITEMS = 164

PUNCT = {0x0C: "'", 0x0E: "?", 0x11: "(", 0x12: ")", 0x4B: "&", 0x4E: "/", 0x52: "-", 0x5C: ",",
         0x5D: '"', 0x5E: ".", 0x61: "+", 0x82: ";", 0x4F: " ", 0x80: "\u03b1", 0x81: "\u03a9"}

def glyph(c):
    if 0x30 <= c <= 0x3E: return chr(97 + c - 0x30)
    if 0x3F <= c <= 0x4A: return chr(ord("o") + c - 0x3F)
    if 0x15 <= c <= 0x29: return chr(65 + c - 0x15)
    if 0x2A <= c <= 0x2F: return chr(ord("U") + c - 0x2A)
    if c <= 9: return str(c)
    return PUNCT.get(c)

# Message codes and how many parameter bytes follow them.
PARAMS = {0x8A: 2, 0x8C: 6, 0x93: 2, 0xA0: 2, 0x89: 1, 0x9C: 2, 0xA1: 0, 0x86: 0, 0x95: 0, 0xFF: 0, 0x98: 0,
          0x96: 1, 0xA9: 0, 0x84: 0, 0x9F: 0}

def decode(b):
    """Message bytes -> list of text lines (codes dropped, 0x86 is a line break)."""
    lines, cur, i = [], "", 0
    while i < len(b):
        c = b[i]
        if c in (0x95, 0x9F):  # end of message / end of a menu help box
            break
        if c == 0x86:
            lines.append(cur); cur = ""; i += 1; continue
        if c == 0x13:  # ", " in sentences, a space before "+n" in Buster Part stats
            cur += " " if i + 1 < len(b) and b[i + 1] == 0x61 else ","
            i += 1; continue
        g = glyph(c)
        if g is not None and c not in (0x80, 0x81) or c in (0x80, 0x81):
            cur += g; i += 1; continue
        i += 1 + PARAMS.get(c, 0)
    lines.append(cur)
    return [l.strip() for l in lines if l.strip()]

count = struct.unpack("<H", ram[BANK:BANK + 2])[0] // 2
offs = [struct.unpack("<H", ram[BANK + 2 * k:BANK + 2 * k + 2])[0] for k in range(count)]
msgs = []
for k in range(count):
    end = BANK + offs[k + 1] if k + 1 < count else BANK + offs[k] + 256
    msgs.append(decode(ram[BANK + offs[k]:end]))

def item_name(n):
    p = struct.unpack(">I", ram[NAMES + 4 * n:NAMES + 4 * n + 4])[0] & 0xFFFFFF
    s, i = "", p
    while i < p + 48:
        c = ram[i]
        if c == 0x91: break
        if c == 0xA0:  # spacing code with two parameter bytes
            s += " "; i += 3; continue
        g = glyph(c)
        if g: s += g
        i += 1
    return " ".join(s.split())

names = [item_name(n) for n in range(ITEMS)]
desc = [""] * ITEMS
for n in list(range(4, 36)) + list(range(68, 129)):
    desc[n] = "\n".join(msgs[96 + n])
for n in range(132, 146):  # Special Weapons are one message further down
    desc[n] = "\n".join(msgs[95 + n])
for k in range(132, 157):  # Special Items messages: name line, then the description
    lines = msgs[k]
    if not lines: continue
    for n in range(36, 66):
        # "Blue Refractor" etc. are all named "Refractor": the first one not yet described takes it.
        if names[n] and (lines[0].startswith(names[n]) or lines[0].endswith(" " + names[n])) and not desc[n]:
            rest = lines[0][len(names[n]):].strip() if lines[0].startswith(names[n]) else ""
            desc[n] = "\n".join(([rest] if rest else []) + lines[1:])
            break

def c_str(s):
    """C string literal; non-ASCII as UTF-8 \\x escapes (split so following hex digits don't join)."""
    out = ""
    for ch in s:
        if ch == "\n": out += "\\n"
        elif ch in '"\\': out += "\\" + ch
        elif ord(ch) < 128: out += ch
        else: out += "".join('\\x%02X""' % b for b in ch.encode("utf-8"))
    return '"' + out + '"'

out = ["// Item descriptions from the game's start-menu message bank, by item ID (see",
       "// tools/extract_item_text.py). Line breaks as in the game.",
       "static const char* const item_desc[%d] = {" % ITEMS]
for n in range(ITEMS):
    out.append("    %s, // %d %s" % (c_str(desc[n]), n, names[n].encode("ascii", "replace").decode()))
out.append("};")
open(ROOT + "/source/ui/item_text.inc", "w", encoding="ascii", newline="\n").write("\n".join(out) + "\n")
missing = [n for n in list(range(4, 36)) + list(range(36, 66)) + list(range(68, 129)) + list(range(132, 146)) if not desc[n] and names[n] and names[n] not in ("EMPTY",)]
print("wrote", ITEMS, "entries; without description:", [(n, names[n].encode("ascii", "replace").decode()) for n in missing])
