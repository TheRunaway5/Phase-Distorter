#pragma once

#include <array>
#include <cstdint>
#include <span>
#include <vector>

namespace eb {
// Optional presentation of identified flashing effects. The renderer supplies
// both an effect mask and the current scene with that effect omitted. Keeping
// these separate lets scenery, sprites, text and camera motion pass unchanged;
// only the contribution of the flashing effect has temporal history.
class PhotosensitivityFilter {
public:
    // Pixels/reference are numeric 0xAARRGGBB in row-major order. Dimensions must
    // be 1..4096 and match pixels. Mask/reference must both be empty (no effect)
    // or both match pixels. Invalid input throws without changing history.
    //
    // Disabled returns the original span exactly and discards history. Enabled
    // returns private output, valid until the next apply/reset, without writing
    // any input. A zero mask pixel is always copied exactly, including alpha.
    // Call once per completed game frame, not once per host redraw.
    std::span<const std::uint32_t> apply(std::span<const std::uint32_t> pixels,
                                       int width, int height, bool enabled,
                                       std::span<const std::uint8_t> effect_mask = {},
                                       std::span<const std::uint32_t> reference = {});
    void reset();

private:
    int width_{};
    int height_{};
    // Signed RGB contributions, relative to this frame's unmodified scene.
    // Storing whole previous pictures here would smear moving backgrounds.
    std::vector<std::array<std::int16_t, 3>> residual_;
    std::vector<std::uint32_t> output_;
};
} // namespace eb
