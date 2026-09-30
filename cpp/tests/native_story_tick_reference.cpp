// Independent complete-routine oracle for CPU-free scene-tick prerequisites.
// Source: src/system/math/rand.asm, src/misc/hp_pp_roller.asm,
// src/unknown/C2/C20F58.asm, src/system/math/asr32.asm. The regional addresses
// and character offsets below come from the original linked earthbound.dbg,
// include/structs.asm and src/bankconfig/common/ram.asm, not native metadata.
// Original Legacy execution uses the actual bus8x8 multiplier. No authored
// content, source-hook substitutions or production timing tables are needed.
// This checks semantic state/return values, not native CPU retirement timing,
// scratch registers or a complete WindowTick/visual-meter implementation.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/native/party/meters.hpp"
#include "eb/native/story/random.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native;
using Ram = std::array<std::uint8_t,0x20000>;
void require(bool condition, const std::string& message) {
    if (!condition) throw std::runtime_error(message);
}
void put(Ram& ram, unsigned address, std::uint32_t value, unsigned size = 2) {
    for (unsigned i = 0; i < size; ++i) ram.at(address + i) = std::uint8_t(value >> (i * 8));
}
std::uint32_t get(const Ram& ram, unsigned address, unsigned size = 2) {
    std::uint32_t value{};
    for (unsigned i = 0; i < size; ++i) value |= std::uint32_t(ram.at(address + i)) << (i * 8);
    return value;
}
struct Layout {
    unsigned random, speed, roller, characters, stride, hp_fraction, order;
    unsigned disabled, half, fastest, flipout, hp_speed;
};
Layout layout(eb::GameVersion region) {
    if (region == eb::GameVersion::JP)
        return {0xc08e8b,0xc20de9,0xc20f3b,0x9c7f,94,66,0x9aa9 + 119,
                0x994b,0x9949,0x994a,0x994c,0x991f};
    return {0xc08e9a,0xc20f58,0xc2109f,0x99ce,95,67,0x97f5 + 122,
            0x9697,0x9695,0x9696,0x9698,0x9627};
}
struct Reference {
    eb::GameVersion region;
    Layout map;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::uint64_t steps{};
    unsigned random_cases{}, meter_cases{}, speed_cases{};
    explicit Reference(eb::GameVersion version)
        : region(version), map(layout(version)),
          bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000),version)), cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    void call(unsigned entry, bool far, std::uint8_t flags = eb::MainCpu65816::InterruptDisable) {
        cpu.emulation_mode = false;
        cpu.status_register = flags;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        cpu.data_bank = 0x7e;
        cpu.accumulator = 0x96ab; cpu.x_index = 0x45; cpu.y_index = 0x67;
        cpu.program_counter = (entry & 0xff0000) | 0xff00;
        const auto stop = cpu.program_counter + (far ? 4 : 3);
        if (far) cpu.execute_instruction<0x22>(entry,4);
        else cpu.execute_instruction<0x20>(entry & 0xffff,3);
        unsigned count{};
        while (cpu.program_counter != stop || cpu.stack_pointer != 0x1fff) {
            require(++count < 2000,"Original source routine did not return to its balanced caller");
            cpu.step_instruction();
        }
        steps += count;
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Original source helper corrupted its caller ABI");
    }
    void random(story::RandomState& native, std::uint8_t flags) {
        const auto before = native;
        put(bus->work_ram,0x24,native.primary_word);
        put(bus->work_ram,0x26,native.secondary_word);
        const auto actual = story::next_random(native);
        call(map.random,true,flags);
        ++random_cases;
        require(native.primary_word == get(bus->work_ram,0x24) &&
                    native.secondary_word == get(bus->work_ram,0x26) && actual == cpu.accumulator &&
                    cpu.status_register == flags,
                "RAND mismatch A=" + std::to_string(before.primary_word) + " B=" +
                    std::to_string(before.secondary_word) + " flags=" + std::to_string(flags));
    }
    void speed(std::uint32_t value, std::uint8_t half) {
        put(bus->work_ram,map.hp_speed,value,4);
        bus->work_ram[map.half] = half;
        call(map.speed,false);
        party::MeterPolicy policy{};
        policy.hp_speed = value; policy.half_speed = half;
        ++speed_cases;
        require(party::effective_hp_speed(policy) == get(bus->work_ram,0x1e06,4),
                "C20F58/ASR32 complete source return differs");
    }
    void encode(Ram& bytes, const party::State& state) const {
        for (unsigned id = 1; id <= 6; ++id) {
            const auto base = map.characters + (id - 1) * map.stride + map.hp_fraction;
            const auto& member = state.character(id);
            put(bytes,base,member.hp_fraction);
            put(bytes,base + 2,member.current_hp);
            put(bytes,base + 4,member.target_hp);
            put(bytes,base + 6,member.pp_fraction);
            put(bytes,base + 8,member.current_pp);
            put(bytes,base + 10,member.target_pp);
        }
    }
    void meters(party::State& state, std::uint16_t frame, const party::MeterPolicy& policy) {
        // Poison every non-meter character byte. Exact six-record comparison
        // detects writes into inventory, statuses, other members or neighbours.
        bus->work_ram.fill(0xa5);
        std::copy(state.party_order.begin(),state.party_order.end(),bus->work_ram.begin() + map.order);
        encode(bus->work_ram,state);
        put(bus->work_ram,2,frame);
        put(bus->work_ram,map.hp_speed,policy.hp_speed,4);
        put(bus->work_ram,map.flipout,policy.flipout);
        bus->work_ram[map.disabled] = policy.rolling_disabled;
        bus->work_ram[map.half] = policy.half_speed;
        bus->work_ram[map.fastest] = policy.fastest_hp_increase;
        const auto first = map.characters - 2;
        const auto last = map.characters + 6 * map.stride + 2;
        std::vector<std::uint8_t> expected(bus->work_ram.begin() + first,bus->work_ram.begin() + last);
        party::advance_meters(state,frame,policy);
        Ram after{};
        std::copy(expected.begin(),expected.end(),after.begin() + first);
        encode(after,state);
        call(map.roller,true);
        ++meter_cases;
        const auto mismatch = std::mismatch(after.begin() + first,after.begin() + last,
                                           bus->work_ram.begin() + first);
        require(mismatch.first == after.begin() + last,
                "HP_PP_ROLLER case=" + std::to_string(meter_cases) + " byte=" +
                    std::to_string(unsigned(mismatch.first - after.begin())) +
                    " frame=" + std::to_string(frame) + " speed=" + std::to_string(policy.hp_speed));
        require(std::equal(state.party_order.begin(),state.party_order.end(),bus->work_ram.begin() + map.order),
                "Source party-order read modified its owning list");
    }
};

// Deterministic fixture enumeration only, independent of the production RAND.
std::uint32_t draw(std::uint32_t& seed) {
    seed ^= seed << 13; seed ^= seed >> 17; seed ^= seed << 5; return seed;
}
void random_cases(Reference& reference) {
    for (unsigned low_a = 0; low_a < 256; ++low_a)
        for (unsigned low_b = 0; low_b < 256; ++low_b) {
            story::RandomState state{std::uint16_t(((low_b ^ 0xa5) << 8) | low_a),
                                     std::uint16_t(((low_a ^ 0x5a) << 8) | low_b)};
            // PHP/PLP must restore incoming NZVC; decimal intentionally clear.
            const auto flags = std::uint8_t(eb::MainCpu65816::InterruptDisable |
                (low_a & 1) | (low_b & 0xc2));
            reference.random(state,flags);
        }
    for (unsigned a : {0u,1u,0x7fffu,0x8000u,0xfffdu,0xfffeu,0xffffu})
        for (unsigned b = 0; b < 256; ++b) {
            story::RandomState state{std::uint16_t(a),std::uint16_t(0xff00 | b)};
            reference.random(state,eb::MainCpu65816::InterruptDisable);
        }
    story::RandomState sequence{0x1234,0xfedc};
    for (unsigned i = 0; i < 8192; ++i) reference.random(sequence,eb::MainCpu65816::InterruptDisable);
}
void meter_cases(Reference& reference) {
    constexpr std::array speeds{0u,1u,0x8000u,0x10000u,0x18000u,0x64000u,
                               0x7fffffffu,0x80000000u,0x80000001u,0xffffffffu};
    for (const auto value : speeds) for (auto half : {0,1,0x80,0xff})
        reference.speed(value,std::uint8_t(half));
    party::State state(reference.region);
    state.party_order = {2,4,1,3,5,6};
    // All fractional sentinels and comparisons around underflow, the1000
    // downward guard and both unsigned/signed16-bit boundaries.
    constexpr std::array<std::array<unsigned,2>,14> endpoints{{
        {0,0},{0,1},{1,0},{1,1},{1,999},{998,999},{999,1},
        {999,999},{1000,999},{1001,1000},{0x7fff,0x8000},
        {0x8000,0x7fff},{0xffff,0},{0,0xffff}}};
    unsigned iteration{};
    for (const auto pair : endpoints) for (auto fraction : {0,1,2,3,0x7fff,0x8000,0xfffe,0xffff})
        for (const auto speed : speeds) for (unsigned controls = 0; controls < 8; ++controls) {
            for (unsigned id = 1; id <= 6; ++id) {
                auto& member = state.character(id);
                member.current_hp = std::uint16_t(pair[0]); member.target_hp = std::uint16_t(pair[1]);
                member.hp_fraction = std::uint16_t(fraction);
                member.current_pp = std::uint16_t(pair[1]); member.target_pp = std::uint16_t(pair[0]);
                member.pp_fraction = std::uint16_t(fraction ^ 0x8000);
            }
            party::MeterPolicy policy{0,std::uint8_t(controls & 1 ? 0xff : 0),
                std::uint8_t(controls & 2 ? 0x80 : 0),std::uint16_t(controls & 4 ? 0x8000 : 0),speed};
            reference.meters(state,std::uint16_t(iteration++),policy);
        }
    // Empty and guest entries (including out-of-domain byte IDs) are valid
    // source early returns; the roller never dereferences their records.
    for (auto id : {0,5,6,0x7f,0x80,0xff}) for (auto disabled : {0,1,0xff}) {
        state.party_order[0] = std::uint8_t(id);
        reference.meters(state,0xff00,{std::uint8_t(disabled),1,1,1,0xffffffff});
    }
    state.party_order = {1,2,3,4,5,6};
    std::uint32_t seed = 0xc1778e93;
    for (unsigned i = 0; i < 4096; ++i) {
        for (unsigned id = 1; id <= 6; ++id) {
            auto& member = state.character(id);
            member.hp_fraction = std::uint16_t(draw(seed)); member.current_hp = std::uint16_t(draw(seed));
            member.target_hp = std::uint16_t(draw(seed)); member.pp_fraction = std::uint16_t(draw(seed));
            member.current_pp = std::uint16_t(draw(seed)); member.target_pp = std::uint16_t(draw(seed));
        }
        const auto bits = draw(seed);
        reference.meters(state,std::uint16_t(draw(seed)),
            {std::uint8_t(bits & 16 ? 0 : bits & 1),std::uint8_t(bits & 2),
             std::uint8_t(bits & 4),std::uint16_t(bits & 8),draw(seed)});
    }
    // Sustained actual cadence lets activation, clamp and repeated flipout
    // transitions interact across members instead of only comparing one call.
    for (unsigned id = 1; id <= 6; ++id) {
        auto& member = state.character(id);
        member.current_hp = 1; member.target_hp = 999; member.hp_fraction = 0;
        member.current_pp = 999; member.target_pp = 0; member.pp_fraction = 0;
    }
    for (unsigned frame = 0; frame < 8192; ++frame)
        reference.meters(state,std::uint16_t(frame),{0,0,0,1,0x4000});
}
}
int main() {
    try {
        for (const auto region : {eb::GameVersion::US,eb::GameVersion::JP}) {
            Reference reference(region);
            random_cases(reference);
            meter_cases(reference);
            std::cout << (region == eb::GameVersion::US ? "US" : "JP") << ": "
                      << reference.random_cases << " RAND, " << reference.speed_cases
                      << " speed, " << reference.meter_cases << " meter source comparisons; "
                      << reference.steps << " original instructions\n";
        }
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
