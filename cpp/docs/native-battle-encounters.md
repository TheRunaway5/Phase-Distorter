# Native encounter startup and turn scheduling

The encounter path is split into owners under `include/eb/native/battle` and
`src/native/battle`. Coordinators that drive actual dialogue, window, frame and
party-update operations live under `src/native/story`.

| Module | Source behavior and authority |
| --- | --- |
| `EncounterResources` | Imports opening-message references, music, item drops, NPC metadata and regional message references from the user's local cartridge content. |
| `Admission` | Clears/initializes the actual 32-record `Roster`, uses real guest HP, admits enemies after the sprite-width limit, inserts Buzz Buzz/possession, chooses drops and consumes overworld initiative. |
| `StartupGraphics` | Loads common window graphics, backgrounds and enemy planar art into the retained scratch/VRAM owners; preserves allocation maps and publishes the initial combatants/window palette. |
| `Startup` | Drives normal nonzero-`BATTLE_MODE` startup through opening messages and their final focus close. All child scene/audio/input requests remain real operations. |
| `DeadPlayers` | Complete `CHECK_DEAD_PLAYERS`: reads live rolling HP/PP, clears newly unconscious statuses, runs actual KO dialogue and `UPDATE_PARTY`, and normalizes the party's concentration flag. |
| `TargetSelection` | Complete row lists, target shapes, conscious counts and steal selection against the actual roster, inventory, catalog and RNG. |
| `TurnScheduler` | Round setup, full 16-bit initiative, party selection/backtracking, enemy/NPC/Mirror AI patterns, run decisions and physical actor order. |
| `Rounds` | Coordinates real dead-player checks, meter selection/cleanup, focus changes and initiative/flee dialogue through command selection and actor dispatch. |
| `grammar` | US `CC_1C_14/15` count/gender queries using the live physical selectors, admitted enemy count and conscious display-order count. |

## Calling the native path

Construct these objects with the same stable roster, party, selector, RNG, clock,
window, scene, scratch, display, palette and formation owners. Constructors check
borrowed identities where one dependency could otherwise silently update another
owner. An unfinished operation owns its continuation; dropping it poisons that
coordinator rather than declaring the original routine complete.

Drive `Startup::begin()` to completion. Service the operation's actual `Scene`
child through its typed frame, publication, input and audio requests. Music uses
the supplied real music adapter. Then drive `Rounds::begin_commands()`. A
`menu()` request is the command-menu boundary; submit the actual menu's complete
result, parameter/target fields and used-item byte through `submit_menu()`.
After a ready command phase, `begin_actor()` returns the next physical actor and
whether its action is permitted, after its real pre-dispatch dead-player and
focus work. Execute that action before requesting another actor. Round completion
admits the following command phase. Escape/cancel/defeat remain typed outcomes.

The command-menu body's rendering/navigation/submenus, action executor, subsequent
status recovery, victory/defeat/return sequence and complete `INIT_BATTLE` lifecycle
are separate migration work. These interfaces never acknowledge those bodies as
executed. Mode zero is the original background/PSI debug viewer, not an encounter.

## Sprite-zero hardware dependency

The original sprite-zero loader wraps its table index to a pointer at `00:3FCC`.
Its decompressor reads hardware registers, including controller serial ports,
interrupt status, math results and DMA channel registers. This is not cartridge
artwork. `BattleSpriteReadSource` provides actual sequential reads with their
incoming bus value and side effects, plus the loader's completed multiplication.
`BattleSpriteBus` is a transitional implementation using the real `SnesBus`;
ordinary cartridge imports and native libraries do not depend on CPU execution.

The caller must supply the actual incoming hardware owner, including preceding
publication/DMA state. A cold bus or captured 411-byte output is not a universal
Giygas substitute: the original full startup can decode different lengths when
DMA0 was changed by an earlier NMI. Native logical frame timing is not a claim of
original incidental instruction/NMI timing. Missing read owners reject before
loading mutation. The retained scratch decoder supports source byte/back-reference
wrap; a word store that would cross into another bank rejects explicitly because
it would overwrite an unowned game-state region.

## Evidence boundaries

Tests separate synthetic CPU-free module/coordinator checks from execution of the
actual original US/JP routines. Startup references execute original callees, NMI,
SPC700 and DSP work rather than replacing them with success returns. Scheduling
references use explicitly named continuations on the original main-routine stack;
they prove those segments and helpers, not a completed menu or action executor.
Windows cross-build/Wine results are not native desktop/GPU or controller acceptance.
No authored dialogue or cartridge assets are bundled by this change.
