#include "eb/native/battle/palette_effects.hpp"
#include <array>
#include <cstdint>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <type_traits>
namespace {
using namespace eb::native::battle;
unsigned checks{};
void require(bool ok, const char *reason) {
  ++checks;
  if (!ok)
    throw std::runtime_error(reason);
}
template <class F> void rejects(F &&f, const char *reason) {
  bool failed = false;
  try {
    f();
  } catch (const std::exception &) {
    failed = true;
  }
  require(failed, reason);
}
void run() {
  static_assert(!std::is_copy_constructible_v<PaletteBankState> &&
                !std::is_move_constructible_v<PaletteBankState>);
  PaletteBankState colors, other;
  PaletteEffectState state, other_state;
  PaletteEffects effects(colors, state);
  require(effects.uses(colors, state) && !effects.uses(other, state) &&
              !effects.uses(colors, other_state),
          "Effect lost its shared owner identity");
  require(&effects.state() == &state && &effects.palette_state() == &colors,
          "Effect returned cached state");
  colors.upload_mode = 0xa7;
  effects.set_speed(0x8001);
  require(state.speed == 0x8001 && colors.upload_mode == 0xa7,
          "Speed setup changed publication");
  for (unsigned bank = 0; bank < 4; ++bank) {
    for (unsigned i = 0; i < 48; ++i) {
      state.banks[bank].counters[i] = std::uint16_t(31 + i);
      state.banks[bank].steps[i] = std::uint16_t(100 + i);
      state.banks[bank].deltas[i] = std::uint16_t(i * 0x421 + bank);
    }
    state.banks[bank].frames_left = static_cast<std::uint16_t>(100 + bank);
    for (unsigned i = 0; i < 16; ++i)
      colors.palette(bank)[i] = std::uint16_t(0x8123 + i * 0x421 + bank);
  }
  const auto saved = state;
  const auto packed = colors.staged;
  effects.reverse(2, 0xffff);
  require(state.speed == 0xffff && state.banks[2].frames_left == 0xffff,
          "Reverse failed to set shared speed and bank duration");
  for (unsigned b = 0; b < 4; ++b)
    for (unsigned i = 0; i < 48; ++i) {
      require(state.banks[b].steps[i] == saved.banks[b].steps[i],
              "Reverse changed retained steps");
      require(state.banks[b].counters[i] ==
                  (b == 2 ? 0 : saved.banks[b].counters[i]),
              "Reverse changed wrong counters");
      require(state.banks[b].deltas[i] ==
                  (b == 2 ? std::uint16_t(0u - saved.banks[b].deltas[i])
                          : saved.banks[b].deltas[i]),
              "Reverse did not negate exact raw delta");
    }
  require(colors.staged == packed && colors.upload_mode == 0xa7,
          "Reverse changed palettes/publication");
  auto preserved = state;
  rejects([&] { effects.reverse(4, 2); }, "Invalid bank accepted");
  require(state == preserved && colors.staged == packed,
          "Invalid reverse partially changed state");
  rejects([&] { effects.target(64, 1, 2, 3); }, "Invalid color accepted");
  require(state == preserved && colors.staged == packed,
          "Invalid target partially changed state");
  rejects(
      [&] { effects.target(std::numeric_limits<unsigned>::max(), 1, 2, 3); },
      "Oversized color accepted");
  require(state == preserved && colors.staged == packed &&
              colors.upload_mode == 0xa7,
          "Oversized color wrapped into a bank");
  // Equal channels retain old steps, clear only their deltas/counters, and
  // bit15 remains raw.
  colors.palette(3)[15] = std::uint16_t(0x8000 | 5 | (17 << 5) | (31 << 10));
  effects.set_speed(17);
  effects.target(63, 5, 17, 31);
  require(state.banks[3].frames_left == 17,
          "Equal target did not rearm duration");
  for (unsigned i = 45; i < 48; ++i) {
    require(state.banks[3].steps[i] == saved.banks[3].steps[i],
            "Equal channel discarded old step");
    require(state.banks[3].deltas[i] == 0 && state.banks[3].counters[i] == 0,
            "Equal channel retained active state");
  }
  require(colors.palette(3)[15] ==
              std::uint16_t(0x8000 | 5 | (17 << 5) | (31 << 10)),
          "Target rewrote source palette word");
  effects.target(63, 0xffff, 0x8000, 0);
  require(state.banks[3].steps[45] == 65530 && state.banks[3].deltas[45] == 1,
          "Raw red target was signed or clamped");
  require(state.banks[3].steps[46] == 32751 && state.banks[3].deltas[46] == 32,
          "Raw green target was signed or clamped");
  require(state.banks[3].steps[47] == 31 && state.banks[3].deltas[47] == 0xfc00,
          "Blue decrement lost packed unit");
  // Counter addition wraps before thresholding; channels mutate the packed word
  // in order.
  state = {};
  colors.staged = {};
  colors.upload_mode = 0x53;
  state.speed = 10;
  auto &b = state.banks[1];
  b.frames_left = 2;
  b.steps[3] = 8;
  b.counters[3] = 65530;
  b.deltas[3] = 1;
  colors.palette(1)[1] = 0xffff;
  effects.advance();
  require(b.counters[3] == 2 && colors.palette(1)[1] == 0xffff,
          "Counter wrapping happened after quotient");
  require(b.frames_left == 1 && colors.upload_mode == 16,
          "Active bank did not stage palette upload");
  b.steps[3] = 28;
  b.deltas[3] = 0xffff;
  effects.advance();
  require(b.counters[3] == 0 && colors.palette(1)[1] == 0xfffc,
          "Packed decrement quotient wrong");
  require(b.frames_left == 0, "Duration did not expire exactly");
  colors.upload_mode = 3;
  preserved = state;
  const auto done = colors.staged;
  effects.advance();
  require(state == preserved && colors.staged == done &&
              colors.upload_mode == 3,
          "Inactive tick published or mutated");
  // Shared speed changes affect an already-running bank, without rescaling it.
  state = {};
  colors.staged = {};
  state.banks[0].frames_left = 3;
  state.banks[0].steps[3] = 31;
  state.banks[0].deltas[3] = 1;
  effects.set_speed(10);
  effects.advance();
  require(colors.palette(0)[1] == 3 && state.banks[0].counters[3] == 1,
          "First shared-speed step wrong");
  effects.set_speed(2);
  effects.advance();
  require(colors.palette(0)[1] == 19 && state.banks[0].counters[3] == 0,
          "Live shared speed was cached");
  // Transparent color0 is never advanced, but participates in setup and
  // reversal.
  state = {};
  colors.staged = {};
  state.speed = 4;
  effects.target(0, 31, 31, 31);
  const auto zero = state.banks[0];
  effects.advance();
  require(colors.palette(0)[0] == 0, "Transparent color was advanced");
  require(state.banks[0].counters == zero.counters &&
              state.banks[0].steps == zero.steps &&
              state.banks[0].deltas == zero.deltas,
          "Transparent state mutated during advance");
  require(state.banks[0].frames_left == 3 && colors.upload_mode == 16,
          "Color0-only bank lost active publication");
  // Zero speed rejects before even an earlier all-equal bank is decremented.
  state = {};
  colors.staged = {};
  colors.upload_mode = 0x91;
  state.banks[0].frames_left = 4;
  state.banks[3].frames_left = 1;
  state.banks[3].deltas[47] = 0xfc00;
  preserved = state;
  const auto before_reject = colors.staged;
  rejects([&] { effects.advance(); },
          "Source nonterminating zero speed accepted");
  require(state == preserved && colors.staged == before_reject &&
              colors.upload_mode == 0x91,
          "Rejected zero-speed update partially published");
  state.banks[3].deltas[47] = 0;
  state.banks[0].deltas[0] = 0xffff;
  effects.advance();
  require(state.banks[0].frames_left == 3 && state.banks[3].frames_left == 0 &&
              colors.upload_mode == 16,
          "Safe zero-speed state rejected or advanced incorrectly");
  // Arbitrary packed deltas and multiple carries remain exact modulo16.
  state = {};
  colors.staged = {};
  state.speed = 1;
  state.banks[2].frames_left = 1;
  colors.palette(2)[7] = 0x8001;
  state.banks[2].steps[21] = 65535;
  state.banks[2].deltas[21] = 0x8000;
  state.banks[2].steps[22] = 3;
  state.banks[2].deltas[22] = 0xffe0;
  effects.advance();
  require(colors.palette(2)[7] == 0xffa1,
          "Packed arithmetic clamped channels or discarded bit15");
  // Target RGB words may carry into adjacent fields; this is not RGB clamping.
  state = {};
  colors.staged = {};
  effects.set_speed(1);
  colors.palette(0)[1] = 0x83ff;
  effects.target(1, 32, 31, 0);
  effects.advance();
  require(colors.palette(0)[1] == 0x8400,
          "Target red32 did not carry through green into blue");
  // Reversing one bank changes the actual global speed used by another bank.
  state = {};
  colors.staged = {};
  effects.set_speed(10);
  effects.target(1, 31, 0, 0);
  effects.advance();
  effects.reverse(2, 2);
  effects.advance();
  require(colors.palette(0)[1] == 19 && state.banks[0].frames_left == 8 &&
              state.banks[0].counters[3] == 0,
          "Other-bank reversal did not affect live speed");
  require(state.banks[2].frames_left == 1,
          "Reverse duration is not independently retained");
  // A real start/finish/reverse lifetime for every addressable palette color.
  // The direct endpoint is independent of the implementation's update loop.
  for (unsigned selected = 0; selected < 64; ++selected) {
    state = {};
    colors.staged = {};
    colors.upload_mode = 0x39;
    for (auto &palette : colors.staged)
      palette.fill(0x8e87); // RGB(7,20,3), bit15.
    effects.set_speed(11);
    effects.target(selected, 25, 10, 5);
    require(state.banks[selected / 16].frames_left == 11 &&
                colors.upload_mode == 0x39,
            "Target publication or lifetime changed");
    for (unsigned frame = 0; frame < 11; ++frame)
      effects.advance();
    for (unsigned color = 0; color < 64; ++color)
      require(colors.palette(color / 16)[color % 16] ==
                  (color == selected && selected % 16 ? 0x9559 : 0x8e87),
              "Complete transition changed wrong palette or missed endpoint");
    effects.reverse(selected / 16, 11);
    for (unsigned frame = 0; frame < 11; ++frame)
      effects.advance();
    for (const auto &palette : colors.staged)
      for (const auto color : palette)
        require(color == 0x8e87,
                "Reverse lifetime did not restore original packed word");
    const auto finished = state;
    colors.upload_mode = 0x71;
    effects.advance();
    require(state == finished && colors.upload_mode == 0x71,
            "Finished lifetime retained active publication");
  }
}
} // namespace
int main() {
  try {
    run();
    std::cout << "PASS enemy palette state: " << checks << " checks\n";
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
