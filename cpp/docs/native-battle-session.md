# Native command execution and desktop sessions

The native battle pipeline drives command selection, scheduling, action execution,
recovery, victory/defeat/escape, teardown and return through the same live party,
roster, text, input, random, palette and scene owners. Desktop Continue can select
this pipeline with `--native-session N`, where N is an occupied save slot 1–3.
Original content is imported from the user's regional asset pack.

```sh
eb_cpp --assets earthbound.ebpak --save earthbound.srm --native-session 1
```

An existing regional 8192-byte save is required. The default title/new-game
session remains the compatibility implementation. Machine snapshots, cheats and
CPU debugging are unavailable in a native session. Native Continue currently
supports tested world and battle routes; it is not a complete game replacement.
World menus, field actions, doors and town maps extend this route; see
[native world/session scope](native-world-session.md). Unported cinematic and
game-over services stop explicitly when reached.

## Owners and source layout

| Behavior | Native owner and location |
| --- | --- |
| Complete command menu, Goods/PSI submenus, targets, cancel/backtracking and auto-fight | `battle::CommandMenu`, `native/battle/menu/` |
| Physical, PSI, statuses, shields, recovery, items, food, inventory, stealing, Mirror, help and final-battle actions | `battle::actions::Executor`, `native/battle/actions/` |
| Per-actor dispatch, recovery and outcome selection | `battle::Encounter`, `native/story/battle_encounter.cpp` |
| Rewards, growth, loot, loss/escape, copyback and display teardown | `battle::Outcomes`, `native/story/battle_outcomes.cpp` |
| Map/music restoration and source style 3 teleport return | `WorldBattleReturn`, `native/world_battle_return.cpp` |
| Character visibility and authored sprite fades | `WorldCharacterVisibility`, `WorldSpriteFade` and imported Event859 tasks |
| Prepared NPC/sprite creation, direction, script replacement and deferred creation | `WorldNpcCommands`, with the real teleport-return queue consumer |
| Dialogue floating icons and matching removal | `WorldFloatingSprites`, imported icon/shape tables, actual Event785 and retained parent attachment priority |
| Scripted sound, retained sprite coordinates, facing and pause/resume | Actual `NativeAudio`, `ActorWorld`, `WorldEnemyBehavior` and `WorldControlCommands` owners |
| Prospective terrain and ordinary actor collision commands | `WorldActorMovement`, live actor geometry and shared prospective coordinate scratch |
| Scripted prayer teleport, map placement, stationary screen transitions and nested BuzzBuzz text | `WorldScriptTeleport`, `WorldScreenTransition`, retained actual Dialogue parent |
| NPC script yield and dialogue wait | Shared `ActionSceneContext::action_script_state`; actual actor producer and Scene continuation |
| Shared actual world and battle composition | `native/session/`, with separate content, world, battle, service, execution and publication modules |
| Native versus compatibility desktop session selection | `src/desktop_session.hpp` |
| Source SPC program, DSP and host handshakes | `NativeAudio`; gameplay does not run a 65816 CPU |
| Shared physical audio/display timeline, NMI masking, retained peripheral results | `story::AudioFrameClock`, `PeripheralState` |
| Shared live scratch and animation-buffer aliases used by JP window operations | `WindowHost`, `WorldMapLoadState::animation_staging` |
| Homesickness, flags, attacker-side query, bicycle request and HP/PP flipout | `story::SpecialEvents`, `party::MeterFlipout` |

Constructors admit stable borrowed identities before running operations. A
suspended request remains pending until its actual native child completes.
Abandonment poisons the owning continuation. Rendering and repeated presentation
sampling do not poll input, draw random numbers, advance actors, or run audio.

## Timing and graphics

Encounter mode and the battle display flag are separate globals. World entry,
return and movement use the shared `WorldControlState::encounter`; window and
frame services use the live prompt display flag.

Logical scene ticks are distinct from physical NMI publications. A real audio
upload can consume several physical frames; its source NMI mask is respected.
Publication retains the actual scene without acknowledging a pending logical
input/frame child. Desktop bootstrap enables NMI and automatic joypad reads as `GAME_INIT` does.
Autojoy, serial input, interrupt acknowledgments, math results
and completed OAM/palette/PSI transfers have native retained owners.

Battle backgrounds use the full retained physical VRAM image and real layer
layouts. This includes inactive BG4 artwork preserved by the original loader.
Source sprite 0 aliases live hardware at 00:3FCC, so `battle::SpriteReads` borrows
real native peripheral state. It does not substitute a captured sprite or run
the compatibility bus.

The font/window pipeline still presents native glyph images through its logical
publication transport. The US physical VWF allocator and shared original glyph
DMA-ring interleaving are a separate fidelity frontier. Complete original
helper comparisons distinguish logical staged text pixels from displayed PPU
pixels. Exact original instruction-duration/NMI coincidences are not implied by
native fixed logical work. Special-battle comparisons retain any resulting
clock, RNG, palette and retained world-actor differences as failures of that
stronger claim.

The native picture currently supplies no effect-specific flash-filter context or
window exemption mask. Those presentation metadata remain a separate native
integration task; the compatibility session retains its existing filter metadata.

Japanese unfocused `GET_TEXT_X` reads the real retained animation bytes. The
Prayer9 nonzero-X newline updates the same retained cursor words, including the
shared composition reset selected by its aliased font. It does not create a
synthetic visible window. Unowned scrolling aliases still reject explicitly.

The prayer teleports keep their actual dialogue request suspended through map
loading, party relocation, queued NPC creation and nested BuzzBuzz dialogue.
Their original stationary transitions run actual actor and publication frames.
The shared battle publisher follows the live display flag during prayer scenes:
world mode composes the actual loaded map, actors and windows through the same
palette, fade and display transport. Transition cleanup clears its swirl channel
and window mask while retaining the other display channels and window artwork.
Sliding or animated transition records, special trail placement and flyover
callbacks still require their separate producers; admission rejects those
before changing teleport state.

## Validation boundaries

Synthetic regional Continue fixtures exercise actual world startup, encounter,
command menu, actions, victory and 120 subsequent world frames. Twin sessions
compare simulation receipts, canonical pixels and PCM while presentation width
changes repeatedly from 256 through 1024. Original-reference fixtures separately
execute real US/JP callees, input, NMI, SPC and DSP; none replace a command menu
or action with a success return.

- `native_battle_command_menu_reference`: complete menu scenarios, submenus,
  row/column and ally/enemy targeting; logical staged window pixels.
- `native_battle_actions_reference`: every ordinary imported action kind,
  including parameter variants, all prayer rolls and Mirror gates.
- `native_battle_session_reference`: complete victory, defeat and Run callers.
- `native_world_battle_return_reference`: complete world callers after real
  map bootstrap/placement, including ordinary and style3 returns.
- `native_battle_special_completion_reference`: actual world-backed completion for all fourteen special actions in both regions.
- `native_battle_special_actions_reference`: complete special-action probes;
  retain phase-dependent differences and missing cinematic owners explicitly.
- `native_battle_published_background_reference`: complete retained-background
  loaders and real visible PPU pixels for cold and patterned VRAM inputs.
- `native_session_runtime_tests`, `native_session_encounter_tests`: CPU-free
  integrated gameplay/audio/presentation; assets are supplied explicitly.

No cartridge pack, authored dialogue text, decoded art or user save is bundled.
Headless, sanitizer and Wine acceptance do not prove live display VRR, GPU pacing,
controller hardware, every map, every story event or an entire playthrough.
