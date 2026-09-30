# Native generated input and scheduled door transitions

Checkpoint17 implements the run builder, exact integer routes, raw playback,
four scheduled callbacks and stair/escalator door producers described here.
They are connected to `WorldWalking` and the native runtime's actual frame
boundary. The per-tick escalator reducer and complete flat-terrain multi-frame
comparisons are accepted alongside them. Recording, other scheduled callbacks,
automatic movement, bicycle and full native boot/session remain separate work.
See [native-engine-checklist.md](native-engine-checklist.md) for current evidence
and [native-control-modes-next.md](native-control-modes-next.md) for remaining
movement modes. The source contract below was audited on 2026-09-30.

`WorldDoors` executes a bound producer synchronously. Without the actual owner,
it retains the typed request and has no acknowledgment shortcut. A completed
producer installs its real input sequence and task; later playback and callbacks
run on subsequent frame phases, without advancing actors during production.

The original door caller reads one undefined X fraction. Both regional actual
caller probes demonstrate that prior stack contents change route length. The
native producer defines that unowned X phase as zero; Y is the reset helper's
actual resulting value 63. Full source comparisons normalize only that undefined
X input. This is a deliberate definition of undefined source behavior, not a
claim that every arbitrary original stack history produces the same route.

## Implementation and acceptance order

1. Establish the route builder's initial fixed-point fractions with real
   caller execution in both regions. The unresolved source issue below is a
   prerequisite to choosing a native route-generation contract.
2. Port the exact integer angle/route computation and run builder as owned
   content/value operations. Verify run bytes, path count, overflow behavior
   and publication boundaries against the original routines.
3. Add the raw-input playback owner and named overworld task scheduler,
   borrowing the existing countdown, phone, gate and world-state owners.
   Prove their phase order through the original input reader and scheduler.
4. Implement the complete escalator/stair producer and its four callbacks;
   connect it to the pending door operation. Finish the enclosing Walk only
   after actual producer completion, without running a new frame inside Walk.
5. Run the full multi-frame source comparison and the Runtime continuation
   tests described below. Keep other movement modes and other scheduler
   callbacks explicitly separate where they are not yet implemented.

## Regional source references

Original source is read-only at `/home/eric/Developer/ebsrc`. The names below
refer to `src/unknown/C0`, `src/unknown/C4`, or `src/overworld` files there.
Addresses were verified against both linked
`build/cpp-dual-clean/out/assembly/{us,jp}/earthbound.dbg` files. They identify
source-oracle entrypoints and imported content, never native runtime dispatch
keys.

| Source operation | US | JP |
| --- | --- | --- |
| Reset generated runs, `C48C69` | C48C69 | C462B3 |
| Append one pad frame, `C48C97` | C48C97 | C462E1 |
| Generate route, `C48D58` | C48D58 | C463A2 |
| Repeat direction, `C48E6B` | C48E6B | C464B5 |
| Publish generated runs, `C48E95` | C48E95 | C464DF |
| Forward playback installation, `C0402B` | C0402B | C042B2 |
| Install playback, `C083E3` | C083E3 | C083E3 |
| Read joypad/playback, `READ_JOYPAD` | C0841B | C0841B |
| Integer angle helper, `C41EFF` | C41EFF | C41E4B |
| Direction-to-pad table, `C48C59` | C48C59 | C462A3 |
| Escalator producer, `C06E6E` | C06E6E | C0709C |
| Stair producer, `C070CB` | C070CB | C072F9 |
| Escalator enter / exit callback | C06E2C / C06E4A | C0705A / C07078 |
| Stair enter / exit callback | C06F82 / C06FED | C071B0 / C0721B |
| `SCHEDULE_OVERWORLD_TASK` | C0DBE6 | C0DBAE |
| `PROCESS_OVERWORLD_TASKS` | C0DC4E | C0DC16 |
| Escalator offset/direction table, `C06E02` | C06E02 | C07030 |
| Stair tables, `C3E200` through `C3E228`, stride 8 | C3E200..C3E228 | C3E1EA..C3E212 |

The JP route and escalator implementations have separate `-jp.asm` files;
their local-variable allocation differs. Compare actual regional linked code
rather than substituting the US routine in both tests.

## Generated sequence and route contract

The source buffer contains 64 records of `{u8 frames, u16 pad}`. `C48C69`
zeros all records and resets its index. `C48C97` appends one frame:

- Index zero with pad zero is the special initial case: replace its pad and
  assign length one. Repeated zero pads can therefore overwrite this initial
  run rather than increasing it.
- Matching the current pad increments an 8-bit length, including 255-to-zero
  wrap. There is no automatic run split at 255.
- A different pad advances the index and begins a length-one run. The source
  contains a BRK and a nonrecovering overflow path at index 64.

`C48E6B` repeats a direction's imported pad value a 16-bit number of times.
`C48E95` advances the index, writes a zero-length terminator, then installs the
buffer via `C0402B` and `C083E3`. The buffer/index are adjacent:
US 7E9E58/7E9F18, JP 7EA05E/7EA11E. Publishing after record 63 writes the
terminator into the source index word. Treat the out-of-buffer case as an
explicit unsupported source condition; native ownership does not require
reproducing adjacent-memory corruption. Capacity behavior must be tested and
reported, not silently changed into a successful clipped path.

`C48D58` accepts integer initial XY and target XY, predicts successive
positions and returns the generated frame count. It does not move a live
actor. Preserve wrapped signed comparisons, carry-sensitive subtraction,
16-bit count wrap, and 32-bit fixed-point addition. Its angle helper `C41EFF`
uses integer coordinate differences, a scaled quotient and authored lookup
tables `C41FC5`/`C41FDF`; floating-point atan changes the contract. The route
adds 1000 hexadecimal to that angle, divides by 2000 hexadecimal using the
source signed divisor-positive helper, then selects the pad and style-zero
XY speed. Prove the generated direction domain before indexing native arrays.

The expanded movement deltas originate in `VELOCITY_STORE`; current
`WalkingData` already imports their cardinal/diagonal source content but keeps
the deltas private. A coordinated read-only content accessor or common
immutable content value can share them. Route generation must use the raw
style-zero delta, without walking terrain/sandwich scaling.

### Fixed-fraction proof

Both `C48D58.asm` and `C48D58-jp.asm` initialize only
`LOCAL01 + fixed_point::integer` and `LOCAL02 + fixed_point::integer`, then
later read/add the complete 32-bit locals. Their fractional halves are not
explicitly initialized. `END_STACK_VARS` in `include/macros.asm` adjusts the
direct-page workspace without clearing it. The real regional caller proof now establishes X as prior unowned workspace
and Y as 63 from the reset loop. An escalator route changed from 14 to 13
frames across X fills, so this is observable rather than harmless dead data.

Run the real `C06E6E` and `C070CB` call chains with controlled prior workspace
contents, capture both fractions at the first route iteration, and compare
the resulting runs/counts. Cover JP's different caller locals, zero-length
paths, axis/diagonal paths and paths near direction thresholds. If caller
history supplies a required value, identify its semantic owner. If the result
depends on unowned workspace, retain an explicit unsupported boundary or agree
on a documented native policy; do not claim exact source parity by assuming
zero or by introducing a compatibility scratch-memory owner.

## Playback owns raw input before the existing input reducer

`C083E3` has immediate effects. Active playback makes installation a complete
no-op. Otherwise a nonzero first run sets `DEMO_FRAMES_LEFT`, initial pad,
playback position, both raw controller words, and ORs the playback flag 4000
into existing flags. A zero first run calls `C083B8`, which clears **all** demo
recording flags. These are different from normal end-of-playback semantics.

`READ_JOYPAD` decrements the existing 16-bit countdown before deciding whether
to advance. A nonzero remainder retains raw input. At zero it consumes the
next run; a nonzero run assigns the new count and both raw pad words. A zero
terminator clears only the playback bit and samples both host controllers in
that same call. A retained zero countdown while playback is active wraps to
FFFF; preserve that input contract in boundary tests.

`C08496` calls `READ_JOYPAD`, then recording helper `C08456`, then the behavior
already implemented by `story::poll_input`. `story::InputState` owns processed
pad, pressed, held, repeat timer and activity; it does not own raw pads,
recording flags or a playback cursor. `InteractionState::demo_frames` is
already authoritative for the countdown read by movement and doors. Borrow
that word in the playback owner rather than copying it into a second timer.

Recording is a separate explicit dependency: `C08456` merges raw controllers,
emits runs on input changes or a 255-frame boundary, and clears only recording
when its destination limit is reached. Preserve the flag distinctions even if
the first native generated-playback slice exposes recording as a required
unported service. Never silently erase recording because only playback was
implemented.

## Scheduler, frame and phone boundaries

`SCHEDULE_OVERWORLD_TASK` scans four records for the first zero delay and
stores delay plus callback. Delay zero is inactive. A full source array writes
a fifth record beyond its owner; native code needs an explicit capacity result
before treating the producer as complete. Callbacks should be named native
operations, not code pointers.

`PROCESS_OVERWORLD_TASKS` has this exact order:

1. If the low byte of `FRAME_COUNTER` is zero and Dad's phone timer is nonzero,
   decrement that timer. This happens even when the following gates pause all
   tasks.
2. Return when a window is open, battle mode is nonzero, battle swirl is
   nonzero, or an enemy has been touched.
3. Scan slots 0 through 3 in order. Decrement each live nonzero delay. Invoke
   its callback immediately when it reaches zero, then continue the live scan.
   Callback scheduling can reuse the now-free slot; a newly populated later
   slot can be decremented in the same scan. A snapshot-and-deferred-callback
   queue would change this behavior.

This processor is installed by `C0B67F` through `SET_IRQ_CALLBACK`; debug and
credits paths also install it. `system/irq_nmi.asm` increments the byte frame
counter before display publication and calls the processor afterward, guarded
against callback reentrancy by `IN_IRQ_CALLBACK`. It is not an ActorWorld
callback. `WAIT_UNTIL_NEXT_FRAME` subsequently invokes `C08496` after its wait.
An original actor pass can span frame interrupts, so neither display sampling
nor actor traversal alone defines scheduler time.

The native frame owner must expose a single explicit scheduled-task phase
relative to raw-input consumption and actor/control progression. Prove this
phase with source traces, including a callback that changes leader state
before the next input/control step; do not infer it from render call frequency.
Preserve the current hardware-counter/portable-clock distinction until the
native frame contract is selected. A new shadow frame counter would also risk
changing Dad's 256-frame cadence.

Borrow `npcs::DadPhoneState::timer`, actual window-head state,
`WorldMaintenanceState::battle_mode_flag` (the source `BATTLE_MODE_FLAG`,
not the distinct `PromptState::battle_mode`), ActorWorld appearance swirl and
WorldMaintenance enemy-touched state. Existing `WorldMaintenance::phone` queues the message when the timer
expires; it does not perform this periodic timer decrement.

Other source scheduler clients include `C04F60` scheduling `C04F47` (display
restoration) and `C076C8` scheduling `C0769C` (party status/animation interval
restoration). A door-only callback catalog must keep those other operations
explicitly pending or unsupported; it is not a complete scheduler migration.

## Door producer and callback effects

Both type-3/type-4 helpers return without work when the borrowed demo countdown
is nonzero. Otherwise they reset the generated buffer **before** their later
style/direction guards; those guards cannot be moved ahead of producer reset.
Cell-to-pixel conversion multiplies by eight with 16-bit wrap.

| Branch | Synchronous production | Scheduled completion |
| --- | --- | --- |
| Escalator entrance | If already style12, stop after reset. Otherwise retain the authored control, select facing and target from `C06E02`, set movement flags3, build route, schedule at path count+1, install playback, retain target, set stairs directionFFFF. | `C06E2C` sets style12, flags0, snaps whole XY to target and clears both fractional words. |
| Escalator exit (control bit15) | Requires style12 after reset; sets style0 and flags3, uses the retained entrance direction for target and 16 repeated pad frames, schedules at path count+1, installs playback and clears entrance control. | `C06E4A` sets stairs directionFFFF, style0, flags0, snaps XY and clears fractions. |
| Stair entrance (current style0) | `C0705F` applies the exact control/facing predicate and may write automatic direction even on rejection. On acceptance set facing, clear formation movement-mismatch, set flags3 and stairs direction, build route, clamp zero count to1, append6 direction frames, schedule at count, retain target and install playback. | `C06F82` checks directional target-Y thresholds. When met, set style13, snap XY and clear fractions; otherwise schedule itself after1. |
| Stair exit (current style nonzero) | Use the exit offset tables, build route, clamp zero count to1, append12 direction frames, schedule at count, retain target and install playback. | `C06FED` checks its distinct directional Y thresholds. When met, set stairs directionFFFF, style0, flags0, snap XY and clear fractions; otherwise schedule itself after1. |

The source writes `UNREAD_7E5DBA` during these transitions. All discovered
references are writes; it does not justify a new semantic state owner without
an actual reader. The fields that do need one shared owner are automatic
movement direction, retained escalator entrance control, escalator target XY
and stair target XY, in addition to existing navigation stairs direction.
Keep whole leader state in `InteractionState`, fractions in `WorldControlState`
and the redirect predicate in `WorldPartyState::projection`.

Proposed modules are an immutable `GeneratedInputSequence`/builder, a raw
`GeneratedInputPlayback` owner, `WorldScheduledTasks` with typed callbacks, and
a `WorldDoorTransitions` service borrowing existing world owners. These names
are a proposal, not an API already present. The service must retain operation
identity so a stale or foreign result cannot complete another pending Walk.

## Acceptance required to close type 3/4

Execute the complete original regional producers, not only mocked requests.
Compare generated pad runs/count, immediate install effects, scheduled slot
selection/delay and every world mutation. Then run actual original
`READ_JOYPAD` and `PROCESS_OVERWORLD_TASKS` over subsequent frame phases until
callbacks complete, comparing raw and processed input, countdown, leader
coordinates/fractions/style/facing, navigation, task state and phone timer.
Assert unchanged RNG and unrelated party/actor state.

Include all authored directions and both enter/exit paths; style and demo
early exits; zero route length; negative/wrapped coordinates; fractional
workspace variations; 255-length wrap and zero-pad runs; empty/already-active
playback; recording-bit preservation; playback terminator host-input fallback;
all scheduler pause gates and phone wrap boundary; delay0/1/FFFF; full capacity;
self-rescheduling and later-slot same-pass execution. Keep unsupported source
memory-overflow cases and unowned inputs visible in results.

Runtime integration must prove one producer publication, one enclosing Walk
continuation, and one existing outer trail/camera update. Repeated pending
polls must not append runs or schedule callbacks again. Sampling native draw
snapshots at different rates must not consume input, tasks or phone time.
Door transitions can be marked complete only after these proofs; separate
per-tick escalator, bicycle and automatic movement reducers remain their own
dependencies.
