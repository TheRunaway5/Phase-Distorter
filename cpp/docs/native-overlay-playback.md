# Native status overlay playback

Checkpoint21 scoped implementation and private acceptance, 2026-09-30.
Mushroom, sweat, small-ripple and big-ripple animations now have a native live
owner connected to the actual ActorWorld drawing phase and SpriteActors output.
This does not close the global native-session or later enemy-family gates.

- [x] Import the four finite clips into typed timed-frame sequences through
  `OverlaySprites`, retaining the previously imported eighteen frame variants.
  Source data is `src/data/events/entity_overlays.asm`; runtime playback uses
  semantic clip indices, countdowns and immutable pixel fragments.
- [x] Implement complete `C0AC43` (US) / `C0AC22` (JP) and its clip parser
  `C0AD56` / `C0AD35` behavior in `WorldOverlayPlayback`. Preserve water flag
  branches, the creation-width test, role23 status-effect boundary, forced
  sweat, mushroom/sweat flags, priority variants, blank sweat frames and the
  large-ripple vertical offset. Source catalog verification confirms that
  imported creation pixel width times four equals the original byte width.
- [x] Advance only at the actual DrawWorld phase, after physics/projection,
  for eligible visible appearances. Hidden/disabled drawing does not advance
  the clips; offscreen eligible actors do. Initial capture, repeated draw and
  wider presentation do not advance timers or actors.
- [x] Retain four tracks per authored role, including vacant-role reuse. Native
  host actors have independent dynamic identity state; retirement releases
  those records without clearing authored-role state. The borrowed world and
  overlay owner must match; destruction clears the exact drawing binding.
- [x] Implement the real cursor reset from `LOAD_OVERLAY_SPRITES`, US `C4B26B`
  / JP `C486D8`, at the map-loader call site. All thirty authored-role cursors
  rewind; the remaining counts and selected frames survive. The loader and
  renderer borrow the same playback owner.
- [x] Draw overlays immediately before each actor's body, preserving its depth
  and motion identity. The native atlas retains original palette indices,
  object layer and color-math eligibility. Culling includes overlay extents,
  so visible fragments at an edge remain available independently of body bounds.

Private optimized acceptance:

- `native_world_overlay_playback_tests`: 6,058 checks across both versions,
  including actual bound ActorWorld frames, timing loops/gaps, role reuse,
  hidden/disabled/offscreen behavior, live host-water effects and readonly
  repeated captures.
- `native_world_overlay_playback_reference`: each region passes 196 flows,
  14,368 draw phases, 17,156 original OAM projections, 31,725 original calls and
  5,793,387 state/geometry/pixel comparisons. Both regions execute 5,259,544
  original instructions in total. It runs the whole original loader, overlay
  helper and `C08CD5` / JP `C08CC6` sprite projection without substituted helpers.
  Coverage includes creation widths16/32, roles22/23/29, eight surface values,
  four flag combinations, temporary deactivation, long loops, map resets,
  edge coordinates and repeated522-pixel presentation.
- Existing `native_overlay_sprite_reference` remains green in both versions:
  eighteen frames and5,632 pixels each, including actual source-loaded artwork.

Evidence: `build/verification/native-completion/overlay-playback21-private.log`.
The reference compares source queued frames/OAM registration and each native
fragment's pixels, palette identity and position. This is source and native
render-command proof; it does not claim on-screen GPU/CRT-filter verification.
Production uses no CPU, bus, graphics-memory allocation or hardware object
slots. The source interpreter and graphics-memory reads are test oracles only.

Source root: `/home/eric/Developer/ebsrc`; source files are
`src/overworld/load_overlay_sprites.asm`, `src/unknown/C0/C0AC43.asm`,
`src/unknown/C0/C0AD56.asm`, `src/unknown/C0/C08CD5.asm` and the data file above.
Regional symbols were checked against
`build/cpp-dual-clean/out/assembly/{us,jp}/earthbound.dbg`.
