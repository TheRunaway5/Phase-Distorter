# Gameplay debug tools

Open **F1 → Debug**. All switches start off and reset when the game session
restarts. Health and PSI/PP stay at 999/999, including the rolling battle targets.
Noclip bypasses terrain and NPC collision. Enemies ignore you suppresses ordinary
overworld pursuit/contact; story-triggered battles remain available.

The party editor chooses Ness, Paula, Jeff and Poo, retains guest companions,
and requires one playable member. It runs the game's own add/remove routines so
the leader, followers and party UI update together. Teleports use the game's
instant transition to load the new map and position followers. Both actions wait
for free movement rather than interrupting dialogue, battle or another transition.
The controls do not advance story flags. Debug changes can affect saved progress.

## Complete destination picker

The searchable list contains 13 town shortcuts, 385 named areas, all 233 non-dummy
scripted warp records, and all 841 door records with landing coordinates: 1,472
choices. Interiors, shops, hotels, dungeons, sanctuaries, cutscene maps, Magicant
and the Cave of the Past are included. A named area's default landing is an
authored warp inside its bounds, or a door landing when it has no warp. It is
never an arbitrary room center. The raw warp/entrance choices expose additional
landings within the same area. Hover a long name to read its full path.

Coordinates come from `src/data/psi_teleport_destinations.asm`,
`src/data/map/teleport_destinations.asm`, and `src/data/map/door_data.asm` in
[Herringway/ebsrc](https://github.com/Herringway/ebsrc), revision
`0197d6c13ef11ad3280e9388e08a646ab1030d15`. Door coordinates reproduce
`DOOR_TRANSITION`, including its direction-dependent X adjustment.
Area identification was cross-checked against the factual room names and map
bounds in [WaysofReading's area index](https://github.com/WaysofReading/Earthbound-Full-Dialogue-Run/blob/main/resources/tables/rooms_and_regions.csv).
The external CSV and game asset data are not bundled. The generated picker holds
place labels and coordinates, with no dialogue, map tiles or artwork.

To regenerate or audit the list using local copies of those references:

```sh
python3 cpp/tools/generate_debug_destinations.py \
  --source-root /path/to/ebsrc \
  --regions /path/to/rooms_and_regions.csv --check
```

Omit `--check` to regenerate `cpp/include/eb/debug_destinations.inc`. Generation
requires an authored landing in every area, unique IDs, in-bounds tile-aligned
coordinates, and the expected source-table counts. These development references
are not required to build or run the standalone port.

## Implementation and verification

`GameDebug` owns commands and regional metadata; the ImGui panel receives copied
snapshots only. Disabled switches install no memory hooks. Noclip and enemy
avoidance override reads without leaving movement flags/timers changed. The
stat hooks filter character/battler writes so damage and PP consumption cannot
escape between host frames. Turning a stat switch off restores its captured
pre-cheat maximum and caps the current/target value to that maximum.

Party changes use real JSL/RTL calls at the main-loop boundary and preserve the
suspended CPU registers. Teleports temporarily redirect the unused PSI table
slot's coordinate reads using each region's actual record layout; no ROM bytes
are modified, and the override is removed when the transition finishes.

`game_debug_tests` checks catalogue coverage, both regional layouts, write-time
HP/PP protection, enemy exclusion, timer/flag preservation, disabled behavior,
party validation, transition gating and temporary-coordinate cleanup. Optional
asset-backed routes in both games change the party to all four characters,
Jeff alone, and all four again; teleport to Fourside, Threed, Fourside's hotel
lobby, Stonehenge Base, Magicant, the Cave of the Past and Ness's room; then
walk through a wall with noclip. All seven arrivals match their exact map
coordinates. These are representative runtime checks, not a playthrough of
every destination or every story state.

```sh
build/cpp/game_debug_tests
build/cpp/game_debug_tests --assets /path/to/game.ebpak cpp/tests/outdoor_route.input
```

Actual SDL/ImGui event tests toggle every switch, edit the party, select a
searched Sea of Eden destination, and exercise fullscreen hover/hide/click
behavior. The presentation differential fixture also runs a disabled debug
controller on one side to check that default gameplay remains unchanged.
