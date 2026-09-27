Phase Distorter @VERSION@ - Windows x86-64
EarthBound / Mother 2 PC port

Use Extract All to unpack this entire ZIP, then open its
Phase-Distorter-@VERSION@-windows-x86_64 folder and double-click Phase Distorter.exe.
Do not run the executable from inside the ZIP.
Keep SDL2.dll beside it. No compiler, batch file, or launcher script is needed.
A 64-bit Windows system with desktop OpenGL support is required. Windows builds
have been tested under Wine; native Windows validation remains outstanding.

On first launch, browse to or drag in a supported ROM from your own purchased
copy of EarthBound (US/English) or Mother 2 (Japan/Japanese), then click Import.
No ROM or extracted gameplay assets are included. Each unheadered image is
3,145,728 bytes; a 512-byte copier header is accepted. Patched ROMs and other
revisions are unsupported. Expected SHA-256 hashes:
EarthBound: a8fe2226728002786d68c27ddddf0b90a894db52e4dfe268fdf72a68cae5f02e
Mother 2:  1f8cfd13177d86b0eb2c8adcf9e1a4f0ec8966fa1583072b65a1b1c0e7961a5d

Importing leaves your ROM and executable unchanged. Later launches use the
local imported pack. Both games have their own program, language and saves.
The application remembers the last game played. To import or select a game
explicitly, open Command Prompt in this folder; examples:
  start /wait "" "Phase Distorter.exe" --import-rom "C:\path\to\mother2.sfc" --import-only
  "Phase Distorter.exe" --game mother2
  "Phase Distorter.exe" --game earthbound
The import example uses start /wait so import completes before the next command.

Controls: arrows move; Z=B, X=A, A=Y, S=X, Q=L, W=R; Enter=Start;
Right Shift=Select. Controllers are supported. F11 toggles fullscreen.
Once a game loads, the always-visible top bar has Settings (F1) and Fullscreen
(F11) buttons; the game picture fits below it. Settings opens a floating window
with display, assets and diagnostics tabs. Its Display tab includes widescreen
and the default-off Photosensitivity filter. Escape closes Settings or exits.
The game continues while Settings captures physical game input. The initial
ROM import view has no gameplay bar.
Fixed intro artwork uses a centered 4:3 view, then the selected aspect returns.
The Mother 2 logo screen extends its background into widescreen margins while
keeping the original logo and copyright centered.
The filter moderates identified flashing effects, including battle animations
and Franklin Badge lightning, while preserving ordinary picture pixels. It is
an independent implementation, not Nintendo's exact filter, and cannot guarantee
seizure safety or eliminate every trigger. Enable it before play with:
  "Phase Distorter.exe" --reduce-flashing

Settings -> Assets lists both games' default caches. Clear cached assets asks
for confirmation and removes only the chosen default .ebpak. The current game
continues using its in-memory assets. ROMs, saves, preferences, custom packs and
the other game's cache stay intact; directories and symbolic links are rejected.
Selecting the cleared game's default cache again opens ROM setup.
Switch game asks for confirmation and restarts the selected game. Save in-game
first; normal save persistence writes battery RAM before restarting. The game
uses its own default cache or opens ROM setup. Fullscreen/display settings carry
across. This menu selection ignores --assets and EB_ASSET_PACK overrides without
deleting those custom packs.

Assets, separate game saves and display preferences normally live at:
  %APPDATA%\ebsrc\EarthBoundCpp\
Use the game's normal save mechanism, then exit normally to write the save.
Back up earthbound.srm and mother2.srm before updating. Removing this extracted
folder does not remove the default saves or imported packs.
A fresh download can already play if that external user-data directory contains
an asset pack from your earlier import; this does not mean assets are in the ZIP.

Optional: double-click install-shortcuts.vbs to add Saturn-icon Desktop and
Start Menu shortcuts. These start the native executable directly. Rerun setup
after moving the folder. This setup is not needed to play.

If the application closes immediately, capture a log from Command Prompt:
  start /wait "" "Phase Distorter.exe" > phase-distorter.log 2>&1
  type phase-distorter.log
--help lists options; --no-config ignores saved display preferences.
This is a development release: whole-game and cycle-accurate equivalence have
not been established. The full source snapshot contains build instructions,
the detailed README, verification evidence, and documented fidelity limits.

MANIFEST.json lists packaged files, permissions and hashes. SHA256SUMS covers
those files and the manifest; it is an integrity record, not a signature.
See NOTICE.txt and licenses/ for source attribution and dependency licenses.
