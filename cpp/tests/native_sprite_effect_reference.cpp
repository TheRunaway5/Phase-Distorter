// Optional source oracle only. The production effect module has no CPU,
// planar graphics storage, DMA, or source scratch-buffer dependency.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/native/sprite_effects.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <set>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
  return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> bytes, unsigned at) {
  return word(bytes, at) | word(bytes, at + 2) << 16;
}
struct Layout {
  unsigned seed_four, seed_eight, row, column, pixel, low, high, bank,
      direction, animation;
};
constexpr Layout us{0xc42884, 0xc4283f, 0xc428d1, 0xc428fc, 0xc42965,
                    0x29ca,   0x2a06,   0x2a42,   0x2af6,   0x10f2};
constexpr Layout jp{0xc427c2, 0xc4277d, 0xc4280f, 0xc4283a, 0xc428a3,
                    0x2dc8,   0x2e04,   0x2e40,   0x2ef4,   0x10e8};
struct Oracle {
  std::vector<std::uint8_t> memory = std::vector<std::uint8_t>(0x1000000);
  eb::MainCpu65816 cpu;
  Layout layout;
  unsigned source = 0x2000, target{}, width{}, height{};
  std::uint64_t compared_pixels{}, helper_calls{};
  explicit Oracle(const eb::GameAssets &assets)
      : cpu(memory, assets.version),
        layout(assets.version == eb::GameVersion::JP ? jp : us) {
    std::copy(assets.image.begin(), assets.image.end(),
              memory.begin() + 0xc00000);
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void put(unsigned at, unsigned value) {
    memory.at(at) = value;
    memory.at(at + 1) = value >> 8;
  }
  void call(unsigned entry, unsigned a, unsigned x, unsigned y) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    cpu.execute_instruction<0x22>(entry, 4);
    unsigned steps = 0;
    while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
      require(++steps < 1000000, "Sprite effect source helper did not return");
      cpu.step_instruction();
    }
    require(cpu.direct_page == 0x1e00,
            "Sprite effect source helper failed to restore its workspace");
    ++helper_calls;
  }
  void seed(const eb::GameAssets &assets, const SpriteDefinition &definition,
            unsigned group, unsigned direction, unsigned phase, bool eight,
            bool reveal) {
    width = definition.width;
    height = definition.height;
    const auto size = width * height / 2;
    target = source + size;
    std::fill(memory.begin() + 0x7f0000 + source,
              memory.begin() + 0x7f0000 + target + size + 2, 0);
    const auto catalog = sprite_catalog_layout(assets.version);
    const auto base =
        pointer(assets.image, catalog.groups + group * 4) - 0xc00000;
    const auto actor = eight ? 24 : 1, slot = actor * 2;
    put(0x7e0000 + layout.low + slot, base + 9);
    put(0x7e0000 + layout.high + slot, (base + 0xc00000 + 9) >> 16);
    put(0x7e0000 + layout.bank + slot, assets.image[base + 8]);
    put(0x7e0000 + layout.direction + slot, direction);
    put(0x7e0000 + layout.animation + slot, phase);
    call(eight ? layout.seed_eight : layout.seed_four, actor,
         reveal ? source : target, size);
  }
  void row(unsigned row) {
    put(0x1e0e, width / 8);
    call(layout.row, target, source, (row / 8) * width * 4 + (row & 7) * 2);
  }
  void column(unsigned column) {
    put(0x1e0e, height);
    put(0x1e10, width * 4);
    call(layout.column, target, source, column);
  }
  void phase(unsigned phase) {
    put(0x1e0e, phase & 7);
    for (unsigned tile = 0; tile < width * height / 64; ++tile)
      call(layout.pixel, target, source, tile * 32 + (phase / 8) * 2);
  }
  void compare(const SpriteEffectCanvas &native) {
    const auto image = native.snapshot();
    const auto &pixels = *image->canvas;
    for (unsigned y = 0; y < height; ++y)
      for (unsigned x = 0; x < width; ++x) {
        const auto tile = (y / 8) * (width / 8) + x / 8;
        const auto row = 0x7f0000 + target + tile * 32 + (y & 7) * 2;
        unsigned index = 0;
        for (unsigned plane = 0; plane < 4; ++plane)
          index |=
              ((memory[row + (plane / 2) * 16 + (plane & 1)] >> (7 - (x & 7))) &
               1)
              << plane;
        require(
            pixels[(y + (height & 15)) * image->layout->canvas_width + x] ==
                index,
            "Native sprite effect differs from actual source indexed pixels");
        ++compared_pixels;
      }
  }
};
void verify(const eb::GameAssets &assets) {
  const auto layout = sprite_catalog_layout(assets.version);
  auto resources = std::make_shared<SpriteResources>(assets.image, layout);
  SpriteEffectContent content(assets.image, layout, resources);
  Oracle source(assets);
  unsigned seeds = 0, effect_steps = 0;
  std::set<std::pair<unsigned, unsigned>> exercised;
  for (unsigned group = 0; group < resources->size(); ++group) {
    const auto &def = resources->definition(group);
    for (bool eight : {false, true})
      for (unsigned direction = 0; direction < (eight ? 8u : 12u); ++direction)
        for (unsigned phase : {0u, 2u}) {
          const auto pose = eight ? eight_direction_pose(direction, phase)
                                  : four_direction_pose(direction, 0);
          if (pose >= def.frames)
            continue;
          for (bool reveal : {false, true}) {
            source.seed(assets, def, group, direction, phase, eight, reveal);
            SpriteEffectCanvas native(content.seed(group, pose),
                                      reveal ? SpriteEffectDirection::Reveal
                                             : SpriteEffectDirection::Erase);
            source.compare(native);
            ++seeds;
          }
        }
    // Every distinct imported geometry, both fade directions, all three
    // complete fade passes. Compare after each individual published step.
    if (!exercised.emplace(def.width, def.height).second)
      continue;
    for (bool reveal : {false, true}) {
      for (unsigned pattern = 0; pattern < 3; ++pattern) {
        source.seed(assets, def, group, 0, 0, false, reveal);
        SpriteEffectCanvas native(
            content.seed(group, four_direction_pose(0, 0)),
            reveal ? SpriteEffectDirection::Reveal
                   : SpriteEffectDirection::Erase);
        SpriteDissolveSequence sequence;
        const auto count = pattern == 0   ? def.height
                           : pattern == 1 ? def.width
                                          : 64;
        for (unsigned step = 0; step < count; ++step) {
          if (pattern == 0) {
            const auto row = sprite_fade_row(step, def.height);
            source.row(row);
            native.copy_row(row);
          } else if (pattern == 1) {
            const auto column = sprite_fade_column(step, def.width);
            source.column(column);
            native.copy_column(column);
          } else {
            const auto phase = sequence.next(
                step & 7); // Exercises repeated selections + wrapping.
            source.phase(phase);
            native.copy_phase(phase);
          }
          source.compare(native);
          ++effect_steps;
        }
      }
    }
  }
  std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " PASS sprite effects: seeds=" << seeds
            << " effect_steps=" << effect_steps
            << " source_helpers=" << source.helper_calls
            << " exact_pixels=" << source.compared_pixels << '\n';
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_sprite_effect_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
