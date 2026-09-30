// Actual original palette helpers execute only in this optional source oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/palette_transition.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) {
  if (!ok)
    throw std::runtime_error(message);
}
unsigned packed(PaletteColor color) {
  return color.red | unsigned(color.green) << 5 | unsigned(color.blue) << 10;
}
struct Source {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  explicit Source(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), jp(assets.version == eb::GameVersion::JP) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned v) {
    bus->work_ram.at(at) = v;
    bus->work_ram.at(at + 1) = v >> 8;
  }
  void call(unsigned target, unsigned a = 0, unsigned x = 0,
            bool near = false) {
    cpu.program_counter = 0xc4ff00;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    if (near)
      cpu.execute_instruction<0x20>(target & 0xffff, 3);
    else
      cpu.execute_instruction<0x22>(target, 4);
    for (unsigned i = 0; i < 1000000; ++i) {
      if (cpu.program_counter == (near ? 0xc4ff03 : 0xc4ff04) &&
          cpu.stack_pointer == 0x1fff)
        return;
      cpu.step_instruction();
    }
    throw std::runtime_error("Source palette transition did not return: " +
                             cpu.describe_registers());
  }
  void prepare(const ScenePalette &current, const ScenePalette &target,
               unsigned divisor, unsigned mask) {
    for (unsigned i = 0; i < 256; ++i) {
      put(0x200 + i * 2, packed(current[i]));
      put(0x10000 + i * 2, packed(target[i]));
    }
    bus->work_ram[0x30] = 0;
    call(jp ? 0xc46d31 : 0xc496e7, divisor, mask);
  }
  void compare(const PaletteTransition &native) const {
    for (unsigned i = 0; i < 256; ++i) {
      require(packed(native.colors()[i]) == (word(0x200 + i * 2) & 0x7fff),
              "Published palette differs from source");
      require(packed(native.target()[i]) == (word(0x10000 + i * 2) & 0x7fff),
              "Selected target palette differs from source");
      for (unsigned c = 0; c < 3; ++c) {
        require(native.ramps()[i][c].value == word(0x10800 + c * 0x200 + i * 2),
                "Fixed-point channel progress differs");
        require(std::uint16_t(native.ramps()[i][c].increment) ==
                    word(0x10200 + c * 0x200 + i * 2),
                "Signed channel slope differs");
      }
    }
  }
  void advance() {
    bus->work_ram[0x30] = 0;
    call(jp ? 0xc4262b : 0xc426ed);
    require(bus->work_ram[0x30] == 24,
            "Source tick did not publish full palette");
  }
  void finish() {
    bus->work_ram[0x30] = 0;
    call(jp ? 0xc46d8a : 0xc49740);
    require(bus->work_ram[0x30] == 24,
            "Source target copy did not publish full palette");
  }
};
std::pair<ScenePalette, ScenePalette> palettes(unsigned batch) {
  ScenePalette current{}, target{};
  for (unsigned i = 0; i < 256; ++i) {
    unsigned a = i & 31, b = batch * 8 + i / 32;
    current[i] = {std::uint8_t(a), std::uint8_t((a * 7 + 3) & 31),
                  std::uint8_t(31 - a)};
    target[i] = {std::uint8_t(b), std::uint8_t((b * 13 + 9) & 31),
                 std::uint8_t(31 - b)};
  }
  return {current, target};
}
void verify(const eb::GameAssets &assets) {
  Source source(assets);
  unsigned brightness = 0, preparations = 0, ticks = 0;
  for (unsigned style = 0; style < 55; ++style) {
    const unsigned selected = style < 52    ? style
                              : style == 52 ? 100
                              : style == 53 ? 255
                                            : 65535;
    auto [current, target] = palettes(0);
    auto result = palette_brightness(current, selected);
    for (unsigned i = 0; i < 32; ++i) {
      source.call(source.jp ? 0xc46ae0 : 0xc49496, packed(current[i]), selected,
                  true);
      require(packed(result[i]) == (source.cpu.accumulator & 0x7fff),
              "Brightness transform differs from actual source");
      ++brightness;
    }
  }
  for (unsigned divisor : {0u, 1u, 2u, 3u, 12u, 20u, 30u, 60u, 64u, 165u, 330u,
                           480u, 900u, 32767u, 32768u, 65535u})
    for (unsigned batch = 0; batch < 4; ++batch) {
      const auto [current, target] = palettes(batch);
      const unsigned mask = 0xffff;
      PaletteTransition native(current, target, divisor, mask);
      source.prepare(current, target, divisor, mask);
      ++preparations;
      require(source.bus->work_ram[0x30] == 0,
              "Preparation unexpectedly published a palette");
      source.compare(native);
      for (unsigned tick = 0; tick < 4; ++tick) {
        source.advance();
        native.advance();
        source.compare(native);
        ++ticks;
      }
      const auto state = native.ramps();
      source.finish();
      native.publish_target();
      source.compare(native);
      require(native.ramps() == state,
              "Target publication destroyed transition progress");
    }
  // Per-palette selection, zero/full/alternating masks, and real controller
  // durations. Call count is explicit; no source helper is intercepted.
  for (unsigned mask : {0u, 0xffffu, 0x5555u, 0xaaaau, 1u, 0x100u, 0x8000u}) {
    const auto [current, target] = palettes(3);
    PaletteTransition native(current, target, 7, mask);
    source.prepare(current, target, 7, mask);
    ++preparations;
    source.compare(native);
    for (unsigned i = 0; i < 10; ++i) {
      source.advance();
      native.advance();
      source.compare(native);
      ++ticks;
    }
  }
  for (unsigned duration : {0u, 1u, 20u, 30u, 60u, 64u, 165u, 480u, 900u}) {
    const auto [current, target] = palettes(2);
    const unsigned mask = duration == 60    ? 0x100
                          : duration == 165 ? 0xff
                                            : 0xffff;
    PaletteTransition native(current, target, duration, mask);
    source.prepare(current, target, duration, mask);
    ++preparations;
    const unsigned count = duration == 480 ? 810 : duration + 3;
    for (unsigned i = 0; i < count; ++i) {
      source.advance();
      native.advance();
      source.compare(native);
      ++ticks;
    }
    source.finish();
    native.publish_target();
    source.compare(native);
  }
  // Named source blue-underflow regression. Duration0's real source divisor
  // behavior gives -1 blue increment; C426ED clears green's increment instead.
  ScenePalette current{}, target{};
  current.fill({7, 7, 0});
  target.fill({7, 7, 1});
  PaletteTransition native(current, target, 0);
  source.prepare(current, target, 0, 0xffff);
  ++preparations;
  for (unsigned i = 0; i < 2; ++i) {
    source.advance();
    native.advance();
    source.compare(native);
    ++ticks;
  }
  require(native.ramps()[0][1].increment == 0 &&
              native.ramps()[0][2].increment == -1 &&
              native.ramps()[0][2].value == 0xfffe,
          "Source blue-underflow regression was not exercised");
  std::cout << "PASS " << assets.title << ": brightness=" << brightness
            << " preparations=" << preparations
            << " full-palette ticks=" << ticks
            << "; all1024 channel pairs, signed/zero divisors, masks, actual "
               "caller durations, explicit target and blue-underflow\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_palette_transition_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
