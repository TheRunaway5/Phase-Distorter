// Independent domain comparisons with complete frozen ENQUEUE_CREDITS_DMA
// calls and the original credits scroll-tail slice, for US and JP. No native
// adapter/timing table or production layout is used as the expected-value oracle.
// CPU scratch, flags and retirement timing remain outside this domain fixture;
// all domain publications and all WRAM outside source stack scratch are checked.
#include "eb/game/cutscenes/credits_state.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace {
using eb::game::cutscenes::CreditsMemory;
using eb::game::cutscenes::CreditsState;
using eb::game::cutscenes::CreditsTransfer;
using Ram = std::array<std::uint8_t, 0x20000>;
using Write = std::pair<std::uint32_t, std::uint8_t>;
using Access = std::tuple<bool, std::uint32_t, std::uint8_t>;
constexpr std::uint32_t wram = 0x7e0000;
void require(bool condition, const char* message) { if (!condition) throw std::runtime_error(message); }
void put(Ram& ram, unsigned at, std::uint32_t value, unsigned width) {
    for (unsigned i = 0; i < width; ++i) ram.at(at + i) = std::uint8_t(value >> (i * 8));
}
std::uint32_t get(const Ram& ram, unsigned at, unsigned width) {
    std::uint32_t value = 0;
    for (unsigned i = 0; i < width; ++i) value |= std::uint32_t(ram.at(at + i)) << (i * 8);
    return value;
}
void append(std::vector<Write>& writes, unsigned address, std::uint32_t value, unsigned width) {
    for (unsigned i = 0; i < width; ++i) writes.emplace_back(address + i, std::uint8_t(value >> (i * 8)));
}
struct FixtureLayout {
    unsigned enqueue, scroll_start, scroll_end;
    unsigned buffer, head, tail, scroll;
};
FixtureLayout fixture_layout(eb::GameVersion version) {
    // Independently verified original linked US/JP symbols and frozen operands:
    // enqueue_credits_dma.asm and credits_scroll_frame{,-jp}.asm, before the
    // following JSR UNKNOWN_C0AD9F writes the two-byte BG3VOFS hardware latch.
    if (version == eb::GameVersion::JP)
        return {0xc4bffe, 0xc0ff3e, 0xc0ff61, 0x54dc, 0xb6be, 0xb6bc, 0xb6b4};
    return {0xc4efc4, 0xc0f89a, 0xc0f8bd, 0x5156, 0xb4f5, 0xb4f3, 0xb4eb};
}
class BorrowedCredits final : public CreditsMemory {
  public:
    explicit BorrowedCredits(Ram& bytes) : bytes_(bytes) {}
    std::vector<Write> writes;
    mutable std::vector<Access> accesses;
    std::uint8_t read_byte(std::uint32_t address) const override {
        require(address >= wram && address < 0x800000, "Read outside authoritative WRAM");
        const auto value = bytes_.at(address - wram);
        accesses.emplace_back(false, address, value);
        return value;
    }
    void write_byte(std::uint32_t address, std::uint8_t value) override {
        require(address >= wram && address < 0x800000, "Write outside authoritative WRAM");
        accesses.emplace_back(true, address, value);
        writes.emplace_back(address, value);
        bytes_.at(address - wram) = value;
    }
  private:
    Ram& bytes_;
};
struct FrozenResult {
    std::vector<Write> writes;
    unsigned steps, accumulator;
};
struct Oracle {
    eb::GameVersion version;
    FixtureLayout layout;
    std::unique_ptr<eb::SnesBus> bus;
    std::uint64_t source_steps{};
    unsigned queue_cases{}, scroll_cases{}, captured_cases{};
    explicit Oracle(eb::GameVersion region) : version(region), layout(fixture_layout(region)),
        bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000), region)) {}

    void setup(eb::MainCpu65816& cpu, const Ram& initial, unsigned direct_page) {
        bus->work_ram = initial;
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable | eb::MainCpu65816::Overflow | eb::MainCpu65816::Carry;
        cpu.data_bank = 0x7e;
        cpu.direct_page = std::uint16_t(direct_page);
        cpu.stack_pointer = 0x1fff;
    }
    FrozenResult enqueue(const Ram& initial, const CreditsTransfer& transfer, unsigned caller_d, unsigned high_a) {
        eb::MainCpu65816 cpu(*bus);
        setup(cpu, initial, caller_d);
        cpu.accumulator = std::uint16_t(transfer.mode | (high_a << 8));
        cpu.x_index = transfer.byte_count;
        cpu.y_index = transfer.destination_word;
        // Param03 is caller D+$0e; prologue reserves 15 bytes, so the callee
        // loads it from D+$1d/$1f. The host JSL below only sets up the call.
        put(bus->work_ram, caller_d + 0x0e, transfer.source_address, 4);
        cpu.program_counter = 0xc0ff00;
        cpu.execute_instruction<0x22>(layout.enqueue, 4);
        FrozenResult result{};
        cpu.observe_memory_write = [&](auto address, auto value) {
            if (address >= wram && address < 0x800000) result.writes.emplace_back(address, value);
        };
        while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
            require(++result.steps < 1000, "Frozen credits enqueue failed to return");
            cpu.step_instruction();
        }
        require(cpu.direct_page == caller_d, "Frozen enqueue did not restore caller D");
        result.accumulator = cpu.accumulator;
        source_steps += result.steps;
        return result;
    }
    FrozenResult scroll(const Ram& initial, unsigned direct_page) {
        eb::MainCpu65816 cpu(*bus);
        setup(cpu, initial, direct_page);
        cpu.program_counter = layout.scroll_start;
        cpu.accumulator = 0x1234; cpu.x_index = 0x5678; cpu.y_index = 0x9abc;
        FrozenResult result{};
        cpu.observe_memory_write = [&](auto address, auto value) {
            if (address >= wram && address < 0x800000) result.writes.emplace_back(address, value);
        };
        while (cpu.program_counter != layout.scroll_end) {
            require(++result.steps < 100, "Frozen credits scroll escaped its source slice");
            cpu.step_instruction();
        }
        require(cpu.direct_page == direct_page && cpu.stack_pointer == 0x1fff,
            "Scroll slice unexpectedly changed its source frame");
        result.accumulator = cpu.accumulator;
        source_steps += result.steps;
        return result;
    }
    void unchanged_memory(const Ram& domain) const {
        // CPU C/stack scratch is physically aliased into WRAM, but is not domain
        // state. All native writes are separately captured, including any stray
        // write to that scratch region, so this exclusion cannot hide one.
        require(std::equal(domain.begin(), domain.begin() + 0x1c00, bus->work_ram.begin()) &&
            std::equal(domain.begin() + 0x2000, domain.end(), bus->work_ram.begin() + 0x2000),
            "WRAM differs outside source ABI scratch");
    }
};

std::vector<Write> descriptor_writes(unsigned address, const CreditsTransfer& transfer) {
    std::vector<Write> result;
    append(result, address, transfer.mode, 1);
    append(result, address + 1, transfer.byte_count, 2);
    append(result, address + 3, transfer.source_address, 4);
    append(result, address + 7, transfer.destination_word, 2);
    return result;
}
void queue_matrix(Oracle& oracle) {
    constexpr std::array<CreditsTransfer, 8> transfers{{
        {0, 0, 0, 0}, {1, 1, 0x007e0000, 0x6c00}, {3, 64, 0x007e7ffe, 0x6faf},
        {0x80, 0x8000, 0x80000000, 0x8000}, {0xff, 0xffff, 0xffffffff, 0xffff},
        {0x7f, 0x7fff, 0xabcdef01, 0x7fff}, {4, 0xff00, 0xff00ff00, 0xff00},
        {0xa5, 0x00ff, 0x00ffffff, 0x00ff},
    }};
    for (unsigned head = 0; head < 128; ++head)
    for (const auto& transfer : transfers)
    for (unsigned tail : {head, (head + 1) & 127, (head + 127) & 127}) {
        try {
            Ram initial; initial.fill(0xa7);
            put(initial, oracle.layout.head, head, 2);
            put(initial, oracle.layout.tail, tail, 2);
            const auto reference = oracle.enqueue(initial, transfer, head & 1 ? 0x1e01 : 0x1e00, head ^ 0xd3);
            auto domain = initial;
            BorrowedCredits memory(domain);
            CreditsState state(memory, oracle.version);
            state.enqueue(transfer);
            auto expected = descriptor_writes(wram + oracle.layout.buffer + head * 9, transfer);
            append(expected, wram + oracle.layout.head, head + 1, 2);
            append(expected, wram + oracle.layout.head, (head + 1) & 127, 2);
            require(reference.writes == expected, "Frozen enqueue changed descriptor/head publication order");
            require(memory.writes == reference.writes, "Domain enqueue differs from complete frozen source writes");
            require(reference.accumulator == ((head + 1) & 127), "Frozen enqueue returned an unexpected final index");
            oracle.unchanged_memory(domain);
            // The original reads the index before resolving the slot and again
            // after all nine descriptor bytes are written; it never reads tail.
            std::vector<Access> accesses{{false, wram + oracle.layout.head, std::uint8_t(head)},
                {false, wram + oracle.layout.head + 1, 0}};
            for (unsigned i = 0; i < 9; ++i) accesses.emplace_back(true, expected[i].first, expected[i].second);
            accesses.emplace_back(false, wram + oracle.layout.head, std::uint8_t(head));
            accesses.emplace_back(false, wram + oracle.layout.head + 1, 0);
            for (unsigned i = 9; i < 13; ++i) accesses.emplace_back(true, expected[i].first, expected[i].second);
            require(memory.accesses == accesses, "Queue publication reread/cursor access semantics differ");
            require(get(domain, oracle.layout.tail, 2) == tail, "Enqueue changed the consumer index");
            ++oracle.queue_cases;
        } catch (const std::exception& e) {
            throw std::runtime_error("head=" + std::to_string(head) + " tail=" + std::to_string(tail) +
                " mode=" + std::to_string(transfer.mode) + ": " + e.what());
        }
    }
}
void compare_scroll(Oracle& oracle, Ram& bytes, unsigned direct_page) {
    const auto old = get(bytes, oracle.layout.scroll, 4);
    const auto reference = oracle.scroll(bytes, direct_page);
    auto domain = bytes;
    BorrowedCredits memory(domain);
    CreditsState state(memory, oracle.version);
    const auto next = state.advance_scroll();
    const auto expected = std::uint32_t(old + 0x4000u);
    require(next == expected, "Quarter-pixel scroll did not wrap as a 32-bit fixed-point value");
    std::vector<Write> writes;
    append(writes, wram + oracle.layout.scroll, expected, 4);
    append(writes, wram + 0x3b, expected >> 16, 2);
    require(reference.writes == writes && memory.writes == reference.writes,
        "Scroll fraction/integer/BG3 publication order or width differs");
    require(reference.accumulator == expected >> 16, "Frozen scroll did not leave the integer in A");
    require(reference.steps == 14u + unsigned((old & 0xffff) >= 0xc000),
        "Frozen carry/noncarry slice did not follow the expected source branch");
    oracle.unchanged_memory(domain);
    std::vector<Access> accesses;
    for (unsigned i = 0; i < 4; ++i)
        accesses.emplace_back(false, wram + oracle.layout.scroll + i, std::uint8_t(old >> (i * 8)));
    for (const auto& [at, value] : writes) accesses.emplace_back(true, at, value);
    require(memory.accesses == accesses, "Scroll did not read the live value once before publication");
    bytes = domain;
    ++oracle.scroll_cases;
}
void scroll_matrix(Oracle& oracle) {
    for (unsigned integer : {0u, 1u, 0x7fffu, 0x8000u, 0xfffeu, 0xffffu})
    for (unsigned fraction : {0u, 1u, 0x3fffu, 0x4000u, 0x7fffu, 0xbfffu, 0xc000u, 0xffffu})
    for (unsigned direct_page : {0x1c00u, 0x1e13u}) {
        Ram bytes; bytes.fill(0x96);
        put(bytes, oracle.layout.scroll, fraction | (integer << 16), 4);
        put(bytes, 0x3b, 0x5a5a, 2); // The live BG3 mirror deliberately disagrees.
        compare_scroll(oracle, bytes, direct_page);
    }
    for (std::uint32_t start : {0u, 0xffffc000u, 0x12345678u}) {
        Ram bytes; bytes.fill(0xb8);
        put(bytes, oracle.layout.scroll, start, 4);
        for (unsigned tick = 0; tick < 12; ++tick) compare_scroll(oracle, bytes, 0x1d01);
        require(get(bytes, oracle.layout.scroll, 4) == std::uint32_t(start + 3 * 0x10000u),
            "Twelve live ticks did not preserve fractional phase and advance three pixels");
    }
}
void captured_primitives(Oracle& oracle) {
    Ram bytes; bytes.fill(0x69);
    BorrowedCredits memory(bytes);
    CreditsState state(memory, oracle.version);
    put(bytes, oracle.layout.head, 4, 2);
    const auto captured = state.descriptor_address(state.queue_head());
    require(captured == oracle.layout.buffer + 4 * 9, "Descriptor address uses the wrong stride/base");
    put(bytes, oracle.layout.head, 17, 2);
    const CreditsTransfer transfer{0x8a, 0x1234, 0xfedcba98, 0x6789};
    memory.writes.clear(); memory.accesses.clear();
    state.publish_descriptor(captured, transfer);
    require(memory.writes == descriptor_writes(wram + captured, transfer) && memory.accesses.size() == 9 &&
        get(bytes, oracle.layout.head, 2) == 17, "Captured descriptor publication reread or changed current head");
    memory.writes.clear(); memory.accesses.clear();
    require(state.advance_queue_head(127) == 0, "Captured head did not wrap");
    std::vector<Write> writes;
    append(writes, wram + oracle.layout.head, 128, 2); append(writes, wram + oracle.layout.head, 0, 2);
    require(memory.writes == writes && memory.accesses.size() == 4,
        "Captured head publication omitted an intermediate word or reread current head");
    put(bytes, oracle.layout.scroll, 0x11223344, 4);
    memory.writes.clear(); memory.accesses.clear();
    require(state.advance_scroll_from(0xffffc000) == 0, "Captured scroll did not wrap its integer");
    writes.clear(); append(writes, wram + oracle.layout.scroll, 0, 4); append(writes, wram + 0x3b, 0, 2);
    require(memory.writes == writes && memory.accesses.size() == 6, "Captured scroll reread later global state");
    // A retained view holds no value cache: subsequent host changes are visible.
    put(bytes, oracle.layout.head, 61, 2); put(bytes, oracle.layout.scroll, 0x87654321, 4);
    require(state.queue_head() == 61 && state.scroll_position() == 0x87654321, "Credits view retained stale state");
    oracle.captured_cases += 4;
}
} // namespace

int main() {
    try {
        unsigned queues = 0, scrolls = 0, captured = 0;
        std::uint64_t steps = 0;
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            try {
                Oracle oracle(version);
                queue_matrix(oracle); scroll_matrix(oracle); captured_primitives(oracle);
                queues += oracle.queue_cases; scrolls += oracle.scroll_cases; captured += oracle.captured_cases;
                steps += oracle.source_steps;
            } catch (const std::exception& e) {
                throw std::runtime_error(std::string(version == eb::GameVersion::US ? "US " : "JP ") + e.what());
            }
        }
        std::cout << "PASS credits state: " << queues << " whole frozen enqueue/domain cases, " << scrolls
            << " frozen scroll-tail/domain cases, " << captured << " captured/live-view checks; " << steps
            << " source instructions; exact ordered publications and untouched WRAM\n";
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n'; return 1;
    }
}
