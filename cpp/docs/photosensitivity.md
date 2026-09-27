# Reduced flashing

Phase Distorter has an optional **Photosensitivity filter** setting in
**F1 → Display**. It is disabled by default. The setting moderates identified
flashing effects, including battle animations and Franklin Badge lightning, in
both EarthBound and Mother 2, including widescreen. Ordinary picture pixels keep
their original colors, contrast, sharpness, and motion.

Enable it before starting play with `--reduce-flashing`, or change it in the
control panel. `--no-reduce-flashing` explicitly disables it. Normal desktop
exits save the setting with the other display preferences; `--no-config`
disables preference loading and saving.

This is an independently implemented visual accommodation, not medical
certification, a guarantee that every trigger is removed, or an exact recreation
of Nintendo's rerelease behavior. Its parameters are pragmatic rendering
choices; they have not been clinically validated.

## Reference and scope

Clyde Mandelin's [firsthand Wii U Mother 2 demonstration](https://www.youtube.com/watch?v=TfeAqJZP2MA)
describes a fade/fuzz effect during bright flashing sequences, including some
PSI animations. That observation provides visual inspiration for this feature.
It does not establish Nintendo's precise detection rules, thresholds, or filter
implementation. We have not verified the exact Switch rerelease implementation
or that it matches the Wii U version.

[Nintendo's photosensitivity guidance](https://en-americas-support.nintendo.com/app/answers/detail/a_id/59596/p/606)
identifies flashing speed, brightness, color, and patterns among relevant visual
factors. It does not publish an EarthBound-specific filtering algorithm.
[Microsoft's Xbox Accessibility Guideline 118](https://learn.microsoft.com/en-us/gaming/accessibility/xbox-accessibility-guidelines/118)
discusses reducing flash contrast, frequency, and area, desaturating red flashes,
and reducing high-contrast spatial patterns. Phase Distorter's option addresses
identified flashing effects; it does not alter every saturated-red object or
static high-contrast pattern. Including this option does not establish compliance
with a particular photosensitivity test or accessibility standard.

For a separately published implementation, Apple's
[VideoFlashingReduction project](https://github.com/apple/VideoFlashingReduction)
and [technical explanation](https://developer.apple.com/accessibility/downloads/Video-Flashing-Reduction-12.pdf)
describe temporal luminance analysis and mitigation. Phase Distorter's filter
does not implement that algorithm either. Apple's explanation also illustrates
why detecting and reducing flashes in real time is different from proving that
all possible triggering content has been eliminated.

## Rendering behavior

The renderer uses read-only game and video state to identify supported effects
as scanlines are drawn. It supplies the filter with the presentation image, an
effect-pixel mask, and a reference image composed without the identified effect.
This scopes processing to an effect rather than treating every changing pixel,
every battle frame, or every bright scene as a flash.

The source gates cover:

- Active PSI palette cycles: only their cycling palette entries and the
  currently targeted enemy flash palettes. Noncycling PSI artwork and gradual
  return, knockout, or revival fades stay original.
- Identified battle fixed-color flashes, including red/green and PSI swirl
  effects, and the active phases of reflected white/dark background flashes.
- Franklin Badge and related scripted lightning, including their identified
  lightning layer and associated cutscene color flash.
- The gas-station intro's authored normal-versus-flash palette entries.

Only the effect's color contribution relative to the current reference image
is moderated over time. The current underlying scenery and motion continue
normally. Pixels outside the effect mask pass through unchanged; there is no
whole-picture color grading, spatial blur, or gray startup fade.

For each marked pixel and RGB channel, the filter:

1. Subtracts the reference channel from the original channel to obtain the
   signed effect contribution, then retains one quarter, rounded to the nearest
   integer with ties away from zero. The target contribution is at most 64
   channel values in either direction.
2. Moves the stored contribution one quarter of the remaining distance toward
   that target per completed game frame, rounding toward the target, with a
   maximum step of eight channel values.
3. Adds that contribution to the current reference channel and clamps the result
   to 0–255. Alpha remains unchanged.

These limits describe the effect contribution while a pixel is marked. They
are image-code values, not measured display luminance or clinical thresholds.
They do not bound whole-picture changes: the underlying scene can move or
change immediately. When a pixel becomes unmarked, its original value is copied
exactly and its effect history is discarded immediately, so the ordinary scene
does not inherit an effect trail.

Disabling the setting or resetting the filter discards its effect history.
Freshly marked pixels start with zero contribution rather than a gray image.
When the presentation dimensions change, history stays horizontally centered
and vertically top-aligned. This matches widescreen's addition of columns
around the original view instead of stretching that view; newly exposed
margins start with zero effect contribution.

Processing uses private presentation buffers. It does not patch imported
assets, change the CPU or sound processor, alter game timing, or feed filtered
pixels back into the hardware model. Map loading, collisions, camera
coordinates, spawning, combat, and audio continue to use the original game
state.

Processing advances for each completed emulated game frame, including frames
the frontend skips presenting while catching up. This keeps the filter's
history tied to game frames rather than the number of window redraws. Host
display scheduling can still affect which intermediate images a monitor shows.

When disabled, the frontend uses the unfiltered presentation picture. The
original 256×224 framebuffer always remains unfiltered. `--screenshot` captures
that original framebuffer; `--presentation-screenshot` captures the presentation
image with the filter applied when enabled. This distinction allows gameplay
and native-rendering comparisons without confusing them with an optional visual
effect.

## Tradeoffs and validation

Supported flashes look less intense and their changing colors can respond more
gradually. The option deliberately preserves ordinary scenery, text, sprites,
and background animation. It has no general image-only flash detector: effects
that are not identified by the renderer remain unchanged.

Synthetic frame tests can check exact preservation outside effect masks,
reduced effect contrast, temporal behavior, reset behavior, and an unchanged
disabled path. Rendering fixtures can check which game states select those
masks. These checks do not establish that an entire playthrough is free of
photosensitive triggers. Uncovered effects, moving patterns, the display's
physical brightness, the size of the image, and viewing conditions remain
outside the guarantees of these numerical checks.

The optional `presentation_differential` build target compares two executions
using an explicitly supplied local asset pack. Pass `--reduce-flashing` to
enable effect metadata and filtering on its changing-width instance while the
other instance stays unfiltered. The existing comparisons still require equal
CPU/SPC state, ordered writes, game memory, clocks, audio, and native pixels.
The result reports effect frames, masked pixels, and changed pixels; zero effect
coverage does not demonstrate that an animation was filtered. With
`--output-prefix`, the `-wide.ppm` capture contains the filtered picture when
this flag is set. This tool is not part of the asset-free default CTest run.

Contributions should preserve the separation between presentation history and
game state, keep ordinary pixels and the disabled path unchanged, and document
the supported effects and processing parameters. New validation claims should
identify the tested sequences and method rather than describing the option as
seizure-proof.
