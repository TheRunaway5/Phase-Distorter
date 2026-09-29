// Run the real translated loaders against empty placement tables. Record their
// sector queries, not an imitation of the preload arithmetic.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>
#include <vector>
namespace {
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
struct Fixture {
  std::vector<std::uint8_t> rom = std::vector<std::uint8_t>(0x300000);
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  Fixture(eb::GameVersion version, unsigned width)
      : bus(std::make_unique<eb::SnesBus>(rom, version)), cpu(*bus),
        jp(version == eb::GameVersion::JP) {
    // Attribute 1 disables random butterfly encounters in this empty map.
    bus->debug_read_rom = [](unsigned a, std::uint8_t v) {
      return a >= 0x17b200 && a < 0x17bc00 && !(a & 1) ? std::uint8_t(1) : v;
    };
    cpu.set_entity_preload_width(width);
    cpu.emulation_mode = false;
    cpu.status_register = 0;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    word(jp ? 0x4dde : 0x4a58, 1);
    word(jp ? 0x4de0 : 0x4a5a, 1);
  }
  void word(unsigned address, unsigned value) {
    bus->work_ram[address] = value;
    bus->work_ram[address + 1] = value >> 8;
  }
  void call(unsigned address, unsigned a, unsigned x) {
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.program_counter = 0xcfff00;
    cpu.execute_instruction<0x22>(address, 4);
  }
  template <class Observe> void finish(Observe observe) {
    unsigned steps = 0;
    while (cpu.program_counter != 0xcfff04) {
      if (++steps >= 100000)
        throw std::runtime_error("Source loader failed to return: " +
                                 cpu.describe_registers());
      observe();
      cpu.step_instruction();
    }
  }
};
void scans(eb::GameVersion version, unsigned width) {
  const int margin = (int(width) - 256) / 2;
  for (bool enemy : {false, true}) {
    Fixture f(version, width);
    std::set<int> columns;
    const unsigned query =
        enemy ? (f.jp ? 0xc0264b : 0xc0263d) : (f.jp ? 0xc02239 : 0xc0222b);
    f.call(enemy ? (f.jp ? 0xc02a7b : 0xc02a6b) : (f.jp ? 0xc0256a : 0xc0255c),
           enemy ? 152 : 160, 160);
    f.finish([&] {
      if (f.cpu.program_counter == query) {
        columns.insert(int16_t(f.cpu.accumulator));
        require(f.cpu.x_index == (enemy ? 20 : 5),
                "Preload changed vertical spawn position");
      }
    });
    require(!columns.empty(), "Loader never queried a placement sector");
    if (width == 256) {
      require(*columns.begin() == (enemy ? 19 : 4) &&
                  *columns.rbegin() == (enemy ? 24 : 6),
              "Native loading changed");
    } else {
      const int cell = enemy ? 64 : 256;
      // Both offscreen bands must be queried, including initial/vertical
      // row scans. Empty source tables must not allocate fake actors.
      for (int x = 1280 - margin - 32; x < 1280 + 256 + margin + 32; ++x)
        require(columns.contains(x / cell),
                "Wide loader skipped an offscreen sector");
    }
    // Horizontal scroll calls must shift the actual source column on both
    // sides. Native positions and 8-bit alternate entries stay untouched.
    for (bool right : {false, true}) {
      Fixture column(version, width);
      const unsigned pc = enemy ? (right ? (f.jp ? 0xc0161c : 0xc01606)
                                         : (f.jp ? 0xc0166f : 0xc01659))
                                : (right ? (f.jp ? 0xc0160a : 0xc015f4)
                                         : (f.jp ? 0xc0165d : 0xc01647));
      column.cpu.program_counter = pc;
      column.cpu.accumulator =
          160 + (right ? (enemy ? 40 : 34) : (enemy ? -8 : -3));
      column.cpu.step_instruction();
      int x = int16_t(column.cpu.accumulator) * 8;
      if (width > 256)
        require(right ? x >= 1280 + 256 + margin + 32 : x <= 1280 - margin - 32,
                "Horizontal scroll loads too late");
    }
    std::cout << (f.jp ? "JP" : "US") << " width=" << width
              << (enemy ? " enemy" : " NPC") << " sectors=" << *columns.begin()
              << ".." << *columns.rbegin() << '\n';
  }
}
void retention(eb::GameVersion version, unsigned width) {
  const int margin = (int(width) - 256) / 2;
  for (int x : {-margin - 32, -margin, 0, 256, 256 + margin - 1,
                256 + margin + 32, -2048, 2048}) {
    Fixture f(version, width);
    const auto &p = eb::source_profile(version);
    f.word(p.party_state.leader_x, 1280 + 128);
    f.word(p.party_state.leader_y, 1280 + 112);
    f.word(p.wram_entity_world_coordinates.x, 1280 + x);
    f.word(p.wram_entity_world_coordinates.y, 1280 + 100);
    f.call(f.jp ? 0xc0c698 : 0xc0c6b6, 0, 0);
    f.finish([] {});
    require((f.cpu.accumulator == 0xffff) == (x > -2048 && x < 2048),
            "Actor disappeared in visible or preload band");
  }
}
void bounds(eb::GameVersion version, unsigned width) {
  Fixture f(version, width);
  const int margin = (int(width) - 256) / 2;
  for (bool right : {false, true}) {
    f.cpu.program_counter =
        right ? (f.jp ? 0xc023b9 : 0xc023ab) : (f.jp ? 0xc023a3 : 0xc02395);
    f.cpu.step_instruction();
    int bound = int16_t(f.cpu.accumulator);
    require(right ? bound >= 256 + margin + 64 : bound <= -margin - 64,
            "NPC spawn gate clips the wide preload band");
  }
  // Vertical gate is deliberately source-native.
  f.cpu.program_counter = f.jp ? 0xc023cd : 0xc023bf;
  f.cpu.step_instruction();
  require(f.cpu.accumulator == 0xffc0,
          "Horizontal preload altered vertical clipping");
  f.cpu.set_entity_preload_width(256);
  f.cpu.program_counter = f.jp ? 0xc023b9 : 0xc023ab;
  f.cpu.step_instruction();
  require(f.cpu.accumulator == 320,
          "Returning to native width did not restore source bounds");
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
      for (unsigned width : {256u, 398u, 522u, 800u, 1024u}) {
        scans(version, width);
        retention(version, width);
        bounds(version, width);
      }
    std::cout << "Entity preload source regressions passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
