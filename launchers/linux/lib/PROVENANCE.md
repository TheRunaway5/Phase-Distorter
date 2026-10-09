# Linux runtime provenance

The Phase Distorter Linux x86-64 release is built on Debian 12 with **glibc
2.36**, so hosts with **glibc 2.37** satisfy its glibc requirement. The system
still supplies its dynamic loader, desktop OpenGL and graphics drivers, and
SDL's desktop/window/audio dependencies. No glibc or graphics driver is bundled.
Physical Steam Deck acceptance remains unverified.

## Build environment

- Official Debian `bookworm-slim` amd64 image: `sha256:a4672c0cb26fbdde88e38fa2dfb6c681942306680e41e4378b28770b6e79ee91`.
- Debian libc6: `2.36-9+deb12u14`.
- GCC/G++ and Debian runtime packages libstdc++6/libgcc-s1: `12.2.0-14+deb12u1`.
- Release mode, C++20, `-march=x86-64 -mtune=generic`.
- Debian packages were installed through APT using Debian's signed repository
  metadata. Source packages: https://packages.debian.org/source/bookworm/gcc-12
  and https://packages.debian.org/source/bookworm/glibc .

`cpp/tools/linux-compat.Dockerfile` recreates the Debian/SDL build environment.
This build used the same verified image in a rootless bubblewrap namespace
because the local Docker daemon was unavailable. The 0.3.1 release also includes
the direct scene batching and texture-storage improvements described in its patch notes.

## SDL2

`libSDL2-2.0.so.0` is original **SDL 2.32.10**, rebuilt without source changes
from https://www.libsdl.org/release/SDL2-2.32.10.tar.gz . Archive SHA-256:
`5f5993c530f084535c65a6879e9b26ad441169b3e25d789d83287040a9ca5165`.

Build options: Release; shared ON; static/tests OFF;
`-march=x86-64 -mtune=generic`; SDL_SSE3 OFF. SDL2's zlib license is in
`licenses/SDL2-LICENSE.txt`. The selected version and baseline instruction
set are retained from the previous Linux release.

## C++ support runtime

The application links Debian GCC 12's libstdc++ and libgcc statically using
`-static-libstdc++ -static-libgcc -Wl,--exclude-libs,ALL`. The static library
symbols are private to the executable. No shared libstdc++ or libgcc is
bundled, so host graphics drivers can load their own C++ runtime without
being forced to use the application's older one.

Corresponding source and copyright records are in `licenses/GCC-NOTICE.md`.
GNU GPL version 3 and GCC Runtime Library Exception 3.1 accompany the binary.

## Dependency audit and validation

The application requires symbols through **GLIBC_2.36**; the bundled SDL2
requires symbols through **GLIBC_2.34**. The application has no dynamic
libstdc++ or libgcc dependency and reports the x86-64-baseline ISA.
Headless and desktop launches use the actual glibc 2.36 environment, with
Mesa software OpenGL for desktop checks. Both games' native and widescreen
pixels and PCM match the preceding release at the tested frame counts.
Desktop 1280x800 fullscreen 16:10 CRT readbacks also match the host build.

The older GCC 12 compiler exposed a double-free of a vector-owning aggregate
temporary across coroutine suspension in the experimental native battle
menu. Keeping that command in a named local preserves its ownership and
passes the existing regional menu checks plus Valgrind. This ownership fix is the application-source portability change; renderer
optimizations are documented separately in the 0.3.1 patch notes. Complete test counts and package checks are in the release build
information. Physical hardware, real GPU/audio/controller acceptance, and a
full playthrough remain unverified.
