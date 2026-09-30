# Native engine migration

The active goal, expanded on 2026-09-30, is the remaining native engine migration
**except audio**. Track implementation, integration and acceptance in the
[native engine completion checklist](native-engine-checklist.md). The existing
audio implementation is retained through an explicit adapter. Native world,
gameplay, UI, save/load and rendering must become authoritative in the running
game; isolated native modules do not complete this goal.

The previous sprite-resource milestone is complete: host-managed overworld
allocation/artwork, offscreen resource preparation, consistent CRT Filter
softness, regression checks and the updated Linux launcher. The historical
checkpoints below record that work and the earlier independently built modules.

The non-audio migration must remove main-CPU and graphics emulation from live
gameplay. A future complete native game pipeline would also run without audio
emulation: `MainCpu65816`, `SnesBus`,
`Spc700AudioCpu`, source-address dispatch, opcode semantics, emulated graphics
memory or an emulated audio driver. Reading imported content and interpreting
authored event/music data are separate from executing CPU instructions.

This is not complete. The current `eb_cpp` still uses the compatibility runtime.
The older generated `game/runtime` continuations remain low-level CPU execution,
even though their implementation is C++. Renaming those continuations, changing
their timing or increasing a hardware array does not satisfy the native goal.

## Reproducible failures motivating the migration

Widening source entity activation causes the US title demo to diverge at frame
3,618. The pyramid script loses its actors and the bike sequence reaches the
source allocator's permanent failure loop at `CREATE_ENTITY` when its 88 sprite
graphics blocks are exhausted. Native activation finishes the sequence; retaining
original CPU timing while widening activation still fails. A user also reported
the freeze while walking through Twoson.

The original sprite graphics region ends at video-memory word `$5600`, where
overlay graphics begin, followed by the background tilemap at `$5800`. Its resource
table also ends immediately before gameplay flags in work RAM. Changing the
number 88 would overwrite unrelated state. Host resources need their own storage.

`attract_mode_differential` compares the actual native-width/wide GameSession
paths, including CPU state, script camera/actor pixels, clocks and PCM. Its red
version fails at frame 3,618. Until native entities replace source activation,
the desktop no longer passes display width into the experimental source loader.
This removes the pool-exhaustion trigger, with a known loss of early activation
at the extreme widescreen edges. It is an interim correction, not the native port.

A separate pyramid presentation bug remained after that activation correction:
the wider-view boundary adjustment could shift scenery and actors outside the
demo's fixed circular aperture. The source camera and native framebuffer were
correct, so the earlier execution/native-pixel comparison missed it. Windowed
world effects now retain the authored framing. Synthetic regressions cover main,
subscreen and color-window apertures across a narrowing sector row at both 398
and 522 columns, with unmasked boundary adjustment as a control.
The updated asset regression checks the actual displayed center for 400 pyramid
frames per region, requiring visible, changing content. Removing the fix fails
at US frame 5,126 (398 columns) and JP frame 4,925 (522 columns). Fixed 9,000-frame
US/522 and JP/398 replays pass both the presentation check and existing exact
execution, native-framebuffer and PCM checks through the bicycle sequence.
The installed Linux launcher was also run to frame 5,150 on NVIDIA with Direct
Screen Rendering, a 522-column picture and a 120 FPS limit. The visible party
remains within the aperture; its presented center equals the native picture.

The final native-resource executable is installed in both
`launchers/linux/bin/eb_cpp` and `build/cpp/eb_cpp`, which `launch.sh` prefers.
Both have SHA-256
`2031d89eea31350171feb3ecca561c0c4254dfe46cd11d22da05f353fbbde5f1`.
The installed US build's 5,150-frame headless capture exactly matches both the
native and widescreen pictures from the NVIDIA 120 FPS run; its 522-column
presentation retains all 12,333 visible native pixels in the authored center.
The installed `launch.sh` path also completes 9,000 JP demo frames. These are
Linux delivery checks; existing Windows executables and release archives were
not rebuilt for this milestone.

## Whole-engine roadmap

1. **Sprite content and resources:** immutable indexed host images, authored
   anchors/poses, shared ownership, ordinary memory allocation. No graphics slots,
   VRAM mappings, DMA or OAM identifiers. Compare decoded poses with source draws.
2. **World scenes and entities:** typed positions, camera, collision, movement,
   lifecycle and render visibility; prefetch/render offscreen artwork independently
   of gameplay activation. Preserve authored script order and native simulation
   cadence while drawing at the selected presentation rate.
3. **Scripts, UI and gameplay:** event/action interpreters over authored data,
   title/demo flow, transitions, dialogue, menus, inventory, party, battles,
   enemies, encounters, save/load and endgame. Port every reachable engine helper;
   unsupported content must be explicit during development, never emulated fallback.
4. **Audio (excluded from the current goal):** retain the existing sequencing,
   decoding and mixing implementation through an explicit native-session adapter.
   Replacing the SPC driver is future work, not part of the execution checklist.
5. **Native session and delivery:** frontend talks only to the native session;
   reference machinery is confined to verification targets. Verify both regional
   imports, complete demos, Twoson exploration, dialogue, battle, transitions and
   save/load. Inspect the shipped binary's link graph for emulation dependencies,
   then update `launchers/linux/bin/eb_cpp` and the local `launch.sh` target.

The reference runtime can remain in tests to record expected behavior. The
current goal requires no non-audio reference execution or fallback in the shipped
pipeline. Audio is the explicit exception in this stage. Sprite-only tests or a
short demo do not establish whole-game parity.

## Current native module

`native::SpriteResources` imports sprite definitions and planar artwork into host
storage and supplies shared immutable pose images. Its public interface exposes
content IDs and images, with no processor, hardware memory or frame-pacing types.
The separate `eb_native_engine` library must not link `eb_core`. The asset probe
links only the importer, regional content-layout registry and host draw-list code.

`native::SpriteActors` now owns graphical actors with stable, non-reused IDs and
shared pose images. It prepares their artwork when created, even offscreen.
Camera changes only select commands from those actors, with a 64-pixel overscan
band by default. They never spawn, delete, move or activate gameplay entities.
The module preserves authored part order, upper/lower body layers, palette
selection and depth sorting. Repeated actors share atlas entries. It emits the
same host draw-list type accepted by the OpenGL renderer without any framebuffer,
OAM or video-memory sampling. This is a graphical actor module; it does not yet
implement movement scripts, collision, enemy AI or world activation.

Verification on 2026-09-29:

- Both imported games decode all 464 groups and 4,045 poses. A reference-only
  executable compares 2,551,808 indexed pixels per game with the original sprite
  map/upload routines, including flips and odd-height top padding: exact match.
- The expanded reference runs 16,180 pose/surface cases per game (10,207,232
  indexed pixels), and every native actor draw matches the source's final OAM
  placement. Surface flags 0/4/8/12, per-frame masking opt-out, normal/mirrored
  poses and final Y-minus-one registration are covered. Shallow/deep surfaces
  shift artwork down 8/16 pixels and truncate the bottom; flag 4 alone is normal.
- All 4,045 poses can be held by independent graphical actors and emitted as
  9,968 draw commands simultaneously in each game. A synthetic test creates,
  draws and deletes 20,001 actors; repeated images occupy one atlas entry.
- 144 edge-crossing cases cover both sides at widths 256, 398, 522 and 1,024,
  including mirrored poses. Camera changes, palette changes, destruction and
  repeated presentation samples preserve actor state and previously issued frames.
  World depth is distinct from a sprite's visual Y so jumps/scripted offsets do
  not reorder overlapping actors. Exact top/bottom culling boundaries and
  overlapping foreground pixels are tested, including ASan/UBSan runs.
- Host resources -> host actors -> OpenGL matches the software draw-list
  renderer at five horizontal/vertical fractional positions. The same GPU suite
  checks CRT softness and motion on Mesa and the local NVIDIA context.
- `native_sprite_assets` has no linked CPU, bus, SPC, source continuation or
  instruction-dispatch symbols. `native_sprite_reference` deliberately links the
  old machine only as a test oracle.

These isolated asset/unit/GPU checks established the graphical actor module.
The live ownership adapter described below now connects host artwork to the
frontend's GameSession. Logical gameplay actors remain in the compatibility
runtime, and preloading artwork does not activate their scripts early. Large
atlas sets currently report a texture-page overflow explicitly; multiple texture
pages are also open. This is not a complete native engine or a whole-game port.

## Remaining live graphics ownership boundary

`OverworldSpriteRuntime` now replaces ordinary creation's graphics
and descriptor allocations, reset, release and pose services in the running
compatibility session. Its native drawing path also bypasses ordinary source
descriptors. Ordinary actors, authored custom sprites, animated overlays and
mutable effects now use owned pixels in both ordinary and direct drawing.
The normal frontend selects this owner at startup; `--original-timing` retains
the source resource path. Offscreen artwork preparation and the independent
actor-clock policy are described with their integration evidence below.

Expanded source activation must remain disabled after that change too: its
ordinary actor/script slots, RNG consumption and script traversal order are a
separate concern. Native world data should prepare graphics outside the viewport,
preserve authored appearance gates and map identity, and hand those identities
over to the active simulation without duplicate or snapped images. A stationary
preview is not a faithful replacement for wandering NPCs or enemy decisions.

## Repeatable checks

The `native_*_tests` targets for sprites, action scripts/programs, actor worlds,
appearance services, NPC catalogs, palettes, world maps and collision queries
run without assets under CTest. The
`native_sprite_assets`, `native_actor_world_assets`, `native_action_program_assets`
and `native_world_scene_assets` executables accept one or more local `.ebpak`
paths and link no compatibility runtime. Their `*_reference` counterparts
deliberately link the source oracle. `native_world_scene_video` takes the same
packs and compares GL readback with native software composition. Use both the
local driver and `SDL_VIDEODRIVER=x11 xvfb-run -a` for the Mesa path.
The attract-mode comparison accepts a pack, width and frame count; use 9,000
frames to cover the pyramid and bicycle scenes. `presentation_differential
--world-replay` provides the Twoson walking route without writing the source save.

The interop tests do not allow the native library to execute reference routines.
Any future native session must report unsupported engine operations during
development rather than invoking the compatibility machine.

## Native action scripts

`native::ActionScripts` owns actor variables, fixed-point position/velocity,
animation, task order, sleeps and typed loop/call stacks. It reads the original
authored action bytecode, not processor instructions. The importer copies eight
declared content ranges per version and validates 895 US or 890 Japanese script
entries. A fetch outside those ranges is an explicit error.

Unported engine calls, callbacks, globals and background operations suspend the
same logic tick with a typed request. Repeated ticks cannot bypass the request;
a handler must answer explicitly. Requests must eventually bind authored
references to named native operations/state fields, never a machine dispatcher
or another simulated RAM array. The whole-tick command budget survives responses
and prevents malformed content from hanging the host.

Real EVENT_23/25 acceleration tasks and the Sky Runner wobble match the original
interpreter for 8,832 combined US/JP ticks. Another 200 synthetic authored ticks
compare arithmetic, variables, positions, animation, signed velocity, loops,
branches, switches, calls/returns and compact commands. Sky Runner then stops at
its unported text-engine handoff as required. Native unit/sanitizer tests cover
task scheduling and requests; these two areas do not yet have source-differential
proof. The engine callback bodies, full actor scheduler and GameSession binding
remain open. Preserve source ordering when integrating: scripts/tick callbacks
for all actors, then movement/projection, then drawing.

## Native NPC placement queries

`native::NpcCatalog` owns authored definitions, placements and map-area identities.
Its read-only rectangle query applies appearance flags, area selection, active
NPC identity exclusion and object/photograph rules while preserving original cell
and list order. It returns initial sprite/direction/script metadata for graphical
preparation, not a simulated actor or a guaranteed current pose. Photograph scripts
are regional (US 799, JP 795). There is no RNG or game-state mutation.

Both regional imports match all 1,584 definitions and 1,582 placements. The
source selector oracle checks 6,615 calls and 7,213 creation requests per game,
plus 36 actual Chaos Theater edge/active-identity cases. It intercepts creation
before the original allocation/scripts; it does not claim live NPC handoff.

The remaining world owner must apply spawn/activation modes, run movement and
animation, and hand prepared identities to active actors without duplication or
position snaps. Gift-box graphics and wandering NPC positions cannot be inferred
from their initial sprite definitions. Procedural enemies require their own native
placement/AI path; this catalog does not invent them.

## Native actor world and appearance

`native::ActorWorld` connects action scripts, typed callbacks, movement,
projection, graphical resources and lifetime. Its source-ordered actor list has
no hardware slot limit. It captures the next actor and script-pause state before
each script pass, permits explicit service requests to resume that same tick,
then runs the separate movement/projection pass. Creation at the current tail
starts scripting next tick but participates in this tick's movement pass;
creation before an unvisited tail can still be reached in this tick. Deleting
the current or next actor preserves traversal. A completed script releases its
host resources, and an NPC identity cannot acquire two active world actors.

Camera callbacks now yield an explicit `NeedsCameraRefresh` boundary before the
next actor or the physics pass. The scene must consume it before resuming;
repeated advance calls cannot skip or repeat it. The captured successor remains
authoritative when refresh creates or deletes actors. Deleting the camera actor
does not discard its already-committed refresh. Tests cover tail creation,
successor deletion, multiple cameras, unchanged camera coordinates and paused
or disabled callbacks. Controlled source/asset fixtures acknowledge the boundary
with activation held steady; no automatic gameplay spawning is implied.

Presentation cannot publish a partial tick or change actor state. Width and
draw frequency do not select which scripts or physics run. Unit tests cover
2,000 simultaneous scripted actors, source traversal edge cases, mid-script
pause/clear behavior, unknown-service suspension, NPC identities, immutable
frames and offscreen readiness. A separate asset executable runs 464 actors
through 256 ticks of the original EVENT_23/25 acceleration tasks in both games,
comparing 256-column and 522-column worlds with different rendering frequencies.
It links no CPU, bus or SPC implementation. This is a controlled motion scene,
not the complete enemy AI scripts or a playable native game session.

The source scheduler oracle compares four actors over 120 ticks per region with
changing pause controls, camera callbacks, planar/spatial/stationary movement
and projection. Two additional mid-script pause/clear cases are compared in each
region. The old per-resume pause check fails this oracle. Reference streaming is
held steady and its final draw is omitted, so this proves scheduling semantics,
not complete scenery streaming or gameplay activation.

`native::CompiledActionProgram` resolves authored references before actor
execution. ActorWorld consumes its native operation tokens, never a table of
runtime machine addresses. The compiler follows script control flow with typed
call/loop state, preserves finite loop counts across content banks and bounds
queued compilation state. Unknown calls with unknown inline operand lengths
end that compilation path. Other declared entries/branches remain usable, but
the world refuses guessed responses to those opaque calls, even if the next
byte happens to be another valid entrypoint. The raw authored VM mode remains
available for isolated reference tests.

Both full action directories compile: 4,880 US / 4,863 Japanese instructions,
1,487 / 1,480 normalized operations and 498 / 494 explicit opaque call boundaries.
Raw and compiled execution match the reference over 9,032 combined motion and
arithmetic/control-flow ticks. Native prefix probes execute 888 ticks and 672
pure operations per region before stopping at required unported services. These
counts are coverage boundaries, not a percentage of the whole game ported.

`native::SpriteAppearance` explicitly latches four/eight-direction artwork and
owns walking timers, standing/forced-refresh flags, battle-swirl suppression,
intangibility flicker and footstep intent. Draw calls cannot advance it. Script
animation values are not automatically interpreted as pose indices: the authored
appearance operation must select the picture. Artwork changes retain creation
geometry and palette; incompatible geometry changes are explicit errors.

Each region passes 35,406 source pose/surface selections, 22,210,560 exact part
pixels, 624 stateful animation ticks and 21 footstep events. Four-direction and
eight-direction loaders have distinct low-bit masking, including unusual frames
with surface-mask flags. Native resource/actor plumbing preserves that format.

`native::AppearanceData` and `apply_appearance_action` bind seven authored
appearance operations, the independent visibility predicate, shape extents and
footstep selection/override/transition policy to the native world. The source's
first/second-frame wrappers always refresh in the action-script calling context:
their branch observes restored workspace flags rather than the visibility
predicate's return. Native operations preserve that observable behavior without
modeling CPU flags. Each region passes 7,854 predicate cases, 3,936 service calls
and 138 ordered sound intents against the source, including coordinate wrapping,
surface modes, timers and intangibility. Sound output remains an intent for the
future native mixer, not an audio-emulation call.

Some appearance routines return their final graphics-upload address. The native
service deliberately has no such value. The compiler performs conservative
temporary-variable liveness over its stack-aware control-flow graph: all 265
appearance calls per region now discard their scalar result on compiled paths. Audited
input contracts distinguish helpers that overwrite the temporary from those
that forward part of it. These helpers remain explicitly unsupported services;
their contracts do not make them native implementations. Unknown services/global
accesses are conservatively treated as readers. Those proven
unused results need no graphics-memory model; other requests commit only if the
service produces a defined semantic value. A live incidental result suspends
before committing timers, artwork, flashing or sound. Tests cover rollback and
defined zero returns, including a would-be footstep that must not leak.

Three calls in each region feed a nonzero branch directly. The source-return
oracle proves successful ordinary refreshes always satisfy that predicate across
13,920 selections and 6,424 allocation/row cases per region, including blank
surface images and physical row splits. The compiler lowers only immediate tests
whose every incoming context establishes that fact, replacing the copied test
with its same-width unconditional jump. It does not fabricate an address or a
numeric result. Mixed paths, separate entrypoints, child-task starts, intervening
reads and overlapping operand bytes prevent lowering. Later scalar consumers
remain live and still require an explicit semantic result.

Compiled tasks may start only at declared roots, and responses must consume the
compiler's exact known inline length; opaque continuations remain suspended.
These checks prevent public task creation or response APIs from bypassing the
control-flow proof. The three real authored loops match raw authored-script
execution supplied with actual source loader returns for 540 native ticks and
137 artwork refreshes per region. Negative source controls retain zero returns
for unchanged walking fingerprints and the separate visibility predicate.

The source input-contract oracle also checks 25 helper prefixes with four incoming values
each per region. It also verifies the window helper's six high-byte-forwarding
returns and unchanged display effects. Compiler tests follow this dependency
through waits and helper returns, retaining it when read and discarding it only
after a proven overwrite.

The actor asset probe runs the unchanged named animation loop `UNKNOWN_C3A0B2`
with 464 host actors per region for 120 ticks, observing its four authored pose
changes. Narrow/wide worlds agree despite different rendering frequencies. No
original graphics pools or CPU/bus/SPC implementation are linked. This verifies
appearance services in the native actor owner; it is not a playable session.

## Native operations and area palettes

`native::ActionBindings` gives authored engine references named native operations.
Pure handlers cover direction/path lock, movement speed, exact diagonal velocity,
surface/collision state, physics, projection and camera callbacks. The source
oracle compares 864 cases per region. Camera checks prove positioning; map and
NPC refresh remain the world owner's responsibility. Appearance bindings use
the native service and explicit return-value policy described above.

`native::WorldPalettes` owns the original area/sprite palettes and sector choices.
It resolves story/day flag branches, ambient tint, grayscale averaging, channel
clamping and the area's sprite-palette override without graphics memory. Both
regions pass 3,696 source cases (776,160 opaque colors each) and 2,560 sector
selections each. Fades, animated palette timelines, photographs and UI remain
separate work; steady area colors do not implement those scene effects.

## Native scenery, collision content and composition

`native::WorldMap` imports the entire 256-by-320 block map, 32-by-80 sectors,
20 tilesets, indexed graphics, arrangements, collision patterns and authored
event/animation records. Decompression happens at import. `WorldMapArea` owns
the active combination's event-resolved blocks/collision and animation clocks;
sampling is read-only. Ordered substitutions copy both artwork and collision.
Different areas share immutable content but retain independent animation state.
No loaded map buffer, DMA, graphics memory or source allocator is consulted.

Per region, the original-routine oracle checks 81,920 block lookups, 43,657
event-resolved artwork/collision blocks, 119,046,144 indexed pixels and 2,056
animation ticks. Native tests cover all compression commands, overlapping and
backward copies, malformed imports, event polarity/order, out-of-area borders,
asset lifetime and animation timing. ASan/UBSan checks also pass.

`draw_world_scene` composes this artwork, area colors and immutable actor draw
commands. Wider views extend the logical camera without changing area or actor
activation. Tile registration includes the authored camera-Y-plus-one sampling;
foreground and upper/lower actor priorities remain distinct. Scenery commands
precede actor commands so the GL stencil retains first-opaque sprite ordering
even when foreground art hides that sprite. An initial reversed order failed
an independent GPU probe with 240 incorrect pixels; the corrected order has zero.
Ordinary black backdrops need no extra geometry.

Whole-view software comparisons cover all 31 used combinations, four widths,
fractional camera positions and scene/actor lifetime. The GPU probe compares 45
whole views per game on both Mesa and NVIDIA, including fractional map/actor
positions, transparent sprite parts and scenery occlusion. These verify the
native composition path, not a full game session, UI, transitions or color math.
Atlas overflow is explicit; multiple texture pages remain open.

`native::WorldCollision` imports all 17 shape extents and six obstacle-probe
offsets. It queries native map cells for directional surfaces, perimeter flags,
obstacle masks and the last ladder/stair hit. Authored 16-bit coordinate wrapping
is explicit; the source's modulo-64 collision cache is absent. Queries do not
move actors or mutate surface state. Per region, the source oracle verifies
18,428 edges, 41,463 directions, 4,607 perimeters, 271 tiles, 208,128 probe masks
and policy cases, plus 15 wrapped origins. Unit/source sanitizer checks pass.

`native::WorldMovement` resolves obstacle steering and returned surface flags
over those native map queries. It retains horizontal lookahead, vertical retry
and ladder-coordinate behavior without applying actor displacement or invoking
interactions. Each regional oracle checks 55,680 helper calls and 37,120 complete
resolutions, including 6,312 redirects, 18,312 blocked choices, 2,794 retries and
16 wrapped origins. Optimized and sanitizer checks pass.

`make_actor_spec` constructs source creation defaults from explicit prepared
coordinates, height, variables, direction and phase. It sets half-pixel fractions,
priority one and the initial absolute screen position; later world projection
applies the camera. Imported collision/body metadata is separate. The source
oracle compares 928 creations across all 464 resources per region. Native
identities do not inherit source actor slots or stale task storage.

`plan_camera_refresh` produces ordered NPC/enemy strip requests from an
independently owned streaming origin, columns before rows. Gates are evaluated
at consumption time; planning creates no actors or cache uploads. Both regional
oracles pass 184 traversals, 21,450 ordered requests and 262 activation-gate cases.
The unit suite also covers large moves and signed coordinate wrapping.

These bounded modules were completed before the goal was narrowed. They remain
separate from the shipped session; further whole-engine work is deferred while
live sprite-resource integration is the priority. Party/NPC/enemy collision,
activation and gameplay lifecycle integration remain incomplete.
The complete native overworld owner must bind scene/flag services, schedule map
animation, drive gameplay activation and implement moving-actor handoff. Its
camera refresh must run synchronously inside the actor pass: source refreshes
crossed columns then rows, spawning actors before that traversal continues.
Deferring activation until after `advance_tick` changes scheduling and RNG order.
Creation must use the prepared-state factory where those source defaults apply;
raw `WorldActorSpec` remains intentionally flexible.
Logical party/bicycle roles must be separate from host allocation IDs. Script
replacement must retain identity/list order, and graphics/gameplay release must
be separate and idempotent before actor removal. Enemy counters, butterfly state
and spawn ownership belong to that scene owner.

The source leaves recycled task temporaries uncleared while native tasks own an
initial zero. Entries that read such residue before overwriting it still require
an explicit authored-input audit. Current controlled-script proofs must not be
used as evidence that all gameplay entries satisfy that contract.

Mutable actor worlds, sprite caches and area animation owners are confined to
their owning thread unless callers synchronize them. Imported immutable catalogs
and published frames can be shared. The native modules currently remain separate
from the shipped GameSession. The revised goal prioritizes a verified graphics
ownership adapter over waiting for all scene/gameplay/audio services to be ported.

## Live sprite-resource integration boundary

The source audit identifies one connected ownership change, not an expanded
legacy array. `CREATE_ENTITY` must stop allocating both the 88 graphics blocks
and the independent 0x380-byte spritemap arena. Its logical `INIT_ENTITY` call,
actor creation order, dimensions, hitboxes, collision shape, callbacks and
priority remain observable. Native graphics handles must be associated with an
actor generation, independently of source actor slots and graphics block indices.

The ordinary pose loaders `C0A443` and `C0A794` are the frame-latching boundary.
Requested sprite tables can change through `C07A56` without changing the source
creation sprite ID. Direction, animation and surface fields can also advance
before the next image upload; a renderer must use the latched image, loader
format and surface, rather than reconstructing them from a late memory snapshot.
`C4283F/C42884/C429AE` implement mutable fade artwork and require owned effect
images as well as immutable catalog poses. Script opcode `1C` can install an
explicit authored spritemap instead of ordinary actor graphics.

The source's VRAM destination and beginning-block index are transport metadata.
The spritemap-pointer-high sign bit encodes persistent hiding; the draw gate's
`BVS` observes processor V and does not test pointer bit 0x4000. Release paths
`C020F1/C02140` must preserve enemy counters, butterfly state,
NPC identity clearing and logical removal while freeing the host handle. Draw
paths `C0A0E3/C0A3A4/C0AC43` must preserve priority, visibility and overlay updates.
Both canonical scanline rendering and Direct Screen Rendering need the same
host-image source; replacing only the latter leaves the resource dependency.

Pose-loader return values also reach action-script temporaries through opcode
42/4C. The compiled-program liveness proof is useful but does not cover every
live compatibility caller automatically. A missing semantic return must not be
silently fabricated. A production memory-write observer is also unsuitable:
it disables existing native gameplay batches and can reintroduce stutter.
Integration should use explicit graphics operations, with oracle checks for
frame latching, effects, release/recreation and unchanged gameplay activation.

An opt-in `OverworldSpriteBridge` now exercises host artwork in the existing
runtime. The desktop does not enable it yet. It captures actual draw submissions
and their OAM ordinals in both source draw buffers; matching live actors by a
shared position/tile tuple is ambiguous and caused the wrong actor to be sampled.
The bridge recognizes mapped code aliases without treating executable work RAM
as imported code. Its instruction hooks do not install a memory-write observer,
and a separate source fixture confirms native gameplay batching remains active.

Artwork and draw placement have independent publication times. A source NMI can
update artwork while retaining the prior OAM list. The bridge tags ordinary pose
commands, commits immutable indexed tiles only when each transfer completes, and
resolves them using the retained actor generation and display orientation.
Source queue waits, split rows and copied buses retain their own pending work.
Unsupported mutable/custom artwork explicitly declines host ownership until a
complete later ordinary upload. Source release also invalidates retained host
artwork, because its physical allocation may be reused before the next OAM list;
the compatibility sampler then uses source pixels. These fallbacks are explicit
remaining work for the allocation cutover, not resource independence.

`host_sprite_publication_reference` runs real creation, loaders, OAM emission and
NMI processing in both regions. Its 18 cases per region compare 482,304 pixels,
including positive coverage of mixed old/new artwork, physically split rows,
zero-fill commands and fully submerged sprites. It also checks immediate loads,
ring wrap, an upload spanning two NMIs, pending-copy isolation, and release/reuse
without new OAM. `overworld_sprite_bridge_tests` covers command ownership and
invalidation under ASan/UBSan. The full host/source demo comparison preserves
all CPU, storage, timing, PCM and displayed pixels through 9,000 frames per
region, with positive host-pixel coverage in the pyramid and actual bicycle
sequence. Both regions' attract windows prevent direct capture from being
attempted at all; this is an eligibility rule, not a raster-parity failure.

A separate read-only Twoson replay verifies direct rendering. It checks arrival
at the authored location and actual right/left/diagonal movement and stopping,
then requires canonical, both-margin and direct pixels to survive deliberate
erasure of the original sprite VRAM. Strict US/522 and JP/398 runs respectively
observed 1,899 and 4,380 direct frames backed by currently committed host artwork,
with 62 and 179 exact direct-raster comparisons. The JP bootstrap uses the
existing new-game input script because its local save is empty; neither replay
writes a save. A longer 22,000-frame JP run also preserves exact state, pixels and
PCM. The host-resource GPU and CRT-softness tests pass on NVIDIA and Mesa.

`OverworldSpriteAllocation` supplies the native resource transaction. A
move-only creation lease validates native metadata before committing a stable
resource ID; IDs are independent of source actor slots and never recycled by a
reset. Source-slot bindings remain the adapter's responsibility. Its unit test
holds 4,097 resources, checks lease ownership even between owners sharing a
catalog, preserves the creation palette across artwork changes, and retains
published images after release. The source oracle intercepts only the declared
resource-service boundaries while running original logical creation/deletion
and testing the native image against actual source pose loads. Original graphics
and descriptor pools are poisoned and guarded against access. That controlled
oracle remains separate from the actual runtime integration below.

`OverworldSpriteRuntime` now intercepts resource service entries during normal
session execution, after interrupt arbitration. Creation still runs logical
actor/task initialization, metadata setup and list insertion, while the native
owner replaces both resource allocations and descriptor construction. Pose
services select imported images; deletion retains gameplay bookkeeping and
releases the external resource ID. Copying a bus copies mutable owner state.
Ownership must be selected before execution, since discarded source pools cannot
be reconstructed by toggling back during play. The normal desktop/headless
frontend selects native resources and `LogicalClockPolicy::ActorFrames` before
execution; `--original-timing` selects the original path. Core fixtures keep
resource and clock selection independent and default to original ownership.

The renderer collects native commands in the actual source enqueue order and
priority, publishes them with the corresponding draw buffer, and uses the same
images in canonical, widescreen and direct drawing. Ordinary drawing preserves
visibility flags, borrowed priorities and overlay timers. A newly created actor
without its first selected pose stays transparent rather than exposing reused
graphics. Native parts use dynamic storage without the old OAM capacity limit.
Animated overlays and title/debug custom sprites now use imported immutable
fragments with per-part geometry, palette, priority and flip. The actual custom
draw callback is replaced; its original OBJ memory is not sampled. The original
overlay upload may still run redundantly, but rendering no longer reads it.
Battle rows, Sound Stone and town-map icon paths remain separate source paths;
this is not a complete graphics-engine port. Native actors retained past the
source draw boundary now merge by the source's unsigned world-Y order, linked-list
ties and raw priority class. Overlays stay before their owning body. This avoids
an edge overlap changing simply because one actor is outside the original cull.

The last actual overlay commands are retained with their actor generation when
an actor crosses that cull. Moving the retained bundle never advances an overlay
script or timer. Deletion, slot reuse, custom ownership changes and copied
renderers cannot reuse another actor's fragments. Body and overlay commands use
one motion identity and the same authored anchor during fractional presentation;
independent negative controls detect both missing retention and lagging overlays.

`native::StationaryNpcSprites` prepares dry, stationary people from imported NPC,
map, collision and sprite content. Import-time validation checks the exact
authored programs 8 and 605, including the direction-restoration child task. The
renderer queries the wider view plus overscan without creating logical actors,
running scripts, changing RNG or writing gameplay state. Actual active identities
suppress preparation even before their first pose, while hidden, or outside the
old activation rectangle. A source-selected actor then shares the prepared
placement's motion identity. Area data is cached until map identity or event flags
change. Water actors and wandering programs are excluded because their current
overlay phase or movement cannot be recovered from an initial placement.

The screenshot's exterior musicians are NPCs 328 and 329; the earlier catalog
fixture's IDs 229 and 230 describe the theater interior. Both regional source
references now include the exterior placements among 384 candidates, comparing
211,968 indexed pixels and 2,808 actual scheduler ticks per region. The renderer
reference covers both edges, active-but-unselected and hidden suppression, exact
selected-pose handoff, and repeated rendering without rebuilding the map area.
This does not establish offscreen movement or procedural enemy placement.

NPC and enemy artwork preparation now holds bounded, strong image leases in
native resources. The NPC catalog supplies the declared sprite groups; the
enemy catalog imports encounter cells, conditional weighted lists and battle
groups, including the separate butterfly rules. Preparation includes the wider
view, a 64-pixel pad and the map-boundary recenter overscan. It does not select an
encounter, consume RNG, create actors or predict wandering positions. The first
real pose can acquire the same already-decoded image. This removes loading work
from that handoff without inventing offscreen gameplay.

Each preparation owner copies its own leases and request state. Repeated requests
reuse their resources, scene gates release them, and budget/allocation failures
retain the previous valid set. The default bounds are 4,096 unique images and
64 MiB of indexed image payload per owner. Imports finish before the live native
resource transaction commits. NPC and enemy gates remain independent: disabling
NPC spawning or selecting objects-only mode does not disable enemy preparation.

The NPC source oracle checks 4,290 actual placement queries per region and
210,834 artwork variants. The enemy oracle checks every one of the 20,480 cells,
4,464 actual selector calls and 5,524 requested enemies per region, including
conditional flags, zero-weight rows and butterfly-only sectors. It validates
54,558 leased variants with a measured peak of 168 images / 355,776 bytes. These
are resource-readiness checks; dormant moving actors are not rendered from their
initial placements.

`overworld_sprite_runtime_reference` exercises the production session hooks,
not test substitutions: 30 logical actors demand 600 original graphics blocks
with both pools poisoned from the first creation and all VRAM unchanged. Both
regions pass creation, pose, graphics-only release, full deletion, mapped code
aliases and copied-owner isolation. It additionally compares 432 authored script
return-consumer ticks per region against the original loader continuations.
`native_sprite_draw_tests` covers 400 simultaneous parts, poisoned descriptors
and VRAM, retained-frame isolation, unselected/hidden actors and 56 regional
source overlay-state cases. A source-gate regression covers both processor V
states and three descriptor banks: bank bit 14 is not processor V. Canonical
callbacks retain the real source gate, and far-edge persistent hiding uses the
sign bit instead of incorrectly interpreting bit 14 as a hide flag.

Both regional overlay importers match 18 frames and 5,632 source pixels. The
custom importer matches 10 US / 8 JP frames (10,944 / 7,936 pixels); 40 US / 32 JP
actual callback cases cover every imported frame and priority, exact caller
state and complete indexed raster with OBJ VRAM poisoned and unchanged.

`native_sprite_runtime_smoke` boots the actual native-resource session and traps legacy
pool accesses after the first frame containing a native binding. US/522 and
JP/398 both finish 9,000 frames with the pools poisoned, with positive ordinary
native drawing through the pyramid and bicycle sections. Diagnostic images show
the party and bicycle inside their authored apertures. This is a live integration
smoke test, not a gameplay, timing, audio or full-pixel parity assertion: the
replaced graphics services no longer execute their old instruction sequence.

The read-only Twoson smoke independently reaches the exact authored destination
and exercises right, left, diagonal movement and stopping. The US/522 run covers
3,200 frames and 1,559 native direct frames; JP/398 covers 14,500 frames and 1,992
native direct frames. Both retain guarded, poisoned source pools and verify that
save bytes remain unchanged. Controlled artwork-ownership checks cover both
margins; these do not establish native activation of currently inactive NPCs.

`native_sprite_gameplay_reference` compares ordered logical creation,
pose and deletion inputs against an independently booted source session. Its
first 1,215 US events and 1,216 JP events match, then a deletion differs for
actor byte-slot 12: world Y, facing and variable 4 diverge at source frame 6,130
(JP 6,054). With imported overlay/custom drawing, the US native deletion occurs
at frame 6,044. Actor state still matches at logical update 2,995, but the source
palette fade has reached zero while the native fade has brightness two. Native
then performs four additional actor updates before cleanup. The original palette
fade advances in NMI while actor updates can overrun frames; removing graphics
work changes that relationship. This historical failure motivated the explicit
clock ownership below; it is not evidence of passing gameplay parity. The final
clock rerun still differs at the same event: native cleanup occurs at US frame
6,013 / JP frame 5,972 with the same Y/facing/variable mismatch. Its diagnostic
counter has four extra `C1004E` controller calls. A separate per-pass/NMI trace
shows identical fade start, caller, parameters and logical progress. During the
fifth original actor pass, six hardware fade ticks have already elapsed; the
native fade has advanced five times. This is workload-dependent original scene
timing, not a late native fade start. Padding removed graphics work or substituting
a scene-specific pass count would conceal that difference.

Resource ownership and actor-clock policy are now independent. The separate
`--same-clock` event oracle runs original and native graphics under `ActorFrames`
and stops at every real return of all eight authored attract scenes. It requires
exact ordered creation/pose/deletion inputs, equal pass/fade counts, matching
actor/RNG/input state and no unmatched event tails. It also compares the exact
source SRAM initialization writes and forbids later scene writes. The original
timing oracle is retained unchanged; the same-clock test isolates resource
semantics rather than claiming identical legacy slowdown.

Both complete cycles pass: 1,872 US / 1,874 JP ordered 30-field service events,
5,050 US / 5,112 JP completed actor passes, and 1,788 captured semantic words at
each barrier. These include movement fractions/velocities and all 70 VM cursor,
sleep, link and stack records. Both cores perform the same 15,996 startup SRAM
writes, with none during the eight attract scenes. Hardware counters and
unexamined IRQ tasks are outside this finite comparison. The SRAM observer
disables gameplay batching in this source oracle; separate production smoke and
presentation-rate replays exercise the normal batching path.

The walking oracle's `--same-clock-state` mode also runs both resource owners
under `ActorFrames`. It settles at actual completed actor passes and compares
the ready state plus 900 subsequent MAIN_LOOP boundaries. Its bootstrap uses
the existing 180-pass settling period, the authored debug teleport, then the
existing 300 settling plus four input-drain passes. Both cores use the same
persisted input save; neither copies live state, rewrites RNG nor resets the
hardware frame counter to force agreement.

VM temporaries are compared as raw values except at six exact, content-validated
animation continuations where the next operation overwrites a graphics return
token before observing it. `native_sprite_state_contract_reference` executes
1,935 original/native interpreter cases per region to prove these continuations,
including each sleep phase, both area/path predicate outcomes, surfaces and
arbitrary incoming values. The test-only equivalence requires the same cursor,
sleep and stack depth, a nonzero source return and native success value one;
used stack contents remain part of the surrounding exact state comparison.
Changed content, wrong control state, zero and arbitrary native return values
are rejected. This does not normalize or change any running game's task state.

Both regional walking runs pass the exact ready baseline and all 900 admitted
and completed actor passes, comparing roughly 7,200–7,700 owned state values at
each boundary. US reaches 12 actors, 27 tasks, ten NPC identities and three enemy
identities; JP reaches nine actors, 18 tasks and eight NPC identities. Each route
exercises right, left, both diagonals and stopping, with 412 US / 245 JP native
pose selections after the baseline. The source-proven temporary equivalences
occur 1,077 US / 448 JP times; all other captured values compare directly.
The US original resource path takes 911 hardware frames for those 900 updates,
versus 900 native frames; JP takes 900 on both paths. Thus this proves resource
semantics under the stated actor clock, not unchanged hardware-frame timing.
The debug route uses noclip, infinite HP/PP and enemy-ignore on both cores;
battles and obstacle response remain outside this finite route comparison.

The JP walking input is an initialized save exported from the original source
session, then supplied unchanged to both fresh cores. Separate new-game
bootstrap diagnostics found only two saved hardware TIMER bytes and their four
checksum bytes differed between resource paths; no other SRAM payload differed.
Using one persisted fixture avoids conflating that elapsed-time measurement with
walking state. Its SHA-256 is
`031349766439b32956212791d7ba8f7fa295988b86bd32a83f2edc284158230a`.
Both walking tests compare complete in-memory SRAM at every boundary and leave
the input fixtures and original user save files unchanged.

The paired Twoson movement probe separates authored movement from elapsed frame
cadence. Before clock admission was added, both regions match 900 exact logical
player updates with equal initial checked actor fields and RNG. US source work
completes only 886 updates over 900 physical frames while native work completes
900. Counting each frame also exposes uneven native timing: 21 frames have no
pass and 21 have two. Equal totals alone do not establish a fixed update rate.
The legacy wall-clock comparison remains intentionally strict and red; it is
not silently reclassified as gameplay parity.

An explicit native-only admission boundary now queues an early second enabled
actor pass until the next frame. It advances actual hardware/audio events while
leaving the pending CPU instruction and authored actor pass untouched; it never
pads estimated graphics costs or discards a logical update. Its state belongs to
the bus and copies independently. The original path is unchanged. Both 9,000-frame
regional demo probes now have zero double-pass frames. All eight completed fade
exits per region run one actor pass in every complete fade frame and retain 32
authored passes for brightness 15, step -1, delay 1. These are measured contracts,
not proof that all gameplay work always finishes within a frame.

Two more pieces of repeated source work now have native implementations. The
actor surface query uses imported `WorldCollision` shapes with an explicit
sampler over the current collision cache, preserving dynamic map overrides.
Its adapter writes only the authored result fields and caller return state.
The actual-source oracle covers 2,210 queries and motion callers per region,
including wrap, zero-height shapes and the signed-overflow return boundary.
All registers, non-workspace state, VRAM and save data match; the native calls
retire 22,100 instructions versus the source's 596,180. The current collision
cache remains an explicit compatibility input; this is not a native map loader.

The native maximum-depth selection reads the current linked candidates before
each draw callback. The existing caller still owns visibility, callback execution
and post-callback unlinking; no precomputed order can hide a callback's changes.
The source oracle covers 150 lists and 2,325 callback boundaries per region,
including unsigned depths, ties, noncontiguous slots and intervening depth
changes. It compares the entire workspace and caller state and removes 392,003
source search instructions. These ports preserve 900 exact logical player
updates in the Twoson test, but initially leave two missed US updates. Clock
attribution identifies camera-boundary map-row, map-column and collision-cache
refreshes as the remaining expensive work.

Native map-strip preparation now replaces the tile loops after source allocation
and before source publication. Its sampler explicitly consumes the current
loaded-block and arrangement caches, preserving dynamic overrides. Actual source
allocation and immediate/queued upload calls remain intact. The source oracle
covers 512 complete row/column loaders per region and compares all RAM, VRAM and
return registers. Both Twoson routes now have exactly one actor pass in each of
900 physical frames and preserve all 900 tested logical player states. The strict
legacy wall-clock comparison remains red because the old path misses updates;
the explicit native clock contract is separate from that comparison.

Actor-driven fades now advance at the completed actor-pass boundary. An explicit
audited producer catalog selects that clock; standalone title/menu/battle fades
retain their hardware-frame clock. Mosaic controllers cancel the asynchronous
owner, and an actual disabled-actor return hands ownership back without inventing
a completed pass or advancing twice in one frame. The pure byte-state reducer
matches 110,592 actual source NMI cases per region; the source adapter checks 240
register contracts, all ten producer sites, real NMI publication, copied active
passes, both directions, restart and disabled/nested handoffs. Both regional
9,000-frame demos now complete all eight tested fades in exactly 32 actor passes,
including the JP phase-boundary case that previously completed in 31.

`native_presentation_rate_reference` compares two actual native-resource sessions
while the second draws through `PresentationPipeline` at 60, 120 and 240 Hz.
Both regional 9,000-frame demos preserve exact CPU/APU state, clocks, PCM,
native pixels and publication callbacks. The read-only Twoson runs (4,000 US /
14,500 JP frames) additionally exercise native direct drawing: respectively
5,492 / 8,898 native artwork samples at 120 Hz and 10,986 / 17,796 at 240 Hz, with exact sampled
direct rasters and unchanged save bytes. These checks establish independence
from presentation frequency; they do not establish equivalence to the old
graphics instruction timing or prove every simulation frame meets its deadline.

`native::SpriteEffectCanvas` owns fade/dissolve pixels and immutable snapshots.
Its source oracle compares 23,630 seed cases and 4,352 complete effect steps per
region, including the original seed copy's extra word and eight-direction seed
alignment. The pure effect comparison covers 73,646 source helper calls and
20,944,896 indexed pixels per region. The compatibility effect adapter is wired
before ordinary resource services. Its actual scheduler reference now passes
192 cases, 8,736 scheduler ticks, 15,761,792 published pixels and 192 independent
copied fades per region, with source pools/scratch guarded and OBJ VRAM unchanged.
This includes the source's wider fade grid for narrow artwork and retained
display orientation. The full demo smoke has zero fade-helper calls; effect
coverage comes from this separate scheduler reference, not from the demo.
