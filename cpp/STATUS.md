# Port verification record

This records the independent C++ port's evidence, updated 2026-10-04. Build and
launch instructions are in the standalone [project README](../README.md). The implementation and all
new tests live in `cpp/`; the pre-existing C runtime and decompilation tools are
not inputs to this build.

## Scene-aware widescreen borders — 2026-10-04

Forested borders in Twoson, Threed, Saturn Valley, Peaceful Rest Valley and
Winters, and authored cave/room voids, now follow the source camera without
sector-span correction or clipping. Out-of-area tiles still use the current
area's metatile zero. Road tunnels to Threed/Fourside, desert traffic and
unclassified combinations retain their existing boundaries and easing. Screen
windows keep their authored framing, and the snapshot layout is unchanged.

The camera-path suite passes 27,568 checks across both regional profiles and
eight widths from 258 to 1024 columns, including every natural-border
combination, both edges, narrow spans, repeated captures and the existing
snapshot/window/arrival checks. Imported map fixtures pass 4,437 checks per
region: both ends of five road tunnels, both desert traffic rows, Threed forest
and sanctuary cave borders, and real Peaceful Rest/Winters forest seams at
widescreen and ultrawide widths. Forest seams introduce zero correction.
Linux and Windows binaries under Wine pass both suites. All 11 related Linux
rendering, sprite, hardware and snapshot CTests pass; the hardware fixture now
uses the constrained tunnel combination and separately verifies visible natural
metatile-zero continuation without changing the canonical center or memory.

Six deterministic US sessions compare the prior and current renderer after
2,182 frames each, with real OpenGL captures at 2560×720, CRT off/on. Forest and
cave framing changes; Threed/Fourside tunnel and desert traffic pictures remain
pixel-identical. Native-picture, audio and SRAM hashes, CPU/SPC register text,
instruction counts and clocks match between each pair. The imported assets and
user save are read only; temporary scene coordinates/flags and debug traversal
settings exist only in memory. These are software-rendered captures and bounded
replays, not a manual full-game playthrough or native Windows GPU verification.

Both desktop applications and release ZIPs are refreshed. Each extracted
package passes a 1,200-frame 32:9 headless boot for both imported games;
Windows runs use Wine. ZIP integrity and packaged executable identity checks
pass, and the README's sanctuary CRT off/on pair reflects the new framing.

## Lost Underworld content route — 2026-10-04

The optional `lost_underworld_reference` uses the user's imported game assets
and a synthetic four-character save held only in memory. It runs the current
source-derived gameplay scheduler with both original and host-owned sprite
resources; it is not a standalone native-engine scene. Coverage includes:

- All 29 authored placements, duplicate suppression, the village gate's
  appearance flag, five encounter tables, and small sprites for all four party
  members.
- All three geysers over 5,000 hardware frames each: idle/eruption poses,
  visible native artwork, repeated eruptions, quake and party-lift tasks, blue
  HP/PP target recovery, red ailment recovery, and a later eruption outside the
  strict four-pixel contact radius that must not heal or cure the party.
- All five gift boxes: the actual authored reward, opened flag, and no second
  reward after reloading the area and checking the opened box.
- Natural spawn-strip traversal that admits Wetnosaur, Chomposaur and Ego Orb,
  with observed changes in live enemy coordinates.
- The cage-opening event, Tendakraut consumption, permanent gate/boss flags,
  and all 20 remaining Tenda, talking-stone, phone, hotel/shop and sign
  interactions. Each must read its authored dialogue entry and close its
  window; the talking stone must set its first-conversation flag.

The route passes in EarthBound and Mother 2, using original sprites at 256
columns and native sprite resources at 426 and 522 columns respectively.
Software captures of all three geyser eruptions and roaming enemies were
inspected. No production gameplay defect was reproduced on these paths.
Independent original-code comparisons also pass in both regions for NPC
placement/talk/check/map text, sprite poses, terrain collision, doors, enemy
spawning/behavior/contact and battle entry. The 12 related registered CTests
pass.

Debug teleports retain the game's fade/map-loading/activation sequence. The
fixture uses enemy avoidance to keep unrelated battles from interrupting its
interaction assertions, and temporarily uses noclip for traversal/approach.
Ordinary collision, pursuit, contact and battle entry are covered by the
separate source comparisons. This is automated software-rendering and bounded
interaction evidence, not a full manual playthrough, every shop/save/story
branch, or native Windows GPU validation. Reproduction commands are in
[the debug-tool guide](docs/debug-tools.md#lost-underworld-content-route).

## Wall text and prepared sprite visibility — 2026-10-04

Lumine Hall displays the source's 30-column scrolling wall patch without
extending the rest of the prepared message beyond its sides. The direct scene
cache uses the displayed tile entry, including that patch. Prepared stationary
NPCs and props retain their complete artwork through the original viewport;
active identities, appearance flags, scene gates and water-overlay requirements
continue to suppress ineligible previews. Neither repair advances game scripts
or changes source memory.

The pop-in follow-up adds source-verified previews for fixed-surface props,
present/trash containers and sanctuary boss markers. Opened and defeated flags
remain authoritative. Source CREATE can publish an NPC identity one frame before
selecting its image; the preview now bridges that exact birth state while
selected, explicitly hidden, relocated and changed-script actors keep ownership.
Adding preview families does not change the existing source retention policy.

The 548-check bus fixture covers both regions, both half-tile text phases, four
widths and three camera positions, with exact direct-scene reconstruction. The
imported renderer fixture checks all 1,582 authored placements per region at
widths 256, 398, 522, 800 and 1024, both outer edges, native viewport seams and
source draw limits. It exercises selected artwork through the ordinary draw
callback or far-edge continuation, plus every eligible dormant flag variant:
297,150 catalog edge cases across the two regions. Further checks cover gifts,
trash containers, streetlights and two sanctuary markers while scrolling,
actual CREATE/first-pose handoff, opened/defeated states, hiding, relocation,
resource-only readiness, vertical overscan and fractional-frame rendering.
The source oracle compares 1,533 first-pose candidates and all four boss marker
rotations per region. Resource readiness compares 4,290 source selector calls,
296 sprite groups and 210,834 shared authored variants per region. Existing NPC
and enemy preload source references also pass in both regions.

Linux and Windows launchers and all test targets rebuild successfully. Both
platforms pass all 227 non-optional CTests; the 38 optional CTest references are
then explicitly run with US and Japanese packs and pass. An additional 87
unregistered reference programs, four native asset/catalog programs, the
presentation scene fixture and nine runtime/GPU probes are exercised. All
rendering, sprite, resource-readiness and preload checks pass on Linux and the
Windows build under Wine, including 9,000-frame ultrawide demo, gameplay, tick
and host-resource comparisons. The source-backed presentation fixture passes
3,583 checks per region and the native world scene passes GPU readback.
Broad testing corrected stale expectations for the implemented US dialogue
width helper, three implemented enemy owner services, the current reachable
appearance-site inventory and Windows text line endings. Gameplay implementation
did not change for those checks. Windows test-only compiler DLLs are staged in
the ignored build directory; release executables do not require them.

The broader run still has two unresolved results. The independent native-engine
`native_world_map_load_reference` fails in both regions at map (4096,5120),
flags zero and flavor 1: source loading creates two enemies while native loading
creates none, and RNG state differs. Its fixture and implementation are unchanged
by this rendering repair. The Japanese `native_sprite_steady_reference`
`--same-clock-state` route cannot reach its source-ready event within 18,000
frames, with either the existing save or a valid temporary regional save; that
route remains unverified. The US route passes. The 900-frame session-composition
probe passes in both regions/timing modes but covers title/menu state with zero
native gameplay batches; longer host-resource probes provide separate gameplay
evidence. These results prevent a claim that every repository check passes.

Both launcher binaries and release ZIPs are refreshed. ZIP CRCs, every payload
hash and extracted executable identity pass; extracted packages each complete
1,200 headless frames with both regional packs and a configured 32:9 aspect,
with save and preferences persistence disabled. Root and release checksum
manifests verify successfully.

An asset-backed runtime capture places the first sanctuary marker in a
1024-column margin, and a native-width Threed capture retains the streetlight.
The user confirmed the post-boss Lumine Hall wall repair. This covers imported
artwork, bounded scripted paths and captures; it does not establish every story
branch, moving-actor lifetime, natural boss playthrough or native Windows GPU
behavior. Unsupported dormant programs still require actual source actors.

The latest Linux launcher now selects host-owned overworld sprite resources and
an independent actor-clock policy. Both regional demo cycles and same-clock
Twoson state comparisons pass; the pyramid aperture fix and CRT softness also
pass presentation checks. See the detailed [native resource verification](docs/native-engine.md)
for the timing contract, source-oracle results and remaining engine boundaries.
The Windows and packaged-release evidence below predates this Linux cutover.

The desktop is composed from explicit module owners. `GameSession` contains the
hardware/processors/debug lifetime and exposes frame advancement, audio, save
memory and diagnostics without SDL or file access. `GameSceneRenderer` receives
read-only hardware views and owns presentation caches. `PresentationPipeline`
contains frame history, filtering/interpolation and host pacing; `DesktopDisplay`
contains window, UI and physical input. CLI/preferences, input replay, persistence
and audio output have focused modules. `--replay-only` suppresses physical game
buttons while retaining desktop/UI events.

## Native engine migration — in progress

The accepted goal is a fully native game pipeline without CPU/SPC execution or
emulated graphics storage. The current game still uses the compatibility
runtime. Independent native modules now own sprite resources/appearance, NPC
content, area palettes, compiled action scripts, named actor operations, the
actor scheduler, maps, collision content and map animation. Source comparisons
cover both regions, and whole native scenes pass GPU readbacks. A native-only probe runs 464
moving actors with matching simulation at native/wide presentation widths;
2,000 scripted actors and 20,001 graphical actors pass separate lifecycle tests.
These modules are not yet integrated into GameSession.
See [the migration record](docs/native-engine.md) for the evidence and open work.

The interim desktop fix disables widened source actor activation to avoid the
original sprite-pool exhaustion. Both 9,000-frame regional demos and a 5,200-frame
Twoson route pass their native-width comparisons. The flat CRT's direct path now
matches both-axis softness at tested 3x, 4x and 5x scales on Mesa and NVIDIA.

## Teleport fades and intro static — 2026-09-29

Debug warps call the source fade-out without mosaic, hold black through two
native frame waits, then load the map and use the original fade-in. Requests
stay busy throughout that sequence and cannot publish a destination early.
The intro's Giygas interference uses the selected wide canvas, extends its BG2
animation/color math into both margins, and leaves the native card pixels exact.
The still card returns to its 4:3 composition when interference is disabled.

The 194-check widescreen fixture covers both regions, wide/ultrawide margins,
native-center identity, effect references and the still-card transition. Imported
frame-1,200 pictures use 398 and 522 columns for EarthBound and Mother 2; the
Windows pictures under Wine exactly match Linux. The debug fixture contains
3,061 checks, including keeping the destination unset during fade and blackout.
All 30 native CTests pass; the widescreen/debug fixtures also pass under Wine.
Native asset-backed routes in both games verify seven exact-coordinate arrivals
each, with 15–16 fade-out brightness levels, a complete black widescreen frame
before the load starts, and full brightness after arrival.

## Source-derived gameplay runtime checkpoint — 2026-09-29

The default backend now executes 808 US and 783 Japanese source-owned routines
through independent named C++ semantics, under `generated/{us,jp}/game/` folders
for dialogue, cutscenes, entities, NPCs and enemies. These preserve machine-state
continuations and instruction retirement; they are not hand-decompiled high-level
gameplay systems. Shared gameplay services retain the original compiled executor.
Authored dialogue/scripts/placement/enemy records still come from the local import.

All 29 final native tests have passed (28-test combined suite, then the added
and strengthened fixtures). Windows passed the 22-test isolated executable suite
and 14 affected integrated tests. Both regions pass 900-frame comparisons under
both timing policies on Windows. Separate native audit replays match through
26,097 US frames and 15,000 Japanese frames for each policy, including ordered
hardware accesses, state, callbacks, pictures and PCM. These are bounded paths,
not a complete playthrough or proof of every dialogue/scene branch.

Both launcher executables and ZIPs now include this runtime, the separately
completed direct scene renderer, and its widescreen startup fix. Extracted
packages match their tested binaries and pass regional Linux/Wine image/audio
comparisons plus visible 21:9 startup checks. See [game runtime](docs/game-runtime.md)
for ownership, reproduction commands and the distinction between this checkpoint
and a future high-level gameplay rewrite. Older evidence below describes its
stated historical checkpoint.

## Implemented

The US EarthBound and Japanese Mother 2 assemblies are rebuilt into compiled C++ instruction
sites, including macro expansions, runtime M/X immediate widths, and the SPC700
sound driver. Builds use metadata-only asset placeholders. The executable embeds
source-declared instruction bytes only; game data comes from a local asset pack
extracted from the player's own supported ROM. The pack selects its matching
program and rendering metadata; default packs and saves are separate by version.
There is no runtime
instruction-decoder fallback.

The executable includes CPU state and instruction semantics, HiROM/WRAM/SRAM,
controllers, interrupts, DMA/HDMA, scanline PPU rendering, SPC execution, DSP
synthesis, SDL2 keyboard/gamepad input and audio, and an OpenGL display. Desktop
SRAM persistence uses an atomic file replacement. Headless frame/step limits,
frame-indexed input scripts, PPM/GL screenshots, and WAV capture support
reproducible verification.

The gameplay bar exposes Settings (F1) and Fullscreen (F11), with
the picture fitted below it. The floating ImGui Settings window provides aspect
preferences, read-only diagnostics and an Assets tab for both default caches.
In fullscreen the bar appears only at the pointer's top-edge hover and overlays
the full-height picture. The Debug tab adds opt-in infinite HP/PP (999/999),
noclip, enemy avoidance, playable-party selection and 1,472 searchable teleport
destinations covering 385 named areas and every scripted warp/door landing.
Regional source metadata supplies the existing party and instant-warp routines;
commands wait for the main loop's free-movement boundary. Details and reproduction
commands are in [docs/debug-tools.md](docs/debug-tools.md).
Confirmed cache clearing removes only the selected regular `.ebpak`; current
gameplay retains its in-memory assets. Confirmed switching restarts the selected
game, preserves normal SRAM and display/fullscreen preferences, and opens ROM
setup if its default pack is missing. Custom asset overrides do not control an
intentional menu switch and their files are never deleted. The startup importer
has no gameplay bar. A separate wider presentation buffer draws existing scene data without changing
emulated camera coordinates. All desktop widths now retain the original source
entity activation region. Its experimental expansion caused pool exhaustion and
is disabled until host entity/resource ownership replaces it.
The original 256×224 framebuffer remains available for strict comparisons.
Active world sprites now extend from the source's published entity descriptors,
including parts clipped out of OAM, while invisibility and allocation remain
unchanged. PSI animations fit the wider canvas with their target anchors
preserved. Battle-exit fades retain the battle background until it is black or
replaced, even after the game clears its battle-mode flag.
An optional, default-off photosensitivity filter changes only the presentation
pixels of identified flashing effects, including battle animations and Franklin
Badge lightning. Ordinary picture pixels remain unchanged. It advances once
per completed game frame, including frame
boundaries crossed inside DMA, independently of host display pacing. Details
and limitations are in [docs/photosensitivity.md](docs/photosensitivity.md).
Fixed intro artwork uses a native-width canvas displayed at 4:3; the selected
wider view returns after the scene. The Mother 2 logo screen carries its
background edge colors into the widescreen margins while preserving the
original foreground and copyright in the center.

See [TRANSLATION.md](TRANSLATION.md) for the source mapping contract and counts;
the US source has 119,472 original 65816 instruction sites and the Japanese
source has 113,730. Both use the same 2,163-site SPC700 driver. Additional
overlapping 65816 entries preserve runtime width behavior. Every retained code
byte matches its respective supported donor image, and filling the imported
data ranges reconstructs each image's complete SHA-256 fingerprint.

The source navigation pass names the main processor `MainCpu65816`, the audio
processor `Spc700AudioCpu`, the hardware model `SnesBus`, and audio synthesis
`SnesAudioDsp`. Architectural registers have descriptive member names. Hardware
memory/timing, PPU register access, native rendering and game-scene presentation
have separate source files. Generated game code is grouped by its assembly
subsystem and source routine, with indices that preserve original addresses,
macro provenance and explicitly unresolved names. Regional metadata uses named
fields; all 125 numeric values per region were compared with the pre-rename
metadata and remained unchanged. This organization makes existing implementation
ownership visible; it does not establish new gameplay or console fidelity.
See [source navigation](docs/source-navigation.md).

## Evidence

- The combined checkout, including the separately completed interpolation and
  entity-preload changes, passes all 20 native Linux CTests and all 19 Windows
  C++ tests under Wine/Xvfb. The isolated module-refactoring checkpoint passed
  19 native tests and 18 Windows tests. The Windows run excludes Python
  translation fixtures; its asset-cache symlink cases explicitly skip because
  Wine cannot create them. The tests include session lifecycle and observers,
  independent scene-renderer ownership, presentation scheduling/history, entity
  preloading, and 60 desktop support contracts covering options/preferences,
  replay, persistence and audio.
- A separate SDL-free, frontend-disabled build compiles and passes
  `game_session_tests`, exercising the session without desktop dependencies.
- Native Linux and Wine asset-backed session/direct-core comparisons pass for
  EarthBound and Mother 2 through 900 frames under both original and enhanced
  timing policies. Each comparison preserves completed-frame callbacks, PCM
  audio and machine state. These are bounded boot slices, not full playthroughs.
- Native Linux and Wine source-backed rendering fixtures pass 73 scene checks
  per region and all 34 PSI sequences with 2,126 rendered frames per region,
  covering both battle layer layouts. These fixtures validate sampled map
  boundaries and authored animation mapping; they are not natural visits to
  every map or live battles with every effect.

- Refactor-only before/after Linux replays complete 16,000 US and 15,000 JP
  frames with identical final registers, instruction counts, native/presentation
  captures and complete WAV bytes. Shared-machine elapsed times rose about 3%;
  these are approximate throughput observations, not controlled benchmarks.
- The final combined ZIPs pass manifests, executable parity and permissions.
  All 20 packaged checks (two platforms, two regions, headless/Native/300 FPS/
  Uncapped/VRR) preserve final state, counters, native captures and WAV bytes
  through 180 frames. Windows runs under Wine; physical VRR remains unverified.

- September 29 timing update: all 14 Linux CTests pass. Both regional compiled
  entity stress fixtures retain ordered writes and movement callbacks while a
  30-entity pass drops from 920,660 to 241,299 master clocks. Ordinary and
  pending-upload passes retain native timing. Hardware arithmetic, DMA,
  interrupt and frame-wait boundary checks pass; the timing fixtures also pass
  under Wine. See [timing policy](docs/timing.md) for precise scope.
- Fixed-refresh tests cover 60/75/120/144/240 Hz under 0.2/8/12 ms workloads and
  injected stalls. A live Linux run presented all 300 frames in 5.000 seconds at
  60 Hz with no catch-up skips. VRR defaults off; Linux and Wine/X11 UI clicks and Linux CLI persistence
  passed. Physical variable-refresh scanout and native Windows remain unverified.
- The improved application's 26,097-frame US exploration and 15,000-frame JP
  new-game replays completed. These are bounded gameplay checks, not claims
  that the new policy preserves every original frame-indexed replay position.

- September 29 debug tools: all 14 Linux CTests pass, and all 14 pass under Wine.
  The 3,055-check debug fixture validates both regions and all 1,472 catalogue
  entries. Asset-backed EarthBound and Mother 2 routes exercise party changes,
  seven exact-coordinate teleports across towns/interiors/endgame maps, and
  noclip through a blocking wall. SDL/ImGui tests cover the four switches,
  party editing, searching/selecting Sea of Eden, and fullscreen hover behavior.
  A 20,295-frame comparison with the controller disabled preserves CPU/SPC
  state, all game/entity/PPU memory, clocks, 61,451,822 ordered writes, audio
  and native pixels. See [debug tools](docs/debug-tools.md) for scope and limits.
- September 29 widescreen update: all 12 Linux CTests pass. The new 172-check
  widescreen fixture and existing 300-check bus fixture also pass under Wine.
  The widescreen tests cover both regions, left/right entity margins, hidden
  entities, synchronization with OAM uploads, targeted PSI in both background
  layouts, and battle fades after the mode flag clears. No gameplay or spawn
  routines were changed.
- All 34 imported PSI animation sequences in each game pass frame-by-frame
  rendering comparisons in both battle layer layouts: 2,126 rendered frames
  per game, including selected ultrawide frames. The source-target anchor and
  flash-filter metadata have separate synthetic checks. This does not establish
  live visual coverage of every battle or unrelated effects.
- The updated 20,295-frame EarthBound route preserves all CPU/SPC, game/entity/
  PPU memory, clocks, ordered writes (61,451,822), audio (10,806,203 frames), and
  native pixels with changing presentation widths. Mother 2's 1,200-frame
  comparison passes as well. The rebuilt release ZIPs pass extraction,
  manifests, permissions, and checksums in paths with spaces. Exact packaged
  Linux and Wine runs of both games through frame 1,800 match native/adapted
  pixels, WAV bytes, and CPU/SPC summaries; Linux loads its packaged runtimes.
- The evidence below records the original September 27 release unless stated
  otherwise; its counts and captures are historical.
- The final native applications start directly, without shell/batch launchers.
  Windows' GUI entry was tested detached under Wine: first-run import, embedded
  icon, no console window, and visible startup errors. Redirected diagnostics,
  Unicode arguments, and direct native shortcuts also pass. Parent-console
  attachment is implemented but was not verified with a native Windows console.
- The persistent gameplay bar opens Settings with its mouse control or F1 and
  toggles fullscreen with its control or F11. Pixel-by-pixel OpenGL fixtures
  prove the reserved top strip does not crop the game image, including resizing,
  letterboxing, overlay capture, extreme insets, and minimization. The UI tests
  cover input capture, missing caches, both games, and confirmation/cancellation.
  Native cache fixtures also exercise symlink rejection; the three Wine symlink
  fixture cases explicitly skip because that host cannot create the links.
- A live Linux/KWin session switched from a custom Japanese pack to the default
  US cache and back to the Japanese cache. Fullscreen remained active across both
  switches; widescreen and the filter also carried into the new session. F11
  restored a windowed view. Each session wrote only its own selected SRAM path.
  A separate live clear/restart test removed only the selected default cache,
  preserved the other cache, both default saves, and the custom pack, flushed the
  current custom SRAM, and returned to ROM import despite an environment override.
  All such destructive-action tests used isolated disposable user-data folders.
- Linux release libraries are original SDL2 2.32.10 and generic x86-64 GCC
  runtimes. Loaded-library inspection confirmed all three bundled files, without
  SDL3 or SDL2-compat. App/startup and runtime ISA requirements were audited for
  baseline x86-64; the maximum required glibc symbol version is 2.43. Build,
  signature, source, and license provenance is in `../launchers/linux/lib/PROVENANCE.md`.
- Top-level CMake installs on Linux and Windows contain the same native
  executable as the tested build; Windows also installs SDL2.dll beside it.
  Runnable archives use explicit input whitelists, reject ROM/asset-pack content,
  preserve executable permissions, and contain payload manifests and checksums.
- Both fresh 0.1 ZIPs passed manifest/checksum verification after extraction
  into paths containing spaces. The exact extracted Linux EarthBound and
  Windows Mother 2 frame-1,800 filtered runs reproduce the tested native/adapted
  pixels and WAV bytes; Windows execution was under Wine. Linux loads its own
  three runtime libraries with no SDL3 dependency. The Linux archive contains
  21 regular files and the Windows archive contains 14. The versioned archives
  in `releases/` are the canonical downloads; duplicate root aliases were removed.
  Archive hashes are recorded in [RELEASE.md](../RELEASE.md).
- The original release's final asset audit covered all 346 tracked or unignored
  source/release files and every ZIP entry. No supported ROM image or imported
  asset pack was present.
- Native Linux and MinGW Windows executables build. Windows execution and
  graphics were tested under Wine, not on a native Windows installation.
- The original version 0.1 snapshot was verified with 136 frozen generated
  C++ sources and eight headers, without the parent assembly tree, metadata YAML,
  or assemblers. Its eleven CTests pass on Linux and under Wine; four optional SPC assembler fixtures are
  explicitly skipped when their tool is absent. A fresh standalone Japanese
  frame-900 run matches packaged native/wide images and WAV bytes exactly.
  English, Japanese, and general launch wrappers work from paths containing
  spaces on Linux and Wine. The snapshot excludes ROMs, imported packs and saves.
- An isolated source-only build without `src/bin`, a ROM, or prior build outputs
  regenerated both profiles identically: 145,774 US and 138,660 Japanese CPU
  instruction records, plus 2,163 shared SPC instruction sites. Its seven
  frontend-disabled CTests pass, including 15 translator fixtures. Imports
  reconstructed both canonical image hashes, and both frame-900 images matched
  normal builds exactly. Ninja dependency checks verify source changes
  regenerate affected outputs.
- All final standard CTest checks pass: translation fixtures, CPU semantics, bus/PPU,
  SPC semantics, DSP synthesis, OpenGL presentation, frame pacing, asset import,
  control-panel interaction, cache administration, and photosensitivity filtering
  (eleven registered tests). Native Linux completes in 8.95 seconds and Wine
  in 46.40 seconds, both with the final 302-check bus fixture.
- Selective-filter unit tests pass for exact ordinary-image preservation,
  disabled identity, input/reference preservation, effect locality, red/cyan
  and black/white alternation, moving reference images, center-aligned resizing,
  toggles, and invalid input. All 302 focused bus checks also pass under
  ASan/UBSan. These include paired observed and unobserved DMA runs spanning
  multiple frame boundaries. The observer does
  not change hardware state, clocks, ordered writes, audio delivery, or pixels.
- With selective filtering enabled, both native Linux 3,100-frame differential
  routes preserve CPU/SPC state, ordered writes, game/entity/PPU memory, clocks,
  audio, and native pixels while the presentation width changes. EarthBound
  checks 46,141,394 CPU instructions, 13,035,207 SPC instructions, 10,177,144
  ordered writes, and 1,650,615 audio frames; Mother 2 checks 46,423,899 CPU
  instructions, 13,035,281 SPC instructions, 9,549,143 ordered writes, and the
  same audio-frame count. Each route exercises 98 effect frames, with 1,820,644
  pixel changes in EarthBound and 1,843,576 in Mother 2 accumulated across those
  frames. These routes cover
  intro flashes and title transitions, not every battle animation.
- Separate native Linux frame-1,800 captures in both games confirm that the
  gas-station flash changes when enabled. Frame-3,000 logo pictures remain
  bit-identical on and off. Every pair preserves native pixels, WAV bytes, CPU
  and SPC state, and instruction counts. All eight corresponding Windows runs
  under Wine match Linux pictures, audio, and CPU/SPC state exactly. The fresh
  extracted-package runs described above also pass. The earlier nine
  preference/CLI cases passed
  on Linux and Wine,
  including persistence, defaults, and explicit overrides.
- Both games' fixed intro-art frame-1,500 captures use the original 256-pixel
  canvas for a centered 4:3 display; their frame-3,000 logos use a 398-pixel
  widescreen canvas at 16:9. Every original center pixel remains identical to
  the previous and canonical native captures. Mother 2's 71-pixel margins match
  the background edge color on each row, without repeated logo/copyright art.
- A live Linux OpenGL run with the filter enabled presented 1,800 frames with
  zero skipped frames in 29.952 seconds. At the final fixed 4:3 scene, its
  1,194×672 window held an 871×653 game viewport at (161, 19). Every viewport
  pixel matches nearest-pixel scaling of the complete 256×224 source image,
  with zero mismatches and black sidebars. That filtered source also matches
  the headless run exactly.
- Phase Distorter's Saturn artwork is embedded in the window on both platforms
  and in all seven Windows executable icon sizes. Actual Linux and Wine window
  pixels and Windows executable resources were checked against the provided
  image and derived ICO. Optional Linux menu and Windows shortcut installers
  passed isolated-destination tests, including paths containing spaces. Windows
  shortcut targets were read back and launched under Wine.
- Asset tests verify SHA-256 against standard vectors, exact extraction and
  reconstruction, copier-header handling, corruption and truncation rejection,
  donor preservation, and atomic pack replacement. Native and Wine first-run
  tests selected an invalid file, observed the error without creating a pack,
  then imported the supported donor and started the game. Test packs were kept
  outside the install layouts.
- Linux and Wine panel tests exercise F1/Escape, physical input capture, actual
  checkbox/button clicks, file browsing, and OpenGL overlay drawing/restoration.
  Presentation readback checks include 398-, 524-, and 1,024-pixel source widths
  and toggling back to the original view.
- An imported-asset 16:9 run at frame 900 produces the exact previous native
  screenshot, WAV, CPU state, SPC state, and instruction counts.
- A 20,295-frame US route through the house and into Onett passed paired native
  and dynamically changing widescreen execution: all CPU/SPC state, 61,165,972
  ordered writes, entity/WRAM data, PPU data, native pixels, and 10,806,203 audio
  sample frames match. The durable `presentation_differential` target requires
  an explicit user-imported pack and is not part of asset-free default CTest.
- The same comparison passes 1,200 Japanese frames with 18,189,240 CPU
  instructions, 5,091,380 SPC instructions, 2,760,748 ordered writes, and 638,948
  audio sample frames. Both profiles pass 73 source-backed tunnel/desert
  presentation checks each. All 129 hardware checks pass ASan/UBSan, including
  combined world-map and Lumine Hall text margins. These scene fixtures do not
  claim end-to-end story visits to those locations.
- Japanese intro (frame 900), title (3,000), kana naming (3,000 with the input
  replay), and bedroom (12,000) match bsnes 115's accurate PPU in all 57,344 RGB
  pixels. Reference gamma is 100; doubled reference columns were verified
  identical before reduction. Mother 2's original fonts and language execute
  through its own compiled source profile.
- Presentation clamps in constrained scenes use the contiguous matching
  tileset-sector interval. Natural forest/cave borders follow the source camera.
  Clamps shift only the wider rendered view; narrow regions receive side borders.
  This is a new presentation policy, not an original game-camera restriction.
  Source analysis and named tunnel/desert coordinates are documented in
  [docs/presentation-scenes.md](docs/presentation-scenes.md).
- The CPU harness passed all 5,120,000 external register/memory/cycle vectors
  using two explicitly selected published correction files. The original
  unmodified corpus has 44 known upstream discrepancies; see
  [docs/cpu.md](docs/cpu.md) for the exact revisions and reproduction commands.
- All 256,000 external SPC700 state/memory/cycle vectors pass. Indefinite
  sleep/stop cycle counts are excluded; see [docs/spc.md](docs/spc.md).
- Memory-speed tests distinguish FastROM, SlowROM, WRAM, MMIO, and controller
  accesses. Refresh tests cover the global eight-clock phase, partitioning,
  and the shortened odd NTSC scanline. These do not prove individual bus phases.
- A final 10,000-frame new-game audit checked 151,608,405 CPU helper calls and
  41,832,620 SPC helper calls. All immediate lengths matched live CPU flags;
  all SPC instruction bytes matched source constants. None of the 13,013,693
  observed CPU writes targeted cartridge ROM.
- The 12,000-frame new-game input replay reaches Ness's bedroom through the
  actual title, file-selection, naming, and opening-scene code. No game-state
  patching or preconstructed save was used.
- The same input replay in independently installed bsnes 115 reaches the same
  bedroom at frame 12,000. All 57,344 pixels match exactly in RGB after correcting
  five-bit expansion, without spatial or frame alignment. Its accurate PPU emits doubled
  horizontal columns; every pair was verified identical before lossless
  reduction to 256 pixels. Gamma was explicitly set to 100.
- The reference comparison exposed and fixed a horizontal-scroll latch bit loss
  and brightness quantization order. The animated interference at frame 900 now
  matches every raw RGB pixel. The later frame-1200 palette phase still differs;
  an isolated renderer fixture supplied the reference palette and matched that
  reference image exactly, confirming a palette-state difference rather than a
  tile decoding or composition error. This fixture is not an end-to-end run.
- A 9,000-frame Linux and Windows/Wine new-game replay produced identical
  framebuffer and nonzero stereo WAV files, as well as matching CPU/SPC state.
  After the final display corrections, refreshed packages also match exactly at
  frames 900 and 1,200 in framebuffer, WAV, and CPU/SPC state. The installed
  executables are byte-identical to those tested builds. The frame-900 capture
  and the stable title at frame 3,000 also match bsnes in every RGB pixel.
- OpenGL readback tests check every pixel at native and triple scale, both
  letterbox directions, orientation, colors, and texture replacement. Actual
  windowed game output also matches the source framebuffer on the tested paths.
- The display can omit an intermediate presentation while simulation, input,
  and audio continue at the native frame rate. Deterministic 60/144 Hz pacing
  tests pass; an injected 80 ms host stall produces four catch-up frames and
  preserves the final actual GL readback and WAV against headless execution.
- Native and Wine save tests verify default creation, disabling persistence,
  loading all 8,192 bytes, and atomic overwrite. A native failed-write test
  preserves the previous save. This is file persistence evidence, distinct
  from a complete in-game save/load route.
- Both platforms automatically identify both supported ROMs and packs, reject
  an explicitly selected game that does not match, remember the selected game,
  and preserve the other game's default SRAM. Final 900-frame US and Japanese
  runs match across Linux and Wine in native pixels, wide pixels, WAV output,
  and CPU/SPC state. Installed executables match those tested binaries.
- The saved controller route completes Mom's dialogue and clothing event, room
  and stairs transitions, a phone interaction, and the exit into nighttime
  Onett. A fresh 20,295-frame replay exactly reproduces its live capture. The
  18,375-frame movement/release checkpoint also exactly matches bsnes RGB.
  See [docs/gameplay.md](docs/gameplay.md) for commands and bounded observations.

Generated verification files and executables are under `build/cpp` and
`build/cpp-mingw`; they are intentionally ignored by Git. External corpora and
reference emulators are test inputs, not production dependencies.
Install-layout packages are in `build/cpp-package/linux` and
`build/cpp-package/windows`; the Windows package includes `SDL2.dll`.

- Both refreshed release ZIPs pass their manifests and contain the exact tested
  executables. Extracted Linux and Windows/Wine builds complete the same
  16,000-frame EarthBound gameplay replay with identical final pixels, CPU/SPC
  registers, instruction counts and 8,519,303 audio sample frames.

## Limits of the evidence

Whole-game and console-level equivalence has not been established. The source
mapping reports retain 119 US and 116 Japanese alternate-width edges that leave proven instruction
bytes; none is silently turned into code. Unsampled indirect destinations and
gameplay routes remain unverified. Unknown code stops with architectural state.

The hardware model is not cycle accurate. Individual CPU bus phases, dummy
accesses, precise interrupt sampling, DMA arbitration, and active-display PPU
access contention remain limitations. The display is evaluated per scanline;
hires, interlace, and overscan output are not implemented. Their relevance to
the translated games must be distinguished from general SNES compatibility.
See [docs/hardware.md](docs/hardware.md) for details.
The intro's later animated palette phase and some intermediate movement/animation
frames differ from reference captures. A bounded source trace confirms skipped
palette uploads when intro processing crosses vblank; exact capture and interrupt
phase remains unresolved. Stable-scene equality does not establish frame-perfect
equivalence.

Matched platform outputs prove consistency between builds. They do not by
themselves establish matching original-console pixels or sound. Nonzero WAV
output and DSP tests establish synthesis; no human audible-playback assessment
is claimed.


## 2026-09-29 higher presentation rates

Saved 90–300 FPS and Uncapped presentation modes now use an independent clock.
Optional image-motion interpolation covers the presented overworld and battle
canvas; gameplay/audio remain native. Native mode retains the prior path.
All 15 Linux CTests pass. Deterministic clock tests, nonlinear moving artwork,
static HUD checks, actual ImGui controls, and both regional 600-frame differential
runs pass. The differential compares ordered writes, all machine state, audio
samples and native pixels while generating five pictures per hardware tick.
Desktop boot runs measure roughly 120/144/165/240/298 FPS at the matching limits,
with identical final CPU/SPC state, WAV bytes and native pixels across modes.
A 20,900-frame actual overworld probe and imported battle-artwork/wave fixture
produce inspected intermediate pictures. See `docs/timing.md` for interpolation
latency/artifacts and the distinction between presentation submissions and
physical display scanout.

The Windows deadline wait was also corrected after a real desktop probe reproduced
about 64 FPS at a 300 FPS cap. The MinGW sleep path rounded 3 ms requests to
15–16 ms; the SDL-backed deadline wait measures 3.333 ms under Wine and the
updated application reaches about 299 FPS. The optional
`presentation_wait_probe` checks this separately from deterministic CTest.
Native Windows and physical VRR scanout remain unverified.

Final extracted Linux and Windows/Wine packages pass manifests and executable
parity. Both games complete 300-frame headless, 300 FPS and Uncapped runs with
identical CPU/SPC state, WAV bytes and native pixels across platforms/modes.
The GPU-backed capped runs measure about 299 FPS on both builds. These are
short boot/intro presentation measurements, not sustained full-game benchmarks.
