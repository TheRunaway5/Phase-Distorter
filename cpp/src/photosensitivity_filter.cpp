#include "eb/photosensitivity_filter.hpp"

#include <algorithm>
#include <cstdlib>
#include <stdexcept>

namespace eb {
namespace {
constexpr std::array<unsigned, 3> shifts{16, 8, 0};
constexpr int channel_step_limit = 8;

int channel(std::uint32_t pixel, unsigned shift) {
    return int((pixel >> shift) & 255);
}

int approach(int previous, int target) {
    const int delta = target - previous;
    // Round toward the target so the residual eventually settles exactly. The
    // limit applies to the effect contribution, never to normal scene motion.
    const int step = std::min(channel_step_limit, (std::abs(delta) + 3) / 4);
    return previous + (delta < 0 ? -step : step);
}
} // namespace

std::span<const std::uint32_t> PhotosensitivityFilter::apply(
    std::span<const std::uint32_t> pixels, int width, int height, bool enabled,
    std::span<const std::uint8_t> effect_mask, std::span<const std::uint32_t> reference) {
    if (width <= 0 || height <= 0 || width > 4096 || height > 4096 ||
        pixels.size() != static_cast<std::size_t>(width) * static_cast<std::size_t>(height))
        throw std::invalid_argument("Invalid photosensitivity framebuffer dimensions");
    if ((!effect_mask.empty() || !reference.empty()) &&
        (effect_mask.size() != pixels.size() || reference.size() != pixels.size()))
        throw std::invalid_argument("Photosensitivity effect metadata must match the framebuffer");
    if (!enabled) {
        reset();
        return pixels;
    }

    if (width_ != width || height_ != height) {
        std::vector<std::array<std::int16_t, 3>> resized(pixels.size());
        // Widescreen adds columns around the native center, rather than
        // stretching it. Preserve that alignment; new margins start with no
        // effect contribution. A resized ordinary picture never fades to gray.
        for (int y = 0; y < std::min(height, height_); ++y) {
            for (int x = 0; x < width; ++x) {
                const int old_x = x + width_ / 2 - width / 2;
                if (old_x >= 0 && old_x < width_)
                    resized[std::size_t(y) * width + x] = residual_[std::size_t(y) * width_ + old_x];
            }
        }
        residual_.swap(resized);
        width_ = width;
        height_ = height;
    }
    output_.resize(pixels.size());
    for (std::size_t index = 0; index < pixels.size(); ++index) {
        if (effect_mask.empty() || effect_mask[index] == 0) {
            // No blanket contrast, saturation, edge blur or trailing. Even a
            // bright white menu or a moving red sprite remains bit-for-bit raw.
            output_[index] = pixels[index];
            residual_[index] = {};
            continue;
        }
        auto result = pixels[index] & 0xff000000u;
        for (std::size_t component = 0; component < shifts.size(); ++component) {
            const auto shift = shifts[component];
            const int base = channel(reference[index], shift);
            const int delta = channel(pixels[index], shift) - base;
            // Retain a quarter of this identified effect's RGB contrast, then
            // ease its contribution in time. This attenuates both light/dark
            // and colored flashes without grading the underlying scene.
            // These are pragmatic image-code values, not medical thresholds.
            const int reduced = (std::abs(delta) + 2) / 4;
            auto& previous = residual_[index][component];
            previous = std::int16_t(approach(previous, delta < 0 ? -reduced : reduced));
            result |= std::uint32_t(std::clamp(base + int(previous), 0, 255)) << shift;
        }
        output_[index] = result;
    }
    return output_;
}

void PhotosensitivityFilter::reset() {
    // Capacity can be reused; zero geometry invalidates every old contribution.
    width_ = height_ = 0;
}
} // namespace eb
