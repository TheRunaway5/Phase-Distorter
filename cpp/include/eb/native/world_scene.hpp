#pragma once

#include "eb/native/world_map.hpp"
#include "eb/native/world_palettes.hpp"

namespace eb::native {

struct WorldSceneView {
    // Logical camera origin for the authored 256-column view. Wider output
    // extends equally to either side; this never changes simulation or area.
    float camera_x{}, camera_y{};
    unsigned width = 256, overscan = 64;
    std::uint64_t frame{}, scene_identity{};
    std::uint32_t backdrop = 0xff000000;
};

// Composes native map artwork and an optional ActorWorld draw list. Map/timer/
// palette/actor state is read-only; no reference framebuffer or video memory is
// sampled. Source scenery uses palettes2..7. Visible reserved-palette artwork
// requires its future scene owner and is rejected instead of colored wrongly.
// UI, windows, color math and scene transitions are separate native services.
std::shared_ptr<const DirectSceneFrame> draw_world_scene(const WorldMapArea &area,
                                                         const AreaPalettes &palettes,
                                                         const WorldSceneView &view,
                                                         std::shared_ptr<const DirectSceneFrame> actors = {});

} // namespace eb::native
