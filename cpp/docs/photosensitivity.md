# Reduced flashing

Phase Distorter has an optional **Photosensitivity filter** setting in the F1 control
panel. It is disabled by default. The setting softens abrupt color changes,
bright flashes, saturated red, and some sharp contrasting edges in the displayed
game picture. It applies to both EarthBound and Mother 2, including widescreen.

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
recommends reducing flash contrast, frequency, and area, desaturating red, and
reducing high-contrast spatial patterns. These are useful design goals for an
independent implementation; this project does not claim to pass a particular
photosensitivity test or accessibility standard merely by including the option.

For a separately published implementation, Apple's
[VideoFlashingReduction project](https://github.com/apple/VideoFlashingReduction)
and [technical explanation](https://developer.apple.com/accessibility/downloads/Video-Flashing-Reduction-12.pdf)
describe temporal luminance analysis and mitigation. Phase Distorter's filter
does not implement that algorithm either. Apple's explanation also illustrates
why detecting and reducing flashes in real time is different from proving that
all possible triggering content has been eliminated.

## Rendering behavior

The filter processes the finished presentation image in its own buffers. It
does not patch imported assets, change the CPU or sound processor, alter game
timing, or feed filtered pixels back into the hardware model. Map loading,
collisions, camera coordinates, spawning, combat, and audio continue to use the
original game state.

The processing stages are:

1. **Reduce strong red.** Gradually increase desaturation when red exceeds both
   other channels by more than 32. Strongly red pixels move 75% of the way toward
   an approximate luminance-derived gray value. This reduces their saturation
   without replacing the game's palette or changing palette data in emulated
   memory.
2. **Compress contrast and highlights.** Lift black to 12 and compress bright
   channel values, using a highlight knee at 160 and a maximum output channel
   value of 203 on the 0–255 scale. These are image-code values, not measured
   display luminance or a clinical threshold.
3. **Soften sharp edges selectively.** Use neighboring pixels to soften edges
   when their channel contrast exceeds 48. The center receives half the weight
   and each of its four orthogonal neighbors receives one eighth; image edges
   clamp instead of wrapping. This targets some strong alternating patterns; it
   is not a detector for every potentially problematic spatial pattern.
4. **Limit temporal changes.** Move each output channel a quarter of the distance
   toward the current target, rounding toward that target, with a maximum step
   of eight channel values per emulated frame. History begins at neutral gray,
   value 108, so activation or a history reset does not immediately reveal a
   bright unfiltered frame. When image dimensions change, the previous filtered
   history is resampled with nearest-neighbor sampling at pixel centers before
   applying the same bound. The eight-value limit measures changes relative to
   that mapped history; it does not describe the transition across an explicit
   reset or disabling the filter.

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

The filter changes colors and contrast and can leave short trails behind moving
objects or text. It may soften artwork that was not intended to flash. These
effects follow from the same spatial and temporal processing that reduces
abrupt changes.

Synthetic frame tests can check such properties as bounded channel changes,
highlight compression, reset behavior, and an unchanged disabled path. They do
not establish that an entire playthrough is free of photosensitive triggers.
Moving patterns, the display's physical brightness, the size of the image, and
viewing conditions are outside the guarantees of these numerical checks.

Contributions should preserve the separation between presentation history and
game state, keep the disabled path unchanged, and document any changes to these
parameters. New validation claims should identify the tested sequences and
method rather than describing the option as seizure-proof.
