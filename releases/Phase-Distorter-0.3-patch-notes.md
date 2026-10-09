# Phase Distorter v0.3

A development release for EarthBound (US) and Mother 2 (Japan), covering changes
since the packaged v0.2.1 release of October 4, 2026.

This update improves widescreen presentation, fixes Teleport α and room-entry
problems, keeps enemies and text clear with the photosensitivity filter, and
introduces an optional native Continue engine alongside the regular gameplay
runtime. The native engine is still in development.

## Gameplay fixes

- **Fix a Teleport α arrival crash with a sparse party.** Party members now use
  their actual actor roles after teleporting instead of assuming roster order
  matches actor order. Empty roster entries no longer overwrite a live member's
  graphics pointer. This covers parties such as Ness and Jeff after another
  member has been removed, in both regional games.
- **Fix missing NPCs and props when entering widescreen rooms.** Initial map
  loading and vertical scrolling finish the original NPC row before checking
  the wider row. The wider row keeps consistent bounds throughout loading,
  even if a fade, window effect or display-width change occurs midway through.
  This fixes cases such as the missing phone and mother in Ness's home while
  retaining the original appearance, ownership and capacity checks.
- Expose **Player does max damage** in the Debug settings. The option uses the
  existing player-damage rules; misses and zero-damage results remain possible.
- **Spawn passive cars, delivery vans and taxis across the widescreen loading
  area.** Their original routes, appearance conditions and collision remain
  authoritative. Reserve all required worker tasks and nearby NPC/enemy capacity
  before admitting extra traffic. Defer later spawns at visible route entrances
  until they are offscreen, fixing cars and vans appearing within the wider
  picture while walking through Twoson.
- **Fix late museum lamps and Twoson street posts in widescreen.** Their
  photograph-trigger scripts now supply verified initial artwork previews
  without running the triggers. Check all fifteen streetlights and six Twoson
  street posts during edge scrolling and source activation, with artwork
  prepared beyond the visible viewport.

## Widescreen, Steam Deck and fullscreen

- Clearly label the **16:10 (Steam Deck)** display preset and document 1280×800
  use. Add **`--fullscreen`** to start directly in desktop fullscreen mode.
- Move overworld command, carried-money, dialogue, Goods, Equip, PSI and
  check/talk windows together toward the widescreen left edge, using their
  original dimensions and relative offsets. This also covers the A-button
  shortcut and prevents overlapping windows from leaving clipped parent menus.
  **Status and its PSI information remain centered.** Startup and name-entry
  retain their authored layouts. Direct and completed-frame rendering agree.
- Move battle target-selection, Goods, PSI and temporary-message windows with
  their battle command menu. Preserve text, cursors and overlap order; standalone
  battle narration and HP/PP panels remain centered.
- **Keep the overworld wide during battle entry.** The source transition mask
  spans the selected canvas from setup through the spiral, its final held mask
  and cleanup. Fix the remaining snaps back to native width when the animation
  timer expires and when its mask is cleared, including instant-win cleanup.
- Keep the entire **War Against Giygas** intro card centered in its original
  4:3 composition, including static, clean holds, palette flashes and fades.
  The following logo scene restores the selected widescreen width.
- Extend the animated backgrounds in **coffee and tea scenes** across the
  selected canvas while keeping captions centered and unrepeated. Retain the
  original center pixels, scroll behavior and source state, including with
  direct rendering and the photosensitivity filter enabled.
- Expand regional presentation regressions through the maximum supported
  1024-column canvas, including display changes and unrelated-layout rejection.

## Photosensitivity filter and snapshots

- **Keep visible battle enemies and text windows at their original colors and
  brightness** while backgrounds and flashing effects remain filtered. The
  exemption follows the visible sprite or window pixel, including borders,
  fills, scrolling and prompt sprites; transparent or occluded pixels leave
  the background filtered.
- Clear exempted pixels' feedback history so moving enemies, closing windows
  and changing text do not leave smoothing trails. Alternate enemy palettes,
  targeting colors and the game's own fades still appear immediately.
- Apply the foreground metadata consistently at desktop startup, after settings
  changes and after snapshot loading. This fixes the actual frontend path that
  could still blur text despite the renderer supporting exemptions.
- Keep Giygas-strength smoothing active throughout the intro card, including
  holds and flashes after procedural static stops. Filtering still advances
  once per completed game frame, independently of the presentation frame rate.
- **Write snapshot format 9**, preserving foreground exemption masks and
  in-flight widened row scans. Formats **1–8 remain loadable** with matching
  game content; older snapshots captured inside a widened scan finish that row
  before returning to the corrected scan order.
- Existing supported ROM imports and ordinary battery saves remain usable.
  No reimport or new game is required for the regular gameplay fixes.

The filter remains optional and off by default. Foreground exemptions are a
port preference; complete SNES Classic/Wii U scene equivalence remains unverified.

## Optional native Continue engine

Launch with **`--native-session 1`**, **`2`** or **`3`** to continue the matching
slot in an existing regional battery save using `NativeSession`. The regular
launch path continues to use `GameSession`.

- Add native ownership for Continue restoration, map startup, world execution,
  input, frame publication and the existing SPC/DSP audio adapter. Supported
  gameplay runs without the compatibility gameplay CPU; the existing audio
  implementation is retained.
- Integrate enemy approach/contact, visible encounter transitions, battle
  command menus, action scheduling, targeting, outcomes, victory and map return.
- Integrate world commands, Goods browsing and Help/Drop/Give/Use actions,
  equipment changes, Status and PSI help, field item/PSI effects, authored doors,
  town-map entry/exit and PSI Teleport α/β travel.
- Share party, inventory, battler, dialogue, window, actor and palette owners
  across field and battle actions. Suspended operations resume their actual
  child instead of polling input, repeating work or advancing the world early.
- Preserve immutable published frames: repeated display sampling does not
  advance gameplay, consume random numbers or produce extra audio.
- Disable machine debug controls and machine snapshots in native sessions,
  with an explanation in Settings.

This is an experimental Continue route, not a replacement for the complete
regular game. Native title/new-game, save-writing, defeat/restart, some story
services and full regional playthrough acceptance remain unfinished. Some
Japanese door-key and higher teleport-selector storage cases are explicitly
rejected. Physical text/DMA timing and native filter metadata remain open.

## Native engine and cutscene development

- Add shared cinematic display, nested-event and retained-resource owners, with
  separate Coffee/Tea, Sound Stone, Cast and Ending modules.
- Integrate real regional Coffee/Tea Talk/Yes callers and cancelable, mandatory
  and nested Sound Stone sequences. Add source comparisons for text, resources,
  palettes, input order, party/RNG and returned graphics.
- Implement Cast actor/map/window sequencing and native saved-photo playback
  with slot selection, authored fades, directional slides and credits callbacks.
  Ending event 12 remains gated while complete physical-scene acceptance is open.
- Expand original-source comparisons for actor graphics allocation, lifetime,
  streaming and upload order; map overlays/collision; palette changes; sector
  music; party relocation; dialogue buffers and Japanese text aliases.
- Add bounded source-work components for foreground scheduling, screen and
  window publication, interrupts/NMI, random generation, object drawing and
  HP/PP meter rolling/artwork. These retain actual source owners and publication
  order; passing individual helpers does not establish complete scene timing.
- Fix native selection-menu input advancement, battle window focus, graphics
  publication during party relocation and NPC/enemy creation, and retained
  window/background/actor resources across scene transitions.
- Organize native world menus, doors, town maps, teleport, battle actions,
  dialogue, cinematic and graphics services into focused modules. Expand
  regional unit, integration, original-source and dependency-audit coverage.

Native cutscene work still has documented physical-frame, intermediate-picture,
input/callback and full-scene audio differences. Name entry, title cinematics
and the live photographer also need their complete native callers. These are
ongoing engine work, not claims of complete endgame or whole-game parity.

## Downloads and updating

- **`Phase-Distorter-0.3-windows-x86_64.zip`** — Windows application and SDL2.
- **`Phase-Distorter-0.3-linux-x86_64.zip`** — Linux application and SDL2/GCC runtimes.
- **`Phase-Distorter-0.3-launchers-x86_64.zip`** — both platforms in the combined
  repository-style launcher layout.
- **`SHA256SUMS`** — archive integrity checks.

Extract the complete archive into a fresh folder and run **Phase Distorter**
or **Phase Distorter.exe**. The combined bundle also provides `launch.sh` and
`launch.bat`. Back up your `.srm` files before updating; existing imports and
saves stay in the external application-data directory.

Linux binaries require **x86-64, glibc 2.43 or newer and desktop OpenGL**.
Windows binaries require **64-bit Windows and desktop OpenGL**. Windows
execution checks use Wine. Desktop 1280×800 checks do not establish physical
Steam Deck validation, and automated replays do not establish a full playthrough
or physical controller/VRR/audio acceptance.

Each bundle includes these notes, version identification, instructions,
dependencies, licenses, a payload manifest and checksums. No ROMs, imported
asset packs, saves, snapshots or personal preferences are included.
