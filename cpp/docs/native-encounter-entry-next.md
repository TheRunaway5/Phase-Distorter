# Native encounter entry and remaining progression

Status: entry modules implemented and source-verified, 2026-09-30. `WorldPathfinding` implements
the complete native party path search, with 224 whole original calls and 7,528
comparisons per region, including a current leader distinct from formation zero.
`WorldEncounter` implements actual swirl initialization and its active predicate,
with 2,578 original calls and 11,737 comparisons per region. `WorldBattleEntry`
matches 104 complete original calls and 11,287 comparisons per region, including
actual pathfinding and swirl setup. `WorldRuntime` consumes it through the real
Automatic direction-interval expiry. Checkpoint20 adds actual contact/arrival,
path-follow callbacks, waypoint consumption and their imported task bindings.
Animation progression, visible effect publication and combat remain separate
work. Audio implementation remains excluded; the existing
audio adapter must complete before the swirl changes scene colors or effects.

Shared current evidence: `world-pathfinding-20l.log`, `world-encounter-20l.log`,
`world-battle-entry-20l.log`, `world-enemy-movement-20l.log`,
`world-enemy-contact-20l.log` and `unit20l.log` under
`build/verification/native-completion/`. The entry proof runs 53,065,424 original
instructions across both packs, including the actual same-track music return.
Each region exercises 111 equality, 11 excess-one, two excess-two and one
protected-touched pruning cases across its group records. Native entry uses no
original instruction execution. The Runtime integration test proves ordered
native state and frame/input cadence; its effect owners are not yet connected
to the published scene pixels.

The smallest complete callable entry is the entire original `C0D19B` tail,
including actual swirl initialization and `FIND_PATH_TO_PARTY`. It can complete
before native combat initialization or enemy formation exists. A working
contact-to-battle gameplay flow additionally needs full roaming/AI script
execution, visible swirl progression and the later combat transition. Completed
contact and approach services do not alone establish a completed encounter.

## Original source and regional entrypoints

Original checkout: `/home/eric/Developer/ebsrc`. Addresses were verified in
`build/cpp-dual-clean/out/assembly/us/earthbound.dbg` and the corresponding
`jp/earthbound.dbg`, not inferred from routine names. Paths below are relative
to that source checkout. These addresses belong to import/proof metadata only;
no native gameplay API should accept them as executable dispatch identifiers.

| Source routine/path | US | JP |
| --- | --- | --- |
| `src/unknown/C0/C04A7B.asm`, restore automatic mode then enter encounter | C04A7B | C04CF1 |
| `src/unknown/C0/C04AAD.asm`, automatic direction interval/expiry | C04AAD | C04D23 |
| `src/unknown/C0/C04A88.asm`, begin 12-tick direction interval | C04A88 | C04CFE |
| `src/unknown/C0/C0D19B.asm`, encounter entry; JP uses `C0D19B-jp.asm` | C0D19B | C0D165 |
| `src/unknown/C0/C0D5B0.asm`, actual enemy contact and later arrival | C0D5B0 | C0D578 |
| `src/unknown/C0/C0D15C.asm`, contact predicate | C0D15C | C0D126 |
| `src/unknown/C0/C0D59B.asm`, touched/swirl predicate | C0D59B | C0D563 |
| `src/unknown/C0/C0D4DE.asm`, contact palette preparation | C0D4DE | C0D4A6 |
| `src/unknown/C4/C41EFF.asm`, quantized relative angle | C41EFF | C41E4B |
| `src/overworld/battle_swirl_sequence.asm` | C2E8E0 | C2E7F9 |
| `src/unknown/C0/C04F47.asm`, backdrop/main-screen restoration | C04F47 | C05166 |
| `src/unknown/C2/C2E8C4.asm`, swirl setup wrapper/padding | C2E8C4 | C2E7DD |
| `src/unknown/C4/C4A67E.asm`, swirl-table/timer initialization | C4A67E | C47AE7 |
| `src/unknown/C2/C2E9C8.asm`, swirl-active predicate | C2E9C8 | C2E8E1 |
| `src/misc/find_path_to_party.asm` | C0BC74 | C0BC53 |
| `src/unknown/C0/C0B9BC.asm`, party target construction | C0B9BC | C0B997 |
| `src/unknown/C0/C0BA35.asm`, candidate/grid construction and path installation | C0BA35 | C0BA14 |
| `src/unknown/C4/C4B59F.asm`, shared path solver | C4B59F | C48A0C |
| `src/unknown/C4/C4B595.asm`, source scratch-allocation usage | C4B595 | C48A02 |
| `src/unknown/C4/C4B587.asm`, source scratch allocation | C4B587 | C489F4 |
| `src/unknown/C4/C4B7A5.asm`, blocked matrix perimeter | C4B7A5 | C48C12 |
| `src/unknown/C4/C4B859.asm`, shape grouping/order | C4B859 | C48CC6 |
| `src/unknown/C4/C4B923.asm`, group matrix/origin preparation | C4B923 | C48D68 |
| `src/unknown/C4/C4BAF6.asm`, wavefront search | C4BAF6 | C48F3B |
| `src/unknown/C4/C4BD9A.asm`, ordered path reconstruction | C4BD9A | C491D5 |
| `src/unknown/C4/C4BF7F.asm`, collinear point compression | C4BF7F | C493BA |
| `src/unknown/C0/C0D7F7.asm`, actual enemy path-follow tick | C0D7F7 | C0D7BF |
| `src/unknown/C0/C0D98F.asm`, consume a path point into script target variables | C0D98F | C0D957 |
| `src/battle/init_common.asm`, later combat transition | C052AA | C054CF |
| `src/battle/init_scripted.asm`, separate scripted-battle caller | C22F38 | C22E5D |

The direct caller of `C0D19B` is `C04A7B`: restore the complete previous automatic
mode word, then call the tail. The source entry neither waits 120 frames nor
runs `INIT_BATTLE_COMMON`; it starts the approach/swirl phase and returns.

## Exact encounter-tail order

1. Capture `TOUCHED_ENEMY`, then clear `ENEMY_HAS_BEEN_TOUCHED`. Do not clear the
   selected actor identity or derive it from a new collision query.
2. Read that enemy's moving direction. Direction 8 bypasses angle evaluation
   and selects party-first initiative. Otherwise use the actual pathfinding
   target actor's and touched enemy's whole XY with `C41EFF`, add `1000` with
   16-bit wrapping, then divide the unsigned wrapped result by `2000`.
   `DIVISION16S_DIVISOR_POSITIVE` is entered after sign normalization; its name
   does not make this call a signed division. Compare the octant against enemy
   moving direction and leader facing modulo eight. Differences 0, 1 and 7
   belong to the matching-facing group. Clear initiative first, then select
   party-first or enemies-first from the two resulting predicates.
3. Set the existing battle swirl countdown to 120. Resolve current battle group
   from the touched enemy's NPC identity masked with `7FFF`.
4. Execute the complete battle-swirl initialization. Its `CHANGE_MUSIC` call
   comes before backdrop restoration, main-screen selection, color math,
   swirl-table/timer setup, mask settings and the final auto-restore clear.
5. Read four authored battle-group entries, preserving original order. For a
   nonzero entry whose enemy type matches touched, mark touched path state
   `FFFF` and decrement only the local candidate-marking count. If that local
   count remains nonzero, scan authored roles 0..22 and mark every active
   matching enemy `FFFF`. Publish the four enemy-type/count pairs using the
   original entry count, not that decremented local count. An authored zero
   count advances its entry and publishes enemy ID zero. A terminator fills
   subsequent entries with zero without advancing its pointer.
6. Clear the collected battle roster, then call
   `FIND_PATH_TO_PARTY(party_count, 64, 64)`. This performs real terrain and
   shape-dependent pathfinding and installs paths on eligible actors.
7. Revisit the four group entries and count matching pathfinder records. Apply
   the regional pruning behavior below. The comparison metric is the
   reconstructed path length before collinear compression, not Euclidean
   distance or the final number of retained waypoints.
8. Scan roles 0..22, skipping touched. Actors whose path state is still `FFFF`
   have both tick and script/physics disable flags cleared. Other roles have
   their sprite visibility disabled. The original loop has no active-script
   test at this phase; handling retained unused-role metadata must be an
   explicit owner/domain decision, not a fabricated actor.
9. Clear touched actor's path state, append its enemy ID to the battle roster,
   and increment the roster count. Return to the already-restored automatic
   mode. Do not tick an actor, poll input, publish a frame, or decrement the
   swirl timer inside this operation.

### Pruning details that must not be normalized away

The US routine enters pruning only when candidate count is strictly greater
than the authored group count (`BGT`). JP uses `BCS` and enters at equality.
Both routines initialize a counter to the excess and jump to the decrement/test
before the first removal. The loop therefore executes exactly `excess` attempts;
JP's equality case enters setup but performs no removals. The initial jump must
not be lost when translating the later post-decrement branch.

Each attempt scans pathfinder records in their original order, starts its best
cost at zero, and replaces the selection only for a strictly greater cost.
If the selected actor is touched, it is protected without clearing its cost;
a later attempt can select it again. Otherwise its raw path length and actor
path state become zero. The loop still visits all pathfinder records, including
those whose actor path state was changed by an earlier attempt. An all-zero
matching-cost case leaves the source selected index at `FFFF`; this is a source
invalid-read boundary to reproduce in the oracle and explicitly classify,
not permission to silently choose an arbitrary actor.

The regional source diff and `include/macros.asm` establish these behaviors.
Do not replace them with a generic nearest-N candidate sorter.

## Pathfinding contract and current native reuse

`FIND_PATH_TO_PARTY` anchors the logical region on the independent source
`current_party_members` selector (`WorldPartyState::current_leader_role`), using
that actor's whole position and creation shape. It reads target positions from
the sorted formation roles, whose first element can differ from that current
leader selector. Shape origins
are `(x - anchor_x, y - anchor_y + surface_offset_y)` with the original word
wrapping before conversion to 8-pixel cells. The region has half-extents 32.
Targets and candidate origins use the source's modulo-64 local conversion.

`C0BA35` constructs the terrain grid from collision bits `C0`, then scans all
30 authored roles for active scripts with path state `FFFF`. It records each
actor's shape extents and origin in source order. The shared solver groups
matching shape dimensions, builds its blocked perimeter, performs the authored
wavefront search, reconstructs paths in the specified cardinal/diagonal order,
and compresses collinear points. Keep both the uncompressed length used for
selection and the compressed path consumed by actor movement.

The native domain is square searches, including the actual caller sizes 48,
56 and 64. Rectangular source axes alias inconsistently and are rejected rather
than silently assigned new behavior. Shape ordering is the actual selection
sort, including its tie effects; the initial zero-width/zero-height group keeps
the source's cache-match shortcut instead of running a fabricated wavefront.

The original caller supplies border 4, reconstruction limit 64 and search
scratch parameter 50. These values have algorithmic effects and need source
proof. They do not justify reproducing the original `0C00`-byte heap or its
pointer-based paths. The source checks allocation usage after solving and can
loop forever on overflow; native storage should own vectors with explicit
failure handling. Likewise `pathfinding` declares only eight records while the
candidate scan can visit thirty: source-valid cases and host-capacity extensions
must be reported separately, not tested by relying on original RAM overflow.

Reuse authoritative owners:

| Existing owner | Required state or functionality |
| --- | --- |
| `WorldEnemies` / `EnemyActorState` | actual actor, battle group, enemy type, spawn-cell metadata and identity/lifecycle; `npc_identity()` now returns battle + `8000` when owned |
| Shared imported `EnemySpawnData` | ordered battle-group members; expose a checked immutable borrowing relationship instead of reimporting a second gameplay catalog |
| `ActorWorld` / actor action state | native identity, whole/fractional positions, active-script status and creation shape via `appearance_context.shape` |
| `ActorActionContext` | existing moving direction, path state, collision object and movement/obstacle flags |
| `WorldActor` | existing script/physics and tick-enable controls; coordinate any additional temporary sprite-visibility gate with the actor/presentation owner |
| `WorldPartyState` / `party::State` | actual formation roles, leading role and party count |
| `WorldCollision` | already-imported anchor, shape width/height and surface-offset tables used by this pathfinder |
| `WorldMapArea` / collision sampler | actual current collision field; construct a local logical search grid without introducing an emulated tile-cache owner |
| `WorldMaintenanceState` | existing `enemy_touched` flag and status suppression |
| `AppearanceSceneContext` | existing swirl countdown and intangibility |
| `dialogue::PromptState` | existing `BATTLE_MODE`; do not confuse this with maintenance's separate `BATTLE_MODE_FLAG` |
| `WorldAutomatic` | complete mode3 interval, previous-mode restoration, pending actual battle-entry continuation |

`WorldEncounterState` now owns touched identity, the contact-selected target,
initiative, current group, four remaining type/count pairs and the ordered
collected roster. Authored targets retain a role reference through retirement;
host-only targets use strict actor identity. Touched must be a live owned enemy.
`WorldBattleEntry` requires both durable enemy/world provenance and the active
ActorWorld enemy binding: matching local ActorIds alone is insufficient.

`WorldPathfinding` now owns semantic candidate costs and compressed paths retained
by authored role, borrowing current leader, formation, collision and actor gates.
Public path requests resolve a current live ActorId before reading that role's
route; a retired host ID cannot alias its replacement. Encounter
pruning clears candidate cost separately from the existing actor path gate.
There is no current native `WorldBattle` gameplay owner.
`BattleCombatants` owns imported visual resources and presentation;
`BattleFormation` consumes already-initialized caller-owned combat records.
Neither creates the encounter roster or supplies battle state. Their reuse
begins later, after real battle-record initialization, not inside this tail.
`WorldPalettes` resolves steady area palettes; it does not implement contact
palette effects. `WorldEncounter` borrows the real `ScenePalette`, backdrop
backup, encounter state, native swirl continuation and semantic display effects
for initialization. Its music boundary is mandatory and ordered. Swirl frame
progression and clip rendering are not implemented by that initialization slice.
Current legacy renderer swirl reads are not a native service to invoke.

The complete original `C2E9C8` proof establishes the exact active predicate:
update timer is nonzero and padding is **at least five**. `CLC; SBC #4` subtracts
five, but the misleadingly named `BRANCHLTEQS` macro tests signed negative only,
so a zero subtraction result still passes. All 256 padding values and timer
values zero, one and 255 are compared in both regions.

## Actual contact producer and subsequent gameplay

`C0D5B0` gates against battle mode, doors, automatic focus mode, movement flags,
escalator style, intangibility, collision and existing swirl/touched state. On
first real contact it marks touched, performs the palette preparation, selects
the actual collision target, stores touched identity, disables tick and
script/physics work on roles 0..29 except role 23, and invokes `C04A88`.
Butterfly behavior and gate order are part of this function, not a synthetic
encounter button.

During the later swirl, the same service disables collision on arriving actors,
keeps touched paused, decrements matching remaining counts for other arrivals,
appends their enemy IDs, and pauses those actors. Once remaining counts and the
actual swirl-active predicate permit, it freezes the actors and sets countdown
to one. Existing ordinary/bicycle control reaches battle mode when its countdown
expires; this must happen on normal logical frames.

Authored `src/data/events/C3A401.asm` installs `C0D7F7` as the path-follow tick and
starts the tasks at `C3A434`/`C3A448` (JP `C3A424`/`C3A438`) that call `C0D5B0`.
The waiting/cleanup task is `C3A45C` (JP `C3A44C`). The movement and contact tasks
now have actual imported-script proof. The full ordinary enemy script still
needs its roaming/chase/flee calls, followed by visible effects and combat;
the shared task proof does not establish that full encounter flow.

## Implementation and acceptance sequence

1. Implemented: reusable native path owner and whole `FIND_PATH_TO_PARTY`, with
   direct US/JP source proof before encounter integration. It preserves exact
   path order, shape grouping, raw cost, compressed points, no-path effects and
   candidate order. Host vectors replace physical path pointers and heap slots.
2. Initialization implemented with native palette and display effects; actual
   swirl progression remains. Keep music on the existing audio adapter; do not
   implement audio or bypass its ordered completion.
3. `WorldBattleEntry` now borrows those owners and the existing authoritative
   state above; Runtime binds Automatic's pending entry to its real execution.
   Whole-source validation passed in checkpoint19. There is no
   generic success acknowledgment. This still does not publish a visible swirl.
4. Implemented in checkpoint20: real contact/arrival and path-follow services
   bind through the action compiler and Runtime, with imported shared task
   execution and separate actual direction-interval/entry coordinator proof.
   Complete ordinary roaming/chase/flee tasks remain in
   [native-enemy-behavior-next.md](native-enemy-behavior-next.md).
5. Connect the later combat owner separately. Encounter-tail completion does
   not claim `INIT_BATTLE_COMMON`, combat initialization or battle logic works.

Reusable fixtures and proof structure:

- Extend `cpp/tests/native_world_automatic_reference.cpp`: it already executes
  original mode3 expiry up to actual `C0D19B` entry and compares restored state.
  Replace that test boundary only when the complete native entry exists.
- Reuse `native_world_enemies_reference.cpp` and its actual spawning metadata
  contract. The required NPC identity is battle + `8000`; spawn cell is separate.
- Reuse the walking source fixture's collision-cache population and the actual
  native `WorldCollision`/`WorldMapArea` terrain. Do not return a canned path.
- Compare the complete original pathfinder and complete entry, including all
  actor paths, path states, raw costs, pause controls, visibility effects,
  roster order, remaining counts, initiative and swirl initialization.
- Include each initiative class and stationary direction 8, coincident and
  wrapping coordinates, mixed enemy types/shapes, equal path costs, touched as
  farthest, unreachable terrain, narrow passages and source-valid capacities.
  Include exact candidate-count equality in both regions and excess-one and
  excess-two pruning. Treat source invalid-read/heap-overflow cases explicitly.
- For a non-audio source fixture, preselect the same music track the swirl
  legitimately requests; `CHANGE_MUSIC` then takes its real early-return branch.
  This proves the non-audio tail while honestly excluding SPC loading. Also
  test the native ordered audio intent boundary with the existing adapter.
- Finally run actual contact, twelve direction-interval frames, complete entry,
  path-follow/arrival frames and battle-mode transition. Compare each phase
  against the original caller chain. Never force coordinates, add actor ticks,
  consume playback frames internally or fabricate source return values.

The current evidence retains the complete entry proof and adds actual movement,
contact and arrival services. Further progression and visible effects remain
the open checklist, with exact
effect work recorded in [native-encounter-effects-next.md](native-encounter-effects-next.md).
