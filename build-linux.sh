#!/bin/sh
# Build the standalone root, whose generated instruction sources are already
# included. Extra arguments configure CMake; no asset import occurs during build.
set -eu
release_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
cmake -S "$release_dir" -B "$release_dir/build" -DCMAKE_BUILD_TYPE=Release "$@"
cmake --build "$release_dir/build" --parallel "${CMAKE_BUILD_PARALLEL_LEVEL:-4}"
cmake --build "$release_dir/build" --target refresh_launchers --parallel "${CMAKE_BUILD_PARALLEL_LEVEL:-4}"
