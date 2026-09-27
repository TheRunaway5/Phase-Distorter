# Phase Distorter — version 0.1 release snapshot

Prepared 2026-09-27. Upload this directory's contents as the root of the fresh
repository. No remote repository was created or changed.

This snapshot was built independently using the root CMake project, without the
parent assembly tree or retail files. All eleven CTests passed on Linux and under
Wine. Four optional SPC
assembler fixtures explicitly skipped because the assembler was not installed
inside this standalone tree; the development checkout's full 15 translator
fixtures also passed. The newly compiled Japanese frame-900 native image,
expanded image, and WAV output exactly matched the earlier verified release
with the photosensitivity filter disabled.

Both code templates were independently checked to contain only zero bytes in
every imported range. Importing the two local supported ROMs reconstructed the
canonical fingerprints documented in `cpp/README.md`. Test ROMs, packs, output
captures, and generated build files were kept outside this directory.

All three Linux and all three Windows wrappers were tested from a directory
path containing spaces with explicit external asset packs. Both profiles ran
and exited successfully. Windows execution was under Wine. All shipped binaries
match the final tested packages. Full gameplay and hardware limits remain in
`cpp/STATUS.md`.

The optional F1 photosensitivity filter is disabled by default. It reduces
contrast, highlights, dominant reds, sharp patterns, and rapid color changes in
the presentation image. Paired Japanese 900-frame runs preserve native pixels,
audio, CPU/SPC state, and instruction counts; filtered output matches between
Linux and Wine. The US 900-frame filtered run also preserves native pixels and
audio. The packaged desktop frame-60 capture's game region matches the scaled
filtered picture below the menu bar; varied-pattern GL tests cover geometry and
orientation separately. All nine
preference and command-line cases pass on both platforms. Focused filter and
239 bus checks also pass ASan/UBSan. This is an independent implementation,
not a reproduction of Nintendo's exact filter or a guarantee of seizure safety;
see `cpp/docs/photosensitivity.md`.

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

Both exact 0.1 archives were extracted into fresh directories and launched
directly to ROM setup with empty, isolated user-data directories. Linux loaded
the three extracted runtime libraries and reproduced both games' filtered
frame-900 native/wide images, audio, and CPU/SPC state. Windows' extracted GUI
launch passed under Wine, with byte-identical binaries to its frame-900 tested
build. All archive file manifests, executable permissions, and checksums passed.

The Linux x86-64 binary requires glibc 2.43 and system desktop/graphics support;
SDL2 and generic x86-64 C++ runtimes are bundled in `lib/`. Generic CRT startup
objects avoid inheriting the build host's x86-64-v4 CPU requirement. Use the
source build on older distributions. Windows includes its SDL2.dll.
`SHA256SUMS` records every file in this snapshot (excluding only itself).

The loaded game has a persistent Settings/Fullscreen top bar, with the picture
fitted below it and Settings in a floating window. Its Assets tab lists both
default caches, confirms clearing only the chosen cache, and confirms restarting
into the selected game. Current gameplay can continue after clearing its cached
file because the assets remain in memory. Switching preserves normal SRAM and
display/fullscreen preferences; a missing selected cache opens ROM setup.
The startup importer itself has no gameplay bar. Cache administration never
deletes source ROMs, saves, custom pack files or the other game's cache.
