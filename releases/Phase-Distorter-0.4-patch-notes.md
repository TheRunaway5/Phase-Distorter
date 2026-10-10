# Phase Distorter v0.4

Draft patch notes prepared October 10, 2026. Changes are relative to the
packaged v0.3.1 source snapshot. Linux, Windows and combined launcher bundles
are available locally for upload.

## Rendering performance

- Reduce CPU work when drawing backgrounds, capturing direct scenes and
  composing native battle backgrounds. Decode complete tile rows once and
  reuse their pixels and palette colors within an immutable capture.
- Make cached background reads cheaper and skip inactive window-mask work.
  Direct capture keeps separate scratch storage so changes in sampling policy
  cannot reuse stale pixels.
- Calculate software rasterizer coordinates once per row or column where
  possible, reducing repeated work in interpolated scene rendering.
- Preserve full rendering resolution, CRT quality, layer priority, window
  effects and transparent sprite behavior. Gameplay and audio cadence remain
  unchanged.

In a paired 600-frame Twoson walking replay with direct scene capture, median
game-update CPU time fell from **6.72 to 5.45 ms in EarthBound** and **6.87 to
5.51 ms in Mother 2**, about **19–20% less CPU time**. The 99th percentile fell
from 8.26 to 6.56 ms and 8.24 to 6.92 ms respectively. State, native and
presentation pixels, and generated audio matched frame by frame.

These are measurements of one replay on one Linux host, not whole-game FPS
guarantees. Game updates still share the presentation thread. Uncapped runs
improved in initial probes but continued to show long presentation gaps under
workstation load; uniformly stable uncapped output remains unresolved.

## Verification and compatibility

- Extend independent background comparisons to cover scroll, tile sizes,
  flips, map wrapping, distortion, transparent pixels and physical VRAM wrapping.
- Retain existing save, imported-asset, display-setting and machine-snapshot
  formats. The default gameplay route and experimental native Continue route
  keep their existing acceptance limits.
- Retain the standard Linux glibc 2.36 baseline, bundled SDL2 and privately
  linked C++ support. Windows includes SDL2.dll.

## Bundles

- Update both canonical applications in `launchers/` and their version to 0.4.
- Provide separate Linux/Windows ZIPs and a combined launcher ZIP/folder with
  instructions, these notes, dependency licenses, manifests and checksums.
- Include source-input and build records; retain earlier release archives.

No ROMs, imported game packs, saves, snapshots or personal preferences are
bundled. Windows execution checks use Wine. Bounded replay and virtual-display
checks do not establish native Windows hardware, physical VRR/audio/controller
behavior, a complete playthrough or complete native-engine parity.
