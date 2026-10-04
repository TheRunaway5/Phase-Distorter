# Gameplay debug tools

Open **F1 → Debug**. All switches start off when a new game session starts;
loading a snapshot restores its switches. Health and PSI/PP stay at 999/999, including the rolling battle targets.
Noclip bypasses terrain and NPC collision. Enemies ignore you suppresses ordinary
overworld pursuit/contact; story-triggered battles remain available.
**Player does max damage** raises successful damage from Ness, Paula, Jeff or
Poo against enemies to 65,535, the damage routine's unsigned 16-bit maximum.
Physical, PSI and damaging item attacks use the same routine. Zero-damage hits,
enemy attacks, guest companions, reflected hits against allies and the game's
special enemy immunity rules retain their ordinary behavior. Character stats
are unchanged, and turning the switch off immediately restores normal damage.

The party editor chooses Ness, Paula, Jeff and Poo, retains guest companions,
and requires one playable member. It runs the game's own add/remove routines so
the leader, followers and party UI update together. Teleports use the game's
blocking fade to black before the instant transition loads the new map and
positions followers, then fade back in. Both actions wait
for free movement rather than interrupting dialogue, battle or another transition.
The controls do not advance story flags. Debug changes can affect saved progress.

## Save state snapshots

In **F1 → Debug → Save state snapshots**, enter a name and click **Save snapshot**.
The list shows each snapshot's name, creation date and game frame. Select a row
to **Load selected** or **Delete selected**. Deletion requires **Confirm delete**;
**Cancel** or Escape keeps the file. **Refresh** rereads the list. Duplicate names
create separate snapshots. Snapshots remain available after closing the game.

A snapshot captures running game state: processors, memory including SRAM,
hardware clocks, audio synthesis, native actor resources, pending game/debug
actions and the current picture. Loading restores that point immediately and
clears the host's abandoned audio and frame history. Display preferences remain
at their current values. A damaged file, unsupported format or a snapshot from
different game content reports an error while the current game keeps running.

Files are stored beneath SDL's application data directory in
`snapshots/earthbound/` and `snapshots/mother2/`, separately from ordinary `.srm`
saves. On Linux the default is
`~/.local/share/ebsrc/EarthBoundCpp/snapshots/`. Snapshot files contain private
game memory and artwork and stay local; they are not shipped with the project.
Normal game saving on exit still uses the restored session's current SRAM.

Snapshot format version 7 preserves the captured story aperture. Version 6
preserves an NPC column scan between its original and wider queries, and version
5 preserves uploaded ending soul departure progress, including when the display
is resized after loading. Versions 1–6 remain loadable; version 4 preserves the
max-damage switch, and versions 1–3 restore that switch as off. Snapshots require
matching game content and a build supporting their format. Future machine-state changes may require
a new version.
The panel queues operations for the application between simulation advances;
it never receives mutable game hardware or file paths from display names.

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
suspended CPU registers. A teleport first calls `FADE_OUT_WITH_MOSAIC` with
mosaic disabled, then waits two native frames so the mirrored blank register
reaches a complete presented frame before setting the destination.
The native instant transition then loads and fades in the new area.
Teleports temporarily redirect the unused PSI table
slot's coordinate reads using each region's actual record layout; no ROM bytes
are modified, and the override is removed when the transition finishes.

`game_debug_tests` checks catalogue coverage, both regional layouts, write-time
HP/PP protection, enemy exclusion, timer/flag preservation, disabled behavior,
party validation, transition gating and temporary-coordinate cleanup. Max-damage
checks run the actual regional damage store and HP reduction through both CPU
backends, verify player/enemy/guest/reflection and disabled boundaries, and check
snapshot restoration including older formats. Optional
asset-backed routes in both games change the party to all four characters,
Jeff alone, and all four again; teleport to Fourside, Threed, Fourside's hotel
lobby, Stonehenge Base, Magicant, the Cave of the Past and Ness's room; then
walk through a wall with noclip. All seven arrivals match their exact map
coordinates. Frame observers verify a gradual fade, a full-width black frame
before loading, and restored brightness after every arrival. These are
representative runtime checks, not a playthrough of
every destination or every story state.

```sh
build/cpp/game_debug_tests
build/cpp/game_debug_tests --assets /path/to/game.ebpak cpp/tests/outdoor_route.input
```

Actual SDL/ImGui event tests toggle every switch, edit the party, select a
searched Sea of Eden destination, and exercise fullscreen hover/hide/click
behavior. The presentation differential fixture also runs a disabled debug
controller on one side to check that default gameplay remains unchanged.

`game_session_snapshot_tests` verifies persistent full-state reloads into fresh
owners, exact continuation, queued audio, observers and atomic rejection of
invalid archives. `snapshot_store_tests` checks disk persistence, names,
metadata-only listing, corruption, bounds and isolated deletion. Snapshot GUI
events and restored cheat controls are included in `debug_panel_tests`.
Optional `game_session_snapshot_reference` comparisons use imported assets and
replays for both regions, source/native timing, native actor resources,
widescreen/direct pictures and PCM at complete and partial-step captures:

```sh
build/cpp/game_session_snapshot_reference --assets /path/to/game.ebpak \
  --replay cpp/tests/new_game.input --frames 14500 --require-gameplay
```

`gameplay_runtime_differential --snapshot FILE` compares a saved desktop
`.ebstate` (or a raw session snapshot) against the frozen original instruction
runtime. It preserves the snapshot's timing policy, debug switches and viewport,
and compares processor/hardware state, ordered writes, completed pictures and
PCM. `--frames` counts additional hardware frames; input-script frame numbers
remain absolute. Supply exactly one matching asset pack and omit timing overrides.
The checker reads snapshots and never updates player saves.

```sh
build/cpp/gameplay_runtime_differential --assets /path/to/earthbound.ebpak \
  --snapshot /path/to/snapshot-0123456789abcdef0123456789abcdef.ebstate \
  --frames 3600 --input-script /path/to/recorded-input.txt
```

## Lost Underworld content route

`lost_underworld_reference` is an optional imported-content regression, built
with `EB_BUILD_TESTS`. It creates a synthetic save in memory and never reads or
writes player save files. Both supported regional asset packs are accepted.

```sh
cmake --build build --target lost_underworld_reference
build/cpp/lost_underworld_reference --assets /path/to/earthbound.ebpak \
  --width 426 --output build/lost-underworld/us-native
build/cpp/lost_underworld_reference --assets /path/to/mother2.ebpak \
  --width 522 --output build/lost-underworld/jp-native
```

Add `--source --width 256` to use the original sprite-resource path. `--output`
is optional and writes PPM captures beneath the supplied filename prefix.
`--geyser 1303`, `--geyser 1304`, or `--geyser 1305` limits a diagnostic run to
one geyser; `--interactions` runs only the village event and NPC/sign checks.
The complete default route exercises all three geysers, five gifts, every
local enemy species and all 20 talk/check interactions. The first blue geyser
and southwest blue geyser restore HP/PP targets; the red geyser cures the tested
ailments. A second eruption after the source lift's landing must leave a
damaged party outside the strict contact radius unchanged.

The actual source scheduler, map loaders, NPC activation, text parser, item
awards and event flags run throughout. Enemy avoidance prevents unrelated
battles from interrupting these assertions; temporary noclip keeps terrain
from trapping traversal and approaches to wandering NPCs. Source-oracle tests
separately cover terrain collision, ordinary enemy behavior/contact and battle
entry. See [the verification record](../STATUS.md#lost-underworld-content-route--2026-10-04)
for tested modes and evidence boundaries.
