#include "eb/photosensitivity_filter.hpp"

#include <algorithm>
#include <array>
#include <cstdlib>
#include <stdexcept>

namespace eb {
namespace {
constexpr std::array<unsigned, 3> shifts{16, 8, 0};
// Image-code parameters chosen for this implementation, not recovered Wii U
// constants or measured display luminance. Keep them documented and tested.
constexpr unsigned normal_exposure = 256;
constexpr unsigned dim_exposure = 64;
constexpr unsigned quiet_hold = 12;
constexpr unsigned recovery_step = 4;

int channel(std::uint32_t pixel, unsigned shift) { return int((pixel >> shift) & 255); }
int luma(std::uint32_t pixel) {
    return (77 * channel(pixel, 16) + 150 * channel(pixel, 8) + 29 * channel(pixel, 0) + 128) / 256;
}
struct Changes {
    std::uint64_t pixels{}, large{}, severe{}, reversals{}, luma_difference{};
    void add(int luminance, int color, bool reversed) {
        ++pixels;
        large += luminance >= 48 || color >= 96;
        severe += luminance >= 128 || color >= 192;
        reversals += reversed;
        luma_difference += luminance;
    }
    bool triggers() const {
        return pixels && (large * 8 >= pixels || severe * 32 >= pixels ||
                          reversals * 64 >= pixels || luma_difference >= pixels * 24);
    }
};
} // namespace

std::span<const std::uint32_t> PhotosensitivityFilter::apply(
    std::span<const std::uint32_t> pixels, int width, int height, bool enabled) {
    if (width <= 0 || height <= 0 || width > 4096 || height > 4096 ||
        pixels.size() != static_cast<std::size_t>(width) * static_cast<std::size_t>(height))
        throw std::invalid_argument("Invalid photosensitivity framebuffer dimensions");
    if (!enabled) {
        reset();
        return pixels;
    }
    if (width_ != width || height_ != height) {
        // Compare shared columns in the same native coordinates. Newly exposed
        // margins start at the current picture, so resizing isn't itself a flash.
        std::vector<std::uint32_t> resized(pixels.begin(), pixels.end());
        std::vector<std::uint8_t> directions(pixels.size());
        std::vector<std::uint8_t> quiet(pixels.size());
        for (int y = 0; y < std::min(height, height_); ++y) {
            for (int x = 0; x < width; ++x) {
                const int old_x = x + width_ / 2 - width / 2;
                if (old_x >= 0 && old_x < width_) {
                    const auto index = std::size_t(y) * width + x;
                    const auto old_index = std::size_t(y) * width_ + old_x;
                    resized[index] = previous_[old_index];
                    directions[index] = directions_[old_index];
                    quiet[index] = quiet_[old_index];
                }
            }
        }
        previous_.swap(resized);
        directions_.swap(directions);
        quiet_.swap(quiet);
        width_ = width;
        height_ = height;
    }
    Changes entire, center;
    const int center_width = std::min(width, 256);
    const int center_left = width / 2 - center_width / 2;
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            const auto index = std::size_t(y) * width + x;
            const auto current = pixels[index], previous = previous_[index];
            int color_difference = 0;
            unsigned direction = 0;
            for (unsigned component = 0; component < shifts.size(); ++component) {
                const int delta = channel(current, shifts[component]) - channel(previous, shifts[component]);
                color_difference = std::max(color_difference, std::abs(delta));
                // One SNES palette step is about8 expanded image values.
                // Repeated steps in authored Kraken/Starman/Giygas patterns
                // can flicker without crossing the stronger burst thresholds.
                if (delta >= 8) direction |= 1u << component;
                if (delta <= -8) direction |= 1u << (component + 3);
            }
            const auto before = directions_[index];
            const bool reversed = ((direction & (before >> 3)) | ((direction >> 3) & before)) & 7;
            const int luminance_difference = std::abs(luma(current) - luma(previous));
            entire.add(luminance_difference, color_difference, reversed);
            // Also check the original viewport, so wide empty/dark margins
            // cannot dilute a flash which triggers in the native picture.
            if (x >= center_left && x < center_left + center_width)
                center.add(luminance_difference, color_difference, reversed);
            previous_[index] = current;
            if (direction) {
                directions_[index] = std::uint8_t(direction);
                quiet_[index] = 0;
            } else if (quiet_[index] < quiet_hold) {
                // Retain a transition across short plateaus (e.g. 5 Hz color
                // pulses); consecutive-frame-only checks miss these flickers.
                if (++quiet_[index] == quiet_hold) directions_[index] = 0;
            }
        }
    }
    if (entire.triggers() || center.triggers()) {
        exposure_ = dim_exposure; // Apply on this very frame, before presentation.
        hold_frames_ = quiet_hold;
    } else if (hold_frames_) {
        --hold_frames_;
    } else {
        exposure_ = std::min(normal_exposure, exposure_ + recovery_step);
    }
    output_.resize(pixels.size());
    for (std::size_t index = 0; index < pixels.size(); ++index) {
        auto result = pixels[index] & 0xff000000u;
        for (auto shift : shifts)
            result |= ((std::uint32_t(channel(pixels[index], shift)) * exposure_ + 128) / 256) << shift;
        output_[index] = result;
    }
    return output_;
}

void PhotosensitivityFilter::reset() {
    width_ = height_ = 0;
    exposure_ = normal_exposure;
    hold_frames_ = 0;
}
} // namespace eb
