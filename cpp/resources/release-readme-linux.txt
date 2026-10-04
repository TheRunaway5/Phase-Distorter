Phase Distorter @VERSION@ - Linux x86-64
EarthBound / Mother 2 PC port

This update fixes NPCs and props disappearing at the original viewport edges,
expands widescreen cutscenes and prayer apertures, corrects Giygas prayer-return
stalls, and replaces automatic dimming with console brightness and PSI/Giygas
feedback. PATCH-NOTES.md lists all changes since v0.2. Existing supported
imports, normal saves and older snapshots remain usable.

Extract this entire ZIP, then open its Phase-Distorter-@VERSION@-linux-x86_64
folder and run the native Phase Distorter executable directly. Do not run it
from inside the ZIP. No compiler or shell launcher is needed. From a terminal
in that extracted application folder:
  chmod +x "Phase Distorter"
  "./Phase Distorter"

Requirements: x86-64 Linux, glibc 2.43 or newer, desktop OpenGL support and the
system graphics/window/audio libraries used by your desktop. SDL2, libstdc++
and libgcc_s are supplied in lib/; keep that folder beside the executable.
Graphics drivers and glibc are system components and are not bundled. On an
older distribution, build from the matching full source snapshot instead.

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
explicitly, open a terminal in this folder; examples:
  "./Phase Distorter" --import-rom "/path/to/mother2.sfc" --import-only
  "./Phase Distorter" --game mother2
  "./Phase Distorter" --game earthbound

Controls: arrows move; Z=B, X=A, A=Y, S=X, Q=L, W=R; Enter=Start;
Right Shift=Select. Controllers are supported. F11 toggles fullscreen.
Once a game loads, the top bar has Settings (F1) and Fullscreen (F11) buttons.
Windowed mode fits the picture below it. Fullscreen hides the bar until the
pointer reaches the top edge; it then overlays the picture without resizing.
The Controller tab shows connected devices/live inputs and saves button remaps
and stick deadzone. Settings opens a floating window with Display, Controller, Assets, Diagnostics and Debug tabs. Its Display tab includes widescreen
and the default-off Photosensitivity filter. Escape closes Settings or exits.
The game continues while Settings captures physical game input. The initial
ROM import view has no gameplay bar.
Fixed intro artwork uses a centered 4:3 view. Animated Giygas static fills the
selected wide view while the original intro card stays centered.
The Mother 2 logo screen extends its background into widescreen margins while
keeping the original logo and copyright centered.
The optional filter uses the SNES Classic EarthBound brightness ramp (about
80% brightness) with temporal feedback for PSI effects and Giygas. It advances
once per completed game frame and includes widescreen margins. Full console
scene parity and medical safety are unverified. Enable it before play with:
  "./Phase Distorter" --reduce-flashing

Settings -> Debug offers infinite health and PSI/PP at 999/999, noclip, and
Enemies ignore you (overworld pursuit/contact only; story battles still work).
Player does max damage applies the source routine's maximum to successful player
damage, preserving immunity and zero-damage rules. Save state snapshots lets you
save named moments, load or refresh per-game lists and confirm deletion. Snapshot
loads validate format, game content and checksums before replacing play.
Search the teleport picker for any of 385 named areas, including interiors,
dungeons and endgame maps; all scripted warps and door landings are also listed
(1,472 choices). Select a place and press Teleport now. It fades fully to black
before loading the destination, then fades back in. Check Ness, Paula, Jeff
and Poo, then Apply party; keep one playable member. Guest companions stay.
Actions wait for free movement; close dialogue or finish the battle first.
Debug changes can affect saved progress and do not complete story events.
Cheat switches reset when restarting or switching games.

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
  ${XDG_DATA_HOME:-$HOME/.local/share}/ebsrc/EarthBoundCpp/
Use the game's normal save mechanism, then exit normally to write the save.
Back up earthbound.srm and mother2.srm before updating. Removing this extracted
folder does not remove the default saves or imported packs.
A fresh download can already play if that external user-data directory contains
an asset pack from your earlier import; this does not mean assets are in the ZIP.

Optional application-menu setup with English/Japanese actions and Saturn icon:
  chmod +x install-linux.sh
  ./install-linux.sh
This creates a per-user entry that starts the native executable directly. It
does not need administrator access; rerun setup if you move this folder.

If the application closes immediately, run it from a terminal to read the
error. --help lists options; --no-config ignores saved display preferences.
This is a development release: whole-game and cycle-accurate equivalence have
not been established. The full source snapshot contains build instructions,
the detailed README, verification evidence, and documented fidelity limits.

MANIFEST.json lists packaged files, permissions and hashes. SHA256SUMS covers
those files and the manifest; it is an integrity record, not a signature.
See NOTICE.txt, licenses/, and lib/PROVENANCE.md for attribution and licenses.

Timing and VRR
--------------
Expensive overworld entity updates receive extra CPU capacity to reduce the
original console slowdown. --original-timing restores the console CPU budget.
Settings (F1) > Display > Variable refresh rate (VRR) is optional and defaults
to off. Enable VRR in your display and graphics settings first. This checkbox
selects VRR-friendly application pacing; it does not enable driver VRR.
--vrr / --no-vrr override the saved choice. Fixed-refresh displays use a nearby
refresh divisor where possible, with playback audio matched to that cadence.

HIGHER FRAME RATES
F1 > Display > Frame rate: Native (default), 90-300 FPS, or Uncapped.
--fps 300 caps presentation; --fps 0 removes the cap. Game and audio speed stay
native. Interpolate frames generates intermediate overworld and battle pictures;
it adds one game frame of visual latency and can show blending artifacts. Turn
it off (or use --no-interpolation) for the original completed pictures. With VRR,
output stays below the display ceiling; without VRR, higher rates disable vsync
and may tear. Actual FPS depends on the computer, window system and driver.
