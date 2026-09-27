#include "eb/photosensitivity_filter.hpp"

#include <algorithm>
#include <array>
#include <cstdlib>
#include <stdexcept>

namespace eb {
namespace {
// All processing uses bounded integer arithmetic so a given sequence has the
// same response across compilers, host refresh rates and supported platforms.
constexpr int channel_step_limit = 8;
constexpr int neutral_channel = 108;
constexpr int edge_threshold = 48;

int channel(std::uint32_t pixel, unsigned shift) {
    return int((pixel >> shift) & 255);
}

int tone(int value) {
    // Lift black to 12 and reduce contrast first. Above 160, compress highlights
    // further: full white becomes 203. This intentionally sacrifices some dark
    // contrast/highlight detail instead of only clipping the brightest pixels.
    const int reduced = 12 + (value * 220 + 127) / 255;
    return reduced > 160 ? 160 + ((reduced - 160) * 3 + 2) / 5 : reduced;
}

std::uint32_t tone_pixel(std::uint32_t pixel) {
    const int r = channel(pixel, 16), g = channel(pixel, 8), b = channel(pixel, 0);
    // Red dominance, rather than red intensity alone, leaves neutral whites and
    // grays alone. Increase desaturation smoothly after a 32-level dominance;
    // strongly saturated reds mix 75% toward approximate Rec.709 integer luma.
    const int strength = std::clamp((r - std::max(g, b) - 32) * 3, 0, 192);
    const int luma = (54 * r + 183 * g + 19 * b + 128) / 256;
    const auto soften = [&](int value) {
        return tone((value * (256 - strength) + luma * strength + 128) / 256);
    };
    return (pixel & 0xff000000u) | (std::uint32_t(soften(r)) << 16) |
           (std::uint32_t(soften(g)) << 8) | std::uint32_t(soften(b));
}

std::uint32_t soften_edge(std::uint32_t center, const std::array<std::uint32_t, 4>& neighbors) {
    bool high_contrast = false;
    for (const auto neighbor : neighbors)
        for (const unsigned shift : {16u, 8u, 0u})
            high_contrast |= std::abs(channel(center, shift) - channel(neighbor, shift)) > edge_threshold;
    if (!high_contrast) return center;

    // Cross-shaped 4:1:1:1:1 weights attenuate alternating lines/checkerboards.
    // Only high-contrast edges use it; flat areas and gentle gradients retain
    // their detail. Edge pixels clamp to themselves instead of wrapping rows.
    auto result = center & 0xff000000u;
    for (const unsigned shift : {16u, 8u, 0u}) {
        int sum = channel(center, shift) * 4;
        for (const auto neighbor : neighbors) sum += channel(neighbor, shift);
        result |= std::uint32_t((sum + 4) / 8) << shift;
    }
    return result;
}

int approach(int previous, int target) {
    const int delta = target - previous;
    // Blend toward the new scene over successive game frames, with a separate
    // slew bound on every channel for both luminance and palette flashes. Round
    // toward the target so steady text eventually settles exactly, not one or
    // two levels away. A full dark/light transition takes roughly half a second
    // at the game's frame rate; moving objects can visibly trail as a tradeoff.
    const int step = std::min(channel_step_limit, (std::abs(delta) + 3) / 4);
    return previous + (delta < 0 ? -step : step);
}
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

    // This first pass also isolates neighborhood reads from temporal writes:
    // filtering one pixel cannot affect the target calculated for its neighbor.
    toned_.resize(pixels.size());
    std::transform(pixels.begin(), pixels.end(), toned_.begin(), tone_pixel);
    if (width_ != width || height_ != height) {
        if (width_ > 0 && height_ > 0) {
            // Resizing an enabled view must not flash back to neutral gray.
            // Map new pixel centers to the nearest old history pixels. The
            // normal temporal bound then applies against those retained values.
            std::vector<std::uint32_t> resized(pixels.size());
            for (int y = 0; y < height; ++y) {
                const int old_y = ((2 * y + 1) * height_) / (2 * height);
                for (int x = 0; x < width; ++x) {
                    const int old_x = ((2 * x + 1) * width_) / (2 * width);
                    resized[static_cast<std::size_t>(y) * width + x] =
                        output_[static_cast<std::size_t>(old_y) * width_ + old_x];
                }
            }
            output_.swap(resized);
        } else {
            // Neutral startup prevents a first white/red frame from priming a
            // bright history before alternating flashes begin. A fresh enable
            // briefly fades in, without retaining a previously disabled scene.
            output_.assign(pixels.size(), 0xff000000u | (neutral_channel * 0x010101u));
        }
        width_ = width;
        height_ = height;
    }

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            const auto index = static_cast<std::size_t>(y) * width + x;
            const std::array neighbors{
                toned_[x ? index - 1 : index], toned_[x + 1 < width ? index + 1 : index],
                toned_[y ? index - width : index], toned_[y + 1 < height ? index + width : index]};
            const auto target = soften_edge(toned_[index], neighbors);
            auto result = target & 0xff000000u;
            for (const unsigned shift : {16u, 8u, 0u})
                result |= std::uint32_t(approach(channel(output_[index], shift), channel(target, shift))) << shift;
            output_[index] = result;
        }
    }
    return output_;
}

void PhotosensitivityFilter::reset() {
    // Keep reusable allocation capacity; geometry zero invalidates every old
    // history value. No old scene is consulted on the next enabled frame.
    width_ = height_ = 0;
}
} // namespace eb
