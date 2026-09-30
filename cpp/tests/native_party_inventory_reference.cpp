// Complete original receipt/space/wallet helper execution with actual SnesBus
// arithmetic hardware. Only C216DB teddy party/entity reconciliation is an
// explicit external service frontier; source transformations/RAND run intact.
// Expected post-state and returned values come from original instructions.
// No original authored data is bundled; both validated local packs are opt-in.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native::party;
using eb::GameVersion;
using eb::native::dialogue::Progress;
void require(bool value, const std::string &message) {
  if (!value)
    throw std::runtime_error(message);
}
struct Layout {
  unsigned give, space, empty, wallet, teddy, game, party, stride, items,
      members, count, money, timers, loaded, next, math;
};
Layout layout(GameVersion region) {
  // Independently linked original source symbols and struct offsets.
  if (region == GameVersion::US)
    return {0xc18bc6, 0xc4572b, 0xc22351, 0xc22214, 0xc216db, 0x97f5,
            0x99ce,   95,       35,       122,      175,      60,
            0x9f1a,   0x9f2a,   0x9f2c,   0xb0};
  return {0xc18c69, 0xc43525, 0xc221ef, 0xc220b3, 0xc21583, 0x9aa9,
          0x9c7f,   94,       34,       119,      172,      57,
          0xa120,   0xa130,   0xa132,   0xae};
}
struct Totals {
  unsigned receipts{}, queries{}, wallets{}, teddy{}, callbacks{},
      comparisons{}, rescans{};
  std::uint64_t instructions{}, writes{};
};
struct Original {
  Layout p;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Totals totals;
  std::vector<std::pair<unsigned, std::uint8_t>> writes;
  std::vector<std::uint8_t> initial;
  unsigned return_pc{};
  explicit Original(const eb::GameAssets &assets)
      : p(layout(assets.version)),
        bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.observe_memory_write = [&](std::uint32_t address, std::uint8_t value) {
      const auto at = address & 0xffff;
      if (!(address & 0x400000) && at >= 0x4202 && at <= 0x4203)
        return; // real bus multiply, not a helper stub
      if (at >= 0x1c00 && at < 0x2000)
        return;
      if (at >= p.math && at < p.math + 4)
        return; // original software-division scratch
      require(address >= 0x7e0000 && address < 0x800000,
              "Source wrote outside its owned game state/ABI");
      writes.emplace_back(address - 0x7e0000, value);
      ++totals.writes;
    };
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = std::uint8_t(value);
    bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8);
  }
  static void encode(std::span<std::uint8_t> dest, const Layout &p,
                     const State &state, const ItemTransformationState &timers,
                     const eb::native::story::RandomState &random) {
    const auto word = [&](unsigned at, unsigned value) {
      dest[at] = std::uint8_t(value);
      dest[at + 1] = std::uint8_t(value >> 8);
    };
    for (unsigned c = 0; c < 6; ++c)
      std::copy(state.character(c + 1).items.begin(),
                state.character(c + 1).items.end(),
                dest.begin() + p.party + c * p.stride + p.items);
    std::copy(state.party_order.begin(), state.party_order.end(),
              dest.begin() + p.game + p.members);
    dest[p.game + p.count] = state.controlled_count;
    word(p.game + p.money, state.money_carried);
    word(p.game + p.money + 2, state.money_carried >> 16);
    for (unsigned i = 0; i < 4; ++i) {
      const auto &t = timers.records[i];
      const auto at = p.timers + i * 4;
      dest[at] = t.sfx;
      dest[at + 1] = t.frequency;
      dest[at + 2] = t.sfx_countdown;
      dest[at + 3] = t.transformation_countdown;
    }
    word(p.loaded, timers.loaded_count);
    dest[p.next] = timers.next_check;
    word(0x24, random.primary_word);
    word(0x26, random.secondary_word);
  }
  void seed(const State &party, const ItemTransformationState &timers,
            const eb::native::story::RandomState &random) {
    bus->work_ram.fill(0x5a);
    encode(bus->work_ram, p, party, timers, random);
    initial.assign(bus->work_ram.begin(), bus->work_ram.end());
    writes.clear();
  }
  void compare(const State &party, const ItemTransformationState &timers,
               const eb::native::story::RandomState &random) {
    auto expected = initial;
    encode(expected, p, party, timers, random);
    for (unsigned i = 0; i < expected.size(); ++i) {
      if ((i >= 0x1c00 && i < 0x2000) || (i >= p.math && i < p.math + 4))
        continue;
      require(expected[i] == bus->work_ram[i],
              "Original/native state mismatch at WRAM " + std::to_string(i));
    }
    ++totals.comparisons;
  }
  void begin(unsigned entry, unsigned a = 0, unsigned x = 0,
             std::uint32_t parameter = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.data_bank = 0x7e;
    cpu.accumulator = std::uint16_t(a);
    cpu.x_index = std::uint16_t(x);
    cpu.y_index = 0x89ab;
    put(0x1e0e, parameter);
    put(0x1e10, parameter >> 16);
    const auto trampoline = (entry & 0xff0000) | 0xff00;
    cpu.program_counter = trampoline;
    return_pc = trampoline + 4;
    cpu.execute_instruction<0x22>(entry, 4);
  }
  bool next() {
    for (unsigned i = 0; i < 200000; ++i) {
      if (cpu.program_counter == return_pc && cpu.stack_pointer == 0x1fff) {
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Source receipt changed caller ABI");
        return true;
      }
      if (cpu.program_counter == p.teddy) {
        ++totals.teddy;
        return false;
      }
      cpu.step_instruction();
      ++totals.instructions;
    }
    throw std::runtime_error(
        "Original helper failed to return/reach its service");
  }
  void acknowledge() { cpu.execute_instruction<0x6b>(0, 1); }
};
Progress finish(Inventory::Operation &op, unsigned budget) {
  for (unsigned i = 0; i < 100; ++i) {
    const auto progress = op.advance(budget);
    if (progress != Progress::BudgetExhausted)
      return progress;
  }
  throw std::runtime_error("Native receipt failed to reach boundary");
}
struct Case {
  std::uint16_t selector = 1, item = 1;
  unsigned empty{};
  bool callback{};
  unsigned timer_mode{};
};
void receipt(
    Original &source,
    const std::shared_ptr<const eb::native::dialogue::SubstitutionResources>
        &resources,
    const std::shared_ptr<const ItemTransformationResources> &transformations,
    Case c) {
  State party(resources->version());
  party.party_order = {6, 3, 1, 5, 2, 4};
  party.controlled_count = 6;
  for (unsigned i = 1; i <= 6; ++i)
    party.character(i).items.fill(1);
  const unsigned character = c.selector == 0xff ? 3 : c.selector;
  if (c.empty < 14)
    party.character(character).items[c.empty] = 0;
  ItemTransformationState timers;
  timers.loaded_count = c.timer_mode == 3 ? 65535 : 5;
  timers.next_check = 13;
  for (auto &t : timers.records)
    t = {0xa7, std::uint8_t(c.timer_mode == 1 ? 9 : 0), 0xb8,
         std::uint8_t(c.timer_mode == 2 ? 12 : 0)};
  eb::native::story::RandomState random{
      std::uint16_t(1 + source.totals.receipts),
      std::uint16_t(16 + source.totals.receipts * 13)};
  source.seed(party, timers, random);
  Inventory inventory(party, resources, transformations, timers, random);
  auto op = inventory.begin_give(c.selector, c.item);
  source.begin(source.p.give, c.selector, c.item);
  ++source.totals.receipts;
  for (unsigned stage = 0; stage < 2; ++stage) {
    const bool returned = source.next();
    const auto progress = finish(*op, (source.totals.receipts & 1) ? 1 : 4096);
    source.compare(party, timers, random);
    if (returned) {
      require(progress == Progress::Finished && op->complete() &&
                  op->recipient() == source.cpu.accumulator,
              "Receipt source return differs");
      return;
    }
    require(progress == Progress::Suspended &&
                op->service() == InventoryService::TeddyRefresh,
            "Teddy service order differs");
    require(op->advance(0) == Progress::Suspended,
            "Pending Teddy service advanced without acknowledgement");
    if (c.callback) {
      // Explicit matched external C216DB lifecycle effects, not a native
      // expected-state copy. The selected source caller slot stays live.
      if (c.selector == 0xff) {
        party.party_order[1] = 5;
        source.bus->work_ram[source.p.game + source.p.members + 1] = 5;
      }
      party.character(character).items[c.empty] = 0;
      source.bus->work_ram[source.p.party + (character - 1) * source.p.stride +
                           source.p.items + c.empty] = 0;
      random = {0x1234, 0x5678};
      source.put(0x24, 0x1234);
      source.put(0x26, 0x5678);
      ++source.totals.callbacks;
    }
    source.acknowledge();
    op->respond();
  }
  throw std::runtime_error("Repeated teddy service during one receipt");
}
void run(const char *path) {
  const auto assets = eb::load_game_assets(path, eb::asset_profiles());
  auto resources = eb::native::dialogue::SubstitutionResources::import(
      assets.image, assets.version);
  auto transformations =
      ItemTransformationResources::import(assets.image, assets.version);
  Original source(assets);
  try {
    // Original source reads every imported item descriptor independently;
    // all six actual character records, including both guests, are covered.
    for (unsigned item = 0; item < 254; ++item)
      for (unsigned character = 1; character <= 6; ++character)
        receipt(source, resources, transformations,
                {std::uint16_t(character), std::uint16_t(item), item % 14,
                 false, 0});
    for (unsigned item = 0; item < 254; ++item)
      receipt(source, resources, transformations,
              {0xff, std::uint16_t(item), 13, false, 0});
    for (unsigned item = 0; item < 254; ++item) {
      const auto p = resources->item_properties(item);
      if ((p.flags & 0x10) || p.type == 4)
        for (unsigned mode = 0; mode < 4; ++mode)
          receipt(source, resources, transformations,
                  {0xff, std::uint16_t(item), 0, p.type == 4, mode});
    }
    for (unsigned character = 1; character <= 6; ++character)
      receipt(source, resources, transformations,
              {std::uint16_t(character), 65535, 14, false, 0});
    for (unsigned mask = 0; mask < 8; ++mask)
      for (unsigned mode = 0; mode < 4; ++mode)
        for (unsigned chosen : {0u, 1u, 3u, 6u}) {
          State party(assets.version);
          party.party_order = {6, 3, 1, 5, 2, 4};
          party.controlled_count = chosen;
          for (unsigned i = 0; i < 3; ++i)
            if (mask & (1 << i))
              party.character(party.party_order[i]).items[13 - i] =
                  transformations->record(i).item;
          ItemTransformationState timers;
          timers.loaded_count = mode == 3 ? 0 : 3;
          timers.next_check = 7;
          for (auto &timer : timers.records)
            timer = {91, std::uint8_t(mode == 1 ? 1 : 0), 92,
                     std::uint8_t(mode == 2 ? 1 : 0)};
          eb::native::story::RandomState random{std::uint16_t(17 + mask),
                                                std::uint16_t(33 + mode)};
          Inventory inventory(party, resources, transformations, timers, random);
          for (unsigned repeat = 0; repeat < 2; ++repeat) {
            source.seed(party, timers, random);
            source.begin(assets.version == GameVersion::US ? 0xc3ebca : 0xc3e790);
            require(source.next(), "Rescan unexpectedly requested an external service");
            inventory.rescan_transformations();
            source.compare(party, timers, random);
            ++source.totals.rescans;
          }
        }
    {
      State party(assets.version);
      ItemTransformationState timers;
      eb::native::story::RandomState random;
      Inventory inventory(party, resources, transformations, timers, random);
      party.party_order = {6, 3, 1, 5, 2, 4};
      party.controlled_count = 6;
      for (unsigned character = 1; character <= 6; ++character)
        for (unsigned empty = 0; empty <= 14; ++empty) {
          for (unsigned c = 1; c <= 6; ++c)
            party.character(c).items.fill(1);
          if (empty < 14)
            party.character(character).items[empty] = 0;
          for (unsigned selector : {character, 255u}) {
            source.seed(party, timers, random);
            source.begin(source.p.space, selector);
            require(source.next(), "Space query unexpectedly called a service");
            require(source.cpu.accumulator ==
                        inventory.find_space(std::uint16_t(selector)),
                    "Space query differs");
            source.compare(party, timers, random);
            ++source.totals.queries;
          }
          source.seed(party, timers, random);
          source.begin(source.p.empty, character);
          require(source.next(), "Index query service");
          require(source.cpu.accumulator ==
                      inventory.first_empty_index(std::uint16_t(character)),
                  "Post-give index differs");
          source.compare(party, timers, random);
          ++source.totals.queries;
        }
      constexpr std::array<std::uint32_t, 12> amounts{
          0,      1,          65535,      65536,      99998,      99999,
          100000, 0x7fffffff, 0x80000000, 0x80000001, 0xfffffffe, 0xffffffff};
      for (auto initial : amounts)
        for (auto amount : amounts) {
          party.money_carried = initial;
          source.seed(party, timers, random);
          source.begin(source.p.wallet, 0, 0, amount);
          require(source.next(), "Wallet unexpectedly called a service");
          const auto value = inventory.add_wallet32(amount);
          require(value == (source.word(0x1e06) |
                            (std::uint32_t(source.word(0x1e08)) << 16)),
                  "Original wallet return differs");
          source.compare(party, timers, random);
          ++source.totals.wallets;
        }
    }
  } catch (const std::exception &e) {
    throw std::runtime_error(
        std::string(assets.version == GameVersion::US ? "US" : "JP") +
        " receipt=" + std::to_string(source.totals.receipts) +
        " query=" + std::to_string(source.totals.queries) +
        " wallet=" + std::to_string(source.totals.wallets) + ": " + e.what());
  }
  const auto &t = source.totals;
  std::cout << (assets.version == GameVersion::US ? "US" : "JP")
            << " receipts=" << t.receipts << " queries=" << t.queries
            << " wallets=" << t.wallets << " teddy_frontiers=" << t.teddy
            << " rescans=" << t.rescans
            << " callbacks=" << t.callbacks << " comparisons=" << t.comparisons
            << " source_instructions=" << t.instructions
            << " ordered_global_byte_writes=" << t.writes << '\n';
}
} // namespace
int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "Provide validated local .ebpak paths for original inventory "
                 "reference\n";
    return 77;
  }
  try {
    for (int i = 1; i < argc; ++i)
      run(argv[i]);
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
