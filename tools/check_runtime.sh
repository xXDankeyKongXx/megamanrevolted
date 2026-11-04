#!/bin/bash
# Compile each runtime .cpp for the 3DS (no link) and summarize the first errors per file.
ROOT="/g/!VibeCodeMashups/Megaman643DS"
OUT="$ROOT/tools/runtime-objs"; mkdir -p "$OUT"; rm -f "$OUT"/*
export TMP="$ROOT/tools/tmp" TEMP="$ROOT/tools/tmp"
CXX="$DEVKITARM/bin/arm-none-eabi-g++"
FLAGS="-std=gnu++20 -O2 -march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft -mword-relocations -D__3DS__ \
 -I$ROOT/runtime/include -I$ROOT/runtime/include/librecomp -I$ROOT/runtime/thirdparty/o1heap -I$ROOT/runtime/thirdparty -I$ROOT/runtime/thirdparty/concurrentqueue -I$ROOT/recomp/RecompiledFuncs \
 -I$DEVKITPRO/libctru/include"
cd "$ROOT/runtime"
for f in ultramodern/*.cpp librecomp/*.cpp ${EXTRA_SRCS}; do
  o="$OUT/$(basename "${f%.*}").o"
  if ! "$CXX" $FLAGS -c "$f" -o "$o" 2> "$o.err"; then
    echo "== FAIL $f"; grep -m4 "error" "$o.err" | sed "s|$ROOT/||"
  fi
done
echo "ok: $(ls "$OUT"/*.o 2>/dev/null | wc -l)"
