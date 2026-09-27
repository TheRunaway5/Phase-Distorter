# Phase Distorter — version 0.1 release snapshot

Prepared 2026-09-27. Upload this directory's contents as the root of the fresh
repository. No remote repository was created or changed.

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

The tested native executable has SHA-256
`048e6006ff00121e54dd2ed9a542a70e1f57d34dedb850130c82a801270e8ab1`;
the tested Windows executable has SHA-256
`e6ecfc89875effea489c110cf1c4cd6ea204f30f17d8afac110b958cf6429db7`.
Both top-level applications and the corresponding nested runtime binaries have
been refreshed from these builds.

Phase Distorter window and launcher icons derive from the supplied `saturn.png`.
Actual Linux and Wine window icons match its pixels; all seven Windows executable
icon resources match the checked-in ICO. Optional Linux menu and Windows shortcut
installers were tested with isolated destinations, including paths with spaces.
The standalone source includes explanatory comments and a complete installation
and build guide in the root `README.md`.

Native applications are provided at the top level as `Phase Distorter` (Linux)
and `Phase Distorter.exe` (Windows); no shell or batch launcher is needed.
Windows uses the GUI subsystem for console-free desktop startup and preserves
redirected command-line diagnostics. The optional desktop/menu shortcuts target
these native applications. CMake installation also produces the branded native
executable at the install prefix's top level.

Runnable downloads are `windows-0.1.zip` and `linux-0.1.zip` at the project root;
`linux-0.1.zup` is a byte-identical Linux ZIP alias. Versioned copies are retained
in `releases/`. Each archive encloses one fresh platform-specific application
folder, with SDL and C++ runtime
dependencies where required, setup instructions, notices, and integrity records.
The packager copies an explicit file list and rejects ROMs, asset packs, saves,
and personal configuration. The source tree was also checked for pack signatures
and supported ROM fingerprints; existing imports in the user's external
application-data directory are not package inputs.

Both fresh 0.1 archives passed manifest and checksum verification after extraction
into paths containing spaces. The exact extracted Linux EarthBound frame-1,800
run and Windows Mother 2 frame-1,800 run under Wine reproduced the tested native
and adapted pixels and WAV bytes with the filter enabled. Linux loaded its own
three runtime libraries, with no SDL3 dependency. The Linux ZIP contains 21
regular files and the Windows ZIP contains 14. Root downloads and their
versioned copies are byte-identical; `linux-0.1.zup` is identical to the Linux ZIP.

| Archive | SHA-256 |
| --- | --- |
| `linux-0.1.zip` | `ab69c4dc4f26264bf56cf7911b9567a3dcda51047140563cad5960908857ac7e` |
| `windows-0.1.zip` | `d4033dac2eeaee775c31bb7cc516fc365c945b007af479d53392aafccc207c4e` |

The final audit checked all 346 tracked or unignored source/release files and
every ZIP entry. No supported ROM image or imported asset pack was present.

The Linux x86-64 binary requires glibc 2.43 and system desktop/graphics support;
SDL2 and generic x86-64 C++ runtimes are bundled in `lib/`. Generic CRT startup
objects avoid inheriting the build host's x86-64-v4 CPU requirement. Use the
source build on older distributions. Windows includes its SDL2.dll.
`SHA256SUMS` records every tracked or unignored source/release file except
itself. Git's `.git/` metadata and ignored build/verification outputs are not
part of that checksum inventory.

The loaded game has a persistent Settings/Fullscreen top bar, with the picture
fitted below it and Settings in a floating window. Its Assets tab lists both
default caches, confirms clearing only the chosen cache, and confirms restarting
into the selected game. Current gameplay can continue after clearing its cached
file because the assets remain in memory. Switching preserves normal SRAM and
display/fullscreen preferences; a missing selected cache opens ROM setup.
The startup importer itself has no gameplay bar. Cache administration never
deletes source ROMs, saves, custom pack files or the other game's cache.
