# Offscreen actor loading

The desktop session passes the selected source width to `EntityPreload` as
well as the renderer. The source NPC placement queries and enemy sector scans
therefore cover the wide view before actors enter it. The policy works with
interpolation disabled. Native 256-column loading is unchanged.

For a wider view, the extra half-width is rounded up to a 64-pixel enemy sector
and extended by one more sector. Initial map loads and vertical scrolls scan
wider rows; horizontal scrolls query farther-out columns. NPC horizontal spawn
bounds grow by the same amount. The source's existing horizontal retention
bounds grow too, preserving a further 64-pixel gap between NPC activation and
retention. Vertical bounds, map/collision streaming, event flags, allocation,
encounter selection and entity/enemy caps retain their source behavior.

The adapter is opt-in at the translated CPU boundary and checks regional
instruction address, opcode, length and expected operand. It changes the
parameters of existing compiled loaders, not cartridge instruction bytes or
render-time snapshots. The independently translated US and JP paths have
separate verified sites. Rendering-only tools do not enable the adapter.

This is a gameplay activation change: additional actors can update earlier,
and additional enemy-sector queries can consume randomness and change encounter
timing. The fixed source pools still limit crowded scenes. Increasing width
mid-scene affects subsequent source queries; loading a scene with the selected
width fills its wider initial band.

`entity_preload_tests` executes the actual translated NPC/enemy row loaders,
horizontal scroll call sites, NPC spawn gates and actor retention routine for
both regions at 256, 398, 522, 800 and 1024 columns. It checks both edges,
vertical-bound preservation, native behavior and restoration of native bounds.
The same regression with native loading fails at the wider horizontal scan.
A local US asset replay additionally checks active actors while walking both
ways through Twoson; it is not proof for every map or every pool-saturation case.
