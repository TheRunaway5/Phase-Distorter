// Original execution and byte-record adapters exist only in this oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle_formation.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
namespace {
using namespace eb::native;
void require(bool value, const std::string &why) {
  if (!value)
    throw std::runtime_error(why);
}
struct Record {
  std::array<std::uint8_t, 78> bytes{};
};
unsigned word(const Record &r, unsigned at) {
  return r.bytes[at] | unsigned(r.bytes[at + 1]) << 8;
}
void put(Record &r, unsigned at, unsigned value) {
  r.bytes[at] = value;
  r.bytes[at + 1] = value >> 8;
}
BattleFormationRecord project(const Record &r) {
  std::uint64_t id = 0;
  for (unsigned i = 0; i < 8; ++i)
    id |= std::uint64_t(r.bytes[37 + i]) << (i * 8);
  return {id,
          word(r, 0),
          word(r, 2),
          r.bytes[11],
          r.bytes[16],
          r.bytes[67],
          r.bytes[68],
          r.bytes[69],
          bool(r.bytes[12]),
          r.bytes[14] == 1};
}
void patch(Record &r, const BattleFormationRecord &v) noexcept {
  r.bytes[11] = v.label;
  r.bytes[16] = v.row;
  r.bytes[67] = v.resource;
  r.bytes[68] = v.x;
  r.bytes[69] = v.y;
}
struct Source {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  unsigned battlers, count, group, ids, widths, target, rand_pc, random_draws{};
  Source(const eb::GameAssets &a)
      : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
        jp(a.version == eb::GameVersion::JP), battlers(jp ? 0xa1ae : 0x9fac),
        count(jp ? 0xa18c : 0x9f8a), group(jp ? 0x4e12 : 0x4a8c),
        ids(jp ? 0xac93 : 0xaabe), widths(jp ? 0xb0c5 : 0xaef0),
        target(jp ? 0xc2f03e : 0xc2f121), rand_pc(jp ? 0xc2692e : 0xc269ef) {}
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  bool run(std::span<const Record, 24> records, unsigned n, unsigned battle,
           std::span<const BattleCombatantResource> resources,
           story::RandomState random, bool detect_cycle = false) {
    bus->work_ram.fill(0);
    for (unsigned i = 0; i < 24; ++i)
      std::copy(records[i].bytes.begin(), records[i].bytes.end(),
                bus->work_ram.begin() + battlers + (i + 8) * 78);
    put(count, n);
    put(group, battle);
    put(0x24, random.primary_word);
    put(0x26, random.secondary_word);
    for (unsigned i = 0; i < 4; ++i)
      put(ids + i * 2, i < resources.size() ? resources[i].enemy : 0xffff);
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = cpu.x_index = cpu.y_index = 0;
    random_draws = 0;
    cpu.execute_instruction<0x22>(target, 4);
    std::vector<std::uint8_t> previous_sort;
    for (unsigned steps = 0; steps < 1000000; ++steps) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        require(cpu.accumulator == 0, "Source formation returned nonzero");
        return false;
      }
      if (detect_cycle && cpu.program_counter == (jp ? 0xc2f487u : 0xc2f56au)) {
        std::vector<std::uint8_t> state(
            bus->work_ram.begin() + battlers + 8 * 78,
            bus->work_ram.begin() + battlers + 32 * 78);
        if (state == previous_sort)
          return true;
        previous_sort = std::move(state);
      }
      if (cpu.program_counter == rand_pc)
        ++random_draws;
      cpu.step_instruction();
    }
    throw std::runtime_error("Source formation did not finish: " +
                             cpu.describe_registers());
  }
};
void run(const eb::GameAssets &a) {
  BattleCombatants catalog(a.image, a.version);
  Source source(a);
  unsigned cases = 0, overflows = 0, swaps = 0, draws = 0;
  for (unsigned battle : {0u, 3u, 4u, 7u, 8u, 425u, 475u, 476u}) {
    const auto scene = catalog.prepare(battle);
    require(!scene.resources().empty(), "Missing reference group resources");
    for (unsigned n : {1u, 2u, 3u, 5u, 9u, 17u, 23u})
      for (unsigned seed = 0; seed < 12; ++seed) {
        std::array<Record, 24> records;
        std::map<unsigned, unsigned> labels;
        for (unsigned i = 0; i < 24; ++i) {
          auto &r = records[i];
          for (unsigned j = 0; j < 78; ++j)
            r.bytes[j] = std::uint8_t(i * 71 + j * 13 + seed * 3);
          r.bytes[12] = i < n;
          r.bytes[14] = i < n ? 1 : 0;
          r.bytes[16] = std::uint8_t((i + seed) % 2);
          r.bytes[3] = 0;
          for (unsigned j = 0; j < 8; ++j)
            r.bytes[37 + j] = 0;
          if (i < n) {
            const auto &resource =
                scene.resources()[(i + seed) % scene.resources().size()];
            put(r, 0, resource.enemy);
            put(r, 2, resource.sprite);
            r.bytes[11] = std::uint8_t(labels[resource.enemy]++);
            r.bytes[37] = i + 1;
          }
        }
        BattleFormationRecords projections;
        for (unsigned i = 0; i < 24; ++i)
          projections[i] = project(records[i]);
        story::RandomState random{std::uint16_t(seed * 517 + 3),
                                  std::uint16_t(seed * 71 + 913)};
        auto plan =
            prepare_battle_formation(a.version, battle, n, projections, catalog,
                                     scene.resources(), random);
        source.run(records, n, battle, scene.resources(), random);
        plan.apply(std::span<Record, 24>(records), n, battle, random, project,
                   patch);
        for (unsigned i = 0; i < 24; ++i)
          for (unsigned j = 0; j < 78; ++j)
            require(
                records[i].bytes[j] ==
                    source.bus->work_ram[source.battlers + (i + 8) * 78 + j],
                "Formation record differs battle" + std::to_string(battle) +
                    " n" + std::to_string(n) + " seed" + std::to_string(seed) +
                    " slot" + std::to_string(i + 8) + " byte" +
                    std::to_string(j) + " native" +
                    std::to_string(records[i].bytes[j]) + " source" +
                    std::to_string(source.bus->work_ram[source.battlers +
                                                        (i + 8) * 78 + j]));
        require(random == story::RandomState{std::uint16_t(source.word(0x24)),
                                             std::uint16_t(source.word(0x26))},
                "Formation random state differs");
        require(plan.row_widths() ==
                    std::array<std::uint16_t, 2>{
                        std::uint16_t(source.word(source.widths)),
                        std::uint16_t(source.word(source.widths + 2))},
                "Formation row widths differ");
        require(plan.random_draws() == source.random_draws,
                "Formation random draw count differs");
        draws += source.random_draws;
        overflows += plan.outcome() == BattleFormationOutcome::RowsFull;
        for (unsigned i = 0; i < 23; ++i)
          swaps += plan.record_order()[i] != i;
        ++cases;
      }
  }
  unsigned cycles = 0, finite_ties = 0;
  const auto tie_resources = catalog.prepare(0);
  for (unsigned seed = 0; seed < 32; ++seed) {
    std::array<Record, 24> records{};
    for (unsigned i = 0; i < 2; ++i) {
      auto &r = records[i];
      put(r, 0, tie_resources.resources()[0].enemy);
      put(r, 2, tie_resources.resources()[0].sprite);
      r.bytes[12] = r.bytes[14] = 1;
      r.bytes[37] = i + 1;
      for (unsigned j = 45; j < 67; ++j)
        r.bytes[j] = std::uint8_t(i * 51 + j);
    }
    BattleFormationRecords projections;
    for (unsigned i = 0; i < 24; ++i)
      projections[i] = project(records[i]);
    story::RandomState random{std::uint16_t(seed * 517 + 3),
                              std::uint16_t(seed * 71 + 913)};
    std::optional<BattleFormationPlan> plan;
    try {
      plan.emplace(prepare_battle_formation(a.version, 0, 2, projections,
                                            catalog, tie_resources.resources(),
                                            random));
    } catch (const std::domain_error &) {
    }
    const bool cycle =
        source.run(records, 2, 0, tie_resources.resources(), random, true);
    require(cycle == !plan,
            "Native equal-label rejection does not match source cycle");
    if (cycle) {
      ++cycles;
      continue;
    }
    plan->apply(std::span<Record, 24>(records), 2, 0, random, project, patch);
    for (unsigned i = 0; i < 24; ++i)
      for (unsigned j = 0; j < 78; ++j)
        require(records[i].bytes[j] ==
                    source.bus->work_ram[source.battlers + (i + 8) * 78 + j],
                "Finite equal-label record mismatch");
    require(random == story::RandomState{std::uint16_t(source.word(0x24)),
                                         std::uint16_t(source.word(0x26))},
            "Finite equal-label RNG mismatch");
    ++finite_ties;
  }
  require(a.version == eb::GameVersion::JP ? cycles > 0 : cycles == 0,
          "Regional label-cycle coverage is vacuous");
  require(overflows && swaps && draws, "Formation source coverage was vacuous");
  std::cout << "PASS " << (a.version == eb::GameVersion::JP ? "JP" : "US")
            << ":" << cases << " full-record source formations," << overflows
            << " partial capacity prefixes," << swaps << " permuted records,"
            << draws << " exact RNG draws," << finite_ties
            << " finite equal-label controls," << cycles
            << " verified source cycles rejected\n";
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
