# Native bootstrap handoff audit

`WorldStartup` now consumes a real `saves::Session::continue_slot` snapshot into
the live owners. It executes window closing through Runtime, the inventory
transformation rescan, text timing, imported PRE_GAMESTART dialogue, script and
scene-object reset, the actual role-23 controller/initializer, party creation
with movement/window-palette tails, and scene/window palette initialization.
It stops at an explicit, non-acknowledgeable `MapPreparation` request before
`OVERWORLD_INITIALIZE`. This is still an open session boundary, not a playable
native session. `continue_steps()` remains a plan, not the executing consumer.

Checkpoint20 adds the source-verified C039E5 positioning/projection helper as a
separate operation; it does not stand in for map setup. Combined verification
is recorded in [native-engine-checklist.md](native-engine-checklist.md).

## Remaining startup checklist

- [ ] Execute real `OVERWORLD_INITIALIZE` and `LOAD_MAP_AT_POSITION`, including
  special sprite palettes, overlay artwork, palette transitions/backups and
  photograph branches. `WorldRuntime::prepare_area` covers only ordinary map
  content preparation and cannot acknowledge this larger operation.
- [ ] Run actual Buzz Buzz creation and regional window artwork setup.
- [ ] Invoke the implemented C039E5 helper in that completed map sequence.
- [ ] Publish the first playable actor/frame, with the required fade and
  actual session cadence, then integrate the desktop session and save lifecycle.

The startup owner requires the same Inventory and Interactions instances bound
to Runtime. Existing controller/maintenance/follower bindings must match its
borrowed state; all mutations are excluded while another Runtime operation is
active. Movement/area style is one shared field: saved `reserved_90` restores
`moved_this_tick`, while `reserved_92` restores `movement_flags` and the aliased
party artwork style. The separate maintenance battle flag is preserved.

## Verified source entry points

Addresses below were checked against both linked regional debug symbol files in
`/home/eric/Developer/ebsrc/build/cpp-dual-clean/out/assembly/{us,jp}/earthbound.dbg`.
These are audit/oracle identifiers, never a proposed native runtime dispatcher.

| Source operation | US | JP |
| --- | --- | --- |
| `UNKNOWN_C02D29`, initialize world control | `C02D29` | `C02EFE` |
| `VELOCITY_STORE`, expand authored movement deltas | `C430EC` | `C02C4E` |
| `MAIN_LOOP` | `C0B7D8` | `C0B7BE` |
| `UNKNOWN_C0B67F`, enter the restored/new overworld | `C0B67F` | `C0B652` |
| `UNKNOWN_C4D989`, attract sequence | `C4D989` | `C4AC5C` |
| `UNKNOWN_EFE175`, debug world setup | `EFE175` | `EFCA8F` |
| `PLAY_CAST_SCENE` | `C4ED0E` | `C4BF69` |
| `PLAY_CREDITS` | `C4F554` | `C4C594` |

The main sequence is `MAIN_LOOP` -> file selection / `LOAD_GAME_SLOT` ->
`UNKNOWN_C0B67F`. The latter resets the world, creates the real `EVENT_001`
controller in authored role 23, calls `UNKNOWN_C02D29`, then calls `UNKNOWN_C03A24`
to rebuild the party. Map activation, Buzz Buzz, window graphics, and
`UNKNOWN_C039E5` party positioning/projection follow before the first ordinary
actor/frame publication. Attract, debug, cast, and credits setup each also create
role 23 immediately before calling the same initializer.

Source files: `src/unknown/C0/C02D29.asm`, `src/overworld/velocity_store.asm`,
`src/unknown/C0/C0B67F.asm`, `src/system/main.asm`,
`src/system/saves/load_game_slot.asm`, `src/unknown/C4/C4D989{,-jp}.asm`,
`src/unknown/EF/EFE175{,-jp}.asm`, and `src/ending/play_{cast_scene,credits}.asm`
under the source tree above.

## Exact initializer ownership

`UNKNOWN_C02D29` performs these writes in order:

| Source write | Native owner / remaining boundary |
| --- | --- |
| `ENTITY_SIZES[23] = 1` | The actual role-23 actor's `appearance_context.shape`; this is a shape selector, not a hitbox-enable flag. Require the preceding real controller creation. |
| `MINI_GHOST_ENTITY_ID = FFFF` | Clear `WorldMaintenanceState::possession_actor`. This routine does not delete an actor; its caller already reset the scene. |
| `GAME_STATE.unknown88 = 0` | `PartyTrail::next_write = 0`. Preserve the trail points and separate character read cursors. |
| `unknownB0`, `unknownB2`, `unknownB4` words = 0 | `WorldControlState::automatic_mode`, `automatic_ticks`, `automatic_restore_style`. |
| `party_status` byte = 0 | The existing `party::State::party_status`. |
| `current_party_members` word = 24 | `WorldPartyState::current_leader_role`, distinct from the formation-role array and actual actor identity. |
| Six `unknown96` bytes = 0 | The existing `party::State::display_order`. |
| Six `HP_ALERT_SHOWN` words = 0 | `WorldPartyState::hp_alert_shown`, the real six controlled-position latches. Source `C04F9F` later reads/writes these before `SHOW_HP_ALERT`; the later alert consumer remains a separate implementation boundary. |
| `player_controlled_party_count`, `party_count` bytes = 0 | The existing party owner's `controlled_count` and `party_count`. |
| Call `VELOCITY_STORE` | All 14 styles' eight directional XY fixed-point deltas are already expanded by immutable `WalkingData`. Bind the correct regional imported data; do not add another mutable speed table. |
| `PAJAMA_FLAG = GET_EVENT_FLAG(NESS_PAJAMA_FLAG)` | `WorldPartyFollowingState::pajamas` becomes exactly 0 or 1 from the restored live flags. The imported flag-word content at `C30186` in both regions selects `FLG_MYHOME_NES_CHANGE`, 749 / `02ED`. |

US and JP initializer semantics match. The conditional JP code changes the
indexed addressing used to clear `unknown96`; it does not change the six-entry
extent or introduce a different native operation. `VELOCITY_STORE` has different
linked placement but the same expansion algorithm; regional authored tables
remain region-specific. The JP `favourite_thing` field is nine bytes instead of
twelve, so all game-state fields listed here are physically three bytes earlier
than their US offsets (for example the field named `unknownB0` is JP offset
`AD`, and `unknown88` is JP offset `85`). The names are semantic source names,
not common binary offsets. Native save serialization already distinguishes
these layouts; new source oracles must do so as well.

Preserve fields this initializer does not write: leader whole XY, fractional XY,
direction, walking style, moved-this-tick, camera focus, interval/bicycle fields,
membership order, controlled order, formation-role array, trail point contents,
character trail cursors, and ordinary input state. In particular `unknown88` is
the trail writer index, **not** `InteractionState::movement_flags`.

The current-leader selector is separate from `unknownA2` / formation roles in the
source. The native initializer now sets `current_leader_role` while retaining
`WorldPartyState::roles`. Native control, maintenance, NPC collision, and party
movement consume the explicit selector. Actual `UPDATE_PARTY` publishes the
sorted first role for its valid one-to-six actor domain. An explicit count-zero
call underflows the source's unsigned `count - 1` sorting bound and accesses
uninitialized/out-of-array entries before publication; the native owner now
rejects that domain before mutation. An empty `C03A24` rebuild remains valid:
it skips `UPDATE_PARTY`, clears its formation lists, and preserves the
initializer's selector 24. No path fabricates `ActorId{24}` while no role-24
actor exists.

## Implemented startup order and remaining map boundary

WorldStartup implements steps 1–4 below. Step 5 remains open.

1. Consume the `ContinueSnapshot` once into stable live owners: party values,
   flags, world/control values, elapsed time, hotspots, queues and respawn/map
   values. Saved `reserved_90` restores `moved_this_tick`; `reserved_92` restores
   the single shared leader movement-flags/area-style word. Apply the
   initializer's later overwrites in source order rather than treating the
   whole save as current engine state.
2. Execute the existing ordered pre-world steps, including real pending dialogue
   and frame work. Reset old native actors through their owning lifecycles and
   create the role-23 controller with the imported authored script.
3. Execute the initializer against the actual owners above. Validate identities,
   imported regional data, and complete flag storage before partial publication.
   `WorldBootstrap` now performs this leaf operation with the distinct leader
   selector and HP-alert owner. Its `create_controller_and_initialize` entry
   additionally executes the actual role-23 controller creation. The caller
   must finish other outstanding world operations before invoking it; the leaf
   rejects an active actor tick, foreign regions, missing flags, and an occupied
   controller role before resetting state.
4. Run `WorldPartyCreation::begin_rebuild()` against the saved membership list,
   with its real insertion, movement-policy, window-palette, and possible nested
   lifecycle work. A generic acknowledgment cannot stand in for those tails.
5. Continue through real map activation, authored dialogue, timed deliveries,
   window graphics, party positioning/projection, first actor tick, fade, and
   frame publication. Only then publish a usable session. The existing static
   plan alone proves none of those operations ran.

The initializer also explains why a restored `reserved_b0 == 1` does not establish
a reachable timed-movement producer: this path subsequently clears it. A source
symbol-write audit found the B2/B4 zeroing here and the B2 decrement/B4 consumption
in `C04B53`, but no named mode-1 start routine. Do not invent a timed-start API
from the consumer or the save schema.

## Checkpoint19 initializer proof

`native_world_bootstrap_reference.cpp` executes the actual imported C0B67F
fragment from its role-23 allocation bounds through `INIT_ENTITY(EVENT_001,0,0)`
and the complete initializer, stopping before `C03A24`. It also executes repeated
initializer entries after live flag changes. It stubs no source call: the actual
`VELOCITY_STORE` and `GET_EVENT_FLAG` routines run in the test oracle. US and JP
comparisons cover every expanded XY delta, the controller's actual initial task,
position/fractions, variables, full priority word, reset owners, and retained
formation/trail/flag state. No processor or bus exists in the production leaf.

The native unit test creates the controller, then advances the existing live
`WorldPartyCreation` to its first real movement-policy boundary; it leaves that
service pending rather than pretending it completed. The empty-membership case
actually completes its no-actor rebuild and preserves selector 24. These proofs
do not by themselves establish a Continue consumer or a playable first frame.
Checkpoint20's separate WorldStartup proof covers the executing Continue prefix
described above; map setup and the first playable frame remain open.

## Next bounded map-load transaction

Implement a real `WorldMapLoad` operation from `OVERWORLD_INITIALIZE` through
`LOAD_MAP_AT_POSITION` return, then resume Startup at `SPAWN_BUZZ_BUZZ`. Verified
US/JP entries are `C0004B`/`C0004B` (initialize), `C013F6`/`C0140C` (position),
`C008C3`/`C008D3` (sector), and `C02194`/`C021A2` (cleanup). These are source-proof
identifiers, never runtime dispatch keys.

- [ ] Borrow the exact Runtime ActorWorld, enemies, activation/streaming, map
  area/collision, imported map/palette/animation resources, spawn controls,
  interactions, windows, party, clock and RNG. Borrow the same `ScenePalette`
  as startup/contact/encounter. Add only missing semantic ownership: invalidable
  loaded graphics/palette selections, the 224-color map palette backup, palette
  scratch/publication state, and current teleport destination in 8-pixel tile
  units. The map scratch is C496F9's `BUFFER` palette copy, distinct from contact
  C0D4DE's `BUFFER + $2000` backup; keep those native owners separate. The
  destination is distinct from the existing PSI destination ID.
  Reuse `spawn.photograph` and the real prompt/debug owners, not copied flags.
- [ ] Replace source video setup/clear with actual native overworld composition,
  artwork clearing and publication invalidation. Do not recreate BG/VRAM
  registers. Connect authoritative ScenePalette changes to the actual native
  frame colors: Runtime currently draws from AreaPalettes, so updating only the
  separate ScenePalette would leave map load, contact and transitions invisible.
- [ ] Execute cleanup before loading: reset butterfly/capacity-failure/count
  values, preserve spawn counter/limit, remove authored roles where the wrapped
  `uint16(script + 1) > 6`, then clear all thirty collision targets. Use real
  appearance/enemy retirement and detach interaction lifetimes. Preserve source
  population decrement wrap after its initial reset; do not reorder the reset.
- [ ] Resolve the selected sector (including teleport override), arrangements,
  collision/events, palette/tint, animation and overlays. Ordinary special
  sprite palette replacement is already in `WorldPalettes::resolve`, with
  `native_palette_reference` proof; reuse it. `OverlaySprites` already imports
  four overlays/eighteen frames with source pixel proof. Add the missing live
  overlay cursor/reset and rendering owners instead of another importer.
  Same-combination reload retains animated pixels while resetting animation
  counters; current `prepare_area` always copies base artwork. Cold startup's
  invalidated selection permits fresh artwork, but reusable loading must retain
  the source distinction.
- [ ] Publish window/map colors, copy palettes 2–15 into the map backup and
  perform the actual wipe/scratch semantics. Ordinary initialization can first
  cover inactive fade, non-photograph, ordinary debug state. Active fade waits,
  photograph palette/configuration and debug artwork branches require their
  actual owners; reject or retain these dependencies before mutations rather
  than acknowledging unsupported branches. Photo mode skips overlay/animation
  initialization and has distinct palette/wipe behavior.
- [ ] Execute the existing initial WorldStreaming sequence: 32 NPC rows followed
  by 48 enemy rows, real shared RNG/collision and actor creation, camera at
  center minus (128,112), and final source spawn mode/origin. Native direct map
  and collision sampling replaces the source row caches. Work yields must not
  tick actors, poll input or publish a frame.
- [ ] Before declaring the first interactive frame, connect TALK to the actual
  live ActorWorld collision geometry. The current separate Interactions
  participant registry requires every live actor, while startup/streaming do
  not attach newly created actors or the bare controller. Do not fabricate
  creation metadata to satisfy that older interface.
- [ ] Extend the complete original C0B67F oracle past map loading to the next
  `SPAWN_BUZZ_BUZZ` call. Compare selection, preserved/removed actor roles,
  population, camera/origin, collision/map pixels, palette and overlay pixels,
  animation start state, exact RNG consumption, and zero extra logical ticks.
  Cover both regional packs, ordinary palette/event branches, repeated same
  combinations and camera boundaries. Add explicit tests for pending fade,
  photo/debug rejection or real handling, failure poisoning, foreign owners,
  and publication blocked until actual loading/capture completes. This proves
  map loading only; Buzz Buzz, timed deliveries, window artwork, fade and first
  playable publication remain subsequent source operations.
