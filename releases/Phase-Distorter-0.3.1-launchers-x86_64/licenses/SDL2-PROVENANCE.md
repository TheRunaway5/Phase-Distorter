# SDL2 runtime dependency

The Windows package includes the unmodified 64-bit `SDL2.dll` from the official
SDL2 2.32.10 MinGW development release:

- Project: https://github.com/libsdl-org/SDL
- Release: https://github.com/libsdl-org/SDL/releases/tag/release-2.32.10
- Archive: `SDL2-devel-2.32.10-mingw.tar.gz`
- DLL SHA-256: `53e8fa7e9ed43c30bd650c39396f0d9d2067d2fff0b926c9433b75202592e4aa`

`LICENSE.txt` is copied unchanged from that release. Linux builds dynamically
link the SDL2 library installed on the target system. SDL2 source is available
from the linked official release.
