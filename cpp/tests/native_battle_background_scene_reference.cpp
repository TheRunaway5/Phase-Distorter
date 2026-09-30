// Optional original-source execution is confined to this differential oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const std::string &what) {
  if (!ok)
    throw std::runtime_error(what);
}
unsigned packed(PaletteColor c) {
  return c.red | unsigned(c.green) << 5 | unsigned(c.blue) << 10;
}
struct Source {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  eb::GameSceneRenderer compositor;
  bool jp;
  unsigned base, record, rows;
  Source(const eb::GameAssets &a)
      : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
        jp(a.version == eb::GameVersion::JP), base(jp ? 0xaf5f : 0xad8a),
        record(jp ? 0xafa9 : 0xadd4), rows(jp ? 0x3fcc : 0x3c46) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    bus->work_ram[0xd] = 0x80;
    bus->write_byte(0x2100, 0x80);
    bus->work_ram[0x11] = 0x58;
    bus->work_ram[0x12] = 0x5c;
    bus->work_ram[0x13] = 0x60;
    bus->work_ram[0x14] = 0x0c;
    bus->work_ram[0x15] = 0x10;
    bus->work_ram[0x16] = 0x63;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  void call(unsigned target, unsigned a = 0, unsigned x = 0, unsigned y = 0,
            bool near = false) {
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = near ? 0xc2ff00 : 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    if (near)
      cpu.execute_instruction<0x20>(target & 65535, 3);
    else
      cpu.execute_instruction<0x22>(target, 4);
    for (unsigned i = 0; i < 4000000; ++i) {
      if (cpu.program_counter == (near ? 0xc2ff03 : 0xc0ff04) &&
          cpu.stack_pointer == 0x1fff)
        return;
      cpu.step_instruction();
    }
    throw std::runtime_error("Source scene did not return: " +
                             cpu.describe_registers());
  }
  void prepare(BattleBackgroundPair p, BattleBackgroundStart start = {}) {
    bus->work_ram[2] = start.frame_parity;
    put(base + 34, start.previous_alternate);
    put(base + 12, start.effects.horizontal);
    put(base + 14, start.effects.vertical);
    put(base + 30, start.reflect_duration);
    put(base + 32, start.green_background_duration);
    put(0x200, packed(start.backdrop));
    put(jp ? 0xab7c : 0xa97a, start.defeated ? 0xffff : 0);
    for (unsigned layer = 0; layer < 4; ++layer) {
      put(0x31 + layer * 4, 0);
      put(0x33 + layer * 4, 0);
    }
    const bool four = bus->read_byte(0xcadca3 + p.primary * 17) == 4;
    unsigned first = four ? 1 : 2, second = four ? 0 : 3;
    put(0x31 + first * 4, start.primary_scroll.horizontal);
    put(0x33 + first * 4, start.primary_scroll.vertical);
    put(0x31 + second * 4, start.secondary_scroll.horizontal);
    put(0x33 + second * 4, start.secondary_scroll.vertical);
    put(base, start.inherited_blend == BattleBackgroundBlend::HalfAdd ? 3 : 1);
    call(jp ? 0xc0afac : 0xc0afcd, word(base));
    call(jp ? 0xc2d0d5 : 0xc2d121, p.primary, p.secondary, p.style);
  }
  void advance(unsigned parity, bool defeated = false) {
    bus->work_ram[2] = parity;
    put(jp ? 0xab7c : 0xa97a, defeated ? 0xffff : 0);
    call(jp ? 0xc2dab4 : 0xc2db3f);
  }
  void compare(const BattleBackgroundScene &n, unsigned id,
               unsigned tick) const {
    const auto &e = n.effects();
    auto eq = [&](unsigned native, unsigned source, const char *field) {
      require(native == source, "battle " + std::to_string(id) + " tick " +
                                    std::to_string(tick) + " " + field +
                                    " native=" + std::to_string(native) +
                                    " source=" + std::to_string(source));
    };
    eq(n.alternate_distortion(), word(base + 34), "alternate");
    eq(e.brightness, word(base + 72), "brightness");
    eq(e.darkening, word(base + 70), "darkening");
    eq(e.top_end, word(base + 40), "letterbox top");
    eq(e.bottom_start, word(base + 42), "letterbox bottom");
    eq(e.opening_letterbox, word(base + 44), "letterbox ending");
    eq(e.opening_top, word(base + 66), "opening top");
    eq(e.opening_bottom, word(base + 68), "opening bottom");
    eq(e.reflect_duration, word(base + 30), "reflect");
    eq(e.green_background_duration, word(base + 32), "green background");
    eq(e.vertical_duration, word(base + 2), "quake");
    eq(e.vertical_hold, word(base + 4), "quake hold");
    eq(e.minimum_wait, word(base + 6), "wait");
    eq(e.wobble_duration, word(base + 8), "wobble");
    eq(e.shake_duration, word(base + 10), "shake");
    eq(e.horizontal_offset, word(base + 12), "horizontal effect");
    eq(e.vertical_offset, word(base + 14), "vertical effect");
    eq(e.green_duration, word(base + 20), "green flash");
    eq(e.red_duration, word(base + 22), "red flash");
    eq(packed(e.backdrop), word(0x200) & 32767, "backdrop");
    const auto check_palette = [&](const BattleBackground &layer, unsigned r) {
      const auto f = layer.snapshot();
      for (unsigned i = 0; i < 16; ++i)
        eq(packed(f.palette[i]), word(word(r + 76) + i * 2) & 32767,
           "published palette");
    };
    check_palette(n.primary(), record);
    if (n.secondary() && !n.snapshot().shared_artwork)
      check_palette(*n.secondary(), record + 119);
  }
  std::vector<std::uint32_t> hardware_pixels() const {
    auto rendered = std::make_unique<eb::SnesBus>(*bus);
    for (unsigned i = 5; i <= 12; ++i)
      rendered->write_byte(0x2100 + i, bus->work_ram[0xf + i - 5]);
    rendered->write_byte(0x212c, bus->work_ram[0x1a]);
    rendered->write_byte(0x212d, bus->work_ram[0x1b]);
    std::copy_n(bus->work_ram.begin() + 0x200, 512,
                rendered->palette_ram.begin());
    for (unsigned i = 0; i < 4; ++i)
      for (unsigned axis = 0; axis < 2; ++axis) {
        unsigned value = word(0x31 + i * 4 + axis * 2);
        rendered->write_byte(0x210d + i * 2 + axis, value);
        rendered->write_byte(0x210d + i * 2 + axis, value >> 8);
      }
    for (unsigned i = 0; i < 128; ++i)
      rendered->object_attributes[i * 4 + 1] = 240;
    rendered->write_byte(0x420c, bus->work_ram[0x1f]);
    rendered->write_byte(0x2100, 15);
    const auto target = rendered->completed_frames + 2;
    while (rendered->completed_frames < target)
      rendered->advance_cpu_cycles(3000);
    return {rendered->native_framebuffer.begin(),
            rendered->native_framebuffer.end()};
  }
  std::vector<std::uint32_t> pixels(unsigned width = 256) {
    std::array<std::uint8_t, 64> regs{};
    std::copy(bus->ppu_registers().begin(), bus->ppu_registers().end(),
              regs.begin());
    regs[0] = 15;
    for (unsigned i = 5; i <= 12; ++i)
      regs[i] = bus->work_ram[0xf + i - 5];
    regs[0x2c] = bus->work_ram[0x1a];
    regs[0x2d] = bus->work_ram[0x1b];
    // Isolate the source-owned background pair. Battle enemy/UI/PSI layers are
    // deliberately absent from both compositions, not fabricated native data.
    const bool four = bus->work_ram[record + 1] == 4;
    const unsigned layer_mask = four ? 3 : 12;
    std::array<std::uint8_t, 512> palette;
    std::copy_n(bus->work_ram.begin() + 0x200, 512, palette.begin());
    std::array<std::uint16_t, 4> xs{}, ys{};
    auto view = bus->scene_read_view();
    view.ppu_registers = regs;
    view.palette_ram = palette;
    view.background_scroll_x = xs;
    view.background_scroll_y = ys;
    std::vector<std::uint32_t> out(width * 224);
    const unsigned table = base + 46;
    unsigned stream = table, remaining = 0,
             screen = regs[0x2c] | regs[0x2d] << 8;
    for (unsigned y = 0; y < 224; ++y) {
      if (word(base + 40)) {
        if (!remaining) {
          remaining = bus->work_ram[stream++];
          if (remaining) {
            screen = word(stream);
            stream += 2;
          } else
            remaining = 0xffff;
        }
        --remaining;
      }
      regs[0x2c] = (screen & 255) & layer_mask;
      regs[0x2d] = (screen >> 8) & layer_mask;
      for (unsigned i = 0; i < 4; ++i) {
        xs[i] = word(0x31 + i * 4);
        ys[i] = word(0x33 + i * 4);
      }
      for (unsigned ordinal = 0; ordinal < 2; ++ordinal) {
        if (!bus->work_ram[record + ordinal * 119])
          continue;
        const unsigned address = bus->read_byte(0x4351 + ordinal * 16);
        if (address >= 0x0d && address <= 0x14) {
          const unsigned layer = (address - 0xd) / 2;
          const auto offset = word(rows + ordinal * 448 + y * 2);
          if (address & 1)
            xs[layer] = offset;
          else
            ys[layer] = offset;
        }
      }
      for (unsigned x = 0; x < width; ++x)
        out[y * width + x] = compositor.compose_presentation_pixel(
            view, int(x) - int((width - 256) / 2), y, {}, false);
    }
    return out;
  }
};
void run(const eb::GameAssets &assets) {
  BattleBackgroundScenes catalog(assets.image, assets.version);
  std::size_t pixels = 0, ticks = 0, selections = 0, dependencies = 0;
  BattleBackgrounds layer_catalog(assets.image,
                                  battle_background_layout(assets.version));
  // Source loader retains explicit incoming scroll/effect/parity state. Check
  // both first-publication conventions, not just fresh all-zero setup.
  std::set<unsigned> modes;
  for (unsigned id = 0; id < catalog.size(); ++id) {
    const auto pair = catalog.selection(id);
    if (catalog.artwork_dependency(
            pair, id == 478 ? BattleArtworkPublication::GiygasPrayer
                            : BattleArtworkPublication::Ordinary))
      continue;
    const unsigned depth = assets.image[0xadca3 + pair.primary * 17];
    const unsigned mode = depth == 2         ? 0
                          : !pair.secondary  ? 1
                          : (pair.style & 4) ? 2
                                             : 3;
    if (!modes.insert(mode).second)
      continue;
    for (unsigned phase = 0; phase < 4; ++phase) {
      BattleBackgroundStart start;
      start.frame_parity = phase & 1;
      start.previous_alternate = true;
      start.defeated = phase >= 2;
      start.primary_scroll = {23, 255};
      start.secondary_scroll = {253, 7};
      start.effects = {0xfffe, 3};
      start.backdrop = {1, 2, 3};
      start.reflect_duration = 3;
      start.green_background_duration = 5;
      Source source(assets);
      source.put(source.jp ? 0x4e12 : 0x4a8c, id);
      source.prepare(pair, start);
      auto native = catalog.prepare(id, start);
      source.compare(native, id, 0);
      require(source.pixels() == native.snapshot().draw()->atlas,
              "Nonzero incoming source display state differs");
      native.advance({phase & 1, phase >= 2});
      source.advance(phase & 1, phase >= 2);
      source.compare(native, id, 1);
      require(source.pixels() == native.snapshot().draw()->atlas,
              "First tick after incoming display state differs");
      require(source.hardware_pixels() == native.snapshot().draw()->atlas,
              "Actual source HDMA/native raster differs");
      for (auto factor :
           {0u, 1u, 32u, 96u, 255u, 256u, 257u, 8192u, 65534u, 65535u}) {
        native.apply_palette_brightness(factor);
        source.call(source.jp ? 0xc2dfe3 : 0xc2e08e, factor, 0, 0, true);
        source.compare(native, id, 2);
        native.advance({phase & 1});
        source.advance(phase & 1);
        source.compare(native, id, 3);
      }
    }
  }
  // Four-bit two-artwork and shared-primary paths are used by explicit
  // background animation callers, rather than the battle pair directory.
  std::vector<unsigned> four;
  for (unsigned i = 1; i < 327; ++i)
    if (assets.image[0xadca3 + i * 17] == 4)
      four.push_back(i);
  require(four.size() >= 2, "Missing authored 4bpp artwork");
  for (unsigned style : {1u, 5u}) {
    BattleBackgroundPair p{four[0], four[1], style};
    Source source(assets);
    source.prepare(p);
    auto native = catalog.prepare(p);
    require(native.snapshot().shared_artwork == (style == 1),
            "Four-bit pair setup differs");
    for (unsigned t = 0; t < 24; ++t) {
      source.compare(native, 999, t);
      require(source.pixels() == native.snapshot().draw()->atlas,
              "Four-bit source pair pixels differ");
      native.advance({t & 1, t >= 8 && t < 12});
      source.advance(t & 1, t >= 8 && t < 12);
    }
    require(source.hardware_pixels() == native.snapshot().draw()->atlas,
            "Four-bit source pair HDMA differs");
    modes.insert(style == 1 ? 3 : 2);
  }
  require(modes.size() == 4, "Missing pair source coverage");
  std::set<std::tuple<unsigned, unsigned, unsigned>> unique;
  for (unsigned id = 0; id < catalog.size(); ++id) {
    const auto pair = catalog.selection(id);
    require(pair.primary == (assets.image[0xbd89a + id * 4] |
                             assets.image[0xbd89b + id * 4] << 8),
            "pair source directory");
    if (!unique.emplace(pair.primary, pair.secondary, pair.style).second)
      continue;
    if (const auto dependency = catalog.artwork_dependency(
            pair, id == 478 ? BattleArtworkPublication::GiygasPrayer
                            : BattleArtworkPublication::Ordinary)) {
      bool rejected = false;
      try {
        (void)catalog.prepare(id);
      } catch (const BattleBackgroundArtworkRequired &e) {
        rejected = e.dependency == *dependency;
      }
      require(rejected,
              "External artwork dependency did not reject transactionally");
      require(dependency->layer == 1 &&
                  dependency->first_unpublished_tile >= 384,
              "Unexpected external artwork requirement");
      if (id == 476) {
        Source original(assets);
        original.put(original.jp ? 0x4e12 : 0x4a8c, id);
        original.prepare(pair);
        BattleBackgroundSceneFrame naive;
        naive.pair = pair;
        naive.primary = layer_catalog.prepare(pair.primary).snapshot();
        naive.secondary = layer_catalog.prepare(pair.secondary).snapshot();
        naive.blend = BattleBackgroundBlend::HalfAdd;
        naive.effects.top_end = original.word(original.base + 40);
        naive.effects.bottom_start = original.word(original.base + 42);
        require(original.pixels() != naive.draw()->atlas,
                "Giygas omitted-artwork red unexpectedly disappeared");
      }
      std::cout << "DEPENDENCY "
                << (assets.version == eb::GameVersion::JP ? "JP" : "US")
                << " battle=" << id << " pair=" << pair.primary << ","
                << pair.secondary << "," << pair.style
                << " secondary tile=" << dependency->first_unpublished_tile
                << "\n";
      ++dependencies;
      continue;
    }
    Source s(assets);
    auto n = catalog.prepare(id);
    s.put(s.jp ? 0x4e12 : 0x4a8c, id);
    s.prepare(pair);
    s.compare(n, id, 0);
    auto expected = s.pixels(320), actual = n.snapshot().draw(320)->atlas;
    for (unsigned i = 0; i < actual.size(); ++i)
      require(actual[i] == expected[i],
              "Initial pixel battle=" + std::to_string(id) + " index=" +
                  std::to_string(i) + " native=" + std::to_string(actual[i]) +
                  " source=" + std::to_string(expected[i]));
    pixels += actual.size();
    ++selections;
    if (selections <= 12 || id % 17 == 0)
      for (unsigned t = 1; t <= 140; ++t) {
        if (t == 1) {
          n.darken();
          s.put(s.base + 70, 1);
          n.quake(60, 2);
          s.put(s.base + 2, 60);
          s.put(s.base + 4, 2);
          n.wobble(160);
          s.put(s.base + 8, 160);
          n.wait(20);
          s.put(s.base + 6, 20);
          n.open_letterbox();
          s.put(s.base + 44, 1);
        }
        if (t == 30) {
          n.reflect(8);
          s.put(s.base + 30, 8);
          n.flash_red(30);
          s.put(s.base + 22, 30);
          n.shake(16);
          s.put(s.base + 10, 16);
        }
        if (t == 45) {
          n.green_background(8);
          s.put(s.base + 32, 8);
          n.flash_green(25);
          s.put(s.base + 20, 25);
        }
        n.advance({t & 1, t >= 110 && t < 118});
        s.advance(t & 1, t >= 110 && t < 118);
        s.compare(n, id, t);
        if (t < 5 || t % 5 == 0) {
          expected = s.pixels();
          actual = n.snapshot().draw()->atlas;
          for (unsigned i = 0; i < actual.size(); ++i)
            require(actual[i] == expected[i],
                    "Tick pixel battle=" + std::to_string(id) + " tick=" +
                        std::to_string(t) + " index=" + std::to_string(i) +
                        " native=" + std::to_string(actual[i]) +
                        " source=" + std::to_string(expected[i]));
          pixels += actual.size();
        }
        ++ticks;
      }
  }
  std::cout << "PASS " << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << ": " << selections << " authored pair setups, " << ticks
            << " actual controller ticks, " << pixels
            << " exact source-composed pixels; " << dependencies
            << " explicit external-artwork dependencies\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(
        argc == 3,
        "usage: native_battle_background_scene_reference us.ebpak jp.ebpak");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
