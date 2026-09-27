#pragma once

#include <cstdint>
#include <span>
#include <vector>

namespace eb {
// Optional picture processing, with no access to game state or presentation
// timing. Call once per completed game frame, including frames the host skips
// displaying; calling per host redraw would change its temporal response.
//
// This reduces several visual triggers but is not a clinical safety guarantee
// or a reproduction of Nintendo's filtering. Its fixed thresholds are pragmatic
// rendering choices. See the implementation for their purpose and tradeoffs.
class PhotosensitivityFilter {
public:
    // Pixels use numeric 0xAARRGGBB, row-major order. Valid dimensions are 1..4096
    // on each axis and must exactly match the span. Invalid input throws before
    // changing history. Input pixels are never written by this operation.
    //
    // Disabled: return the original span bit-for-bit and discard scene history.
    // Enabled: return private output, valid until the next apply() or reset().
    // Alpha passes through; only RGB participates in picture processing.
    // Geometry changes resample existing history with nearest-neighbor mapping,
    // avoiding a fresh neutral fade when an already-enabled view is resized.
    std::span<const std::uint32_t> apply(std::span<const std::uint32_t> pixels,
                                       int width, int height, bool enabled);
    // Forget previous scene/geometry without touching the game's framebuffer.
    void reset();

private:
    int width_{};
    int height_{};
    std::vector<std::uint32_t> toned_;
    std::vector<std::uint32_t> output_;
};
} // namespace eb
