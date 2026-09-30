// Whole frozen-source differentials for native battle targeting domain rules.
// Independent provenance: src/battle/{target_*,remove_*target*,is_char_targetted,
// check_if_valid_target,random_targetting}.asm; unknown/C2/C24703.asm;
// include/structs.asm:battler, constants/actions.asm, and linked US/JP symbols.
// The oracle executes complete Legacy routines, including real MULT168/RAND.
// Domain assertions compare ordered mask writes, results, and all WRAM outside
// explicitly excluded compiler stack and external RNG state. CPU ABI/clocks and
// native admission are tested separately by the production adapter fixtures.
#include "eb/game/enemies/battle/targeting.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <map>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace {
using eb::game::enemies::battle::Targeting;
using eb::game::enemies::battle::TargetingMemory;
using eb::game::enemies::battle::TargetGroup;
using Ram = std::array<std::uint8_t, 0x20000>;
using Write = std::pair<std::uint32_t, std::uint8_t>;
using Access = std::tuple<bool, std::uint32_t, std::uint8_t>;
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
void put(Ram& bytes, unsigned address, std::uint32_t value, unsigned size) {
    for (unsigned i = 0; i < size; ++i) bytes.at(address + i) = std::uint8_t(value >> (8 * i));
}
std::uint32_t get(const Ram& bytes, unsigned address, unsigned size) {
    std::uint32_t result = 0;
    for (unsigned i = 0; i < size; ++i) result |= std::uint32_t(bytes.at(address + i)) << (8 * i);
    return result;
}
enum class Operation { All, Allies, Enemies, Row, Add, Remove, Contains, RemoveNpcs,
                       RemoveDead, RemoveUnavailable, Valid, Random, Resolve };
struct Layout {
    unsigned battlers, mask, attacker, front_count, back_count, front, back, powers, dead_actions, after_draw;
    std::array<unsigned, 13> entries;
};
Layout layout(eb::GameVersion version) {
    if (version == eb::GameVersion::JP) return {
        0xa1ae,0xab6e,0xab72,0xaf2b,0xaf2d,0xaf4f,0xaf57,0xc476e6,0xc474f0,0xc26e78,
        {0xc26d3f,0xc26b3a,0xc26bc1,0xc26c43,0xc26f1b,0xc26fc8,0xc26f68,0xc26db6,
         0xc27023,0xc24023,0xc47662,0xc26e37,0xc245d0}};
    return {
        0x9fac,0xa96c,0xa970,0xad56,0xad58,0xad7a,0xad82,0xc4a279,0xc4a08d,0xc26f39,
        {0xc26e00,0xc26bfb,0xc26c82,0xc26d04,0xc26fdc,0xc27089,0xc27029,0xc26e77,
         0xc270e4,0xc2416f,0xc4a1f5,0xc26ef8,0xc24703}};
}
struct Fixture {
    Ram bytes{};
    Layout l;
    std::map<unsigned, std::uint8_t> rom;
    explicit Fixture(eb::GameVersion version) : l(layout(version)) {
        bytes.fill(0xa7);
        for (unsigned i = 0; i < 32; ++i) {
            rom_value(l.powers + i * 4, std::uint32_t(1) << i, 4);
            seed(i, 1, i < 8 ? 0 : 1, 0, i & 1, 0);
            word(record(i) + 4, 4);
            bytes[record(i) + 9] = 20;
            bytes[record(i) + 10] = 1;
        }
        // Synthetic allow-list, intentionally not copied from retail content.
        rom_value(l.dead_actions, 39, 2);
        rom_value(l.dead_actions + 2, 0x1234, 2);
        rom_value(l.dead_actions + 4, 0, 2);
        word(l.attacker, record(0));
        word(l.front_count, 4); word(l.back_count, 4);
        for (unsigned i = 0; i < 8; ++i) {
            bytes[l.front + i] = std::uint8_t(8 + i);
            bytes[l.back + i] = std::uint8_t(24 + i);
        }
        put(bytes, l.mask, 0xa55a0180, 4);
        word(0x24, 0x1234); word(0x26, 0x5678);
    }
    unsigned record(unsigned slot) const { return l.battlers + slot * 78; }
    void word(unsigned address, unsigned value) { put(bytes, address, value, 2); }
    void rom_value(unsigned address, std::uint32_t value, unsigned size) {
        for (unsigned i = 0; i < size; ++i) rom[(address + i) & 0x3fffff] = std::uint8_t(value >> (8 * i));
    }
    std::uint8_t rom_byte(unsigned address) const {
        const auto found = rom.find(address & 0x3fffff);
        return found == rom.end() ? 0 : found->second;
    }
    void seed(unsigned slot, unsigned conscious, unsigned side, unsigned npc, unsigned row, unsigned status) {
        const auto at = record(slot);
        bytes[at + 12] = conscious; bytes[at + 14] = side; bytes[at + 15] = npc;
        bytes[at + 16] = row; bytes[at + 29] = status;
    }
    void mixed() {
        for (unsigned i = 0; i < 32; ++i)
            seed(i, i % 5 ? (i & 1 ? 1 : 0xff) : 0, i < 8 ? 0 : 1,
                 i % 7 == 0 ? 5 : 0, i % 3, i % 4);
    }
};
struct Borrowed final : TargetingMemory {
    Ram& bytes;
    const Fixture& fixture;
    std::vector<Write> writes;
    mutable std::vector<Access> accesses;
    Borrowed(Ram& ram, const Fixture& source) : bytes(ram), fixture(source) {}
    std::uint8_t read_byte(std::uint32_t address) const override {
        const auto value = address >= 0x7e0000 && address < 0x800000
            ? bytes.at(address - 0x7e0000) : fixture.rom_byte(address);
        accesses.emplace_back(false, address, value);
        return value;
    }
    void write_byte(std::uint32_t address, std::uint8_t value) override {
        require(address >= 0x7e0000 && address < 0x800000, "Domain wrote outside WRAM");
        writes.emplace_back(address, value);
        accesses.emplace_back(true, address, value);
        bytes.at(address - 0x7e0000) = value;
    }
};
struct Frozen {
    std::uint32_t value{};
    std::optional<std::uint8_t> draw;
    std::vector<Write> writes;
    std::vector<Write> rng_writes;
};
struct Oracle {
    eb::GameVersion version;
    std::unique_ptr<eb::SnesBus> bus;
    unsigned comparisons{};
    std::uint64_t source_steps{}, writes{};
    explicit Oracle(eb::GameVersion region)
        : version(region), bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x400000), region)) {}
    Frozen frozen(const Fixture& f, Operation operation, unsigned argument) {
        bus->work_ram = f.bytes;
        bus->debug_read_rom = [&f](unsigned at, std::uint8_t) { return f.rom_byte(at); };
        eb::MainCpu65816 cpu(*bus);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff; cpu.data_bank = 0x7e;
        cpu.accumulator = argument; cpu.x_index = 0x78a5; cpu.y_index = 0x8192;
        const auto entry = f.l.entries[unsigned(operation)];
        const bool near = operation == Operation::RemoveDead;
        cpu.program_counter = (entry & 0xff0000) | 0xff00;
        const auto finish = cpu.program_counter + (near ? 3 : 4);
        if (operation == Operation::Random) put(bus->work_ram, 0x1e0e, argument, 4);
        if (near) cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        else cpu.execute_instruction<0x22>(entry, 4);
        Frozen result;
        cpu.observe_memory_write = [&](unsigned address, std::uint8_t value) {
            // Domain publications use bank7e. CPU stack/scratch are bank0.
            // RAND writes its two absolute state words under DB=$7e; RNG is
            // external to random_target(mask, captured_draw), not a mask write.
            if (operation == Operation::Random && address >= 0x7e0024 && address < 0x7e0028)
                result.rng_writes.emplace_back(address, value);
            else if (address >= 0x7e0000 && address < 0x800000) result.writes.emplace_back(address, value);
        };
        for (unsigned steps = 0;; ++steps) {
            if (cpu.program_counter == finish && cpu.stack_pointer == 0x1fff) break;
            require(steps < 200000, "Frozen targeting helper did not return");
            if (operation == Operation::Random && cpu.program_counter == f.l.after_draw) {
                require(!result.draw, "Random mask helper drew more than once");
                result.draw = std::uint8_t(cpu.accumulator);
            }
            cpu.step_instruction();
            ++source_steps;
        }
        require(cpu.direct_page == 0x1e00, "Frozen targeting helper failed to restore C frame");
        result.value = operation == Operation::Random ? get(bus->work_ram, 0x1e06, 4) : cpu.accumulator;
        return result;
    }
    Frozen compare(const Fixture& f, Operation op, unsigned argument = 0,
                   std::optional<std::uint32_t> expected_mask = {},
                   std::optional<std::uint32_t> expected_value = {}) {
        const auto reference = frozen(f, op, argument);
        auto bytes = f.bytes;
        Borrowed memory(bytes, f);
        Targeting targets(memory, version);
        std::optional<std::uint32_t> value;
        switch (op) {
        case Operation::All: targets.target_all(); break;
        case Operation::Allies: targets.target_allies(); break;
        case Operation::Enemies: targets.target_enemies(); break;
        case Operation::Row: targets.target_row(argument); break;
        case Operation::Add: targets.add_target(argument); break;
        case Operation::Remove: targets.remove_target(argument); break;
        case Operation::Contains: value = targets.is_targeted(argument); break;
        case Operation::RemoveNpcs: targets.remove_npcs(); break;
        case Operation::RemoveDead: targets.remove_dead(); break;
        case Operation::RemoveUnavailable: targets.remove_unavailable(); break;
        case Operation::Valid: value = targets.valid_target(argument); break;
        case Operation::Random:
            require(reference.draw.has_value() == (argument != 0), "Empty mask/RNG call cadence changed");
            require(reference.rng_writes.size() == (argument ? 4u : 0u), "Real RAND state publication cadence changed");
            value = targets.random_target(argument, reference.draw.value_or(0));
            break;
        case Operation::Resolve: targets.resolve_action_targets(argument); break;
        }
        try {
            if (value) require(*value == reference.value, "Domain result differs from complete source routine");
            if (expected_value) require(value && *value == *expected_value, "Source edge result differs");
            if (expected_mask) require(get(bytes, f.l.mask, 4) == *expected_mask, "Source edge mask differs");
            require(memory.writes == reference.writes, "Ordered target-mask publications differ");
            for (unsigned at = 0; at < bytes.size(); ++at) {
                if (at >= 0x1c00 && at < 0x2000) continue; // source C and CPU stack only
                if (op == Operation::Random && at >= 0x24 && at < 0x28) continue; // external RAND state
                require(bytes[at] == bus->work_ram[at], "WRAM outside excluded source scratch differs");
            }
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(version == eb::GameVersion::US ? "US" : "JP") +
                " op=" + std::to_string(unsigned(op)) + " argument=" + std::to_string(argument) +
                " case=" + std::to_string(comparisons) + ": " + error.what());
        }
        ++comparisons; writes += memory.writes.size();
        return reference;
    }
};

void mask_bits(Oracle& oracle) {
    Fixture f(oracle.version);
    for (unsigned bit = 0; bit < 32; ++bit)
        for (auto initial : {0u, 0xffffffffu, 0x80000001u, 0xa55a0180u}) {
            put(f.bytes, f.l.mask, initial, 4);
            const auto mask = std::uint32_t(1) << bit;
            oracle.compare(f, Operation::Add, bit, initial | mask);
            oracle.compare(f, Operation::Remove, bit, initial & ~mask);
            oracle.compare(f, Operation::Contains, bit, initial, (initial & mask) != 0);
        }
    // Noncanonical source table offsets remain16-bit, and lookups capture
    // the high word before low word. They are not undefined C++ shifts.
    for (unsigned index : {32u, 0x3fffu, 0x4000u, 0xffffu}) {
        const auto at = (f.l.powers & 0xff0000) | std::uint16_t(f.l.powers + std::uint16_t(index << 2));
        f.rom_value(at, 0xf00d0061, 4);
        put(f.bytes, f.l.mask, 0x13579bdf, 4);
        oracle.compare(f, Operation::Add, index, 0x13579bdfu | 0xf00d0061u);
        oracle.compare(f, Operation::Remove, index, 0x13579bdfu & ~0xf00d0061u);
    }
}
void candidate_rules(Oracle& oracle) {
    Fixture f(oracle.version);
    for (unsigned slot = 0; slot < 32; ++slot)
        for (unsigned conscious : {0u, 1u, 0xffu})
            for (unsigned status : {0u, 1u, 2u, 3u, 0xffu})
                for (unsigned npc : {0u, 7u}) {
                    f.seed(slot, conscious, 1, npc, 1, status);
                    oracle.compare(f, Operation::Valid, slot, {}, conscious && !npc && status != 1 && status != 2);
                }
    // MULT168 truncates its product to sixteen bits, but the subsequent
    // absolute-indexed table access carries into WRAM bank $7f. Keep the
    // incorrectly wrapped $7e alias contradictory so truncation fails red.
    for (unsigned index : {400u, 0x3fffu, 0xffffu}) {
        const auto record = f.l.battlers + std::uint16_t(index * 78);
        require(record >= 0x10000, "Crossed-bank fixture did not cross WRAM bank");
        const auto alias = record & 0xffff;
        for (unsigned state = 0; state < 5; ++state) {
            f.bytes[alias + 12] = state ? 1 : 0;
            f.bytes[alias + 15] = 0;
            f.bytes[alias + 29] = 0;
            f.bytes[record + 12] = state == 1 ? 0 : 1;
            f.bytes[record + 15] = state == 2 ? 7 : 0;
            f.bytes[record + 29] = state == 3 ? 1 : state == 4 ? 2 : 0;
            f.bytes[record + 13] = f.bytes[record + 30] = 0xff;
            oracle.compare(f, Operation::Valid, index, {}, state == 0);
        }
    }
    for (unsigned variant = 0; variant < 12; ++variant) {
        f.mixed();
        for (unsigned slot = 0; slot < 32; ++slot) {
            if (variant == 0) f.seed(slot, 0, 0, 0, 0, 0);
            else if (variant == 1) f.seed(slot, 1, 0, 0, 0, 0);
            else if (variant == 2) f.seed(slot, 1, 1, 0, 1, 0);
            else if (variant > 3) f.seed(slot, (slot + variant) % 3, (slot + variant) % 4,
                                         (slot * variant) % 5, slot % 4, (slot + variant) % 5);
        }
        for (auto op : {Operation::All, Operation::Allies, Operation::Enemies, Operation::RemoveNpcs,
                        Operation::RemoveDead, Operation::RemoveUnavailable})
            for (auto mask : {0u, 0xffffffffu, 0x80000001u, 0x55aaaa55u}) {
                put(f.bytes, f.l.mask, mask, 4);
                oracle.compare(f, op);
            }
        for (unsigned row : {0u, 1u, 2u, 3u, 0xffffu}) oracle.compare(f, Operation::Row, row);
    }
}
void action_resolution(Oracle& oracle) {
    Fixture f(oracle.version);
    const auto captured = f.record(3), live = f.record(6);
    f.word(f.l.attacker, live); // Deliberately not the passed actor.
    for (unsigned selector : {0u, 1u, 2u, 4u, 17u, 18u, 20u, 0xffu})
        for (unsigned action : {4u, 39u, 42u, 43u, 46u, 47u})
            for (unsigned side : {0u, 1u})
                for (bool live_can_target_dead : {false, true}) {
                    f.mixed();
                    f.bytes[captured + 9] = selector;
                    f.bytes[captured + 10] = selector == 18 ? 2 : 5;
                    f.bytes[captured + 14] = side;
                    f.word(captured + 4, action);
                    f.word(live + 4, live_can_target_dead ? 0x1234 : 4);
                    oracle.compare(f, Operation::Resolve, captured);
                }
    for (unsigned slot = 0; slot < 32; ++slot) {
        f.bytes[captured + 9] = 1; f.bytes[captured + 10] = slot + 1;
        oracle.compare(f, Operation::Resolve, captured, std::uint32_t(1) << slot);
    }
    for (unsigned target : {0u, 255u}) {
        const auto index = std::uint16_t(target - 1);
        const auto table_address = (f.l.powers & 0xff0000) |
            std::uint16_t(f.l.powers + std::uint16_t(index << 2));
        f.rom_value(table_address, 0xc0010080, 4);
        f.bytes[captured + 10] = target;
        oracle.compare(f, Operation::Resolve, captured, 0xc0010080);
    }
    f.bytes[captured + 9] = 17;
    f.word(captured + 4, 4);
    for (unsigned target = 1; target <= 8; ++target) {
        f.bytes[captured + 10] = target;
        const auto slot = target <= 4 ? 7 + target : 19 + target;
        oracle.compare(f, Operation::Resolve, captured, std::uint32_t(1) << slot);
    }
    for (unsigned front_count : {0u, 1u, 8u}) {
        f.word(f.l.front_count, front_count);
        f.bytes[captured + 10] = 1;
        oracle.compare(f, Operation::Resolve, captured, std::uint32_t(1) << (front_count ? 8 : 24));
    }
    f.word(f.l.front_count, 4);
    f.bytes[captured + 9] = 18;
    for (unsigned row : {0u, 1u, 2u, 3u, 255u}) {
        f.bytes[captured + 10] = row;
        oracle.compare(f, Operation::Resolve, captured);
    }
    f.bytes[captured + 9] = 17;
    // Healing Omega deliberately overrides the selected living enemy with
    // the first conscious/unconscious-status record in slots8..31, no side test.
    f.word(captured + 4, 39); f.bytes[captured + 10] = 1;
    for (unsigned revived : {8u, 17u, 31u}) {
        for (unsigned i = 0; i < 32; ++i) f.seed(i, 1, 1, 0, 0, 0);
        f.seed(revived, 1, 0, 7, 0, 1);
        oracle.compare(f, Operation::Resolve, captured, std::uint32_t(1) << revived);
    }
    f.seed(31, 0, 1, 0, 0, 1);
    oracle.compare(f, Operation::Resolve, captured, std::uint32_t(1) << 8);
    // Group resolution clears once itself and once in TARGET_ALLIES; even
    // an already-zero publication must remain in the observed write sequence.
    f.bytes[captured + 9] = 4; f.word(captured + 4, 42);
    const auto result = oracle.compare(f, Operation::Resolve, captured);
    require(result.writes.size() >= 8 &&
            std::all_of(result.writes.begin(), result.writes.begin() + 8,
                        [](const auto& write) { return write.second == 0; }),
            "Resolver lost its two initial clear publications");
}
void random_selection(Oracle& oracle) {
    Fixture f(oracle.version);
    oracle.compare(f, Operation::Random, 0, {}, 0);
    std::array<bool, 32> ordinals{};
    for (unsigned seed = 0; seed < 1024 && std::count(ordinals.begin(), ordinals.end(), true) < 32; ++seed) {
        f.word(0x24, seed * 197 + 0x1234); f.word(0x26, seed * 131 + 0x5678);
        const auto result = oracle.compare(f, Operation::Random, 0xffffffff);
        const auto ordinal = *result.draw & 31;
        ordinals[ordinal] = true;
        const auto expected = std::uint32_t(1) << ((ordinal + 1) & 31);
        require(result.value == expected, "All-target cyclic draw order changed");
    }
    require(std::all_of(ordinals.begin(), ordinals.end(), [](bool seen) { return seen; }),
            "Whole-source RNG fixtures did not cover all32 effective draws");
    for (unsigned bit = 0; bit < 32; ++bit) {
        const auto mask = std::uint32_t(1) << bit;
        for (unsigned seed : {0u, 1u, 0xffffu}) {
            f.word(0x24, seed); f.word(0x26, seed ^ 0xa781);
            oracle.compare(f, Operation::Random, mask, {}, mask);
        }
    }
    for (unsigned seed = 0; seed < 32; ++seed) {
        f.word(0x24, seed * 911); f.word(0x26, seed * 17 + 1);
        for (auto mask : {0x80000001u, 0x80010002u, 0x00f00003u, 0x55555555u})
            oracle.compare(f, Operation::Random, mask);
    }
    // Exhaust upper draw bits independently of the real-RNG seed search.
    auto bytes = f.bytes;
    Borrowed memory(bytes, f); Targeting targets(memory, oracle.version);
    std::array<unsigned, 3> counts{};
    constexpr std::array bits{2u, 16u, 0x80000000u};
    for (unsigned draw = 0; draw < 256; ++draw) {
        const auto result = targets.random_target(bits[0] | bits[1] | bits[2], draw);
        const auto found = std::find(bits.begin(), bits.end(), result);
        require(found != bits.end(), "Random selection left its candidate mask");
        ++counts[found - bits.begin()];
        require(result == bits[(draw & 31) % 3], "Random draw bias/order changed");
    }
    require(counts == std::array<unsigned, 3>{88, 88, 80}, "Original three-target bias was uniformized");
}
void captured_primitives(eb::GameVersion version) {
    Fixture f(version);
    auto bytes = f.bytes;
    Borrowed memory(bytes, f); Targeting targets(memory, version);
    const auto record = std::uint16_t(f.record(31));
    require(targets.valid_battler(record) && targets.candidate_matches_at(record, TargetGroup::Enemies),
            "Captured battler address did not resolve the last regional record");
    bytes[f.record(31) + 15] = 9;
    require(!targets.valid_battler(record) && targets.npc_candidate_at(record) &&
            targets.candidate_matches_at(record, TargetGroup::Allies),
            "Borrowed candidate predicates cached old record state");
    const auto captured_mask = 0x01020304u, captured_bits = 0x80000001u;
    put(bytes, f.l.mask, 0xdeadbeef, 4);
    memory.accesses.clear();
    targets.set_mask(Targeting::include_mask(captured_mask, captured_bits));
    require(memory.accesses.size() == 4 &&
            std::all_of(memory.accesses.begin(), memory.accesses.end(), [](const auto& access) { return std::get<0>(access); }) &&
            get(bytes, f.l.mask, 4) == 0x81020305,
            "Captured mask publication reread current mask or changed width/order");
    require(Targeting::intersect_mask(0xffffffff, ~captured_bits) == 0x7ffffffe &&
            Targeting::contains_mask(captured_mask, 0x100) && !Targeting::contains_mask(captured_mask, 0x80000000),
            "Captured mask combination/test differs");
    memory.accesses.clear();
    targets.target_bit(31);
    const std::array<unsigned, 4> order{2,3,0,1};
    require(memory.accesses.size() == order.size(), "Bit-table lookup read incorrect width");
    for (unsigned i = 0; i < order.size(); ++i)
        require(!std::get<0>(memory.accesses[i]) && std::get<1>(memory.accesses[i]) == f.l.powers + 31 * 4 + order[i],
                "Bit-table high-before-low capture order changed");
    memory.writes.clear();
    targets.target_all();
    bytes[f.l.mask] ^= 1;
    require(targets.mask() != 0xffffffff, "Target mask was cached instead of borrowed");
}
}
int main() {
    try {
        unsigned cases = 0; std::uint64_t steps = 0, writes = 0;
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            Oracle oracle(version);
            mask_bits(oracle); candidate_rules(oracle); action_resolution(oracle); random_selection(oracle);
            captured_primitives(version);
            cases += oracle.comparisons; steps += oracle.source_steps; writes += oracle.writes;
        }
        std::cout << "PASS " << cases << " whole-source battle-targeting comparisons; " << steps
                  << " frozen instructions, " << writes << " ordered mask bytes; US/JP results and domain WRAM match\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
