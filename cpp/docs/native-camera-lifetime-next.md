# W5a: authored camera targets across actor lifetimes

Implemented native lifetime boundary, 2026-09-30. Camera focus uses a tagged
authored-role or host-actor target. Authored roles survive retirement and reuse;
strict host-only targets still reject deletion. The native world modules and
their source-reference tests implement this boundary. This does not claim that
the shipped frontend has switched to the complete native engine.

## Verified source boundaries

Paths below are relative to `/home/eric/Developer/ebsrc/src`. Addresses were
checked against `build/cpp-dual-clean/out/assembly/{us,jp}/earthbound.dbg`.

| Source | US | JP | Relevant behavior |
| --- | --- | --- | --- |
| `unknown/C4/C4605A.asm` | C4605A | C43DA8 | NPC selector scans all 30 numeric roles, without a script/activity test. |
| `unknown/C4/C46028.asm` | C46028 | C43D76 | Sprite selector does the same. |
| `unknown/C4/C46698.asm` | C46698 | C4440E | Stores NPC search result, then sets automatic mode2. |
| `unknown/C4/C466A8.asm` | C466A8 | C4441E | Stores sprite search result, then sets automatic mode2. |
| `unknown/C4/C466B8.asm` | C466B8 | C4442E | Clears movement/mode; retains focus and countdown. |
| `unknown/C0/C0476D.asm` | C0476D | C049F4 | Reads focused role's XY/fractions and direction without an activity check; movement compares XY/fractions only. |
| `unknown/C0/C04B53.asm` | C04B53 | C04DC9 | Mode dispatcher calls the focus consumer for low-byte mode2. |
| `unknown/C0/C09C35.asm`, `C09C3B.asm` | C09C35 / C09C3B | C09C14 / C09C1A | Ends/unlinks scripts and returns the role to the free list; preserves transform and NPC/sprite metadata. |
| `overworld/actionscript/script/00.asm` | C095F2 | C095D1 | Script END invokes that same script-removal reducer. |
| `unknown/C0/C020F1.asm` | C020F1 | C020FF | Releases appearance, sets sprite/NPC IDs to FFFF; does not remove the script or reset transform. |
| `unknown/C0/C02140.asm` | C02140 | C0214E | Releases appearance/identities first, then removes the script; retains transform. |
| `overworld/init_entity.asm` (`INIT_ENTITY`) | C09321 | C09300 | Assigns XYZ, fractions8000, script state; does not initialize direction or sprite/NPC metadata. |
| `overworld/create_entity.asm` | C01E49 | C01E5F | Calls INIT_ENTITY; additionally assigns sprite ID, NPCFFFF and direction0. |
| `overworld/create_prepared_entity_npc.asm` | C464B5 | C44223 | After graphical creation, assigns prepared direction and NPC ID. |
| `overworld/create_prepared_entity_sprite.asm` | C46507 | C44275 | After graphical creation, assigns prepared direction. |
| `unknown/C0/C03F1E.asm` / `C03F1E-jp.asm` | C03F1E | C0419B | Formation reset writes XY, direction and surface to selected party roles even if their scripts are absent. |
| `unknown/C0/C039E5.asm` | C039E5 | C03C2B | Existing formation coordinate writer; keep fractional words intact. |
| `unknown/C0/C0927C.asm` | C0927C | C0925E | Resets script/free-list ownership; leaves coordinates, direction and sprite metadata intact. |
| `overworld/initialize_misc_object_data.asm` | C01A69 | C01A7F | Sets NPC identities to FFFF, but does not reset sprite IDs or direction. |

`system/reset.asm` clears the backing BSS on a cold boot, so never-created roles
initially have zero position, fractions, direction and sprite selector. The
subsequent misc initializer supplies NPCFFFF. A later scene/script reset must
not be confused with a new cold world: sprite metadata and transforms survive.
`include/enums.asm` defines `ENTITY_COLLISION_NO_OBJECT` as FFFF.

## Implemented semantic ownership

`WorldControlState::camera_focus` is an optional `CameraTarget`, containing a
validated `AuthoredRoleRef` (0..29) or an `ActorId`. Authored NPC/sprite selectors
scan numeric roles, including vacant roles; host-only actors are considered
separately. Mode2 resolves the current live or retained role pose on every call,
compares full XY/fractions, then copies XY/fractions and direction. It performs
no input sample, actor execution or extra frame.

`ActorWorld` reads the actual actor while a role is occupied. Retirement
transfers its semantic pose, selector keys, behavior, appearance context,
collision geometry and `SpriteAppearance` into the vacant role. No dormant
bundle remains authoritative beside a live actor. This is retained native
object state, without sprite slots, emulated record arrays or machine addresses.

The lifecycle operations have distinct effects:

- `retire` models script END/C09C35. It removes the host actor and live ordinary
  NPC index, retains role pose/geometry/artwork and selection metadata, and
  clears the tick callback/pause controls as the source does. Returning a role
  to the free list twice is a no-op.
- Appearance release clears NPC/sprite identity and artwork while preserving
  geometry, behavior and pose. It also removes a real ordinary NPC index after
  a script reset has already suppressed its artwork. Full `erase` composes
  appearance release and script retirement.
- `reset_scripts` rejects an active actor tick or busy enemy spawn before any
  mutation. It retires actors, restores numeric free-role order, suppresses
  retained artwork and clears sprite-hide/pause flags. Selectors, geometry,
  pose and unrelated behavior such as path state survive.
- `create_authored_script` models bare INIT_ENTITY. It inherits dormant
  geometry/behavior/artwork and ordinary NPC ownership; resets XYZ/fractions,
  variables, priority, velocity, animation and callbacks; and allocates a new
  host identity. Its default motion is planar, so Z velocity does not change
  height. A conflicting active ordinary NPC identity fails before allocation.
  Cold or graphically reset roles create no artwork. Graphical CREATE replaces
  appearance metadata and uses its actual creation initialization instead.

Vacant roles expose explicit path, pause and sprite-hide operations for real
engine writers. Sprite hiding uses the existing appearance hide latch, not the
draw-callback selector: bare INIT resets the callback but retains the hide bit.
The source's cold zero geometry is represented as a disabled native hitbox.

`ActorWorld` borrows the actual `WorldEnemies` owner while bound. Retirement
transfers enemy identity/accounting into that owner without retaining a dead
host ID; bare reuse restores the new host ID, and explicit release decrements
its population. Graphical reuse replaces the selector without inventing a
population decrement. Active/retired enemy type comes from WorldEnemies;
ordinary/unowned role fallback distinguishes cold type0 from graphical FFFF.
The type survives appearance release and bare INIT. Enemy provenance remains
bound to the originating world even after a Runtime lease clears its borrowed
pointer; `uses_enemies` separately checks the current active binding.

## Sentinels and unsupported reads

NPC absence has selector FFFF. A pristine sprite selector is zero, released
appearance uses FFFF, and script retirement retains the previous sprite key.
An operand FFFF can therefore select a valid in-range role. A genuine search
miss remains null; the native consumer fails explicitly rather than inventing
coordinates for the source's out-of-range read. Zero and FFFF are not rejected
merely because they are sentinel-shaped values.

The earlier exhaustive scan of declared imported text ranges found 122
`1F EF` and three `1F EE` byte patterns per region, with no literal zero/FFFF
operand. That is content-scan evidence, not a reachability proof. Actual NPC
anchors are 373 (US C79BE1 / JP C53184), 994 (C89C12 / C551DB), and 1088
(C92C9C / C5637E); sprite1 appears at C9B522 / C865B1, and the sprite106 stage
fragment at C79280 / C52843.

## Executed acceptance and proof boundary

`native_world_automatic_reference.cpp` executes the real linked US and JP
initializers, allocator reset, CREATE/prepared-NPC creation, INIT, retirement,
appearance release/full removal, formation coordinate writer, camera selectors
and camera consumer. Lifecycle sequences preserve source and native state
between operations rather than reseeding poses from each other. Coverage
includes roles0/2/21/24/29, replacement without another selector, retained
fractional/facing state, cold/released sentinel matches, and explicit true miss.

The NPC373 chain additionally compares changed shape, hitbox, surface, path,
obstacle, speed and collision metadata across retirement and bare reuse. It
executes the real artwork refresh, checks retained pixels/latches and hide
behavior, compares complete original NPC_COLLISION_CHECK hit/miss calls with
the native collision service, then checks script reset and another bare reuse.
Five role sequences execute the actual default planar callback with nonzero
XYZ velocities and prove that Z remains unchanged. All30 role enemy-type
selectors are checked against source state throughout these sequences.

The enemy lifetime sequence starts at an explicit matched-state boundary:
actual native spawning supplies a group1/cell643 enemy; complete source CREATE
runs, then its enemy-controller metadata is matched once. Subsequent source
retire/select/consume/INIT/release calls run without reseeding. This proves
lifetime, ownership and accounting after that boundary, not source spawn
selection itself. Ordinary NPC creation has no such matched metadata boundary.

`native_world_control_commands_reference.cpp` retains the real imported
focus/wait/stop fragment and Scene checks. Root-owned Runtime acceptance follows
a moving nonleader, then a retired role, a vacant-role write and actual streamed
NPC replacement; it also reselects the replacement and releases it through the
real lifecycle service. Source-reference proofs and native integration checks
are separate evidence; neither is a claim of a full original boot/demo replay.

The formation call in the camera fixture compares its coordinate/facing
writes only; its broader party/trail effects have their own owners/proofs.
Mode3 battle-entry continuations and full frontend integration have separate
acceptance work. Shared acceptance counts and logs belong in the main native
engine checklist, which remains the completion authority.
