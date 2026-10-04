# Phase Distorter v0.2 — draft release notes

Prepared October 4, 2026. Covers changes since the original v0.1 release on
September 27, including the current working-tree fixes packaged for v0.2.

This release improves widescreen presentation, motion, frame pacing, audio
delivery, controllers and debugging in both EarthBound and Mother 2. It also
includes substantial work on independent native engine components and the
organization of the source. The playable desktop application still uses the
compatibility game runtime; the full native engine migration remains in progress.

## Widescreen, ultrawide and scene fixes

- Expanded world rendering now uses published actor descriptors, including
  sprite parts clipped out of the original hardware object list. Nearby NPC,
  enemy and prop artwork is prepared separately from gameplay activation.
- Fixed streetlights, decorations and other prepared sprites being cut off
  inside the original viewport or disappearing with widescreen disabled.
- Reduced activation pop-in for presents, trash containers and the sparkling
  Your Sanctuary boss markers. Newly created props retain their artwork until
  the source publishes their first pose; opened, defeated and hidden states
  still follow the game's conditions.
- Corrected source/prepared NPC ownership during map loading and cutscenes,
  removing duplicate bodies and noninteractive previews. Newly created Saturn
  Valley actors retain their initial artwork through their first source draw.
- Lumine Hall's scrolling message stays within its authored 30-column wall
  patch, including direct scene rendering. The game's boss/story condition
  still controls when the message appears.
- Forest borders and the black void around caves and rooms extend naturally
  without pulling the presentation camera away from the player. Short road
  tunnels to Threed/Fourside and desert traffic retain their boundaries.
- Fixed the pyramid demo's scenery and party drifting outside its circular
  aperture at wide and ultrawide aspects.
- Preserved authored cutscene stages, prayer apertures and fixed black borders
  during direct rendering. Post-Giygas robot corpses keep their original
  centered framing, and departing souls travel beyond the full wide display
  before their source sprites are released.
- PSI animations use the wider battle canvas while targeted effects stay
  anchored to their enemy. Battle backgrounds remain visible through exit fades.
- The War Against Giygas still card uses its centered 4:3 composition. Animated
  Giygas static extends across wide margins; Mother 2's logo background extends
  while the original logo and copyright remain centered.
- Fixed repeated widescreen texture uploads turning black on the NVIDIA path.
- Added README screenshot pairs at 16:9, 21:9 and 32:9, showing identical
  gameplay frames with CRT effects off and on.

## Motion, performance and audio

- Added saved Native, 90–300 FPS and Uncapped presentation choices, with game
  logic and generated audio retaining their native cadence.
- Added direct overworld scene rendering with smooth camera/actor positions
  between game frames. Unsupported raster effects and battles retain completed
  game pictures; optional motion interpolation provides intermediate pictures.
- Added interpolation controls, scene-cut/history resets and an exact completed
  frame opt-out. Image-based interpolation adds one game frame of visual latency
  and can produce blending artifacts.
- Reduced original overworld slowdown with a bounded extra entity-update CPU
  budget. Hardware arithmetic, transfers and frame waits retain their timing;
  `--original-timing` preserves the original comparison path.
- Added host-owned overworld sprite allocation, custom/overlay artwork and
  active-actor edge retention. The experimental widening of source gameplay
  activation was disabled after reproducing sprite-pool exhaustion in the
  attract demo and Twoson; visual preparation supplies the wider view.
- Improved fixed-refresh pacing and matched playback audio to its cadence.
  Optional saved VRR pacing is available in Display settings and through
  `--vrr` / `--no-vrr`; driver/monitor VRR still needs its own configuration.
- Fixed short Windows waits rounding to roughly 16 ms and limiting high-FPS
  presentation. The updated wait path supports the requested higher caps.
- Bounded catch-up presentation starvation during sustained host load so new
  pictures continue to appear without dropping simulation or audio ticks.
- Reduced rendering cost by skipping disabled background layers and decoding
  tile rows once per scanline, preserving palette/scroll/transfer behavior.
- Added a 64 ms playback jitter reserve and audio underrun recovery. These
  improve delivery under delayed callbacks without changing generated PCM.
- Warm enabled CRT shaders before timed playback; Linux requests a foreground
  scheduling improvement when the existing account permits it.

## CRT and reduced flashing

- Added a saved, flat CRT filter based on CRT-Lottes Fast, with scanlines,
  aperture-grille shading and softness, preserving black and fractional motion.
  It uses no temporal blending.
- Matched direct-rendered and completed-frame CRT softness in both axes,
  including verification at multiple scales on Mesa and NVIDIA.
- Replaced selective effect suppression with automatic whole-picture dimming.
  The default-off Photosensitivity filter checks every completed frame for
  luminance, palette and pattern changes, immediately dims repeated flashing,
  and gradually recovers after a quiet period.
- Detection includes wide margins and the original center independently, so
  dark ultrawide borders cannot dilute a central flash. High-FPS direct redraws
  respect dimming, and catch-up frames advance detection exactly once each.
- Improved detection of small repeated SNES palette steps in Kraken, Starman
  and Giygas backgrounds. Added asset-backed PSI/background/status probes and
  fixtures for lightning, white-burst and warp-flash mechanisms.
- The filter is an independent implementation, with its scope and parameters
  documented. Exact Wii U/SNES Mini/Switch equivalence and medical safety have
  not been established.

## Controllers, Settings and debugging

- Corrected SNES Nintendo Switch Online A/B/X/Y labels and Linux USB/Bluetooth
  mappings, including shoulders, Start/Select and the D-pad.
- Added a Controller settings tab with connected-device information, live
  inputs, remapping of all 12 SNES buttons, stick deadzone and Restore defaults.
  Mappings persist beside display settings and honor `--config` / `--no-config`.
- Fullscreen hides the gameplay bar until the pointer reaches the top edge,
  then overlays it without resizing the game picture.
- Added Debug controls for infinite HP/PP at 999/999, noclip, enemy avoidance
  and playable-party selection. Story-triggered battles remain available.
- Added **Player does max damage**: successful damaging player attacks use
  the source damage routine's 65,535 maximum while retaining its immunity,
  zero-damage and enemy/ally rules.
- Added a searchable teleport catalog covering 385 named areas and all
  scripted warps/door landings, totaling 1,472 choices. Debug teleports fade
  fully to black before map loading and use the original arrival fade-in.
- Added named persistent save-state snapshots in Debug, with per-game lists,
  dates/frame numbers, save/load, refresh and confirmed deletion. Loads validate
  format, game content and checksum before replacing play; failed loads leave
  the running session intact. Snapshot restoration also restores debug switches
  and resets host presentation/audio history.
- Added `--replay-only` for deterministic desktop input replay without physical
  gameplay-button interference, while retaining window and Settings controls.

## Gameplay corrections

- Fixed the crash after Paula's party-join jingle by accepting the source's
  hidden sprite initialization marker until a visible frame is selected.
- Restored Threed/Threek's Investigator after Master Belch and kept the Ghost
  Enthusiast available afterward, preserving original placement, sprites and
  dialogue in both games. The Investigator's post-Belch condition follows an
  inference about the unused original appearance flag. Existing imports and
  normal saves need no conversion or reimport.

## Native engine and source work

- Introduced named source-derived C++ gameplay continuations for 808 US and
  783 Japanese dialogue, cutscene, entity, NPC and enemy routines, preserving
  instruction retirement and the original imported content.
- Split simulation, scene capture/rendering, presentation scheduling, desktop
  window/input, CLI/preferences, replay, storage and audio delivery into explicit
  owners. `GameSession` can be built and tested without SDL/frontend dependencies.
- Built independent native world modules for maps, terrain/collision, area
  palettes, map animation/streaming, actors and lifecycle, action programs,
  appearance resources, overlays, camera focus, pathfinding, enemy activation,
  contact and encounter-effect preparation.
- Built independent native party/story modules for formation, inventory, HP/PP
  rolling, RNG, dialogue control flow and substitutions, regional fonts, text
  windows, prompts/menus, Talk/Check, gifts, character growth and credits.
- Added native battle components for roster/admission, enemy/background artwork,
  startup, dead-player checks, names/grammar, shields/palette effects, PSI,
  targeting, initiative and turn scheduling. These are component-level migration
  results; the complete battle, startup and world-return flow is still open.
- Added a native save codec and Continue-prefix restoration work, plus source
  comparisons for input/control modes, walking, retained camera/actor identity
  and map transactions. A fully native desktop session remains unfinished;
  replacing the existing audio driver is outside the current migration scope.
- Renamed processors, registers, clocks and memory regions; separated hardware,
  PPU and game rendering; grouped generated code by subsystem/source routine
  with source indices and macro provenance. Regional metadata now uses named
  fields without changing its values.
- Added native migration, source-navigation, timing, debug and rendering guides,
  reference fixtures, differential traces, sanitizer checks and CPU-free linkage
  audits. UI verification serializes virtual-display use to avoid Xvfb races.

## Packaging, verification and updating

- Fresh Linux and Windows x86-64 bundles, plus a versioned combined launcher
  folder and ZIP. Each includes v0.2 identification, these draft notes,
  dependency notices, a file manifest and checksums.
- Canonical binaries/runtimes live under `launchers/`; downloadable bundles live
  under `releases/`. The new `refresh_launchers` build target and Linux build
  helper refresh launcher executables after a successful build.
- Packages use explicit file whitelists and preserve executable permissions.
  No ROMs, imported gameplay packs, saves or personal preferences are included.
- Verification expanded across both regional profiles: actor/artwork catalogs,
  4:3/wide/ultrawide edges, wall text, camera borders, PSI and flash mechanisms,
  snapshots, controller/UI behavior, hardware ordering and state/pixel/PCM parity.
- The automated Lost Underworld route covers all 29 placements, all three
  geysers, all five gifts, roaming enemies, the cage-opening event and the
  remaining Tenda/stone/phone/hotel/shop/sign interactions in both games.
  No gameplay defect was reproduced on those tested paths.
- Linux requires x86-64, glibc 2.43 or newer and desktop OpenGL. SDL2 and GCC
  runtimes are bundled; older Linux distributions need a source build.
  Windows requires x86-64 and desktop OpenGL; Windows execution is verified
  under Wine, with native Windows hardware testing still outstanding.
- Extract into a fresh folder and retain the existing external application-data
  directory. Back up normal `.srm` saves before updating. Snapshot files require
  supported format and matching game content.

The verification records describe bounded routes and component checks, not a
manual full-game playthrough, cycle-accurate console equivalence, or completion
of the native engine rewrite. High-FPS, physical VRR and controller behavior
depend on the host hardware and drivers. Detailed evidence and remaining work
are in the source snapshot's `cpp/STATUS.md` and `cpp/docs/`.
