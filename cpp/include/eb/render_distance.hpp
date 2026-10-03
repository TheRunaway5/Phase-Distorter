#pragma once

#include "eb/pixel_bounds.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb {
// One viewport policy for tile capture, artwork readiness and actor loading.
// Coordinates are relative to the original camera, before display recentering.
// Content bounds include the largest authored edge correction, so preparation
// does not depend on the previous rendered frame or change simulation state.
class RenderDistance {
  public:
    static constexpr int native_width = 256, native_height = 224;
    static constexpr unsigned maximum_width = 1024;
    static constexpr int edge_padding = 64;
    using Bounds = PixelBounds;

    explicit RenderDistance(unsigned width) {
        if (width < native_width || width > maximum_width || (width & 1))
            throw std::invalid_argument("Invalid render distance viewport width");
        margin_ = int(width - native_width) / 2;
    }
    Bounds content_bounds() const {
        // A native center may sit 128 pixels from an authored sector edge.
        // Reframing can expose another margin+128 beyond the centered view.
        const int horizontal = 2 * margin_ + 128 + edge_padding;
        return {-horizontal, -edge_padding, native_width + horizontal,
                native_height + edge_padding};
    }
    // Artwork is relative to its draw anchor. Invert its half-open bounds to
    // find every placement whose pixels intersect the prepared content band.
    Bounds placement_bounds(Bounds artwork) const {
        const auto content = content_bounds();
        return {content.left - artwork.right + 1, content.top - artwork.bottom + 1,
                content.right - artwork.left, content.bottom - artwork.top};
    }
    unsigned activation_extension(Bounds artwork = {}) const {
        if (!margin_) return 0;
        // Source NPC activation already supplies 64 pixels on either side.
        // Round the remaining extension to its source loader's 64px grid.
        const auto placements = placement_bounds(artwork);
        const int extra = std::max(-placements.left - edge_padding,
                                  placements.right - native_width - edge_padding);
        return unsigned((extra + 63) / 64 * 64);
    }

  private:
    int margin_{};
};
} // namespace eb
