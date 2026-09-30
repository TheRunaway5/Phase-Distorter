# Phase Distorter

**An EarthBound / Mother 2 PC port, written in C++20.**

Phase Distorter brings EarthBound (US, English) and Mother 2 (Japanese) to a
native desktop application for Linux and Windows. It includes keyboard and
controller input, audio, persistent saves, a Settings window, and
widescreen presentation with offscreen actor preloading.

Version **0.1** is a development release. Both games run their respective
compiled program and use assets imported from the player's own supported ROM.
ROMs and extracted gameplay asset packs are not included. You must supply your
own copy before playing. The launcher and window icons derive from the provided
Saturn artwork.

[Installation](#installation) · [ROM setup](#first-launch-and-rom-setup) ·
[Controls](#controls-and-display) · [Building](#building-from-source) ·
[Saves](#saves-settings-and-updating) · [Troubleshooting](#troubleshooting)

## Installation

### Downloaded a release ZIP?

1. Choose the [Windows ZIP](releases/Phase-Distorter-0.1-windows-x86_64.zip) or
   [Linux ZIP](releases/Phase-Distorter-0.1-linux-x86_64.zip) from `releases/`.
2. Use **Extract All** or your archive manager to extract the entire application
   folder. **Do not run the application from inside the ZIP.** Keep its files
   together.
3. On Windows, open **`Phase Distorter.exe`** and keep **`SDL2.dll`** beside it.
   On Linux, open **`Phase Distorter`** and keep **`lib/`** beside it. The supplied
   Linux build needs **glibc 2.43 or newer** and desktop OpenGL; use the source
   build below on older distributions.
4. If ROM setup appears, import your own supported EarthBound or Mother 2 ROM.
   A previous import in your external user-data directory can skip this step;
   no ROM or imported asset pack is included in the download.
5. During play, use **Settings (F1) → Assets** to switch games or manage their
   default caches. Save in-game before switching. **Fullscreen (F11)** and the
   other display settings are available from the gameplay bar.
6. Use the game's normal save mechanism and exit normally. Saves live outside
   the extracted folder. Back up your `.srm` files before updating, then extract
   the next release into a fresh folder; see [save locations](#saves-settings-and-updating).

Platform archives are stored only in **`releases/`**:

| Package | Contents |
| --- | --- |
| `releases/Phase-Distorter-0.1-windows-x86_64.zip` | Native Windows application, SDL2 runtime, optional shortcut setup, instructions and licenses |
| `releases/Phase-Distorter-0.1-linux-x86_64.zip` | Native Linux application, SDL2/C++ runtimes, optional menu setup, instructions and licenses |

Each ZIP contains one fresh application folder:
`Phase-Distorter-0.1-windows-x86_64/` or
`Phase-Distorter-0.1-linux-x86_64/`. Extract the entire ZIP and open the native
application inside that folder. These runnable packages
contain the required application files but no ROMs, imported gameplay asset
packs, saves, or source/build trees. Supply your own supported ROM on first
launch. Each ZIP includes `README.txt`, a file manifest and checksums;
`releases/SHA256SUMS` records the two archive hashes.

### Running from the source repository

Download this repository as a ZIP and extract it, or clone it if you also want
the full source snapshot. Keep the directory structure intact. The supplied
native applications live in **`launchers/linux/bin/eb_cpp`** and
**`launchers/windows/bin/eb_cpp.exe`**. Open the appropriate executable directly,
or use `./launch.sh` on Linux or `launch.bat` on Windows; those scripts prefer a
local build when one exists. Windows keeps `SDL2.dll` in the same `bin/` folder;
Linux libraries and their notices live in `launchers/linux/lib/`.

The root `install-linux.sh` and `install-shortcuts.vbs` scripts also support this
layout. The platform instructions and play commands below refer to an extracted
release ZIP, where the executable is named `Phase Distorter` or
`Phase Distorter.exe`. Source-build commands start from the repository folder
containing this README.

### Windows (x86-64)

1. Put the extracted folder somewhere convenient, such as
   `C:\Games\PhaseDistorter`.
2. Double-click **`Phase Distorter.exe`**.
3. Complete the ROM import described below.

Keep the supplied **`SDL2.dll`** beside **`Phase Distorter.exe`** in the top-level
folder. To select a game explicitly, use `--game earthbound` for English or
`--game mother2` for Japanese; for example, from Command Prompt:

```bat
"Phase Distorter.exe" --game mother2
```

You can create a desktop shortcut directly to the executable. Optional
**`install-shortcuts.vbs`** setup can also be double-clicked to create Desktop
and Start Menu shortcuts with the Saturn icon; those shortcuts target the
native executable. Keep the project folder in place, or rerun setup after
moving it. The supplied Windows executable has been tested under Wine;
native Windows testing remains outstanding.

### Linux (x86-64)

The supplied binary requires **glibc 2.43 or newer**, desktop OpenGL support,
and your system's desktop graphics/window/audio libraries. SDL2, libstdc++ and
libgcc_s are supplied in **`lib/`**; keep that directory beside the executable.
Graphics drivers and glibc remain system components. If your distribution has
an older glibc, use the [Linux source build](#linux-build) to compile against
your installed libraries.

Open **`Phase Distorter`** directly from your file manager. If extraction removed
its executable permission, enable that permission in the file's properties or
run the following in a terminal:

```sh
chmod +x "Phase Distorter"
"./Phase Distorter"
```

Use `--game earthbound` for English or `--game mother2` for Japanese, such as
`"./Phase Distorter" --game mother2`. Install the appropriate OpenGL graphics
driver and missing system desktop libraries through your distribution's package
manager if needed.

To add **Phase Distorter** with its Saturn icon to your application menu, run:

```sh
chmod +x install-linux.sh
./install-linux.sh
```

This optional setup installs a per-user menu entry that runs the native
executable directly, with English/Japanese actions and the icon. It does not
require administrator access. Keep the project folder in place or rerun the
installer after moving it. Both platforms also use the icon on the game window
and Windows embeds it in the executable.

The application remembers the last game selected. The supplied native
executables run the release snapshot. Source builds are separate; run
their executable or install the build as described below.

### Optional developer launch scripts

The existing `launch*.sh` and `launch*.bat` files remain available as developer
shortcuts. They prefer a local executable in `build/cpp/` when present, otherwise
they use the supplied platform package. The `launch-earthbound` and
`launch-mother2` variants select English and Japanese respectively, while the
general variant restores the last selected game. Paths are relative to each
script, and command-line arguments are forwarded to the executable.
`install-shortcuts.bat` remains an optional command-line wrapper for Windows
shortcut setup. None of these scripts is required to play.

## First launch and ROM setup

1. Open **`Phase Distorter`** on Linux or **`Phase Distorter.exe`** on Windows.
2. In the setup window, browse for your own ROM, drag it into the window, or
   enter its path.
3. Select **Import**. Phase Distorter validates the file, extracts the required
   assets to your user-data directory, and starts the game.

Import each game separately to play both. The Japanese version uses Mother 2's
original program, text, fonts, and assets. The two games have separate asset
packs and saves. After a successful import, later launches use the local pack;
the original ROM file is no longer needed at startup. Importing does not alter
the ROM or executable.

Only these retail images are supported. Each is **3,145,728 bytes** without a
copier header; a `.smc` image with an additional 512-byte header is also accepted.
Hashes below refer to the image without that header.

| Game | Language | SHA-256 |
| --- | --- | --- |
| EarthBound (US) | English | `a8fe2226728002786d68c27ddddf0b90a894db52e4dfe268fdf72a68cae5f02e` |
| Mother 2 (Japan) | Japanese | `1f8cfd13177d86b0eb2c8adcf9e1a4f0ec8966fa1583072b65a1b1c0e7961a5d` |

Modified ROMs, translation patches, prototypes, and other revisions are not
supported by this release. ROM download links and game assets are not provided.

Import is also available from the command line. For example, on Linux:

```sh
"./Phase Distorter" --import-rom "/path/to/your/mother2.sfc" --import-only
"./Phase Distorter" --game mother2
```

Or from Windows Command Prompt:

```bat
start /wait "" "Phase Distorter.exe" --import-rom "C:\path\to\your\mother2.sfc" --import-only
"Phase Distorter.exe" --game mother2
```

The Windows import command uses `start /wait` so the GUI application finishes
importing before Command Prompt proceeds to the next command.

Use `--assets "/path/to/game.ebpak"` to choose a different asset-pack location
when importing or playing. An explicitly selected game must match the ROM or
pack supplied. Invalid imports leave an existing valid pack intact.

## Controls and display

| Action | Keyboard | Controller position |
| --- | --- | --- |
| Move | Arrow keys | D-pad / left stick |
| SNES B / A | Z / X | Bottom / right face button |
| SNES Y / X | A / S | Left / top face button |
| SNES L / R | Q / W | Left / right shoulder |
| Start / Select | Enter / Right Shift | Start / Back |
| Settings window | F1 | — |
| Fullscreen | F11 | — |
| Close Settings / quit | Escape | — |

Controller mappings follow button position, so printed button labels may vary.
Closing the window also exits the game. Once a game is loaded, the top bar offers
**Settings (F1)** and **Fullscreen (F11)**. In windowed mode the picture fits below
the bar. In fullscreen the bar hides until the pointer reaches the top edge, then
overlays the picture without resizing it. Settings opens a floating window; while it is open, keyboard and
controller input is captured by the window and the game continues running. The
initial ROM import view appears before gameplay and does not show this bar.

In Settings' **Display** tab, enable widescreen and choose the original
aspect, 4:3, 16:10, 16:9, 21:9, the window's aspect, or a custom ratio. Preferences
persist between desktop sessions. The **Diagnostics** tab shows frame, CPU,
sound, and timing information.

The optional **Variable refresh rate (VRR)** checkbox uses native-rate pacing
with vsync, capped below the monitor maximum. Enable VRR in your monitor and
graphics settings first; the checkbox controls application pacing. It defaults
to off and is saved between sessions. `--vrr` / `--no-vrr` override it.
Fixed-refresh 60/120/240 Hz displays use a stable 60 Hz cadence with matching
playback audio. Expensive overworld entity updates also receive extra CPU
capacity. Overworld sprite images use host-managed storage, with nearby NPC
and enemy artwork prepared for wide views. `--original-timing` restores the
original CPU budget, scene timing and sprite storage for comparisons.
See [timing behavior and verification](cpp/docs/timing.md).

**F1 → Debug** provides infinite health and PSI/PP at **999/999**, noclip, and
an **Enemies ignore you** switch that prevents overworld pursuit and contact
battles. Story battles still work. The searchable teleport picker includes all
**385 named map areas**, including interiors, dungeons and endgame locations,
plus every scripted warp and door landing: **1,472 choices** in total.
Select a destination and press **Teleport now**; the screen fades fully to black
before loading the area, then fades back in. Check Ness, Paula, Jeff and Poo
as desired and press **Apply party**; keep at least one playable member.
Guest companions stay with the party. Teleports and party changes wait until
free movement is available, so close dialogue or finish the current battle.
These are debug actions and can affect saved progress; entering an area does
not complete its story events. Cheat switches reset when restarting or switching
games. See [debug tool details](cpp/docs/debug-tools.md).

Widescreen renders additional scenery while preserving the original game
camera, movement and collision. NPCs and enemies load in an offscreen band
beyond the selected view and remain active past its edges, using the source
event conditions and entity limits. This can change encounter timing.
PSI effects, including Rockin, fill the wider canvas while targeted effects stay
aligned with their enemy. Battle backgrounds stay wide throughout the exit fade,
and Lumine Hall's scrolling wall text adapts to the wider picture. The display
camera stops at map-region boundaries, including the Fourside tunnel and desert
road; areas narrower than the selected view use side borders. Menus and HUD
remain centered.

Fixed intro artwork, including **The War Against Giygas!**, uses a centered 4:3
view instead of repeating into the margins. The selected wider view returns
after that scene. The animated Giygas static fills the selected wide view while
the intro card stays centered. The Mother 2 logo screen extends its background into the
widescreen margins while keeping the original logo and copyright centered;
the artwork itself is not stretched or repeated.

Pass command-line display options directly to the executable:

```sh
"./Phase Distorter" --game mother2 --debug --aspect 16:9
"./Phase Distorter" --aspect window
"./Phase Distorter" --no-config --no-widescreen
```

In Windows Command Prompt, use `"Phase Distorter.exe"` with the same options.
`--help` lists all options, including frame limits, screenshots, audio capture,
and deterministic input playback.

For a repeatable windowed input run, combine `--input-script FILE` with
`--replay-only`. Physical game buttons are then ignored while window controls
and Settings still work. `--buttons MASK` supplies the initial held state;
script entries replace it at their hardware-frame boundaries. Without
`--replay-only`, physical game buttons combine with scripted or held buttons.

### Imported assets and switching games

Open **Settings → Assets** to see the default EarthBound and Mother 2 asset
caches. **Clear cached assets** asks for confirmation, then removes only that
game's default `earthbound.ebpak` or `mother2.ebpak`. The current game continues
using assets already loaded in memory. Your original ROM, battery saves,
preferences, custom asset-pack paths, and the other game's cache stay intact.
Only regular cache files are cleared; directories and symbolic links are
rejected. Selecting the cleared game with its default cache opens ROM setup
again.

**Switch game** also asks for confirmation and restarts into the chosen game.
Use the game's normal save mechanism first. With normal save persistence
enabled, the current battery RAM is written before restarting. The selected
game loads its own default cache, or opens ROM setup if it has not been
imported. Fullscreen and display preferences carry across the switch.

Intentional selection from this menu uses the chosen game's default cache even
if the application was launched with `--assets` or `EB_ASSET_PACK`. Custom pack
files are never deleted by these controls.

### Optional photosensitivity filter

The **Photosensitivity filter** in **F1 → Display** is **disabled by default**
and works independently of widescreen. It moderates identified flashing effects,
including battle animations and Franklin Badge lightning, in both games.
Ordinary scenery, sprites, text, and colors remain unchanged outside the affected
effect pixels. Game execution, input, audio, and save data remain unchanged.

The setting is saved with your display preferences. To enable it before the
first game frame, use:

```sh
"./Phase Distorter" --reduce-flashing
```

Use `--no-reduce-flashing` to override a saved enabled setting. The Windows
executable accepts the same flags. `--presentation-screenshot` and `--gl-screenshot` capture
the adjusted image; `--screenshot` retains the original framebuffer for checks.

This independently implemented filter is inspired by reduced-flashing
re-releases; Nintendo's exact Wii U/Switch algorithms are not reproduced or
verified. **It cannot guarantee seizure safety or eliminate every trigger.**
See [filter behavior and sources](cpp/docs/photosensitivity.md) for its scope,
parameters, and limitations.

Higher frame rates are available under **F1 → Display → Frame rate**: Native, 90–300 FPS, or Uncapped (`--fps 0`). **Direct scene rendering** draws verified overworld backgrounds and sprites at fractional positions without blending completed frames; gameplay and audio retain their original speed. It adds one game frame of visual latency. Battles and unsupported effects retain native frames. Use `--native-frames` to disable smoothing, or `--interpolation` for legacy image-based generation. See [timing and verification](cpp/docs/timing.md).

**CRT Filter** in **F1 → Display** adds a flat CRT-Lottes Fast treatment:
scanlines, aperture-grille phosphor detail and compensated brightness, without
curvature, rounded corners or temporal trails. It works with native and direct
scene rendering, leaves the settings overlay sharp, and is saved separately from
frame rate. It defaults off; use `--crt` or `--no-crt` to override the saved choice.
The public-domain [upstream shader](https://github.com/libretro/glsl-shaders/blob/a8136d8b8b5c6375296f833e7e81efa15ed76f11/crt/shaders/crt-lottes-fast.glsl)
is credited and bundled with the source; the executable embeds its flat adaptation.


## Building from source

The standalone repository contains the C++ implementation and generated C++
program sources for both games. Building requires a **C++20 compiler**, **CMake
3.20 or newer**, **SDL2 development files**, and **desktop OpenGL development
files**. **Python 3 is required by the default test-enabled configuration.**
A game-only build can disable tests and omit Python.

Build from this repository's root using `cmake -S .`, as shown below. No ROM,
assembler, Rust toolchain, or parent source checkout is needed to compile the
standalone version. A ROM is still required for the first asset import before
playing.

### Linux build

On Debian/Ubuntu, install the build and test dependencies:

```sh
sudo apt update
sudo apt install build-essential cmake ninja-build pkg-config python3 libsdl2-dev libgl-dev xvfb
```

Then build, run the tests, and launch:

```sh
chmod +x build-linux.sh
./build-linux.sh -G Ninja
ctest --test-dir build --output-on-failure
./build/cpp/eb_cpp
```

The build script uses four parallel jobs by default. Set
`CMAKE_BUILD_PARALLEL_LEVEL=2` before running it to use fewer jobs. It accepts
additional CMake configuration arguments, such as `-DEB_BUILD_TESTS=OFF`.

The equivalent direct commands are:

```sh
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel 4
```

The freshly built executable is `build/cpp/eb_cpp`. Run it directly to test your
changes; `launchers/linux/bin/eb_cpp` remains the supplied snapshot until you
update it explicitly. Other Linux distributions need the
equivalent compiler, CMake, SDL2, and OpenGL development packages.

### Windows build

Install [MSYS2](https://www.msys2.org/) and open its **UCRT64** terminal. Complete
its initial package update, then install the native build tools and SDL2:

```sh
pacman -Syu
pacman -S --needed mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-cmake mingw-w64-ucrt-x86_64-ninja mingw-w64-ucrt-x86_64-SDL2 mingw-w64-ucrt-x86_64-python
```

If the update asks you to close the terminal, reopen UCRT64 and finish updating
before installing the packages. These commands use the native tools described
in [MSYS2's CMake guide](https://www.msys2.org/docs/cmake/) and its
[SDL2 package](https://packages.msys2.org/packages/mingw-w64-ucrt-x86_64-SDL2).

Change to the extracted repository folder. For example, a Windows folder at
`C:\Games\PhaseDistorter` is `/c/Games/PhaseDistorter` in this shell:

```sh
cd /c/Games/PhaseDistorter
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel 4
ctest --test-dir build --output-on-failure
./build/cpp/eb_cpp.exe
```

Run `build/cpp/eb_cpp.exe` directly to use the freshly compiled version; the
`launchers/windows/bin/eb_cpp.exe` remains the supplied snapshot. Keep its matching
`SDL2.dll` beside the executable; CMake copies the DLL when SDL2 exposes a
shared-library target. A build made with a different toolchain may need that
toolchain's runtime DLLs when launched outside its shell.

If CMake cannot locate SDL2, add
`-DSDL2_DIR="/path/to/SDL2/lib/cmake/SDL2"` to the configure command. Use SDL2
libraries matching your compiler and architecture.

### Optional installation of a source build

Running either the supplied executable or the executable in `build/cpp/`
requires no separate install step. To prepare a directly runnable source-build
package, use:

```sh
cmake --install build --prefix dist
```

This produces **`dist/Phase Distorter`** on Linux or
**`dist/Phase Distorter.exe`** with its matching **`SDL2.dll`** on Windows.
Open that executable directly. You can choose another writable destination;
for example, on Linux:

```sh
cmake --install build --prefix "$HOME/.local/opt/phase-distorter"
"$HOME/.local/opt/phase-distorter/Phase Distorter"
```

On Windows, use a writable destination such as:

```sh
cmake --install build --prefix "C:/Games/PhaseDistorter-installed"
```

Run `Phase Distorter.exe` from that destination and keep its runtime DLLs beside
it. CMake places the native application at the install prefix and dependency
sources/notices and icons under `share/eb_cpp/`; no shell or batch launcher is
needed. Installation does not bundle your imported assets or saves.

### Tests

```sh
ctest --test-dir build --output-on-failure
```

The eleven default tests do not require game assets. OpenGL and panel tests need
a display; on Linux, CTest uses Xvfb automatically when available. Optional
translation fixtures explicitly skip when their assembler tools are absent.
Those tools are not required to build or run Phase Distorter. Additional
scene/gameplay tools require your own imported pack.

To build only the application and its libraries:

```sh
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DEB_BUILD_TESTS=OFF
cmake --build build --parallel 4
```

## Saves, settings, and updating

Version 0.1 retains the existing `ebsrc/EarthBoundCpp` application-data location:

| Platform | Default directory |
| --- | --- |
| Windows | `%APPDATA%\ebsrc\EarthBoundCpp\` |
| Linux | `${XDG_DATA_HOME:-$HOME/.local/share}/ebsrc/EarthBoundCpp/` |

These are the normal locations chosen by
[SDL's user-data API](https://wiki.libsdl.org/SDL2/SDL_GetPrefPath); the program
prints the selected save path when running.

| File | Purpose |
| --- | --- |
| `earthbound.ebpak` / `mother2.ebpak` | Imported assets for each game |
| `earthbound.srm` / `mother2.srm` | Separate battery-backed game saves |
| `display.cfg` | Display preferences and last selected game |

Use the game's normal save mechanism, then exit Phase Distorter normally to
write its battery RAM to disk. These are game saves, not emulator save states.
`--save FILE`, `--assets FILE`, and `--config FILE` select custom locations;
`--no-save` and `--no-config` disable the corresponding persistence. Headless
runs do not save SRAM unless a save path is explicitly supplied.

Back up the `.srm` files before updating. Extract a new version into a separate
folder and launch it; the default user-data directory stays outside the project
folder. If using custom paths, keep passing those same paths. Removing the
project folder does not remove default saves, imported packs, or preferences.
A fresh download may therefore play immediately if your external user-data
directory already contains an imported pack from an earlier run. That does not
mean the new directory or release ZIP contains game assets.

## Troubleshooting

| Problem | What to check |
| --- | --- |
| Import rejects the ROM | Check its supported revision, size, and SHA-256 above. Patched ROMs are unsupported. |
| The game or language does not match | Pass `--game earthbound` or `--game mother2` and use its matching asset pack. Each game requires its own import. |
| Linux reports `GLIBC_2.43` missing | Build from source on that machine instead of using the bundled binary. |
| Linux reports permission denied | Run the `chmod` command in the Linux installation section. |
| Windows reports `SDL2.dll` missing | Restore the matching DLL beside the executable you are running. |
| The window closes immediately | Run the native executable from a terminal or Command Prompt to read the error. |
| Keyboard/gamepad controls stop working | Close Settings with F1 or Escape; it captures physical input while open. |
| Display preferences cause trouble | Launch with `--no-config --no-widescreen` to use the original view for that session. |
| CMake cannot find SDL2 | Install the development package or set `SDL2_DIR` as described above. |

For a Windows startup log, run these commands in Command Prompt:

```bat
start /wait "" "Phase Distorter.exe" > phase-distorter.log 2>&1
type phase-distorter.log
```

## Project status and source layout

Phase Distorter compiles the original game and sound-program instruction sites
into C++ and provides the hardware, display, input, audio, and asset-import
support they need. The release's `generated/` directory is versioned source;
normal builds do not regenerate it. Retail data is supplied only through local
ROM import.

| Location | Contents |
| --- | --- |
| `cpp/` | C++ implementation, tests, tools, documentation, and dependencies |
| `generated/` | Compiled-program C++ sources and import layouts for both games |
| `releases/` | Runnable Windows/Linux ZIPs and archive checksums |
| `launchers/linux/bin/` | Supplied Linux native application |
| `launchers/linux/lib/` | Bundled Linux shared runtimes and their provenance/licenses |
| `launchers/windows/bin/` | Supplied Windows native application and its matching SDL2 DLL |
| `launchers/*/share/` | Platform icons and dependency notices/source |
| `launch*.sh` / `launch*.bat` | Optional developer shortcuts with local-build priority |
| `build-linux.sh` | Linux CMake build helper |
| `install-linux.sh` / `install-shortcuts.vbs` | Optional Saturn-icon menu/desktop shortcut setup targeting the native applications |
| `cpp/resources/` | Derived Saturn platform icons and release instruction templates |
| `SHA256SUMS` | Checksums for the release snapshot |

The port is still in development. Whole-game equivalence and cycle-accurate
hardware behavior have not been established; some timing and intermediate
animation differences remain. See the [verification record](cpp/STATUS.md),
[translation architecture](cpp/TRANSLATION.md), and [release notes](CHANGELOG.md)
for the tested behavior and known limits. The assembler-based development
commands in `cpp/README.md` describe the original development checkout; use this
README's root-level commands for the standalone repository.

For bug reports, include your platform, game/language, version, reproduction
steps, and any terminal error. Do not attach ROMs or extracted game assets.

The implementation includes comments explaining module ownership, hardware
contracts, rendering boundaries, asset validation, and test coverage. Begin with
the [source navigation guide](cpp/docs/source-navigation.md) for module ownership,
original assembly provenance and the CPU register naming crosswalk.
[`desktop_application.cpp`](cpp/src/desktop_application.cpp) composes the run;
[`GameSession`](cpp/include/eb/game_session.hpp) owns simulation without SDL,
[`PresentationPipeline`](cpp/include/eb/presentation_pipeline.hpp) owns picture
history and host pacing, and [`DesktopDisplay`](cpp/include/eb/desktop_display.hpp)
owns the window and input. The scene renderer reads hardware through
[`SceneReadView`](cpp/include/eb/scene_read_view.hpp), while
[`asset_store.hpp`](cpp/include/eb/asset_store.hpp) defines the ROM import boundary.
To regenerate the icons, first place the source artwork at `saturn.png` in the
project root, then run `python3 cpp/tools/make_app_icon.py` with ImageMagick 7's
`magick` command installed. The original artwork file is not required for
ordinary builds, which use the checked-in derived icons.

After updating the native executables in `launchers/*/bin/` and Linux runtimes
in `launchers/linux/lib/`, maintainers can validate and recreate the whitelisted
runnable packages using Python 3:

```sh
python3 cpp/tools/package_release.py --check
python3 cpp/tools/package_release.py
```

The packager writes versioned archives only to this snapshot's `releases/`
directory. Each archive contains the branded native executable and its runtime
dependencies together for direct launching. It preserves executable permissions
and records payload hashes relative to each archive's application folder. It excludes working-tree
assets and rejects supported ROMs or imported packs even if renamed. `--check`
validates the inputs without writing archives.

Source attribution and dependency licenses are documented in
[NOTICE.md](NOTICE.md). Phase Distorter is an independent project and is not
affiliated with the original games' rights holders.
