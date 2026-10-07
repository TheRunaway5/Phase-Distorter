#include "eb/photosensitivity_filter.hpp"
#include <algorithm>
#include <array>
#include <cstdlib>
#include <stdexcept>
namespace eb {
namespace {
// Mode 14, EarthBound preset 0x106e/0x106f. Build the brightness ramp
// with successive float additions, as the reference does (not rounded 4/5).
const auto brightness = [] {
  std::array<unsigned, 256> ramp{};
  float value = 0;
  for (auto &entry : ramp) {
    entry = unsigned(value);
    value += 0.8f;
  }
  return ramp;
}();
constexpr std::array<unsigned, 34> psi_strength{
    4, 1, 3, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 5, 1, 1, 1,
    1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 4, 1, 2};
} // namespace
std::span<const std::uint32_t> PhotosensitivityFilter::apply(
    std::span<const std::uint32_t> pixels, int width, int height, bool enabled,
    FlashFilterContext context, std::span<const std::uint8_t> unfiltered_mask) {
  if (width <= 0 || height <= 0 || width > 4096 || height > 4096 ||
      pixels.size() != std::size_t(width) * std::size_t(height) ||
      (!unfiltered_mask.empty() && unfiltered_mask.size() != pixels.size()))
    throw std::invalid_argument(
        "Invalid photosensitivity framebuffer dimensions");
  if (!enabled) {
    reset();
    return pixels;
  }
  enabled_ = true;
  if (context.psi_active) {
    psi_frames_ = 16;
    psi_animation_ = context.psi_animation;
  }
  strength_ = context.giygas || context.intro ? 7 : 1;
  if (psi_frames_) {
    --psi_frames_;
    const unsigned base =
        psi_animation_ < psi_strength.size() ? psi_strength[psi_animation_] : 1;
    // Integer truncation of the reference's float strength occurs only
    // after its final eleven-frame decay. PSI takes precedence over Giygas.
    strength_ = std::max(1u, psi_frames_ <= 10
                                 ? unsigned(float(psi_frames_ * base) / 11.0f)
                                 : base);
  }
  if (width_ != width || height_ != height) {
    std::vector<std::uint32_t> resized(pixels.size(), 0xff000000);
    for (int y = 0; y < std::min(height, height_); ++y)
      for (int x = 0; x < width; ++x) {
        const int old_x = x + width_ / 2 - width / 2;
        if (old_x >= 0 && old_x < width_)
          resized[std::size_t(y) * width + x] =
              previous_[std::size_t(y) * width_ + old_x];
      }
    previous_.swap(resized);
    width_ = width;
    height_ = height;
  }
  output_.resize(pixels.size());
  for (std::size_t i = 0; i < pixels.size(); ++i) {
    if (!unfiltered_mask.empty() && unfiltered_mask[i]) {
      output_[i] = pixels[i];
      previous_[i] = 0xff000000;
      continue;
    }
    auto result = pixels[i] & 0xff000000u;
    for (unsigned shift : {16u, 8u, 0u}) {
      const int target = int(brightness[(pixels[i] >> shift) & 255]);
      const int before = int((previous_[i] >> shift) & 255),
                delta = target - before;
      const int step =
          strength_ <= 1 ? std::abs(delta)
          : delta ? std::max(1, ((std::abs(delta) >> 3) / int(strength_)) << 3)
                  : 0;
      result |= unsigned(before + (delta < 0 ? -step : step)) << shift;
    }
    output_[i] = previous_[i] = result;
  }
  return output_;
}
void PhotosensitivityFilter::reset() {
  width_ = height_ = 0;
  enabled_ = false;
  psi_frames_ = psi_animation_ = 0;
  strength_ = 1;
  previous_.clear();
  output_.clear();
}
} // namespace eb
