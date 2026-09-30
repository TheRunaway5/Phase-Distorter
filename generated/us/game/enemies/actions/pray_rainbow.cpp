// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/pray_rainbow.asm
bool resume_battle_actions_pray_rainbow(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pray_rainbow.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AC7B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:5 LDX CURRENT_TARGET
    case 0xC2AC7D: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:6 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2AC80: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:7 AND #$00FF
    case 0xC2AC83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC2AC83.
    case 0xC2AC85: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:8 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2AC86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:8 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2AC86.
    case 0xC2AC88: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:9 BNE @UNKNOWN0
    case 0xC2AC89: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:10 LDX CURRENT_TARGET
    case 0xC2AC8B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:11 LDA a:battler::hp_max,X
    case 0xC2AC8E: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:12 TAX
    case 0xC2AC91: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:13 LDA CURRENT_TARGET
    case 0xC2AC92: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_rainbow.asm:14 JSR REVIVE_TARGET
    case 0xC2AC95: {
        Instruction step(cpu, 0x20, 0x007397u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pray_rainbow.asm:16 END_C_FUNCTION
    case 0xC2AC98: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
