// Execute the actual regional C02C3E and MULT168 generated source instructions.
// Non-bicycle paths run through their real RTL. Bicycle cases stop at entry to
// C03CFD, after its caller's real JSL; that unimplemented lifecycle is never
// acknowledged here. No original assets or native expected instructions used.
#include "eb/native/party/movement_policy.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native::party;
void check(bool value, const char* message) { if (!value) throw std::runtime_error(message); }
struct Layout { unsigned entry, dismount, game, controlled, style, party, stride, afflictions, flag, timer, modifier; };
Layout layout(eb::GameVersion version) {
    // Linked original symbols plus regional structs.asm field values.
    if (version == eb::GameVersion::US)
        return {0xc02c3e, 0xc03cfd, 0x97f5, 156, 142, 0x99ce, 95, 14, 0x5da0, 0x5d9c, 0x5d9e};
    return {0xc02e13, 0xc03f64, 0x9aa9, 153, 139, 0x9c7f, 94, 13, 0x6126, 0x6122, 0x6124};
}
struct Original {
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::vector<std::pair<unsigned, std::uint8_t>> writes;
    unsigned completed{}, frontiers{};
    std::uint64_t instructions{}, word_comparisons{};
    explicit Original(eb::GameVersion version)
        : p(layout(version)), bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000), version)), cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        bus->work_ram.fill(0xa5);
        cpu.observe_memory_write = [&](unsigned at, std::uint8_t value) {
            // MULT168 writes actual 4202/4203 math registers; JSL/RTL touch
            // the hardware stack. All other writes are checked exactly.
            if (at == 0x4202 || at == 0x4203 || ((at & 0xffff) >= 0x1c00 && (at & 0xffff) < 0x2000)) return;
            writes.emplace_back(at, value);
        };
    }
    void word(unsigned at, unsigned value) {
        bus->work_ram.at(at) = std::uint8_t(value);
        bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
    }
    unsigned word(unsigned at) const { return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8); }
    void compare(const State& party, std::uint16_t style, MovementPolicyState initial, bool full_memory = false) {
        for (unsigned i = 0; i < 6; ++i) {
            bus->work_ram[p.game + p.controlled + i] = party.controlled_order[i];
            for (unsigned group = 0; group < 7; ++group)
                bus->work_ram[p.party + i * p.stride + p.afflictions + group] = party.character(i + 1).afflictions[group];
        }
        bus->work_ram[p.game + p.controlled + 19] = party.controlled_count;
        word(p.game + p.style, style); word(p.flag, initial.mushroomized);
        word(p.timer, initial.timer); word(p.modifier, initial.modifier);
        const auto before = full_memory ? std::vector<std::uint8_t>(bus->work_ram.begin(), bus->work_ram.end()) : std::vector<std::uint8_t>{};
        auto actual = initial;
        const auto requested = refresh_movement_policy(party, style, actual);
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
        cpu.accumulator = 0xbeef; cpu.x_index = 0xabcd; cpu.y_index = 0x1234;
        cpu.program_counter = 0xc0ff00; cpu.execute_instruction<0x22>(p.entry, 4); writes.clear();
        unsigned count{};
        while (cpu.program_counter != p.dismount &&
               !(cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)) {
            check(++count < 100, "Original movement policy did not reach return/dismount boundary");
            cpu.step_instruction();
        }
        instructions += count;
        const bool reached = cpu.program_counter == p.dismount;
        check(reached == requested, "Original next continuation differs from native request");
        if (reached) ++frontiers; else ++completed;
        check(cpu.stack_pointer == (reached ? 0x1ff9 : 0x1fff) && cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
              "Original movement policy caller ABI changed");
        check(word(p.flag) == actual.mushroomized && word(p.timer) == actual.timer && word(p.modifier) == actual.modifier,
              "Original movement policy words differ");
        word_comparisons += 3;
        std::vector<std::pair<unsigned, std::uint8_t>> ordered;
        const auto append = [&](unsigned at, unsigned value) {
            ordered.emplace_back(0x7e0000 + at, std::uint8_t(value));
            ordered.emplace_back(0x7e0001 + at, std::uint8_t(value >> 8));
        };
        append(p.flag, actual.mushroomized);
        if (actual.mushroomized && initial.timer == 0) { append(p.timer, 1800); append(p.modifier, 0); }
        check(writes == ordered, "Original writes outside exact ordered flag/timer/modifier effects");
        if (full_memory) for (unsigned i = 0; i < before.size(); ++i) {
            if (i >= 0x1c00 && i < 0x2000) continue;
            auto expected = before[i];
            for (const auto& [at, value] : ordered) if (i == at - 0x7e0000) expected = value;
            check(bus->work_ram[i] == expected, "Original changed unrelated WRAM outside hardware stack");
        }
    }
};
void run(eb::GameVersion version) {
    Original source(version); State party(version);
    for (unsigned record = 0; record < 6; ++record) {
        party.controlled_order.fill(0xff); party.controlled_order[0] = std::uint8_t(record);
        for (unsigned status = 0; status < 256; ++status) {
            for (unsigned id = 1; id <= 6; ++id) {
                party.character(id).afflictions.fill(std::uint8_t(status ^ 0x5a));
                party.character(id).afflictions[1] = std::uint8_t(id == record + 1 ? status : status == 1 ? 0 : 1);
            }
            for (unsigned count : {0u, 1u, 6u, 255u}) {
                party.controlled_count = std::uint8_t(count);
                for (unsigned style : {0u, 3u, 0x103u, 0xffffu})
                    for (unsigned timer : {0u, 1u, 0x8000u, 0xffffu})
                        source.compare(party, std::uint16_t(style), {0xa5ff, std::uint16_t(timer), 0xff80}, status < 2 && count == 0);
            }
        }
    }
    party.controlled_order[0] = 5; party.character(6).afflictions[1] = 1;
    for (unsigned timer = 0; timer <= 0xffff; ++timer)
        source.compare(party, std::uint16_t(timer & 1 ? 3 : 0), {0x8000, std::uint16_t(timer), std::uint16_t(timer ^ 0xa55a)});
    std::cout << (version == eb::GameVersion::US ? "US" : "JP") << " complete_returns=" << source.completed
              << " dismount_frontiers=" << source.frontiers << " state_word_comparisons=" << source.word_comparisons
              << " source_instructions=" << source.instructions << '\n';
}
}
int main() {
    try { run(eb::GameVersion::US); run(eb::GameVersion::JP); }
    catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
