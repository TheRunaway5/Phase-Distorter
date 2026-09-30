// Domain differentials against complete frozen US/JP source routines.
// Provenance: ebsrc src/text/{get,set}_{working,argument,secondary}_memory.asm,
// get_active_window_address.asm, increment_secondary_memory.asm,
// transfer_{active_mem_storage,storage_mem_active}.asm, ccs/tree_1B.asm and
// ccs/copy_to_argmem.asm. Layout comes independently from include/structs.asm,
// include/constants/windows.asm, src/bankconfig/common/ram.asm and each linked
// region's operands. No production layout constants or semantic dispatcher
// serve as the expected-value oracle. Synthetic WRAM needs no authored assets.
// CPU scratch/flags, MULT168 hardware effects and retirement timing are outside
// this domain comparison; the frozen calls still execute the real MULT168.
#include "eb/game/dialogue/register_bank.hpp"
#include "eb/game/dialogue/control_flow.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <optional>
#include <span>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace {
using eb::game::dialogue::RegisterBank;
using eb::game::dialogue::RegisterMemory;
using Ram = std::array<std::uint8_t, 0x20000>;
using ByteWrite = std::pair<std::uint32_t, std::uint8_t>;
using MemoryAccess = std::tuple<bool, std::uint32_t, std::uint8_t>;
constexpr unsigned caller_frame = 0x1e00;
constexpr unsigned script_state = 0x7000;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
void write_value(Ram& bytes, unsigned offset, std::uint32_t value, unsigned size) {
    for (unsigned i = 0; i < size; ++i) bytes.at(offset + i) = std::uint8_t(value >> (8 * i));
}
std::uint32_t read_value(const Ram& bytes, unsigned offset, unsigned size) {
    std::uint32_t value = 0;
    for (unsigned i = 0; i < size; ++i) value |= std::uint32_t(bytes.at(offset + i)) << (8 * i);
    return value;
}

struct FixtureLayout {
    unsigned active_entry, working_get, argument_get, secondary_get;
    unsigned working_set, argument_set, secondary_set, increment, store, restore, tree, copy_argument;
    unsigned dummy, records, record_size, head, focus, open_table, focus_count;
    unsigned working_backup, argument_backup, secondary_backup, jump_continuation;
};
FixtureLayout fixture_layout(eb::GameVersion version) {
    if (version == eb::GameVersion::JP) return {
        0xc10504, 0xc1060d, 0xc105df, 0xc10603,
        0xc10660, 0xc1068c, 0xc10646, 0xc10631, 0xc10527, 0xc10583, 0xc17eab, 0xc149f3,
        0x8976, 0x89c2, 76, 0x8c22, 0x8c96, 0x8c26, 52,
        0x9a80, 0x9a84, 0x9a88, 0x4525};
    return {
        0xc10301, 0xc1040a, 0xc103dc, 0xc10400,
        0xc1045d, 0xc10489, 0xc10443, 0xc1042e, 0xc10324, 0xc10380, 0xc17c36, 0xc145ef,
        0x85fe, 0x8650, 82, 0x88e0, 0x8958, 0x88e4, 53,
        0x97cc, 0x97d0, 0x97d4, 0x4103};
}
struct Fixture {
    Ram bytes{};
    FixtureLayout layout;
    explicit Fixture(eb::GameVersion version) : layout(fixture_layout(version)) {
        bytes.fill(0xa7); // Neighbouring fields expose oversized publications.
        for (unsigned id = 0; id < layout.focus_count; ++id) word(layout.open_table + 2 * id, (id * 3 + 1) % 8);
        for (unsigned slot = 0; slot < 8; ++slot) seed_record(record(slot), 0x10203040u + slot * 0x01010101u);
        seed_record(layout.dummy, 0x81726354);
        select(1, 6);
        word(layout.head, 2); // Deliberately differs from both focus and slot.
        write_value(bytes, layout.working_backup, 0xdeadbeef, 4);
        write_value(bytes, layout.argument_backup, 0x80ff00a5, 4);
        bytes[layout.secondary_backup] = 0x9c;
        bytes[layout.secondary_backup + 1] = 0xe3; // ONGOSUB_OFFSET must survive.
        write_value(bytes, script_state, 0xf1c2fffd, 4);
    }
    void word(unsigned offset, unsigned value) { write_value(bytes, offset, value, 2); }
    unsigned record(unsigned slot) const { return layout.records + slot * layout.record_size; }
    unsigned active() const {
        if (read_value(bytes, layout.head, 2) == 0xffff) return layout.dummy;
        const auto id = read_value(bytes, layout.focus, 2);
        return record(read_value(bytes, layout.open_table + 2 * id, 2));
    }
    void select(unsigned id, unsigned slot) {
        word(layout.head, 0);
        word(layout.focus, id);
        word(layout.open_table + 2 * id, slot);
    }
    void seed_record(unsigned base, std::uint32_t seed) {
        write_value(bytes, base + 23, seed, 4);
        write_value(bytes, base + 27, seed ^ 0xef091234, 4);
        word(base + 31, seed ^ 0x81ff);
        write_value(bytes, base + 33, seed ^ 0x8000ffff, 4);
        write_value(bytes, base + 37, seed ^ 0xff007f00, 4);
        word(base + 41, seed ^ 0xdead);
    }
};

class BorrowedRegisters final : public RegisterMemory {
  public:
    explicit BorrowedRegisters(Ram& bytes) : bytes_(bytes) {}
    std::vector<ByteWrite> writes;
    mutable std::vector<MemoryAccess> accesses;
    std::uint8_t read_byte(std::uint32_t address) const override {
        require(address >= 0x7e0000 && address < 0x800000, "Register read outside authoritative WRAM");
        const auto value = bytes_.at(address - 0x7e0000);
        accesses.emplace_back(false, address, value);
        return value;
    }
    void write_byte(std::uint32_t address, std::uint8_t value) override {
        require(address >= 0x7e0000 && address < 0x800000, "Register write outside authoritative WRAM");
        writes.emplace_back(address, value);
        accesses.emplace_back(true, address, value);
        bytes_.at(address - 0x7e0000) = value;
    }
  private:
    Ram& bytes_;
};

enum class Operation {
    ActiveAddress, GetWorking, SetWorking, GetArgument, SetArgument,
    GetSecondary, SetSecondary, Increment, Store, Restore, Tree, CopyArgument
};
struct FrozenResult {
    std::uint32_t value;
    std::vector<ByteWrite> writes;
};
struct Oracle {
    eb::GameVersion version;
    std::unique_ptr<eb::SnesBus> bus;
    std::uint64_t steps{};
    unsigned comparisons{}, conditional_comparisons{}, captured_view_checks{};
    explicit Oracle(eb::GameVersion region)
        : version(region), bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000), region)) {}

    FrozenResult frozen(const Fixture& fixture, Operation operation, std::uint32_t argument, unsigned selector,
                        unsigned cursor_storage = script_state) {
        bus->work_ram = fixture.bytes;
        eb::MainCpu65816 cpu(*bus);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = caller_frame; cpu.stack_pointer = 0x1fff; cpu.data_bank = 0x7e;
        cpu.accumulator = std::uint16_t(argument); cpu.x_index = selector; cpu.y_index = 0x5a;
        unsigned entry = 0;
        bool return_long = false;
        const auto& l = fixture.layout;
        switch (operation) {
        case Operation::ActiveAddress: entry = l.active_entry; break;
        case Operation::GetWorking: entry = l.working_get; return_long = true; break;
        case Operation::SetWorking: entry = l.working_set; return_long = true; break;
        case Operation::GetArgument: entry = l.argument_get; return_long = true; break;
        case Operation::SetArgument: entry = l.argument_set; return_long = true; break;
        case Operation::GetSecondary: entry = l.secondary_get; break;
        case Operation::SetSecondary: entry = l.secondary_set; break;
        case Operation::Increment: entry = l.increment; break;
        case Operation::Store: entry = l.store; break;
        case Operation::Restore: entry = l.restore; break;
        case Operation::Tree: entry = l.tree; cpu.accumulator = cursor_storage; break;
        case Operation::CopyArgument: entry = l.copy_argument; cpu.accumulator = script_state; break;
        }
        // include/macros.asm: a 32-bit argument is at caller D+14; the return
        // slot is caller D+6. Near C functions save/restore D on the CPU stack.
        write_value(bus->work_ram, caller_frame + 14, argument, 4);
        cpu.program_counter = 0xc1ff00;
        cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        FrozenResult result{};
        cpu.observe_memory_write = [&](auto address, auto value) {
            if (address >= 0x7e0000 && address < 0x800000) result.writes.emplace_back(address, value);
        };
        unsigned count = 0;
        while (cpu.program_counter != 0xc1ff03 || cpu.stack_pointer != 0x1fff) {
            require(++count < 10000, "Frozen dialogue helper did not return");
            cpu.step_instruction();
        }
        require(cpu.direct_page == caller_frame, "Frozen helper failed to restore caller frame");
        steps += count;
        result.value = return_long ? read_value(bus->work_ram, caller_frame + 6, 4) : cpu.accumulator;
        return result;
    }

    void compare(Fixture& fixture, Operation operation, std::uint32_t argument = 0, unsigned selector = 0,
                 std::optional<std::uint32_t> expected = {}) {
        const auto reference = frozen(fixture, operation, argument, selector);
        auto native_bytes = fixture.bytes;
        BorrowedRegisters memory(native_bytes);
        RegisterBank bank(memory, version);
        std::optional<std::uint32_t> result;
        switch (operation) {
        case Operation::ActiveAddress: result = bank.active_window_address(); break;
        case Operation::GetWorking: result = bank.working(); break;
        case Operation::SetWorking: result = bank.set_working(argument); break;
        case Operation::GetArgument: result = bank.argument(); break;
        case Operation::SetArgument: result = bank.set_argument(argument); break;
        case Operation::GetSecondary: result = bank.secondary(); break;
        case Operation::SetSecondary: result = bank.set_secondary(std::uint16_t(argument)); break;
        case Operation::Increment: result = bank.increment_secondary(); break;
        case Operation::Store: bank.store_active(); break;
        case Operation::Restore: bank.restore_active(); break;
        case Operation::Tree:
            switch (selector) {
            case 0: bank.store_active(); break;
            case 1: bank.restore_active(); break;
            case 4: bank.swap_working_argument(); break;
            case 5: bank.backup(); break;
            case 6: bank.restore_backup(); break;
            default: throw std::runtime_error("Selector has no RegisterBank domain implementation");
            }
            result = 0;
            break;
        case Operation::CopyArgument:
            // Test composition of public domain operations, not a claimed
            // native CC_0D dispatcher. The source zero-extends the WORD input.
            bank.set_argument(selector ? bank.secondary() : bank.working());
            result = 0;
            break;
        }
        try {
            if (result) require(*result == reference.value, "Result differs from complete frozen helper");
            if (expected) require(result && *result == *expected, "Source-documented edge result changed");
            require(memory.writes == reference.writes, "Ordered domain write address, width or value differs");
            // Real CPU DP/stack scratch aliases WRAM. Everything outside the
            // reserved C/CPU stack must match, including untouched neighbours.
            require(std::equal(native_bytes.begin(), native_bytes.begin() + 0x1c00, bus->work_ram.begin()) &&
                    std::equal(native_bytes.begin() + 0x2000, native_bytes.end(), bus->work_ram.begin() + 0x2000),
                    "WRAM differs outside source ABI scratch");
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(version == eb::GameVersion::JP ? "JP" : "US") +
                " operation=" + std::to_string(static_cast<unsigned>(operation)) +
                " selector=" + std::to_string(selector) + " case=" + std::to_string(comparisons) +
                ": " + error.what());
        }
        fixture.bytes = native_bytes;
        ++comparisons;
    }
};

void active_windows(Oracle& oracle) {
    Fixture f(oracle.version);
    for (unsigned id = 0; id < f.layout.focus_count; ++id)
        for (unsigned slot = 0; slot < 8; ++slot) {
            f.select(id, slot);
            f.word(f.layout.head, (slot + 3) % 8);
            oracle.compare(f, Operation::ActiveAddress, 0, 0, f.record(slot));
            oracle.compare(f, Operation::GetWorking, 0, 0, read_value(f.bytes, f.record(slot) + 23, 4));
        }
    f.word(f.layout.head, 0xffff);
    f.word(f.layout.focus, 0xffff); // Must be ignored without an active window.
    oracle.compare(f, Operation::ActiveAddress, 0, 0, f.layout.dummy);
    oracle.compare(f, Operation::GetArgument, 0, 0, read_value(f.bytes, f.layout.dummy + 27, 4));
    oracle.compare(f, Operation::SetWorking, 0xdead0042, 0, 0xdead0042);
    oracle.compare(f, Operation::Tree, 0, 0);
    oracle.compare(f, Operation::Tree, 0, 1);
}

void field_widths_and_commands(Oracle& oracle) {
    constexpr std::array<std::uint32_t, 11> values{
        0, 1, 0x7fff, 0x8000, 0xffff, 0x10000, 0x7fffffff,
        0x80000000, 0xffff0000, 0xffffffff, 0xa5f03c69};
    for (const auto value : values) {
        Fixture f(oracle.version);
        oracle.compare(f, Operation::SetWorking, value, 0, value);
        oracle.compare(f, Operation::GetWorking, 0, 0, value);
        oracle.compare(f, Operation::SetArgument, ~value, 0, ~value);
        oracle.compare(f, Operation::GetArgument, 0, 0, ~value);
        oracle.compare(f, Operation::SetSecondary, value, 0, std::uint16_t(value));
        oracle.compare(f, Operation::GetSecondary, 0, 0, std::uint16_t(value));
        oracle.compare(f, Operation::Increment, 0, 0, std::uint16_t(value + 1));
        oracle.compare(f, Operation::Store);
        oracle.compare(f, Operation::SetWorking, value ^ 0x12345678);
        oracle.compare(f, Operation::SetArgument, value ^ 0xabcdef01);
        oracle.compare(f, Operation::SetSecondary, value ^ 0x5a5a);
        oracle.compare(f, Operation::Restore);
        oracle.compare(f, Operation::GetWorking, 0, 0, value);
        oracle.compare(f, Operation::GetArgument, 0, 0, ~value);
        oracle.compare(f, Operation::GetSecondary, 0, 0, std::uint16_t(value + 1));
        for (const auto selector : {0u, 4u, 1u, 5u, 6u}) oracle.compare(f, Operation::Tree, 0, selector);
        require(read_value(f.bytes, f.active() + 31, 2) == std::uint8_t(value + 1),
                "Global restore must zero-extend the secondary backup byte");
        require(f.bytes[f.layout.secondary_backup + 1] == 0xe3, "Backup overwrote ONGOSUB_OFFSET");
        for (const auto selector : {0u, 1u, 2u, 0x8000u, 0xffffu}) {
            oracle.compare(f, Operation::CopyArgument, 0, selector);
            require(read_value(f.bytes, f.active() + 27, 4) ==
                        (selector ? read_value(f.bytes, f.active() + 31, 2) : value),
                    "CC_0D composed source selection/zero extension differs");
        }
    }
}

std::uint32_t next_random(std::uint32_t& state) {
    state ^= state << 13; state ^= state >> 17; state ^= state << 5; return state;
}
void arbitrary_values(Oracle& oracle) {
    std::uint32_t random = 0x6c42d581;
    for (unsigned trial = 0; trial < 96; ++trial) {
        Fixture f(oracle.version);
        const unsigned id = next_random(random) % f.layout.focus_count;
        const unsigned slot = next_random(random) % 8;
        f.select(id, slot);
        if (!(trial % 9)) f.word(f.layout.head, 0xffff);
        const auto working = next_random(random), argument = next_random(random);
        const auto secondary = std::uint16_t(next_random(random));
        write_value(f.bytes, f.active() + 23, working, 4);
        write_value(f.bytes, f.active() + 27, argument, 4);
        f.word(f.active() + 31, secondary);
        oracle.compare(f, Operation::GetWorking, 0, 0, working);
        oracle.compare(f, Operation::GetArgument, 0, 0, argument);
        oracle.compare(f, Operation::GetSecondary, 0, 0, secondary);
        oracle.compare(f, Operation::Tree, 0, 0);
        oracle.compare(f, Operation::Tree, 0, 4);
        oracle.compare(f, Operation::Tree, 0, 5);
        // Backups are global: restore in a different window, then restore that
        // window's independent storage. Retain complete 32-bit random values.
        f.select((id + 1) % f.layout.focus_count, (slot + 1) % 8);
        oracle.compare(f, Operation::Tree, 0, 6);
        oracle.compare(f, Operation::GetWorking, 0, 0, argument);
        oracle.compare(f, Operation::GetArgument, 0, 0, working);
        oracle.compare(f, Operation::GetSecondary, 0, 0, std::uint8_t(secondary));
        oracle.compare(f, Operation::Tree, 0, 1);
        oracle.compare(f, Operation::SetWorking, next_random(random));
        oracle.compare(f, Operation::SetArgument, next_random(random));
        oracle.compare(f, Operation::SetSecondary, next_random(random));
        oracle.compare(f, Operation::Increment);
    }
}

void captured_window_views(Oracle& oracle) {
    Fixture f(oracle.version);
    f.select(1, 2);
    BorrowedRegisters memory(f.bytes);
    RegisterBank bank(memory, oracle.version);
    const auto captured = bank.active_window_address();
    auto window = bank.window_at(captured);
    f.select(3, 7);
    // A checkpoint retains only the address, not old values or current focus.
    write_value(f.bytes, captured + 23, 0xfedc0123, 4);
    require(window.working() == 0xfedc0123, "Captured view retained a stale value");
    require(bank.working() == read_value(f.bytes, f.record(7) + 23, 4), "Live bank retained stale focus");
    const auto other_before = read_value(f.bytes, f.record(7) + 27, 4);
    window.set_argument(0x87654321);
    require(read_value(f.bytes, captured + 27, 4) == 0x87654321 &&
            read_value(f.bytes, f.record(7) + 27, 4) == other_before,
            "Captured setter followed later focus instead of its resolved record");
    require(memory.writes == std::vector<ByteWrite>{{0x7e0000 + captured + 27, 0x21},
            {0x7e0000 + captured + 28, 0x43}, {0x7e0000 + captured + 29, 0x65},
            {0x7e0000 + captured + 30, 0x87}}, "Captured setter publication width/order differs");
    oracle.captured_view_checks += 4;
}

void conditional_commands(Oracle& oracle) {
    using eb::game::dialogue::CommandContinuation;
    using eb::game::dialogue::WorkingBranch;
    // The complete reference CC reads working memory through its original
    // helper. Domain control_flow receives the same authoritative value and
    // owns the pointer update/continuation decision, without a test-local
    // substitute for its algorithm. CPU A receives CC_0A's regional low word.
    for (unsigned selector : {2u, 3u})
        for (std::uint32_t value : {0u, 1u, 0x10000u, 0x80000000u, 0xffffffffu})
            for (std::uint32_t pointer : {0x00c10000u, 0x00c1fffcu, 0xa5c1fffdu, 0xffffffffu})
              for (unsigned cursor_storage : {script_state, 0xfffeu}) {
                Fixture f(oracle.version);
                write_value(f.bytes, f.active() + 23, value, 4);
                write_value(f.bytes, cursor_storage, pointer, 4);
                const auto result = oracle.frozen(f, Operation::Tree, 0, selector, cursor_storage);
                auto native_bytes = f.bytes;
                BorrowedRegisters memory(native_bytes);
                RegisterBank bank(memory, oracle.version);
                const auto working = bank.working();
                memory.accesses.clear();
                const auto continuation = eb::game::dialogue::conditional_jump(memory,
                    selector == 2 ? WorkingBranch::Zero : WorkingBranch::Nonzero,
                    working, std::uint16_t(cursor_storage));
                const auto native_result = continuation == CommandContinuation::ReadJumpDestination
                    ? f.layout.jump_continuation : 0;
                require(native_result == result.value, "Native conditional continuation differs from frozen CC_1B");
                require(memory.writes == result.writes, "Native conditional writes differ from frozen CC_1B");
                const bool take_jump = selector == 2 ? value == 0 : value != 0;
                require(result.value == (take_jump ? f.layout.jump_continuation : 0),
                        "CC_1B conditional continuation differs from source");
                std::vector<MemoryAccess> expected_accesses;
                if (!take_jump) {
                    const auto advanced = (pointer & 0xffff0000u) | std::uint16_t(pointer + 4);
                    for (unsigned i = 0; i < 4; ++i)
                        expected_accesses.emplace_back(false, 0x7e0000 + cursor_storage + i,
                                                       std::uint8_t(pointer >> (8 * i)));
                    for (unsigned i = 0; i < 4; ++i)
                        expected_accesses.emplace_back(true, 0x7e0000 + cursor_storage + i,
                                                       std::uint8_t(advanced >> (8 * i)));
                }
                require(memory.accesses == expected_accesses,
                        "Conditional skip read/write order changed, or taken branch accessed the cursor");
                require(std::equal(native_bytes.begin(), native_bytes.begin() + 0x1c00, oracle.bus->work_ram.begin()) &&
                        std::equal(native_bytes.begin() + 0x2000, native_bytes.end(), oracle.bus->work_ram.begin() + 0x2000),
                        "Conditional mutated state outside its script pointer");
                ++oracle.conditional_comparisons;
            }
}
} // namespace

int main() {
    try {
        std::uint64_t steps = 0;
        unsigned comparisons = 0, conditionals = 0, captured = 0;
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            Oracle oracle(version);
            active_windows(oracle);
            field_widths_and_commands(oracle);
            arbitrary_values(oracle);
            captured_window_views(oracle);
            conditional_commands(oracle);
            steps += oracle.steps;
            comparisons += oracle.comparisons;
            conditionals += oracle.conditional_comparisons;
            captured += oracle.captured_view_checks;
        }
        std::cout << "Dialogue registers: " << comparisons << " US/JP frozen/domain comparisons, "
                  << captured << " captured-view checks, " << conditionals
                  << " whole-CC conditional comparisons; " << steps << " source instructions\n";
    } catch (const std::exception& error) {
        std::cerr << "Dialogue register test failure: " << error.what() << '\n';
        return 1;
    }
}
