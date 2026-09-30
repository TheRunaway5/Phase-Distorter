// Run the original encounter/list selector with test-only RNG and creation
// interception. Production only imports possible artwork; it cannot execute
// this selector, allocate actors, advance spawn counters, or predict positions.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/enemy_sprite_readiness.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) {
  if (!ok)
    throw std::runtime_error(message);
}
unsigned word(std::span<const std::uint8_t> data, unsigned at) {
  return data[at] | unsigned(data[at + 1]) << 8;
}
struct Layout {
  unsigned query, select, random, create, next_member, spawn_counter, count,
      maximum, butterfly, tileset, scripts, flags, piracy;
};
constexpr Layout us{0xc0263d, 0xc02668, 0xc08e9a, 0xc01e49, 0xc02a3a,
                    0x4a7a,   0x4a5c,   0x4a5e,   0x4a60,   0x436e,
                    0x0a62,   0x9c08,   0xb539};
constexpr Layout jp{0xc0264b, 0xc02676, 0xc08e8b, 0xc01e5f, 0xc02a4a,
                    0x4e00,   0x4de2,   0x4de4,   0x4de6,   0x46f4,
                    0x0a58,   0x9eb3,   0xb6ea};
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout layout;
  unsigned return_pc{};
  std::uint64_t queries{}, calls{}, requests{}, random_calls{};
  explicit Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), layout(assets.version == eb::GameVersion::JP ? jp : us) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    for (unsigned i = 0; i < 30; ++i)
      put(layout.scripts + i * 2, 0xffff);
    put(layout.maximum, 100);
    put(layout.tileset - 2, 0); // DEBUG off; no forced encounter branch.
    put(layout.piracy, 0);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  void enter(unsigned target, unsigned a, unsigned x, unsigned y = 0,
             bool near = false) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    return_pc = near ? 0xc0ff03 : 0xc0ff04;
    if (near)
      cpu.execute_instruction<0x20>(target & 0xffff, 3);
    else
      cpu.execute_instruction<0x22>(target, 4);
  }
  bool finished() const {
    return cpu.program_counter == return_pc && cpu.stack_pointer == 0x1fff;
  }
  unsigned encounter(unsigned x, unsigned y) {
    enter(layout.query, x, y);
    for (unsigned steps = 0; !finished(); ++steps) {
      require(steps < 1000, "Source encounter cell query did not return");
      cpu.step_instruction();
    }
    ++queries;
    return cpu.accumulator;
  }
  std::vector<unsigned> select(unsigned x, unsigned y, unsigned encounter,
                               const EnemySpriteEligibility &state,
                               unsigned pick, bool butterfly) {
    put(layout.tileset, state.tileset);
    put(layout.spawn_counter, butterfly ? 15 : 0);
    put(layout.count, 0);
    put(layout.butterfly, 0);
    std::copy(state.event_flags.begin(), state.event_flags.end(),
              bus->work_ram.begin() + layout.flags);
    enter(layout.select, x, y, encounter, true);
    std::vector<unsigned> result;
    unsigned rng = 0;
    for (unsigned steps = 0; !finished(); ++steps) {
      if (steps > 100000)
        throw std::runtime_error("Enemy selector did not return: " +
                                 cpu.describe_registers());
      if (cpu.program_counter == layout.random) {
        // First draw passes the authored nonzero chance, second selects one
        // weighted slot. Position draws are intentionally never executed.
        require(rng < 2 && (!butterfly || rng == 0),
                "Unexpected source selector RNG dependency");
        cpu.accumulator = rng++ ? pick : 0;
        ++random_calls;
        cpu.execute_instruction<0x6b>(0, 1);
      } else if (cpu.program_counter == layout.create) {
        result.push_back(cpu.accumulator);
        ++requests;
        cpu.accumulator = 29;
        cpu.execute_instruction<0x6b>(0, 1);
        // Observe every requested member but bypass actual actor creation,
        // placement, collision and population bookkeeping in this oracle.
        cpu.program_counter = layout.next_member;
      } else
        cpu.step_instruction();
    }
    ++calls;
    return result;
  }
};
void run(const eb::GameAssets &assets) {
  const auto layout = enemy_sprite_catalog_layout(assets.version);
  auto catalog =
      std::make_shared<const EnemySpriteCatalog>(assets.image, layout);
  auto resources = std::make_shared<SpriteResources>(
      assets.image, sprite_catalog_layout(assets.version));
  EnemySpriteReadiness readiness(catalog, resources);
  Oracle source(assets);
  // One representative for every mapped encounter/tileset/butterfly-mode
  // combination, retaining empty cells so butterfly-only paths are covered.
  std::map<std::array<unsigned, 3>, std::array<unsigned, 2>> representatives;
  for (unsigned y = 0; y < 160; ++y)
    for (unsigned x = 0; x < 128; ++x) {
      const auto encounter = catalog->encounter(x, y);
      require(source.encounter(x, y) == encounter,
              "Imported encounter grid differs from source query");
      const unsigned sector = (y / 2) * 32 + x / 4;
      representatives.try_emplace(
          {encounter, unsigned(assets.image[layout.tilesets + sector] >> 3),
           word(assets.image, layout.sector_attributes + sector * 2) & 7},
          std::array<unsigned, 2>{x, y});
    }
  std::vector<std::uint8_t> flags(256);
  EnemySpriteEligibility state{0, flags};
  std::set<unsigned> covered_groups;
  std::set<unsigned> encounters;
  std::set<const SpriteImage *> leased;
  std::uint64_t variants = 0;
  std::size_t peak_images = 0, peak_bytes = 0;
  for (unsigned pattern = 0; pattern < 2; ++pattern) {
    std::fill(flags.begin(), flags.end(), pattern ? 255 : 0);
    for (const auto &[key, cell] : representatives) {
      const auto [encounter, area, mode] = key;
      const auto [x, y] = cell;
      encounters.insert(encounter);
      state.tileset = area;
      std::vector<unsigned> expected;
      for (unsigned pick = 0; pick < 8; ++pick) {
        const auto groups = source.select(x, y, encounter, state, pick, false);
        expected.insert(expected.end(), groups.begin(), groups.end());
      }
      const auto butterflies = source.select(x, y, encounter, state, 0, true);
      expected.insert(expected.end(), butterflies.begin(), butterflies.end());
      std::sort(expected.begin(), expected.end());
      expected.erase(std::unique(expected.begin(), expected.end()),
                     expected.end());
      const auto ram = source.bus->work_ram;
      const auto vram = source.bus->video_ram;
      const auto registers = source.cpu.describe_registers();
      const auto steps = source.cpu.instruction_count,
                 clocks = source.bus->master_clocks();
      const EnemySpriteRectangle box{int(x * 64), int(y * 64),
                                     int((x + 1) * 64), int((y + 1) * 64)};
      readiness.prepare(box, state);
      if (!std::equal(expected.begin(), expected.end(),
                      readiness.groups().begin(), readiness.groups().end()))
        throw std::runtime_error(
            "Enemy artwork mismatch encounter=" + std::to_string(encounter) +
            " area=" + std::to_string(area) + " mode=" + std::to_string(mode) +
            " flags=" + std::to_string(pattern));
      leased.clear();
      for (const auto &image : readiness.leases().images)
        leased.insert(image.get());
      require(leased.size() == readiness.leases().images.size(),
              "Duplicate artwork aliases retained");
      for (const auto group : expected) {
        covered_groups.insert(group);
        for (unsigned frame = 0; frame < resources->definition(group).frames;
             ++frame)
          for (auto format : {SpriteFrameFormat::FourDirection,
                              SpriteFrameFormat::EightDirection})
            for (auto surface : {SpriteSurface::Normal, SpriteSurface::Shallow,
                                 SpriteSurface::Deep}) {
              require(
                  leased.contains(
                      resources->acquire(group, frame, surface, format).get()),
                  "Enemy pose variant was not retained for runtime handoff");
              ++variants;
            }
      }
      require(source.bus->work_ram == ram && source.bus->video_ram == vram &&
                  source.cpu.describe_registers() == registers &&
                  source.cpu.instruction_count == steps &&
                  source.bus->master_clocks() == clocks,
              "Enemy resource preparation mutated gameplay state");
      peak_images = std::max(peak_images, readiness.leases().images.size());
      peak_bytes = std::max(peak_bytes, readiness.leases().image_bytes);
    }
  }
  require(encounters.size() > 100 && covered_groups.size() > 50 &&
              variants > 10000 && source.requests > 1000,
          "Enemy source coverage is vacuous");
  readiness.prepare({0, 0, 0, 0}, state);
  require(readiness.leases().images.empty(),
          "Departed encounter artwork was not evicted");
  std::cout << "PASS " << assets.title << ": " << source.queries
            << " source grid queries, " << source.calls << " selector calls, "
            << source.requests << " requested enemies, " << encounters.size()
            << " encounter IDs, " << covered_groups.size() << " sprite groups, "
            << variants << " leased variants; peak " << peak_images
            << " images/" << peak_bytes << " bytes; no gameplay mutation\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument(
          "native_enemy_sprite_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
