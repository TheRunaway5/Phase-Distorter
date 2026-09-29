# Phase Distorter — version 0.1 release snapshot

Prepared 2026-09-27. Upload this directory's contents as the root of the fresh
repository. No remote repository was created or changed.

## Source modernization — current working tree

The desktop now composes explicit owners: SDL-free `GameSession` for hardware,
processors, debug commands and frame/audio delivery; `GameSceneRenderer` for
presentation caches through read-only hardware views; `PresentationPipeline`
for filtering, interpolation history and host deadlines; and `DesktopDisplay`
for window/UI/input. CLI/preferences, replay, storage and audio output have
focused modules. `--replay-only` excludes physical game buttons while retaining
window and Settings events. See [source navigation](cpp/docs/source-navigation.md).

Current source validation passes all **19 native Linux CTests** and all **18
Windows C++ tests under Wine/Xvfb**. Wine does not run the Python translation
test, and its asset-cache symlink fixtures explicitly skip because symlink
creation is unavailable there. A separate SDL-free, frontend-disabled build
also builds and passes the `GameSession` test.

On Linux and Wine, both regional games match direct-core execution through 900
frames under both original and enhanced timing policies, including completed
frame callbacks, PCM audio and machine state. Source-backed rendering fixtures
pass 73 scene checks per region and all 34 PSI sequences, with 2,126 rendered
frames per region across both battle layer layouts. These are bounded execution
and rendering fixtures; they do not establish whole-game equivalence or native
Windows behavior.

## Earlier feature and package validation

Updated 2026-09-29 with saved Native, 90–300 FPS and Uncapped presentation,
optional frame interpolation for overworld and battle pictures, and a corrected
Windows wait path that avoids rounding short presentation sleeps to 16 ms.
Gameplay and audio retain their native update rate. Frame generation adds one
game frame of visual latency and may show blending artifacts; Native mode and
the interpolation opt-out preserve original completed frames. All 15 Linux
CTests pass; pacing, interpolation, wait and UI probes pass under Wine. Both
regional 600-frame differential runs preserve ordered writes, all machine state,
audio samples and native pixels while generating intermediate pictures. See
`cpp/docs/timing.md` for measurements and remaining validation limits.
The final extracted packages pass their manifests and contain the tested binaries.
In both games, 300-frame headless, 300 FPS and Uncapped runs produce identical
CPU/SPC state, WAV bytes and native pixels across Linux and Wine. The 300 FPS
runs measure about 299 submissions per second on the NVIDIA desktop; this is a
short boot/intro check, not a sustained gameplay or physical scanout benchmark.


Updated 2026-09-29 with **F1 → Debug**: infinite HP/PP at 999/999, noclip,
enemy avoidance, playable-party selection, and a searchable teleport catalogue
covering all 385 named areas plus scripted warps and door landings (1,472 choices).
The fullscreen top bar now hides until the pointer reaches the top edge and
overlays the picture without resizing it. Debug switches start off.

All 14 CTests pass on Linux and under Wine. The debug fixture passes 3,055
synthetic checks, including catalogue coverage
and both regional layouts. Imported-asset runs in both games successfully add
all four party members, switch to Jeff alone, restore the party, complete seven
teleports spanning towns/interiors/endgame areas at their exact coordinates,
and cross a blocking wall with noclip. Actual SDL/ImGui tests exercise all four
switches, party selection, a searched Sea of Eden teleport, and fullscreen hover.
These are representative runtime checks, not a playthrough of every destination.
With debug tools disabled, the 20,295-frame EarthBound differential preserves
CPU/SPC state, all memory, clocks, 61,451,822 ordered writes, 10,806,203 audio
frames and native pixels. See `cpp/docs/debug-tools.md` for details. Both
updated ZIPs pass manifest/permission/checksum checks after extraction into
paths containing spaces. Their exact executables run both games through frame
1,800 with identical native/wide pixels, WAV bytes and CPU/SPC summaries across
Linux and Wine. Linux loads its three bundled runtime libraries.

Updated 2026-09-29 with widescreen entity, PSI-animation, and battle-exit fade
fixes. That build passed all 12 CTests. The 172-check widescreen
fixture passes on Linux and under Wine, covering both game profiles, both
screen edges, sprite-buffer publication, targeted PSI, and battle fades; the
300-check bus fixture also passes on both platforms. An imported-asset fixture
checks all 34 PSI sequences in each game (2,126 rendered frames per game), using
both battle layer layouts and wide/ultrawide canvases. These are rendering
fixtures, not live playthroughs of every battle.

The updated 20,295-frame EarthBound overworld comparison preserves CPU/SPC state,
all game/entity/PPU memory, clocks, 61,451,822 ordered writes, 10,806,203 audio
frames, and every native pixel while presentation widths change. A 1,200-frame
Mother 2 comparison also passes. Both rebuilt ZIPs pass payload manifests,
permissions, and checksums after extraction into paths containing spaces.
Their exact executables run both games through frame 1,800; Linux and Wine
produce identical native/adapted pixels, WAV bytes, and CPU/SPC summaries.
Linux resolves all three bundled runtime libraries from its extracted folder.

The remaining historical verification below describes the original September
27 snapshot unless explicitly dated otherwise.

This snapshot was built independently using the root CMake project, without the
parent assembly tree or retail files. All eleven final CTests pass on native
Linux in 8.95 seconds and under Wine in 46.40 seconds, including the 302-check
bus fixture. Four optional SPC
assembler fixtures explicitly skipped because the assembler was not installed
inside this standalone tree; the development checkout's full 15 translator
fixtures also passed. The newly compiled Japanese frame-900 native image,
expanded image, and WAV output exactly matched the earlier verified release
with the photosensitivity filter disabled.

Both code templates were independently checked to contain only zero bytes in
every imported range. Importing the two local supported ROMs reconstructed the
canonical fingerprints documented in `cpp/README.md`. Test ROMs and packs stay
outside the checkout; verification captures and generated build files stay in
the ignored `build/` directory and are excluded from release packages.

All three Linux and all three Windows wrappers were tested from a directory
path containing spaces with explicit external asset packs. Both profiles ran
and exited successfully. Windows execution was under Wine. All shipped binaries
match the final tested packages. Full gameplay and hardware limits remain in
`cpp/STATUS.md`.

The optional F1 photosensitivity filter is disabled by default. It moderates
identified flashing effects, including battle animations and Franklin Badge
lightning, while preserving ordinary presentation pixels. The selective
filter's focused tests pass for ordinary-image identity, effect locality,
alternating flashes, a moving underlying scene, resizing, toggles, and invalid
input. Paired native Linux executions through frame 3,100 preserve CPU/SPC
state, ordered writes, game memory, clocks, audio, and native pixels in both
games with filtering and changing presentation widths enabled. Each route
exercises 98 effect frames: 1,820,644 pixel changes in EarthBound and
1,843,576 in Mother 2, accumulated across those frames. Separate frame-1,800
captures confirm the gas-station
flash changes; frame-3,000 logo captures remain identical with the setting on
or off. All eight Windows captures under Wine match the Linux pictures, audio,
and CPU/SPC state exactly. All 302 focused bus checks pass, including under
ASan/UBSan. The fresh archive checks below also pass. This is an independent
implementation, not a reproduction of Nintendo's exact filter or a guarantee
of seizure safety; see `cpp/docs/photosensitivity.md`.

Fixed intro artwork, including The War Against Giygas!, now uses the original
256-pixel canvas in a centered 4:3 view. The requested wide view returns on scene
exit. Mother 2's logo background extends by carrying each row's edge color into
the margins; its logo and copyright remain in the original center. Both games'
frame-1,500 and frame-3,000 comparisons preserve every original center pixel,
with 256-pixel and 398-pixel presentation widths respectively at the tested
16:9 setting. The artwork is not stretched or tiled into the margins.

A live Linux OpenGL run presented all 1,800 frames without skipping, in
29.952 seconds. Its 1,194×672 window used an 871×653 game viewport at (161, 19)
for the fixed 4:3 scene. The complete 256×224 source image matched nearest-pixel
scaling with zero differing pixels, the sidebars stayed black, and the filtered
source matched the headless capture exactly.

The original September 27 native executable had SHA-256
`048e6006ff00121e54dd2ed9a542a70e1f57d34dedb850130c82a801270e8ab1`;
the original Windows executable had SHA-256
`e6ecfc89875effea489c110cf1c4cd6ea204f30f17d8afac110b958cf6429db7`.
The runtime binaries in `launchers/` have since been rebuilt with the September
29 widescreen and debug-tool changes. Current binary hashes are recorded in `SHA256SUMS`.

Phase Distorter window and launcher icons derive from the supplied `saturn.png`.
Actual Linux and Wine window icons match its pixels; all seven Windows executable
icon resources match the checked-in ICO. Optional Linux menu and Windows shortcut
installers were tested with isolated destinations, including paths with spaces.
The standalone source includes explanatory comments and a complete installation
and build guide in the root `README.md`.

The repository keeps native applications in `launchers/linux/bin/eb_cpp` and
`launchers/windows/bin/eb_cpp.exe`, with the Windows SDL DLL beside its executable
and Linux runtime libraries in `launchers/linux/lib/`. Extracted release ZIPs
provide `Phase Distorter` (Linux) and `Phase Distorter.exe` (Windows) at the top
of their application folders; no shell or batch launcher is needed.
Windows uses the GUI subsystem for console-free desktop startup and preserves
redirected command-line diagnostics. The optional desktop/menu shortcuts target
these native applications. CMake installation also produces the branded native
executable at the install prefix's top level.

Runnable downloads are the versioned ZIPs in `releases/`. Duplicate root
executables, the SDL DLL, and archive aliases were removed during repository
cleanup. The packager reads the canonical `launchers/` inputs and writes only
to `releases/`. Each archive encloses one fresh platform-specific application
folder, with SDL and C++ runtime
dependencies where required, setup instructions, notices, and integrity records.
The packager copies an explicit file list and rejects ROMs, asset packs, saves,
and personal configuration. The source tree was also checked for pack signatures
and supported ROM fingerprints; existing imports in the user's external
application-data directory are not package inputs.

The original 0.1 archives passed manifest and checksum verification after extraction
into paths containing spaces. The exact extracted Linux EarthBound frame-1,800
run and Windows Mother 2 frame-1,800 run under Wine reproduced the tested native
and adapted pixels and WAV bytes with the filter enabled. Linux loaded its own
three runtime libraries, with no SDL3 dependency. The Linux ZIP contains 21
regular files and the Windows ZIP contains 14. Repository layout cleanup alone
preserved the original ZIP bytes; the subsequent widescreen fixes rebuild the
native executables and archives. The current archives also include the bounded overworld CPU budget, fixed-refresh pacing and saved optional VRR setting described in `cpp/docs/timing.md`. The table below records the current downloads.

| Archive | SHA-256 |
| --- | --- |
| `releases/Phase-Distorter-0.1-linux-x86_64.zip` | `e42720c1e40800520e23008b0371633685c9878fcfde004d40077572b2ca6058` |
| `releases/Phase-Distorter-0.1-windows-x86_64.zip` | `51c74479d51bcc637ec727ac98aa14ece85417856032f2a1642c4ba3e7c61e3f` |

The timing builds completed the same 16,000-frame gameplay replay on Linux and
Windows/Wine with identical pixels, execution counts, CPU/SPC registers and audio
sample counts. The subsequent source-organization build preserves the complete
US/JP/SPC instruction streams. Before/after Linux replays of 16,000 US frames and
15,000 Japanese frames also match registers, counts, native screenshots and full
WAV bytes exactly. All 15 Linux CTests and 14 Windows binary fixtures under Wine
pass; Wine skips three unsupported asset-cache symlink cases. The source guide
is in `cpp/docs/source-navigation.md`. Physical VRR scanout and native Windows
validation remain outstanding.

The renamed builds were packaged and checked against their manifests and binary
inputs. Both games passed headless, 300 FPS and uncapped pixel/audio/register
comparisons on Linux and Windows/Wine. The repeated Windows uncapped US check
and Japanese display checks used Xvfb to isolate desktop input. One earlier
desktop US uncapped trial differed by six instructions while registers, pixels
and audio matched; its cause was not established. Isolated old/new Windows
uncapped runs matched the expected counts exactly.

The original release audit checked all 346 tracked or unignored source/release
files and every ZIP entry. No supported ROM image or imported asset pack was present.

The Linux x86-64 binary requires glibc 2.43 and system desktop/graphics support;
SDL2 and generic x86-64 C++ runtimes are bundled in `launchers/linux/lib/`
in the repository and `lib/` in the Linux ZIP. Generic CRT startup
objects avoid inheriting the build host's x86-64-v4 CPU requirement. Use the
source build on older distributions. Windows includes its SDL2.dll.
`SHA256SUMS` records every tracked or unignored source/release file except
itself. Git's `.git/` metadata and ignored build/verification outputs are not
part of that checksum inventory.

The loaded game has a Settings/Fullscreen top bar, with the picture fitted below
it in windowed mode and a top-edge hover overlay in fullscreen. Settings opens
in a floating window. Its Assets tab lists both
default caches, confirms clearing only the chosen cache, and confirms restarting
into the selected game. Current gameplay can continue after clearing its cached
file because the assets remain in memory. Switching preserves normal SRAM and
display/fullscreen preferences; a missing selected cache opens ROM setup.
The startup importer itself has no gameplay bar. Cache administration never
deletes source ROMs, saves, custom pack files or the other game's cache.
