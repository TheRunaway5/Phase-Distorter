#pragma once

#include <cstdint>
#include <span>
#include <vector>

namespace eb {
struct FlashFilterContext {
  bool giygas{};
  bool psi_active{};
  unsigned psi_animation{};
};
// EarthBound's console brightness and quantized temporal feedback filter.
class PhotosensitivityFilter {
public:
  // Pixels are numeric 0xAARRGGBB in row-major order. Dimensions must
  // be 1..4096 and match pixels. Invalid input throws without changing history.
  //
  // Disabled returns the original span exactly and discards history. Enabled
  // returns private output, valid until the next apply/reset, without writing
  // any input. Alpha stays exact. Enabled brightness is 80 percent.
  // Call once per completed game frame, not once per host redraw.
  std::span<const std::uint32_t> apply(std::span<const std::uint32_t> pixels,
                                       int width, int height, bool enabled,
                                       FlashFilterContext context = {});
  void reset();
  // Black RGB can be unchanged while the exposure reduction is still active.
  bool dimmed() const { return enabled_; }
  unsigned feedback_strength() const { return strength_; }

private:
  int width_{};
  int height_{};
  // The console feeds its adjusted output back into the next frame.
  std::vector<std::uint32_t> previous_;
  std::vector<std::uint32_t> output_;
  bool enabled_{};
  unsigned psi_frames_{}, psi_animation_{}, strength_{1};
};
} // namespace eb
