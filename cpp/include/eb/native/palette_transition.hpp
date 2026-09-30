#pragma once

#include <array>
#include <cstdint>

namespace eb::native {
struct PaletteColor {
  std::uint8_t red{}, green{}, blue{};
  bool operator==(const PaletteColor &) const = default;
};
using ScenePalette = std::array<PaletteColor, 256>;
// Authored brightness style, not a percentage:0..49 scales by style*5/256,
// 50 retains the original colors, and greater values select white.
ScenePalette palette_brightness(const ScenePalette &colors, unsigned style);
std::uint32_t palette_argb(PaletteColor color);

struct PaletteChannelRamp {
  // Independent 8.8 color progress and signed per-tick increment. Values use
  // source 16-bit wrap; presentation exposes only the bounded RGB5 result.
  std::uint16_t value{};
  std::int16_t increment{};
  bool operator==(const PaletteChannelRamp &) const = default;
};
using PaletteRamps = std::array<std::array<PaletteChannelRamp, 3>, 256>;

// Pure scene-owned transition. Initialization does not publish a frame. A
// caller explicitly advances once per admitted transition tick and separately
// publishes the exact target if its authored controller requests that step.
// There is no automatic duration limit: title/gas/scene controllers differ.
class PaletteTransition {
public:
  PaletteTransition(ScenePalette current, ScenePalette target, unsigned divisor,
                    unsigned palette_mask = 0xffff);
  const ScenePalette &colors() const { return colors_; }
  const ScenePalette &target() const { return target_; }
  const PaletteRamps &ramps() const { return ramps_; }
  std::uint64_t revision() const { return revision_; }
  void advance();
  // Corresponds to the authored final target copy, without changing the ramp
  // accumulators. It is explicit even when rounding already reached target.
  void publish_target();

private:
  ScenePalette colors_, target_;
  PaletteRamps ramps_{};
  std::uint64_t revision_{};
};
} // namespace eb::native
