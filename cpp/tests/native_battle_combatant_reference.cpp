// Optional original execution is confined to this content/row differential.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <memory>
#include <stdexcept>
namespace {
using namespace eb::native;
void require(bool value, const std::string &why) {
  if (!value)
    throw std::runtime_error(why);
}
unsigned packed(PaletteColor c) {
  return c.red | unsigned(c.green) << 5 | unsigned(c.blue) << 10;
}
int signed_word(unsigned n) {
  n &= 65535;
  return n < 32768 ? int(n) : int(n) - 65536;
}
int signed_byte(unsigned n) { return n < 128 ? int(n) : int(n) - 256; }
struct Source {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  unsigned allocated, blocks, maps, altmaps, widths, heights, enemy_ids,
      battlers, group, horizontal, vertical, targeting, loader, selector, row,
      emitter;
  std::function<bool()> intercept;
  Source(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), jp(assets.version == eb::GameVersion::JP),
        allocated(jp ? 0xac89 : 0xaab4), blocks(jp ? 0xac87 : 0xaab2),
        maps(jp ? 0xacab : 0xaad6), altmaps(jp ? 0xadeb : 0xac16),
        widths(jp ? 0xac9b : 0xaac6), heights(jp ? 0xaca3 : 0xaace),
        enemy_ids(jp ? 0xac93 : 0xaabe), battlers(jp ? 0xa1ae : 0x9fac),
        group(jp ? 0x4e12 : 0x4a8c), horizontal(jp ? 0xaf6b : 0xad96),
        vertical(jp ? 0xaf6d : 0xad98), targeting(jp ? 0xaf77 : 0xada2),
        loader(jp ? 0xc2ea03 : 0xc2eaea), selector(jp ? 0xc2ee00 : 0xc2eee7),
        row(jp ? 0xc2f63d : 0xc2f724), emitter(jp ? 0xc08cc6 : 0xc08cd5) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    bus->work_ram[0xd] = 0x80;
    bus->write_byte(0x2100, 0x80);
  }
  unsigned word(unsigned a) const {
    return bus->work_ram.at(a) | unsigned(bus->work_ram.at(a + 1)) << 8;
  }
  void put(unsigned a, unsigned v) {
    bus->work_ram.at(a) = v;
    bus->work_ram.at(a + 1) = v >> 8;
  }
  void call(unsigned pc, unsigned a = 0, bool near = false) {
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.program_counter = near ? 0xc2ff00 : 0xc0ff00;
    cpu.accumulator = a;
    if (near)
      cpu.execute_instruction<0x20>(pc & 65535, 3);
    else
      cpu.execute_instruction<0x22>(pc, 4);
    for (unsigned i = 0; i < 4000000; ++i) {
      if (cpu.program_counter == (near ? 0xc2ff03u : 0xc0ff04u) &&
          cpu.stack_pointer == 0x1fff)
        return;
      if (intercept && intercept())
        continue;
      cpu.step_instruction();
    }
    throw std::runtime_error("Source combatant routine did not return: " +
                             cpu.describe_registers());
  }
  void load(unsigned sprite) {
    put(allocated, 0);
    put(blocks, 0);
    call(loader, sprite, true);
  }
  std::uint8_t pixel(unsigned map, unsigned x, unsigned y,
                     bool uploaded = false) const {
    unsigned tile =
        bus->work_ram.at(map + 1) | ((bus->work_ram.at(map + 2) & 1) << 8);
    tile += y / 8 * 16 + x / 8;
    unsigned at = tile * 32, value = 0;
    for (unsigned p = 0; p < 4; ++p) {
      const auto address = at + p / 2 * 16 + (y & 7) * 2 + (p & 1);
      const unsigned b = uploaded ? bus->video_ram.at(0x4000 + address)
                                  : bus->work_ram.at(0x10000 + address);
      value |= ((b >> (7 - (x & 7))) & 1) << p;
    }
    return value;
  }
  void seed(std::span<const BattleCombatantPresentation> entries,
            BattleCombatantTick tick) {
    std::fill_n(bus->work_ram.begin() + battlers, 32 * 78, 0);
    for (auto v : entries) {
      unsigned at = battlers + v.slot * 78;
      bus->work_ram[at + 2] = v.artwork_enabled ? 1 : 0;
      bus->work_ram[at + 12] = v.conscious;
      bus->work_ram[at + 14] = v.enemy;
      bus->work_ram[at + 16] = v.row;
      bus->work_ram[at + 29] = v.incapacitated;
      bus->work_ram[at + 67] = v.resource;
      bus->work_ram[at + 68] = v.x;
      bus->work_ram[at + 69] = v.y;
      bus->work_ram[at + 72] = v.blink;
      bus->work_ram[at + 73] = v.alternate_flash;
      bus->work_ram[at + 74] = v.targeted;
      bus->work_ram[at + 75] = v.alternate;
    }
    bus->work_ram[2] = tick.frame_phase;
    put(horizontal, tick.horizontal_offset);
    put(vertical, tick.vertical_offset);
    put(targeting, tick.targeting_flash);
  }
  std::vector<std::uint32_t>
  render(std::span<const BattleCombatantPresentation> entries,
         BattleCombatantTick tick) {
    seed(entries, tick);
    std::fill_n(bus->work_ram.begin() + 0x1000, 544, 0);
    for (unsigned i = 0; i < 128; ++i)
      bus->work_ram[0x1000 + i * 4 + 1] = 240;
    put(3, 0x1000);
    put(5, 0x1200);
    put(7, 0x1200);
    bus->work_ram[9] = 0x7e;
    bus->work_ram[10] = 0x80;
    bus->work_ram[11] = 0x7e;
    call(row, 0, true);
    call(row, 1, true);
    const unsigned remainder = ((word(3) - 0x1000) / 4) % 4;
    if (remainder)
      bus->work_ram[word(7)] = bus->work_ram[10] >> (8 - remainder * 2);
    auto rendered = std::make_unique<eb::SnesBus>(*bus);
    std::copy_n(bus->work_ram.begin() + 0x1000, 544,
                rendered->object_attributes.begin());
    std::copy_n(bus->work_ram.begin() + 0x200, 512,
                rendered->palette_ram.begin());
    for (unsigned i = 0; i < 64; ++i)
      rendered->write_byte(0x2100 + i, 0);
    rendered->write_byte(0x2100, 15);
    rendered->write_byte(0x2101, 0x61);
    rendered->write_byte(0x2105, 1);
    rendered->write_byte(0x212c, 0x10);
    const auto target = rendered->completed_frames + 2;
    while (rendered->completed_frames < target)
      rendered->advance_cpu_cycles(3000);
    return {rendered->native_framebuffer.begin(),
            rendered->native_framebuffer.end()};
  }
  std::vector<BattleCombatantDraw>
  rows(std::span<const BattleCombatantPresentation> entries,
       BattleCombatantTick tick) {
    seed(entries, tick);
    std::vector<BattleCombatantDraw> calls;
    intercept = [&] {
      if (cpu.program_counter != emitter)
        return false;
      unsigned m = cpu.accumulator;
      bool alt = m >= altmaps;
      unsigned resource = (m - (alt ? altmaps : maps)) / 80;
      unsigned slot = (word(cpu.direct_page + 2) - battlers) / 78;
      auto actor = std::find_if(entries.begin(), entries.end(),
                                [&](auto &e) { return e.slot == slot; });
      require(actor != entries.end(), "Source emitter lost current battler");
      calls.push_back({slot, resource, actor->identity,
                       signed_word(cpu.x_index), signed_word(cpu.y_index),
                       alt});
      cpu.execute_instruction<0x6b>(0, 1);
      return true;
    };
    call(row, 0, true);
    call(row, 1, true);
    intercept = {};
    return calls;
  }
};
void run(const eb::GameAssets &assets) {
  const bool jp = assets.version == eb::GameVersion::JP;
  BattleCombatants catalog(assets.image, assets.version);
  Source source(assets);
  std::uint64_t pixel_count = 0, row_count = 0, selection_count = 0;
  // Every nonzero source picture is actually decompressed and its authored
  // 32px map parts compared. No source pool bytes are used by the native owner.
  for (unsigned sprite = 1; sprite <= 110; ++sprite) {
    source.load(sprite);
    const auto image = catalog.artwork(sprite);
    require(source.word(source.widths) * 32 == image->width &&
                source.word(source.heights) * 32 == image->height,
            "Source picture dimensions differ");
    for (unsigned y = 0; y < image->height; ++y)
      for (unsigned x = 0; x < image->width; ++x) {
        unsigned part = y / 32 * (image->width / 32) + x / 32,
                 map = source.maps + part * 5;
        require(signed_byte(source.bus->work_ram[map + 3]) ==
                        image->left + int(x / 32 * 32) &&
                    signed_byte(source.bus->work_ram[map]) ==
                        image->top + int(y / 32 * 32),
                "Source picture part anchor differs");
        require(source.pixel(map, x % 32, y % 32) ==
                    image->indices[y * image->width + x],
                "Source picture planes differ for " + std::to_string(sprite));
        ++pixel_count;
      }
  }
  // Execute the group selector itself, intercepting only its artwork consumer.
  // This also proves count0 and absent-image entries without executing a
  // meaningless sprite0 table-underflow decompression.
  for (unsigned battle = 0; battle < catalog.size(); ++battle) {
    auto native = catalog.prepare(battle);
    unsigned consumed = 0;
    source.intercept = [&] {
      if (source.cpu.program_counter != source.loader)
        return false;
      require(consumed < native.resources().size(),
              "Extra source-selected combatant resource");
      const auto &r = native.resources()[consumed];
      require(source.cpu.accumulator == r.sprite &&
                  source.word(source.enemy_ids + consumed * 2) == r.enemy,
              "Authored resource selection differs");
      for (unsigned c = 0; c < 16; ++c)
        require((source.word(0x300 + consumed * 32 + c * 2) & 32767) ==
                    packed(r.palette[c]),
                "Authored enemy palette differs");
      source.put(source.allocated, ++consumed);
      source.cpu.execute_instruction<0x60>(0, 1);
      return true;
    };
    source.put(source.group, battle);
    source.call(source.selector);
    source.intercept = {};
    require(consumed == native.resources().size(),
            "Native selected extra resources");
    ++selection_count;
  }
  // Ordinary final uploads, including the authored24-block maximum.
  for (unsigned battle : {0u, 4u, 7u, 475u}) {
    auto scene = catalog.prepare(battle);
    source.put(source.group, battle);
    source.call(source.selector);
    for (unsigned r = 0; r < scene.resources().size(); ++r) {
      const auto &image = *scene.resources()[r].artwork;
      for (unsigned y = 0; y < image.height; ++y)
        for (unsigned x = 0; x < image.width; ++x) {
          unsigned part = y / 32 * (image.width / 32) + x / 32;
          require(source.pixel(source.maps + r * 80 + part * 5, x % 32, y % 32,
                               true) == image.indices[y * image.width + x],
                  "Actual source uploaded art differs");
          ++pixel_count;
        }
    }
  }
  auto scene = catalog.prepare(7);
  for (unsigned r = 0; r < scene.resources().size(); ++r)
    scene.set_alternate_palette(r, scene.resources()[r].palette);
  for (unsigned phase = 0; phase < 256; ++phase) {
    std::vector<BattleCombatantPresentation> actors;
    for (unsigned slot = 8; slot < 32; ++slot) {
      BattleCombatantPresentation v;
      v.slot = slot;
      v.identity = slot + 100;
      v.resource = (slot - 8) % scene.resources().size();
      v.row = slot % 2;
      v.x = slot * 13;
      v.y = slot * 7;
      v.blink = phase + slot * 3;
      v.alternate_flash = phase * 7 + slot;
      v.conscious = ((phase + slot) % 13) != 0;
      v.incapacitated = ((phase + slot) % 17) == 0;
      v.enemy = ((phase + slot) % 19) != 0;
      v.artwork_enabled = ((phase + slot) % 23) != 0;
      v.alternate = (slot % 5) == 0;
      v.targeted = slot % 3;
      actors.push_back(v);
    }
    std::reverse(actors.begin(), actors.end());
    BattleCombatantTick tick{std::uint16_t(phase * 293),
                             std::uint16_t(phase * 131), std::uint8_t(phase),
                             bool(phase % 2)};
    const auto calls = source.rows(actors, tick);
    scene.publish(actors, tick);
    require(std::ranges::equal(calls, scene.snapshot().commands()),
            "Source ordered row callbacks differ phase " +
                std::to_string(phase));
    for (auto v : actors) {
      require(source.bus->work_ram[source.battlers + v.slot * 78 + 72] ==
                      v.blink &&
                  source.bus->work_ram[source.battlers + v.slot * 78 + 73] ==
                      v.alternate_flash,
              "Source row timer differs");
    }
    row_count += 2;
  }
  // Execute the actual part emitter, then compare the hardware object raster
  // to the immutable native object scene. Cases exercise both clipping edges,
  // wrapped effect offsets, overlapping rows, 32/64/128px art and alternate
  // art.
  std::uint64_t composed_pixels = 0;
  for (unsigned battle : {0u, 7u, 475u}) {
    auto native = catalog.prepare(battle);
    source.put(source.group, battle);
    source.call(source.selector);
    for (unsigned r = 0; r < native.resources().size(); ++r) {
      auto palette = native.resources()[r].palette;
      for (auto &color : palette) {
        color.red = 31 - color.red;
        color.green = 31 - color.green;
        color.blue = 31 - color.blue;
      }
      native.set_alternate_palette(r, palette);
      for (unsigned c = 0; c < 16; ++c)
        source.put(0x380 + r * 32 + c * 2, packed(palette[c]));
    }
    for (unsigned trial = 0; trial < 16; ++trial) {
      std::vector<BattleCombatantPresentation> actors;
      for (unsigned r = 0;
           r < std::min(2u, unsigned(native.resources().size())); ++r) {
        BattleCombatantPresentation v;
        v.slot = 8 + r;
        v.resource = r;
        v.row = r % 2;
        v.identity = 100 + r;
        v.x = trial < 4 ? trial * 85 : 128 + r * 8;
        v.y = trial < 4 ? trial * 75 : 144;
        v.alternate = trial & 1;
        actors.push_back(v);
      }
      BattleCombatantTick tick;
      if (trial >= 8)
        tick.horizontal_offset = std::uint16_t(int(trial - 12) * 97);
      if (trial >= 12)
        tick.vertical_offset = std::uint16_t(int(trial - 14) * 117);
      const auto actual = source.render(actors, tick);
      native.publish(actors, tick);
      auto immutable = native.snapshot().draw();
      const auto expected = eb::rasterize_direct_scene({immutable, {}});
      auto mismatch =
          std::mismatch(actual.begin(), actual.end(), expected.begin());
      require(mismatch.first == actual.end(),
              "Source/native combatant composition differs battle " +
                  std::to_string(battle) + " trial " + std::to_string(trial) +
                  " pixel " + std::to_string(mismatch.first - actual.begin()));
      composed_pixels += actual.size();
    }
  }
  std::cout << "PASS " << (jp ? "JP" : "US") << ":110 actual decoded pictures,"
            << selection_count << " source group selections," << row_count
            << " ordered source rows," << pixel_count
            << " exact artwork pixels," << composed_pixels
            << " exact emitted object pixels\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::runtime_error("Pass regional asset packs");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
