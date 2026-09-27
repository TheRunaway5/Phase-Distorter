# Port verification record

This records the independent C++ port's evidence as of 2026-09-27. Build and
launch instructions are in the standalone [project README](../README.md). The implementation and all
new tests live in `cpp/`; the pre-existing C runtime and decompilation tools are
not inputs to this build.

## Implemented

The US EarthBound and Japanese Mother 2 assemblies are rebuilt into compiled C++ instruction
sites, including macro expansions, runtime M/X immediate widths, and the SPC700
sound driver. Builds use metadata-only asset placeholders. The executable embeds
source-declared instruction bytes only; game data comes from a local asset pack
extracted from the player's own supported ROM. The pack selects its matching
program and rendering metadata; default packs and saves are separate by version.
There is no runtime
instruction-decoder fallback.

The executable includes CPU state and instruction semantics, HiROM/WRAM/SRAM,
controllers, interrupts, DMA/HDMA, scanline PPU rendering, SPC execution, DSP
synthesis, SDL2 keyboard/gamepad input and audio, and an OpenGL display. Desktop
SRAM persistence uses an atomic file replacement. Headless frame/step limits,
frame-indexed input scripts, PPM/GL screenshots, and WAV capture support
reproducible verification.

An always-visible gameplay bar exposes Settings (F1) and Fullscreen (F11), with
the picture fitted below it. The floating ImGui Settings window provides aspect
preferences, read-only diagnostics and an Assets tab for both default caches.
Confirmed cache clearing removes only the selected regular `.ebpak`; current
gameplay retains its in-memory assets. Confirmed switching restarts the selected
game, preserves normal SRAM and display/fullscreen preferences, and opens ROM
setup if its default pack is missing. Custom asset overrides do not control an
intentional menu switch and their files are never deleted. The startup importer
has no gameplay bar. A separate wider presentation buffer draws existing scene data
without changing emulated camera coordinates, entity activation, or spawn rules.
The original 256×224 framebuffer remains available for strict comparisons.
An optional, default-off photosensitivity filter changes only the presentation
pixels of identified flashing effects, including battle animations and Franklin
Badge lightning. Ordinary picture pixels remain unchanged. It advances once
per completed game frame, including frame
boundaries crossed inside DMA, independently of host display pacing. Details
and limitations are in [docs/photosensitivity.md](docs/photosensitivity.md).
Fixed intro artwork uses a native-width canvas displayed at 4:3; the selected
wider view returns after the scene. The Mother 2 logo screen carries its
background edge colors into the widescreen margins while preserving the
original foreground and copyright in the center.

See [TRANSLATION.md](TRANSLATION.md) for the source mapping contract and counts;
the US source has 119,472 original 65816 instruction sites and the Japanese
source has 113,730. Both use the same 2,163-site SPC700 driver. Additional
overlapping 65816 entries preserve runtime width behavior. Every retained code
byte matches its respective supported donor image, and filling the imported
data ranges reconstructs each image's complete SHA-256 fingerprint.

## Evidence

- The final native applications start directly, without shell/batch launchers.
  Windows' GUI entry was tested detached under Wine: first-run import, embedded
  icon, no console window, and visible startup errors. Redirected diagnostics,
  Unicode arguments, and direct native shortcuts also pass. Parent-console
  attachment is implemented but was not verified with a native Windows console.
- The persistent gameplay bar opens Settings with its mouse control or F1 and
  toggles fullscreen with its control or F11. Pixel-by-pixel OpenGL fixtures
  prove the reserved top strip does not crop the game image, including resizing,
  letterboxing, overlay capture, extreme insets, and minimization. The UI tests
  cover input capture, missing caches, both games, and confirmation/cancellation.
  Native cache fixtures also exercise symlink rejection; the three Wine symlink
  fixture cases explicitly skip because that host cannot create the links.
- A live Linux/KWin session switched from a custom Japanese pack to the default
  US cache and back to the Japanese cache. Fullscreen remained active across both
  switches; widescreen and the filter also carried into the new session. F11
  restored a windowed view. Each session wrote only its own selected SRAM path.
  A separate live clear/restart test removed only the selected default cache,
  preserved the other cache, both default saves, and the custom pack, flushed the
  current custom SRAM, and returned to ROM import despite an environment override.
  All such destructive-action tests used isolated disposable user-data folders.
- Linux release libraries are original SDL2 2.32.10 and generic x86-64 GCC
  runtimes. Loaded-library inspection confirmed all three bundled files, without
  SDL3 or SDL2-compat. App/startup and runtime ISA requirements were audited for
  baseline x86-64; the maximum required glibc symbol version is 2.43. Build,
  signature, source, and license provenance is in `../lib/PROVENANCE.md`.
- Top-level CMake installs on Linux and Windows contain the same native
  executable as the tested build; Windows also installs SDL2.dll beside it.
  Runnable archives use explicit input whitelists, reject ROM/asset-pack content,
  preserve executable permissions, and contain payload manifests and checksums.
- Both fresh 0.1 ZIPs passed manifest/checksum verification after extraction
  into paths containing spaces. The exact extracted Linux EarthBound and
  Windows Mother 2 frame-1,800 filtered runs reproduce the tested native/adapted
  pixels and WAV bytes; Windows execution was under Wine. Linux loads its own
  three runtime libraries with no SDL3 dependency. The Linux archive contains
  21 regular files and the Windows archive contains 14; root downloads,
  versioned copies, and the Linux `.zup` alias are byte-identical per platform.
  Archive hashes are recorded in [RELEASE.md](../RELEASE.md).
- The final asset audit covers all 346 tracked or unignored source/release
  files and every ZIP entry. No supported ROM image or imported asset pack is
  present.
- Native Linux and MinGW Windows executables build. Windows execution and
  graphics were tested under Wine, not on a native Windows installation.
- The separate version 0.1 snapshot builds directly from its 136 frozen generated
  C++ sources and eight headers, without the parent assembly tree, metadata YAML,
  or assemblers. Its eleven CTests pass on Linux and under Wine; four optional SPC assembler fixtures are
  explicitly skipped when their tool is absent. A fresh standalone Japanese
  frame-900 run matches packaged native/wide images and WAV bytes exactly.
  English, Japanese, and general launch wrappers work from paths containing
  spaces on Linux and Wine. The snapshot excludes ROMs, imported packs and saves.
- An isolated source-only build without `src/bin`, a ROM, or prior build outputs
  regenerated both profiles identically: 145,774 US and 138,660 Japanese CPU
  instruction records, plus 2,163 shared SPC instruction sites. Its seven
  frontend-disabled CTests pass, including 15 translator fixtures. Imports
  reconstructed both canonical image hashes, and both frame-900 images matched
  normal builds exactly. Ninja dependency checks verify source changes
  regenerate affected outputs.
- All final standard CTest checks pass: translation fixtures, CPU semantics, bus/PPU,
  SPC semantics, DSP synthesis, OpenGL presentation, frame pacing, asset import,
  control-panel interaction, cache administration, and photosensitivity filtering
  (eleven registered tests). Native Linux completes in 8.95 seconds and Wine
  in 46.40 seconds, both with the final 302-check bus fixture.
- Selective-filter unit tests pass for exact ordinary-image preservation,
  disabled identity, input/reference preservation, effect locality, red/cyan
  and black/white alternation, moving reference images, center-aligned resizing,
  toggles, and invalid input. All 302 focused bus checks also pass under
  ASan/UBSan. These include paired observed and unobserved DMA runs spanning
  multiple frame boundaries. The observer does
  not change hardware state, clocks, ordered writes, audio delivery, or pixels.
- With selective filtering enabled, both native Linux 3,100-frame differential
  routes preserve CPU/SPC state, ordered writes, game/entity/PPU memory, clocks,
  audio, and native pixels while the presentation width changes. EarthBound
  checks 46,141,394 CPU instructions, 13,035,207 SPC instructions, 10,177,144
  ordered writes, and 1,650,615 audio frames; Mother 2 checks 46,423,899 CPU
  instructions, 13,035,281 SPC instructions, 9,549,143 ordered writes, and the
  same audio-frame count. Each route exercises 98 effect frames, with 1,820,644
  pixel changes in EarthBound and 1,843,576 in Mother 2 accumulated across those
  frames. These routes cover
  intro flashes and title transitions, not every battle animation.
- Separate native Linux frame-1,800 captures in both games confirm that the
  gas-station flash changes when enabled. Frame-3,000 logo pictures remain
  bit-identical on and off. Every pair preserves native pixels, WAV bytes, CPU
  and SPC state, and instruction counts. All eight corresponding Windows runs
  under Wine match Linux pictures, audio, and CPU/SPC state exactly. The fresh
  extracted-package runs described above also pass. The earlier nine
  preference/CLI cases passed
  on Linux and Wine,
  including persistence, defaults, and explicit overrides.
- Both games' fixed intro-art frame-1,500 captures use the original 256-pixel
  canvas for a centered 4:3 display; their frame-3,000 logos use a 398-pixel
  widescreen canvas at 16:9. Every original center pixel remains identical to
  the previous and canonical native captures. Mother 2's 71-pixel margins match
  the background edge color on each row, without repeated logo/copyright art.
- A live Linux OpenGL run with the filter enabled presented 1,800 frames with
  zero skipped frames in 29.952 seconds. At the final fixed 4:3 scene, its
  1,194×672 window held an 871×653 game viewport at (161, 19). Every viewport
  pixel matches nearest-pixel scaling of the complete 256×224 source image,
  with zero mismatches and black sidebars. That filtered source also matches
  the headless run exactly.
- Phase Distorter's Saturn artwork is embedded in the window on both platforms
  and in all seven Windows executable icon sizes. Actual Linux and Wine window
  pixels and Windows executable resources were checked against the provided
  image and derived ICO. Optional Linux menu and Windows shortcut installers
  passed isolated-destination tests, including paths containing spaces. Windows
  shortcut targets were read back and launched under Wine.
- Asset tests verify SHA-256 against standard vectors, exact extraction and
  reconstruction, copier-header handling, corruption and truncation rejection,
  donor preservation, and atomic pack replacement. Native and Wine first-run
  tests selected an invalid file, observed the error without creating a pack,
  then imported the supported donor and started the game. Test packs were kept
  outside the install layouts.
- Linux and Wine panel tests exercise F1/Escape, physical input capture, actual
  checkbox/button clicks, file browsing, and OpenGL overlay drawing/restoration.
  Presentation readback checks include 398-, 524-, and 1,024-pixel source widths
  and toggling back to the original view.
- An imported-asset 16:9 run at frame 900 produces the exact previous native
  screenshot, WAV, CPU state, SPC state, and instruction counts.
- A 20,295-frame US route through the house and into Onett passed paired native
  and dynamically changing widescreen execution: all CPU/SPC state, 61,165,972
  ordered writes, entity/WRAM data, PPU data, native pixels, and 10,806,203 audio
  sample frames match. The durable `presentation_differential` target requires
  an explicit user-imported pack and is not part of asset-free default CTest.
- The same comparison passes 1,200 Japanese frames with 18,189,240 CPU
  instructions, 5,091,380 SPC instructions, 2,760,748 ordered writes, and 638,948
  audio sample frames. Both profiles pass 73 source-backed tunnel/desert
  presentation checks each. All 129 hardware checks pass ASan/UBSan, including
  combined world-map and Lumine Hall text margins. These scene fixtures do not
  claim end-to-end story visits to those locations.
- Japanese intro (frame 900), title (3,000), kana naming (3,000 with the input
  replay), and bedroom (12,000) match bsnes 115's accurate PPU in all 57,344 RGB
  pixels. Reference gamma is 100; doubled reference columns were verified
  identical before reduction. Mother 2's original fonts and language execute
  through its own compiled source profile.
- Presentation clamps use the contiguous matching tileset-sector interval.
  They shift only the wider rendered view; narrow regions receive side borders.
  This is a new presentation policy, not an original game-camera restriction.
  Source analysis and named tunnel/desert coordinates are documented in
  [docs/presentation-scenes.md](docs/presentation-scenes.md).
- The CPU harness passed all 5,120,000 external register/memory/cycle vectors
  using two explicitly selected published correction files. The original
  unmodified corpus has 44 known upstream discrepancies; see
  [docs/cpu.md](docs/cpu.md) for the exact revisions and reproduction commands.
- All 256,000 external SPC700 state/memory/cycle vectors pass. Indefinite
  sleep/stop cycle counts are excluded; see [docs/spc.md](docs/spc.md).
- Memory-speed tests distinguish FastROM, SlowROM, WRAM, MMIO, and controller
  accesses. Refresh tests cover the global eight-clock phase, partitioning,
  and the shortened odd NTSC scanline. These do not prove individual bus phases.
- A final 10,000-frame new-game audit checked 151,608,405 CPU helper calls and
  41,832,620 SPC helper calls. All immediate lengths matched live CPU flags;
  all SPC instruction bytes matched source constants. None of the 13,013,693
  observed CPU writes targeted cartridge ROM.
- The 12,000-frame new-game input replay reaches Ness's bedroom through the
  actual title, file-selection, naming, and opening-scene code. No game-state
  patching or preconstructed save was used.
- The same input replay in independently installed bsnes 115 reaches the same
  bedroom at frame 12,000. All 57,344 pixels match exactly in RGB after correcting
  five-bit expansion, without spatial or frame alignment. Its accurate PPU emits doubled
  horizontal columns; every pair was verified identical before lossless
  reduction to 256 pixels. Gamma was explicitly set to 100.
- The reference comparison exposed and fixed a horizontal-scroll latch bit loss
  and brightness quantization order. The animated interference at frame 900 now
  matches every raw RGB pixel. The later frame-1200 palette phase still differs;
  an isolated renderer fixture supplied the reference palette and matched that
  reference image exactly, confirming a palette-state difference rather than a
  tile decoding or composition error. This fixture is not an end-to-end run.
- A 9,000-frame Linux and Windows/Wine new-game replay produced identical
  framebuffer and nonzero stereo WAV files, as well as matching CPU/SPC state.
  After the final display corrections, refreshed packages also match exactly at
  frames 900 and 1,200 in framebuffer, WAV, and CPU/SPC state. The installed
  executables are byte-identical to those tested builds. The frame-900 capture
  and the stable title at frame 3,000 also match bsnes in every RGB pixel.
- OpenGL readback tests check every pixel at native and triple scale, both
  letterbox directions, orientation, colors, and texture replacement. Actual
  windowed game output also matches the source framebuffer on the tested paths.
- The display can omit an intermediate presentation while simulation, input,
  and audio continue at the native frame rate. Deterministic 60/144 Hz pacing
  tests pass; an injected 80 ms host stall produces four catch-up frames and
  preserves the final actual GL readback and WAV against headless execution.
- Native and Wine save tests verify default creation, disabling persistence,
  loading all 8,192 bytes, and atomic overwrite. A native failed-write test
  preserves the previous save. This is file persistence evidence, distinct
  from a complete in-game save/load route.
- Both platforms automatically identify both supported ROMs and packs, reject
  an explicitly selected game that does not match, remember the selected game,
  and preserve the other game's default SRAM. Final 900-frame US and Japanese
  runs match across Linux and Wine in native pixels, wide pixels, WAV output,
  and CPU/SPC state. Installed executables match those tested binaries.
- The saved controller route completes Mom's dialogue and clothing event, room
  and stairs transitions, a phone interaction, and the exit into nighttime
  Onett. A fresh 20,295-frame replay exactly reproduces its live capture. The
  18,375-frame movement/release checkpoint also exactly matches bsnes RGB.
  See [docs/gameplay.md](docs/gameplay.md) for commands and bounded observations.

Generated verification files and executables are under `build/cpp` and
`build/cpp-mingw`; they are intentionally ignored by Git. External corpora and
reference emulators are test inputs, not production dependencies.
Install-layout packages are in `build/cpp-package/linux` and
`build/cpp-package/windows`; the Windows package includes `SDL2.dll`.

## Limits of the evidence

Whole-game and console-level equivalence has not been established. The source
mapping reports retain 119 US and 116 Japanese alternate-width edges that leave proven instruction
bytes; none is silently turned into code. Unsampled indirect destinations and
gameplay routes remain unverified. Unknown code stops with architectural state.

The hardware model is not cycle accurate. Individual CPU bus phases, dummy
accesses, precise interrupt sampling, DMA arbitration, and active-display PPU
access contention remain limitations. The display is evaluated per scanline;
hires, interlace, and overscan output are not implemented. Their relevance to
the translated games must be distinguished from general SNES compatibility.
See [docs/hardware.md](docs/hardware.md) for details.
The intro's later animated palette phase and some intermediate movement/animation
frames differ from reference captures. A bounded source trace confirms skipped
palette uploads when intro processing crosses vblank; exact capture and interrupt
phase remains unresolved. Stable-scene equality does not establish frame-perfect
equivalence.

Matched platform outputs prove consistency between builds. They do not by
themselves establish matching original-console pixels or sound. Nonzero WAV
output and DSP tests establish synthesis; no human audible-playback assessment
is claimed.
