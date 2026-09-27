# Source and dependency notices

The CPU program translation originates from the EarthBound / Mother 2 source
disassembly maintained at <https://github.com/Herringway/ebsrc>, local upstream
revision `0197d6c13ef11ad3280e9388e08a646ab1030d15`. The C++ implementation,
translation tools, hardware implementation, importer, and frontend come from
this independent C++ port. The generated instruction files preserve source
filenames and line numbers for provenance. The original assembly tables and
extracted assets are not included in this standalone snapshot.

No top-level license was present in the source checkout, and this snapshot does
not assign a new blanket license to upstream or third-party work. Existing
notices remain in their source files.

- Dear ImGui: MIT; see `cpp/external/imgui/LICENSE.txt` and `PROVENANCE.md`.
- Standalone S-DSP from snes_spc: Shay Green, LGPL-2.1-or-later; see
  `cpp/external/spc_dsp/LICENSE` and `PROVENANCE.md`. Its complete used source is
  included; the complete port build is included for rebuilding with changes.
- SDL2 runtime: zlib license; see `cpp/external/sdl2/LICENSE.txt`. Windows ships
  `SDL2.dll`; the Linux application ships original SDL2 in `lib/`. Its exact
  build and runtime-library origins are recorded in `lib/PROVENANCE.md`.
- Linux GCC runtimes: the bundled `libstdc++` and `libgcc_s` have their GPL and
  GCC Runtime Library Exception notices in `lib/licenses/`.

EarthBound and Mother 2 names identify the supported original games. This is an
independent project, with no claim of affiliation with their rights holders.
