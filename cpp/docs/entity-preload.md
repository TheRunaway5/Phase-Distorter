# Offscreen actor loading

`RenderDistance` owns viewport width, camera-reframing allowance and offscreen
padding. Tile capture, artwork preparation and source loading share that policy.
Imported normal/mirrored sprite extents expand placement queries so a tall or
wide sprite is prepared before its anchor enters the draw band. These paths work
without frame interpolation, at every supported even width through 1024.

Stationary Person/Object scripts 7, 8, 605, 606 and 693, plus ItemBox
script 9, have source-verified initial poses. Present and trash-container poses
follow their opened flags; sanctuary markers follow their defeated flags. Their
dormant artwork is prepared and drawn without allocating source actors, running
callbacks or advancing randomness. A newly created actor keeps
its prepared artwork until its first source draw, provided its initial pose,
script and authored position still match and it is not explicitly hidden.
Source draw submission then takes sole ownership of its current pose.
Preparation also follows `C0222B`: after the initial map scan switches NPC
spawn mode from 1 to -1, unowned placements inside the original 256 by 224
viewport are excluded. An appearance flag cannot recreate a deleted body or
invent a visible NPC without collision/dialogue. Entity-directed story cameras
exclude unowned dormant previews, keeping scripted replacements and newly
created source actors authoritative.
Preview support leaves the existing source retention
policy unchanged. Water overlays, moving poses and other
scripted state remain owned by actual actors.

The desktop native-sprite session enables the guarded world preloader for wider
views. Source NPC and enemy strip planners scan a wider horizontal band during
map loading and scrolling. The extension covers imported horizontal artwork
extents and rounds to the source loader's 64-pixel grid. Source activation and
retention remain unchanged at native width; vertical bounds are unchanged.
Increasing width mid-scene affects subsequent source queries.

Horizontal scrolling preserves the original NPC column scan and then visits
its wider counterpart. The source call finishes normally; a bounded continuation
runs the second source call with its original inputs and restores the canonical
call's return registers. Native width and non-world scenes add no call. Both
scans retain the authored appearance, duplicate, creation and capacity checks.
Snapshots preserve an in-flight continuation (format 6 and newer).

The previous policy replaced the canonical column with the wider one. Static
placements kept their original activation bounds, so the wider scan rejected
them before they could activate. Walking never rescanned their canonical
column. Prepared artwork then disappeared at the original viewport boundary,
leaving no source actor, collision or dialogue behind it. Initial-map and
isolated cell/row tests missed this because they bypassed horizontal streaming.
`npc_preload_reference` now executes the actual left/right scrolling call sites
in completed-load mode for people, lamps, presents, containers and sanctuary
markers at five widths, under both source runtimes and regional content. It also
saves and resumes exactly between the canonical and additional scans.

Moving NPCs in the proven script 6/12 family can activate earlier. Other NPC
programs retain their original activation until their worker-task lifetime is
proven. Existing source-created actors retain the wider horizontal lifetime.
Unknown programs never receive an invented moving pose.

`SourceEntityAdmission` validates the source's shared 22 ordinary actor roles
and 70 tasks, including queued workers which have not started yet. It reserves
pending canonical NPCs and the remaining authored enemy population before
optional NPC admission. Enemy admission reserves the selected group's remaining
actors and workers before using the source's existing capacity-rejection branch.
A minimum task reserve protects other scheduling. Source programs and directory
entries must match reviewed regional content before their task bounds are used;
content signatures are checked once by the native compatibility owner at load.
Unproven task demand, corrupt lists and insufficient capacity fail closed.

The adapter changes verified parameters of compiled source loaders rather than
patching instruction bytes or mutating render snapshots. Appearance conditions,
selected enemy groups, random draws, terrain checks and creation remain source
work. Wider scans cause NPC and enemy simulation to start earlier and can change
randomness and encounter timing. Fixed source pools still limit crowded scenes;
these changes do not establish universal absence of pop-in.

Ordinary scene gates exclude photograph, debug, battle and incompatible map or
hardware-window effects. NPC enable/object-only conditions remain independent
from enemy enable/chance conditions. New negative or wrapped enemy strip cells
are rejected before entering selectors. The older unguarded NPC/enemy experiment
remains available to source tests through `set_entity_preload_width`, but desktop
sessions do not enable it; that experiment reproduced a title-demo bicycle freeze.

`npc_preload_reference` and `enemy_preload_reference` execute real US/JP source
selection, creation, worker initialization, retention and strip traversal. They
cover both widescreen edges, scene gates, corrupt and exhausted pools, canonical
reservations, map extrema and imported-content rejection. Stationary source and
renderer references separately compare exact poses and edge pixels, including
Twoson benches and people, Threed streetlights and tall Dungeon Man art.
`entity_preload_tests` retains coverage of the disabled unguarded experiment.
