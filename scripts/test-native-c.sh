#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
work=$(mktemp -d)
trap 'rm -rf "$work"' EXIT
compiler="$PWD/third_party/tinycc"
cp core-effects/src/main/c/tcc_config.h.in "$work/config.h"
gcc -Os -fPIC -shared -Wno-unused-function -I"$work" -I"$compiler" "$compiler/libtcc.c" -ldl -lm -pthread -o "$work/libtcc.so"
mkdir -p "$work/runtime" "$work/include"
cp "$compiler"/include/* "$work/include/"
cp core-effects/src/main/assets/native-c/include/* "$work/include/"
cp "$compiler"/lib/libtcc1.c "$work/runtime/"
gcc -std=c11 -Wall -Wextra -Werror -I"$compiler" -Icore-effects/src/main/c \
  core-effects/src/main/c/native_c_compiler.c core-effects/src/test/c/native_c_compiler_test.c \
  -L"$work" -ltcc -lm -ldl -pthread -Wl,-rpath,"$work" -o "$work/test"
"$work/test" "$work"
