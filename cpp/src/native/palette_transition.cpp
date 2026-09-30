#include "eb/native/palette_transition.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native {
namespace {
void validate(PaletteColor color) {
  if (color.red > 31 || color.green > 31 || color.blue > 31)
    throw std::invalid_argument("Palette color channel exceeds RGB5 range");
}
std::array<unsigned, 3> channels(PaletteColor color) {
  return {color.red, color.green, color.blue};
}
std::int16_t slope(unsigned current, unsigned target, unsigned divisor) {
  const int numerator = (int(target) - int(current)) * 256;
  const int denominator =
      divisor < 0x8000 ? int(divisor) : int(divisor) - 0x10000;
  if (denominator)
    return std::int16_t(numerator / denominator);
  // Actual GET_COLOUR_FADE_SLOPE/DIVISION16 returns FFFF for a zero or
  // positive numerator, and0001 for a negative numerator, when divisor0.
  return numerator < 0 ? 1 : -1;
}
} // namespace
ScenePalette palette_brightness(const ScenePalette &colors, unsigned style) {
  if (style > 0xffff)
    throw std::invalid_argument("Invalid authored palette brightness style");
  ScenePalette result;
  for (unsigned i = 0; i < colors.size(); ++i) {
    validate(colors[i]);
    if (style == 50)
      result[i] = colors[i];
    else if (style > 50)
      result[i] = {31, 31, 31};
    else {
      const auto scaled = [&](unsigned v) {
        return std::uint8_t((v * style * 5) >> 8);
      };
      result[i] = {scaled(colors[i].red), scaled(colors[i].green),
                   scaled(colors[i].blue)};
    }
  }
  return result;
}
std::uint32_t palette_argb(PaletteColor color) {
  validate(color);
  const auto byte = [](unsigned v) { return (v << 3) | (v >> 2); };
  return 0xff000000u | byte(color.red) << 16 | byte(color.green) << 8 |
         byte(color.blue);
}
PaletteTransition::PaletteTransition(ScenePalette current, ScenePalette target,
                                     unsigned divisor, unsigned palette_mask)
    : colors_(std::move(current)), target_(std::move(target)) {
  if (divisor > 0xffff || palette_mask > 0xffff)
    throw std::invalid_argument(
        "Invalid palette transition divisor or selection mask");
  for (unsigned i = 0; i < colors_.size(); ++i) {
    validate(colors_[i]);
    validate(target_[i]);
    if (!(palette_mask & (1u << (i / 16))))
      target_[i] = colors_[i];
    const auto from = channels(colors_[i]), to = channels(target_[i]);
    for (unsigned c = 0; c < 3; ++c)
      ramps_[i][c] = {std::uint16_t(from[c] << 8),
                      slope(from[c], to[c], divisor)};
  }
}
void PaletteTransition::advance() {
  for (unsigned i = 0; i < colors_.size(); ++i) {
    std::array<std::uint8_t, 3> visible{};
    for (unsigned c = 0; c < 3; ++c) {
      auto &ramp = ramps_[i][c];
      ramp.value = std::uint16_t(int(ramp.value) + ramp.increment);
      if (ramp.value & 0x8000) {
        // C426ED's blue-underflow path clears green's increment.
        // This authored cross-channel behavior persists on later ticks.
        ramps_[i][c == 2 ? 1 : c].increment = 0;
      } else {
        visible[c] = std::uint8_t((ramp.value >> 8) & 31);
        if (visible[c] == 31)
          ramp.increment = 0;
      }
    }
    colors_[i] = {visible[0], visible[1], visible[2]};
  }
  ++revision_;
}
void PaletteTransition::publish_target() {
  colors_ = target_;
  ++revision_;
}
} // namespace eb::native
