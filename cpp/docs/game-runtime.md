# Source-derived game runtime

The default game runtime executes 811 US routines (69,801 instruction sites) and
786 Japanese routines (66,678 sites) from source-owned C++ subfolders. These are
low-level C++ continuations derived from the original routines, not a fully
hand-decompiled high-level `DialogueSystem` or `CutsceneSystem`. The original
story and placement data remain imported unchanged. The counts describe code
ownership, not proof of whole-game behavioral parity.

## Execution and ownership

Each generated `resume_*` function handles one source instruction and returns
after its retirement. Its local `game::runtime::Instruction` borrows the existing
`MainCpu65816` state, performs an explicitly named operation, then advances the
shared machine clocks through `finish()`. The semantic implementation in
[`instruction.cpp`](../src/game/runtime/instruction.cpp) has 92 named operation
methods and 25 explicit addressing modes. It does not call the legacy opcode
semantic dispatcher or decode instruction bytes at runtime. The supplied opcode
identifies timing and the existing guarded preload site; the emitted method and
mode select the operation and addressing behavior.

Registers, RAM, stack, interrupt state, PPU, audio and timing remain in the
existing machine. There is no second persistent dialogue/entity state to keep in
sync. Yielding after each instruction preserves the machine's existing interrupt,
MMIO and callback boundaries, including execution interrupted inside a routine.

`MainCpu65816::step_instruction()` selects the ported path by default. The frozen
`generated/{us,jp}/program/` executor remains both a reference implementation and
the executor for shared or unported helpers. Selecting
`MainCpuRuntime::Legacy` bypasses the ported path for differential tests; selecting
`MainCpuRuntime::Ported` uses it at owned source sites and falls back for unowned
sites. The fallback includes named gameplay services such as `party_add_char`,
`hp_pp_roller`, inventory/equipment/experience routines and `teleport_mainloop`,
as well as hardware, math, audio and unresolved helpers. An owned dialogue or
cutscene routine can therefore call gameplay code that still uses the legacy
executor. Shared hardware implementations are common to both, so this oracle
tests the runtime change rather than independently validating all SNES hardware.

`cpp/tools/game_runtime_ownership.py` maps original assembly source paths to
directories beneath `generated/{us,jp}/game/`. `classify_source(source_file)`
returns a subsystem directory or `None`; `routine_path(source_file)` returns a
relative `.cpp` filename or `None`. The generator retains each routine's source
file, regional instruction addresses and execution entry points as provenance.
It must reject duplicate output paths rather than overwrite a routine.

| Directory | Responsibility |
| --- | --- |
| `dialogue/commands` | Text control-code handlers, including commands that invoke other game systems |
| `dialogue/windows`, `printing`, `prompts`, `state`, `names`, `execution` | Text/window lifetime, glyph output, input prompts, script memory, substitutions and execution |
| `cutscenes/intro`, `ending`, `overworld`, `transitions` | Intro/credits routines, coffee/tea scene and world transitions |
| `entities/lifecycle`, `movement`, `collision`, `party` | Entity/script allocation, positions, collision and party callbacks |
| `entities/scripts` and `entities/scripts/commands` | Action-script scheduler, bytecode interpreter and command handlers |
| `entities/overworld_support` | Remaining source-owned overworld support without a narrower reviewed assignment |
| `npcs/placement`, `interaction` | NPC placement/event gates and talk/check/queued interactions |
| `enemies/placement`, `encounters`, `actions`, `battle` | Enemy sector loading, battle entry, authored action implementations and battle execution |

Named `src/text`, `src/intro`, `src/ending`, `src/overworld` and `src/battle`
runtime sources are covered. Unknown helpers enter through an explicit list
backed by their source bodies and call sites, not a bank/address range. They
retain filenames such as `npcs/placement/unknown_c0222b-jp.cpp`; regional suffixes
remain distinct. A folder assignment does not invent a semantic routine name.
Shared gameplay services, hardware, arithmetic, audio and unreviewed helpers can
remain outside these folders. The ownership map is not a closed dependency graph.

Reviewed unresolved dialogue helpers have explicit `state_support`,
`control_support`, `window_support` and `layout_support` ownership. These include
the text state stack, saved window attributes, compressed-dictionary word
measurement, variable-width glyph/tile output and window-list rendering.
`cutscenes/shared_support` includes special-event dispatch and the shared frame
pump used during windows/scenes. Their address-based routine names remain intact;
shared support ownership does not imply that every caller belongs to that folder.

## Runtime and authored content

The original `src/data/events/` tree contains 1,072 assembly files, including
894 under `scripts/`. These author event bytecode through `EVENT_*` macros.
They are distinct from the 73 native interpreter-handler files under
`src/overworld/actionscript/script/`. The runtime interprets the imported event
bytes; moving its implementation does not bundle those scripts or their stories.

NPC configuration/placement, enemy placement groups and definitions, battle
action records, dialogue strings and scene content remain imported asset data.
The classifier rejects `src/data/` paths even when their names contain
`battle`, `events`, `enemy` or `text`. `NPC_AI_TABLE` is an authored mapping from
party NPCs to targetability and enemy templates; enemy action selection is
implemented in the battle runtime. Regional record layouts must come from
regional metadata rather than treating US offsets as Japanese offsets.

## Preserved execution contracts

`RUN_ACTIONSCRIPT_FRAME` processes entity scripts/tick callbacks first, then
movement/screen callbacks, then drawing. Retain that order, linked-list behavior,
fixed pools, allocation failures, fractional-coordinate arithmetic, sleep/stack
state, RNG consumption and interaction queues. Resumable routines must preserve
interrupts, frame boundaries, MMIO side effects and partial execution. Grouping
instructions into one uninterruptible native call would require separate proof.

The existing enhanced gameplay timing and widescreen actor-preload policies are
part of the current port. Native-width/original-timing fidelity and preservation
of those optional policies are separate comparisons; the port must not silently
replace either policy with the other. Rendering implementation is outside this
ownership change.

## Regeneration and provenance

[`game_runtime_ownership.py`](../tools/game_runtime_ownership.py) defines reviewed
source ownership. [`port_game_runtime.py`](../tools/port_game_runtime.py) lowers
the frozen `program_index.json` inventory and its compiled instruction bodies to
the continuation files, regional `game/runtime_index.json` files, dispatchers and
`game_runtime_sources.cmake`. The standalone build compiles the checked-in files;
it does not require the assembly checkout. The original-source translation
pipeline also invokes this lowering step after generating its instruction input.

From the repository root, regenerate or check for stale outputs with:

```sh
python3 cpp/tools/port_game_runtime.py
python3 cpp/tools/port_game_runtime.py --check
```

Do not edit generated routine bodies by hand. Update ownership or lowering in the
generator, or change the source-derived instruction input through its translation
pipeline, then review both regional outputs. The generator rejects duplicate
source addresses, duplicate output paths, unindexed functions and instruction
inventory mismatches. Its manifest identifies the files it owns.

Each runtime index preserves the old source instruction fingerprint as provenance
and adds a per-routine `runtime_site_sha256`. The latter hashes normalized source
sites: address, opcode, operand, length, optional wide operand and the M/X flag
that selects immediate width. Variable-width sites normalize to the full 16-bit
operand and three-byte length while retaining the actual M/X selector; generated
code still selects the correct two- or three-byte instruction at runtime. The
source fingerprint and runtime-site fingerprint have different representations
and must not be treated as interchangeable. Neither fingerprint alone proves
semantic correctness.

## Verified coverage and reproduction

The source-continuation baseline passed 29 native CTest entries: the combined
28-test suite, followed by the dialogue fixture and strengthened subsystem
fixture. Additional native-algorithm checks are described below. These checks use
synthetic data and need no imported cartridge assets:

| Check | Verified scope |
| --- | --- |
| `game_runtime_instruction_tests` | 8,192 semantic cases across all 256 opcodes, widths, emulation and decimal states; every owned US and JP site compared with the frozen dispatcher, including 79,775 US and 76,173 JP width variants |
| `dialogue_cutscene_tests` | Eight US/JP synthetic dialogue/credits fixtures; 105,290 source steps and 10,294 timestamped writes match, including ordered bus accesses in the audit build |
| `game_subsystem_tests` | 54 regional fixtures, 199,002 source steps and 86,948 ordered writes matched between legacy and ported execution |
| `gameplay_runtime_differential` | Synthetic entity/script and DMA cases in both regions and both gameplay timing policies, including completed frame callbacks |
| Generator and ownership checks | Reviewed source classification, authored-data exclusion, output consistency and regeneration checks |

The 54 subsystem fixtures exercise empty, single and full actor pools, allocation
failure and free-list updates, script scheduling and movement, NPC talk selection
and collision state, regional NPC/enemy sector loading at multiple presentation
widths, population RNG cadence, and player/NPC/enemy HP/PP updates. They compare
architectural and private timing/hardware state plus ordered writes at source
steps, with memory and frame checks across the runs. They do not establish
coverage of every enemy action, conversation, story branch or cutscene.

Build and run the complete native suite from the repository root:

```sh
cmake -S . -B build/runtime -DCMAKE_BUILD_TYPE=Release
cmake --build build/runtime --parallel
ctest --test-dir build/runtime --output-on-failure
```

The focused subsystem executables can also run directly:

```sh
build/runtime/cpp/game_runtime_instruction_tests
build/runtime/cpp/game_subsystem_tests
build/runtime/cpp/dialogue_cutscene_tests
```

For ordered hardware read/write tracing, use a separate build directory with
`EB_GAMEPLAY_AUDIT` enabled. This instruments bus accesses in addition to the
normal state, write, frame and audio comparisons:

```sh
cmake -S . -B build/runtime-audit -DCMAKE_BUILD_TYPE=Release -DEB_GAMEPLAY_AUDIT=ON
cmake --build build/runtime-audit --parallel --target \
  game_runtime_instruction_tests game_subsystem_tests dialogue_cutscene_tests gameplay_runtime_differential
ctest --test-dir build/runtime-audit --output-on-failure \
  -R '^(game_runtime_instruction_tests|game_subsystem_tests|dialogue_cutscene_tests|gameplay_runtime_differential)$'
```

The audit build also completed asset-backed replays using the checked-in
`exploration_route.input`: 26,097 US frames and 15,000 Japanese frames, separately
under original and enhanced timing. All four monitored processes exited zero.
Each policy compares legacy against ported execution; policies are not asserted
to be identical to each other. Exact state, ordered accesses, frame callbacks,
canvases and PCM matched. These long runs used the isolated runtime checkpoint;
the integrated renderer build also passed both regions/both policies for 900
frames under Wine, plus native fixtures and package comparisons.

The dialogue fixtures exercise nested control-script calls/returns, flags,
taken/untaken branches, window-state restoration, timeout and autojoy input,
and credits line/spacer/end records with fractional scrolling and VRAM DMA.
They use synthetic windows/control bytes, not retail glyphs or full cinematics.

Windows Release passed all 22 original executable fixtures, then 14 affected
fixtures after renderer integration (including the new dialogue test). Four
native-covered Python tests were omitted from the initial Wine run; three
asset-cache symlink fixtures explicitly skip where Wine cannot create symlinks.
Native Xvfb and Wine checks are not native Windows or physical VRR proof.

For another asset-backed replay, use locally imported packs:

```sh
build/runtime-audit/cpp/gameplay_runtime_differential \
  --assets /path/to/earthbound.ebpak --assets /path/to/mother2.ebpak \
  --frames 16000 --input-script cpp/tests/exploration_route.input --strict-memory
```

The replay harness runs both timing policies unless `--original-timing` or
`--enhanced-timing` is selected. It compares CPU/audio state, private hardware
controls, ordered events and completed frame callbacks at each step, and PCM and
memory at frame boundaries. `--strict-memory` compares memory at every step.
Neither an available replay command nor passing synthetic fixtures demonstrates
whole-game 1:1 parity; dialogue/scene paths, authored branches and battle behaviors
still require representative execution with regional assets.

## Native gameplay checkpoints

The hand-written entity module `cpp/src/game/entities/npc_collision.cpp` now
expresses the full NPC collision query using named tables and ordinary C++
control flow. It borrows authoritative WRAM, preserves unsigned 16-bit coordinate
arithmetic and first-hit order, and publishes the result to the original slot.
`npc_collision_tests` compares 5,160 regional cases against 2,809,232 source steps.
The domain API shares its eligibility, directional hitbox and wrapping-axis
operations with the resumable native adapter described below.

Normal `GameSession` execution uses `MainCpu65816::advance_gameplay(maximum_steps)`.
Its collision adapter now has fourteen bounded checkpoints spanning query gates,
geometry setup, active and inactive candidate selection, directional hitboxes,
vertical/horizontal intersection, first-hit selection, loop advance and result
publication. Entry/exit stack operations and interrupted execution remain source
continuations. Every admitted phase commits the original continuation state;
`step_instruction()` remains available for exact debugging and observation.

`SnesBus::native_execution_budget()` gives an exclusive deadline before refresh,
HDMA, raster output, interrupt comparison, autojoy completion or scanline end.
The native path declines when it cannot fit before that deadline, when math or
DMA is pending, when CPU state/frame/step limits do not match, when a debug/access
observer is installed, or when the enhanced timing policy could change during
the chunk. It preserves source timing slices for the asynchronous APU and integer
clock carry. Callbacks that inspect intermediate main-CPU state must use exact
instruction stepping; normal audio and completed-frame callbacks keep their
existing sequence.

`native_gameplay_tests` covers actual admissions, guards and fallback, including
both regions, ROM speeds, direct-page alignment, final candidate, enhanced-budget
threshold, fractional carry and queued graphics. `native_execution_budget_tests`
checks scheduler boundaries and read-only admission. The optional asset replay
`native_gameplay_differential` compares each checkpoint with exactly the returned
number of legacy source steps, including private CPU/hardware/APU state, DSP
callbacks, memory, pixels and PCM. `--require-native` rejects replays that exercise
only fallback. The session replay also reports `native_batches` and can consume
`--input-script cpp/tests/exploration_route.input`.

This was the first native algorithm integration. The goal remains open: most
owned routines still use source-level continuations, shared gameplay dependencies
remain, and complete dialogue/story/cutscene parity has not been demonstrated.

The 2026-09-29 checkpoint passes 126 native and 128 audit synthetic comparisons,
all 34 tests in the integrated Linux build and eight affected Windows tests under
Wine. Independent checkpoint replay completed 26,097 US frames and 15,000 JP
frames in each timing policy, with 43,650/42,467 US and 11,978/11,983 JP native
batches (original/enhanced). CPU/private hardware/APU state, ordered DSP callbacks,
full memory at native admissions, frame pixels and PCM match the frozen executor.
Separate GameSession comparisons completed the same regional frame counts under
both policies, including absolute partial-frame limits. These are route/fixture
results, not whole-game parity or fresh release-package verification.

## Native dialogue registers and control flow

`cpp/src/game/dialogue/register_bank.cpp` owns the working and argument 32-bit
registers, the 16-bit secondary register, per-window saved registers, swaps and
global backup/restore. `WindowRegisters` borrows a captured window address;
`RegisterBank` resolves the live focus using the regional table layout. It retains
the original eight-bit global backup of the secondary register, including the
word read and mask on restore. No persistent copy of dialogue state is introduced.

`control_flow.cpp` implements CC_1B's zero/nonzero working-register branches and
four-byte operand skipping. Both words participate in the zero test. Skipping
adds four to the cursor's low word without carrying into its high word; it reads
all four bytes before writing the result. A taken branch performs no cursor
access and selects the original jump-destination reader.

The production adapter in `register_execution.cpp` replaces seven register
helper bodies after `GET_ACTIVE_WINDOW_ADDRESS`, plus the two conditional
decisions and their two skip bodies. It also replaces all three field copies in
each per-window store/restore helper with six native checkpoints. These copy the
working and argument values as complete 32-bit fields and the secondary value
as a complete 16-bit field, using `WindowRegisters::transfer_storage` shared with
the whole-bank domain methods.

| Native field copy | US start → continuation | JP start → continuation |
| --- | --- | --- |
| Store working | `C1032F` → `C10351` | `C10532` → `C10554` |
| Store argument | `C10351` → `C10373` | `C10554` → `C10576` |
| Store secondary | `C10373` → `C1037E` | `C10576` → `C10581` |
| Restore working | `C1038B` → `C103AD` | `C1058E` → `C105B0` |
| Restore argument | `C103AD` → `C103CF` | `C105B0` → `C105D2` |
| Restore secondary | `C103CF` → `C103DA` | `C105D2` → `C105DD` |

The first field copy captures the window address in A; subsequent copies use
the saved address in the source's compiler-stack local, even if focus changes.
The secondary tails preserve the original PHA/PLX stack bytes and final X/N/Z
from the window address, rather than deriving those flags from the copied value.
Window lookup, hardware multiplication, entry/return sequences, shared helpers
and event-boundary steps continue through the original source continuations.
Swap and global-backup selectors retain their source control flow with native
register helpers inside; their whole domain methods are separately verified.

`native_execution.cpp` owns shared admission and clock retirement. The NPC
adapter now lives beside its domain code in `entities/npc_collision_execution.cpp`.
Native dialogue admits only binary, native 16-bit execution with a canonical
compiler stack and disjoint window/cursor storage. Near hardware events, for
unsupported layouts, or with observation hooks installed, it falls back to exact
source stepping. Its per-instruction timing slices retain APU clock order,
source flags, continuation state and the final open-bus value.

`dialogue_register_tests` passed 5,120 independent US/JP frozen/domain cases,
eight captured-window checks and 160 whole-command conditional comparisons,
covering 323,946 original source instructions. `dialogue_native_execution_tests`
passed 1,874 checkpoint comparisons: 1,686 actual native admissions and 188
fallback cases, 16,574 source instructions and 8,928 ordered APU callbacks. The
tests exercise both ROM speeds, timing policies, stack alignments, register
widths, arithmetic boundaries, focus changes, cursor bank crossings and hardware
deadlines. CPU/private hardware/APU state and full memory match the frozen
executor. These counts do not establish coverage of all dialogue or cutscenes.

The added `dialogue_transfer_tests` passed 756 checkpoint comparisons: 578
admissions and 178 declines, plus four complete source helper calls. Its focused
comparisons retire 7,454 source steps and compare 7,456 timestamped APU slices.
All six field-copy entries must admit independently. The fixture compares CPU
and private hardware/APU state, full memory, captured-window behavior, stack
bytes, flags, timing thresholds and exclusive event deadlines. The complete
store/mutate/restore sequences include the original lookup and entry/exit code.

For a local-asset checkpoint replay, add `--require-dialogue-native` to
`native_gameplay_differential`. It rejects a replay without a native dialogue
register admission and separately reports register, conditional and skip batches;
NPC admissions cannot satisfy that dialogue check.

The earlier eleven-checkpoint dialogue build passed all 32 isolated Linux CTest
entries. At that checkpoint, `dialogue_cutscene_tests` passed 28 fixtures and
291,866 source steps,
retaining the original 10,294 ordered-write comparisons. Twenty unobserved runs
of the real `DISPLAY_TEXT` routine with a synthetic nested stream admit all eleven
dialogue checkpoint types across both regions and clock phases: 262 batches,
1,990 native source steps, 186,616 timestamped main-to-audio clock slices and
twenty frame callbacks match. Those frames are forced blank; this is state and
callback proof, not glyph or cinematic visual proof. These fixtures run a real
SPC boot loop and timers but no DSP; they make no PCM claim.

Four independent local-asset checkpoint replays of that dialogue checkpoint also
passed, at 26,097 US frames and 15,000 JP frames in each timing policy.
CPU/private hardware/APU state, ordered
DSP callbacks, full memory at admissions, frame pixels and PCM match. US original
timing admits eight register and one conditional batch; enhanced timing admits
six register and three conditional batches. Each JP run admits two register
batches. The route does not admit native skip bodies; direct checkpoint and
synthetic full-stream fixtures cover those separately. These explicit counts
prevent broad replay lengths from implying coverage of every dialogue branch.

## Native credits queue and scroll state

`cpp/src/game/cutscenes/credits_state.cpp` implements the complete synchronous
`ENQUEUE_CREDITS_DMA` domain operation and the quarter-pixel scroll update at the
tail of `CREDITS_SCROLL_FRAME`. `CreditsMemory` borrows authoritative WRAM;
`CreditsLayout` supplies separately verified US/JP queue and scroll addresses.
There is no persistent copy of the queue or scroll state.

A credits descriptor contains nine bytes: an 8-bit mode, 16-bit byte count,
32-bit source address and 16-bit VRAM word destination. Publication retains that
byte order and all four source-address bytes. The producer head is read again
after the descriptor and written twice: first incremented, then masked to seven
bits. Head 127 therefore
publishes 128 before 0. The original has no full-queue check and does not modify
the consumer index. The queue reuses `PLAYER_POSITION_BUFFER` while credits owns
it; this module does not replace the consumer or its VRAM DMA behavior.

The scroll operation reads the live fixed-point value, adds `$4000` to its low
fractional word, carries into its wrapping 16-bit integer word, publishes both
words and mirrors the integer to `BG3_Y_POS`. The following source call that
writes the two-byte BG3VOFS hardware latch remains a continuation. Captured
descriptor/head/scroll primitives let the native adapter use values resolved at
its own checkpoint without repeating an earlier lookup.

`credits_execution.cpp` integrates four bounded native bodies:

| Native body | US start → continuation | JP start → continuation |
| --- | --- | --- |
| Capture enqueue arguments and resolve slot | `C4EFCE` → `C4EFEE` | `C4C008` → `C4C028` |
| Publish complete descriptor | `C4EFEE` → `C4F00E` | `C4C028` → `C4C048` |
| Advance and mask producer head | `C4F00E` → `C4F01B` | `C4C048` → `C4C055` |
| Advance quarter-pixel scroll and BG3 mirror | `C0F89A` → `C0F8BD` | `C0FF3E` → `C0FF61` |

The descriptor body uses the source's captured X address and Y length, without
re-reading the current queue head. The setup body requires a valid 128-slot
index; the descriptor body requires a complete, aligned slot. Scratch/parameter
frames must remain separate from queue/global state. Entry/exit, credits record
decoding, glyph work, queue consumption and all unsupported or interrupted
execution remain source continuations. These checkpoints share the common
binary/native-16-bit admission, observer fallback and exclusive hardware-event
deadline. Original flags, scratch writes, final open-bus value, source retirement
counts and per-instruction APU timing slices remain part of the adapter contract.

The original IRQ/NMI dispatcher establishes D=`$0200` before calling the credits
scroll routine. Its source prologue reserves `$25` bytes in US and `$24` in JP,
so the live scroll frame is D=`$01DB`/`$01DC`; the nested enqueue frame reserves
another `$0F` and uses D=`$01CC`/`$01CD`. Native admission accepts those exact
regional frames for their respective bodies in addition to the canonical
foreground compiler arena. It does not admit a general low-memory range.
These frames lie in the reserved space below palettes at `$0200`, separate from
the graphics queue indices, BG3 mirror and credits descriptors/globals. The
head-publication body has no direct-page accesses. Actual interrupt nesting is
not required for these memory-safe bodies; existing timing state still prevents
enhanced foreground acceleration from leaking into interrupt execution.

`credits_state_tests` passed 6,144 complete frozen-enqueue/domain comparisons,
264 frozen scroll-tail comparisons and eight captured/live-view checks, covering
298,674 source instructions. Queue cases include every head 0..127, descriptor
width boundaries and differing consumer-index states. The tests require exact
ordered descriptor/head/scroll writes and unchanged WRAM outside original CPU
scratch; scroll cases include fractional carry, integer wrap and repeated live
ticks. These domain checks do not by themselves prove native scheduling.

`cutscene_native_execution_tests` passed 1,352 checkpoint comparisons: 1,062 admissions
and 290 fallbacks, covering 14,456 source steps and 6,664 ordered APU slices.
It includes 128 positive cases for the exact low callback frames, 12 neighboring
frame rejections, and 64 cases entered through a real hardware NMI to verify the
interrupt timing scope. This complements the whole-domain write comparisons;
it does not establish full-scene rendered output with imported assets.

The current `dialogue_cutscene_tests` passed 115 synthetic fixtures and 831,125
source steps, retaining the original 10,294 ordered-write comparisons. Across
both regions and clock phases, the unobserved executions require admission of
all 17 dialogue and four credits checkpoint categories and compare each returned
batch against the same number of frozen source steps. Frames are forced blank;
the fixture runs real SPC clock/timer behavior but no DSP and makes no PCM or
cinematic visual claim. This is synthetic source/checkpoint coverage, not an
asset-backed full-credits replay or proof of whole-game parity.

Separately, four complete local-asset `PLAY_CREDITS` replays passed in the isolated
runtime build: both regions under original and enhanced timing. The fixture
follows real controller input into initialized overworld mode 1, requires its
original `PROCESS_OVERWORLD_TASKS` callback and a foreground frame-wait boundary,
then nests one synthetic call to the original credits routine. The original
initializer, imported script, frame waits, NMI callbacks, queue consumer and
return sequence all execute. The fixture does not patch script or display state.

| Region (both timing policies) | Injection → return frame | Native queue setup / descriptor / head | Native scroll | Nonblank native frames |
| --- | ---: | ---: | ---: | ---: |
| US | 8,638 → 28,800 | 196 / 691 / 302 | 344 | 20,033 |
| JP | 8,635 → 28,765 | 564 / 169 / 796 | 822 | 20,001 |

Every new credits category must admit, the authored cursor must consume its end
marker, rendered pixels must change, and the call must restore its caller stack
and direct page. CPU/private hardware/APU state, ordered DSP callbacks, full
memory at admissions/frame boundaries, frame pixels and PCM match the retained
source executor. Each US run compares 443,641,854 source steps; each JP run
compares 443,535,249. These source-step totals include the controller replay from
reset before scene injection. Both executors share the hardware implementation. This is
complete injected-call proof, not a natural ending route, all photograph
branches, ending-specific music setup or physical-SNES validation.

Reproduce with locally imported packs and the checked-in controller route:

```sh
build/runtime/cpp/native_gameplay_differential \
  --assets /path/to/earthbound.ebpak --assets /path/to/mother2.ebpak \
  --credits-scene --frames 40000 --input-script cpp/tests/exploration_route.input
```

The frame limit is an upper bound; each scene stops at its complete source
return. Omitting a timing selector checks both policies. Boot/title state alone
is not a valid credits entry: the credits initializer inherits the gameplay
display mode, and intro mode 3 does not render BG3 text. The fixture rejects a
missing gameplay handoff or blank completed scene rather than counting boot
parity as credits coverage.

## Native battle targeting

`cpp/include/eb/game/enemies/battle/targeting.hpp` and its implementation borrow
live battler records, the target mask and imported tables. The domain covers
all/allied/enemy/row masks, NPC and status filters, mask insertion/removal/test,
valid-target checks and the complete packed action-target resolver in
`src/unknown/C2/C24703.asm`. It preserves selectors 1/2/4/17/18/20, front/back
row lists, group-shield NPC exceptions and Healing Omega's unconscious-enemy
override. The status allow-list resolves the live CURRENT_ATTACKER independently
of the resolver's captured attacker. RANDOM_TARGETTING retains its cyclic biased
selection using a supplied original RNG draw; it does not introduce a new RNG.

The production `targeting_execution.cpp` adapter integrates 35 checkpoint sites
per region: candidate predicates, loop advances, mask clearing/capture/combine,
boolean conversion and valid/shield predicates. Capturing a global mask and
combining its saved operands are separate safe yields. A resumed combination
uses the captured direct-page values even when the live mask has since changed.
Original imported bit lookup, hardware multiplication, RNG, CHOOSE_TARGET retry
control flow, status-filter control flow and the outer packed resolver remain
source continuations. The complete domain resolver is independently tested; it
is not called as one uninterruptible production replacement.

The reviewed ownership map now includes C24703, C24434's random row selection
and C2F917's row ordering/presentation coordinates. Their address-based filenames
and source provenance remain explicit. Authored action, enemy and dialogue data
remain local imports.

The collision checkpoint fixture passes 117,714 boundary comparisons, including
9,236 native admissions and 256 complete queries across both regions, timing
policies, ROM speeds, caller accumulator widths and four starting clock phases.
Every collision phase admits in the whole-query corpus. Its SPC/timer and
77,804 timestamped audio clock comparisons are separate from synthesized PCM
and real walking/talk/bicycle coverage.

`battle_targeting_tests` passes 4,810 whole-source/domain comparisons with
6,436,410 frozen instructions and 43,224 ordered target-mask bytes. It includes
all 32 slots/bits, status/side/NPC/row rules, special actions, imported lookup
wrapping, zero/nonzero RNG cadence and noncanonical valid-target indices that
carry from WRAM bank $7e into $7f. The supplied draw retains RAND's original
external state writes; the domain itself does not repeat those writes.

`battle_targeting_native_tests` passes 19,286 boundary comparisons, including
3,844 admitted batches, 504 explicit fallback checks and 48 complete original
helper calls. It compares 45,764 source instructions and 17,144 timestamped APU
slices, requires positive native coverage and tests changed global masks between
capture and combination. These synthetic checks do not establish whole-game
battle, AI, scene or authored-dialogue coverage.

The corrected asset-backed battle fixture passed both timing policies in both
regions. After the real input route reaches an overworld WAIT boundary, it makes
one synthetic call to the original INIT_BATTLE_SCRIPTED with imported group 3.
The source parses the group, initializes the Coil Snake, runs the swirl, menus,
Bash/biting actions and combat loop, and returns the original defeat result.
No battler stats, RNG or authored content are fabricated to force a victory.
All three captured source return values agree, both battle flags clear, the host
S/D frame balances, and surviving-side checks support the defeat outcome.

| Region (each timing policy) | Injection → return | Native targeting batches / sites | Player / enemy resolver calls | Nonblank battle frames |
| --- | --- | --- | --- | --- |
| US | 8,638 → 13,326 | 1,677 / 6 of 35 | 10 / 11 | 4,557 |
| JP | 8,635 → 11,040 | 1,294 / 6 of 35 | 7 / 8 | 2,277 |

At each native checkpoint, CPU/private hardware/APU state, WRAM/PPU memory and
ordered callbacks match the retained source executor. Battle canvases and
synthesized PCM match too: each US run compares 20,539,619 scene DSP events and
4,993,058 interleaved samples; each JP run compares 10,563,408 and 2,561,810.
Scene audio counters include the injected call's setup/return; battle-render
counters are bounded by the original combat routine. Synthetic checkpoints cover
all 35 targeting sites; this actual battle admits six and does not establish the
other modes in real combat. A source-supported defeat return does not prove the
natural encounter, subsequent game-over story flow or victory path.

The first four fixtures incorrectly required victory and were retained as failed
validation records. A diagnostic run established a legitimate original defeat;
the corrected fixture checks both source-consistent outcomes rather than dropping
state, rendering, native-coverage or return assertions.

Reproduce this fixture with a local imported pack:

```sh
build/runtime/cpp/native_gameplay_differential --assets /path/to/earthbound.ebpak \
  --battle-scene --frames 16000 --input-script cpp/tests/exploration_route.input
```

The current isolated build passed all 38 CTest entries, seven audit entries and
nine Windows executable fixtures under Wine. The merged checkout passed the same
38 selected Linux tests; this does not claim coverage of unrelated concurrent
native-engine tests. Package startup checks are separate: the exact preview
applications received twelve extracted-package runs totaling 7,920 boot/intro
frames, with zero native batches in those short runs. Long collision/battle
proof belongs to the separate differential harnesses and is not implied by those
application startup checks. No native Windows, physical GPU scanout or VRR claim
is made by Wine/Xvfb testing.
