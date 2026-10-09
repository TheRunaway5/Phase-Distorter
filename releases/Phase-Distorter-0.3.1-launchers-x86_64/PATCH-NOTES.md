# Phase Distorter v0.3.1

Prepared October 9, 2026. Changes are relative to the actual packaged v0.3
source index recorded in `Phase-Distorter-0.3-build-info.json`, including the
existing native-engine work in that release. This is a local release bundle
for manual upload; it does not create or publish a GitHub release.

## Direct rendering and CRT performance

- Batch consecutive source primitives with matching stencil, clipping,
  window-mask and color-math state. Preserve their order, triangle diagonals,
  first-opaque sprite selection and nearest-texel sampling.
- Reuse atlas texture storage when new artwork has the same dimensions,
  avoiding repeated texture allocation during game updates.
- Keep the full output resolution and the existing CRT shader. An initial
  NVIDIA 1920×1200 imported-map benchmark reduced median plain-scene+CRT cost
  from 0.277 to 0.205 ms and effect-scene+CRT from 0.349 to 0.267 ms. These are
  isolated renderer costs with GPU completion included, not whole-game FPS
  gains or guarantees for other hardware.
- Add dense tile regressions for transparency, clipping, masking, sprite
  overlap, color effects and fractional motion, plus the opt-in
  `direct_scene_benchmark` development target for imported local artwork.

Game updates and presentation still share one thread. Updates measured around
8–12 ms in the native Continue probe and can interrupt high-rate output.
Uncapped stability is not fully fixed; a cap alone cannot eliminate these
update stalls. Gameplay, input and audio keep their original cadence.

## Linux compatibility

- Use Debian 12's glibc 2.36 baseline for the standard Linux download and
  canonical Linux launcher. This also satisfies the glibc requirement on
  glibc 2.37 hosts; the original v0.3 standard package required glibc 2.43.
- Retain SDL2 2.32.10, rebuilt for the older baseline and baseline x86-64.
- Link C++ support privately into the application. Bundle SDL2 without shared
  libstdc++/libgcc copies that could shadow a system graphics driver's runtime.
- Keep a vector-owning native battle-menu command alive in a named coroutine
  local, fixing a double-free exposed by GCC 12 across suspension.

Desktop OpenGL, graphics drivers, glibc and SDL's system desktop dependencies
remain host requirements. Physical Steam Deck acceptance remains unverified.

## Delivery and compatibility

- Rebuild Linux and Windows applications and update `launchers/` to 0.3.1.
- Provide separate Linux/Windows ZIPs and a combined launcher ZIP/folder,
  with instructions, dependency licenses, patch notes, manifests and checksums.
- Record source inputs, build configuration, archive hashes and fresh
  verification in `Phase-Distorter-0.3.1-build-info.json`.
- Retain earlier release archives and their hashes.

Existing supported ROM imports, battery saves, display settings and machine
snapshot formats remain compatible. The default path still uses `GameSession`;
the optional native Continue route retains its v0.3 acceptance limits.
No ROMs, imported packs, saves, snapshots or personal preferences are bundled.

Windows execution checks use Wine. Bounded tests and replays do not establish
native Windows hardware, physical VRR/audio/controller behavior, a complete
game playthrough or complete native-engine parity.
