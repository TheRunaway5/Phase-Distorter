// Complete original C1FF2C differential. Original C43317 initializes the real
// six-entry pointer table; the expected path never substitutes native indexing.
// Source layout: include/{structs,config}.asm, constants/battle.asm and linked
// regional symbols. No production offsets, authored content or timing tables.
#include "eb/native/party/condition.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
using namespace eb::native::party;
void require(bool condition,const std::string& message) {
    if (!condition) throw std::runtime_error(message);
}
struct Layout {
    unsigned initialize,condition,party,stride,afflictions,options,game,controlled,count,pointers,cache;
};
Layout layout(eb::GameVersion region) {
    if (region == eb::GameVersion::JP)
        return {0xc43090,0xc1fcab,0x9c7f,94,13,78,0x9aa9,153,172,0x514e,0xb676};
    return {0xc43317,0xc1ff2c,0x99ce,95,14,79,0x97f5,156,175,0x4dc8,0xb4a2};
}
struct Original {
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned comparisons{};
    std::uint64_t steps{};
    std::vector<std::pair<std::uint32_t,std::uint8_t>> writes;
    explicit Original(eb::GameVersion region)
        : p(layout(region)),bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000),region)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        bus->work_ram.fill(0xa5);
        call(p.initialize,true);
        for (unsigned i = 0; i < 6; ++i)
            require(word(p.pointers + 2 * i) == p.party + p.stride * i,
                    "Actual C43317 did not construct its six regional party pointers");
        cpu.observe_memory_write = [&](std::uint32_t address,std::uint8_t value) {
            // The near C-function prologue/epilogue uses the real CPU/C stack.
            // Every other source WRAM write must be the two cache bytes below.
            const auto offset = address & 0xffff;
            if (offset < 0x1c00 || offset >= 0x2000) writes.emplace_back(address,value);
        };
    }
    unsigned word(unsigned at) const { return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8); }
    void put(unsigned at,unsigned value) {
        bus->work_ram.at(at) = std::uint8_t(value); bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
    }
    void call(unsigned entry,bool far) {
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
        cpu.accumulator = 0xdead; cpu.x_index = 0x67; cpu.y_index = 0x89;
        const auto trampoline = (entry & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        if (far) cpu.execute_instruction<0x22>(entry,4);
        else cpu.execute_instruction<0x20>(entry & 0xffff,3);
        unsigned count{};
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            require(++count < 2000,"Original condition helper failed to return");
            cpu.step_instruction();
        }
        steps += count;
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Original condition helper changed caller ABI");
    }
    void compare(const State& party,std::uint16_t initial) {
        bus->work_ram[p.game + p.count] = party.controlled_count;
        for (unsigned i = 0; i < 6; ++i) {
            bus->work_ram[p.game + p.controlled + i] = party.controlled_order[i];
            const auto& c = party.character(i + 1);
            for (unsigned group = 0; group < 7; ++group)
                bus->work_ram[p.party + i * p.stride + p.afflictions + group] = c.afflictions[group];
            put(p.party + i * p.stride + p.options,c.hp_pp_window_options);
        }
        put(p.cache,initial);
        auto native_cache = initial;
        const auto expected = last_controlled_status(party);
        const auto changed = refresh_last_controlled_status(party,native_cache);
        writes.clear();
        call(p.condition,false);
        ++comparisons;
        require(cpu.accumulator == unsigned(changed) && word(p.cache) == native_cache && native_cache == expected,
                "Original condition/cache differs case=" + std::to_string(comparisons) +
                " count=" + std::to_string(party.controlled_count) + " cache=" + std::to_string(initial));
        const std::vector<std::pair<std::uint32_t,std::uint8_t>> expected_writes{
            {0x7e0000 + p.cache,std::uint8_t(native_cache)}, {0x7e0001 + p.cache,0}};
        require(writes == expected_writes,"Original condition wrote state besides its ordered full-word cache");
    }
};
void run(eb::GameVersion region) {
    Original original(region);
    State party(region);
    for (unsigned count = 1; count <= 6; ++count) for (unsigned selected = 0; selected < 6; ++selected) {
        party.controlled_count = std::uint8_t(count);
        // Earlier bytes intentionally cannot be used as record indices. Only
        // the last controlled entry participates in this source calculation.
        party.controlled_order.fill(0xff);
        party.controlled_order[count - 1] = std::uint8_t(selected);
        for (unsigned status = 0; status < 256; ++status) {
            for (unsigned id = 1; id <= 6; ++id) {
                auto& character = party.character(id);
                character.afflictions.fill(std::uint8_t(status ^ (id * 31)));
                character.afflictions[0] = id == selected + 1 ? std::uint8_t(status) : std::uint8_t(status == 1 ? 0 : 1);
                character.hp_pp_window_options = std::uint16_t(status * 257);
            }
            for (auto cache : {0,1,2,0x8000,0xffff}) original.compare(party,std::uint16_t(cache));
        }
    }
    party.controlled_count = 6;
    party.controlled_order[5] = 5;
    // Every raw cache value protects full16-bit equality, not just bool/low byte.
    for (unsigned cache = 0; cache <= 0xffff; ++cache) {
        party.character(6).afflictions[0] = std::uint8_t(cache & 3);
        original.compare(party,std::uint16_t(cache));
    }
    std::cout << (region == eb::GameVersion::US ? "US" : "JP") << ": " << original.comparisons
              << " complete condition/cache comparisons, " << original.steps << " original instructions\n";
}
}
int main() {
    try { run(eb::GameVersion::US); run(eb::GameVersion::JP); }
    catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
