// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/get_shield_targetting.asm
bool resume_battle_get_shield_targetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_shield_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23E9E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:7 CMP #BATTLE_ACTIONS::PSI_SHIELD_SIGMA
    case 0xC23EA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Au : 0x00002Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:7 CMP #BATTLE_ACTIONS::PSI_SHIELD_SIGMA
    // Overlapping static entry reached from 0xC23EA0.
    case 0xC23EA2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:8 BEQ @SINGLETARGET
    case 0xC23EA3: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:9 CMP #BATTLE_ACTIONS::PSI_SHIELD_OMEGA
    case 0xC23EA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:9 CMP #BATTLE_ACTIONS::PSI_SHIELD_OMEGA
    // Overlapping static entry reached from 0xC23EA5.
    case 0xC23EA7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:10 BEQ @SINGLETARGET
    case 0xC23EA8: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:11 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_SIGMA
    case 0xC23EAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Eu : 0x00002Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:11 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_SIGMA
    // Overlapping static entry reached from 0xC23EAA.
    case 0xC23EAC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:12 BEQ @SINGLETARGET
    case 0xC23EAD: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:13 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_OMEGA
    case 0xC23EAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:13 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_OMEGA
    // Overlapping static entry reached from 0xC23EAF.
    case 0xC23EB1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:14 BNE @MULTITARGET
    case 0xC23EB2: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:16 LDA #1
    case 0xC23EB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:16 LDA #1
    // Overlapping static entry reached from 0xC23EB4.
    case 0xC23EB6: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:17 BRA @RETURN
    case 0xC23EB7: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:19 LDA #0
    case 0xC23EB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_shield_targetting.asm:19 LDA #0
    // Overlapping static entry reached from 0xC23EB9.
    case 0xC23EBB: {
        Instruction step(cpu, 0x00, 0x00006Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/get_shield_targetting.asm:21 END_C_FUNCTION
    case 0xC23EBC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
