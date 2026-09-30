# Native encounter effect continuation

Checkpoint20 working notes, 2026-09-30. This is an implementation checklist,
not a claim of visible-effect acceptance. Existing encounter initialization and
contact reducers borrow `ScenePalette`, `WorldSwirlState` and
`WorldEncounterVisualState`; the latter's `palette_dirty` flag does not itself
publish any changed pixels.

- [ ] Import the 126 authored clips into semantic per-row window intervals.
  Both regional catalogs use `SWIRL_POINTER_TABLE` at address `CEDC45`
  (asset offset `0xedc45`), rechecked in both linked regional symbol files.
  Use that address rather
  than inferring placement from `SWIRL_PRIMARY_TABLE` at `CEDD41`.
  The clip bank is `CE`; `SWIRL_DATA` starts at `CE6914`. Decode the original
  immutable table encoding once, without retaining simulated channels or
  hardware registers as live renderer state.
  Both packs contain 56 mode-1 clips (first interval only) and 70 mode-4 clips
  (both intervals); each decodes to exactly 224 rows. The first byte is the
  transfer shape, followed by run descriptors and interval data. Preserve
  which intervals a clip supplies. Mode-1 content retains the second interval
  from the preceding displayed frame rather than resetting it to empty:
  mode-4 clip 58 ends with second interval `[67,255]`, then clip 59 is mode 1;
  clip 77 ends with `[168,255]`, then clip 78 is mode 1. These are authored
  transitions; reverse traversal must preserve the same retention semantics.
  A semantic clip can own optional second-row intervals; publication
  materializes the complete mask using the retained terminal interval.
  No live DMA-channel model is required.
- [ ] Implement the complete `UNKNOWN_C4A7B0` reducer (US `C4A7B0`, JP
  `C47C19`), including forward/reverse frames, repeated acceleration, padding,
  final retention, and the explicit battle-palette/layer restoration owner.
  The repeat speed-up branch returns to the frames-left test: after selecting
  its new repeat count it immediately decrements that count before loading the
  next sequence. Preserve byte wrapping and source order.
- [ ] Implement its actual oval branch. The step content is US `C4A5CE`, JP
  `C47A37`; a step is a duration byte plus padding and ten words. Optional
  center/size words `8000` retain the previous values. Center, acceleration,
  velocity and size updates wrap as source words; negative size velocity has
  the original clamp-to-zero test. A zero duration ends the sequence.
- [ ] Port `UNKNOWN_C0B149` into semantic 224-row ellipse intervals using the
  imported `UNKNOWN_C0B2FF` integer profile (US `C0B2FF`, JP `C0B2DE`).
  Do not substitute floating-point
  square roots or a visually similar ellipse. Prove both center-Y branches,
  clipping, zero dimensions and the actual complete imported oval sequence.
- [ ] Tag native draw layers explicitly and apply window/color math to native
  draw data. Keep object overlap and priority resolution intact; preserve
  palette ownership and the existing direct-render/high-rate presentation.
  Prove canonical pixels plus wide/ultrawide policy and GPU/software parity.
- [ ] Connect the reducer to actual admitted caller phases. The ordinary
  source loop is actor scripts → `UPDATE_SCREEN` → `C4A7B0` → frame wait.
  Generic dialogue/window/frame-only waits must not advance this effect.
  Other explicit callers include attract mode, scripted battle and screen
  transition routines; audit their order independently. `SCREEN_TRANSITION`
  has both update-screen-before-effect and effect-before-update-screen loops.
  `EVENT_757_ENTRY_2` advances the effect inside its actor task; a blanket
  global update would advance it twice.
- [ ] Continue through real battle initialization and return. A rendered
  swirl does not complete combat or make the desktop session native.
- [x] Correct general/battle setup to reset both window intervals to
  `[255,0]`. `C0B0AA` (JP `C0B089`) explicitly makes the accumulator 16-bit
  before storing `00FF` to each left/right pair. It does not retain the right
  bounds. The native unit and both regional references now seed nonzero bounds
  and compare all four values. Before the fix, the unit and each regional
  reference failed; afterward, 6,003 unit checks and 2,578 original calls /
  11,737 checks per region passed. Evidence:
  `build/verification/native-completion/world-encounter-window-{red-unit,red-reference,red-reference-jp,green-unit,green-reference}.log`.

Source checkout: `/home/eric/Developer/ebsrc`. Relevant files are
`src/unknown/C4/C4A7B0.asm`, `src/unknown/C0/C0B149.asm`,
`src/unknown/C0/C0B0B8.asm`, `src/unknown/C0/C0B0EF.asm`,
`src/unknown/C0/C0AFCD.asm`, `src/unknown/C2/C2DE96.asm`,
`src/data/unknown/C4A5CE.asm`, `src/bankconfig/common/bank0e.asm`, and
`src/system/main.asm`. Verify regional symbols against the linked debug files.

`C2DE96` restores both battle background layer palettes and their published
slots; it cannot be replaced by clearing a flag. Likewise `C0AFCD` restores
the actual selected layer configuration. Missing owners must remain explicit
until their real native reducers and pixel consequences exist.

## Concrete implementation split

1. **Immutable content and effect advancement.** Extend `WorldSwirlData` with
   decoded clips, the integer ellipse profile and oval steps. A dedicated
   effect service borrows the existing `WorldSwirlState` and
   `WorldEncounterVisualState`, retaining the displayed mask independently of
   `update_in`: stopping advancement does not erase the last visible mask.
   Compare complete original `C4A7B0` calls in both regions, then the displayed
   224-row intervals, including mode-4 → mode-1 inheritance, reverse traversal,
   repeat speed transitions, padding, byte wrap and oval termination. Oval
   termination also retains its last mask. The actual ellipse routine is US
   `C0B149` / JP `C0B128`; its profile is US `C0B2FF` / JP `C0B2DE`.
2. **Palette and layer ownership.** Give the native compositor one authoritative
   published `ScenePalette` and an explicit selected layer configuration.
   Current map/actor/UI capture bakes separate colors into ARGB atlases:
   `AreaPalettes.scenery` maps to slots 32–127, UI to 0–31 and actor palettes
   to 128–255. Contact's borrowed `ScenePalette` and its dirty flag currently
   do not recolor those atlases. Preserve source publication order for area
   animation, UI palette updates, contact grayscale and battle restoration;
   do not introduce a second mutable palette cache that silently overwrites
   these effects. `C0AFCD` / JP `C0AFAC` needs main/subscreen selection and
   color-math policy from the selected content configuration, not only the
   current five `visible_layers` booleans. `C2DE96` / JP `C2DE0B` restores all
   16 colors of both retained battle layer palette bases, publishes layer 1,
   and publishes layer 2 only when active. Existing
   `BattleBackgroundScene::apply_palette_brightness(0x100)` is not equivalent:
   it omits index 0 and can omit the secondary layer for four-bit primaries.
3. **Native pixel composition.** Extend immutable draw commands with semantic
   layer tags and palette/color-math eligibility; retain palette indices or
   recolor through the authoritative palette before publication. Resolve
   first-opaque actor overlap, then main/subscreen priority and window masks,
   then RGB5 color math. Actor palettes 0–3 are ineligible for color math even
   when the actor layer is selected. Preserve that property when constructing
   actor quads. `SET_WINDOW_MASK` (US `C0B047`, JP `C0B026`) selects both
   intervals: inverted setup uses their union; non-inverted setup uses the
   complement of their union. It applies selected layer masking to both
   main and subscreens. `BattleBackgroundSceneFrame::draw` currently flattens
   two layers into one ARGB image; retain those independent layers until
   window/color math has resolved. Implement the same semantics in
   `rasterize_direct_scene` and the GL presenter, retaining fractional geometry
   and existing actor stencil selection. Prove original canonical pixels,
   software/GL parity, UI and actor overlap, all palette eligibility classes,
   and complete normal/initiative/boss swirls. Wide/ultrawide mask placement
   requires an explicit tested policy: the existing presentation renderer
   anchors the canonical mask and extends edge membership by clamping X to
   0–255. Do not silently stretch or repeat the animation.
4. **Caller continuations and publication.** Add an explicit effect-advance
   service at each actual call site, not to every `complete_frame` or generic
   `TickKind::WorldFrame`. Existing story tick kinds model other callers and
   do not constitute the main loop. `MAIN_LOOP` advances after `UPDATE_SCREEN`
   and before frame wait; the first `SCREEN_TRANSITION` loop does likewise,
   while its second loop advances before `UPDATE_SCREEN`. Scripted battle
   waits first, then advances; battle helper `C2DB3F` advances at its own
   ordered phase. Attract mode has explicit calls around text/world-frame
   continuations. `EVENT_757_ENTRY_2` also advances inside an actor task; bind
   that actual action and preserve caller ownership rather than inventing an
   additional generic tick. Identity checks must ensure the runtime,
   encounter/contact owner and compositor share the same palette, effect and
   layer state. Retried publication must not advance twice, and a failed
   effect callback after committed state must not be acknowledged or replayed.

Accept the visible effect only after actual native contact → direction interval
→ battle entry → effect advancement → published pixels succeeds. Sample the
same completed effect at higher presentation rates without advancing its game
state again. This still leaves battle initialization/return and the complete
desktop session as separate acceptance work.
