# Assembly-to-C++ port

This directory is an independent C++20 implementation. It does not compile,
include, or depend on `../runtime`. Its build translates the assembly in `src/`
and `include/` into C++ instruction cases, preserves their addresses, and links
those generated sources with the CPU, hardware bus, and SDL2 / OpenGL desktop
frontend. Game assets are not embedded in the executable or supplied in the
install package. Players import their own supported ROM once, then the game
loads the resulting local asset pack.

The port is still being developed. A successful build or a bounded boot run is
not proof that all game behavior, video, or audio matches the original. Missing
translated code stops execution with the program counter and CPU registers;
there is no fallback to the older C runtime.
The [verification record](STATUS.md) distinguishes completed checks from the
remaining fidelity limits.

[Translation architecture and coverage](TRANSLATION.md) explains the source
mapping, runtime M/X width handling, SPC700 source build, remaining static
coverage limits, and reproducible instruction-contract audits. The current
translation targets are the US EarthBound and Japanese Mother 2 retail source
configurations. The imported pack selects its matching compiled program.

For a release source tree containing only `cpp/` and the pre-generated program
in a sibling `generated/` directory, configure with
`cmake -S cpp -B build -DEB_PREGENERATED_DIR="$PWD/generated"`. This mode requires
no original assembly, extraction YAML, ca65/ld65, or SPC assembler. All generated
C++ sources and headers must be present; JSON reports are optional. Python is
required only when tests are enabled (`-DEB_BUILD_TESTS=OFF` disables them).
Assembler-dependent translator fixtures report skips when their tools are
unavailable. Omitting `EB_PREGENERATED_DIR` keeps the normal source-generation
build described below.

## First launch and asset import

Launch `eb_cpp` (or `eb_cpp.exe` on Windows). If no valid assets are present, a
setup window lets you browse for, drag in, or enter the path to your own
US EarthBound or Japanese Mother 2 retail ROM. Click **Import** to validate and extract it. The game
starts only after extraction and validation succeed. Unsupported, modified,
truncated, or damaged files produce an error in the same window.

Both supported images are 3,145,728 bytes. Their SHA-256 fingerprints are:

| Game / language | SHA-256 |
| --- | --- |
| EarthBound, English (US) | `a8fe2226728002786d68c27ddddf0b90a894db52e4dfe268fdf72a68cae5f02e` |
| Mother 2, Japanese | `1f8cfd13177d86b0eb2c8adcf9e1a4f0ec8966fa1583072b65a1b1c0e7961a5d` |

A `.smc` dump with a 512-byte copier header is also accepted. The importer never
changes the ROM. It extracts data into `earthbound.ebpak` or `mother2.ebpak` in
SDL's application data directory (`ebsrc/EarthBoundCpp`); the executable itself stays unchanged.
Later launches use that pack without requiring the original ROM path. Asset
packs remain local and are excluded from Git and installation packages.

Command-line import is available without opening a window:

```sh
./build/cpp/eb_cpp --import-rom /path/to/your/EarthBound.sfc --import-only
./build/cpp/eb_cpp --import-rom /path/to/your/mother2.sfc --import-only
```

Use `--assets /path/to/earthbound.ebpak` to select another pack location, both
when importing and when playing. `EB_ASSET_PACK` provides the same default for
verification tools. Headless runs report missing assets and exit instead of
opening setup. Bad imports preserve any existing valid asset pack.

ROM and pack identification is automatic. When both versions are imported, use
`--game earthbound` or `--game mother2` to choose one. Desktop preferences remember
the last version played. Mother 2 uses its Japanese program, text, fonts, and
assets; this is not a language overlay on the US program. Default game saves
are separate (`earthbound.srm` and `mother2.srm`), so switching versions does not
overwrite the other game's progress. `--save FILE` still selects an explicit
save path when desired.

## Linux

Install a C++20 compiler, CMake 3.20+, Python 3, ca65/ld65 from cc65, SDL2
development headers, and OpenGL development headers. On Debian/Ubuntu:

```sh
sudo apt install build-essential cmake ninja-build python3 cc65 libsdl2-dev libgl-dev
```

Building this C++ port does not require a ROM or an extracted `src/bin` folder.
The translator uses address metadata and zero-filled placeholders in an isolated
build tree; it does not read installed retail assets. Only declared CPU and
SPC700 instruction bytes are retained in the executable. Imported data fills the
remaining address ranges at startup, and the reconstructed image is verified
before execution.

The translator assembles SPC700 source into its own build directory; it does
not read a prebuilt game image or the original build directory's SPC700 binary.
It uses `spcasm` on
`PATH`, or the path specified by `SPCASM`. Otherwise it bootstraps the pinned
spcasm v1.1.0 source with Rust `nightly-2023-09-01` and Cargo's locked dependencies;
that first tool bootstrap requires network access, Git, and Rustup/Cargo.

```sh
cmake -S cpp -B build/cpp -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build/cpp --parallel 4
ctest --test-dir build/cpp --output-on-failure
./build/cpp/eb_cpp
```

Run the commands from the repository root. The first build assembles the source
to obtain exact addresses and instruction boundaries, then emits the C++ files
and data under `build/cpp/generated`. Source changes regenerate these files.
Do not hand-edit generated files.

For a bounded run without opening a window:

```sh
./build/cpp/eb_cpp --headless --frames 120 --screenshot build/cpp/frame120.ppm
./build/cpp/eb_cpp --headless --steps 1000000
./build/cpp/eb_cpp --headless --frames 600 --wav build/cpp/audio.wav
```

`--steps` counts CPU step calls, including hardware advancement while the CPU is
waiting for an interrupt. The report separately counts executed instructions.
If both limits are supplied, the first reached ends the run. A failure returns
a nonzero exit code and prints the CPU state; `--screenshot` also writes the
framebuffer at a failed run's stopping point. Headless mode requires a nonzero
limit. A screenshot is a 256×224 binary PPM containing the bus framebuffer.

For OpenGL verification on a Linux host without a physical display:

```sh
xvfb-run -a ./build/cpp/eb_cpp --frames 120 --screenshot build/cpp/gl-frame120.ppm
xvfb-run -a ./build/cpp/eb_cpp --frames 120 --scale 1 --gl-screenshot build/cpp/gl-readback.ppm
```

This exercises window creation, GL texture upload, and buffer swapping. The PPM
captures the source framebuffer; it is not a readback of the displayed GL image.
`--gl-screenshot` instead reads back the rendered OpenGL back buffer at the
window's actual drawable resolution before presenting the final frame.

Desktop runs automatically load and save the selected game's `.srm` in the application's
SDL user-data directory and print the selected path. Use `--save path/to/game.srm`
to select a different file, or `--no-save` to disable persistence. Headless runs
keep SRAM in memory unless `--save` is explicitly supplied. Existing save files
must be exactly 8192 bytes. Successful exits, including a reached frame or step
limit, write a complete temporary file and atomically replace the destination;
execution or write errors leave the prior save unchanged.

`video_tests` uses the same `FramePresenter` as the application. It checks every
readback pixel against a colored source pattern at native and 3× scale, checks
both letterbox directions, and verifies that a second upload replaces the first.
CTest runs it through `xvfb-run` when that program is available on Linux. These
tests establish presentation behavior independently of the game's PPU output.

The source-translated SPC700 driver controls a separate S-DSP hardware synthesis
backend. The desktop frontend queues its 32 kHz, signed 16-bit stereo output to
SDL2. `--wav FILE` records that same output, including in headless runs;
`--no-audio` disables the playback device while retaining hardware synthesis and
WAV recording. Headless mode never opens an audio device. `dsp_tests` exercises a
known looping BRR waveform, clock partitioning, stereo levels, and muting. The
vendored backend's source and license are in [external/spc_dsp](external/spc_dsp).

## Windows

Native Windows builds need CMake, Python 3, ca65/ld65 on `PATH`, a C++20 compiler,
and SDL2 development libraries for that compiler and architecture. SDL2 provides
[official installation instructions](https://wiki.libsdl.org/SDL2/Installation)
and [release archives](https://www.libsdl.org/release/).

For example, in an MSYS2 UCRT64 shell with its C++ toolchain and SDL2 installed:

```sh
cmake -S cpp -B build/cpp-windows -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build/cpp-windows --parallel 4
ctest --test-dir build/cpp-windows --output-on-failure
./build/cpp-windows/eb_cpp.exe
```

If CMake cannot find SDL2, set `-DSDL2_DIR=...` to the directory containing its
`sdl2-config.cmake`. Keep `SDL2.dll` next to `eb_cpp.exe`; CMake copies it when
the SDL2 package exposes the shared-library target. Any runtime DLL dependencies
of the selected compiler also need to be available.

For a Linux-to-Windows x86-64 cross-build, install `g++-mingw-w64-x86-64`, download
and unpack the official SDL2 MinGW development archive, then run:

```sh
cmake -S cpp -B build/cpp-mingw -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE=cmake/mingw64.cmake \
  -DCMAKE_BUILD_TYPE=Release \
  -DSDL2_DIR=/absolute/path/SDL2-2.32.10/x86_64-w64-mingw32/lib/cmake/SDL2 \
  -DEB_BUILD_TESTS=OFF
cmake --build build/cpp-mingw --parallel 4
```

The cross-build runs the Python/cc65 translation tools on Linux and compiles the
resulting C++ for Windows. It does not run the Windows executable as part of the
build. The supplied toolchain links the GCC and C++ runtimes statically for the
desktop executable. Windows system OpenGL support remains a host requirement.

## Controls and display

| SNES control | Keyboard | SDL game controller position |
| --- | --- | --- |
| Direction | Arrow keys | D-pad or left stick |
| B / A | Z / X | Bottom / right face button |
| Y / X | A / S | Left / top face button |
| L / R | Q / W | Left / right shoulder |
| Start / Select | Enter / Right Shift | Start / Back |
| Quit | Escape | Window close |

`--buttons MASK` holds the given native JOY1 mask in either mode. The bit order
is B=15, Y=14, Select=13, Start=12, Up=11, Down=10, Left=9, Right=8, A=7, X=6,
L=5, R=4. Physical controller button labels vary; the mapping follows position.

`--input-script FILE` replays input changes at hardware frame boundaries. Each
nonempty line contains `<frame> <joymask>`; numbers are decimal or `0x` hexadecimal,
frames must be strictly increasing, and `#` starts a comment. Each mask remains
held until the next entry. Before the first entry, the mask comes from `--buttons`
or defaults to zero. For example, this presses Start for six frames:

```text
1200 0x1000
1206 0
```

The window starts at 3× source resolution, preserves the 256:224 source pixel
aspect ratio when resized, and uploads the framebuffer through an OpenGL 2.1
texture with nearest-neighbor sampling. `--scale 1` through `--scale 8` changes
the initial size. `--no-vsync` disables swap synchronization; the frame clock
still limits interactive execution. Simulation follows the console's 60.0988 Hz
clock independently of monitor refresh. When presentation falls behind, the
frontend can omit an intermediate image while executing every game, input, and
audio frame. Headless execution runs without throttling.

## Optional control panel and widescreen

Press **F1** to open or close the ImGui control panel, or launch with `--debug`.
Its Display tab enables widescreen and selects the original aspect, 4:3, 16:10,
16:9, 21:9, the window's aspect, or a custom width/height ratio. **F11** toggles
fullscreen. Escape closes an open panel; otherwise it exits the game. Physical
keyboard/controller input is captured while the panel is open. Scripted input
continues independently. The Diagnostics tab displays copied CPU, sound, frame,
and timing information without allowing game-state edits.

Widescreen adds picture on either side of the original 256×224 view. It does
not change the game's camera coordinates, timing, collision, entity activation,
or spawn rules. Extra pixels come from read-only rendering of existing scene
data. Map scenery uses the map data beyond the streamed tile buffer, battle
patterns continue their existing layer transforms, and Lumine Hall's wall text
uses its complete prepared text columns. Menus and HUD remain in the original
view. Actors retain the original activation rules; wider scenery does not cause
additional actors to spawn.

Near a map region's edge, the wider display camera stops at the matching
tileset-sector boundary. This covers the Fourside tunnel and desert road
regions without altering the game's camera or collision data. Regions narrower
than the selected view are centered with side borders. HUD placement stays
centered while world scenery and visible actors follow the display camera.

Display preferences are stored separately from game saves in `display.cfg` in
the application data directory. `--config FILE` selects another preferences
file, while `--no-config` disables loading and saving preferences. Command-line
display options override saved preferences:

```sh
./build/cpp/eb_cpp --debug --aspect 16:9
./build/cpp/eb_cpp --aspect window
./build/cpp/eb_cpp --no-config --no-widescreen
```

`--aspect` enables widescreen; `--widescreen` uses the selected aspect. Custom
ratios such as `32:9` are supported up to a 1,024-pixel source width. The canvas
stays at least 256 pixels wide so narrow windows never crop the original view.
`--screenshot` still writes the native 256×224 image for gameplay comparisons;
`--presentation-screenshot` writes the wider source picture, and
`--gl-screenshot` captures the actual window including an open control panel.
See [STATUS.md](STATUS.md) for the validation evidence and remaining limits.
