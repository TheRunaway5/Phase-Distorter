# Native enemy behavior continuation

Checkpoint21 scoped implementation, 2026-09-30. `WorldEnemyBehavior` now
runs the ordinary `EVENT_19`, `EVENT_24` and `EVENT_28` loops through the
existing actor, task, enemy, collision and world Runtime owners. The later
families below and global native game-session acceptance remain unchecked.
Audio was not changed.

`native-action-services.tsv` records first reachable unsupported calls. It is
not the complete dependency graph: admitting one opaque call exposes later
calls and their inline operands. In particular, `EVENT_19` continues from its
distance gate through leader targeting, chase/flee angle, velocity, facing and
distance-based task sleep. The complete loop is now covered by the scoped proof below.

- [x] Add the actual distance gates `C0C48F` / JP `C0C471` and `C0C4AF` /
  JP `C0C491`, including their classifiers `C0C363` / JP `C0C345` and
  `C0C3F9` / JP `C0C3DB`. Nonzero actor path state returns zero immediately;
  otherwise player intangibility returns `FFFF`; otherwise classify wrapped
  whole-coordinate Manhattan distance. The normal thresholds are 128, 160,
  256 and the short thresholds 64, 80, 128. Preserve the original signed-word
  subtraction/carry behavior at overflow edges. Borrow the actual actor,
  `npcs::InteractionState` leader coordinates and
  `ActorWorld::appearance_scene().intangibility_ticks`.
- [x] Add leader-target capture `C46B65` / JP `C448E1`, writing that actor's
  variables 6/7. Add chase/flee angle `C0C62B` / JP `C0C60D`, which calls the
  existing exact angle algorithm and conditionally adds `8000`. Its actual
  flee predicate is `C0C524` / JP `C0C506`: first check the battle entry's
  run-away event flag/state, then compare party level sum against enemy level
  times 10, 8 and 6, with retained weakness thresholds 192 and 128. Import
  those immutable battle-entry fields and enemy levels; borrow real event
  flags and `WorldEnemies` battle/enemy/weakness identity. Do not use spawn
  cells as battle IDs or roll fresh randomness for weakness.
- [x] Port that predicate's real level sum `C0546B` / JP `C05699`. It scans
  `party::State::party_count`, includes `display_order` values at most four,
  then uses the corresponding zero-based `controlled_order` to select the
  character's level. The result wraps as a word. It is a sum, not an average,
  and neither membership order nor the current leader replaces these arrays.
- [x] Bind exact velocity `C47044` / JP `C44DC8` using the already proven
  `EnemyMovementData::velocity` and the actor's movement speed; it returns
  the input angle unchanged. Bind moving direction `C46B0A` / JP `C44886`,
  preserving wrapped `(angle + 1000) / 2000` and the entered division helper's
  unsigned behavior. The next existing direction command consumes that result.
  `GeneratedInputData` remains the angle owner; do not add approximate trig.
- [x] Add distance-based sleep `C0A6AD` / JP `C0A68C` and its actual helper
  `C0CBD3` / JP `C0CBB5`. Read its inline word and write the current task's
  sleep count from `(distance << 8) / movement_speed`, preserving the source
  result width and division contract. This needs a typed mutation of the
  existing task owner, not a new frame loop or another actor/physics tick.
- [x] Run unchanged imported `src/data/events/scripts/019.asm` with actual
  `C3A426`, animation task `C3A20E` and contact task `C3A434`, then admit
  `024.asm` and `028.asm` using the short-distance gate. Preserve task order,
  temporary-result propagation, sleep cadence, collision and one ordinary
  physics update per logical frame. Compare complete original helper calls
  and real multi-frame task traversal in both regional packs: idle/chase/flee,
  event-flag branches, level/weakness/threshold edges, interruption by actual
  contact, velocities/fractions, retained route metadata, RNG state and pixels.

Private optimized acceptance:

- `native_world_enemy_behavior_tests`: 2,238 checks across both regions.
- `native_world_enemy_behavior_runtime_tests`: 190 checks across both regions,
  both binding orders and all seven real typed services. The requesting task
  receives the source sleep duration, counts the current pass once, resumes at
  the original boundary, and permits one ordinary physics pass per frame.
  Publication and input still occur at the existing world boundary. Foreign
  owners/tables and generic responses to an unbound behavior service reject.
- `native_world_enemy_behavior_reference`: each regional pack passes 12,839
  whole original helper/frame calls, 2,064 unchanged task passes and 1,277,822
  comparisons. The combined oracle executed 7,393,653 source instructions.
  It compares task cursors/stacks/sleeps, positions/fractions/velocities,
  collision/contact state, animation and pixels, actual imported battle rules
  and enemy levels, event flags and RNG. The idle/chase/flee/contact/blocked
  routes use the actual imported shared contact and animation tasks.

`EVENT_19` enemies occur in real battle rows but no weighted map encounter
choice in either pack. Its reference fixture points a fixture encounter
selector to an existing one-type battle row, then performs actual native
spawning. It preserves original enemy metadata, battle rules and script bytes;
this proves the behavior loop from equal owned identities, not a random-map
spawn association. `EVENT_24` and `EVENT_28` use actual weighted map choices.
No source helper or audio-driver command is replaced with a successful stub.
CPU execution exists only in the reference oracle.

Evidence: `build/verification/native-completion/enemy-behavior21-private.log`.
These are source/unit/integration proofs, not a claim of a complete live native
session or GPU/display verification. Status overlay animation now has its own
[source and rendering proof](native-overlay-playback.md).

Subsequent enemy families have additional real dependencies; the first three
scripts above do not justify marking these complete:

- [ ] `EVENT_20`: moved-this-tick read `C0C35D` / JP `C0C33F` borrows
  `WorldControlState::moved_this_tick`; direct target angle `C46ADB` /
  JP `C44857` uses existing variables 6/7 and the same exact angle owner.
- [ ] `EVENT_26`: callback `C0D7E0` / JP `C0D7A8` reduces nonzero path state
  to one, and charge movement `C0D0E6` / JP `C0D0B0` has real prospective
  terrain, whole-position and speed-reduction effects. It cannot reuse the
  ordinary path follower as an approximation.
- [ ] Butterfly scripts `032.asm` through `034.asm`: direct direction
  `C0C4F7` / JP `C0C4D9`, inline random choice, task/actor pause controls,
  backup-position owner and dialogue/party effects remain. `C0D77F` /
  JP `C0D747` pauses all authored roles except the current role and role23;
  `C0D7B3` / JP `C0D77B` saves whole XY, and `C0D7C7` / JP `C0D78F`
  restores whole XY without clearing fractions. Reuse `ActorWorld`'s retained
  authored pause owner. Route sound requests through the existing adapter;
  do not expand the audio implementation.

For encounters already admitted by contact, the immediate continuation is
instead the actual swirl progression/publication and subsequent battle entry
loop described in [native-encounter-effects-next.md](native-encounter-effects-next.md).
Ordinary source order is actor scripts, `UPDATE_SCREEN`, `C4A7B0`, frame wait;
generic dialogue/frame waits must not advance the swirl. Implementing roaming
AI alone does not complete that separate visible encounter continuation.

Source root: `/home/eric/Developer/ebsrc`. Helpers are in matching
`src/unknown/C0/*.asm` and `src/unknown/C4/*.asm`; direction-to-player is
`src/overworld/get_direction_from_player_to_entity.asm`. Regional addresses
above were checked against `build/cpp-dual-clean/out/assembly/{us,jp}/earthbound.dbg`.
