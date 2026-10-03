# Unreleased

- Restore Threed's Investigator after Master Belch and keep the Ghost Enthusiast
  available afterward, with their original placements, sprites and dialogue in
  both EarthBound and Mother 2.
- Correct SNES Nintendo Switch Online face buttons and Linux USB/Bluetooth
  mappings; add a Controller settings tab with live inputs, saved button
  remapping, stick deadzone and default restoration.
- Add named save-state snapshots to the Debug GUI, with persistent listing,
  saving, loading, refresh and confirmed deletion for each game.
- Fix the crash after Paula's party-join jingle by retaining the source's hidden
  actor initialization marker until a visible sprite frame is selected.
- Keep the pyramid demo's scenery and party aligned with its fixed screen
  aperture in wide and ultrawide views.
- Store overworld actor graphics in host-managed resources, prepare nearby
  NPC/enemy artwork, and retain active actor graphics beyond the original cull.
- Select an explicit actor clock independently of graphics storage; preserve
  the original resource and timing path with `--original-timing`.
- Keep CRT Filter softness consistent between completed-frame and direct scene
  rendering, verified on NVIDIA and Mesa.
- Fade debug teleports fully to black before loading the destination, then use
  the native fade-in at arrival.
- Extend the intro's Giygas static across widescreen and ultrawide margins while
  preserving the original center artwork and the still card's 4:3 composition.

## Module ownership

- Make `GameSession` own deterministic simulation, processor/DSP lifetimes, diagnostics and completed-frame observers without SDL or filesystem dependencies.
- Make `PresentationPipeline` own frame history, filtering and deadline coordination for Native, high-FPS and VRR presentation.
- Move scene buffers and caches into `GameSceneRenderer`, fed by synchronous read-only hardware views.
- Reduce the desktop application to composition; isolate display/input, CLI/preferences, storage and audio output.
- Add `--replay-only` for desktop replay validation independent of physical gameplay buttons.
- Serialize virtual-display UI tests to avoid parallel Xvfb display-number races.

## Source organization

- Name the main CPU, audio CPU, DSP, registers, clock units and memory regions explicitly.
- Separate memory/timing, PPU register access, native rendering and game-specific scene rendering into descriptive files.
- Group generated instructions by their original subsystem and routine, with source indices, macro-call provenance and explicit unresolved names.
- Replace positional regional metadata with named character, battle, party, teleport, timing and rendering fields.
- Preserve the existing executable instruction streams, including earlier widened culling constants, and add a source-navigation guide.

## Frame rate, timing and optional VRR

- Add saved Native, 90–300 FPS and Uncapped presentation choices, independent of gameplay/audio speed.
- Add optional motion-based intermediate frames for overworld and battle pictures, with scene-cut/history resets and an exact-frame opt-out.
- Reduce overworld slowdown with a bounded extra entity-update CPU budget; retain hardware arithmetic, transfers and wait timing.
- Stabilize fixed-refresh presentation and match playback audio to its cadence.
- Use precise SDL-backed Windows waits; avoid 3 ms presentation sleeps rounding to approximately 16 ms.
- Add a saved, default-off VRR pacing toggle in Display settings and --vrr / --no-vrr overrides.


- Add a Debug tab with infinite HP/PP at 999/999, noclip, enemy avoidance,
  party selection, and a searchable teleport picker covering all 385 named
  areas plus every scripted warp and door landing (1,472 choices).
- Hide the fullscreen top bar until the pointer reaches the top edge; reveal
  it over the picture without changing the viewport size.
- Draw active world entities across the wider view from their published sprite
  descriptors, preserving original spawning, hidden states, and game timing.
- Fit every PSI animation across the wider canvas while keeping targeted effects
  anchored on their enemy; retain battle backgrounds through the exit fade.
- Consolidate native executables and runtime libraries under `launchers/` and
  downloadable archives under `releases/`, removing duplicate root files.
- Package releases from those canonical inputs without recreating root aliases.

# Phase Distorter 0.1 — 2026-09-27

- Standalone C++20 source snapshot with compiled US and Japanese program profiles.
- Direct native Linux `Phase Distorter` and Windows `Phase Distorter.exe`
  applications beside the README; no shell or batch launcher needed to play.
- SDL2/OpenGL video, controller input, audio and saves.
- First-run own-ROM import with validation and local asset packs.
- Mother 2 Japanese program, fonts, text and assets; separate saves for each game.
- Always-visible gameplay bar with Settings (F1) and Fullscreen (F11), a floating
  Settings window, and a game picture fitted below the bar.
- Settings Assets tab lists both default caches, offers confirmed cache clearing
  without deleting ROMs or saves, and confirms game switching with normal SRAM
  persistence and retained display/fullscreen preferences.
- Persistent aspect preferences and read-only game diagnostics.
- Widescreen scene rendering with unchanged gameplay and spawning, battle patterns,
  Lumine Hall text, and presentation camera boundaries for narrow map regions.
- Fixed intro artwork uses a centered 4:3 view; the Mother 2 logo screen extends
  its background into widescreen margins without stretching or repeating the logo.
- Deterministic verification tools and documented fidelity limits.
- Phase Distorter branding and Saturn launcher/window icons on both platforms.
- Optional per-user Linux menu and Windows Desktop/Start Menu shortcut setup,
  targeting the native applications directly; Windows setup can be opened as
  `install-shortcuts.vbs`.
- Direct source-build installation with `cmake --install build --prefix dist`;
  optional developer launch scripts retain local-build priority.
- Expanded installation/build guide and explanatory source comments.
- Default-off photosensitivity filter scoped to identified flashing effects,
  including battle animations and Franklin Badge lightning; ordinary picture
  pixels retain their original colors and sharpness.
