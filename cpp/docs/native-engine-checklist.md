# Native engine completion checklist

Updated: 2026-09-30. Active scope: **all remaining engine work except audio**.

This is the execution checklist for the current goal. Update it when work starts,
lands, passes its acceptance checks, or exposes another required dependency.
Keep incomplete items open across work sessions. A standalone implementation,
a passing unit test, or generated C++ instruction execution does not establish
integration into the running game.

The existing sound driver, SPC/DSP implementation and playback behavior stay in
place. Native game code may submit the existing sound commands through an
explicit adapter; replacing audio sequencing, decoding or mixing is out of scope.

## Current work and ownership

### Current execution checklist

Checkpoint20 is accepted at the native module/Runtime level. The desktop still
uses GameSession; these checks do not establish a playable native session.

- [x] **W3/G5 — Enemy approach:** real path-follow callback, waypoint
  consumption, retained authored-role routes and imported movement tasks.
- [x] **W3/G5 — Contact and arrival:** actual contact gates, terrain probes,
  palette preparation, target selection, roster updates and typed Runtime
  integration through the direction interval and encounter-entry tail.
- [x] **G1/S2 — Continue prefix:** real save restoration, window closing,
  inventory transformation scan, imported pre-game dialogue, controller/party
  creation and palette reset. It stops before map preparation.
- [x] **R2 — Swirl setup correction:** reset all four window bounds; both
  regional source regressions fail on the old code and pass with the fix.
- [ ] **G1/S2/I1 — Finish startup:** execute actual map loading, remaining
  actor/window setup, fade and the first playable frame. Connect restored
  ScenePalette colors and live actors to rendering and interaction.
- [ ] **W3/W4 — Complete enemy behavior:** run unchanged roaming/chase/flee
  scripts, starting with EVENT_19, then EVENT_24/28. Implement their actual
  distance, targeting, flee, velocity and task-sleep dependencies.
- [ ] **R2/G5 — Visible swirl and combat:** advance authored effects only on
  their real caller phases; publish palette/window/layer changes to pixels;
  continue through combat initialization, gameplay and world return.
- [ ] **W/G/S/R/I — Live integration and delivery:** finish the subsystem
  gates below, replace desktop GameSession, validate real gameplay, then
  install and exercise both Linux executable paths and release artifacts.

Exact next steps are in [startup](native-bootstrap-next.md),
[enemy behavior](native-enemy-behavior-next.md),
[encounter entry](native-encounter-entry-next.md) and
[visible encounter effects](native-encounter-effects-next.md).
Audio implementation remains excluded.

### Checkpoint21 in progress

These are implementation tasks, not accepted completion claims. The installed
Linux executables still contain the previously validated sprite milestone.

- [ ] **Enemy runtime:** finish seven typed behavior services and current-task
  sleep; verify unchanged EVENT_19/24/28 plus actual Runtime bindings in both regions.
- [ ] **Map transaction:** perform ordered cleanup, all-role collision reset,
  same-combination artwork retention, palette publication and32+48 activation;
  prove the original complete map-loader call and no extra game/input ticks.
- [ ] **Startup continuation:** actual Buzz Buzz dialogue, timed deliveries,
  window artwork and positioning; then real first actor frame and fade.
- [ ] **Shared palette:** route actual window/area writes into one ScenePalette;
  recolor cached indexed artwork at publication without an actor tick.
- [ ] **Encounter display:** publish authored window rows and main/sub layer
  policy, RGB5 color math and palette restoration in software and OpenGL.
- [ ] **Restoration edge case:** resolve the authored shared-artwork battle
  restore that resets frame/display state through its null publication target;
  do not reinterpret it as palette index0 or silently acknowledge it.
- [ ] **Live integration gaps:** map fade admission, overlay cursors and live
  actor interaction geometry must have actual native owners.
- [ ] **Acceptance:** coherent optimized/sanitized runs, regional source
  comparisons, GPU pixels and a frozen-source linkage audit before closing items.

### Ownership and verification

| Work | Owner | Next acceptance boundary |
| --- | --- | --- |
| Startup and map loading | `native_playback` / Root | Complete original Continue prefix through actual map loading, then first playable frame |
| Enemy behavior | `native_scheduler` / Root | Complete imported roaming/chase/flee tasks with actual collision and cadence |
| Encounter effects | `native_route` / Root | Actual effect progression and published pixels, including caller order |
| Shared Runtime, session and delivery | Root | Authoritative desktop pipeline and exercised installed artifacts |
| Talk/Check/dialogue and related story modules | Existing separate story task | Preserve its work and validate integration through the same live-session gates |

The separate story task owns `native/dialogue`, `native/party`, `native/story`,
`native/npcs`, `native/entities`, their tests and `cpp/cmake/native_story.cmake`.
Preserve concurrent edits. Checkpoint20 adds only the required inventory rescan,
queue restore/reset interfaces and retained-role fixture corrections there.
Root owns shared CMake, frontend/session integration and this checklist.

**Checkpoint20 acceptance:** all 52 selected unit/integration programs pass in
optimized and ASan/UBSan builds; all 30 selected source-reference programs pass
(28 in both regions, plus the distinct US width-hint and JP formation proofs).
All 53 native executable audits exclude CPU/bus/audio-CPU, GameSession and
generated gameplay execution symbols. The 2,491 source inputs stayed unchanged
through verification. Evidence: `unit20l.log`, `asan-unit20l.log`,
`references-20l.json`, `native-linkage20l.log`, `source-unchanged20l.log` under
`build/verification/native-completion/`. Detailed scope, regressions and counts
are in [the verification history](native-engine-evidence.md).

## Completed baseline

- [x] Host-owned ordinary overworld sprite allocation and artwork storage.
- [x] Native custom/overlay/mutable sprite artwork and active actor edge retention.
- [x] Nearby NPC/enemy artwork preparation without changing gameplay activation.
- [x] Explicit actor-clock policy independent of sprite-resource ownership.
- [x] Consistent CRT Filter softness on completed and direct-rendered frames.
- [x] Pyramid demo aperture framing fixed for wide and ultrawide views.
- [x] Sprite milestone checked in both regions, including complete demo cycles,
  same-clock Twoson comparisons, poisoned legacy sprite pools and GPU checks.
- [x] Sprite milestone installed in both Linux executable paths. SHA-256:
  `2031d89eea31350171feb3ecca561c0c4254dfe46cd11d22da05f353fbbde5f1`.

## W — World and entities

- [ ] **W1 — Authoritative world state:** own game flags, area/camera state,
  actor roles, lifecycle and ordered activation in native C++ state.
- [ ] **W2 — Natural NPC activation:** implement source-ordered creation,
  removal, appearance gates and prepared-artwork handoff, including wandering
  NPCs; preserve identity, script order and collision behavior.
- [ ] **W3 — Enemy lifecycle:** native spawn selection, RNG consumption,
  movement/AI, encounter initiation, butterfly state and cleanup.
- [ ] **W4 — Actor services:** finish all reachable action-script requests,
  callbacks, globals, creation/destruction and script replacement semantics.
  Track imported unresolved requests in [native-action-services.tsv](native-action-services.tsv).
- [ ] **W5 — World movement:** integrate party followers, walking, bicycle,
  vehicles, collision, doors, teleports and camera changes.
- [x] **W5a — Camera focus lifetime:** native Automatic focus preserves authored
  roles through retirement, appearance release, vacancy and replacement,
  including fractional position and retained facing. Host-only targets keep
  strict identity. Regional lifecycle oracles and actual Runtime streaming,
  dialogue reselection and release pass; frontend migration remains W7/I1.
- [ ] **W6 — Streaming:** finish ordered map/sector/animation refresh and
  activation during camera traversal; widen presentation independently.
- [ ] **W7 — Live integration:** the game uses the native world owner, with
  no main-CPU execution or synthetic RAM arrays implementing world logic.
- [ ] **W8 — Acceptance:** both regions match source actor/state/callback/RNG
  traces on real walking, spawning, collision, interaction and transition paths.

## G — Gameplay, story and UI

Existing native dialogue/party/story modules are implemented in part and have
their own reference tests. The boxes below concern their remaining work and
authoritative use in the running game.

- [ ] **G1 — Boot and title:** native initialization, new-game setup, title
  menu, attract sequence, scene transitions and return-to-title flow.
- [ ] **G2 — Interaction:** integrate Talk/Check, menus, gift boxes, map text,
  dialogue choices and their world/flag/item effects.
- [ ] **G3 — Story services:** finish reachable event/dialogue commands,
  nested calls, cutscenes, photographs and scripted scene operations.
- [ ] **G4 — Party and inventory:** native membership/formation, status,
  inventory/equipment, money, experience, progression and related UI.
- [ ] **G5 — Battle:** native encounter setup, turn order, targeting, enemy
  actions, damage/status/PSI/items, victory/defeat and world return.
- [ ] **G6 — Menus and UI:** connect native windows, text, meters, selection,
  prompts and input timing for every supported scene.
- [ ] **G7 — Endgame:** complete credits and ending/game-over/restart paths.
- [ ] **G8 — Acceptance:** test actual imported content through these flows,
  including cancellation, nesting, transitions and both regional variants.

## S — Persistence

- [x] **S1 — Save codec:** native slot layout, checksums, duplicate-copy
  recovery, validity/version handling and typed state encoding/decoding.
- [ ] **S2 — Native state:** restore and save the authoritative world, story,
  party, progression and persistent flags without a compatibility RAM snapshot.
- [ ] **S3 — Lifecycle:** new game, continue, overwrite, game switching and
  shutdown preserve existing save behavior and regional file identities.
- [ ] **S4 — Acceptance:** source-oracle fixtures, round trips, corrupted and
  truncated files, all slots and real save→exit→continue gameplay; user saves
  remain untouched during automated verification.

## R — Rendering

- [ ] **R1 — World scenery:** complete native palettes, animated tiles,
  reserved artwork, layering and map transitions.
- [ ] **R2 — Screen effects:** native windows/apertures, fades, color math,
  mosaics and authored special transitions.
- [ ] **R3 — Battle rendering:** native backgrounds, combatant artwork,
  effects, PSI animations, targeting and battle UI.
- [ ] **R4 — Special scenes:** title/intro, Sound Stone, town maps,
  photographs, credits and other distinct authored display paths.
- [ ] **R5 — Presentation:** feed the existing high-rate/CRT frontend native
  draw data, preserving pixel registration, ordering and scene-cut behavior.
- [ ] **R6 — Independence:** production rendering no longer reads emulated
  VRAM/OAM/PPU state or falls back to a compatibility framebuffer.
- [ ] **R7 — Acceptance:** source image/draw-order comparisons plus NVIDIA
  and Mesa checks at native, wide and ultrawide sizes and multiple frame rates.

## I — Session and delivery

- [ ] **I1 — Native session:** authoritative initialization, fixed-rate game
  ticks, input, scene ownership, save state and immutable render publication.
- [ ] **I2 — Existing audio adapter:** keep the current audio implementation;
  preserve ordered sound commands and elapsed audio time across native ticks.
- [ ] **I3 — Remove non-audio emulation:** no main CPU, instruction-address
  dispatch or emulated graphics/bus dependencies in native gameplay/rendering.
  Reference execution belongs in tests; retained audio is the explicit exception.
- [ ] **I4 — Unsupported paths:** close every reachable engine request needed
  by supported content; do not silently skip requests or invoke an emulator.
- [ ] **I5 — Integrated acceptance:** both regional games cover boot, all
  demos, extended exploration, NPCs/enemies, dialogue, inventory, battle,
  transitions, save/load, game switching and endings. Preserve gameplay cadence
  while checking 60/120/240 FPS presentation and audio regression traces.
- [ ] **I6 — Dependency audit:** verify the shipped non-audio pipeline's link
  graph and runtime counters demonstrate actual native ownership.
- [ ] **I7 — Linux delivery:** rebuild and update
  `launchers/linux/bin/eb_cpp` and `build/cpp/eb_cpp`; exercise the exact installed
  artifacts and verify matching hashes.
- [ ] **I8 — Other delivery:** rebuild and validate the Windows executable and
  applicable release archives/checksums; distinguish Wine checks from native
  Windows verification.
- [ ] **I9 — Close goal:** all required integration and acceptance items above
  are complete; document any remaining audio-only compatibility explicitly.

### Verification history

Detailed accepted checkpoints and source-oracle counts are retained in
[native-engine-evidence.md](native-engine-evidence.md). Keep the execution
checklist focused on current work and the remaining acceptance gates.

### Remaining action-service inventory

`native-action-services.tsv` lists unresolved requests currently reachable by
the content compiler, with regional provenance, call counts and every authored
content offset. It currently contains 84 distinct US requests and 78 JP requests
(444/440 opaque call sites, plus 38/35 fixed-width unported sites). This is a
lower bound: implementing an opaque call can expose additional downstream
requests. A code address in this report is diagnostic provenance, never a native
execution dispatcher. The report does not cover unrelated boot/battle/UI code.

Regenerate after action bindings change:

```sh
cmake --build build/stutter-fix --target native_action_inventory
build/stutter-fix/cpp/native_action_inventory \
  /home/eric/.local/share/ebsrc/EarthBoundCpp/earthbound.ebpak \
  /home/eric/.local/share/ebsrc/EarthBoundCpp/mother2.ebpak \
  > cpp/docs/native-action-services.tsv
```

The inventory executable passes the native linkage audit
(`native-linkage20l.log`); generating this report executes no original
game instructions.

The modules' passing checks do not check off I1/I4/I7: the desktop session
still uses GameSession and the installed executables retain the verified
baseline hash above (`installed20l.log`). No checkpoint20 desktop build is
claimed or installed before its native session exists.

For the logs without a directory above, use
`build/verification/native-completion/`. Reference programs accept both
`earthbound.ebpak` and `mother2.ebpak`; they execute the source only as a test
oracle. Production modules link against native data/render owners.
