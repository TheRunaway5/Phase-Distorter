// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/pray_mysterious.asm
bool resume_battle_actions_pray_mysterious(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pray_mysterious.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AC68: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:5 LDA #5
    case 0xC2AC6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:5 LDA #5
    // Overlapping static entry reached from 0xC2AC6A.
    case 0xC2AC6C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:6 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2AC6D: {
        Instruction step(cpu, 0x20, 0x006A44u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:7 TAX
    case 0xC2AC70: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:8 BNE @UNKNOWN0
    case 0xC2AC71: {
        Instruction step(cpu, 0xD0, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:9 INX
    case 0xC2AC73: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:11 LDA CURRENT_TARGET
    case 0xC2AC74: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_mysterious.asm:12 JSR RECOVER_PP
    case 0xC2AC77: {
        Instruction step(cpu, 0x20, 0x007318u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pray_mysterious.asm:13 END_C_FUNCTION
    case 0xC2AC7A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
