#!/bin/bash
# Phase 2 smoke test: compile every recompiled game file for the 3DS ARM11 (no linking).
# Run via: G:\devkitPro\msys2\usr\bin\bash.exe -l tools/test_compile_recomp.sh
ROOT="/g/!VibeCodeMashups/Megaman643DS"
OUT="$ROOT/tools/test-objs"
export TMP="$ROOT/tools/tmp" TEMP="$ROOT/tools/tmp" TMPDIR="$ROOT/tools/tmp"
mkdir -p "$OUT"; rm -f "$OUT"/*.o "$OUT"/*.err
CC="$DEVKITARM/bin/arm-none-eabi-gcc"
FLAGS="-O2 -march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft -mword-relocations -ffunction-sections -fno-strict-aliasing -w \
  -I$ROOT/runtime/include -I$ROOT/reference/N64Recomp/include -I$ROOT/recomp/RecompiledFuncs -I$DEVKITPRO/libctru/include -D__3DS__"
export CC FLAGS OUT
cd "$ROOT/recomp/RecompiledFuncs"
ls funcs_*.c | xargs -P "$(nproc)" -I{} sh -c '"$CC" $FLAGS -c {} -o "$OUT/$(basename {} .c).o" 2> "$OUT/$(basename {} .c).err" || echo "FAIL {}"'
echo "objects: $(ls "$OUT"/*.o 2>/dev/null | wc -l) / $(ls funcs_*.c | wc -l)"
"$DEVKITARM/bin/arm-none-eabi-size" -t "$OUT"/*.o | tail -1
find "$OUT" -name '*.err' -size +0 | head -5 | while read f; do echo "== $f"; head -8 "$f"; done
