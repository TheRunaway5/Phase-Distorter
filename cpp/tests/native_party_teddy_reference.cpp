// Selection differential only: execute the actual generated regional C216DB
// through its RTL. Selected strength names an already-present member, or both
// Teddy members are absent on the no-item path. Membership/removal helpers run
// intact; creation, removal of present actors and formation are not stubbed or
// claimed. Synthetic imported metadata contains no authored game content.
#include "eb/native/party/teddy.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native::party;
using dialogue_substitution_test_assets::Input;
void check(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
void item(Input& input, unsigned id, unsigned type, unsigned ep) {
    const auto at = input.items + id * input.item_stride + input.name_size;
    input.image.at(at) = std::uint8_t(type);
    input.image.at(at + 6) = 6; // Present guest, so the real membership helper returns early.
    input.image.at(at + 8) = std::uint8_t(ep);
}
struct Layout { unsigned entry, member, remove, create, erase, members, count, controlled, items; };
Layout layout(eb::GameVersion version) {
    // Independently linked US/JP labels and original regional struct offsets.
    if (version == eb::GameVersion::US)
        return {0xc216db,0xc2239d,0xc229bb,0xc0369b,0xc03903,122,174,175,35};
    return {0xc21583,0xc2223b,0xc228b3,0xc0389e,0xc03b37,119,171,172,34};
}
struct Counts {
    std::uint64_t cases{}, instructions{}, no_item{}, member_calls{}, remove_calls{}, inventory_reads{};
    void add(const Counts& b) {
        cases += b.cases; instructions += b.instructions; no_item += b.no_item;
        member_calls += b.member_calls; remove_calls += b.remove_calls; inventory_reads += b.inventory_reads;
    }
};
struct Original {
    Input input;
    Layout p;
    std::shared_ptr<const eb::native::dialogue::SubstitutionResources> resources;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Counts counts;
    std::vector<unsigned> inventory_reads;
    explicit Original(Input fixture)
        : input(std::move(fixture)), p(layout(input.version)), resources(input.load()),
          bus(std::make_unique<eb::SnesBus>(input.image,input.version)), cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        bus->work_ram.fill(0xa5);
        bus->debug_read_wram = [&](unsigned at, std::uint8_t value) {
            for (unsigned record = 0; record < 6; ++record) {
                const auto start = input.party + record * input.party_stride + p.items;
                if (at >= start && at < start + 14) inventory_reads.push_back(at);
            }
            return value;
        };
        cpu.observe_memory_write = [&](unsigned at, std::uint8_t) {
            // The real compiler locals/call stack and MULT168 registers are
            // expected. Every game-state/other WRAM write is forbidden here.
            const auto low = at & 0xffff;
            check(at == 0x4202 || at == 0x4203 || (low >= 0x1c00 && low < 0x2000),
                  "Selection-only original path unexpectedly mutated game state");
        };
    }
    unsigned pointer(unsigned at) const {
        return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8)
            | (unsigned(bus->work_ram.at(at + 2)) << 16);
    }
    void compare(const State& party) {
        for (unsigned i = 0; i < 6; ++i) {
            bus->work_ram[input.game_state + p.members + i] = party.party_order[i];
            const auto& values = party.character(i + 1).items;
            std::copy(values.begin(), values.end(),
                      bus->work_ram.begin() + input.party + i * input.party_stride + p.items);
        }
        bus->work_ram[input.game_state + p.count] = party.party_count;
        bus->work_ram[input.game_state + p.controlled] = party.controlled_count;
        const auto native = select_teddy_item(party,*resources);
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
        cpu.accumulator = 0xbeef; cpu.x_index = 0xabcd; cpu.y_index = 0x1234;
        cpu.program_counter = 0xc2ff00; cpu.execute_instruction<0x22>(p.entry,4);
        inventory_reads.clear();
        unsigned selected{}, members{}, removals{}, steps{};
        std::vector<unsigned> removed;
        while (!(cpu.program_counter == 0xc2ff04 && cpu.stack_pointer == 0x1fff)) {
            check(++steps <= 10000, "Original Teddy selection did not return");
            check(cpu.program_counter != p.create && cpu.program_counter != p.erase,
                  "Selection fixture incorrectly entered an actor lifecycle");
            if (cpu.program_counter == p.member) {
                ++members;
                const unsigned at = pointer(cpu.direct_page + 6);
                const unsigned first = 0xc00000 + input.items + input.name_size + 6;
                check(at >= first && (at - first) % input.item_stride == 0,
                      "Original selected-strength pointer is not an item record");
                selected = (at - first) / input.item_stride;
                check(cpu.accumulator == 6, "Synthetic present-member strength was not retained");
            }
            if (cpu.program_counter == p.remove) { ++removals; removed.push_back(cpu.accumulator); }
            cpu.step_instruction();
        }
        check(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
              "Original Teddy selection did not preserve its caller ABI");
        check(native.value_or(0) == selected, "Native selected item differs from original C216DB");
        check(members == (native ? 1u : 0u) && removals == (native ? 0u : 2u),
              "Original selection continuation differs");
        check(native || removed == std::vector<unsigned>{16,17},
              "Original empty selection did not call absent Teddy removals in order");
        std::vector<unsigned> expected_reads;
        for (unsigned ordinal = 0; ordinal < party.controlled_count; ++ordinal) {
            const auto record = party.party_order[ordinal];
            const auto& values = party.character(record).items;
            for (unsigned i = 0; i < values.size(); ++i) {
                expected_reads.push_back(input.party + (record - 1) * input.party_stride + p.items + i);
                if (!values[i]) break;
            }
        }
        check(inventory_reads == expected_reads, "Original inventory read order or hole boundary differs");
        ++counts.cases; counts.instructions += steps; counts.no_item += !native;
        counts.member_calls += members; counts.remove_calls += removals;
        counts.inventory_reads += inventory_reads.size();
    }
};
void run(eb::GameVersion version) {
    Counts totals;
    State party(version);
    party.party_count = 2; party.controlled_count = 1; party.party_order = {1,6};
    party.controlled_order.fill(0xff); party.display_order.fill(0xff);
    // Three overlapping immutable tables cover all 256 EP values, though only
    // 253 nonzero item IDs are owned. Assign each pair to its first valid table.
    unsigned pair_count{};
    for (unsigned catalog = 0; catalog < 3; ++catalog) {
        Input input(version);
        for (unsigned id = 1; id <= 253; ++id) item(input,id,4,(id - 1 + catalog * 3) & 255);
        Original source(std::move(input));
        for (unsigned first = 0; first < 256; ++first) for (unsigned second = 0; second < 256; ++second) {
            unsigned owner{};
            for (; owner < 3; ++owner)
                if (((first - owner * 3) & 255) < 253 && ((second - owner * 3) & 255) < 253) break;
            if (owner != catalog) continue;
            party.character(1).items = {std::uint8_t(((first - catalog * 3) & 255) + 1),
                                        std::uint8_t(((second - catalog * 3) & 255) + 1)};
            source.compare(party); ++pair_count;
        }
        totals.add(source.counts);
    }
    check(pair_count == 65536, "Original EP-pair coverage is incomplete");
    Input input(version);
    item(input,1,4,1); item(input,2,4,1); item(input,3,3,0x80); item(input,253,4,0x80);
    Original source(std::move(input));
    party.party_count = 6;
    for (unsigned record = 1; record <= 6; ++record) {
        party.party_order = {std::uint8_t(record),6,1,2,3,4};
        for (unsigned position = 0; position < 14; ++position) {
            auto& inventory = party.character(record).items;
            inventory.fill(3); inventory[position] = 253;
            source.compare(party);
            for (unsigned hole = 0; hole < position; ++hole) {
                inventory[hole] = 0;
                source.compare(party);
                inventory[hole] = 3;
            }
            inventory = {};
        }
    }
    party.party_order = {6,5,4,3,2,1};
    for (unsigned id = 1; id <= 6; ++id) party.character(id).items = {std::uint8_t(id & 1 ? 1 : 2)};
    for (unsigned count = 0; count <= 6; ++count) { party.controlled_count = std::uint8_t(count); source.compare(party); }
    party.party_order = {1,6,1,6,1,6}; source.compare(party);
    party.character(1).items = {}; source.compare(party);
    for (unsigned id = 1; id <= 6; ++id) party.character(id).items = {0,255};
    source.compare(party);
    totals.add(source.counts);
    std::cout << (version == eb::GameVersion::US ? "US" : "JP")
              << " complete_returns=" << totals.cases << " exhaustive_ep_pairs=" << pair_count
              << " no_item_returns=" << totals.no_item << " membership_calls=" << totals.member_calls
              << " absent_remove_calls=" << totals.remove_calls << " inventory_byte_reads=" << totals.inventory_reads
              << " source_instructions=" << totals.instructions << '\n';
}
} // namespace
int main() {
    try { run(eb::GameVersion::US); run(eb::GameVersion::JP); }
    catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
