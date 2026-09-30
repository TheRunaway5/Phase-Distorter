// Actual source routines are executable only in this optional differential
// test.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle_background.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const std::string &message) {
  if (!ok)
    throw std::runtime_error(message);
}
unsigned packed(PaletteColor c) {
  return c.red | unsigned(c.green) << 5 | unsigned(c.blue) << 10;
}
struct Source {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  unsigned record;
  explicit Source(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), jp(assets.version == eb::GameVersion::JP),
        record(jp ? 0xafa9 : 0xadd4) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void pointer(unsigned at, unsigned value) {
    put(at, value);
    put(at + 2, value >> 16);
  }
  void call(unsigned target, unsigned a = 0, unsigned x = 0) {
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    cpu.execute_instruction<0x22>(target, 4);
    for (unsigned i = 0; i < 1000000; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return;
      cpu.step_instruction();
    }
    throw std::runtime_error(
        "Original battle background routine did not return " +
        cpu.describe_registers());
  }
  std::vector<std::uint8_t> decompress(unsigned content, unsigned capacity) {
    std::fill_n(bus->work_ram.begin() + 0x10000, capacity, 0xcd);
    pointer(0x1e0e, content);
    pointer(0x1e12, 0x7f0000);
    call(jp ? 0xc419ea : 0xc41a9e);
    return {bus->work_ram.begin() + 0x10000,
            bus->work_ram.begin() + 0x10000 + capacity};
  }
  void prepare(unsigned id, unsigned ordinal,
               const BattleBackgroundFrame &frame) {
    bus->write_byte(0x4351, 0);
    bus->write_byte(0x4361, 0);
    for (unsigned i = 0; i < 4; ++i) {
      put(0x31 + i * 4, 0);
      put(0x33 + i * 4, 0);
    }
    std::fill_n(bus->work_ram.begin() + (jp ? 0x3fcc : 0x3c46), 896, 0);
    // Source MEMSET16 truncates the odd 119-byte record; fresh native owners
    // start from zero instead of importing its inert trailing workspace byte.
    std::fill_n(bus->work_ram.begin() + record, 119, 0);
    pointer(0x1e0e, 0xcadca1 + id * 17);
    call(jp ? 0xc2cf9f : 0xc2cfe5, record);
    bus->work_ram[record] = ordinal + 1;
    put(record + 76, 0x280);
    for (unsigned i = 0; i < 16; ++i) {
      put(record + 12 + i * 2, packed(frame.palette[i]));
      put(record + 44 + i * 2, packed(frame.palette[i]));
      put(0x280 + i * 2, packed(frame.palette[i]));
    }
  }
  void advance(BattleBackgroundTick tick) {
    bus->work_ram[record + 2] = tick.freeze_palette_scrolling;
    put(jp ? 0xab7c : 0xa97a, tick.defeated ? 0xffff : 0);
    put(jp ? 0xaf81 : 0xadac, tick.alternate_distortion);
    put(jp ? 0xaf6b : 0xad96, tick.horizontal_effect);
    put(jp ? 0xaf6d : 0xad98, tick.vertical_effect);
    bus->work_ram[2] = tick.frame_parity;
    bus->work_ram[0x30] = 0;
    call(jp ? 0xc2c8e7 : 0xc2c92d, record, tick.layer_ordinal);
  }
  void compare(const BattleBackground &native, unsigned ordinal, unsigned id,
               unsigned tick) const {
    const auto &s = native.state();
    const auto f = native.snapshot();
    const auto eq = [&](unsigned actual, unsigned expected, const char *field) {
      if (actual != expected)
        require(false, "Layer " + std::to_string(id) + " tick " +
                           std::to_string(tick) + " " + field +
                           " native=" + std::to_string(actual) +
                           " source=" + std::to_string(expected));
    };
    const auto b = [&](unsigned at) {
      return unsigned(bus->work_ram[record + at]);
    };
    const auto w = [&](unsigned at) { return word(record + at); };
    eq(s.palette_step1, b(8), "palette step1");
    eq(s.palette_step2, b(9), "palette step2");
    eq(s.palette_remaining, b(11), "palette delay");
    eq(s.scroll_index, b(82), "scroll index");
    eq(s.scroll.duration, w(83), "scroll duration");
    eq(s.horizontal_position, w(85), "X position");
    eq(s.vertical_position, w(87), "Y position");
    eq(s.scroll.horizontal_velocity, w(89), "X velocity");
    eq(s.scroll.vertical_velocity, w(91), "Y velocity");
    eq(s.scroll.horizontal_acceleration, w(93), "X acceleration");
    eq(s.scroll.vertical_acceleration, w(95), "Y acceleration");
    eq(s.distortion_index, b(101), "distortion index");
    eq(s.distortion.duration, w(102), "distortion duration");
    eq(s.distortion.style, b(104), "distortion style");
    eq(s.distortion.frequency, w(105), "frequency");
    eq(s.distortion.amplitude, w(107), "amplitude");
    eq(s.distortion.speed, b(109), "speed");
    eq(s.distortion.compression, w(110), "compression");
    eq(s.distortion.frequency_acceleration, w(112), "frequency acceleration");
    eq(s.distortion.amplitude_acceleration, w(114), "amplitude acceleration");
    eq(s.distortion.speed_acceleration, b(116), "speed acceleration");
    eq(s.distortion.compression_acceleration, w(117),
       "compression acceleration");
    const unsigned axis = bus->read_byte(0x4351 + ordinal * 16);
    eq(unsigned(f.axis),
       axis == 0                    ? 0
       : axis == 0x0e + ordinal * 2 ? 2
                                    : 1,
       "distortion axis");
    eq(f.horizontal_scroll, word(0x31 + ordinal * 4), "published X");
    eq(f.vertical_scroll, word(0x33 + ordinal * 4), "published Y");
    for (unsigned i = 0; i < 16; ++i)
      eq(packed(f.palette[i]), word(0x280 + i * 2) & 0x7fff, "palette color");
    for (unsigned y = 0; y < 224; ++y)
      eq(f.offsets[y], word((jp ? 0x3fcc : 0x3c46) + ordinal * 448 + y * 2),
         "row offset");
  }
};
unsigned romword(std::span<const std::uint8_t> data, unsigned at) {
  return data[at] | unsigned(data[at + 1]) << 8;
}
unsigned romptr(std::span<const std::uint8_t> data, unsigned at) {
  return romword(data, at) | romword(data, at + 2) << 16;
}
void verify(const eb::GameAssets &assets) {
  Source source(assets);
  const auto layout = battle_background_layout(assets.version);
  BattleBackgrounds catalog(assets.image, layout);
  unsigned ticks = 0;
  std::uint64_t pixels = 0;
  std::vector<std::vector<std::uint8_t>> gfx, arr;
  for (unsigned i = 0; i < 103; ++i) {
    gfx.push_back(source.decompress(
        romptr(assets.image, layout.graphics + i * 4), 0x5000));
    arr.push_back(source.decompress(
        romptr(assets.image, layout.arrangements + i * 4), 0x800));
  }
  std::set<std::array<unsigned, 8>> extended;
  for (unsigned id = 0; id < catalog.size(); ++id) {
    auto native = catalog.prepare(id);
    const auto &d = native.definition();
    const auto initial = native.snapshot();
    const unsigned palette_address =
        romptr(assets.image, layout.palettes + d.palette * 4) - 0xc00000;
    for (unsigned i = 0; i < 16; ++i)
      require(packed(initial.palette[i]) ==
                  (romword(assets.image, palette_address + i * 2) & 0x7fff),
              "Imported source palette differs");
    for (unsigned y = 0; y < 256; ++y)
      for (unsigned x = 0; x < 256; ++x) {
        unsigned entry = romword(arr[d.artwork], ((y / 8) * 32 + x / 8) * 2),
                 px = x & 7, py = y & 7;
        if (entry & 0x4000)
          px ^= 7;
        if (entry & 0x8000)
          py ^= 7;
        unsigned value = 0;
        for (unsigned plane = 0; plane < d.bitdepth; ++plane)
          value |=
              ((gfx[d.artwork].at((entry & 1023) * d.bitdepth * 8 +
                                  (plane / 2) * 16 + py * 2 + (plane & 1)) >>
                (7 - px)) &
               1)
              << plane;
        const unsigned index = ((entry >> 10) & 7) * (1u << d.bitdepth) + value;
        require(initial.artwork->indices[y * 256 + x] == index &&
                    initial.artwork->opaque[y * 256 + x] == (value != 0),
                "Source decompressed arranged pixel differs");
        ++pixels;
      }
    const unsigned ordinal = id & 1;
    source.prepare(id, ordinal, initial);
    source.compare(native, ordinal, id, 0);
    std::array<unsigned, 8> sequence{};
    unsigned scroll_duration = 0, distortion_duration = 0;
    for (unsigned i = 0; i < 4; ++i) {
      sequence[i] = d.scrolling[i];
      sequence[i + 4] = d.distortions[i];
      scroll_duration +=
          romword(assets.image, layout.scrolling + d.scrolling[i] * 10);
      distortion_duration +=
          romword(assets.image, layout.distortions + d.distortions[i] * 17);
    }
    const unsigned count =
        extended.insert(sequence).second
            ? std::max(24u,
                       2 * std::max(scroll_duration, distortion_duration) + 8)
            : 24;
    for (unsigned tick = 0; tick < count; ++tick) {
      BattleBackgroundTick input{ordinal,
                                 tick & 1,
                                 bool(tick & 2),
                                 tick % 11 == 9,
                                 tick % 13 == 12,
                                 std::uint16_t(tick * 257),
                                 std::uint16_t(0xffff - tick * 3)};
      source.advance(input);
      auto published = native.advance(input);
      source.compare(native, ordinal, id, tick + 1);
      require(published.palette == (source.bus->work_ram[0x30] == 24),
              "Palette publication signal differs");
      ++ticks;
      const auto frame = native.snapshot();
      if (tick >= 24 && tick % 37)
        continue;
      for (unsigned y = 0; y < 224; y += 7)
        for (int x = -133; x < 390; x += 13) {
          const unsigned sx =
              (std::uint32_t(x) +
               (frame.axis == BattleDistortionAxis::Horizontal
                    ? source.word((source.jp ? 0x3fcc : 0x3c46) +
                                  ordinal * 448 + y * 2)
                    : source.word(0x31 + ordinal * 4))) &
              255;
          const unsigned sy =
              (y + 1 +
               (frame.axis == BattleDistortionAxis::Vertical
                    ? source.word((source.jp ? 0x3fcc : 0x3c46) +
                                  ordinal * 448 + y * 2)
                    : source.word(0x33 + ordinal * 4))) &
              255;
          const auto p = frame.sample(x, y);
          const auto index = initial.artwork->indices[sy * 256 + sx];
          require(p.index == index &&
                      packed(p.color) ==
                          (source.word(0x280 + index * 2) & 0x7fff) &&
                      p.opaque == bool(initial.artwork->opaque[sy * 256 + sx]),
                  "Animated sampled layer pixel differs");
          ++pixels;
        }
    }
  }
  // Named source initializer regression: MEMSET16 clears only118 bytes of its
  // 119-byte record. Its last compression-acceleration byte is inert until a
  // nonzero distortion track overwrites the complete field. New owners start
  // fresh and never import this unspecified storage from a prior scene.
  source.bus->work_ram[source.record + 118] = 0x5a;
  source.pointer(0x1e0e, 0xcadca1);
  source.call(source.jp ? 0xc2cf9f : 0xc2cfe5, source.record);
  require(source.bus->work_ram[source.record + 118] == 0x5a &&
              source.bus->work_ram[source.record + 117] == 0,
          "Source odd-sized initializer boundary changed");
  std::cout << "PASS " << assets.title << ": 327 initialized layers, " << ticks
            << " source generator ticks, " << pixels
            << " indexed/color pixel comparisons\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_battle_background_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
