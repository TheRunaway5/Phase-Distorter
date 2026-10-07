# Native world session

The optional `--native-session N` Continue route now executes the world command
menu, field actions, authored door entries and town maps through retained native
owners. It imports regional content from the user's verified asset pack. No
dialogue, maps, graphics, audio or battery save is distributed with the engine.

## Structure

| Module | Responsibility |
| --- | --- |
| `native/session/` | Shared world/battle ownership, service execution and immutable frame publication |
| `native/world/menu/` | Command menu, character selection, Goods, Equip, Status, PSI and field action execution |
| `native/world/doors/` | Authored entry prefix, gates, text, map placement and transition continuation |
| `native/world/townmap/` | Imported artwork, labels, window/palette transfers and complete map entry/exit |
| `native/world/teleport/` | PSI travel movement and success/failure continuation |
| `native/world/collision_window.*` | Retained map block/collision ring used by camera updates and offscreen teleport movement |
| `native/dialogue/`, `native/story/` | Imported authored streams, registers, text/window/menu execution and scene lifecycles |
| `native/npcs/`, `native/entities/` | Native interaction, authored role and entity ownership |
| `native/battle/menu/`, `native/battle/actions/` | Shared target selection and complete action routines used by both field and battle callers |

Returning from a world menu resumes the original MAIN_LOOP tail. It does not
dispatch the menu's last button again. Field item/PSI actions use the same party,
inventory, battlers, prepared names, action executor and scene as battles.
Inventory changes run their actual equipment, transformation and Teddy-party
callbacks before their dialogue caller resumes.

The clock distinguishes the software interrupt mirror from retained hardware
NMI enablement. The cold palette-reset path clears the mirror while retaining
the hardware mask. A VBlank wait consumes the resulting real publication once;
it cannot silently lose graphics transfers or publish a duplicate frame.

## Acceptance recorded during development

- Both regional native sessions complete Food Use, Lifeup, an equipment change,
  Status PSI help, an actually walked door and town-map entry/exit, then resume
  world execution. Repeated display sampling preserves canonical pixels and
  stereo PCM, immutable retained frames and battery-save bytes. Gameplay CPU
  instruction counts remain zero.
- The complete original regional world-menu callers cover command/HP/wallet
  entry, Goods browsing/Help/Drop/self Give/other Give/Food Use, Equip, Status,
  PSI and teleport selection/gates. Comparisons include actual input polls,
  authored waits, sound order, RNG, all party fields, prepared names and all
  eight active/saved text register banks.
- Forty complete regional menu callers compare 45,963,008 logical window
  pixels, including Lifeup targeting Paula, retained character selection and
  the Japanese selected-name-only PSI highlight update.
- Original DISPLAY_TEXT comparisons cover CC19_19 inventory selection,
  CC19_21 item subtype, CC19_25 condiment lookup, CC1D0B sell price and CC1D20
  prepared-name equality. Wallet helpers compare wrapped signed arithmetic.
- Town-map artwork and complete display/SpecialEvent7 callers compare pixels,
  OAM, DMA splits, staged/displayed palettes and restoration. Shared battle
  encounter/action/victory/return regressions remain separate acceptance gates.
- Ten complete travel callers per region cover alpha/beta success, failures,
  instant travel, followers and mastery queuing. Reserved party roles, trail,
  retained collision cells/blocks, RNG, waits, palette, queue and final screen
  pixels match. Actual alpha/beta menu sessions resume 120 world calls while
  repeated sampling preserves pixels, PCM and save bytes.

These checks are development evidence. Frozen-source, sanitizer, platform and
installed-artifact receipts must accompany a delivery; passing a standalone
module or a software renderer does not prove a full playthrough or hardware VRR.

## Fidelity boundaries

Original physical NMIs may occur during SNES CPU-heavy palette, map or text
preparation. Native semantic work does not insert artificial SNES instruction
delays. Preserve authored callbacks, RNG, inputs and state while recording such
physical timing differences separately. A source comparison with an unresolved
logical state or callback difference remains a failure.

The door oracle keeps strict physical timing assertions. Its explicit
`--semantic-timing` mode admits only individually proven CPU/NMI coincidences
after exact ordered transition work and final owner comparisons pass. These
are US/JP white style14, JP animated styles11/16 and US slide style33. The last
case returns brightness10 in the original and9 natively because an original
NMI advances the incoming fade before its first authored wait. JP16's outgoing
and incoming poll differences cancel in the total; strict checks expose both
halves. This mode does not establish physical timing or brightness parity.

The Japanese retained-door scratch has six bytes. One retained key writes its
terminal null into the actual shared skip-command and character-padding bytes.
Two or more retained keys reach further adjacent text globals and remain an
explicit owner frontier. Invalid placeholder door records are rejected.

PSI teleport's original action tail uses the destination as a character-record
selector. Destinations 1 through 6 use actual owned party records; higher
selectors require their adjacent source storage and are explicitly rejected.
Standalone travel has its own movement and lifecycle comparisons and must not
be inferred complete from a destination-menu test.

The full travel comparison does not claim the entire ordinary NPC bank. Its
fixture localizes a role0 lifetime difference before travel begins: the source
retains an active scripted slot that native entry retires. Its retained
coordinates survive, but the dormant script selector has no exact query owner.
The unrelated unbound streaming NPC fixture also retains its recorded failure.
These remain world-lifecycle acceptance work rather than hidden travel parity.

General coffee/tea/name-entry/sound-stone/title/cast/credits/photo cinematics,
new-game/title flow, defeat/respawn, physical font DMA and a complete regional
playthrough remain open. Native world/battle integration does not close these.

## Reproduce focused checks

Build the targets with CMake, then supply the verified regional packs to
`native_world_menu_reference`, `native_dialogue_item_query_reference`,
`native_session_menu_tests`, `native_session_item_tests` and
`native_session_door_tests`. The town-map and encounter session programs take
one pack per invocation. Asset-dependent CTest entries skip with code 77 when
no pack is supplied.

Synthetic save export is explicit: the town-map fixture requires
`--export-save FILE.srm`; the door fixture requires `--export FILE.srm`.
An asset-pack argument is never interpreted as an export destination.
