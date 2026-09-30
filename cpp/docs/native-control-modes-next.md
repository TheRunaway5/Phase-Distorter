# Native world control modes after generated doors

Source audit dated 2026-09-30. The generated door producers, raw playback and
four scheduled callbacks exist. `WorldEscalator` is now implemented and bound
beside `WorldWalking`; actual stair/escalator movement across successive frames
has US/JP source comparison. Checkpoint18 adds `WorldAutomatic`, `WorldBicycle`
and the actual dialogue camera-focus/start/stop commands, bound to those same
Runtime owners. Checkpoint18 acceptance evidence is recorded in the completion checklist. Full battle entry and bicycle mount/dismount remain separate work;
no acknowledgment supplies their missing effects. This document records the
source contract and the remaining dependencies.

Original assembly lives at `/home/eric/Developer/ebsrc`; regional addresses
below were checked against its `build/cpp-dual-clean/out/assembly/{us,jp}/earthbound.dbg`.
Addresses identify reference-test entrypoints only, never native dispatch keys.

| Routine | US | JP | Return |
| --- | --- | --- | --- |
| Control dispatcher `C04C45` | C04C45 | C04EBB | far |
| Escalator `C047CF` | C047CF | C04A56 | near |
| Automatic dispatcher `C04B53` | C04B53 | C04DC9 | near |
| Follow camera actor `C0476D` | C0476D | C049F4 | near |
| Mode-3 direction/countdown `C04AAD` | C04AAD | C04D23 | near |
| Begin mode 3 `C04A88` | C04A88 | C04CFE | far |
| End mode 3 `C04A7B` | C04A7B | C04CF1 | far |
| Battle-entry tail `C0D19B` | C0D19B | C0D165 | far |
| Bicycle `C048D3` | C048D3 | C04B65 | near |
| Bicycle dismount `C03CFD` | C03CFD | C03F64 | far |
| Map direction | C0404F | C042D6 | far |
| Terrain steering `C05B7B` | C05B7B | C05DA9 | far |
| Directional surface `C05CD7` | C05CD7 | C05F05 | far |
| NPC collision | C05FF6 | C06224 | far |
| Door routing `C07526` | C07526 | C07765 | far |
| Eight-way current-frame refresh `C0A780` | C0A780 | C0A75F | far |
| NPC focus selection `C46698` | C46698 | C4440E | far |
| Sprite focus selection `C466A8` | C466A8 | C4441E | far |
| Clear automatic mode `C466B8` | C466B8 | C4442E | far |
| Expand movement deltas `VELOCITY_STORE` | C430EC | C02C4E | far |

## Keep the existing frame and control owners

`C04C45` saves previous movement, clears this tick's movement, clears/decrements
intangibility and checks debug slow stepping before choosing a reducer. A
nonzero **full** automatic-mode word has precedence over walking style 12
(escalator), then style 3 (bicycle), then ordinary walking. After the reducer
returns, the already implemented control owner updates terrain, party trail,
camera and footstep intent once. The reducer must finish before that response.

Stair style 13 uses ordinary `WorldWalking`: that reducer already turns input
into its authored diagonal and retains horizontal-facing presentation. Neither
stair nor escalator door producer sets `automatic_mode`. Once an escalator
entrance callback selects style 12, the next control tick needs the actual
escalator reducer. A generated-input frame does not itself move the leader.

The real frame boundary publishes, increments the borrowed byte counter, runs
`WorldScheduler`, reads `WorldInputPlayback`, and calls existing `poll_input`.
Do not consume playback, run scheduler callbacks, increment frame counters or
call `ActorWorld::advance_tick` inside any movement reducer. A pending service
or repeated work-budget poll is still the same control tick. Actor following
must happen through the same existing scene/actor traversal.

## Escalator: small reducer, unusual unconditional movement

The exact `C047CF` order is:

1. Return immediately when `WorldMaintenanceState::enemy_touched` is nonzero.
2. If the actual appearance `battle_swirl_ticks` is nonzero, decrement it and
   return. Unlike walking/bicycle, a 1-to-0 transition does **not** assign the
   prompt battle-mode word and does not run NPC collision.
3. Read `WorldDoorTransitionState::escalator_entrance & 0x0300`; directions
   0/1/2/3 map to 7/1/5/3 (NW/NE/SW/SE). Other control bits do not change this.
4. Invalidate only `navigation.ladder_stairs.x`, retain Y. Run real terrain
   steering at the **current** whole leader XY, before velocity addition.
   Publish the same probe origin/flags, redirect flag, final direction,
   surface-write counter, vertical obstacles and ladder cell as walking.
5. If the probe leaves a valid ladder X, finish the actual `WorldDoors`
   operation, including its real producer when present.
6. Apply the style-12 raw 32-bit X/Y deltas for the direction chosen in step 3
   to the **live** leader XY/fractions after the door returns; set
   `control.moved_this_tick = 1`.

Both steering/terrain collision and door permission are intentionally ignored
for movement. The source executes `LDX #1` immediately before `BEQ`, so that
branch cannot skip displacement. A redirected probe does not change the speed
selection. The called routines have separate direct-page locals, so the
caller's saved direction survives their temporaries. A door may synchronously
change walking style or install playback; the remainder still uses style 12
and the original direction for this one tick.

No mushroom remap, host input sample, NPC collision, hotspot evaluation,
`movement_counter` increment, leader-facing write or terrain speed multiplier
belongs in this reducer. Borrow `WalkingData::raw_delta`, actual appearance,
maintenance, leader/control/formation/navigation, `WorldMovement`, collision,
area, queue and shared doors. Borrow existing transition state; do not copy
entrance direction into another authoritative owner. A door continuation must
retain operation identity and fail on abandonment, as walking does.

## Automatic mode 1: timed displacement

`C04B53` selects `leader_direction`, except style 13 selects the existing
`WorldDoorTransitionState::automatic_direction`. It then dispatches on only
`automatic_mode & 0xff`. Modes other than 1/2/3 are an actual no-op; in
particular a full nonzero word with low byte zero must not fall back to walking.

Mode 1 adds the raw 32-bit deltas for the current walking style and selected
direction to leader whole/fraction XY, decrements the full 16-bit remaining
movement count, then on zero clears the full automatic-mode word and restores
the saved walking-style **word**. Finally it sets moved_this_tick to 1. Starting
count zero wraps to FFFF. It has no collision, enemy, swirl, input, terrain,
phone, trail or camera work of its own.

The two additional persistent words have no native owner yet:

| Meaning | Source game offset US | JP | Suggested ownership |
| --- | --- | --- | --- |
| Remaining automatic movement ticks (`unknownB2`) | 178 | 175 | extend actual WorldControlState |
| Walking style to restore (`unknownB4`, word read) | 180 | 177 | same control owner |

Do not duplicate mode/XY/fractions or the stair direction. Find and connect the
real story/save entry that starts timed movement before calling this mode
complete in the running game. The assembly symbol search finds initialization
and consumers, not a named producer for the two words; imported story writes
and save-state projection therefore need inspection. An isolated mode-1 test
can seed authoritative values, but cannot prove that production start path.

## Automatic mode 2: camera focus actor

`C0476D` reads the full fixed-point X/Y and direction of `CAMERA_FOCUS_ENTITY`.
It compares **both fractions and both whole coordinates** against leader state,
sets moved_this_tick to 0 or 1 from that comparison, copies all four position
words, then copies direction. It does not alter actor positions, style,
automatic mode, movement counter, velocity, target identity or input. A facing
change alone sets moved_this_tick to zero.

The native world currently has no focus-actor owner. Introduce one stable
optional `ActorId` in the actual automatic-control state and have the real
story selectors update it. Do not substitute the party leader, camera's last
pixel, first visible actor or a retained numeric physical slot.

The original selectors are `C46698` -> `C4605A` (NPC ID; US C4605A, JP C43DA8)
and `C466A8` -> `C46028` (sprite ID; US C46028, JP C43D76). They select mode 2
after searching ascending source records. Those helpers do not test liveness
before comparing identity; native selection must resolve the intended live
actor from imported identity/lifecycle evidence, and explicitly reject a
missing target instead of turning source FFFF into an actor. Preserve source
precedence for authored actors and specify native extension order for untagged
ones. `C466B8` clears mode and moved_this_tick; it does not reset focus storage.

This mode is directly relevant to title/demo camera ownership. Its completion
must be shown with the actual authored selector and a moving non-leader actor,
not only by assigning the camera coordinates from a synthetic leader pose.

## Automatic mode 3: facing interval then real battle entry

`C04AAD` decrements `CAMERA_MODE_3_FRAMES_LEFT` before everything else. If it
becomes zero it immediately executes `C04A7B`: restore `CAMERA_MODE_BACKUP` into
automatic_mode, then perform the actual `C0D19B` battle-entry tail. No input
mapping or actor-facing loop runs in that branch. Zero initial count wraps to
FFFF and continues normal input processing.

With a nonzero remaining count, map the existing processed pad through
`WalkingData::direction` and the actual pending-interaction gate. No direction
means return. Otherwise visit physical authored party roles 24..29 in order:
skip absent actors and actors already facing that direction; resolve the
actor's character record (action variable 1), read that character's actual
trail cursor and trail walking style, and skip ladder/rope styles 8/7. For
remaining actors update direction and perform the real eight-way current-frame
artwork refresh (`C0A780`/`C0A794`). Finally update leader_direction. Do not
advance animation or rebuild/replace creation geometry; preserve existing
animation byte offset and current surface for `SpriteAppearance::select_eight`.
The source changes a current-character scratch pointer but requires no second
persistent character owner for it.

The shared `WorldControlState` now owns mode-3 remaining ticks and previous
mode, alongside the focus ActorId and timed-movement words. Existing party records/trail/actors/appearance own everything else in
the non-expiring branch. Current `WorldPartyFollowing` already suppresses its
normal tick when automatic_mode==3; preserve that relationship.

`C04A88` starts this interval with 12 ticks, saves previous mode, selects mode 3,
issues audio effect 2 through `C0AC0C`, then sets
`OVERWORLD_STATUS_SUPPRESSION=1`. Keep that audio request on the existing audio
adapter. `WorldMaintenanceState::overworld_status_suppression` owns the shared flag;
its status consumers remain to be connected. The producer suspends at the
actual ordered audio boundary and writes the flag only after that command.

The expiry tail is substantial real gameplay, not an acknowledgment: clear
enemy_touched, calculate initiative from touched enemy and pathfinding-target
actor directions/positions, set swirl countdown 120, derive current battle
group, run the real swirl service, collect eligible enemy IDs/counts, run
`FIND_PATH_TO_PARTY`, choose nearby candidates, change their path/visibility/
callback-enable state, and append the touched enemy to the battle roster.
`WorldEnemies` must supply actual identity/lifecycle and the eventual native
battle-entry owner must perform these effects. A typed pending BattleEntry
operation is an honest intermediate boundary; returning success from an empty
handler is not mode-3 completion. This battle tail is not needed to finish the
escalator/ordinary stair control path, so it must not stall that smaller real
integration.

## Remaining focus lifetime dependency

`WorldAutomatic` currently selects a live/owned ActorId and rejects a mode2
read after that actor is erased. The original focus is an authored role: it
keeps reading retained XY/fractions/direction after deletion and follows a new
actor created in that role. `ActorWorld::authored_position` now supplies the
retained position, but retained facing and semantic role focus still need an
owner before that branch can be ported faithfully. Likewise, FFFF selectors
can match unused/released metadata in the source; the current native selector
records absence rather than inventing such a record. The live-actor source
comparisons do not claim either branch. Track them as W5a/I4 in the checklist.

## Bicycle dependencies

The source has separate US and JP `C048D3` files/local layouts; run both real
regional entries. Its input is the **previous** moved_this_tick saved by outer
WorldControl, which is already present in `WorldControlRequest`.

Map current processed input before checking swirl. Swirl decrements; a zero
result sets actual `PromptState::battle_mode=FFFF`, otherwise NPC collision
runs at current XY. With no swirl, R press emits the existing bicycle-bell
sound request before later movement decisions. No direction with previous
movement coasts in current facing; no direction without coasting only runs
NPC collision. A diagonal choice resets `BICYCLE_DIAGONAL_TURN_COUNTER` to 4.
A cardinal choice decrements a nonzero counter and retains prior facing while
required by the exact branch order; preserve the original input direction
separately from the coasting/turn-adjusted selection.

Apply raw style-3 deltas to proposed fixed-point XY. Invalidate ladder X, query
`WorldCollision::directional_surface` using actual authored role-24 shape and
proposed XY (not the current formation leader's shape), then run NPC collision
using the actual current formation leader. Publish checked origin and temporary
surface flags; directional edge queries do not invoke ladder-cell discovery.
Only after no NPC hit increment moved_this_tick and the shared appearance
movement_counter. Terrain flags C0 then clear moved_this_tick and retain old
XY, but leave that movement_counter increment. Otherwise commit proposed XY.
There is no walking terrain-speed multiplier, hotspot pass or door routing.

`WorldControlState::bicycle_turn_frames` owns the diagonal-turn countdown.
Walking and Bicycle now call the same `world_npc_collision` reducer, using
actual formation, candidate order, collision geometry and enemy identities.
Keep bell execution as an ordered audio-adapter intent, without changing audio
implementation. Bicycle mount/dismount is additional actor lifecycle work:
`C03CFD` resets style/trail, deletes/recreates role 24 with the real party
script, performs its explicit scene frames, and disables input for two frames.
Its US-only pending-interaction double wait must not be flattened into a common
regional helper. Movement alone does not complete bicycle gameplay.

## Implementation and remaining acceptance

1. **Implemented:** `WorldEscalator` is bound beside `WorldWalking` in Runtime
   maintenance. Unit tests pass 1,250 checks. Its source reference executes
   actual C047CF, terrain probes, door routing and generated producers: each
   region passes 1,364 complete calls, including 11 early gates, 1,144 actual
   door routes, 992 movements despite collision flags, 70 X wraps and 12 real
   generated routes using the documented zero-X prediction-phase policy.
   Evidence: `build/verification/native-completion/escalator-unit17.log` and
   `escalator-reference17.log`.
2. **Implemented source movement chain:** the real door reference now runs
   producer -> scheduler -> raw input/poll -> actual selected walking/escalator
   reducer with real leader movement, never assigned positions to manufacture
   callback completion. Each region passes 48 flows / 708 frame phases,
   including 672 walking and 36 escalator calls. The correct authored stair
   endpoint pairs are 0↔3 and 1↔2: exit control keeps entrance direction
   `exit_control xor 3`, not its own direction. Actual source examples are
   cells (589,357) control0300 with (591,359) control0000, and (606,357)
   control0200 with (604,359) control0100. Test the complete native outer
   trail/camera/following phase through Runtime independently; reducer/source
   equality does not by itself prove a complete native session. Evidence:
   `build/verification/native-completion/door-transitions17-reference.log`.
3. `WorldAutomatic` implements modes1/2 and the mode3 facing interval.
   `WorldControlCommands` applies CC1FED/EE/EF through the real parser/Scene
   boundary. Runtime binds it to its exact Automatic controller. The source
   actor traversal runs control callbacks before the later physics traversal:
   focus copies the live pre-physics pose; display work must not advance it.
   Full mode3 expiry still requires battle-entry ownership and remains a typed
   pending request without an acknowledgment API.
4. `WorldBicycle` implements motion and ordered bell intents through a required
   adapter callback. Runtime consumes the actual previous-movement word and
   completes its existing terrain/trail/camera phases afterward. The separate
   story task owns mount/dismount lifecycle. That lifecycle and the final
   playable session remain open, independently of movement acceptance.

Reuse `native_world_walking_fixture.hpp`, walking/reference map cache seeding,
real `VELOCITY_STORE`, `native_world_scheduler_reference.cpp` and actual
`WorldDoorTransitions`/playback owners. Use near-call CPU oracles for movement
and far calls for the outer dispatcher/producers. Compare actor and leader
state separately; interpolation and draw output must not change logic counts.
No CPU, bus, RAM-array, callback address or compatibility scratch owner belongs
in production. Render/source-unit proof remains separate from booting and
playing the final native session and delivering the requested binaries.
