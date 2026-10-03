#pragma once

#include "eb/direct_scene.hpp"
#include "eb/native/world_encounter.hpp"

namespace eb::native {
// Immutable display policy shared by world and battle composition. Explicit
// published row content, when supplied, wins over the retained window state.
DirectSceneFrame::Effects capture_scene_effects(const WorldEncounterVisualState&,
    std::uint32_t backdrop, const EncounterWindowMask* published_rows = nullptr);
} // namespace eb::native
