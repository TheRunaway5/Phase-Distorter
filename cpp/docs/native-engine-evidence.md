# Native engine verification history

Historical checkpoint evidence extracted from the execution checklist on
2026-09-30. The latest work order and completion status live in
[native-engine-checklist.md](native-engine-checklist.md). Any next-step notes
below describe their checkpoint at that time; they are not the current work queue.
Passing a module checkpoint does not establish authoritative desktop integration.

## Checkpoint20 accepted

- [x] **20a — Enemy path movement:** native callback and waypoint consumption
  use real paths, authored velocity factors and ordinary actor physics. Routes
  survive authored-role retirement/reuse, while retired host IDs are rejected.
  Each region passes 3,255 complete original movement/helper calls, 511 path
  searches, 283 collision/physics frames, 64 complete imported enemy task
  passes, 17 original retirement/initialization pairs and 63 sprite pixel
  comparisons (40,226 checks; `world-enemy-movement-20l.log`). The older path
  unit's stale-ID/null expectation was corrected; the replacement role's full
  route, cursor and remaining count are checked (76 unit checks).
- [x] **20b — Contact and arrival:** actual contact/predicate/palette/terrain
  calls, ordered sound intent, target selection, pause state and roster/count
  updates pass 16,866 whole original calls, 128 imported contact task passes
  and 299,664 comparisons per region (`world-enemy-contact-20l.log`). Terrain
  probes use actual collision queries. All imported enemy run flags contain
  bit4, so the rejecting group variant remains explicitly custom-content unit
  coverage, not an authored rejecting encounter.
- [x] **20c — Runtime integration:** typed bindings execute the real path and
  contact services once, then ordinary physics at its existing cadence. Actual
  contact, twelve direction-interval frames and the bound encounter-entry tail
  pass along with strict owner binding, failure poisoning and no repeated sound
  intent (2,926 Runtime checks). Imported movement/contact source proofs and
  the synthetic coordinator fixture are distinct evidence; neither claims a
  completed visible encounter or ordinary full roaming AI.
- [x] **20d — Real Continue prefix:** a real saves::Session snapshot enters
  actual Runtime window closing, Inventory rescan, imported PRE_GAMESTART,
  script/scene-object reset, controller initialization, party creation with
  movement/window-palette tails and final scene/window palette reset. Each
  region executes 27 complete original C0B67F prefixes without intercepted calls
  (US 20,889 / JP 20,835 checks; `world-startup-20l.log`). The independent C039E5
  party positioning/projection helper is also compared. Startup unit coverage
  rejects foreign owners, separate transformation timers, competing Runtime
  work and failed/replayed consumption. Saved reserved90 maps to moved-this-tick;
  reserved92 maps to the single shared movement-flags/area-style word. The
  separate maintenance battle flag is preserved. The actual map operation is
  still pending and cannot be acknowledged as a successful or playable session.
- [x] **20e — Supporting lifecycle and inventory:** scene initialization resets
  only source-written metadata across all 30 roles and clears retired enemy
  identities without changing population/butterfly state. Actual retained role
  variables drive party insertion. Inventory proof includes 256 complete
  transformation rescans per region in 2,496 reference cases
  (`party-inventory-20l.log`); real timers/RNG and exact bound identities are used.
- [x] **20f — Four-bound swirl reset regression:** original C0B0AA writes each
  left/right pair as a word, giving left 255/right 0. Native setup previously
  retained the right side. Units and both regional references now seed nonzero
  values and compare all four bounds. Old code fails the unit and both regional
  regressions; fixed code passes 6,003 unit checks and 2,578 whole original calls
  / 11,737 comparisons per region (`world-encounter-window-{red-unit,red-reference,
  red-reference-jp,green-unit,green-reference}.log`, `world-encounter-20l.log`).
  This corrects setup state; native visible clip progression remains open.
- [x] **20g — Combined acceptance:** rerun after concurrent party/save/battle/
  dialogue integration. Coherent optimized and ASan/UBSan builds
  pass all 52 selected unit/integration programs (`unit20l.log`,
  `asan-unit20l.log`). All 30 selected reference programs pass: 28 both-region
  programs plus separate US width-hint and JP formation semantics
  (`references-20l.json`). The startup reference now accepts both packs in one
  invocation. All 53 native executable audits exclude CPU/bus/audio-CPU,
  GameSession and generated gameplay execution (`native-linkage20l.log`).
  All 2,491 source inputs remain unchanged after verification
  (`source-snapshot20l.json`, `source-unchanged20l.log`). Inventory is now 84 US /
  78 JP distinct unresolved requests (444/440 opaque and 38/35 known-length sites;
  `inventory20l.tsv`). These are first-frontier counts, not the whole engine.

Scoped source hashes and their verified manifest are
`checkpoint20-hashed-files.txt` and `hashes20l-verify.log`. Both installed Linux
executables still match the prior verified baseline (`installed20l.log`);
`desktop_application.cpp` still instantiates GameSession. This checkpoint
neither closes W7/I1/I7 nor claims a newly installed fully native game. No audio
implementation changed. Next implementation order is maintained only in the
[current checklist](native-engine-checklist.md).

### Checkpoint19 accepted

- [x] **19a — Actor lifetime:** script retirement, appearance release and
  scene reset have distinct native effects. Bare script creation retains the
  source geometry, behavior, selectors and available artwork, resets actual
  INIT fields, and allocates a new host identity. Enemy accounting uses its
  bound owner and rejects foreign-world identities and unsafe busy mutations.
  Full-word priority and the default planar callback are preserved.
- [x] **19b — Camera and real role reuse:** US/JP each pass 1,630 actual
  source calls/prefixes, 250 artwork refreshes with exact pixels and 195,472
  state comparisons (`world-automatic-19l.log`). Real dialogue command proof
  passes 404,559 total checks, including three imported fragments and two
  imported Scene frames per region (`world-control-commands-19l.log`). Runtime
  follows a moving nonleader through retirement, vacancy, real streamed NPC
  replacement, actual NPC reselection and full release with unchanged cadence.
  The enemy lifecycle oracle starts after native spawn plus original CREATE
  and one matched metadata boundary; it does not claim original spawn selection.
- [x] **19c — Controller/startup prefix:** actual role-23 script allocation
  and complete world initializer pass 39,152 comparisons per region
  (`world-bootstrap-19l.log`). Current leader is independent of sorted role
  zero; HP-alert latches and pajamas use their actual owners. Complete Continue,
  party/window/map setup and the first playable frame remain unchecked above.
- [x] **19d — Pathfinding and swirl initialization:** per region, complete
  native party pathfinding matches 224 original calls / 7,528 checks, and swirl
  setup matches 2,578 calls / 11,737 checks (`world-pathfinding-19l.log`,
  `world-encounter-19l.log`). Actual actor/party/terrain and palette/effect owners
  are borrowed; neither operation invents a tick or frame.
- [x] **19e — Complete encounter-entry tail:** 104 whole original entries /
  11,287 comparisons per region, including actual pathfinding and swirl setup
  (`world-battle-entry-19l.log`). Imported groups cover equality, excess-one,
  excess-two and protected-touched pruning. Runtime consumes the actual pending
  Automatic request through this reducer once and poisons failed work before
  replay/publication. This proves state initialization, not contact production,
  path-follow progression, visible swirl rendering or combat.
- [x] **19f — Formation regression boundary:** each region passes 5,490
  original guest refreshes and 2,908 formation sorts. Explicit count-zero
  UPDATE_PARTY underflows the original sort bound; native rejects it before
  mutation. Valid empty rebuild still skips the update. Following proof passes
  7,616 calls and 192 complete imported EVENT2 passes per region
  (`world-party-19l.log`, `world-party-following-19l.log`). Both reference and
  production now use the explicit current-leader field.
- [x] **19g — Combined acceptance:** coherent optimized and ASan/UBSan builds
  pass all 48 selected unit/integration programs (`unit19l.log`,
  `asan-unit19l.log`). All 26 selected reference programs pass: 24 use both
  regions, plus the distinct US width-hint and JP formation meanings of 1C11
  (`references-19l.json`). The older formation reference's obsolete US
  unsupported-frontier branch is excluded; US behavior has its actual dedicated
  width-hint proof. All 49 native executable audits exclude CPU/bus/audio-CPU,
  GameSession and generated gameplay execution symbols (`native-linkage19l.log`).
  The inventory remains unchanged (`inventory19l.tsv`). All 2,456 source inputs
  are unchanged after verification (`source-snapshot19l.json`,
  `source-unchanged19l.log`). Scoped source hashes and their verified manifest
  are `checkpoint19-hashed-files.txt` and `hashes19l-verify.log`.

The installed Linux executables still match the validated baseline hash above
(`installed19l.log`). `desktop_application.cpp` still instantiates GameSession;
these native module results do not close W7/I1/I7 or claim a newly installed
fully native game. No audio implementation changed.

### Checkpoint14 accepted

- [x] **14a — Movement:** four actual physics callbacks, live terrain, ordered
  actor collisions and retry behavior pass optimized, source and sanitizer checks.
- [x] **14b — Scene coordinator:** real native scene/ticks, nested dialogue,
  activation, event refresh, animation phase and immutable publication pass the
  coherent build with movement bound exactly once.
- [x] **14c — Formation:** original US/JP party sort and guest refresh match
  trail cursors, role/control mapping, HP and ordered external service boundaries.
- [x] **14d — Combatants:** all imported pictures/group selections, visual
  counters, ordered object draws and composed pixels match the source.
- [x] **14e — Integration hygiene:** refresh action inventory, run focused
  regressions and pure-native linkage audit, update evidence and source hashes.

Checkpoint14 established the prerequisites below. Checkpoint15 extends them;
neither closes the live-session requirements I1 or I7.

### Checkpoint15 accepted

- [x] **15a — Party creation source proof:** both regions pass 526 real
  insertion/rebuild operations, 925 actor creations and 1,850 service boundaries.
  Missing-role comparisons and movement/window refresh remain explicit services.
- [x] **15b — Battle formation source proof:** both regions pass full-record
  permutation, real RNG consumption and partial-capacity behavior; nonconvergent
  Japanese equal-label inputs reject before shared-state mutation.
- [x] **15c — Control dispatcher source proof:** both regions pass actual
  mode selection, terrain, party blink, trail writes and camera boundaries.
  Walking, bicycle, escalator and automatic movement reducers remain open.
- [x] **15d — Party startup/followers:** original artwork, RNG and full actor
  passes match. The actual imported EVENT2 installs its follower callback in the
  movement phase without integrating XYZ; the encoded var7 gate is preserved.
- [x] **15e — Maintenance:** possession lifecycle, animations, item/control/
  sector boundaries, phone queue and cached follower inputs match original order.
- [x] **15f — Runtime:** actual EVENT1 callback drives maintenance and camera
  streaming once; preserve continuation after issuer deletion, forbid bypasses,
  and bind the same authoritative input, clock, geometry and phone owners.
- [x] **15g — Coherent acceptance:** optimized and sanitizer suites, native
  linkage audit, refreshed reachable-service inventory, evidence and hashes.

Checkpoint16 below implements walking, hotspots, ordinary doors and following,
using the source contract in [native-walking-next.md](native-walking-next.md).
Checkpoint17 extends these with generated transition input, scheduler/playback
and escalator control, as specified in
[native-generated-input-next.md](native-generated-input-next.md). Checkpoint18
adds bicycle and automatic movement below. Item transformations,
camera-role lifetime, complete bicycle lifecycle, battle entry, other scheduled
operations, recording and sector music orchestration remain open.
The existing installed sprite milestone stays in place while native boot and
session integration are incomplete; these checkpoints do not replace the
desktop session.

## Checkpoint17 accepted

- [x] Native generated runs and integer route prediction; define the source's
  uninitialized X phase and prove actual US/JP callers.
- [x] Raw playback borrowing the existing countdown/input owners, including
  exact termination, controller fallback and recording-flag preservation.
- [x] Four-slot scheduler borrowing live clock/phone/window/battle/enemy gates;
  execute the actual four door callbacks in source slot order.
- [x] Actual stair/escalator producers publish their sequences/tasks through
  bound door operations, with no generic acknowledgment.
- [x] Native Runtime publication/counter/scheduler/input phase and real
  walking/escalator/party/trail/camera integration; no display-sampling clock.
- [x] Complete flat-terrain multi-frame US/JP movement/transition source proof;
  authored scene and full desktop acceptance remain in W8/I5.
- [x] Coherent optimized/sanitizer checks, pure-native linkage audit, evidence
  and source hashes. Installed delivery remains open.

## Checkpoint18 accepted

These are completed reducers and native Runtime integration; W5a, G1/G5 and
I1/I7 remain open. This does not replace the desktop's compatibility session.

- [x] Automatic timed movement, owned-actor focus and direction-interval
  reducers; compare real US/JP routines and retain pending battle entry.
- [x] Bicycle movement, coasting, turning, ordered bell intent and shared NPC
  collision; compare both regions without changing the audio implementation.
- [x] Actual dialogue focus/start/stop producers through Scene and WorldRuntime,
  sharing the same actor/controller owners. Imported content executes its real
  initial window-update frame and following world-update frame.
- [x] Runtime movement/trail/camera integration, including missing-service
  rejection, owner mismatch, no-ACK boundaries and failure/abandonment behavior.
- [x] Correct enemy NPC-selector identity to the encounter group rather than
  spawn cell, with distinguishing original-handler and spawn regressions.
- [x] Coherent optimized/sanitizer checks, native linkage audit, updated evidence
  and source hashes. Full native-session delivery remains open.

### Next implementation order

- [ ] **W5a/W4:** semantic authored-role camera targets and retained actor
  lifetime data. Follow [native-camera-lifetime-next.md](native-camera-lifetime-next.md);
  ordinary host ActorIds keep strict lifetimes.
- [ ] **W3/G5:** shared pathfinding, real swirl state and complete encounter
  entry/contact/arrival operations. Follow
  [native-encounter-entry-next.md](native-encounter-entry-next.md); no generic
  acknowledgment may complete the retained BattleEntry request.
- [ ] **G1/S2/S3/I1:** consume real save/new-game state into a native bootstrap,
  initialize actual controller/party owners and publish the first world frame.
  Follow [native-bootstrap-next.md](native-bootstrap-next.md); a static Continue
  plan is not an executed session.
- [ ] Continue the remaining W/G/S/R/I items above through live integration,
  both regional games and the requested installed artifacts. Audio replacement
  remains outside scope.

## Evidence ledger

### Checkpoint18 evidence

All logs are in `build/verification/native-completion/`. `build18n.log` and
`asan-build18n.log` build the same 31 selected native tests; `unit18n.log` and
`asan-unit18n.log` pass all 31 in optimized and ASan/UBSan configurations.
The actual Runtime test reports 2,484 integration checks. The final rebuild
includes the separate story task's concurrent US dialogue width-hint changes.
`checkpoint18n-build-inputs.json` records 2,429 source/build inputs checked for
changes after the builds and tests.

- **Automatic:** `world_automatic18n.log` passes
  1,377 actual source calls/prefixes per region, 250 original artwork refreshes
  with pixel equality, and 159,065 state checks. Source cases include all 14
  styles, direction/countdown/wrap edges, live focus, real facing refresh,
  ordered interval-start sound and the preserved battle-entry continuation.
  Native units pass 4,626 checks. No invented timed-mode starter, deleted-role
  parity, native battle entry or audio replacement is claimed.
- **Bicycle:** `world_bicycle18n.log` passes 2,072 complete original calls per
  region, including 928 real bell-queue calls/ordered native intents, 50 NPC
  contacts, 158 coasts, three X wraps and retained-state movement chains.
  Native units pass 1,288 checks. Actual mount/dismount is separate lifecycle
  work, not supplied by the movement reducer.
- **Dialogue camera commands:** `world_control_commands18n.log` passes 404,559
  checks. Each region executes three
  imported fragments, two required Scene frames, eight moving nonleader
  samples and 3,093 original calls. Unit tests pass 49,196 checks. The source
  pause's initial window tick and subsequent world tick are both preserved;
  following unported bus/music operations remain pending. The JP oracle uses
  the actual three-byte regional game-state displacement; production uses
  typed owners. No complete attract-sequence or playable-session claim follows
  from these focused fragments.
- **Enemy identity:** `EnemyActorState::npc_identity()` supplies the source
  encounter-group-plus-8000 identity to camera selection and shared collision.
  New cases distinguish battle 1/cell 643 and battle 2/a different spawn cell.
  `world_enemies18n.log` also checks it against original spawn output across
  3,509 creations per region. Appearance release clears identity without
  inventing a different actor or spawn-cell key.
- **Regressions:** all nine prior regional references were rebuilt and pass
  their `world_*18n.log` files: generated routes, raw playback, scheduler, door
  producers, escalator, walking, doors, control and maintenance. Together with
  Automatic, Bicycle, commands and enemy spawning, 13 reference programs pass
  against both actual packs. The fourteenth, `dialogue_width_hint18n.log`,
  also passes: 2,520 complete helpers and 152 original US commands, including
  newline/scroll and indexed-pixel comparisons. The JP command has different
  formation semantics and is explicitly excluded from this width-hint proof.
  These are source/native comparisons, not new desktop GPU or extended-play
  evidence.
- **Dependency/delivery boundaries:** `native-linkage18n.log` verifies native
  symbols and absence of main CPU, bus, audio CPU, GameSession and generated
  gameplay-executor symbols in all 31 native tests plus the inventory tool.
  The refreshed `inventory18n.tsv` matches the current unresolved action list.
  `installed18n.log` confirms both Linux executables remain the previously
  validated sprite milestone; I1/I7/I8 stay open. Current owned source hashes
  are recorded in `checkpoint18-hashed-files.txt` and `SHA256SUMS`.


### Checkpoint17 evidence

All logs are in `build/verification/native-completion/`. `build17k.log` and
`asan-build17k.log` build the same 22 selected tests; `unit17k.log` and
`asan-unit17k.log` pass all 22 in optimized and ASan/UBSan configurations.
`runtime17k.log` reports 2,172 integration checks. All nine regional reference
executables below were rebuilt together and run against both actual packs.

- **Generated routes:** `world_generated_input17k.log` proves 820 original
  builder calls, 20,000 integer angles, 1,014 routes and 192 real caller routes
  per region. A 79,992-frame route also proves 16-bit returned-count and 8-bit
  run-length wrap. Sequences are immutable even through mutable aliases;
  repeated prediction states reject without an arbitrary frame cutoff.
- **Defined source scratch:** real US/JP door callers leave X's fractional
  prediction phase uninitialized; controlled prior fills change a route from
  14 to 13 frames. Native production defines X=0 and preserves reset-produced
  Y=63. Source producer comparisons normalize only that undefined X input.
  No emulated stack or duplicate live position owner remains.
- **Playback:** `world_input_playback17k.log` compares 65,713 installations,
  65,704 raw reads, 72,135 complete processed-input polls and 14 clears per
  region, totaling 3,053,490 fields. It borrows the actual demo countdown and
  input owner. Active install is a no-op; empty installation and normal end
  retain their different flag semantics. Full polls with active recording
  remain an explicit prerequisite rather than silently discarding recording.
- **Scheduler:** `world_scheduler17k.log` compares 140 scheduling calls,
  2,880 real frame phases and 1,236 actual callbacks per region. Phone time
  uses the existing frame byte and precedes window/battle/swirl/enemy gates;
  live slot reuse and self-rescheduling match. Full-array writes beyond the
  source owner are rejected explicitly.
- **Door transitions:** `world_door_transitions17k.log` compares 576 complete
  original producers and 474 normalized routes per region, including every
  direction, entry/exit, guard and installation effect. It then runs 48 real
  flat-terrain flows over 708 scheduler/input/movement phases per region:
  672 actual walking calls and 36 escalator calls. Positions evolve through
  the real reducers; coordinates, fractions, style, pad state, task delays,
  phone cadence and unchanged RNG match after each phase. This does not claim
  authored scene geometry or full desktop/camera acceptance.
- **Escalator movement:** `world_escalator17k.log` compares 1,364 complete
  original calls per region, including 1,144 real door routes, 992 movements
  despite collision flags, 70 coordinate wraps and 12 generated producers.
  Its source gates, original diagonal direction and unconditional raw style-12
  motion are preserved. The actual Runtime runs it before trail/camera work.
- **Integration:** the Runtime binds exact walking content, formation,
  transition, input, clock, phone and gate owners. Publication/counter happen
  before scheduler callbacks and raw/processed input. Frame sampling, pending
  polls and budget yields do not consume those phases. Real walking and
  escalator rides update party following/trail/camera once; no generic ACK can
  skip a bound reducer. Foreign bindings, detached callbacks, abandoned work,
  capacity failure and post-publication errors reject further unsafe progress.
  Recording preflight rejection consumes no frame and remains retryable.
- **Regressions and delivery:** `world_walking17k.log`, `world_door17k.log`,
  `world_control17k.log` and `world_maintenance17k.log` retain the preceding
  regional proofs. `native-linkage17k.log` checks 23 pure-native executables
  for actual CPU/bus/audio CPU/GameSession/generated-executor symbols.
  `installed17k.log` verifies both installed Linux paths retain the baseline
  sprite-milestone hash. Audio is unchanged. No partial native session is
  installed or represented as a playable native build.

Next: [native-control-modes-next.md](native-control-modes-next.md) specifies
Automatic modes, real camera-focus actor selection and Bicycle. Battle-entry
continuation, story/UI, save/session, special rendering, native boot and all
shipped-artifact gates above remain part of this same active goal.

### Checkpoint16 accepted

- [x] **16a — Walking:** execute actual input/mushroom/speed/terrain/NPC/door
  flow with US/JP source comparisons, including changed leader formation.
- [x] **16b — Hotspots:** native activation, disable, reload and save metadata
  bridge; compare strict entry/inclusive exit and actual queue effects.
- [x] **16c — Doors:** execute ordinary types through the same map directory,
  scene and queue; expose unfinished scheduled-input producers explicitly.
- [x] **16d — EVENT2:** execute preparation and follower callback using the
  actual party/trail/artwork owners and compare both regional scripts.
- [x] **16e — Runtime:** bind the same walking owners, execute the real reducer
  in maintenance and continue camera/trail work without an external walk ACK.
- [x] **16f — Acceptance:** coherent optimized/sanitizer checks, source oracles,
  pure-native linkage and updated evidence/hashes. Installed delivery stays open.

These are implementation/validation gates, not a replacement for the full
native-session and playable-delivery requirements above.

All checkpoint16 logs below are in `build/verification/native-completion/`.
The combined build is `build16h.log`, followed by the queue-health rebuild
`build16j.log`; 17 optimized tests pass in `unit16j.log` and 17 ASan/UBSan
tests pass in `asan-unit16j.log` (build `asan-build16j.log`).

- **Walking:** `world_walking16j.log` passes 8,230 complete original C0449B calls
  per region: 392 redirects, 228 NPC collisions, 176 queued interactions,
  2,498 climbing results and two coordinate wraps. Eight additional actual
  type3/4 producer boundaries per region compare the unchanged pending
  continuation. Native enemy creation/release supplies real collision identity;
  whole/fractional coordinates, input/mushroom, navigation, queue, hotspots,
  RNG and frame state match. Native units cover stale Talk leader versus live
  formation and rejection of foreign or busy door owners.
- **Hotspots:** `world_hotspots16j.log` passes 2,560 original evaluations and 1,008
  each of activation, disable and reload per region, comparing 251,280 fields.
  `WorldHotspots` borrows the actual scene/input-position/clock/queue owners,
  uses the existing save resource import, and preserves inactive reload entries.
  Capture/restore touches only saved hotspot metadata; strict entry, inclusive
  exit, teleport and queue-suppression behavior are preserved.
- **Doors:** `world_door16j.log` passes 11,165 original routes/prefixes per region,
  including 11,037 complete routes and 108 genuine generated-input boundaries.
  Ordinary routing uses the actual map directory and selected record. Type0
  reads text only after its event predicate matches. Clean-ROM overcounted
  lists also expose nine phantom unknown-type cells: two original stack fills
  prove 18 caller-dependent permissions. Two more phantom records read outside
  the real flag owner. Native code rejects those conditions after the source
  lookup effects instead of inventing flags or permission. Only the source
  arithmetic scratch words are excluded from semantic RAM comparison.
- **Following:** `following16h.log` passes 7,616 actual preparation/following
  helpers and 192 complete imported EVENT2 passes per region. Compare all six
  character records, trail spacing/wrap, selected/last styles, overlay intent,
  possession counters, exact scalar return, task state, RNG, requested artwork
  and original uploaded pixels. Requested artwork remains distinct from a
  displayed refresh; source-unused uninitialized spacing is never fabricated.
  `party-movement16h.log` retains actual startup/physics/RNG comparisons at the
  now-typed missing-following-owner boundary.
- **Runtime:** `runtime16j.log` passes 1,154 checks. The coordinator binds
  walking and following to the same party/control/trail/enemy/queue owners,
  executes walking before trail/camera work, and executes the actual following
  callback before publishing the frame. Missing formation retries only that
  reducer; it never calls an extra actor tick or accepts a generic ACK. Pending
  or abandoned door/walking work rejects before another scene tick. An abandoned
  interaction queue also rejects before actor, RNG or hotspot changes; healthy
  active nested queues remain allowed. The queue source oracle passes 934
  enqueues and 458 consumers per region (`interaction_queue16j.log`). Existing
  control, maintenance, nested dialogue and creation source probes also pass
  (`control16h.log`, `world_maintenance16j.log`, `party-creation16h.log`).
- **Integration hygiene:** `native-linkage16j.log` checks 11 pure-native
  executables. `action-program16h.log` proves 300/300 appearance results dead in
  each region; the input-prefix oracle remains green. The refreshed inventory
  contains US86/JP80 distinct unresolved requests, US37/JP34 known-length sites
  and US447/JP443 opaque sites. It remains a reachable lower bound. Source hashes
  are refreshed without changing unrelated entries. Both installed Linux
  executables retain the baseline sprite-milestone hash above; audio is unchanged.

This proves native modules and their world-coordinator integration, not a
playable native boot, full scene transitions, completed battles or desktop/GPU
acceptance. Full W/G/S/R/I items remain open until their stated evidence exists.

For each newly checked item, add: changed module, source/reference fixture,
exact command/log location, regional coverage, live integration status and
remaining limitations. Existing sprite milestone evidence is in
[native-engine.md](native-engine.md). Story-module evidence is in
[native-story.md](native-story.md). Neither document alone means the full native
session is complete.

### Verified foundations for the open integration items

- [x] **W4/W5 actual party startup and follower phase:** `WorldPartyMovement`
  consumes the shared RNG, publishes the six character startup records and one
  global footstep role, and uses explicitly cached follower inputs. The original
  C0A26B encoding tests `var7 & 0x1800`; it is not replaced with the misleading
  source spelling. All authored callers install it in the movement phase, with
  a separately selected projection callback. Nonzero velocity does not move
  these actors; pause gates and missing-owner preflight preserve ordering.
  `party-movement15j.log` passes 384 startup/RNG/artwork calls, 7,680 follower
  comparisons, 96 complete actor passes and actual imported EVENT2 startup per
  region. EVENT2 still stops honestly at US C04EF0 / JP C04FEE. No fake response
  completes those remaining services.
- [x] **G4 insertion/rebuild:** `WorldPartyCreation` borrows existing party,
  formation, prepared-actor and 256-point trail owners. Preferred-role selection,
  insertion, free-role ordering, guest refresh and nested service changes match
  source. `party-creation15h.log` passes 526 operations, 925 real creations,
  1,850 service boundaries and 368 nested mutations per region. The 283 absent-role
  predicates stay explicit, and 33 unauthored small-guest combinations reject.
  No compatibility memory or second party registry supplies missing inputs.
- [x] **W5 control dispatcher and terrain/trail publication:** `WorldControl`
  borrows the existing whole leader position, input, clock, formation and map.
  Fractions and persistent trodden terrain remain distinct from temporary query
  results. `control15h.log` passes 1,172 original calls, 1,148 top/bottom terrain
  calls, 861 blink calls, 808 camera boundaries and 4,810,752 trail-word checks
  per region. Four movement-mode reducers remain explicit services. Camera
  resumption preserves the captured trail point while reading live metadata.
- [x] **W1/W6 EVENT1 maintenance and runtime integration:** `WorldMaintenance`
  runs original possession lifecycle, animations, item/control/sector boundaries,
  phone gates and cached follower publication in order. `WorldInteractionQueue`
  constructs the actual queue with the same phone owner and Dad-text key.
  `maintenance-reference15h.log` passes 236 original callbacks, 18 ghost creates
  and 18 deletes, 82 Dad calls, 1,626 unchanged service polls, 35 battle skips and
  151,388,160 indexed pixels per region. Real item/mode/music reducers remain
  external; no audio implementation changed. `WorldRuntime` binds this callback,
  performs its actual camera streaming, and clears native party blink for window
  effects. `runtime15h.log` passes 782 integration checks, including nested real
  dialogue, issuer deletion, zero-strip refresh, owner identity, external-control
  lifetime and exactly one tile/palette phase per eligible callback.
- [x] **R3 battle formation and snapshot lifetime:** `BattleFormation` prepares
  a validated whole-record permutation with shared RNG before applying once.
  Row overflow preserves the exact partial prefix; scratch clearing retains
  source scope. `battle-formation15h.log` passes 672 full formations, 258 capacity
  prefixes, 745 permuted records and 918 random draws per region. Sixteen proven
  nonconvergent Japanese equal-label inputs reject before mutation. A combatant
  snapshot now returns an owning value; a retained snapshot survives later
  publications and scene/catalog destruction. Full battle logic/UI remains open.
- [x] **Checkpoint15 coherent acceptance:** 13 optimized tests pass in
  `unit15h.log`; 11 ASan/UBSan tests pass in `asan-unit15h.log`. The control and
  maintenance unit contributes 1,662 US/JP checks. Seven production-only
  executables pass `native-linkage15h.log`. The input oracle retains 100 exact
  helper-prefix cases per region (`action-input15h.log`); every compiled
  appearance return remains proven dead: US299/299, JP300/300
  (`action-program15j.log`). Region-specific opaque boundaries are preserved.
  Source hashes are updated, and both installed Linux executables remain the
  verified sprite milestone. This is module/coordinator proof, not native
  desktop-session or GPU acceptance.

- [x] **W4/W5 movement and actor collisions:** one native movement owner runs
  four authored physics callbacks, actual shape/terrain queries and prospective
  actor collisions in numeric role order. The same `path_state` word controls
  facing and movement gates; no separate lock boolean can drift. Retry resumes
  the actual physics traversal without integrating earlier actors twice.
  `movement-reference14d.log` passes 464 imported hitboxes, 5,440 physics cases,
  187 direct surface calls, 24,600 actor collision calls and 96 complete actor
  passes per region. `action-binding14d.log` additionally checks 992 binding
  operations and 6,144 flag calls per region, including full path words and
  sign gates. Controlled movement/followers and scene lifecycle remain open.
- [x] **W1/W6/I1 native scene coordination:** `WorldRuntime` connects the real
  story scene/ticks, shared flags, streaming, lifecycle, movement and immutable
  frame publication. Initial/scripted streaming blocks ticks and capture;
  nested dialogue retains its parent continuation. Area preparation is explicit;
  event-only refresh retains current art and clocks. Tile/palette animation
  advances only through its explicit C05200 phase, not generic frame waits.
  Constructor failure restores movement ownership/initialized hitboxes before
  any later scene adoption. Optimized and sanitizer checks pass
  (`runtime14d.log`, `unit14d.log`, `asan-unit14.log`). Both-region `map14d.log`
  checks 81,920 global blocks, 43,657 event-resolved blocks/collision samples,
  119,046,144 indexed pixels and 2,056 animation ticks each. EVENT1 now has
  checkpoint15 acceptance above; its remaining services, boot/encounters and
  desktop ownership are still open.
- [x] **G4 formation sort and guest HP:** `WorldParty` borrows the real party
  and actor owners; it owns no duplicate membership or actor registry. Stable
  formation sorting transfers trail cursors by position, updates role/control
  mappings and spacing, then reaches explicit movement-policy and window-palette
  services in source order. Guest identity changes preserve or initialize the
  separate guest combat HP exactly. `party14d.log` passes 5,490 original guest
  refreshes and 2,908 formation sorts per region at both service boundaries and
  return. Creation/rebuild and trail publication now have checkpoint15 acceptance
  above; actual movement/service integration remains open. Missing actor-role
  comparisons never invent ghost RAM.
- [x] **R3 combatant artwork and presentation:** native resources decode all
  110 images and preserve every group entry, including count-zero and absent
  artwork entries. The row publisher preserves visibility, visual counters,
  alternate palettes and ordered immutable object draws. Missing required art
  rejects before mutation. `combatants14.log` passes 484 original group
  selections, 512 row callbacks, 357,376 decoded art pixels and 2,752,512 emitted
  object pixels per region. Formation/RNG now has checkpoint15 acceptance;
  PSI, UI and complete battle rendering remain open. Checkpoint14 totals 14 optimized tests, eight ASan/UBSan tests and
  seven pure-native executable linkage checks; the running launcher is unchanged.
- [x] **W1 authored roles and lifetime:** native roles are independent of host
  actor IDs and graphics capacity. Releasing an NPC appearance clears its artwork
  and NPC identity while preserving its role, task, motion and active-list order.
  Deletion releases the role in source free-list order. Ordinary native actors
  remain unbounded; authored content retains its explicitly requested role range.
  Tests: `build/verification/native-completion/unit1.log`, `unit2.log`,
  `actor-roles1.log`, `actor-world2.log`. Both-region role oracles compare 2,560
  allocations and 2,570 removals (6,928 actual source calls per region); the actor
  scheduler oracle compares 120 ticks and mid-tick pause/clear cases. This is
  used by the native actor library, not yet an authoritative desktop session.
- [x] **W2 activation module acceptance:** `WorldActivation` implements ordered
  cell/strip/initial-load traversal. Unhandled enemy requests block completion;
  authored NPC admission and script-driven retention remain explicit. Unit and
  both-region reference pass: 1,430 placement cells, 2,688 strip/gate cases,
  4,649 ordered creations, 700 retention cases, five initial-load traversals
  and six lifetime cases per region (`unit6.log`, `activation-reference6.log`).
  An older widescreen retention patch in generated test execution caused the
  initial mismatch; the reference explicitly uses the original four comparison
  operands when checking authored gameplay retention. Production needed no
  change. Live scene ordering and enemy-owner integration remain open.
- [x] **S1 save archive:** `native/saves/archive` owns the exact regional 8KiB
  format, typed values, checksums, duplicate recovery, save/copy/erase and
  version reset. `native_save_tests` passes in the coherent build and separately
  under ASan/UBSan. `save-reference2.log` compares all 8,192 bytes after mutations:
  each region passes 159 integrity, 36 load, 36 save, 9 copy and 3 erase cases
  (243 actual source calls). Independent code review found no concrete defect.
  No user save files were accessed; filesystem and playable session integration
  remain S2/S3/S4.
- [x] **W3 spawn selection and placement:** `WorldEnemies` owns population,
  encounter/member selection, butterfly identity and placed-enemy metadata.
  RNG and terrain queries suspend in exact source order; graphics-only release
  and actor deletion are separate. Lifecycle synchronization rejects active
  enemies disappearing outside their owner and retires already-released entries.
  Both regions pass 1,152 strip traversals, 3,185 content selectors, 29,501
  ordered random draws, 3,509 creations and 10,982 terrain probes, including
  retries, failures, population gates, debug and butterfly branches
  (`enemies-reference7-followup.log`, `enemies-unit7-followup.log`). Out-of-map
  butterfly sector reads reject explicitly. Movement/AI, encounter initiation
  and coordinated live scene execution remain W3/W7/G5 work.
- [x] **W6 combined activation coordinator:** `WorldStreaming` connects ordered
  camera/initial-load activation to the shared RNG and real native actor-shape
  collision. Enemy gates read the same story flags as NPC/dialogue services.
  Actor camera callbacks remain suspended through every strip, even if their
  actor is deleted. Budget-yield, initial-mode, collision-retry and captured-next
  unit checks pass. `streaming12c.log` compares 2,160 complete source refresh/load
  activations per region: 2,742 actual RAND draws, 1,300 US / 1,301 JP creations
  (1,056 / 1,057 NPCs), and 479 actual source shape/terrain probes, with exact
  actor order/roles, population, flags, RNG and camera. Source map/cache/artwork
  publication remains an independently checked boundary; full scene scheduling
  and area/palette refresh are still W6/W7/I1 work. Scripted and initial work
  require the session to block ticks/publication while streaming is busy.
  Failure latching and scene-owned camera acknowledgment also pass optimized
  and ASan/UBSan units (`unit13.log`, `asan-unit13.log`); a failed traversal stays
  blocking and cannot replay consumed randomness. The callback acknowledges the
  same pending camera boundary without advancing another actor tick.
- [x] **W4 lifecycle services:** ordinary/enemy graphical release, the authored
  loading-area predicate, first-pose refresh and role-based task staggering run
  through native owners. Staggering sets the requesting task's sleep, preserving
  parent/child ordering; unsupported inputs remain pending. `actor-services10.log`
  passes 2,400 exact interpreter stagger ticks, 60 retention/refresh calls and
  real enemy EVENT35 release plus termination per region. Unit checks cover
  missing inputs, rejected responses and cancellation (`unit10.log`, `unit12.log`).
- [x] **W4 script replacement and role queries:** replacement preserves actor
  identity, active-list position, appearance, motion and primary temporary value,
  while replacing tasks and clearing callback/pause controls. Numeric-role
  queries use the existing registry. `replacement12b.log` passes 180 original
  replacements, four complete actor passes (including camera-boundary replacement)
  and seven lookup-order cases per region. Replacing an actively suspended
  interpreter is explicitly rejected until its unusual self-replacement cursor
  semantics are ported; this is not claimed as complete W4 support.
- [x] **W4 authored actor creation:** the compiler retains typed sprite/script
  operands; the service borrows prepared height/variables, takes caller integer
  XY, applies the original zero direction and returns the authored numeric role.
  `creation13c.log` passes all six real callsite pairs across 22 role returns
  (132 original calls per region), four word-read bank boundaries and the original
  exhaustion failure. Native exhaustion keeps the request pending instead of
  reproducing the original role-zero corruption. Unpublished cross-bank word
  dependencies reject at import. Optimized and sanitizer units cover role retry,
  missing/invalid inputs, compound operands and captured-next child scheduling.
- [x] **G1/G4 silent growth and new-game character setup:** immutable growth,
  equipment and initial-stat content updates the existing party and shared RNG.
  `growth10.log` compares 192 resets, 1,176 level-ups, 120 EXP cases, 1,024 equipment
  combinations and 24 original new-game loops per region, including the complete
  persisted payload and both RNG words. Sanitizer units pass. This is character
  initialization, not the remaining boot/title/scene flow.
- [x] **G4 visible growth continuation:** `VisibleCharacterGrowth` preserves each
  stat/RNG mutation at its original message boundary, including PSI messages,
  prompt/name/number changes and the music request. `visible-growth12.log` passes
  816 operations, 9,465 presentation boundaries, 124 PSI messages and 3,877 live
  pause perturbations per region. Silent acceptance remains green after shared
  arithmetic extraction. Real dialogue and existing audio adapters still have
  to consume these typed requests in the session; no audio implementation changed.
- [x] **S2/S3 continue handoff and party bridge:** `native/saves/session`
  owns the archive and selected slot, returning loaded snapshots by value. It
  retains no second live party/flag copy. Hotspot updates, saved map/respawn
  anchors, text/meter timing and existing-party capture/restore match source.
  `unit6.log` and `save-session6.log` pass both regions: 448 original load/continue/
  text cases, 432 map arithmetic fragments and 448 party round trips per region.
  Separate ASan/UBSan checks pass. The explicit ordered bootstrap includes
  dialogue, party/map actors and timed deliveries; these still require their
  real native owners before a session becomes playable. New-game growth/RNG
  is an identified next dependency, never replaced with guessed initial stats.
- [x] **R1 palette animation:** immutable imported tracks plus scene-owned
  clocks retain initial colors until the authored first delay, then publish the
  next frame; render sampling never advances clocks or actor tint. Each region
  passes 19,200 eligible source/native ticks, 317 publications, 672 resolved
  selectors and 24 rendered views. Logs: `palette-animation1.log`, `unit1.log`.
  The shared decoder extraction also passes the full original map oracle;
  coherent `palette3.log` and `world-scene3.log` retain 776,160 exact palette
  colors and 282 whole-view map/actor comparisons per region. Live eligible-tick
  scheduling, reserved scenery and transitions remain open.
- [x] **R2 palette-transition primitive:** `native/palette_transition` owns
  RGB5 colors and fractional channel ramps. Brightness, masked preparation,
  zero/signed divisors, explicit stepping and explicit target publication match
  source quirks, including blue-underflow behavior. Optimized and sanitizer unit
  tests pass. Both-region source oracle checks 1,760 brightness cases, 81
  preparations and 2,402 complete-palette ticks each. Log:
  `build/verification/demo-regression/native-palette-transition-reference.log`.
  Coherent-build checks also pass (`unit4.log`, `palette-transition4.log`).
  Authored transition controllers and frontend use remain open.
- [x] **R3 background layer generator:** `native/battle_background` imports
  all 327 authored layers into immutable arranged artwork, with independently
  owned palettes, scroll/distortion clocks and published scanline offsets.
  Updates take explicit controller gates; snapshots and sampling never tick.
  Optimized/sanitizer units and independent review pass. Coherent both-region
  oracle checks 171,596 generator ticks and 37,553,440 indexed/color samples per
  region, including all 224 row offsets and state on each tick (`unit9.log`,
  `battle-background9.log`). The source initializer's unused retained byte is
  documented as a fresh-owner boundary. Pair composition, flash/letterbox
  controllers now have the module acceptance below; live frontend integration
  remains open.
- [x] **R3 ordinary background pair composition and effects:** immutable native
  frames combine imported pairs, source color math, brightness/palette cycles,
  shake/wobble, flashes and letterbox controls with explicit tick gates. Shared
  `battle-scene13.log` passes 245 distinct ready selections, 3,640 original
  controller ticks and 65,271,808 exact composed pixels per region, including
  incoming scroll/parity and HDMA/raster checks. Optimized and ASan/UBSan units
  pass (`unit13.log`, `asan-unit13.log`).
- [ ] **R3 special background ownership:** selections 455, 464, 476 and 477
  reference secondary tile 384 or later beyond their authored loader's output.
  These bytes historically come from the prior world tilemap, not the complete
  imported battle image. Native preparation exposes a typed dependency, and the
  source discrepancy remains a named regression. A full battle compositor must
  prove opaque coverage or provide an explicit owned incoming-scene interpretation;
  no generic emulated graphics-memory history is introduced. Prayer selection 478
  has its separately authored extended primary publication accounted for.
- [x] **W4 geometry and shared flags:** position snapshot/restoration and
  direction conversion run inside the compiled actor scheduler, preserving
  fractional coordinates and scalar returns. Event-flag calls borrow the
  authoritative story/world bits and suspend if no owner is bound; they do not
  maintain a second flag vector. `unit5.log` and `action-binding5.log` pass 992
  source actor/callback cases and 6,144 flag-wrapper cases per region, comparing
  all flags, returns and inline cursors. Newly reachable QueueText still yields
  an unsupported request; its source-proven input contract only establishes
  that it does not read the previous appearance result (`action-input5b.log`).
  All currently reachable appearance calls retain a proven unused scalar
  return: US299/299 and JP300/300 (`action-program15j.log`). Terrain/collision
  exposes 34 additional pose sites; JP party startup opens one more. There are
  still 448 US / 443 JP opaque call sites; W4 and I4 remain open. The ownerless
  action-prefix probe stops at world/party-dependent movement; the real owners
  are tested above.
  Native actor artwork/motion asset checks pass in both regions
  (`actor-assets14d.log`).
  ASan/UBSan also passes actor-world, binding and compiler tests (`asan-unit.log`).


For logs without a directory, use `build/verification/native-completion/`.
