# Phase Distorter 0.1 — 2026-09-27

- Standalone C++20 source snapshot with compiled US and Japanese program profiles.
- Direct native Linux `Phase Distorter` and Windows `Phase Distorter.exe`
  applications beside the README; no shell or batch launcher needed to play.
- SDL2/OpenGL video, controller input, audio and saves.
- First-run own-ROM import with validation and local asset packs.
- Mother 2 Japanese program, fonts, text and assets; separate saves for each game.
- Always-visible gameplay bar with Settings (F1) and Fullscreen (F11), a floating
  Settings window, and a game picture fitted below the bar.
- Settings Assets tab lists both default caches, offers confirmed cache clearing
  without deleting ROMs or saves, and confirms game switching with normal SRAM
  persistence and retained display/fullscreen preferences.
- Persistent aspect preferences and read-only game diagnostics.
- Widescreen scene rendering with unchanged gameplay and spawning, battle patterns,
  Lumine Hall text, and presentation camera boundaries for narrow map regions.
- Fixed intro artwork uses a centered 4:3 view; the Mother 2 logo screen extends
  its background into widescreen margins without stretching or repeating the logo.
- Deterministic verification tools and documented fidelity limits.
- Phase Distorter branding and Saturn launcher/window icons on both platforms.
- Optional per-user Linux menu and Windows Desktop/Start Menu shortcut setup,
  targeting the native applications directly; Windows setup can be opened as
  `install-shortcuts.vbs`.
- Direct source-build installation with `cmake --install build --prefix dist`;
  optional developer launch scripts retain local-build priority.
- Expanded installation/build guide and explanatory source comments.
- Default-off photosensitivity filter scoped to identified flashing effects,
  including battle animations and Franklin Badge lightning; ordinary picture
  pixels retain their original colors and sharpness.
