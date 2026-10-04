# Phase Distorter v0.2.1

Released locally on October 4, 2026. Changes since the packaged v0.2 release.

This update fixes props and NPCs disappearing when entering the original
viewport, expands map cutscenes to widescreen, and corrects prayer returns and
the optional photosensitivity filter. Both EarthBound (US) and Mother 2
(Japanese) receive the fixes.

## NPCs, presents and decorations

- Fix stationary people, streetlights, presents, containers and sanctuary boss
  markers disappearing when crossing from widescreen margins into the original
  4:3 picture. The wider horizontal scan had replaced the original scan, so
  some placements were rejected too early and never checked again. Walking now
  runs the original scan before its wider counterpart.
- Preserve the source's appearance conditions, actor ownership, creation and
  capacity checks. Both the ported and original instruction paths use the
  corrected scan, and snapshots can resume between its two calls.
- Add completed-map scrolling regressions for both sides, both games, both
  execution paths and five widths, covering the affected object types.

## Widescreen and ultrawide cutscenes

- Remove the automatic 256-pixel crop from ordinary map cutscenes controlled by
  a scripted camera. They now use the area's existing border policy.
- Expand the post-Giygas robot ending's scenery and actors to the selected
  width while retaining its original camera and soul-departure timing.
- Expand source-generated prayer/iris apertures around their authored focus.
  Both radii grow together, preserving the opening's shape and movement while
  allowing wider scenery and off-center people to appear. Other window effects
  retain their explicit masking rules.
- Add capture padding beyond the maximum ultrawide viewport so fractional
  camera interpolation cannot expose a black strip at the display edge.
- Extend software/direct-render and interpolation regressions through
  1024-pixel-wide pictures, including robot departure and prayer openings.

## Photosensitivity filter

- Replace v0.2's temporary automatic dimming detector with recovered SNES
  Classic EarthBound brightness and temporal-feedback processing. When enabled,
  the picture uses the console's approximately 80% brightness ramp instead of
  dropping to 25% during detected flashes.
- Apply animation-specific PSI smoothing with its hold/decay, and stronger
  feedback during the authored Giygas battles. PSI takes precedence while its
  animation is active; the resumed Giygas battle receives feedback after prayer.
- Process once per completed game frame, including widescreen margins. Higher
  presentation rates and repeated host redraws do not advance the filter.
  Disabling it restores original pixels, and native screenshots remain raw.
- Update the Display description and documentation to explain the implemented
  behavior. The filter remains optional and off by default. Recovered arithmetic
  and parameters do not establish full console or Wii U scene parity.

## Giygas prayer returns and snapshots

- Fix long battle stalls after prayer text. Overworld scratch work could
  overwrite the suspended battle's PSI state; the state is now preserved before
  the cutscene and restored before the battle resumes.
- Preserve that state through snapshots taken during prayer. Older mid-prayer
  snapshots reinitialize inactive PSI state at the Giygas return boundary.
- Write snapshot format 7, preserving the captured aperture, suspended prayer
  state, filter context and in-flight NPC scan. Formats 1 through 6 remain
  loadable with matching game content. Existing normal saves and imported packs
  remain compatible; reimporting is unnecessary.
- Add regional prayer-state and snapshot regressions, plus an opt-in replay of
  the actual prayer cutscene and subsequent battle ticks.

## Delivery and verification

- Rebuild Linux and Windows x86-64 applications and refresh the canonical
  `launchers/` binaries and version record.
- Supply separate runnable platform ZIPs and a combined launcher folder/ZIP
  using the same layout as earlier releases. Each bundle includes these notes,
  `VERSION`, instructions, dependencies, licenses, a manifest and checksums.
- Both registered suites passed: 228 tests passed and 38 optional tests skipped
  per platform. Windows execution uses Wine.
- Additional asset-backed checks cover both regional games, 240 scrolling
  source-call cases, 72 staged walking replays, sprite visibility, cutscene
  composition and snapshot continuation. The source-backed scene fixture passes
  4,917,257 checks per region on Linux and Windows under Wine.

These checks are bounded fixtures and replays, not a complete game playthrough
or native Windows hardware certification. The native engine migration remains
in progress. Linux still requires glibc 2.43 or newer and desktop OpenGL.
No ROMs, imported gameplay packs, saves, snapshots or personal settings are
included in the bundles. Existing user data stays outside the release folder.
