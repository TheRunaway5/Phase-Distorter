#pragma once

#include <cstdint>
#include <span>
#include <vector>

namespace eb {
// Automatic, image-only flash detection and whole-picture exposure reduction.
// Every pixel is analyzed, without game state, effect tags or per-scene lists.
// This independently chosen detector is not an exact Nintendo implementation.
class PhotosensitivityFilter {
public:
    // Pixels are numeric 0xAARRGGBB in row-major order. Dimensions must
    // be 1..4096 and match pixels. Invalid input throws without changing history.
    //
    // Disabled returns the original span exactly and discards history. Enabled
    // returns private output, valid until the next apply/reset, without writing
    // any input. Alpha stays exact; RGB stays exact while exposure is normal.
    // Call once per completed game frame, not once per host redraw.
    std::span<const std::uint32_t> apply(std::span<const std::uint32_t> pixels,
                                       int width, int height, bool enabled);
    void reset();
    // Black RGB can be unchanged while the exposure reduction is still active.
    bool dimmed() const { return exposure_ < 256; }

private:
    int width_{};
    int height_{};
    // History is always raw. Filtered pictures must never feed the detector.
    std::vector<std::uint32_t> previous_;
    std::vector<std::uint8_t> directions_;
    std::vector<std::uint8_t> quiet_;
    std::vector<std::uint32_t> output_;
    unsigned exposure_{256};
    unsigned hold_frames_{};
};
} // namespace eb
