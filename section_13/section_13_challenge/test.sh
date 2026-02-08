#!/usr/bin/env bash
set -euo pipefail

cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
cmake --build build
ln -sf build/compile_commands.json compile_commands.json
./build/myapp
