// Source C0222B chooses the eligible authored sprite groups; production
// readiness must only retain those immutable resources, with no
// actor/script/RNG work.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/npc_sprite_readiness.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>
namespace {
using namespace eb::native;
unsigned word(std::span<const std::uint8_t> data, unsigned at) {
  return data[at] | unsigned(data[at + 1]) << 8;
}
void require(bool ok, const char *message) {
  if (!ok)
    throw std::runtime_error(message);
}
struct Layout {
  unsigned query, create, first, next, npc, direction, flags, tileset, enabled,
      objects, photo, random;
};
constexpr Layout us{0xc0222b, 0xc01e49, 0x0a50, 0x0a9e, 0x2c9a, 0x2af6,
                    0x9c08,   0x436e,   0x4a58, 0x4a66, 0xb4ef, 0xc08e9a};
constexpr Layout jp{0xc02239, 0xc01e5f, 0x0a46, 0x0a94, 0x3098, 0x2ef4,
                    0x9eb3,   0x46f4,   0x4dde, 0x4dec, 0xb6b8, 0xc08e8b};
struct Request {
  unsigned npc, sprite, script, x, y;
  bool operator==(const Request &) const = default;
};
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout layout;
  std::uint64_t calls{}, requests{};
  explicit Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), layout(assets.version == eb::GameVersion::JP ? jp : us) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    put(layout.enabled, 1);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  void configure(unsigned camera_x, unsigned camera_y,
                 const NpcVisibility &state) {
    put(0x31, camera_x);
    put(0x33, camera_y);
    put(layout.tileset, state.tileset);
    put(layout.objects, state.objects_only);
    put(layout.photo, state.photograph);
    std::copy(state.event_flags.begin(), state.event_flags.end(),
              bus->work_ram.begin() + layout.flags);
    require(state.active_npcs.size() < 29,
            "Too many active IDs for reference fixture");
    put(layout.first, state.active_npcs.empty() ? 0xffff : 0);
    for (unsigned i = 0; i < state.active_npcs.size(); ++i) {
      put(layout.npc + i * 2, state.active_npcs[i]);
      put(layout.next + i * 2,
          i + 1 == state.active_npcs.size() ? 0xffff : (i + 1) * 2);
    }
  }
  std::vector<Request> cell(unsigned x, unsigned y) {
    std::vector<Request> result;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = x;
    cpu.x_index = y;
    cpu.execute_instruction<0x22>(layout.query, 4);
    unsigned steps = 0;
    while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
      if (++steps > 2000000)
        throw std::runtime_error("NPC selector oracle did not return: " +
                                 cpu.describe_registers());
      if (cpu.program_counter == layout.random)
        throw std::runtime_error(
            "NPC readiness selector unexpectedly consumed RNG");
      if (cpu.program_counter == layout.create) {
        // Observe the selector's requested domain operation, then stub
        // allocation. Caller locals contain its authored NPC and world
        // coordinates; CREATE_ENTITY itself must never run here.
        result.push_back({word(bus->work_ram, cpu.direct_page + 0x20),
                          cpu.accumulator, cpu.x_index,
                          word(bus->work_ram, cpu.direct_page + 0x0e),
                          word(bus->work_ram, cpu.direct_page + 0x10)});
        ++requests;
        cpu.accumulator = 29; // Scratch slot is never linked/activated.
        cpu.execute_instruction<0x6b>(0, 1);
      } else {
        cpu.step_instruction();
      }
    }
    ++calls;
    return result;
  }
};

void run(const eb::GameAssets &assets) {
  auto catalog = std::make_shared<const NpcCatalog>(
      assets.image, npc_catalog_layout(assets.version));
  auto resources = std::make_shared<SpriteResources>(
      assets.image, sprite_catalog_layout(assets.version));
  NpcSpriteReadiness readiness(catalog, resources);
  Oracle oracle(assets);
  unsigned highest_flag = 0;
  for (unsigned id = 0; id < catalog->size(); ++id)
    highest_flag =
        std::max(highest_flag, catalog->definition(NpcId(id)).event_flag);
  std::vector<std::uint8_t> flags((highest_flag + 7) / 8);
  const std::array<NpcId, 3> active{328, 329, 227};
  NpcVisibility state{0, flags, active};
  std::uint64_t variants = 0;
  std::size_t peak_images = 0, peak_bytes = 0;
  std::set<unsigned> covered_groups;
  for (unsigned pattern = 0; pattern < 2; ++pattern) {
    std::fill(flags.begin(), flags.end(), pattern ? 255 : 0);
    for (unsigned mode = 0; mode < 3; ++mode) {
      state.objects_only = mode == 1;
      state.photograph = mode == 2;
      for (unsigned y = 0; y < 40; ++y)
        for (unsigned x = 0; x < 32; ++x) {
          std::array<bool, 32> areas{};
          for (const auto &placement : catalog->cell(x, y))
            areas[placement.tileset] = true;
          for (unsigned area = 0; area < areas.size(); ++area) {
            if (!areas[area])
              continue;
            state.tileset = area;
            auto source_state = state;
            source_state.active_npcs =
                {}; // Resource readiness deliberately includes active groups.
            oracle.configure(x * 256, y * 256, source_state);
            const auto requests = oracle.cell(x, y);
            std::vector<unsigned> expected;
            for (const auto &request : requests)
              expected.push_back(request.sprite);
            std::sort(expected.begin(), expected.end());
            expected.erase(std::unique(expected.begin(), expected.end()),
                           expected.end());
            const auto ram = oracle.bus->work_ram;
            const auto vram = oracle.bus->video_ram;
            const auto registers = oracle.cpu.describe_registers();
            const auto steps = oracle.cpu.instruction_count,
                       clocks = oracle.bus->master_clocks();
            readiness.prepare({int(x * 256), int(y * 256), int((x + 1) * 256),
                               int((y + 1) * 256)},
                              state);
            require(std::equal(readiness.groups().begin(),
                               readiness.groups().end(), expected.begin(),
                               expected.end()),
                    "Prepared sprite groups differ from actual source NPC "
                    "selection");
            require(readiness.stats().npcs == requests.size(),
                    "Prepared eligible NPC count differs");
            std::set<const SpriteImage *> leased;
            for (const auto &image : readiness.images())
              leased.insert(image.get());
            require(leased.size() == readiness.stats().images,
                    "Readiness kept duplicate cache aliases");
            for (const auto group : readiness.groups()) {
              covered_groups.insert(group);
              for (unsigned frame = 0;
                   frame < resources->definition(group).frames; ++frame)
                for (auto format : {SpriteFrameFormat::FourDirection,
                                    SpriteFrameFormat::EightDirection})
                  for (auto surface :
                       {SpriteSurface::Normal, SpriteSurface::Shallow,
                        SpriteSurface::Deep}) {
                    const auto image =
                        resources->acquire(group, frame, surface, format);
                    require(
                        leased.contains(image.get()),
                        "Authored runtime variant was not strongly retained");
                    ++variants;
                  }
            }
            require(oracle.bus->work_ram == ram &&
                        oracle.bus->video_ram == vram &&
                        oracle.cpu.describe_registers() == registers &&
                        oracle.cpu.instruction_count == steps &&
                        oracle.bus->master_clocks() == clocks &&
                        active == std::array<NpcId, 3>{328, 329, 227},
                    "Readiness mutated source actor/RNG/CPU/graphics state");
            peak_images = std::max(peak_images, readiness.stats().images);
            peak_bytes = std::max(peak_bytes, readiness.stats().image_bytes);
          }
        }
    }
  }
  require(oracle.calls && covered_groups.size() > 100 && variants > 10000,
          "Readiness source coverage is vacuous");
  readiness.prepare({0, 0, 0, 0}, state);
  require(readiness.images().empty(),
          "Leaving the readiness footprint retained artwork");
  std::cout << "PASS " << assets.title << ": " << oracle.calls
            << " actual NPC selector calls, " << covered_groups.size()
            << " sprite groups, " << variants
            << " shared authored variants; peak " << peak_images << " images/"
            << peak_bytes << " payload bytes; no gameplay mutation\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument(
          "native_npc_sprite_readiness_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
