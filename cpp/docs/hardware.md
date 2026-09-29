# C++ hardware model

`eb::SnesBus` is independent of the existing C runtime. The cartridge input is the
assembled HiROM byte image. CPU reads and writes run against the actual bank
mapping; the port model does not replace game routines or generate responses to
game-specific upload protocols.

Implemented: 128 KiB WRAM and its low-bank mirrors, 8 KiB mirrored SRAM, HiROM
address folding, CPU arithmetic with result delay, controller serial/automatic
reads, NMI and H/V interrupt flags, DMA modes 0–7, direct/indirect HDMA, VRAM
address translation and prefetch, OAM/CGRAM latches, Mode 7 multiplication,
background tile decoding, sprite decoding and priority, window masks, color
addition/subtraction, mosaic, and raster changes between scanlines. The APU ports
are independent directional arrays. The desktop executable attaches the translated
SPC700 driver and a standalone S-DSP backend to those ports. Boot acknowledgments
come from executing the IPL instructions and the uploaded source-translated code.

The CPU charges explicit fetch/data accesses at 6, 8, or 12 master clocks based
on the address and MEMSEL. `advance_master_clocks_with_refresh` advances that master-clock total and inserts
40-clock WRAM refresh pauses on the eight-clock phase near each scanline's center.
Noninterlaced odd NTSC fields have the four-clock-short line 240. `advance_cpu_cycles` remains
a hardware-test helper that advances an exact number of six-clock units without
inserting CPU refresh pauses. `take_dma_clocks` transfers DMA/HDMA stall debt to
the caller in master clocks, retaining byte, channel, and initialization costs.
The framebuffer contains 256 × 224 integer pixels in `0xAARRGGBB` order.
Controller bits match JOY1: B, Y, Select, Start, Up, Down, Left, Right, A, X, L,
R occupy bits 15 through 4. The frontend owns SRAM file persistence.

Remaining fidelity work (these are limitations, not completion claims):

- Explicit memory-access speeds, refresh pauses, and short scanlines are modeled,
  but missing CPU dummy accesses, precise IRQ/NMI edge delays, and DMA/HDMA
  arbitration are not cycle accurate. Transfers still apply their data changes
  before consuming their accumulated stall time, and their start/end alignment
  with CPU bus phases needs validation. Math-unit latency is instruction-granular.
- Video is evaluated per scanline. Active-display VRAM/OAM/CGRAM access contention,
  partial-line register changes, sprite evaluation timing, and the exact mosaic
  counter reload behavior are not modeled. Modes 2/4 offset-per-tile are
  implemented with BG3 scroll-table selection, target fine scroll, and per-layer
  enable/direction bits; focused pixel cases pass, but console differential proof
  remains outstanding.
- Mode 6 offset-per-tile, 512-pixel hires, pseudo-hires, interlace and 239-line
  overscan output remain unimplemented. Mode 7 uses the documented signed matrix
  transform, truncation, repeat modes and EXTBG, but needs differential validation.
- The DAC brightness curve and analog video characteristics have not been measured.
- SPC execution and DSP synthesis are integrated in the executable (see `spc.md`).
  The standalone SnesBus still leaves its APU reply ports empty when no SPC processor
  is attached. CPU/SPC/DSP synchronization within an instruction needs additional
  timing validation.

Hardware behavior was checked against Martin Korth's original reverse engineering
reference, [fullsnes](https://problemkaputt.de/fullsnes.htm), especially the memory,
DMA, PPU and timing sections, and [Anomie's timing measurements](https://github.com/gilligan/snesdev/blob/master/docs/timing.txt).
`snes_bus_tests.cpp` exercises register-visible results,
DMA transfers, interrupt flags, controller order and rendered pixel cases; these
tests are not evidence of whole-game or console-level equivalence.

## Intro palette scheduling investigation

The no-input intro at captured frame 1,200 differs from bsnes 115 in 31,848
pixels. Isolation shows a BG2 palette permutation: a copied native bus at frame
1,199, advanced without further CPU execution, reproduces the native frame.
Replacing only that diagnostic copy's CGRAM with the palette inferred from the
bsnes snapshot produces an exact match of all 57,344 reference RGB pixels.
This is a controlled renderer fixture, not a modification to gameplay state.
It demonstrates that the sampled geometry, tile decoding, compositing, and color
arithmetic can reproduce the reference with the same palette. It does not prove
that the port uploads that palette at the correct time.

The assembly deliberately exposes timing-sensitive intermediate palette state:

- `src/unknown/C0/C0F21E.asm` backs up palette 2, updates map palette animation,
  clears `PALETTE_UPLOAD_MODE`, updates the background's palette source, restores
  the backup, generates the battle-background frame, sets a full upload, and waits.
- `src/misc/battlebgs/generate_frame.asm` rotates the palette on its own countdown
  and calls `UNKNOWN_C0856B`, which can request a full upload before the outer
  intro loop reaches its final upload request.
- `src/system/irq_nmi.asm` consumes the upload flag at C081C8 and starts palette
  DMA at C081EF. The IRQ callback runs later. During this capture its pointer is
  851B, the default callback containing only RTS; no custom callback is needed
  to explain the observed uploads.

A read-only native trace observes the following active hardware frame numbers
(the frame counter advances at frame wrap, after vblank):

| Active frame | Outer loop's full-upload request | Mode observed by NMI at line 225 | Result |
| --- | --- | --- | --- |
| 1,198 | Line 220 | 0x18 | Palette DMA runs |
| 1,199 | Line 252, after NMI | 0x18, set inside background generation | Palette DMA runs |
| 1,200 | Line 261, after NMI | 0 | Palette DMA skipped |
| 1,201 | Following frame, line 8 | 0 | Palette DMA skipped |

Thus the palette displayed during active frames 1,200–1,202 remains unchanged
while the CPU continues palette work. Final palette RAM alone cannot identify
which intermediate palette was uploaded for the displayed image. `PALETTES`
starts at WRAM 0x0200; its noise palette starts at 0x0240.

The independent reference snapshots also sample different points in this work.
Snes9x 1.63's inferred final CGRAM matches all 512 native bytes at each sampled
frame 1,198–1,202, and its upload mode is zero at 1,200/1,201. The bsnes snapshot
at 1,200 contains an in-progress palette copy in WRAM; at 1,201 its CGRAM contains
a mixed sequence, and by 1,202 its palette order matches the native 1,200 state.
The public reference API returns after a frame but does not promise the same
instruction or scanline boundary as the native probe.

The remaining distinction is palette history and capture/interrupt phase, not a
demonstrated composition error. No timing constant was adjusted to force this
single screenshot to match. Whole-frame timing equivalence remains unproven.
Diagnostic artifacts are `build/cpp/palette_trace.cpp`, `palette-trace.log`,
`intro-reference-palette.ppm`, and the reference state sequences under
`build/cpp-translate/oracle/`; they are ignored build artifacts. The trace logs
only source palette-upload sites, CGRAM changes, and selected scanline boundaries;
it adds no production instrumentation.

## Optional wider presentation

`SnesBus` delegates game-specific presentation to `GameSceneRenderer`. The
renderer owns its picture/cache state and receives synchronous `SceneReadView`
values containing const memory spans, registers and regional metadata. It has
no hardware write or clock-advance interface. Native sampling helpers read the
same view, while only the bus's native sprite pass commits overflow status.
[Source navigation](source-navigation.md) describes these ownership boundaries.


`SnesBus::set_presentation_width()` selects an even source width from 256 through
1,024 pixels. `presentation_pixels()` exposes a separate 224-line display
buffer. The original `native_framebuffer` is always 256 by 224 and is rendered by the
same native path, including the native sprite limits and status flags. Width
changes do not write PPU registers, WRAM, camera variables, controller state,
entity data, or save RAM, and do not advance any emulated clock.

Extra pixels use the same scanline's tile graphics, palettes, scroll offsets,
affine transform, priority, windows, and color arithmetic. Negative horizontal
coordinates are supported. Original native pixels are copied directly into the
center except when the optional display camera shifts scenery within a map
region or the PSI overlay is fitted to the wider canvas. The original
framebuffer remains exact; only the separate
presentation buffer changes. Window and HUD background layers remain anchored
to the native center. Existing objects move with scenery. Active world entities
are read from the source's linked entity list and sprite descriptors, including
pieces omitted by the native OAM clipping. Their descriptors are captured with
the full OAM DMA upload so margins and center use the same published frame.
Full signed coordinates, chained maps, frame selection, flips, priorities, and
the source invisibility flags are preserved. Unallocated entities are never
created, and spawn/despawn routines and timers are never called or modified.
Raw hidden OAM slots are not treated as extra world entities.

This describes the read-only renderer. The desktop session separately opts
into `EntityPreload`, which expands source NPC/enemy query and retention bounds
for wide views. See [actor loading](entity-preload.md); core rendering-only
differentials leave this gameplay policy disabled.

Scene adaptation follows [the original source contracts](presentation-scenes.md):

- Static full-screen art and text stay centered. The title copyright does not
  repeat. File-selection and naming retain centered text and objects while their
  authored BG2 animation extends.
- Battle layers are chosen from the actual loaded-background metadata, including
  configurations that put an animated layer on BG3. Scanline distortion offsets
  apply to the additional pixels as well.
- PSI uses the separate animation layer selected by the source background
  depth, independently of palette cycling. Its authored canvas is mapped once
  across the requested width; single-target effects retain their original
  enemy anchor and do not wrap copies into the margins. Color arithmetic,
  brightness, windows, and flash-filter references still use the current row.
- Clearing `BATTLE_MODE_FLAG` starts the exit fade; it does not immediately end
  the displayed battle scene. That layout remains wide until black or replaced
  by another PPU layout, avoiding a premature 4:3-looking frame.
- Confirmed world views read the original packed global map and the currently
  loaded, event-adjusted arrangement buffer beyond the VRAM streaming ring.
  The decoder first checks its interpretation against native visible tiles;
  unrecognized configurations use the centered fallback.
- The displayed world camera is constrained to the contiguous matching-sector
  interval at the native viewport's center. The result is fixed for the frame.
  Regions narrower than the requested width are centered with black side bars.
  This is a new **presentation policy**, not an existing game-camera constraint.
  The original camera, movement, collisions, map-loading calls, and spawns retain
  their original behavior. Other rows still use the original sector-mismatch
  rule (metatile zero), so irregular regions do not reveal an unrelated tileset.
- Lumine Hall can display additional columns from the complete text maps already
  prepared by its event. The adapter verifies all 240 uploaded tile words to
  select the visible phase, including when script progress leads DMA. It never
  changes the event's progress, player name, scroll rate, or generated text.

Focused hardware tests cover signed tile/affine sampling, sprite edge handling,
static/title/menu policy, source-selected BG3 battle layers, map streaming-ring
avoidance, sector constraints, narrow-region framing, and Lumine Hall phase
selection. Source-shaped fixtures are not a claim of a natural route through
Lumine Hall or every constrained passage.

`presentation_differential` is an optional asset-backed executable, excluded
from default CTest. It runs two independent copies of the game with identical
controller inputs while switching the second view among 256, 398, 400, 672,
800 and 1,024 pixels. It compares CPU and SPC architectural state after every
CPU step, the complete ordered CPU/SPC write-callback stream, all WRAM (including
entities and spawn decisions), SRAM, VRAM/OAM/CGRAM, PPU registers, APU ports,
SPC/DSP memory and registers, master clocks, generated audio samples, and the
native framebuffer. It does not compare the intentionally different display
buffers as game state.

```sh
cmake --build build/cpp --target presentation_differential
build/cpp/presentation_differential --assets /path/to/earthbound.ebpak \
  --frames 1200
build/cpp/presentation_differential --assets /path/to/earthbound.ebpak \
  --frames 20295 --input-script cpp/tests/outdoor_route.input \
  --output-prefix build/cpp/world-wide20295
```

The initial 1,200-frame imported-asset run passed: 18,189,373 CPU instructions,
5,091,380 SPC instructions, 2,760,139 ordered write callbacks, and 638,947 audio
frames matched exactly. This establishes presentation independence along that
run, not console equivalence or whole-game scene coverage.

The full 20,295-frame `outdoor_route.input` replay also passed with dynamic
widths: 304,461,784 CPU instructions, 85,671,082 SPC instructions, 61,165,972
ordered write callbacks, and 10,806,203 audio frames. This route includes the
original title and naming screens, new-game sequence, dialogue, clothing event,
room/stairs transitions, and the exit into nighttime Onett. The equality check
includes every entity and spawn variable in WRAM. Its final toggle phase was
256 pixels, so its final image is a native checkpoint, not a wide visual proof.
The ignored log is `build/cpp/presentation-differential-outdoor.log`.

`presentation_scene_tests --assets /path/to/game.ebpak` is a separate optional
source-backed rendering fixture. It reads the imported game's actual sector and
packed metatile tables, uses explicitly synthetic colored arrangements, and
checks every output pixel for both ends of the Fourside tunnel, a tunnel view
wider than the region, and the west/east desert-road boundaries on rows 77/78.
Both US and Japanese asset packs pass 73 checks. The tunnel source interval is
[5632,6400); a 1,024-pixel view puts 128 black pixels on each side. The desert
road interval is [256,5888). This proves the requested named regions use their
actual source boundaries; it is not a natural gameplay visit to those places.

Game-specific addresses come from each independently linked source build's
`generated_profile.hpp`, selected by the imported pack's `GameVersion`. This
includes Japanese battle-background and entity tables, and the different Lumine
Hall even-phase map (`BUFFER+$2000` in Japanese, `BUFFER+$1000` in US). Both use
`BUFFER+$4000` for the odd phase. The wider-rendering fixtures run for both
profiles; the default generic SNES hardware behavior is shared.

A Japanese 1,200-frame twin run also passed: 18,189,240 CPU instructions,
5,091,380 SPC instructions, 2,760,748 ordered writes, and 638,948 audio frames.
Its log is `build/cpp/presentation-differential-jp.log`. Final focused tests
contain 129 passing hardware checks across both profiles, including a combined
world-map/Lumine fixture whose original offscreen patch lies outside the native
viewport; the former wall-over-text behavior fails that regression fixture.
The final tests also pass ASan/UBSan.

The real US outdoor controller replay was additionally captured at 32:9
(796 by 224). `build/cpp/outdoor-current-wide.png` visibly includes the adjacent
houses, fences, paths and cliffs, while its native output has the identical
SHA-256 `15b2716e60dec272f3696a64889694c9ee166f88e613d1f2c0033ac8c535a412`
as the original `outdoor-route.ppm` checkpoint. This is an actual gameplay
capture, unlike the synthetic scene fixtures. At title frame 3,000,
`title-current-wide.png` has a single uniform backdrop color in both margins
and an exact native center; its copyright text does not repeat.
