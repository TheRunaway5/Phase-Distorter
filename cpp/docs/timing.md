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
budget, scene timing and sprite storage for source/reference comparisons. Core
hardware tools default to original timing; the desktop/headless application
explicitly selects the improved policy.

The normal frontend uses host-owned overworld sprite images and allocation.
Actor admission and actor-driven fades use the explicit `ActorFrames` policy:
at most one enabled actor pass starts per hardware frame, and a fade advances
after a completed pass. Original sprite routines can use this same clock for
resource-ownership comparisons. The original renderer can span several hardware
frames during one actor pass, so removing that slowdown changes the number of
actor updates completed within some old NMI-driven fades. The unmodified
original-timing comparison is retained separately; it is not claimed equivalent
to the new policy. Hardware frame counters, publication readiness, audio and
standalone fades retain their existing clocks. See [native resource and clock
verification](native-engine.md).

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

**Direct scene rendering** is enabled by default for higher rates. It draws
background planes and native actor parts directly at the window's
resolution. Camera and actor positions are interpolated between native ticks;
completed images are never blended, warped or motion-matched. A moving source
pixel can consequently occupy distinct display-pixel positions between ticks.
Sprite animation poses, input, collisions, scripts, enemies and audio still
advance on the original game clock. This adds one game frame of visual latency.

The current direct path supports verified overworld scenes, including wide and
ultrawide canvases. It samples 16 extra source pixels around the viewport, keeps
HUD planes stationary, and resolves sprite overlap before background priority.
Every candidate must reconstruct the entire canonical frame exactly. Raster
palette/scroll/VRAM changes, unsupported windows or color math, battles, and
other unverified scenes use their original completed frames. The flash filter
also takes precedence whenever it changes the picture. This conservative
fallback avoids inventing artwork, but those scenes retain native motion.

`--direct-rendering` selects this mode. `--native-frames` disables both direct
motion smoothing and legacy image interpolation. `--no-interpolation` disables
only image-based generation. **Interpolate frames**, exposed when direct
rendering is off, remains an optional legacy mode (`--interpolation`). It
estimates local image motion and can match overlapping sprites incorrectly.
Native frame-rate mode bypasses both paths. Scene changes, missing source
frames, geometry changes and large position jumps reset motion history.

Source capture receives a read-only view of game memory. GPU draws consume an
immutable atlas and draw commands; they cannot run game instructions. The desktop
no longer enables the experimental widened source entity loader, whose fixed
sprite pool can overflow. Native-width and wide sessions use identical activation.
See [the native engine migration](native-engine.md) for the replacement and its
current limits.

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

Direct-rendering checks additionally cover US/JP source-map capture at 256,
398, 522 and 1024 pixels, raster-change fallback, immutable publication,
photosensitivity precedence and recovery. GPU readback checks five fractional
poses against an independent software rasterizer, including first-opaque sprite
selection, background priority and returning to canonical frames. The asset-backed
`presentation_differential --world-replay --save FILE --direct-rendering` route
loads a save in memory, teleports to Twoson and walks in both directions. It
compares CPU/SPC registers, every ordered write, entity/PPU/save memory, clocks,
audio samples and native pixels with direct rendering off. Both instances use
the same timing/preload policy; the user's save file is never written.


### Frame-time and audio follow-up (2026-09-29)

Pixel composition skips background decoding when a layer is disabled on **both**
PPU screens. Sub-screen color math, window masks, hardware flags and enabled-layer
raster changes keep their existing behavior. A 360-frame 398-column walking replay
retains the same picture hash before/after (`27faa8263eaeb4ee`); sampled direct poses
also match the independent software rasterizer. On one paired run, thread CPU time
fell from 8.20 to 6.64 ms in native mode and 10.25 to 7.96 ms with direct capture.
These are shared-host measurements, not guarantees for every scene or resolution.

Device playback now starts with a 2,048-stereo-frame reserve (64 ms at 32 kHz).
After a true underrun it rebuilds that reserve before resuming, instead of playing
isolated small arrivals. The callback copies from a circular buffer without
allocation, file I/O or sample processing. The game clock and recorded DSP PCM do
not change. Deterministic delivery tests cover recurring 25 ms stalls, exact sample
order, circular-buffer wrap and recovery after a longer pause. An SDL disk-output
stress capture reduced interspersed silence from 613 stereo frames to zero for the
same delivery pattern; unlike deterministic tests, device captures depend on host
scheduling. Sustained CPU overload or a stall longer than the reserve can still
interrupt playback.

The OLED CRT toggle runs only on the GPU, after the game draw and before UI.
Its native-picture path uses CRT-Lottes Fast's eight-tap reconstruction. Direct
scenes retain their fractional positions via a GPU viewport copy and continuous
sampling with a 7-by-3 Gaussian kernel in source-pixel units; beams stay at the
original raster height. The kernel matches horizontal and vertical softness to
the native-picture path at tested 3x, 4x and 5x scales. Both use linear-light color,
phosphor masking and brightness compensation. Geometry is flat and there is no
frame history or temporal blending. GL readbacks check disabled identity, black,
corner coverage, orientation, resizing, native/direct transitions, fractional
motion and UI state. The actual UI checkbox and saved/CLI overrides are tested.
The 7-by-3 kernel's 398- and 522-column Twoson replays measured about 0.28 and
0.33 ms per filtered GPU draw at 3x scale on this NVIDIA host (including draw,
filter and GPU wait), over 1,790 draws in each route. These are warm route
averages, not worst-case latency bounds or a controlled comparison against the
earlier 0.37/0.53 ms runs under different host load.
These timings do not establish OLED panel calibration, HDR output or physical
scanout cadence. Upstream provenance and full public-domain license are in
`cpp/external/crt-lottes-fast/` (relative to the repository root).


### Sustained-stutter follow-up (2026-09-29)

The previous audio-jitter test did not cover prolonged presentation starvation.
With successive 22 ms ticks, catch-up could skip every visible update for 968 ms
while continuing to run the game. `presentation_pipeline_tests` now reproduces
that pattern in native and high-rate modes and requires fresh pictures within two
completed ticks (44 ms in that fixture). Catch-up still executes every input,
CPU and audio tick; the change does not speed up, discard or duplicate gameplay.

On Linux the interactive frontend requests nice -10 for its own thread, only
when its inherited priority is lower. It restores the prior value on teardown.
This is a best-effort ordinary scheduler adjustment, never a realtime policy or
an elevation request; if the account disallows it, normal scheduling continues.
The measured host had 80–100 runnable tasks on 16 logical CPUs. At lower priority,
a tick using about 8 ms of CPU often took 40–50 ms of wall time. With the adjustment,
the actual-device native replay delivered all 360 frames in six seconds without
an audio callback underrun. The direct-mode replay also had no audio underruns,
but only 268 draws at a requested 240 FPS under that load. Neither this change nor
the CRT filter can guarantee high presentation rates on a saturated machine.
These probes used a hidden NVIDIA GL window; the real device diagnostic stream
was muted. They measure submitted frames and callback starvation, not physical
scanout or a listening test.

Mode 0/1 backgrounds now decode an eight-pixel tile row once per synchronous
scanline instead of repeating map/bitplane/palette work for each pixel. Scratch
storage expires at the end of that scanline, so HDMA and VRAM/CGRAM updates cannot
leave stale rows. Native-ring/world-map transitions remain separate even when a
fine-scrolled tile crosses x=0 or x=256. Offset-per-tile, mosaic and affine modes
retain scalar sampling; direct capture keeps its existing separate tile cache.
The new cached/scalar check compares 983,040 candidate pixels across all eight
modes, including flips, tile sizes, scroll wrapping and palette identities. The
matched walking executables have identical picture hash `ff5473c9df3df230`; thread
CPU time in that paired run fell from 7.97 to 7.04 ms. Nine focused test suites pass.
A 2,600-frame 21:9 route also preserves CPU/SPC state, every observed ordered write,
all game/entity/PPU/save memory, clocks, PCM and native pixels with direct rendering
on/off (7,548 extra source renders). As always, those checks are scoped evidence,
not a full-game parity claim.

When CRT Filter is enabled at startup, both shader paths are compiled and drawn
once before the audio and simulation clocks start. This removes the observed
first-use shader hitch from timed gameplay. GPU/UI regression tests exercise
native, widescreen and direct pictures after that warm-up.
