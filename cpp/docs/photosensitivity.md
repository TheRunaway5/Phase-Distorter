# Console photosensitivity filter

**F1 → Display → Photosensitivity filter** or `--reduce-flashing` enables the
EarthBound console brightness ramp and temporal feedback. It is off by default;
`--no-reduce-flashing` restores the original pixels. The same processing covers
EarthBound, Mother 2, sprites, text, and widescreen margins.

The old automatic detector reduced RGB to 25% and missed some Giygas flashes.
It has been replaced with the SNES Classic EarthBound pixel processing:

- Brightness uses a 256-entry ramp produced by successive float additions of
  `0.8`. White becomes 204; intermediate values truncate rather than round.
- Each channel approaches that brightness-adjusted target from its previous
  **filtered** value. Giygas uses strength 7, including after prayer returns.
- At strength greater than 1, the channel step is
  `max(1, ((abs(target - previous) >> 3) / strength) << 3)` for a nonzero delta.
  Strength 1 reaches the target immediately.
- PSI uses the console's animation strength selection and 16-frame hold/decay,
  taking precedence over Giygas. The final eleven-frame decay truncates the
  strength only after scaling it. The original PSI setup/frame-advance sites
  supply that presentation metadata in both regional games.

Processing runs once per completed native frame. Extra host redraws and frame
caps do not advance feedback. Disabling or loading a snapshot resets frontend
history; changing width preserves centered history and initializes new margins
from black. Alpha and input storage stay unchanged. Filtering uses the raster
presentation path so direct scene rendering cannot bypass it. The native
256×224 framebuffer remains untouched: `--screenshot` captures that original,
while `--presentation-screenshot` and `--gl-screenshot` capture presentation.

## Reference and evidence

The locally supplied SNES Classic emulator `canoe-shvc` has SHA-256
`30d0768623e875dc8f3de334ccc7193807878c8ad9b50c38bec362deb4245a61`.
EarthBound's preset selects filter mode 14. Its controller selects brightness
`0.8`, animation-dependent strengths, and Giygas strength 7. The pixel kernel
was executed independently with an ARM instruction emulator; 600 C++ channel
transitions across strengths 1, 2, 3, 4, 5, and 7 matched exactly. A separate
24-frame pulse sequence supplies fixed expected values in the unit tests.
No emulator executable or proprietary program bytes are shipped in this repo.

This establishes the recovered pixel arithmetic and parameters. The port
identifies Giygas using the authored battle groups and PSI using regional
source instruction sites. That integration is not a complete differential
playthrough against a running console. Separate Wii U output, console display
processing, and every scene's filter activation remain unverified; they must
not be described as measured exact parity.

`photosensitivity_filter_tests` checks the console pulse samples, brightness,
alpha, input preservation, disable/reset, resize, and PSI precedence/decay.
`presentation_pipeline_tests` checks once-per-native-frame feedback at
60/144/300 FPS and repeated host refreshes. The older asset-backed
`photosensitivity_scene_reference` checks rendered effects and adjusted pixels;
with constant console brightness, changed pixels alone do not prove temporal
flash suppression.

## Prayer returns and widescreen aperture

Deep overworld scratch frames during prayer text can overwrite the suspended
battle PSI state. The battle now preserves that owner before the cutscene and
restores it before resuming, including through a snapshot taken during prayer.
Older snapshots taken inside prayer text reinitialize inactive PSI state at the
Giygas return boundary. This preserves the authored waits and damage ordering.

The opt-in `prayer_return_reference ASSETS PRE_PRAYER_SNAPSHOT` replays a real
cutscene and observes 600 frames after its battle return. The captured US
prayer-four replay changed from 50 battle ticks with a maximum 65-frame gap to
547 ticks with a maximum 9-frame gap. The remaining short gaps include ordinary
loading/damage work; no long palette loop remains. Removing only the scratch
protection reproduces the failing result. `prayer_state_tests` checks both
regional instruction sites and restoration through a mid-cutscene snapshot.

Source-generated apertures retain their authored focus and opening/closing
sequence. Both radii expand together for the selected width, preserving the
shape instead of stretching it horizontally or clipping it at native side
edges. Unrelated window effects retain their existing composition.
`native_stationary_npc_render_reference --prayer-focus ASSETS...` checks 336
opening/closing cases per region at 398, 522, 796, and 1024 columns, including
people on both sides outside the original viewport. These are replay and
numerical rendering checks, not physical display measurements.
