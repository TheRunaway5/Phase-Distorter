// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/magnet_omega.asm
bool resume_battle_actions_magnet_omega(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/magnet_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29FE1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:5 LDX CURRENT_TARGET
    case 0xC29FE3: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:6 LDA a:battler::ally_or_enemy,X
    case 0xC29FE6: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:7 AND #$00FF
    case 0xC29FE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC29FE9.
    case 0xC29FEB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:8 BNE @UNKNOWN0
    case 0xC29FEC: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:9 LDX CURRENT_TARGET
    case 0xC29FEE: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:10 LDA a:battler::id,X
    case 0xC29FF1: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:11 CMP #PARTY_MEMBER::JEFF
    case 0xC29FF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:11 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC29FF4.
    case 0xC29FF6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:12 BEQ @UNKNOWN1
    case 0xC29FF7: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/magnet_omega.asm:14 JSL BTLACT_MAGNET_A
    case 0xC29FF9: {
        Instruction step(cpu, 0x22, 0xC29F5Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/magnet_omega.asm:16 END_C_FUNCTION
    case 0xC29FFD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
