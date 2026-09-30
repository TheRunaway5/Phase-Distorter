// Source execution is an oracle only. Production camera planning has no bus,
// processor, rendering cache or original callback identifiers.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/camera_refresh.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
std::string context;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(std::string(message) + ": " + context);
}
std::int16_t signed_word(unsigned value) {
  value &= 0xffff;
  return std::int16_t(value < 0x8000 ? int(value) : int(value) - 65536);
}
struct Layout {
  unsigned refresh, map_column, collision_column, draw_column, npc_column,
      enemy_column;
  unsigned map_row, collision_row, draw_row, npc_row, enemy_row;
  unsigned origin_x, origin_y, camera_copy_x, camera_copy_y, npc_enable,
      enemy_enable;
  unsigned flag_query, enemy_group_query, npc_cell_query;
};
constexpr Layout us{0xc01558, 0xc00bdc, 0xc00d7e, 0xc00fcb, 0xc025cf,
                    0xc02b55, 0xc00ac5, 0xc00cf3, 0xc00e16, 0xc0255c,
                    0xc02a6b, 0x4374,   0x4376,   0x4386,   0x4388,
                    0x4a58,   0x4a5a,   0xc21628, 0xc0263d, 0xc0222b};
constexpr Layout jp{0xc0156e, 0xc00bee, 0xc00d90, 0xc00fdd, 0xc025dd,
                    0xc02b65, 0xc00ad7, 0xc00d05, 0xc00e28, 0xc0256a,
                    0xc02a7b, 0x46fa,   0x46fc,   0x470c,   0x470e,
                    0x4dde,   0x4de0,   0xc214d0, 0xc0264b, 0xc02239};

struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Layout layout;
  Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), layout(assets.version == eb::GameVersion::JP ? jp : us) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.data_bank = 0x7e;
    bus->work_ram[0x0d] = 0x80;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void begin(unsigned entry, unsigned a, unsigned x, bool far) {
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 0xffff, 3);
  }
  bool returned(bool far) const {
    return cpu.program_counter == 0xc0ff00 + (far ? 4 : 3) &&
           cpu.stack_pointer == 0x1fff;
  }
  void end(bool far) {
    if (far)
      cpu.execute_instruction<0x6b>(0, 1);
    else
      cpu.execute_instruction<0x60>(0, 1);
  }
  CameraRefreshPlan refresh(CameraStreamOrigin origin, CameraPosition target) {
    put(layout.origin_x, std::uint16_t(origin.x));
    put(layout.origin_y, std::uint16_t(origin.y));
    // Old published camera copies are deliberately unrelated to origin.
    put(layout.camera_copy_x, 0x1234);
    put(layout.camera_copy_y, 0xabcd);
    begin(layout.refresh, target.x, target.y, false);
    CameraRefreshPlan result;
    unsigned steps = 0;
    while (!returned(false)) {
      if (++steps > 5000000)
        throw std::runtime_error(
            "Source camera traversal exceeded its test budget");
      const auto pc = cpu.program_counter;
      if (pc == layout.map_column || pc == layout.collision_column ||
          pc == layout.draw_column || pc == layout.map_row ||
          pc == layout.collision_row || pc == layout.draw_row) {
        // Skip only graphics/cache publication, preserving the original
        // traversal and exact ordered activation-call arguments.
        end(false);
      } else if (pc == layout.npc_column || pc == layout.enemy_column ||
                 pc == layout.npc_row || pc == layout.enemy_row) {
        result.intents.push_back(
            {pc == layout.npc_column || pc == layout.npc_row
                 ? CameraRefreshService::Npcs
                 : CameraRefreshService::Enemies,
             pc == layout.npc_column || pc == layout.enemy_column
                 ? CameraStripAxis::Column
                 : CameraStripAxis::Row,
             signed_word(cpu.accumulator), signed_word(cpu.x_index)});
        end(true);
      } else {
        cpu.step_instruction();
      }
    }
    result.origin = {signed_word(word(layout.origin_x)),
                     signed_word(word(layout.origin_y))};
    require(word(0x31) == target.x && word(0x33) == target.y &&
                word(0x35) == target.x && word(0x37) == target.y &&
                word(layout.camera_copy_x) == target.x &&
                word(layout.camera_copy_y) == target.y,
            "Source logical camera or completed copies were not updated");
    return result;
  }
  std::vector<std::array<unsigned, 2>> query(const CameraRefreshIntent &intent,
                                             const CameraRefreshGates &gates,
                                             unsigned npc_mode = 1) {
    // The source NPC helpers inspect a local before initializing it. This
    // proof limits their enabled path to valid inputs with clean workspace;
    // native policy does not reproduce residual stack-memory dependencies.
    std::fill(bus->work_ram.begin() + 0x1d00, bus->work_ram.begin() + 0x2000,
              0);
    put(layout.npc_enable, gates.npcs_enabled ? npc_mode : 0);
    put(layout.enemy_enable, gates.enemies_enabled ? 1 : 0);
    const bool npcs = intent.service == CameraRefreshService::Npcs;
    const bool column = intent.axis == CameraStripAxis::Column;
    begin(npcs ? (column ? layout.npc_column : layout.npc_row)
               : (column ? layout.enemy_column : layout.enemy_row),
          std::uint16_t(intent.x), std::uint16_t(intent.y), true);
    std::vector<std::array<unsigned, 2>> cells;
    unsigned steps = 0;
    while (!returned(true)) {
      if (++steps > 100000)
        throw std::runtime_error(
            "Source camera query exceeded its test budget");
      if (cpu.program_counter == layout.flag_query) {
        require(cpu.accumulator == 11 || cpu.accumulator == 73,
                "Unexpected enemy gate flag");
        cpu.accumulator = (cpu.accumulator == 11 ? gates.monsters_disabled
                                                 : gates.final_boss_defeated)
                              ? 0xffff
                              : 0;
        end(true);
      } else if (cpu.program_counter ==
                 (npcs ? layout.npc_cell_query : layout.enemy_group_query)) {
        cells.push_back({cpu.accumulator, cpu.x_index});
        cpu.accumulator =
            0; // Empty group: no allocation, RNG or actor side effects.
        end(true);
      } else {
        cpu.step_instruction();
      }
    }
    return cells;
  }
};

void compare(Oracle &oracle, CameraStreamOrigin origin, CameraPosition target,
             std::uint64_t &cases, std::uint64_t &intents) {
  context = "origin=" + std::to_string(origin.x) + "," +
            std::to_string(origin.y) + " target=" + std::to_string(target.x) +
            "," + std::to_string(target.y);
  const auto native = plan_camera_refresh(origin, target);
  const auto source = oracle.refresh(origin, target);
  require(native.origin == source.origin, "Camera final stream origin differs");
  require(native.intents == source.intents,
          "Camera ordered activation intents differ");
  ++cases;
  intents += source.intents.size();
}

std::uint64_t gates(Oracle &oracle) {
  std::uint64_t cases = 0;
  for (auto axis : {CameraStripAxis::Column, CameraStripAxis::Row}) {
    const int extent = axis == CameraStripAxis::Column ? 1024 : 1280;
    for (int fixed : {-32768, -25, -24, -17, -16, -15, -8, -1, 0, 1, 7, 8,
                      extent - 8, extent - 1, extent, 32767})
      for (unsigned bits = 0; bits < 8; ++bits) {
        CameraRefreshIntent intent{CameraRefreshService::Enemies, axis, 40, 56};
        (axis == CameraStripAxis::Column ? intent.x : intent.y) = fixed;
        CameraRefreshGates policy;
        policy.enemies_enabled = !(bits & 1);
        policy.monsters_disabled = bits & 2;
        policy.final_boss_defeated = bits & 4;
        context = "enemy axis=" + std::to_string(unsigned(axis)) +
                  " fixed=" + std::to_string(fixed) +
                  " policy=" + std::to_string(bits);
        const auto native = eligible_camera_refresh_intent(intent, policy);
        const auto source = oracle.query(intent, policy);
        require(native.has_value() == !source.empty(),
                "Enemy strip gate differs");
        if (native) {
          const auto coordinate =
              axis == CameraStripAxis::Column ? native->x : native->y;
          require(source.front()[axis == CameraStripAxis::Column ? 0 : 1] ==
                      unsigned(coordinate) / 8,
                  "Enemy fixed-axis normalization differs");
        }
        ++cases;
      }
    for (unsigned mode : {0, 1, 65535}) {
      CameraRefreshGates policy;
      policy.npcs_enabled = mode != 0;
      const CameraRefreshIntent intent{CameraRefreshService::Npcs, axis, 40,
                                       56};
      context = "NPC axis=" + std::to_string(unsigned(axis)) +
                " mode=" + std::to_string(mode);
      require(eligible_camera_refresh_intent(intent, policy).has_value() ==
                  !oracle.query(intent, policy, mode).empty(),
              "NPC enable gate differs");
      ++cases;
    }
  }
  return cases;
}
} // namespace

int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_camera_refresh_reference pack.ebpak ...");
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
      Oracle oracle(assets);
      std::uint64_t cases = 0, intents = 0;
      for (int base : {-128, -1, 0, 1, 200, 1023})
        for (int dx : {-3, -1, 0, 1, 3})
          for (int dy : {-2, 0, 2})
            for (unsigned subpixel : {0, 7}) {
              CameraStreamOrigin origin{std::int16_t(base),
                                        std::int16_t(base + 10)};
              CameraPosition target{
                  std::uint16_t((base + dx) * 8 + subpixel),
                  std::uint16_t((base + 10 + dy) * 8 + subpixel)};
              compare(oracle, origin, target, cases, intents);
            }
      for (CameraPosition target :
           {CameraPosition{8000, 8000}, CameraPosition{32767, 32768},
            CameraPosition{65535, 65535}, CameraPosition{0, 0}})
        compare(oracle, {5, -3}, target, cases, intents);
      const auto gate_cases = gates(oracle);
      std::cout << "PASS " << assets.title << ": " << cases
                << " camera traversals, " << intents
                << " ordered activation intents, " << gate_cases
                << " source activation gates\n";
    }
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
