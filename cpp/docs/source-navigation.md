# Finding your way around the source

The handwritten C++ models the console hardware and desktop application. The
generated C++ contains the two games' compiled instruction sites. Start with the
module that owns the behavior, then use the generated source indices when the
behavior comes from the original game program.

## Handwritten modules

| Responsibility | Source | Main types and entry points |
| --- | --- | --- |
| Startup policy, asset selection, owner lifetimes and game switching | [desktop_application.cpp](../src/desktop_application.cpp), [application.hpp](../include/eb/application.hpp) | `run_application`, session composition |
| One game's simulation, debug commands, audio synthesis and frame notifications | [game_session.cpp](../src/game_session.cpp), [game_session.hpp](../include/eb/game_session.hpp) | `GameSession::advance_frame`, `observe_completed_frames`, `take_audio_samples` |
| SDL window/GL/UI ownership and physical input events | [desktop_display.cpp](../src/desktop_display.cpp), [desktop_input.cpp](../src/desktop_input.cpp) | `DesktopDisplay`, internal `DesktopInput` |
| CLI parsing and persisted settings precedence | [launch_options.cpp](../src/launch_options.cpp), [display_preferences.cpp](../src/display_preferences.cpp) | `LaunchOptions`, `parse_options`, `resolve_display_settings` |
| Scripted controller timeline and optional physical button blending | [input_replay.cpp](../src/input_replay.cpp), [input_replay.hpp](../include/eb/input_replay.hpp) | `InputReplay::buttons_for_frame` |
| UTF-8 paths, atomic battery-save replacement and PPM captures | [session_storage.cpp](../src/session_storage.cpp) | `load_save`, `store_save`, `screenshot`, `presentation_screenshot` |
| WAV output and SDL playback device lifetime | [audio_output.cpp](../src/audio_output.cpp) | `WaveFileWriter`, `DeviceAudioQueue` |
| Windows entry point and desktop error reporting | [windows_entry.cpp](../src/windows_entry.cpp) | Platform startup into `run_application` |
| 65816 registers, addressing, instruction semantics, interrupts and bounded gameplay timing | [main_cpu_65816.cpp](../src/main_cpu_65816.cpp), [main_cpu_65816.hpp](../include/eb/main_cpu_65816.hpp), [main_cpu_65816_opcodes.inc](../src/main_cpu_65816_opcodes.inc) | `MainCpu65816`, `step_instruction`, `execute_instruction`, `service_interrupt` |
| Cartridge/work/save memory, CPU I/O, DMA/HDMA, interrupts and master-clock scheduling | [snes_bus.cpp](../src/snes_bus.cpp), [snes_bus.hpp](../include/eb/snes_bus.hpp) | `SnesBus`, `read_byte`, `write_byte`, `advance_master_clocks_with_refresh` |
| PPU register access, VRAM mapping and read buffers | [snes_ppu_registers.cpp](../src/snes_ppu_registers.cpp) | `SnesBus::read_ppu_register`, `write_ppu_register` |
| Native SNES background/sprite sampling, priority, windows and color composition | [snes_ppu_renderer.cpp](../src/snes_ppu_renderer.cpp), [scene_read_view.hpp](../include/eb/scene_read_view.hpp) | `SceneReadView` sampling and `SnesBus::render_scanline` |
| Game-specific wider scenery, entity descriptors, PSI canvas, Lumine Hall and flash references | [game_scene_renderer.cpp](../src/game_scene_renderer.cpp), [game_scene_renderer.hpp](../include/eb/game_scene_renderer.hpp) | `GameSceneRenderer::begin_scanline`, `capture_oam_upload` |
| SPC700 sound-driver execution, boot ROM, ports and timers | [spc700_audio_cpu.cpp](../src/spc700_audio_cpu.cpp), [spc700_audio_cpu.hpp](../include/eb/spc700_audio_cpu.hpp) | `Spc700AudioCpu`, `step_instruction`, `advance_master_clocks` |
| S-DSP synthesis and queued stereo samples | [snes_audio_dsp.cpp](../src/snes_audio_dsp.cpp), [snes_audio_dsp.hpp](../include/eb/snes_audio_dsp.hpp) | `SnesAudioDsp`, `advance_audio_clocks`, `take_stereo_samples` |
| OpenGL upload, scaling and frame display | [frame_presenter.cpp](../src/frame_presenter.cpp) | `FramePresenter` |
| Host deadlines, completed-picture history, filtering and interpolation scheduling | [presentation_pipeline.cpp](../src/presentation_pipeline.cpp), [presentation_pipeline.hpp](../include/eb/presentation_pipeline.hpp) | `PresentationPipeline`, backed by `FramePacer` and `PresentationClock` |
| Host deadline waiting | [presentation_wait.hpp](../include/eb/presentation_wait.hpp) | `wait_for_presentation` |
| Intermediate display frames and selective flash filtering | [frame_interpolator.cpp](../src/frame_interpolator.cpp), [photosensitivity_filter.cpp](../src/photosensitivity_filter.cpp) | `FrameInterpolator`, `PhotosensitivityFilter` |
| Settings UI and opt-in gameplay tools | [debug_panel.cpp](../src/debug_panel.cpp), [game_debug.cpp](../src/game_debug.cpp) | `DebugPanel`, `GameDebug` |
| ROM validation, asset-pack import and cache administration | [asset_store.cpp](../src/asset_store.cpp), [asset_cache.cpp](../src/asset_cache.cpp) | Asset import and cache APIs |

## Simulation and host boundaries

`GameSession` owns the bus, main processor, audio processor, DSP and debug
controller. Its interface accepts a controller mask, advances to a hardware
frame boundary or absolute CPU-step limit, and returns diagnostics, audio and
borrowed picture/save views. It contains no SDL window, physical input polling,
file persistence or host deadline policy. The desktop composition root supplies
those services and destroys the previous session before switching games.

`SnesBus` owns hardware state and the native 256×224 framebuffer.
`GameSceneRenderer` owns its wider picture and scene/effect caches. During a
scanline or completed OAM upload it receives a `SceneReadView`: const memory
spans and source metadata, with no CPU-visible read/write methods or clock
callbacks. The view is synchronous and is not retained. A copied bus therefore
constructs new views into its own memory rather than retaining pointers into the
original instance. This is an ownership boundary; the existing source and
pixel-fidelity limits still apply.

`PresentationPipeline` receives [PresentationFrame](../include/eb/presentation_frame.hpp)
views and explicit host times. It owns filtering state, interpolation history
and presentation deadlines. High-rate endpoints are copied before a completed
frame callback returns; native unfiltered pictures may borrow the producer's
canvas until its next update. `GameSession::observe_completed_frames` delivers
every completed frame, including multiple boundaries crossed by one DMA step.
Consumers must copy or consume these views synchronously and must not re-enter
the session from the callback. Extra calls to display a picture do not invoke
`GameSession::advance_frame`.

`DesktopDisplay` owns SDL/window/GL resources, settings UI and physical input.
It receives copied diagnostics and picture views, and submits explicit debug
requests through `GameDebug`. `DeviceAudioQueue` owns playback while
`WaveFileWriter` owns recording; `GameSession` supplies the same generated
samples to each consumer. Storage functions accept memory spans rather than
owning the session. `resolve_display_settings` loads optional preferences and
then applies only explicit CLI overrides.

`InputReplay` owns the script cursor and held JOY1 mask. It applies every event
whose frame is due, retains that mask until the next change, and combines it
with the supplied physical buttons. The application passes zero physical
buttons for `--replay-only`, while continuing to poll window and settings events.
See [controls and replay](../README.md#controls-and-display) and
[timing/interpolation policy](timing.md) for the user-visible behavior.

## Finding a game routine

In the standalone repository, generated sources live in [generated/](../../generated/).
A build from the original assembly writes the same layout under its configured
generated directory, normally `build/cpp/generated`.

| File | What it tells you |
| --- | --- |
| `program_sources.cmake` | Exact generated compilation inventory used by CMake |
| `us/program_index.json`, `jp/program_index.json` | Source file, source-line range, generated function/file, original address range, instruction count and naming classification for each owning source file |
| `us/program/<subsystem>_<part>.cpp`, `jp/program/<subsystem>_<part>.cpp` | Actual compiled instruction functions grouped by source subsystem, such as battle, overworld, inventory, system, text and miscellaneous |
| `us/game_program_dispatch.cpp`, `jp/game_program_dispatch.cpp` | Address-to-routine dispatch for the selected regional program |
| `translated_dispatch.cpp` | Common entry selecting the US or JP compiled program |
| `audio_program_index.json` | SPC700 source labels, generated functions, original addresses and naming classification |
| `audio_driver_instructions.cpp` | Compiled sound-driver functions grouped by original source label |
| `generated_audio_program.hpp` | Shared audio-program entry declaration |
| `generated_profile.hpp`, `generated_profiles.cpp`, `source_profiles.json` | Named regional hardware/game-state metadata and its values |

For example, the original `src/misc/battlebgs/generate_frame.asm` owns
`execute_miscellaneous_battle_backgrounds_generate_frame_instruction`. The
expanded words come from that source path; both regional versions are currently
in `program/miscellaneous_01.cpp`. The original address remains in each
instruction case. Look up its containing file instead of assuming a ROM bank
owns the entire behavior:

```sh
rg -n 'execute_miscellaneous_battle_backgrounds_generate_frame_instruction' generated/us/program
```

To find all routines owned by a particular source area and print their locations:

```sh
python3 - <<'PY'
import json
from pathlib import Path
index = json.loads(Path('generated/us/program_index.json').read_text())
for routine in index['routines']:
    if 'battlebgs/' in routine['source_file']:
        print(routine['generated_file'], routine['function'], routine['source_file'])
PY
```

The SPC700 index follows actual source labels such as `PLAY_NOTE` and
`READ_PORT_0`. Search `source_label` in `audio_program_index.json`, then open the
reported function in `audio_driver_instructions.cpp`: for example,
`execute_audio_play_note_instruction` and `execute_audio_read_port_0_instruction`.
The boot-ROM instruction
path is separate in `Spc700AudioCpu::execute_boot_rom_instruction`.

Each generated main-CPU case still executes exactly one instruction through
`MainCpu65816::execute_instruction<opcode>`. The source-derived function name
identifies which assembly routine owns that site; calling it is not a C++
translation of the routine's entire high-level algorithm. Nested macros retain
the definition location and caller location in instruction comments. Full
source-generation reports additionally provide `source_map.json`,
`spc_source_map.json`, coverage and alternate-width audits, described in
[translation architecture](../TRANSLATION.md).

Do not hand-edit generated C++ to rename a routine. Update the source evidence or
its generator in [translate.py](../tools/translate.py) or
[spc700.py](../tools/spc700.py), regenerate both regions, and compare the executable
instruction streams. The indices' instruction-stream fingerprints are independent
of the C++ spelling and file grouping. The indices also list `snapshot_overrides`:
nine instruction cases per region preserve the existing snapshot's wider entity
culling bounds and alternate-width entries. The checked-out original assembly
has older bounds. These explicit, guarded overrides preserve the program that
was already running before this naming pass; they are not new source-derived
semantics. The code-only cartridge import template retains the original linked
bytes.

## Register and memory names

The descriptive members retain the original architectural meaning. Assembly
comments, instruction mnemonics and external vector formats continue using the
hardware's register abbreviations so their provenance remains recognizable.

| Hardware register | `MainCpu65816` member | `Spc700AudioCpu` member |
| --- | --- | --- |
| A | `accumulator` | `accumulator` |
| X, Y | `x_index`, `y_index` | `x_index`, `y_index` |
| S / SP | `stack_pointer` | `stack_pointer` |
| D | `direct_page` | No matching register; direct-page selection is a status bit |
| P / PSW | `status_register` | `status_register` |
| DBR | `data_bank` | No bank register |
| PC / PBR:PC | `program_counter` contains the 24-bit bank and offset | `program_counter` is the 16-bit audio address |
| E | `emulation_mode` | No emulation-mode register |

The main processor uses `Accumulator8Bit` and `Index8Bit` for the M/X status
flags. The audio processor's `DirectPage` and `HalfCarry` flags have different
meanings. Shared names such as `Carry`, `Zero`, `Overflow` and `Negative` still
belong to their respective processor's `StatusFlag` enum. See
[65816 behavior](cpu.md) and [SPC700 behavior](spc.md) for validation boundaries.

`SnesBus::work_ram`, `video_ram`, `palette_ram`, `object_attributes` and `save_ram`
replace the WRAM, VRAM, CGRAM, OAM and SRAM abbreviations in the public state.
`main_to_audio_ports` and `audio_to_main_ports` name communication direction.
The sound processor owns `audio_ram` and `dsp_registers`.

Keep clock units explicit: `cycle_count` counts processor cycles;
`SnesBus::master_clocks()` counts SNES master clocks; `completed_frames` counts
hardware frames; and `generated_stereo_frame_count()` counts stereo audio sample
frames. `advance_master_clocks` and `advance_audio_clocks` accept different clock
domains. Presentation FPS is separate from all of them; see
[timing policy](timing.md).

## Regional source metadata

`source_profile(GameVersion)` selects the values derived from that region's
linked symbols. This is the place to identify a game-owned field before reading
or editing it; a US address is not evidence for the Japanese address.

| Profile fields | Meaning |
| --- | --- |
| `character_layout`, `battler_layout` | Table location, record size and named assembly structure offsets, including health, PP and status fields |
| `party_state`, `movement_state` | Party membership/leader positions, movement flags and intangibility timer |
| `action_gates`, `gameplay_routines` | State that delays a debug request and source routine addresses for safe party changes |
| `teleport_state` | Teleport request/style fields, destination table, record size and destination coordinate offsets |
| `gameplay_timing`, `dma_queue` | Entity-update call/return/wait boundaries and graphics-queue producer/completion indices |
| `wram_battle_backgrounds`, `wram_background_scroll`, `wram_flash_timers` | Named background layers, scroll coordinates and authored flash timers |
| `wram_entity_*`, `entity_draw_callbacks` | Published entity script, coordinate, spritemap, animation and drawing state |
| `wram_lumine_text_*`, `rom_map_tile_chunks`, `rom_map_tileset_palette_sectors` | Existing map/text data consumed by the wider renderer |

A character's current HP location is now expressed directly:

```cpp
const auto& character = source_profile(version).character_layout;
const unsigned current_hp_offset = character.table_address
    + character_index * character.entry_size + character.current_hp;
```

That result is an offset into `work_ram`, not a CPU bus address or host pointer.
The `gameplay_routines` and `gameplay_timing` addresses instead contain full
65816 program addresses. `entity_draw_callbacks` contains bank-relative routine
addresses. ROM-prefixed fields are offsets into the cartridge image; structure
members are offsets within the relevant record. Keeping these domains distinct
prevents readable names from concealing an address-space mistake.

The profile emitter rejects mismatched regional schemas. Its readable C++
designated initializers and JSON keys retain all linked values; names such as
`character_layout.current_hp` replace positional metadata such as `debug_char[7]`.
The ten map chunks remain an array because they are an ordered collection of the
same data type, rather than a collection of unrelated meanings.

## What remains unresolved

An assembly filename such as `src/unknown/C0/C0A3A4.asm` identifies a real source
location but does not supply a complete semantic name. Generated `unresolved_*`
files and functions retain that distinction. An SPC label beginning with `UNK`
is likewise classified as unresolved. These markers are useful work queues,
not fabricated function descriptions. The current main-program indices contain
954 source-named and 957 unresolved owning source files for US, and 939
source-named and 895 unresolved files for JP. A source-named classification
means the original path supplied a name, not that every variable or instruction
inside it has been reverse engineered.

A few consumers can name a proven role without claiming to understand the whole
routine: the `screen_space` entity callback reads `ENTITY_SCREEN_X/Y_TABLE`,
while the `world_space` callback reads `ENTITY_ABS_X/Y_TABLE`. The two lightning
strike scripts retain their source event IDs because their complete difference
has not been given a semantic name. When recovering a new name, inspect callers,
inputs, writes and downstream consumers, and retain an address/source mapping
for review.

This organization preserves the existing translated execution model. It does
not establish full decompilation, whole-game parity, physical VRR behavior, or
300 Hz game logic. Existing [verification evidence](../STATUS.md),
[presentation contracts](presentation-scenes.md), [debug-tool boundaries](debug-tools.md)
and [timing/interpolation limits](timing.md) continue to apply.
