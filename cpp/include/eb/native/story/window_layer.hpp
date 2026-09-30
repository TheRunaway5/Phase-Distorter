#pragma once

#include "eb/direct_scene.hpp"
#include "eb/native/dialogue/output.hpp"
#include <array>

namespace eb::native::story {
// Join a published native dialogue layer to a completed native world frame.
// The world renderer uses Mode1 priorities; the text layer uses its matching
// BG3 priorities (0 / 2, or0 / 11 when raised). This does not advance either
// owner, publish pending windows, blend old text, or interpolate UI motion.
// Capture text pixels and palette together at the scene's publication boundary.
// A visible layer requires a combined atlas no larger than4096x4096, matching
// the current presentation adapter. An over-capacity composition rejects.
std::shared_ptr<const DirectSceneFrame> with_window_layer(
    const DirectSceneFrame &world, const dialogue::TextFrame &published,
    const std::array<std::uint16_t, 32> &palette, bool raised_priority = true);
} // namespace eb::native::story
