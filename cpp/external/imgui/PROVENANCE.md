# Dear ImGui provenance

Unmodified standalone Dear ImGui v1.91.9b, upstream commit
`f5befd2d29e66809cd1110a152e375a7f1981f06`:
https://github.com/ocornut/imgui/tree/f5befd2d29e66809cd1110a152e375a7f1981f06

Only the core library and SDL2/OpenGL2 platform/render backends are included.
No demo, game code, engine code, or libultraship code is included. The MIT
license is reproduced in LICENSE.txt. SHA256SUMS records the upstream bytes.

The panel layout and aspect preset list were informed by the local Shipwright
control panel (commit ca1e4c22505a7c2101ca816c31023daaf4e2638e,
soh/soh/SohGui/ResolutionEditor.cpp). Its libultraship submodule was absent,
so no files were copied from it. This frontend uses its own small interface.
