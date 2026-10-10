Phase Distorter @VERSION@ - combined Linux / Windows x86-64 launcher folder

Extract the complete Phase-Distorter-@VERSION@-launchers-x86_64 folder.
On Linux, run ./launch.sh or open launchers/linux/bin/eb_cpp directly.
On Windows, double-click launch.bat or open launchers\windows\bin\eb_cpp.exe.
Keep the directory structure intact. The Linux SDL2 runtime lives in
launchers/linux/lib/; C++ support is linked privately into the Linux application.
Windows SDL2.dll stays beside eb_cpp.exe.

Linux requires glibc 2.36 or newer and desktop OpenGL. Windows requires
64-bit Windows and desktop OpenGL. Windows checks use Wine; native Windows
hardware validation remains outstanding. No compiler is needed to play.

Import your own supported EarthBound (US) or Mother 2 (Japan) ROM on first
launch. No ROM, imported asset pack, save or personal preference is included.
Existing imports and saves remain in the external application-data directory:
  Linux: ${XDG_DATA_HOME:-$HOME/.local/share}/ebsrc/EarthBoundCpp/
  Windows: %APPDATA%\ebsrc\EarthBoundCpp\
Back up .srm files before updating. Extract updates into a fresh folder.

F1 opens Settings (Display, Controller, Assets, Diagnostics and Debug).
F11 toggles fullscreen. Arrow keys move; Z=B, X=A, A=Y, S=X, Q=L, W=R;
Enter=Start; Right Shift=Select. Controllers are supported and remappable.
Use --help for command-line options, --game earthbound / --game mother2 to
choose a game, and --no-config to ignore saved display/controller preferences.
The optional photosensitivity filter uses console brightness (about 80%) and
temporal feedback for PSI effects and Giygas. Visible enemies and text retain
their original colors/brightness. Full console scene parity is unverified.
Use 16:10 (Steam Deck) for 1280x800 and --fullscreen for desktop fullscreen.
--native-session N offers experimental native Continue for save slots 1-3;
full native integration remains in progress. Machine snapshots/debug controls
are unavailable in that route.

Optional menu/shortcut setup: ./install-linux.sh or install-shortcuts.vbs.
These create per-user shortcuts; keep this folder in place or rerun setup if
it moves. No installation is required to play.

PATCH-NOTES.md contains all changes since the previous release. VERSION identifies this
launcher snapshot. MANIFEST.json and SHA256SUMS record its payload and hashes.
NOTICE.txt, licenses/ and launchers/linux/lib/ document bundled dependencies.
This is a development release; the full native engine migration is in progress.

VERSION 0.4 PERFORMANCE UPDATE
Background tile-row and palette reuse, cheaper cached reads and reduced software
rasterizer coordinate work lower update CPU cost. A paired Twoson replay measured
about 19-20% less median CPU time; this is not a whole-game FPS guarantee. Game
updates still share the presentation thread, and uncapped output can remain
uneven under load. Rendering resolution, CRT quality and game/audio speed remain
unchanged. See PATCH-NOTES.md for scope and validation limits.
