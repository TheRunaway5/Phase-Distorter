#include "eb/native/palette_transition.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
template <class F> void rejects(F operation) {
  try {
    operation();
  } catch (const std::exception &) {
    return;
  }
  throw std::runtime_error("Invalid palette transition accepted");
}
void verify() {
  ScenePalette source{}, target{};
  source.fill({1, 30, 15});
  target.fill({30, 1, 25});
  const auto scaled = palette_brightness(source, 49);
  require(scaled[0] == PaletteColor{0, 28, 14} &&
              palette_brightness(source, 50) == source &&
              palette_brightness(source, 51)[0] == PaletteColor{31, 31, 31} &&
              palette_brightness(source, 0)[0] == PaletteColor{},
          "Authored brightness styles differ");
  require(palette_argb({31, 16, 0}) == 0xffff8400,
          "Palette channel expansion differs");
  PaletteTransition state(source, target, 3, 0x0101);
  const auto initial = state.ramps();
  for (unsigned i = 0; i < 100; ++i) {
    state.colors();
    state.ramps();
  }
  require(state.colors() == source && state.revision() == 0 &&
              state.ramps() == initial,
          "Preparation/sampling unexpectedly published or advanced colors");
  require(state.target()[0] == target[0] &&
              state.target()[128] == target[128] &&
              state.target()[16] == source[16],
          "Palette selection mask differs");
  auto copy = state;
  state.advance();
  require(state.revision() == 1 &&
              state.colors()[0] == PaletteColor{10, 20, 18} &&
              state.colors()[16] == source[16] && copy.colors() == source &&
              copy.revision() == 0,
          "First tick rounding, palette mask or copy isolation differs");
  state.advance();
  state.advance();
  require(state.colors()[0] == PaletteColor{29, 1, 24},
          "Signed slope lost truncation remainder");
  const auto before_snap = state.ramps();
  state.publish_target();
  require(
      state.colors() == state.target() && state.ramps() == before_snap &&
          state.revision() == 4,
      "Explicit target publication changed ramp state or failed to publish");
  state.advance();
  require(state.revision() == 5 && state.colors()[0].red == 7,
          "Transition invented an automatic duration/finish stop");
  // Named source regression: C426ED blue underflow writes BUFFER+$400
  // (green increment), while the blue increment at+$600 remains nonzero.
  ScenePalette edge{};
  edge.fill({7, 7, 0});
  target.fill({7, 7, 1});
  PaletteTransition blue_underflow(edge, target, 0);
  require(blue_underflow.ramps()[0][0].increment == -1 &&
              blue_underflow.ramps()[0][2].increment == -1,
          "Verified source division-by-zero result was not retained");
  blue_underflow.advance();
  require(blue_underflow.colors()[0] == PaletteColor{6, 6, 0} &&
              blue_underflow.ramps()[0][1].increment == 0 &&
              blue_underflow.ramps()[0][2].increment == -1,
          "Source blue-underflow cross-channel regression");
  const auto held_green = blue_underflow.ramps()[0][1].value;
  blue_underflow.advance();
  require(blue_underflow.ramps()[0][1].value == held_green &&
              blue_underflow.ramps()[0][2].value == 0xfffe,
          "Blue-underflow effect did not persist on the next tick");
  auto invalid = source;
  invalid[19].blue = 32;
  rejects([&] { PaletteTransition bad(invalid, target, 1); });
  rejects([&] { PaletteTransition bad(source, invalid, 1); });
  rejects([&] { PaletteTransition bad(source, target, 65536); });
  rejects([&] { PaletteTransition bad(source, target, 1, 65536); });
  rejects([&] { palette_brightness(invalid, 50); });
  rejects([&] { palette_brightness(source, 65536); });
  rejects([&] { palette_argb({255, 0, 0}); });
  const auto safe = state.colors();
  rejects([&] { state = PaletteTransition(invalid, target, 1); });
  require(state.colors() == safe && state.revision() == 5,
          "Failed replacement mutated the live transition");
}
} // namespace
int main() {
  try {
    verify();
    std::cout << "PASS native palette preparation, brightness, explicit "
                 "ticks/target, signed rounding, blue-underflow, copies and "
                 "validation\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
