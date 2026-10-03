# Offscreen actor loading

`RenderDistance` owns viewport width, camera-reframing allowance and offscreen
padding. Tile capture, artwork preparation and source loading share that policy.
Imported normal/mirrored sprite extents expand placement queries so a tall or
wide sprite is prepared before its anchor enters the draw band. These paths work
without frame interpolation, at every supported even width through 1024.

Stationary Person/Object scripts 8, 605 and 606 have source-verified initial
poses. Their dormant artwork is prepared and drawn without allocating source
actors, running callbacks or advancing randomness. Active NPC identity hands
that artwork back to the source actor. Water overlays, moving poses and other
scripted state remain owned by actual actors.

The desktop native-sprite session enables the guarded world preloader for wider
views. Source NPC and enemy strip planners scan a wider horizontal band during
map loading and scrolling. The extension covers imported horizontal artwork
extents and rounds to the source loader's 64-pixel grid. Source activation and
retention remain unchanged at native width; vertical bounds are unchanged.
Increasing width mid-scene affects subsequent source queries.

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
