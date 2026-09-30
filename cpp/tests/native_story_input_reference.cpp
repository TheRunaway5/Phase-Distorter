// Complete original C08496 input processing versus the CPU-free owner.
// READ_JOYPAD (hardware/demo playback) and C08456 (demo recording) are explicit
// external seams. They receive/retain only raw words; all masking, edge/repeat,
// controller merging and activity accounting execute the original routine.
// Original metadata: unknown/C0/{C08496,C08456}.asm, system/read_joypad.asm,
// bankconfig/common/ram.asm and the linked US/JP debug symbols.
#include "eb/native/story/input.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using eb::native::story::InputState;
using eb::native::story::poll_input;
void require(bool value,const std::string& message) {
    if (!value) throw std::runtime_error(message);
}
struct Reference {
    eb::GameVersion version;
    unsigned debug_address,activity_address;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::uint64_t steps{},hardware_seams{},demo_seams{};
    unsigned comparisons{};
    std::vector<unsigned> order;
    explicit Reference(eb::GameVersion region)
        : version(region),debug_address(region == eb::GameVersion::US ? 0x436c : 0x46f2),
          activity_address(region == eb::GameVersion::US ? 0xa34 : 0xa2a),
          bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000),region)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.observe_memory_write = [&](std::uint32_t address,std::uint8_t) {
            const auto at = address & 0xffff;
            if (at >= 0x1f00 && at < 0x2000) return; // Real near-call stack.
            require((at >= 0x65 && at < 0x77) || at == activity_address || at == activity_address + 1,
                    "Original input processing wrote outside PAD/temp/activity state");
            require(order.size() >= 2,"Processed input was written before raw hardware/demo boundaries");
            if (at == 0x6f) order.push_back(3); // PAD_PRESS for controller1.
            if (at == 0x6d && order.size() == 3) order.push_back(4); // controller0 (before optional merge).
        };
    }
    unsigned word(unsigned at) const { return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8); }
    void put(unsigned at,unsigned value) {
        bus->work_ram.at(at) = std::uint8_t(value); bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
    }
    void compare(InputState& input,std::array<std::uint16_t,2> raw,std::uint16_t debug) {
        const auto before = input;
        for (unsigned i = 0; i < 2; ++i) {
            put(0x65 + 2 * i,input.state[i]); put(0x69 + 2 * i,input.held[i]);
            put(0x6d + 2 * i,input.pressed[i]); put(0x71 + 2 * i,input.repeat_timer[i]);
        }
        put(activity_address,input.player_activity); put(debug_address,debug);
        put(0x77,0x1234); put(0x79,0x5678); // Only hardware seam supplies this poll's raw sample.
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0; cpu.data_bank = 0; cpu.stack_pointer = 0x1fff;
        cpu.accumulator = 0xabcd; cpu.x_index = 0x1234; cpu.y_index = 0x5678;
        order.clear();
        cpu.program_counter = 0xc0ff00;
        cpu.execute_instruction<0x20>(0x8496,3);
        unsigned count{};
        while (cpu.program_counter != 0xc0ff03 || cpu.stack_pointer != 0x1fff) {
            require(++count < 500,"Original input poll did not return");
            if (cpu.program_counter == 0xc0841b) {
                require(order.empty(),"Hardware raw read occurred out of order or more than once");
                put(0x79,raw[1]); put(0x77,raw[0]);
                order.push_back(1); ++hardware_seams;
                cpu.execute_instruction<0x60>(0,1);
            } else if (cpu.program_counter == 0xc08456) {
                require(order == std::vector<unsigned>{1} && word(0x77) == raw[0] && word(0x79) == raw[1],
                        "Demo seam did not observe exactly the current raw words");
                order.push_back(2); ++demo_seams;
                cpu.execute_instruction<0x60>(0,1);
            } else { cpu.step_instruction(); ++steps; }
        }
        require(cpu.direct_page == 0 && cpu.data_bank == 0,"Original poll changed its caller page/bank");
        require(order == std::vector<unsigned>({1,2,3,4}),"Raw boundaries/controller processing order differs");
        require(word(0x75) == (raw[0] & 0xfff0),"Original temporary did not end with masked controller0");
        poll_input(input,raw,debug);
        for (unsigned i = 0; i < 2; ++i)
            require(word(0x65 + 2 * i) == input.state[i] && word(0x69 + 2 * i) == input.held[i] &&
                        word(0x6d + 2 * i) == input.pressed[i] && word(0x71 + 2 * i) == input.repeat_timer[i],
                    "PAD mismatch case=" + std::to_string(comparisons) + " pad=" + std::to_string(i) +
                    " raw=" + std::to_string(raw[i]) + " previous=" + std::to_string(before.state[i]));
        require(word(activity_address) == input.player_activity,"Source activity word differs");
        ++comparisons;
    }
};
std::uint32_t draw(std::uint32_t& seed) {
    seed ^= seed << 13; seed ^= seed >> 17; seed ^= seed << 5; return seed;
}
void run(eb::GameVersion region) {
    Reference reference(region);
    // Every raw word in each pad, including all ignored nibble combinations.
    for (unsigned value = 0; value <= 0xffff; ++value) {
        InputState input;
        input.player_activity = std::uint16_t(value);
        reference.compare(input,{std::uint16_t(value),std::uint16_t(~value)},std::uint16_t(value & 1 ? 0x0100 : 0));
    }
    constexpr std::array timers{0u,1u,2u,3u,19u,20u,21u,0x7fffu,0x8000u,0xfffeu,0xffffu};
    for (const auto timer : timers) for (const auto previous : {0u,0x80u,0x8080u,0xffffu})
        for (const auto debug : {0u,1u,0x100u,0x8000u,0xffffu}) {
            InputState input;
            input.state = {std::uint16_t(previous),std::uint16_t(previous ^ 0x8000)};
            input.repeat_timer = {std::uint16_t(timer),std::uint16_t(timer)};
            input.pressed = {0xffff,0xffff}; input.held = {0x1234,0x5678}; input.player_activity = 0xffff;
            reference.compare(input,{std::uint16_t(previous),std::uint16_t(previous ^ 0x8000)},std::uint16_t(debug));
        }
    std::uint32_t seed = 0xa813472d;
    for (unsigned i = 0; i < 8192; ++i) {
        InputState input;
        for (unsigned pad = 0; pad < 2; ++pad) {
            input.state[pad] = std::uint16_t(draw(seed)); input.held[pad] = std::uint16_t(draw(seed));
            input.pressed[pad] = std::uint16_t(draw(seed)); input.repeat_timer[pad] = std::uint16_t(draw(seed));
        }
        input.player_activity = std::uint16_t(draw(seed));
        const auto first = std::uint16_t(draw(seed)),second = std::uint16_t(draw(seed));
        reference.compare(input,{first,second},std::uint16_t(i & 1 ? draw(seed) : 0));
    }
    // Repeat-aware real raw sample traces: hold, chords, controller handoff,
    // release and toggled debug. State0's merge survives every poll naturally.
    for (unsigned variant = 0; variant < 8; ++variant) {
        InputState input;
        input.player_activity = 0xfff0;
        for (unsigned frame = 0; frame < 2048; ++frame) {
            const auto phase = (frame / 37) % 6;
            constexpr std::array<std::array<std::uint16_t,2>,6> samples{{
                {0x80,0x8000},{0x880,0x8000},{0x80,0},{0,0x8000},{0x8000,0x80},{0,0}}};
            auto raw = samples[(phase + variant) % samples.size()];
            raw[0] |= std::uint16_t(frame & 15); raw[1] |= std::uint16_t((frame + 7) & 15);
            const auto debug = std::uint16_t(variant < 4 ? 0 : (frame / 97) & 1 ? 0x0100 : 0);
            reference.compare(input,raw,debug);
        }
    }
    require(reference.hardware_seams == reference.comparisons && reference.demo_seams == reference.comparisons,
            "Input fixture skipped or duplicated a source raw-sampling boundary");
    std::cout << (region == eb::GameVersion::US ? "US" : "JP") << ": " << reference.comparisons
              << " complete input comparisons, " << reference.hardware_seams << " raw-read and "
              << reference.demo_seams << " demo seams, " << reference.steps << " original instructions\n";
}
}
int main() {
    try { run(eb::GameVersion::US); run(eb::GameVersion::JP); }
    catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
