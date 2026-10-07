# Console photosensitivity filter

**F1 → Display → Photosensitivity filter** or `--reduce-flashing` enables the
EarthBound console brightness ramp and temporal feedback. It is off by default;
`--no-reduce-flashing` restores the original pixels. The same processing covers
EarthBound, Mother 2, battle backgrounds, effects, and widescreen margins. Visible
battle enemies and text windows keep their original colors and brightness.
These foreground exemptions are port preferences and differ from console
processing of the complete image.

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

The entire War Against Giygas intro retains its original 256×224 canvas and
centered 4:3 display in both regions, including procedural static, clean holds,
palette flashes and fades. Its latched scene metadata keeps strength-7 feedback
active throughout, rather than reverting to brightness-only processing when
the static subscreen stops. This extends the recovered console feedback to the
intro as requested; identical title activation on a running SNES Mini has not
been measured. The later logo scene restores the selected widescreen width.
`intro_presentation_tests` exercises bright/dark static and palette pulses at
60/144/300 FPS from 256 through 1024 columns, checking native artwork,
unfiltered text-mask exclusion and repeated host redraws.
The opt-in `intro_presentation_tests ASSETS...` runs each regional game from
boot through the following logo using the desktop configuration and pipeline.
Linux and Windows-under-Wine runs covered 1,795 US and 1,794 JP card frames,
including 98 flash frames and 15 abrupt palette transitions each. Every
consecutive filtered card frame changed each RGB channel by at most 24; raw
flash transitions exceeded that bound. Every source card pixel matched the
native framebuffer before filtering. These runs do not measure a physical
console or a native Windows display.

The exemption mask follows visible battle OBJ artwork and two-bit windows, including
the background fill, borders, and overlaid prompt sprites. It works on BG1 in
battle and BG3 in the overworld, with each pixel's current scroll, window mask,
and priority. Transparent or hidden text tiles do not exempt the battle behind
them. Source-tagged lightning that reuses the same tilemap stays filtered. The
filter bypasses both dimming and feedback for these foreground pixels and clears their
feedback history, preventing trails when a window closes or an enemy moves or
disappears. Transparent or BG-occluded enemy pixels do not exempt the background.
Normal, alternate and targeting palettes update immediately; the original
game's sprite palette changes and brightness fades are preserved. The latched
battle scene retains the exemption during the source's exit fade and releases
it when the next scene replaces that layout. Snapshot
schema 8 preserves this mask; schemas 1 through 7 remain readable.

The desktop applies the photosensitivity preference to renderer metadata at
startup, after settings changes, and after loading a snapshot. Previously these
three calls always disabled metadata, so the window exemption passed isolated
rendering tests while the actual desktop still blurred text. The shared desktop
configuration path now enables the mask whenever the filter is enabled.
`desktop_presentation_tests` covers that path at 60/144/300 FPS in both regions,
including filter toggles and restoration from a snapshot saved with it disabled.

Widescreen moves the live command and carried-money windows to the display's
left edge with their native inset and dimensions. The source window list owns
each sampled tile; unrelated dialogue stays centered. The mask follows the
relocated artwork. This also applies to the left-side goods, PSI-category and
status windows, with startup/name-entry windows retaining their authored layout.
The source RAM records, tilemaps and canonical 256-pixel picture are unchanged.
Both scanline and direct scene rendering use the same window placement.
`widescreen_window_tests` checks native through 1024-column views with the filter
on and off, changing text, closure, and source-state preservation.
`native_dialogue_window_reference --widescreen ASSETS...` compares relocated
command/cash artwork against complete original CREATE/DRAW routines in each
region. `presentation_scene_tests --menus ASSETS` checks direct/raster parity
and stationary menu artwork over an asset-backed overworld scene.

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
60/144/300 FPS and repeated host refreshes. `photosensitivity_window_tests`
checks US/JP battle and overworld windows at 256/398/522/1024 columns and
60/144/300 FPS, including changing text colors, snapshots, hidden windows,
and lightning-page reuse. It also checks visible, moving, removed and occluded
enemies in both battle layouts with normal/alternate palettes, native fades
and forced blanking. Its opt-in `photosensitivity_window_tests ASSETS...` runs
the complete source battle opening and command window in each region, checking
actual enemy pixels, alternate sprite palettes, text and filtered backgrounds.
Linux and Windows-under-Wine reference runs preserved 35,809 US and 27,423 JP
enemy pixels, plus 545,114 US and 355,514 JP text pixels. These include 22 US
and 28 JP frames with the alternate enemy palette. The replay executes source
routines with imported artwork and explicit encounter inputs; it is not a
measurement on a physical console or native Windows hardware.
The older asset-backed
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
cutscene and observes 600 frames after its battle return. An optional width
argument also verifies visible scenery on both sides beyond the native viewport
during the actual cutscene's combined window mask. The captured US
prayer-four replay changed from 50 battle ticks with a maximum 65-frame gap to
547 ticks with a maximum 9-frame gap. The remaining short gaps include ordinary
loading/damage work; no long palette loop remains. Removing only the scratch
protection reproduces the failing result. `prayer_state_tests` checks both
regional instruction sites and restoration through a mid-cutscene snapshot.

Source-generated apertures retain their authored focus and opening/closing
sequence. Both radii expand together for the selected width, preserving the
shape instead of stretching it horizontally or clipping it at native side
edges. The captured first window is expanded before combining it with the
second window using the original OR/AND/XOR/XNOR operation. The original
single-window-only check missed actual prayer cutscenes: `SET_WINDOW_MASK`
enables two inverted windows with AND. The real US replay reproduced zero
visible pixels in either margin at 522 columns before this correction.
Unrelated window effects retain their existing composition.
`native_stationary_npc_render_reference --prayer-focus ASSETS...` checks 504
opening/closing cases per region at 398, 522, 796, and 1024 columns, including
people on both sides outside the original viewport. These are replay and
numerical rendering checks, not physical display measurements.
