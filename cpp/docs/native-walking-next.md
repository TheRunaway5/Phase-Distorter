# Native walking: next integration slice

Checkpoint16 implements the ordinary walking reducer in `WorldWalking`, door
routing in `WorldDoors`, and hotspot evaluation/lifecycle in `WorldHotspots`.
`WorldRuntime` executes the real Walk service before continuing trail/camera
work and binds following to the same party/control/trail owners. The original
audit below remains the behavior contract. Generated input, its scheduler and
the separate bicycle/escalator/automatic modes remain required work; see the
current [completion checklist](native-engine-checklist.md) for acceptance.

Read-only design audit, 2026-09-30. The target is `UNKNOWN_C0449B` (US
`C0449B`, JP `C04722`), called by `WorldControlService::Walk`. Existing
`WorldControl` owns the outer terrain/trail/camera sequence. A walking reducer
must finish inside that continuation; it must not poll input, run another actor
pass, advance the frame clock, refresh the camera, or copy live party state.
Automatic, bicycle and escalator **movement modes** remain separate services.

## Borrow the existing authoritative owners

| State | Existing owner / required binding |
| --- | --- |
| Whole leader XY, facing, walking style, movement flags, demo countdown, collision result, temporary surface result and selected map record | `npcs::InteractionState` |
| Fractional XY, movement result, automatic mode, persistent trodden terrain | `WorldControlState` |
| Actual leader hitbox/direction and live collision bodies | `ActorWorld`, including creation hitboxes and stable collision precedence |
| Movement-attempt counter, battle-swirl countdown, teleport destination, intangibility | `ActorWorld::appearance_scene()`; these already map to the source globals used here |
| Cached redirected-movement predicate | `WorldPartyState::projection.movement_mismatch` |
| Mushroom flag/timer/modifier | Borrow `party::MovementPolicyState`; `party::refresh_movement_policy` already owns C02C3E and its dismount request |
| Skip-sandwich status | Actual `party::State::party_status` |
| Pressed/held input words and player-activity latch | `story::InputState`; mushroom remapping mutates `pressed[0]` and `state[0]` in place |
| Frame parity, debug and battle-mode words | Existing `story::TickState` and `dialogue::PromptState` |
| Pending-interaction predicate and enqueue side effects | The actual `WorldInteractionQueue`/`InteractionQueueState`, with an identity-checked read-only pending accessor rather than another queue state |
| Event predicates and enemy-touched gate | Existing scene event flags and `WorldMaintenanceState::enemy_touched` |

Missing shared world state is small: stairs direction, ladder/stairs cell and
retained probe outputs, the using-door latch, and the two live hotspot records
plus their persisted mode/ID metadata. They need one named world owner shared
with transitions/save capture. `saves::Hotspot` and `ContinueResources::hotspot`
already describe/import restored hotspot data; the restore handoff is not a
second mutable live owner. `MovementProbeState` already describes the probe
outputs. The final movement direction can remain an operation result unless
another live consumer explicitly needs it.

`WalkingData` can import allowed-direction masks, mushroom remapping and signed
fixed-point speeds. `VELOCITY_STORE` expands 14 cardinal and 14 diagonal values
into 14×8 XY deltas. All discovered uses of the expanded tables outside that
initializer are reads, including C48D58; no mutable speed-table mirror is
needed for this slice. Share the imported deltas with later movement modes.

| Content | US | JP | Shape |
| --- | --- | --- | --- |
| `MOVEMENT_SPEEDS` | C3E0BC | C3E0A6 | 14 × signed 32-bit |
| `MOVEMENT_SPEEDS_DIAGONAL` | C3E0F4 | C3E0DE | 14 × signed 32-bit |
| `ALLOWED_INPUT_DIRECTIONS` | C3E12C | C3E116 | 14 × 16-bit masks |
| `MUSHROOMIZATION_DIRECTION_REMAP_TABLES` | C3E178 | C3E162 | 3 × 16 × 16-bit |
| Door cell directory / records | D00000 / CF0000 | D00000 / CF0000 | Already imported by `npcs::MapTextResources` |

These are asset references, not runtime address-based dispatch. Regional values
come from `build/earthbound.map` and `build/cpp/assembly/jp/earthbound.map` in
the original-source checkout.

## Preserve the complete call order

1. Clear `moved_this_tick`; when mushroomized, advance/remap the borrowed
   mushroom state **before** mapping input or checking battle swirl. Timer zero
   reloads 1800, increments modifier modulo four, then decrements. Demo mode
   suppresses remapping, not the timer update. Pending interactions or an invalid
   direction combination make `MAP_INPUT_TO_DIRECTION` return no direction.
2. A nonzero swirl countdown decrements; reaching zero writes battle mode FFFF
   and returns without a collision query. Otherwise query collision at the
   current XY and return. No direction also queries current XY and returns.
3. Apply style-13 stair direction constraints, or ordinary facing unless
   movement-flags bit 0 locks it. Increment the existing movement-attempt counter
   even if the later move is blocked. Capture original fixed XY and old terrain.
4. Compute proposed fixed XY. Shallow/deep-water and sandwich scaling must retain
   `ASR8(delta)`, wrapped 32-bit multiplication, then `ASR8(product)`, followed
   by wrapped addition. Constants are 8000, 547A and 18000 hexadecimal. Ideal
   floating-point or full-precision fixed multiplication changes negative steps.
5. Invalidate ladder **X only**. Normal collision calls
   `WorldMovement::resolve` with proposed integer XY directly, not a
   shape-adjusted collision origin. Publish its probe outputs and redirect
   predicate. When direction changes, recompute both proposed axes from original
   fixed XY and old terrain. Noclip instead samples C05FD1's cell
   `(x >> 3, uint16(y + 4) >> 3)` and masks flags to 3F; demo+noclip returns zero
   without that map sample.
6. Publish persistent terrain, then query actor collision at proposed XY. Reuse
   `entities::check_npc_collision`, **not** C06478's distinct prospective actor
   collision in `WorldActorMovement`. Publish a no-hit result on every early
   collision gate. The moving hitbox uses the actual actor's direction, not the
   newly selected party facing. Preserve source numeric-role precedence in
   reference tests; any extended native precedence must be explicit. Use the
   lifecycle's NPC/enemy classification for the intangibility gate.
7. Reject movement for a selected actor or terrain C0 bits. If a ladder cell is
   valid, C07526's returned permission **replaces** that decision, even an earlier
   rejection. Without a ladder cell, ladder/rope style becomes ordinary style.
8. Commit both fixed coordinates if permitted; otherwise clear moved-this-tick.
   Evaluate one live hotspot selected by frame parity. Finally ladder/rope
   recenters integer X to `cell_x * 8 + 8`, and debug+X snaps integer XY to an
   eight-pixel boundary. Both final adjustments retain fractional words.

Hotspots use unsigned bounds: mode 1 fires outside the inclusive rectangle;
other active modes fire strictly inside it. They clear their live mode, enqueue
type 9, then clear the persisted mode byte even when enqueue suppresses the
current type. Teleport blocks this. C073C0's apparent queue check is literally
`NEXT_QUEUED_INTERACTION EOR NEXT_QUEUED_INTERACTION`; do not replace it with an
invented empty-queue requirement.

## Door transitions are the remaining real boundary

Reuse `MapTextResources::lookup` and `InteractionState::map_text` for C07477.
The current public catalog lacks typed type-0 event/text and other door-payload
accessors; coordinate a narrow extension with its owner instead of copying its
directory or editing the separate story task's files independently.

| C07526 record type | Actual work | Move permission |
| --- | --- | --- |
| 0 | C06A1B event-gated text enqueue; matching predicate clears both ladder coordinates | false |
| 1 | C06A91 enters ladder/rope, masks facing to even, sets stairs direction FFFF; already climbing is unchanged | true |
| 2 | C06ACA activity/automatic/queue/enemy/swirl gates, sets using-door, enqueues type 2 with the door-data key, clears party sprite blink | false |
| 3 | C06E6E configures escalator entrance/exit, scheduled callback and generated input playback | false |
| 4 | C070CB configures stair transition, scheduled callback and generated input playback | true |
| 5/6/7 | The called source routines themselves do nothing | false |

Types 3/4 do not run a new frame during C0449B. They synchronously build a
run-length input sequence through C48C69/C48D58/C48E6B, schedule the actual
overworld callback, and install playback through C48E95 → C0402B → C083E3.
Installation immediately changes demo/input state; execution continues on later
normal ticks. A typed transition request can preserve the walking continuation,
but acknowledging it without those real state changes is a stub. The scheduler,
generated-input owner and their later callbacks remain unported dependencies.
This does not require folding the separate per-tick escalator mode into Walk.

A C07526 lookup miss/unrecognized type reads its uninitialized local permission
word. Native code must report that unsupported source condition, or prove that
valid flagged map cells never select it; choosing an invented default permission
would conceal a source-content contract. Type-0 event inversion also uses the
exact unsigned comparison against 8000, not merely a generic high-bit test.

## Smallest useful implementation and acceptance

Add a `WorldWalking` owner borrowing the owners above and immutable `WalkingData`,
with one operation per pending Walk request. Keep original/proposed coordinates
and permission in the operation. Repeated pending/budget resumes must not repeat
remapping, collision, queue writes or attempt counters. Validate owner identities
and imported content before effects; latch failures/abandonment after effects.
WorldRuntime should acknowledge the enclosing Walk only after this operation
and any real transition producer complete, then resume existing WorldControl.

The first bounded implementation can fully run ordinary/stairs-constrained
walking, terrain steering, water/sandwich/noclip, actor collisions, hotspots and
door types 0/1/2/5/6/7. It must expose type-3/4 transition work as an unresolved
required service until the scheduled-input owner is implemented. This closes
ordinary walking in a real native world; it is not universal Walk completion.
Universal completion requires those synchronous transition producers and their
later scheduler/playback consumers, with no success-only acknowledgments.

Use an actual US/JP C0449B source oracle with matched native owners, not just
tests of independent helpers. Compare all mutated state and queue records;
assert unchanged RNG, tick counts and unrelated actor state. Cover all 16 input
nibbles, 14 styles, pending queues, swirl 0/1/2, mushroom zero/reload/modifier/demo,
water/sandwich, negative and wrapping fixed arithmetic, redirected movement,
ordered hitboxes, ladder permission overriding a collision, both hotspot modes
at equality edges and both frame parities, debug snapping, and all supported
door gates. For transitions compare at the actual producer boundary and refuse
completion until a real native producer exists. Add WorldControl integration
tests proving exactly one continuation and one outer trail/camera update.

Source evidence is under `/home/eric/Developer/ebsrc`: `src/unknown/C0/C0449B.asm`,
`C05B7B.asm`, `C05FD1.asm`, `C073C0.asm`, `C07477.asm`, `C07526.asm`,
`C06A1B.asm`, `C06A91.asm`, `C06ACA.asm`, `C06E6E.asm`, `C070CB.asm`;
`src/overworld/{map_input_to_direction,mushroomization_movement_swap,velocity_store,
adjust_position_horizontal,adjust_position_vertical,npc_collision_check}.asm`;
`src/unknown/C4/{C48C69,C48C97,C48D58,C48E6B,C48E95}.asm` and
`src/unknown/C0/{C0402B,C083E3}.asm`. The audited branch macros in
`include/macros.asm` confirm unsigned `BGT`/`BLTEQ` semantics.
