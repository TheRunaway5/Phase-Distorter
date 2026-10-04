# Automatic reduced flashing

Phase Distorter has an optional **Photosensitivity filter** in **F1 → Display**.
It is disabled by default and works in EarthBound and Mother 2, with or without
widescreen. It analyzes every completed presentation frame. Strong contrast
changes or rapid pixel/color flicker cause an immediate reduction of the entire
picture's RGB exposure, including scenery, sprites, text and widescreen margins.
Repeated activity holds the picture dimmed; brightness recovers gradually after
activity stops. There are no game-state gates, attack lists or scene exceptions.

Enable it before starting play with `--reduce-flashing`, or change it in the
control panel. `--no-reduce-flashing` explicitly disables it. Normal desktop
exits save the setting with other display preferences; `--no-config` disables
preference loading and saving.

This independently implemented visual accommodation replicates the requested
automatic dimming behavior. **It is not a verified 1:1 implementation of the
Wii U, SNES Mini or Switch filter.** Its thresholds and exposure curve are
independently chosen image-processing parameters, not recovered Nintendo
constants, clinical thresholds or a guarantee that every trigger is removed.
The effect changes software pixels; it does not control a physical backlight.

## Nintendo evidence

Clyde Mandelin's [firsthand Wii U Mother 2 demonstration](https://www.youtube.com/watch?v=TfeAqJZP2MA)
describes a fade/fuzz effect during bright flashing sequences, including PSI
animations. It does not specify numerical detection rules or exposure timing.
The [Virtual Console overview supplied with the request](https://ukikipedia.net/wiki/Virtual_Console)
describes the platform and some emulation differences; it does not document this
filter's algorithm. Reports of individual flashes do not establish the exact
behavior of every PSI tier, background, status effect or cutscene.

The user-supplied `/home/eric/Downloads/SNES-Mini-Kernels-master.zip` contains the
SNES Mini emulator, rather than just Linux boot kernels. The USA 2.0.14 root
filesystem contains `usr/bin/canoe-shvc`:

- Version: `2.3.0531.0`; revision: `fc349ac43140141277d2d6f964c1ee361fcd20ca`.
- SHA-256: `30d0768623e875dc8f3de334ccc7193807878c8ad9b50c38bec362deb4245a61`.
- Its embedded help identifies flash/pattern compensation modes `0=None`,
  `1=VcPhoto`, `2–5=Armet:Additive,Blend,MonoAdditive`, and `100=auto`.
- Dynamic symbols name `FlashingFilter::IntegrateMotionBlurFilter`,
  `IntegrateMotionBlurRiseFilter`, `IntegrateMotionBlurRiseLineFilter`, and
  `nerd::Armet<3,3>` / `<5,5>` flash detection, through their static data objects.
  There are also named game-specific patch data objects.

These are direct binary observations, not proof that its automatic mode is the
Wii U algorithm or that the user-described screen-wide detector is Nintendo's
precise implementation. The stripped ARM executable was inspected offline;
Nintendo's filter was not executed or fully reconstructed. No emulator binary,
ROM, table or Nintendo source code is copied into the port. Implementing any
of those named modes exactly would require further reverse engineering and a
differential reference. [Hakchi's emulator command-line reference](https://github.com/TeamShinkansen/Hakchi2-CE/wiki/Command-line-arguments-%28SNES-Mini%29)
also lists these modes, but is not a Wii U parity specification.

## Detector and exposure parameters

The detector compares each raw frame against the preceding raw frame, before
any optional interpolation, CRT processing or UI composition. Alpha is ignored
by the detector and preserved exactly in the result. Detector history always
contains raw pixels, so dimming cannot trigger itself.

For each pixel it measures:

- Luma: `(77*R + 150*G + 29*B + 128) / 256`, using integer division. This is a
  weighted image-code value, not measured display luminance.
- Absolute luma difference and the largest absolute RGB-channel difference.
- Rapid reversals: a channel rises by at least 8 values and then falls by at
  least 8, or vice versa, with fewer than twelve quiet frames in between.
  Retaining direction across short plateaus also catches slower repeated color
  pulses. Twelve quiet frames clear it. This detects color flicker with little
  change in mean luma.

A region triggers when any of these conditions holds:

| Measurement | Trigger |
| --- | --- |
| Luma difference at least 48 or channel difference at least 96 | At least 1/8 of pixels |
| Luma difference at least 128 or channel difference at least 192 | At least 1/32 of pixels |
| Rapid channel reversals | At least 1/64 of pixels |
| Mean absolute per-pixel luma difference | At least 24 |

The regions are the entire picture and its centered original viewport (up to
256 columns). Checking both includes margin-only flashes and prevents wide dark
margins from diluting flashes in the original picture. This checks per-pixel
changes, not just frame-average brightness: a flickering black/white pattern
can trigger even when its average brightness stays constant.

The reversal threshold includes a single expanded SNES palette step. Asset
probes found that the earlier 24-value, 1/8-area rule missed the authored
Kraken, ordinary Starman and some Giygas backgrounds. The smaller reversal
threshold catches those patterns without adding enemy IDs or scene exceptions.
An isolated adjustment still needs a subsequent reversal to qualify.

On a triggering frame, exposure immediately becomes `64/256`. Every output RGB
channel is `(input_channel * exposure + 128) / 256`, with integer division.
Exposure stays at that level for twelve consecutive quiet completed frames.
Each later quiet frame adds `4/256` exposure, reaching normal brightness after
another 48 frames. A new trigger immediately restores the dim exposure and
restarts the hold. These frame counts are tied to game frames, not host redraws.
No old picture is blended into the current picture.

Static artwork, slow fades and sufficiently small motion remain bit-for-bit
original at normal exposure. Large scene cuts or substantial high-contrast
movement can also trigger dimming; the detector has no content exceptions to
distinguish those from a flash. The first frame after startup, reset or enabling
establishes a comparison baseline. No temporal detector can reconstruct earlier
flashing from that one frame alone.

On a resize, comparison history remains horizontally centered and vertically
top-aligned. New pixels start with the current image as their baseline. The
whole-picture exposure and hold persist across geometry changes. Disabling,
re-enabling or restoring a snapshot discards old detector history.

## Integration and validation

Processing uses private presentation buffers. It does not patch imported
assets, advance the game, change CPU/SPC or audio state, or feed dimmed pixels
back into the hardware model. The desktop frontend does not request the old
renderer effect masks/reference image for this filter. Those diagnostic APIs
remain available for existing renderer checks.

Every completed game frame advances detection, including frames skipped during
host catch-up. Repeated redraws of the same frame do not advance it. During
dimming, high-rate direct scene rendering falls back to the filtered picture,
so redrawing source artwork cannot bypass exposure reduction. Host scheduling
still determines which intermediate pictures a monitor displays.

The original 256×224 framebuffer remains unfiltered. `--screenshot` captures
that original framebuffer; `--presentation-screenshot` and `--gl-screenshot`
capture the adjusted presentation image. Disabling the option restores the
original picture immediately on the next refresh.

Synthetic tests cover immediate untagged full-screen flashes, global dimming
from localized bursts, margin-only flashes, equal-luma palette flicker,
constant-mean patterns, moderate rapid reversals, repeated pulses, quiet
hold/recovery, static artwork, slow fades, small moving sprites, alpha, input
preservation, resize, reset and invalid input. Pipeline tests compare results
across 60/144/300 FPS caps, multiple completed frames before presentation, and
repeated same-frame redraws. These are numerical processing checks, not a
Wii U comparison or proof of every named in-game sequence.

### Coverage of the requested scenes

`photosensitivity_scene_reference` is an optional executable taking local
EarthBound and Mother 2 asset packs. It fails if any requested background or
PSI animation family never produces adjusted pixels, or if a status/event
flash escapes dimming. It checks 256-, 398- and 522-column pictures.

| Requested effect | Verification |
| --- | --- |
| Kraken and Starmen | 600-frame authored background runs for Kraken, Bionic Kraken, Starman, Starman Super, Ghost of Starman, Starman Deluxe and Final Starman |
| Giygas phases | 600-frame backgrounds for Devil's Machine, phases 1/2, prayer, after prayer 1 and after prayer 7; phases 1/2 use original loader/controller output because native preparation requires external artwork |
| PSI Flash α/β/γ/Ω, Starstorm α/Ω, Thunder | All 34 original PSI animation setups/advances with actual decompression, palette rotation and queued DMA/NMI, in both two- and four-bit display modes; required Flash/Starstorm/Thunder families must dim |
| Poison, nausea and sunstroke | Original status routing from an expiring damage timer, expected HP loss, real red palette/main-screen publication, same-frame dimming and original restoration |
| Carpainter lightning | Original fixed-color PPU helper, using the 10-step white addition and four-frame alternating holds in `EVENT_705_706_COMMON` |
| Meteorite burst, Phase Distorter flashes and defeat white burst | Original fixed-color PPU transport with white-out and repeated warp-flash fixtures; the complete named cutscenes and defeat routine are not replayed |
| Intro/attract mode | Asset-backed startup differential and headless desktop runs described below; synthetic constant-mean static also tests temporal pattern detection |

PSI checks isolate its original plane from battle objects/UI. Wider PSI/status
fixtures place the native output between explicit quiet margins, verifying
that margins cannot dilute detection and are dimmed globally. Background
checks render the authored patterns at each tested width. Giygas source
fixtures retain the original loader's cold VRAM context; they do not replay
the surrounding story's external artwork publication. These are effect and
rendering checks, not end-to-end playthroughs of every listed location.

On 2026-10-04, this executable passed 264 checks per game (528 total), examining
47,766 pictures per region across the tested widths and display depths. The
original 24-value/1/8-area detector failed the Kraken/Starman/Giygas probes;
the one-step/1/64-area reversal detector passes them. Static artwork, gradual
fades, small-sprite motion, filter timing and presentation cadence tests also
pass. The program is deliberately opt-in because the asset packs are local:

```sh
cmake --build build --target photosensitivity_scene_reference
build/cpp/photosensitivity_scene_reference /path/to/earthbound.ebpak /path/to/mother2.ebpak
```

The Google AI description is a requested coverage checklist, not an exact
specification of the game's graphics or Nintendo's filter. Applying the
filter does not mean every frame must remain dark: static/quiet portions can
recover, and newly enabled filtering first establishes its temporal baseline.

The optional `presentation_differential` target accepts `--reduce-flashing`
and a local asset pack. It compares CPU/SPC state, ordered writes, game memory,
clocks, audio and native pixels against an unfiltered execution, and reports
`filtered_frames` and `changed_pixels`. Zero changed frames do not demonstrate
flash coverage. With `--output-prefix`, the `-wide.ppm` picture is filtered.

On 2026-10-04, Linux and Windows executable builds and five focused CTest suites
passed. Asset-backed startup differential runs preserved the compared hardware,
memory, audio and native pixels over 1,800 frames in each game:

| Game | Frames with changed presentation pixels | Changed pixels across the run |
| --- | ---: | ---: |
| EarthBound (US) | 1,001 | 83,876,555 |
| Mother 2 (Japanese) | 1,003 | 83,729,005 |

Separate 1,200-frame headless runs through the desktop application's actual
presentation pipeline produced filtered final captures in both games. These
startup checks are separate from the named background, PSI and status fixtures
above. Neither check is a GPU/display or Nintendo-console comparison, and the
complete named story cutscenes remain represented by their flash mechanisms.

The detector does not establish medical safety or compliance with a
photosensitivity standard. [Nintendo's photosensitivity guidance](https://en-americas-support.nintendo.com/app/answers/detail/a_id/59596/p/606)
identifies visual factors but does not publish this game's filter algorithm.
[Apple's VideoFlashingReduction reference implementation](https://github.com/apple-aiml-research/VideoFlashingReduction)
is a separately specified detector; Phase Distorter does not implement it.
