# Phase Distorter 0.3.1 — 2026-10-09

Changes since the packaged v0.3 build are in
[the v0.3.1 patch notes](releases/Phase-Distorter-0.3.1-patch-notes.md).

- Batch direct scene primitives with matching draw state and reuse atlas texture
  storage, reducing renderer cost while preserving source pixels and CRT quality.
- Add an opt-in imported-map renderer benchmark and dense tile regressions.
  Expensive game updates still block presentation; uncapped stability remains open.
- Make glibc 2.36 the standard Linux release baseline, with private static C++
  support and SDL2 2.32.10, including the GCC 12 native-menu coroutine ownership fix.
- Rebuild both canonical launchers and provide Linux, Windows and combined
  v0.3.1 bundles with manifests, checksums, notes and a source/build record.

# Phase Distorter 0.3 — 2026-10-09

Complete changes since the actual packaged v0.2.1 source snapshot are in
[the v0.3 GitHub release draft](releases/Phase-Distorter-0.3-patch-notes.md).

- Fix Teleport α arrival with sparse party actor roles and missing NPCs/props
  during widescreen initial-map and vertical-row loading.
- Add `--fullscreen`, label 16:10 for Steam Deck, move supported world menus to
  the wider left edge, center the Giygas intro card and extend coffee/tea scenery.
- Preserve visible enemies and text through photosensitivity filtering; fix
  desktop metadata setup and retain intro feedback through holds and flashes.
- Save snapshot format 9 while retaining loading support for formats 1–8.
- Add the optional `--native-session N` Continue route with integrated native
  world menus, field actions, encounters/battles, doors, town maps and PSI travel.
- Expand native cinematic, graphics, dialogue, retained-state and source-work
  implementations and regional source comparisons. Whole-engine and physical
  cutscene acceptance remain open; the regular session remains the default.
- Add a separate Linux compatibility package targeting glibc 2.36, covering
  glibc 2.37 hosts, with rebuilt SDL2 and statically linked C++ support.
- Rebuild Linux and Windows launchers and supply separate and combined v0.3
  bundles, manifests, checksums and a build record for manual GitHub upload.

# Phase Distorter 0.2.1 — 2026-10-04

Complete changes since the packaged v0.2 build are in
[the v0.2.1 patch notes](releases/Phase-Distorter-0.2.1-patch-notes.md).

- Preserve the original horizontal NPC scan and add the wider scan afterward,
  fixing people, lamps, presents, containers and sanctuary markers disappearing
  when entering the original viewport. Cover both regions and execution paths.
- Extend scripted map cutscenes and the robot ending across widescreen without
  changing the source camera or scene timing. Expand captured prayer apertures
  around their original focus, preserving their shape.
- Add ultrawide capture padding to prevent black edge strips during fractional
  camera interpolation.
- Replace temporary automatic dimming with the recovered SNES Classic brightness
  ramp and PSI/Giygas temporal feedback, processed once per completed game frame.
- Preserve suspended battle PSI state during prayer cutscenes, fixing prolonged
  stalls after battle return and supporting mid-prayer snapshot restoration.
- Save snapshot format 7 with aperture, prayer/filter context and pending NPC
  scans; retain loading compatibility with formats 1–6.
- Rebuild both launcher applications and provide v0.2.1 Linux, Windows and
  combined launcher bundles, notes, version records and integrity metadata.

# Phase Distorter 0.2 — 2026-10-04

Draft release notes covering the original September 27 v0.1 release through
October 4 are in [the complete v0.2 notes](releases/Phase-Distorter-0.2-patch-notes.md).

- Keep the post-Giygas robot corpses in their original centred framing and carry
  departing souls completely off the widescreen display before source release.
  Preserve the original scene timing, native picture, and snapshot continuation.

- Replace selective flash suppression with automatic whole-picture dimming:
  analyze every completed frame for luminance, palette and pattern changes,
  dim immediately during flashes, and restore brightness after a quiet period.
  This replicates the requested behavior with independently chosen parameters;
  exact Wii U equivalence remains unverified.
- Detect small repeated SNES palette steps in Kraken, Starman and Giygas
  backgrounds, with asset-backed PSI/background/status checks and fixtures for
  the requested lightning, white-burst and warp-flash mechanisms.

- Keep scripted cutscene stages and prayer apertures inside their authored
  screen, including fixed black borders during direct-render interpolation.
- Respect source NPC ownership after map loading and during cutscenes, removing
  duplicate bodies and noninteractive previews. Preserve initial artwork until
  the first source draw so newly created Saturn Valley actors do not blink out.

- Let natural forest borders and cave/room voids extend without widescreen
  camera correction, while retaining the boundaries around desert traffic
  and the short road tunnels to Threed and Fourside.
- Prepare present/trash-container poses and sanctuary boss markers throughout
  widescreen margins, and preserve prop artwork between source creation and
  first source draw to remove activation pop-in.

- Keep Lumine Hall's scrolling message inside its authored wall patch, including
  the direct scene renderer.
- Draw eligible prepared NPCs and decorations across the original viewport as
  well as widescreen margins, fixing clipped streetlights and missing props
  when widescreen is disabled.
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

## Native component migration

- Add independent native world, map/collision/streaming, actor/action, camera,
  overlay, enemy/contact and encounter-effect components.
- Add native party, inventory, meters/RNG, dialogue/fonts/windows/menus,
  Talk/Check/gifts, growth, credits and battle startup/target/turn components.
- Add a native save codec and Continue-prefix work with source comparisons,
  sanitizer checks and CPU-free linkage audits. The desktop still uses the
  compatibility runtime; full native session integration remains in progress.

## CRT and audio delivery

- Add saved flat CRT-Lottes Fast effects without temporal blending.
- Add a 64 ms audio jitter reserve and underrun recovery, bounded catch-up
  presentation starvation, scanline tile-row decoding, disabled-layer pruning
  and startup CRT warmup while preserving generated PCM and game state.

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


- Add a Debug tab with infinite HP/PP at 999/999, maximum player damage, noclip, enemy avoidance,
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

- Build v0.2 Linux/Windows bundles and a combined versioned launcher folder/ZIP,
  including draft patch notes, version records, notices, manifests and checksums.
- Add `refresh_launchers` and have the Linux build helper refresh its executable.

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
