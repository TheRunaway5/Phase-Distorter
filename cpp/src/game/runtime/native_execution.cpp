#include "eb/game/runtime/native_execution.hpp"

#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"

namespace eb::game::runtime {
namespace {
unsigned cycles(const MainCpu65816& cpu, const NativeTimingSlice& slice) {
    return slice.cycles + unsigned(slice.direct_page && (cpu.direct_page & 0xff));
}
unsigned waits(const NativeTimingSlice& slice, unsigned rom_wait) {
    return slice.fetched_bytes * rom_wait + slice.wram_bytes * 2;
}
}

unsigned NativeGameplay::try_advance(MainCpu65816& cpu, unsigned maximum_steps) {
    const auto pc = cpu.program_counter;
    const bool collision = (pc >= 0xc06000 && pc <= 0xc06133) ||
                           (pc >= 0xc0622e && pc <= 0xc06361);
    const bool targeting = (pc >= 0xc26b00 && pc < 0xc27100) ||
        pc == 0xc4a1ff || pc == 0xc4766c || pc == 0xc23fec || pc == 0xc23ea0;
    const bool credits = pc == 0xc0f89a || pc == 0xc0ff3e ||
        pc == 0xc4efce || pc == 0xc4efee || pc == 0xc4f00e ||
        pc == 0xc4c008 || pc == 0xc4c028 || pc == 0xc4c048;
    if (!collision && !targeting &&
        !(pc >= 0xc1032f && pc <= 0xc106b6) &&
        !(pc >= 0xc17c7f && pc <= 0xc17f4e) && !credits)
        return 0;
    if (!cpu.hardware_ || cpu.emulation_mode ||
        (cpu.status_register & (MainCpu65816::Accumulator8Bit | MainCpu65816::Index8Bit)) ||
        cpu.data_bank != 0x7e || cpu.observe_memory_write || cpu.memory_wait_master_clocks_)
        return 0;
    if (collision)
        return try_npc_collision(cpu, maximum_steps);
    if (targeting)
        return try_battle_targeting(cpu, maximum_steps);
    if (credits)
        return try_credits_state(cpu, maximum_steps);
    return try_dialogue_registers(cpu, maximum_steps);
}

bool NativeGameplay::admit(MainCpu65816& cpu, std::span<const NativeTimingSlice> timing, unsigned maximum_steps) {
    if (timing.empty() || timing.size() > maximum_steps)
        return false;
    auto& hardware = *cpu.hardware_;
    const auto budget = hardware.native_execution_budget();
    if (!budget)
        return false;
    const auto rom_wait = hardware.access_clocks(cpu.program_counter) - 6;
    unsigned raw_clocks = 0;
    for (const auto& slice : timing)
        raw_clocks += cycles(cpu, slice) * 6 + waits(slice, rom_wait);
    // Keep one timing policy throughout the chunk. Its algorithm must leave D
    // and the DMA queue indices stable, so these inputs also stay valid during
    // retirement. Already accelerated work retains the same integer carry.
    if (cpu.instruction_uses_extra_budget_ && cpu.entity_update_master_clocks_ < 140000 &&
        raw_clocks >= 140000 - cpu.entity_update_master_clocks_)
        return false;
    const bool accelerated = cpu.instruction_uses_extra_budget_ && cpu.entity_update_master_clocks_ >= 140000 &&
        hardware.work_ram[cpu.source_profile_->dma_queue.write_index] ==
            hardware.work_ram[cpu.source_profile_->dma_queue.last_completed_index];
    const auto clocks = accelerated ? (raw_clocks + cpu.extra_budget_clock_remainder_) / 8 : raw_clocks;
    return clocks < budget;
}

void NativeGameplay::retire(MainCpu65816& cpu, std::span<const NativeTimingSlice> timing, std::uint32_t code_address) {
    const auto rom_wait = cpu.hardware_->access_clocks(code_address) - 6;
    cpu.instruction_count += timing.size();
    // Ordinary audio callbacks retain every original source clock slice. The
    // admitted region contains no main-processor hardware event; per-access
    // observers decline admission and continue using exact stepping.
    for (const auto& slice : timing) {
        cpu.memory_wait_master_clocks_ = waits(slice, rom_wait);
        cpu.advance_instruction_cycles(cycles(cpu, slice));
    }
    cpu.instruction_uses_extra_budget_ = false;
    cpu.instruction_touches_io_ = false;
}
} // namespace eb::game::runtime
