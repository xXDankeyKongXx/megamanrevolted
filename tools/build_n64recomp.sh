#!/bin/bash
# Builds N64Recomp + RSPRecomp (PC host tools) with MinGW g++ and devkitPro's MSYS2 CMake.
# Run via: G:\devkitPro\msys2\usr\bin\bash.exe -l tools/build_n64recomp.sh
set -e
ROOT="/g/!VibeCodeMashups/Megaman643DS"
SRC="$ROOT/reference/N64Recomp"
OUT="$ROOT/tools/n64recomp"
MINGW=/c/msys64/mingw64/bin
export PATH="$MINGW:$PATH"
export TMP="$ROOT/tools/tmp" TEMP="$ROOT/tools/tmp" TMPDIR="$ROOT/tools/tmp"   # keep compiler temp files off C:
cmake -S "$SRC" -B "$OUT" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_COMPILER="$MINGW/gcc.exe" -DCMAKE_CXX_COMPILER="$MINGW/g++.exe" \
  -DCMAKE_EXE_LINKER_FLAGS="-static" \n  -DCMAKE_DEPENDS_USE_COMPILER=OFF   # MSYS cmake cannot parse MinGW C:/ depfile paths
cmake --build "$OUT" --target N64RecompCLI RSPRecomp -j"$(nproc)"
ls -l "$OUT"/*.exe
