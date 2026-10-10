# Phase Distorter — version 0.4 release bundle

Prepared 2026-10-10 from the current checkout, including the background and
direct-scene CPU optimizations. See the
[v0.4 patch notes](releases/Phase-Distorter-0.4-patch-notes.md) for changes
since the packaged v0.3.1 source snapshot.

| Artifact | Layout |
| --- | --- |
| [Linux x86-64 ZIP](releases/Phase-Distorter-0.4-linux-x86_64.zip) | glibc 2.36 baseline, bundled SDL2, private C++ support |
| [Windows x86-64 ZIP](releases/Phase-Distorter-0.4-windows-x86_64.zip) | Native application with SDL2.dll |
| [Combined launcher ZIP](releases/Phase-Distorter-0.4-launchers-x86_64.zip) | Both platforms in the repository-style layout |
| [Versioned launcher folder](releases/Phase-Distorter-0.4-launchers-x86_64/README.txt) | The combined layout, already expanded |

Canonical `launchers/` binaries and `launchers/VERSION` are updated to this
release. Linux requires glibc 2.36 or newer and desktop OpenGL. The static C++
runtime is private to the application; no shared C++ runtime is bundled.
The corresponding dependency and license records are under `launchers/linux/lib/`.

Build the Linux release with the compatibility environment described in
`README.md`, then refresh from that build and the Windows Release build:

```sh
cmake --build build/linux-glibc236 --target refresh_launchers
cmake --build build-windows --target refresh_launchers
python3 cpp/tools/package_release.py --version 0.4 \
  --patch-notes releases/Phase-Distorter-0.4-patch-notes.md \
  --linux-static-cxx-runtime --include-launchers
```

Run Linux build commands inside the documented Debian environment. The
[build record](releases/Phase-Distorter-0.4-build-info.json) identifies source,
compiler and dependency inputs, tests, package execution and reproducibility.
Archive hashes are in [releases/SHA256SUMS](releases/SHA256SUMS). Evidence is
under `build/verification/release-0.4/`.

Measured update CPU savings do not establish uniformly paced uncapped gameplay:
game updates still block presentation on the same thread. Windows checks use Wine;
physical hardware, a full playthrough and complete native integration remain
unverified. Existing imports, saves and machine snapshots keep their formats.
This is a local bundle for manual upload; no GitHub release has been published.

## v0.4 validation

Both Release builds pass **261 tests, with 104 optional asset-dependent checks
skipped and zero failures**, out of 365 registered checks per platform. Five
packager regressions pass. Fresh archive execution covers 28 regular-session
platform/launcher runs for both regions across native, CRT, 300 FPS, uncapped
and VRR modes. Linux/Wine CPU state, native/presentation pixels, PCM and
corresponding OpenGL readbacks match each other and the v0.3.1 package results.

Six additional native Continue runs cover both regions in Debian glibc 2.36,
current Linux and Windows/Wine. Native pixels, CRT readbacks and PCM match;
compatibility CPU instructions remain zero and disposable saves stay unchanged.
The application requires symbols through GLIBC_2.36, and bundled SDL2 through
GLIBC_2.34, with no shared C++ runtime dependency.

All three archives pass CRC, manifest/checksum, executable-mode and binary
identity audits. The combined folder matches its ZIP. Repeat packaging produces
identical bytes, all 15 previous release ZIPs retain their hashes, and all 2,999
recorded build/test/resource/tool inputs remain unchanged through validation.
Windows execution uses Wine 11.19; virtual-display checks use software OpenGL
and dummy audio. CPU performance measurements were taken in the preceding
optimization probes with the same application sources; they do not establish
sustained FPS for these bundles. Uncapped gaps under workstation load remain
an explicitly recorded limitation.

## Historical v0.3.1 release

# Phase Distorter — version 0.3.1 release bundle

Prepared 2026-10-09 from the current checkout, including the direct-rendering
performance changes and the Linux compatibility fix. See the
[v0.3.1 patch notes](releases/Phase-Distorter-0.3.1-patch-notes.md) for changes
since the actual packaged v0.3 source snapshot.

| Artifact | Layout |
| --- | --- |
| [Linux x86-64 ZIP](releases/Phase-Distorter-0.3.1-linux-x86_64.zip) | glibc 2.36 baseline, bundled SDL2, private C++ support |
| [Windows x86-64 ZIP](releases/Phase-Distorter-0.3.1-windows-x86_64.zip) | Native application with SDL2.dll |
| [Combined launcher ZIP](releases/Phase-Distorter-0.3.1-launchers-x86_64.zip) | Both platforms in the repository-style layout |
| [Versioned launcher folder](releases/Phase-Distorter-0.3.1-launchers-x86_64/README.txt) | The combined layout, already expanded |

Canonical `launchers/` binaries and `launchers/VERSION` are updated to this
release. Linux requires glibc 2.36 or newer and desktop OpenGL. The static C++
runtime is private to the application; no shared C++ runtime is bundled.
The corresponding dependency and license records are under `launchers/linux/lib/`.

Build the Linux release with the compatibility environment described in
`README.md`, then refresh from that build and the Windows Release build:

```sh
cmake --build build/linux-glibc236 --target refresh_launchers
cmake --build build-windows --target refresh_launchers
python3 cpp/tools/package_release.py --version 0.3.1 \
  --patch-notes releases/Phase-Distorter-0.3.1-patch-notes.md \
  --linux-static-cxx-runtime --include-launchers
```

Run Linux build commands inside the documented Debian environment. The
[build record](releases/Phase-Distorter-0.3.1-build-info.json) identifies source,
compiler and dependency inputs, tests, package execution and reproducibility.
Archive hashes are in [releases/SHA256SUMS](releases/SHA256SUMS). Evidence is
under `build/verification/release-0.3.1/`.

Renderer savings do not establish uniformly paced uncapped gameplay: game
updates still block presentation on the same thread. Windows checks use Wine;
physical hardware, a full playthrough and complete native integration remain
unverified. Existing imports, saves and machine snapshots keep their formats.
This is a local bundle for manual upload; no GitHub release has been published.

## v0.3.1 validation

Both Release builds pass **261 tests, with 104 optional asset-dependent checks
skipped and zero failures**, out of 365 registered checks per platform. Five
packager regressions pass. Fresh archive execution covers 28 regular-session
platform/launcher runs for both regions across native, CRT, 300 FPS, uncapped
and VRR modes. Linux/Wine CPU state, native/presentation pixels, PCM and
corresponding OpenGL readbacks match.

Six additional native Continue runs cover both regions in Debian glibc 2.36,
current Linux and Windows/Wine. Native pixels, CRT readbacks and PCM match;
compatibility CPU instructions remain zero and disposable saves stay unchanged.
The application requires symbols through GLIBC_2.36, and bundled SDL2 through
GLIBC_2.34, with no shared C++ runtime dependency.

All three archives pass CRC, manifest/checksum, executable-mode and binary
identity audits. The combined folder matches its ZIP. Repeat packaging produces
identical bytes, previous release ZIPs retain their hashes, and all 2,998 recorded
build/test/resource/tool inputs remain unchanged through validation. Windows
execution uses Wine 11.19; virtual-display checks use software OpenGL and dummy
audio. The performance measurements in the patch notes are isolated earlier
NVIDIA renderer probes, not a sustained FPS guarantee for these release builds.

## Historical v0.3 release

# Phase Distorter — version 0.3 release bundle

Prepared 2026-10-09 from the current source checkout, including uncommitted
native-engine work. The [GitHub release draft](releases/Phase-Distorter-0.3-patch-notes.md)
covers changes since the **actual packaged v0.2.1** source index, whose digest
is recorded in the v0.2.1 build record. The Git tag alone predates that package.

| Artifact | Layout |
| --- | --- |
| [Linux x86-64 ZIP](releases/Phase-Distorter-0.3-linux-x86_64.zip) | Native application with bundled SDL2/GCC runtimes |
| [Linux glibc 2.36 compatibility ZIP](releases/Phase-Distorter-0.3-glibc2.36-linux-x86_64.zip) | Separate older-glibc build, also covering glibc 2.37 |
| [Windows x86-64 ZIP](releases/Phase-Distorter-0.3-windows-x86_64.zip) | Native application with SDL2.dll |
| [Combined launcher ZIP](releases/Phase-Distorter-0.3-launchers-x86_64.zip) | Both platforms in the repository-style layout |
| [Versioned launcher folder](releases/Phase-Distorter-0.3-launchers-x86_64/README.txt) | The same combined layout, already expanded |

Bundles contain `VERSION`, `PATCH-NOTES.md`, instructions, dependencies,
licenses, a payload manifest and checksums. Canonical Linux and Windows
`launchers/` binaries are refreshed from the Release builds. Supported ROM
imports, normal battery saves and snapshot formats 1–8 remain usable in the
regular session; new machine snapshots use format 9.

The regular desktop path still uses `GameSession`. The optional
`--native-session N` Continue path has native world/battle/menu/cinematic owners
and its own documented acceptance limits. It does not provide complete native
title/new-game, save-writing, defeat/restart or whole-game parity. Machine debug
controls and snapshots are unavailable in native sessions.

Rebuild and package with:

```sh
cmake --build build --target refresh_launchers
cmake --build build-windows --target refresh_launchers
python3 cpp/tools/package_release.py --version 0.3 \
  --patch-notes releases/Phase-Distorter-0.3-patch-notes.md --include-launchers
```

The [build record](releases/Phase-Distorter-0.3-build-info.json) records source
identity, binaries, archive hashes and verification. See
[releases/SHA256SUMS](releases/SHA256SUMS) for all retained archive hashes.
Latest logs and extracted-package checks are in
`build/verification/release-0.3-spiral/`.

Linux requires glibc 2.43 or newer and desktop OpenGL. Windows execution checks
use Wine. Tests and replays do not establish a complete game playthrough,
physical Steam Deck/controller/VRR/audio acceptance or native Windows hardware
validation. Native cutscene physical timing and full-scene parity remain open.
No ROMs, imported packs, saves, snapshots or personal preferences are bundled.

This is a local release bundle and a draft for manual GitHub upload. No GitHub
release has been created or published.

The separate [glibc 2.36 compatibility build](releases/Phase-Distorter-0.3-glibc2.36-build-info.json)
uses a frozen copy of the starting v0.3 source plus a GCC 12 coroutine ownership
fix. It excludes the concurrent renderer/frame-pacing work. Its older-environment
suite passes 261 checks with 104 optional skips; extracted US/JP desktop runs
match original native/widescreen/OpenGL pixels and PCM. Physical Steam Deck
acceptance remains outstanding. Its [checksums](releases/Phase-Distorter-0.3-glibc2.36-SHA256SUMS)
are separate from the original v0.3 archives.

## v0.3 validation

The refreshed Release builds pass **261 tests with 104 optional asset-dependent
tests skipped and zero final failures per platform**. Five packager regressions
pass. An initial shared-prefix Wine run failed the virtual-controller fixture;
the complete suite passes with its own Wine prefix and virtual display. Both
the initial result and isolated repeat are retained in the build record.

Fresh US/JP battle-entry checks pass on Linux and Windows via Wine. Every one of
328 source animation updates per region is checked at width 398; key stages
are swept at widths 358, 398, 522, 796 and 1024 with filtering off/on. Ordinary,
advantage, disadvantage and boss transitions preserve source memory and native
pixels. The regression reproduced two remaining crops: the final mask outlived
its update timer, and mask cleanup preceded color-configuration cleanup. Both
now keep the selected canvas. Original scripted battle entry also passes
through 105 world-mask frames and into visible battle in each region.

Unrelated prayer apertures pass 504 frames and 77,333,760 pixel comparisons per
region. Scene boundary/iris fixtures pass 4,917,257 checks per region. Earlier
Twoson traffic, street-post, menu and optional native-engine results remain in
the preserved preceding build records.

All three archives pass CRC, payload/manifest/checksum and executable-mode
audits. Binaries match the builds and canonical launchers; the combined folder
equals its ZIP. Repeated packaging reproduces all archives byte for byte. Older
release ZIPs are unchanged, and the preceding 0.3 snapshot is preserved locally
under `build/verification/release-0.3-spiral/previous-0.3/`.

All **28 fresh extracted-package/launcher runs** pass for both games, with
Linux/Wine state, native/presentation pictures, generated PCM and corresponding
OpenGL readbacks matching across native/CRT/high-rate/VRR modes in a private
virtual display. These are bounded source-caller and rendering scenarios, not a
natural enemy-contact replay, full-game playthrough or hardware acceptance.

## Historical v0.2.1 release

# Phase Distorter — version 0.2.1 release bundle

Prepared 2026-10-04 from the source checkout with all fixes since the actual
packaged v0.2 source snapshot. The [v0.2.1 patch notes](releases/Phase-Distorter-0.2.1-patch-notes.md)
cover viewport handoff, cutscene framing, prayer apertures and battle returns,
console photosensitivity processing, snapshot compatibility and verification.

| Artifact | Layout |
| --- | --- |
| [Linux x86-64 ZIP](releases/Phase-Distorter-0.2.1-linux-x86_64.zip) | Native application with bundled SDL2/GCC runtimes |
| [Windows x86-64 ZIP](releases/Phase-Distorter-0.2.1-windows-x86_64.zip) | Native application with SDL2.dll |
| [Combined launcher ZIP](releases/Phase-Distorter-0.2.1-launchers-x86_64.zip) | Both platforms in the repository-style layout |
| [Versioned launcher folder](releases/Phase-Distorter-0.2.1-launchers-x86_64/README.txt) | The combined layout, already expanded |

The canonical `launchers/linux/bin/eb_cpp` and
`launchers/windows/bin/eb_cpp.exe` contain the new build; `launchers/VERSION`
is 0.2.1. All bundles include `VERSION`, `PATCH-NOTES.md`, instructions,
dependencies, licenses, a payload manifest and checksums. The platform ZIPs
retain the earlier layout: extract one versioned application folder and run
`Phase Distorter` or `Phase Distorter.exe` directly. Existing supported imports,
normal saves and snapshot formats 1–6 remain usable.

Rebuild with `cmake --build build --target refresh_launchers` and
`cmake --build build-windows --target refresh_launchers`, then package with:

```sh
python3 cpp/tools/package_release.py --version 0.2.1 \
  --patch-notes releases/Phase-Distorter-0.2.1-patch-notes.md --include-launchers
```

The [build record](releases/Phase-Distorter-0.2.1-build-info.json) identifies
source inputs, binaries, archive hashes and verification scope. Archive hashes
are also in [releases/SHA256SUMS](releases/SHA256SUMS).
Linux requires glibc 2.43 or newer and desktop OpenGL. Windows execution checks
use Wine; native Windows hardware validation remains outstanding. Packages
contain no ROMs, imported packs, saves, snapshots or personal preferences.

## v0.2.1 validation

The fixed source passed 228 registered tests with 38 optional tests skipped on
each platform. Separate US/JP asset-backed checks passed 240 horizontal source
scan cases, 72 staged walking replays, sprite visibility and snapshot
continuation. Source-backed scene checks passed 4,917,257 checks per region on
Linux and Windows under Wine. Five packager regression checks passed.
All three release archives passed CRC, full manifest/checksum, executable-mode
and payload audits. The combined folder matches its ZIP, and all archive bytes
are reproducible with identical inputs. Previous release archives are retained.

All 28 exact extracted-package and launcher runs passed for both games: eight
1,200-frame headless runs and twenty 180-frame desktop runs at 32:9 with the
filter enabled, covering CRT off/on, 300 FPS, Uncapped and VRR settings. Linux
and Wine match source-state summaries, native/presentation pictures, generated
WAV bytes and corresponding desktop OpenGL readbacks. The desktop checks use
private Xvfb/Mesa and dummy audio playback; they verify generated PCM, rather
than a physical speaker or display. Build inputs remained unchanged throughout
build and verification, and bundled binaries match their canonical launchers.

Detailed local evidence is retained in `build/verification/viewport-handoff/`
and `build/verification/release-0.2.1/`. These are bounded replays and fixtures,
not a manual full-game playthrough or physical VRR/controller certification.
The desktop still uses `GameSession`; full native integration is in progress.

## Historical v0.2 release

# Phase Distorter — version 0.2 release bundle

Prepared 2026-10-04 from the current source checkout, including the week of
changes since the original September 27 v0.1 release. The complete
[draft patch notes](releases/Phase-Distorter-0.2-patch-notes.md) cover shipped
features, fixes, native-component work and remaining integration limits.

| Artifact | Layout |
| --- | --- |
| [Linux x86-64 ZIP](releases/Phase-Distorter-0.2-linux-x86_64.zip) | Direct native application with bundled SDL2/GCC runtimes |
| [Windows x86-64 ZIP](releases/Phase-Distorter-0.2-windows-x86_64.zip) | Direct native application with SDL2.dll |
| [Combined launcher ZIP](releases/Phase-Distorter-0.2-launchers-x86_64.zip) | Both platforms in the repository-style launcher layout |
| [Versioned launcher folder](releases/Phase-Distorter-0.2-launchers-x86_64/README.txt) | The same combined layout, already expanded |

All v0.2 bundles include version identification, these draft patch notes,
notices, payload manifests and checksums. The canonical `launchers/` inputs
are refreshed for both platforms. Packages contain no ROMs, imported game
packs, saves or personal settings. Existing external imports and normal saves
are retained when extracting into a new folder.

Rebuild with `cmake --build build --target refresh_launchers` for Linux and
`cmake --build build-windows --target refresh_launchers` for the configured
Windows cross-build. Then create the bundles with:

```sh
python3 cpp/tools/package_release.py --version 0.2 \
  --patch-notes releases/Phase-Distorter-0.2-patch-notes.md --include-launchers
```

The versioned launcher folder is immutable: rerunning with identical inputs
verifies it, and differing inputs require a new folder/version. Archive hashes
are recorded in [releases/SHA256SUMS](releases/SHA256SUMS).

Linux requires glibc 2.43 or newer and desktop OpenGL. Windows execution checks
use Wine; native Windows hardware validation is outstanding. The full native
engine migration is still in progress; the desktop uses `GameSession`.

## v0.2 validation

Both complete Release builds passed their registered suite: **227 passed and
38 optional asset checks skipped per platform**, with zero failures. The five
packager regression checks passed. The explicit source-backed scene fixture
passed **3,770,369 checks per region on Linux and Windows under Wine**; the
reduced-flashing asset probes passed for both games on Linux, including named
backgrounds, all PSI setups, status routing and event-flash mechanisms.

All three archives passed CRC, full manifest/checksum, payload, executable-mode
and no-user-data audits. Their binaries equal the fresh builds and canonical
launcher inputs. The expanded combined folder equals its archive byte for byte.
Repeating packaging with identical inputs reproduces the same ZIP bytes.

**28 exact extracted-package and launcher runs passed for both games:** eight
1,200-frame headless runs (direct platform executables and combined launcher
scripts), plus twenty 180-frame desktop runs at 32:9 with reduced flashing:
Native CRT off/on, 300 FPS CRT on, Uncapped CRT on and VRR CRT on. Linux and Wine
match game-state summaries, native/completed presentation pictures, generated
WAV bytes and desktop OpenGL readbacks in each corresponding case. Native
pixels/state/PCM also match across the tested desktop pacing modes.

The recorded 2,168 application/header/generated/CMake source inputs remained
unchanged through build and verification. This is bounded startup and fixture
verification; it does not certify every gameplay route, physical VRR/controllers,
a manual full playthrough or native Windows hardware. The machine-readable
[build record](releases/Phase-Distorter-0.2-build-info.json) records scope, source
identity, artifact sizes/hashes and validation totals. Detailed logs are in
`build/verification/release-0.2/` in this workspace.

## Historical v0.1 and development checkpoints

Everything below records its stated earlier source/package checkpoint. Old
binary hashes, pass counts and platform-lag statements are historical and do
not describe the new v0.2 bundles above.

Prepared 2026-09-27. Upload this directory's contents as the root of the fresh
repository. No remote repository was created or changed.

## Threed / Threek NPC restoration — historical package checkpoint

Updated 2026-10-03. The Investigator (NPC 563) now appears at his original
position after Master Belch. His original appearance flag 610 is never set by
the game; the restored condition uses Belch's flag 71. This post-Belch timing
follows the likely intent in [Starmen's original hacking research](https://vblank.fangamer.com/mother2/gameinfo/factoids/),
and is an inference rather than a documented original event. The Ghost Enthusiast
(NPC 526) remains in town before and after Belch, making his original ghost-pet
dialogue reachable. Both regions retain the original sprites, facing, positions,
action scripts, dialogue pointers and all other NPC conditions.

The correction applies to compiled gameplay and native sprite preparation,
including original timing and sessions restored from snapshots. It changes
three definition bytes only when consumed; imported assets, ROM authentication,
snapshot content identity and save flags are unchanged. No reimport or new save
is needed. The source parity oracles explicitly retain the original SNES data.

The restoration regression passes 442 checks across synthetic fixtures and
both imported regional packs, including actual compiled NPC selection, event
combinations, duplicate/type/map/photo gates, ROM mirrors, DMA and restored
session reads. Seven focused Linux CTests pass. A separate native-only check
passes 1,103 checks for actual NPC activation and Ghost Enthusiast artwork in
both regions; his restored sprite produces two drawable parts with 512 verified
atlas pixels. This is deterministic loading/artwork proof, not a complete
playthrough. Both Linux and Windows applications are rebuilt from the current
checkout, and both launchers and release ZIPs include the fix. Extracted archives
match their manifests and built binaries; each completes 180-frame US/JP
headless startup checks. Windows validation uses Wine.

The sections below record earlier checkpoints and their validation boundaries.

## Controller mapping and settings — historical local Linux checkpoint

Updated 2026-10-02. The SNES Nintendo Switch Online controller now uses its
printed A/B/X/Y labels correctly. Linux USB/Bluetooth mappings also preserve
L/R, Select/Start and every D-pad direction. **F1 → Controller** shows the
connected device and held inputs, remaps all 12 SNES buttons, adjusts stick
deadzone and restores defaults. Controller preferences persist in
`display.cfg.controllers` beside the display preferences; `--no-config` disables
both. Custom `--config` paths use the same `.controllers` suffix.

The input fixture passes 270 virtual-controller checks with packaged native
SDL2 2.32.10 and host sdl2-compat. All four focused input, preferences, desktop
support and Settings UI CTests pass. The actual Linux frontend completes a
180-frame run with Settings visible, and GUI changes persist immediately and
reload after application restart in an isolated preference directory. Physical
controller testing remains outstanding. `build/cpp/eb_cpp` and `launchers/linux/bin/eb_cpp` include this
change; Windows and release ZIPs retain their earlier checkpoints.

## Save state snapshots — historical local Linux checkpoint

Updated 2026-10-02. **F1 → Debug → Save state snapshots** now saves named
snapshots, lists their creation dates and frame numbers, loads them immediately,
refreshes the list and deletes selected snapshots with confirmation. Files
persist beneath the application data directory in separate per-game folders.
They preserve processors, clocks, memory/SRAM, audio synthesis, native actor
resources, pending debug actions and current artwork. Loading validates the
format, game content and checksum before replacing the running session, then
resets host frame history/audio and restores the debug switches.

Session and storage tests pass, including partial steps, fresh-owner reloads,
corrupt-file rejection without changing play, and bounded allocations. Imported
US/JP gameplay checks compare complete state, pictures and PCM through 48-frame
continuations after restart. The real Linux SDL/ImGui application passes saving,
refreshing, restart/listing, failed-load continuation, successful frame/cheat
restoration and confirmed deletion in an isolated application data directory.
The actual Paula rescue scene also passes snapshot restoration at frame 5,322
with Paula recruited, then exact native state/picture/audio continuation through
frames 5,370 and 5,418. Both complete-frame and partial-step captures are checked.

The default CTest run reports 204 passes, 31 optional asset checks skipped, and
the same two previously established failures: `native_sprite_draw_tests` and
`native_world_runtime_tests`. `build/cpp/eb_cpp` and
`launchers/linux/bin/eb_cpp` include snapshots and the Paula fix below. Windows
and release ZIPs remain their earlier checkpoints.

## Paula party-join crash — historical local Linux checkpoint

Updated 2026-10-02. The native sprite loader now accepts the source's hidden
animation initialization marker (`0xffff`) without decoding it as a visible
frame. It preserves the original frame-reference latch and subsequent visible
pose selection. The cabin-key rescue dialogue reproduced the crash at frame
5,323 before the fix; the corrected runtime completes it through frame 6,500,
with Paula visible and following Ness after the dialogue. Original save data was
unchanged. The captured animation callback regression passes for both regions,
including retained artwork and rejection of invalid visible frames.

The rebuilt default CTest suite reports 202 passes, 31 optional asset checks
skipped, and two failures that also reproduce on the original source snapshot:
`native_sprite_draw_tests` and `native_world_runtime_tests`.

`build/cpp/eb_cpp` and `launchers/linux/bin/eb_cpp` include this fix. Windows and
release ZIPs remain their separate checkpoints below.

## Sprite exhaustion and CRT softness — historical local Linux checkpoint

Updated 2026-09-29. The local Linux launcher no longer widens the original engine's
actor activation region: that consumed its fixed sprite pool and broke the
pyramid/bicycle title demo and could freeze exploration. Wide scenery remains
enabled. This interim fix leaves late actor appearance at the far wide edges;
the host resource/entity replacement remains in progress.

The CRT Filter now reconstructs direct scenes in both axes, matching the native
picture's measured softness at 3x, 4x and 5x while retaining fractional movement.
Mesa and NVIDIA GPU readbacks pass. Both regional 9,000-frame demo comparisons
preserve native-width execution, pixels and PCM. A 5,200-frame Twoson route
preserves CPU/SPC state, memory, ordered writes, pixels and PCM. Eight focused
tests pass, and the exact Linux executable finishes a 9,000-frame US replay.

`launchers/linux/bin/eb_cpp` and `build/cpp/eb_cpp` are updated together. Windows
and release ZIPs remain the earlier checkpoints below. Native actor scripts,
scheduling, resources, appearance, NPC content, maps, collision content and palettes are verified
independently but are not yet used by GameSession; this is not a completed
emulation-free engine. See
`cpp/docs/native-engine.md` for the accepted migration scope and remaining work.

## Debug teleport fades and widescreen intro static — historical package checkpoint

Debug teleportation fades to black before loading its destination, holds the
blank screen through native frame synchronization, then uses the game's fade-in.
The intro's animated Giygas static now covers the requested widescreen/ultrawide
canvas. Only the interference extends; the original center pixels remain exact
and the still card retains its 4:3 composition when the static ends.

All 30 native CTests pass. The 194-check widescreen fixture and 3,061-check debug
fixture also pass under Wine. The scene regression covers both profiles at 400 and 1,024 columns,
including effect-reference pixels. Imported frame-1,200 captures cover 398-column
EarthBound and 522-column Mother 2; each retains every native center pixel and
renders static in both margins. The Windows captures under Wine match Linux
exactly. The debug fixture also checks that destinations stay unpublished during
the fade and blackout wait. Native asset-backed routes in both games verify seven
exact-coordinate arrivals each, 15–16 brightness levels during fade-out, a full
black widescreen frame before loading, and full brightness after fade-in.
See `cpp/docs/debug-tools.md` for the route's scope.

Both extracted release ZIPs pass manifests, permissions and checksums. Their
exact executables run both games through frame 1,200 with identical native/wide
pictures, audio bytes and CPU/SPC summaries across Linux and Wine.

The platform launchers and release ZIPs include these changes and the existing
audio/flat-CRT work described below. Earlier checkpoint sections retain their
original verification scope.

## Sustained-stutter repair — historical local Linux checkpoint

Updated 2026-09-29. The Linux launcher bounds catch-up presentation starvation,
uses scanline-local tile-row decoding, warms an enabled CRT shader before timed
playback, and requests higher ordinary scheduling priority for its own foreground
thread where the account permits it. Game clocks, input, generated PCM and source
state remain unchanged. Nine focused suites and a 2,600-frame gameplay-state
comparison pass. Native playback delivered 360 frames in six seconds without
audio underruns in the contended-host probe; high-rate rendering remains limited
by available CPU time. See `cpp/docs/timing.md` for the measurements and boundaries.
The local Linux launcher includes this follow-up; packaged ZIPs and Windows are
separate checkpoints below.

## Audio and flat CRT — earlier local Linux checkpoint

Updated 2026-09-29. The local Linux executable includes shared-renderer pruning
of disabled background layers, a 64 ms playback jitter reserve with underrun
recovery, and the saved **CRT Filter** toggle. The public-domain CRT-Lottes
Fast adaptation is flat, preserves black and fractional direct-rendering motion,
and uses no temporal blending. It is embedded in the binary.

Seven focused audio/pacing/preferences/GPU/UI/PPU tests pass. A 2,600-frame 21:9
walking comparison preserves game state, ordered hardware writes, native pixels
and generated PCM. The controlled audio-output capture contains no interspersed
silence under recurring 25 ms delivery delays. Renderer before/after picture
hashes match; timing and limitations are recorded in `cpp/docs/timing.md`.
This checkpoint updates `launchers/linux/bin/eb_cpp`; Windows and release ZIPs
remain the gameplay-runtime package checkpoint described below.

## Gameplay runtime checkpoint — historical package checkpoint

Updated 2026-09-29. Both platform launchers and ZIPs now include the source-derived
dialogue, cutscene, NPC, entity and enemy runtime: 808 US routines and 783 Japanese
routines in separate subsystem/source files. They preserve original instruction
retirement and imported story content. This is a low-level compatibility
foundation; a hand-decompiled high-level gameplay rewrite remains separate work.
The packages also include the direct scene renderer and widescreen startup fix
from the earlier local checkpoint below.

Verification covers all 29 final native tests, the initial 22 Windows executable
fixtures and 14 affected integrated fixtures, and four 900-frame Windows regional/
timing comparisons. Separate native audited replays match 26,097 US and 15,000 JP
frames under each timing policy with exact hardware-access ordering, machine
state, frame callbacks, pixels and PCM. Synthetic dialogue/credits tests cover
branching, nested calls, window restoration, waits/input and scrolling/DMA.
This does not certify every story branch or cutscene in a full playthrough.

Extracted ZIPs pass manifests and tested-binary hashes. US/JP 900-frame headless
runs match Linux/Wine state, native images and WAV bytes; 21:9 desktop startup
also displays source pixels and matches across platforms. OpenGL package probes
use Xvfb/Mesa, not physical scanout. No ROM, imported pack, save, or authored story
content was added. Details: [game runtime](cpp/docs/game-runtime.md).

## Direct scene rendering — earlier local Linux checkpoint

Updated 2026-09-29. The Linux launcher binary now includes direct overworld
rendering at higher presentation rates, without image-based frame generation.
Camera/actor positions are smoothed from source state; game logic and audio keep
their original cadence. Battles and unsupported raster effects retain native
frames. The existing release ZIPs below remain the earlier package snapshot.

All 22 Linux CTests pass. US walking comparisons at 398, 522 and 1024 columns
preserve CPU/SPC state, ordered writes, entity/PPU/save memory, clocks, native
pixels and PCM samples. The final 21:9 replay covers 2,600 game frames and 7,380
extra source renders. GPU walking readbacks at all three widths have zero
mismatches against the source rasterizer. US/JP synthetic checks cover stable
capture, raster fallback and publication; the live walking proof is US only.
The Windows build and four focused Wine tests pass, but its launcher and release
ZIP have not been replaced by this rendering update.

The 398-column walking probe measures about 11.0 ms of simulation/capture CPU
work and 0.25 ms per GPU draw on this host. Maximum 1024-column capture is more
expensive and may miss the requested rate; these are shared-host measurements,
not physical scanout guarantees. See [timing details](cpp/docs/timing.md).

Startup follow-up: fixed repeated native widescreen draws turning black on the
NVIDIA OpenGL path. The regular texture now explicitly unbinds/rebinds before
uploading, as the direct scene texture already does. A regression first failed
on the second 398-column draw; it now checks repeated 398/522/1024/256-column
frames with the real menu and direct-rendering transitions. All three GPU/UI
test programs pass, and a 600-frame windowed widescreen startup displays the
expected source artwork. The Linux launcher includes this correction.

## Source modernization — earlier working-tree checkpoint

The desktop now composes explicit owners: SDL-free `GameSession` for hardware,
processors, debug commands and frame/audio delivery; `GameSceneRenderer` for
presentation caches through read-only hardware views; `PresentationPipeline`
for filtering, interpolation history and host deadlines; and `DesktopDisplay`
for window/UI/input. CLI/preferences, replay, storage and audio output have
focused modules. `--replay-only` excludes physical game buttons while retaining
window and Settings events. See [source navigation](cpp/docs/source-navigation.md).

The combined checkout, including the separately completed interpolation and
entity-preload changes, passes all **20 native Linux CTests** and all **19
Windows C++ tests under Wine/Xvfb**. The isolated module-refactoring checkpoint
passed 19 native tests and 18 Windows tests. Wine does not run the Python
translation test, and its asset-cache symlink fixtures explicitly skip because
symlink creation is unavailable there. A separate SDL-free, frontend-disabled
build also builds and passes the `GameSession` test.

On Linux and Wine, both regional games match direct-core execution through 900
frames under both original and enhanced timing policies, including completed
frame callbacks, PCM audio and machine state. Source-backed rendering fixtures
pass 73 scene checks per region and all 34 PSI sequences, with 2,126 rendered
frames per region across both battle layer layouts. These are bounded execution
and rendering fixtures; they do not establish whole-game equivalence or native
Windows behavior.

Refactor-only before/after replays complete 16,000 EarthBound frames and 15,000
Mother 2 frames with identical final CPU/SPC registers and instruction counters,
final native/presentation captures, and complete WAV bytes. Elapsed times were
48.484 versus 49.970 seconds (US) and 46.171 versus 47.366 seconds (JP), about
3% higher after refactoring in shared-machine runs. These are approximate
throughput observations, not controlled performance benchmarks.

The final combined Linux and Windows ZIPs pass internal manifests, executable
parity and extraction/permission checks in paths containing spaces. Both games
pass 180-frame headless, Native, 300 FPS, Uncapped and VRR-selected runtime checks
on Linux and Windows/Wine: all 20 runs preserve final CPU/SPC state, counters,
native captures and complete WAV bytes. The 300 FPS trials average 294.6–295.9
submissions per second including startup; uncapped submissions exceed the cap.
These short intro trials do not measure unique animation frames, sustained
scene throughput or physical VRR scanout.

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
| `releases/Phase-Distorter-0.1-linux-x86_64.zip` | `06ab137a1490d5899dfc144285512b1abc9e52b35398a21d8166cb58390d4bd3` |
| `releases/Phase-Distorter-0.1-windows-x86_64.zip` | `5a4f2e357b68669ed867314d9b1c21f476c0bfd220e3f0ea352b652a9e2d35e1` |

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
`SHA256SUMS` records the tracked source/release snapshot except itself. Git's `.git/` metadata and ignored build/verification outputs are not
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
