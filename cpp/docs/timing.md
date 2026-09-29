# Gameplay timing and display pacing

The desktop frontend enables a bounded extra CPU budget for the regular
MAIN_LOOP call to RUN_ACTIONSCRIPT_FRAME. This removes the console CPU limit
from expensive overworld entity updates without changing movement distances,
entity selection, script instructions or callback order. Normal updates retain
their original instruction timing. Once a pass spends 140,000 master clocks,
its remaining computation can run at eight times the original CPU rate.

Interrupt handlers, frame waits, hardware register accesses, pending hardware
arithmetic and pending graphics uploads retain native timing. DMA, PPU and APU
clocks are not accelerated. The arithmetic guard matters: original MULT8 uses
fixed instruction delays; accelerating those delays can read stale products.
The transfer guard keeps the faster producer from outpacing the upload queue.
This is intentionally a gameplay timing improvement, not cycle-identical SNES
execution. It is bounded capacity, not a guarantee against arbitrary host stalls
or all possible game workloads. `--original-timing` restores the original CPU
budget for source/reference comparisons. Core hardware tools default to original
timing; the desktop/headless application explicitly selects the improved policy.

At the default Native frame-rate setting with vsync, fixed-refresh displays use a nearby integral refresh divisor when
it lies within 1% of the native 60.098813897 Hz rate. Common 60/120/240 Hz modes
therefore use 60 game frames per second, avoiding repeated catch-up caused by
the small native/display rate mismatch. Other modes, including 75/144 Hz, retain
the native rate. Uneven refresh repetition is inherent when these rates do not
divide evenly. A frame is omitted only when a whole subsequent game frame is
already overdue. Host suspension beyond 250 ms starts a new pacing epoch.

**Settings > Display > Variable refresh rate (VRR)** is optional and defaults
to off. It caps the selected presentation rate 1% below the monitor's
reported maximum refresh with vsync. At Native this selects the native game cadence;
at higher frame rates it limits only presentation, keeping game updates at the
native cadence. It requires VRR already enabled in the monitor,
graphics driver and desktop; some desktops require fullscreen. The setting
controls application pacing and does not force or detect physical VRR support.
It does not request SDL adaptive vsync, which can tear after a missed refresh.
See [SDL swap-interval documentation](https://wiki.libsdl.org/SDL2/SDL_GL_SetSwapInterval)
and [NVIDIA's VRR requirements](https://http.download.nvidia.com/XFree86/Linux-x86_64/555.58/README/openglenvvariables.html).

`--vrr` and `--no-vrr` override the saved preference. Toggling the setting or
moving the window to a monitor with a different selected cadence resets the
host deadline and reopens playback at the corresponding source sample rate.
SDL converts that rate for the audio device; DSP synthesis and WAV recording
retain the original samples. `--no-vsync` and headless runs use native cadence
(headless execution remains unthrottled).

The implementation separates these responsibilities through `GameSession` and
`PresentationPipeline`. The session owns hardware execution and emits borrowed
completed-frame views. The pipeline consumes those views, retains high-rate
picture history and decides when simulation or presentation is due from an
explicit host timestamp. Window/monitor queries and audio-device replacement
remain desktop concerns. See [module ownership](source-navigation.md).

Scripted input is selected by `InputReplay` at hardware-frame boundaries.
`--replay-only` excludes physical game buttons from that selection while keeping
window and settings events active; it does not change simulation timing. Use it
for windowed replay comparisons where accidental keyboard/controller input
would otherwise combine with the script.

## Higher frame rates

**Settings > Display > Frame rate** offers Native (the default), 90, 120, 144,
165, 240, 300 FPS and Uncapped. `--fps 300` selects a 300 FPS presentation limit;
`--fps 0` removes that limit. The CLI accepts every integer from 60 through 300,
with 60 meaning Native. The choice is saved and carried across game switches.

Higher rates run a separate presentation clock. The game, controller sampling,
PPU, APU and DSP continue at 60.098813897 hardware frames per second. Rendering
never creates extra game updates or skips required CPU/audio work. Short stalls
omit presentation slots while simulation catches up. Long suspensions reset the
host clock instead of producing an unbounded backlog. A slow computer or a driver
swap limit can still prevent reaching the requested rate.

**Interpolate frames** generates intermediate pictures between two completed
frames. It applies to the entire presented canvas, including overworld camera
movement, actors and battle backgrounds, after the photosensitivity filter.
It estimates local image motion within eight pixels using every source pixel,
searching integer offsets nearest first, and uses fractional pixel sampling.
Displacements are rounded after applying the sampling phase, so exact positions
at fifth-frame intervals stay exact. Pixel correspondence is checked again when
sampling across block boundaries; uncertain correspondence holds the nearer
source picture instead of dissolving unrelated sprite edges. This is frame
generation, not a rewrite of the game's discrete sprite poses or battle logic
at 300 Hz. It adds one game frame of visual latency; occlusion, overlapping
layers and motion outside the search range can still cause local stepping or
incorrect matches. Disable it to display the
original completed pictures at the chosen host rate. `--interpolation` and
`--no-interpolation` override the saved setting. Native mode bypasses generation.
Scene cuts, skipped source frames, dimension/aspect changes and filter switches
reset picture history; no in-progress PPU buffer is retained for extra redraws.

Without VRR, higher frame rates request immediate swaps (vsync off), so tearing
is possible. With VRR, the application retains vsync and limits presentation
below the reported refresh ceiling; Uncapped is consequently bounded by that
ceiling while VRR is selected. `--no-vsync` explicitly bypasses this behavior.
The application cannot enable the monitor/driver's VRR configuration. A high
submission rate does not prove a display scans out that many distinct frames.

Windows uses SDL's timer backend for whole-millisecond waits and yields through
the remaining fraction. A Wine real-clock probe found the MinGW standard-library
3 ms wait rounding to roughly 15–16 ms, limiting even GPU-backed presentation
to about 64 FPS. SDL's equivalent measured 3.06 ms; the final deadline wait
measures 3.333 ms at 300 Hz under Wine. Linux retains its steady-clock sleep.
`presentation_wait_probe` is a separate real-clock check, outside deterministic
CTest because host scheduling can affect its measurements. This change also
improves the Native pacing path on Windows.

## Verification

`gameplay_timing_tests` runs the compiled US and JP entity dispatcher, action
script VM, movement and screen callbacks. A synthetic 30-entity roster with
forty script commands per entity took 920,660 master clocks before the change
and 241,299 afterward: it now fits inside the active-frame budget. The 27,147
instructions and every ordered write match. A one-entity pass retains exactly
31,540 clocks. Pending-upload fixtures retain original timing, and separate
compiled-path checks cover MMIO, DMA, interrupt entry/return, frame waits and
MULT8's asynchronous result. These are stress fixtures, not captures of every
enemy type or every map.

`frame_pacer_tests` covers 60/75/120/144/240 Hz, 0.2/8/12 ms work per frame,
an injected 80 ms stall, long suspension, multiple hardware frames per step,
VRR ceilings and mode changes. Previously, 12 ms work on a 60 Hz display caused
50 ms presentation gaps and roughly 1,200 omissions per minute. The fixed path
presents every refresh at 16.667 ms in that deterministic fixture. Catch-up
preserves all simulation and audio work. UI tests click the actual VRR checkbox.

The 26,097-frame EarthBound exploration replay and 15,000-frame Mother 2 new-game
replay exercise the application with the new policy. Their timing and eventual
positions can differ from original frame-indexed replays because slowdown is
removed. They establish bounded execution, not full-game or native-VRR proof.

High-rate verification adds deterministic 90/120/144/165/240/300/uncapped clock
checks and nonlinear moving-pixel fixtures at 256, 400 and 1024 columns. They
verify intermediate positions (not merely changed colors), independently moving
wave bands, fixed HUD pixels, exact endpoints, scene cuts and disabled identity.
Ghosting regressions additionally cover solid sprite edges moving in both
directions, one-pixel artwork on odd columns, unmatched pose changes, and
five-pixel horizontal/diagonal motion at all fifth-frame sampling phases.
Actual SDL/ImGui clicks select 300 FPS and Uncapped and toggle interpolation.

A native NVIDIA/OpenGL desktop 300-hardware-frame comparison measured approximately
120/144/165/240/298 presentations per second at those respective limits; all runs,
including Native and Uncapped, produced identical final CPU/SPC state, execution
counts, WAV bytes and canonical pixels. These short runs cover boot/intro content,
not sustained gameplay benchmarks or physical scanout measurements. Uncapped
submission exceeds 300 on this host when the picture is static.

Both regional 600-frame differential runs generate 3,000 extra pictures with the
filter enabled and changing widths, preserving every observed ordered write,
CPU/SPC state, memory, hardware clock, audio sample and native pixel. A separate
20,900-frame US exploration probe generated 2,005 intermediate pictures during
its last 401 ticks; moving overworld endpoints and the intermediate picture were
visually inspected. A battle-artwork fixture with a synthetic scanline wave also
produces distinct intermediate pictures. This does not establish interpolation
quality for every layered battle effect or full-game visual parity.
