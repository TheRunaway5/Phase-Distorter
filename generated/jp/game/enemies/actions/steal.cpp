// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/steal.asm
bool resume_battle_actions_steal(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/steal.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28845: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/steal.asm:5 LDX CURRENT_TARGET
    case 0xC28847: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/steal.asm:6 LDA a:battler::ally_or_enemy,X
    case 0xC2884A: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:7 AND #$00FF
    case 0xC2884D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC2884D.
    case 0xC2884F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:8 CMP #1
    case 0xC28850: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:8 CMP #1
    // Overlapping static entry reached from 0xC28850.
    case 0xC28852: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:9 BEQ @UNKNOWN1
    case 0xC28853: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/steal.asm:10 LDX CURRENT_TARGET
    case 0xC28855: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/steal.asm:11 LDA a:battler::npc_id,X
    case 0xC28858: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:12 AND #$00FF
    case 0xC2885B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2885B.
    case 0xC2885D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:13 BNE @UNKNOWN1
    case 0xC2885E: {
        Instruction step(cpu, 0xD0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/steal.asm:14 LDA MIRROR_ENEMY
    case 0xC28860: {
        Instruction step(cpu, 0xAD, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:15 BEQ @UNKNOWN0
    case 0xC28863: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/steal.asm:16 LDX CURRENT_ATTACKER
    case 0xC28865: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/steal.asm:17 LDA a:battler::ally_or_enemy,X
    case 0xC28868: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:18 AND #$00FF
    case 0xC2886B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2886B.
    case 0xC2886D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:19 BNE @UNKNOWN0
    case 0xC2886E: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/steal.asm:20 LDX CURRENT_ATTACKER
    case 0xC28870: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/steal.asm:21 LDA __BSS_START__,X
    case 0xC28873: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:22 CMP #4
    case 0xC28876: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:22 CMP #4
    // Overlapping static entry reached from 0xC28876.
    case 0xC28878: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:23 BEQ @UNKNOWN1
    case 0xC28879: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/steal.asm:25 LDX CURRENT_ATTACKER
    case 0xC2887B: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/steal.asm:26 LDA a:battler::current_action_argument,X
    case 0xC2887E: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:27 AND #$00FF
    case 0xC28881: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC28881.
    case 0xC28883: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:28 BEQ @UNKNOWN1
    case 0xC28884: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/steal.asm:29 AND #$00FF
    case 0xC28886: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC28886.
    case 0xC28888: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:30 TAX
    case 0xC28889: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/steal.asm:31 LDA #$00FF
    case 0xC2888A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/steal.asm:31 LDA #$00FF
    // Overlapping static entry reached from 0xC2888A.
    case 0xC2888C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/steal.asm:32 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC2888D: {
        Instruction step(cpu, 0x22, 0xC18F56u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/steal.asm:34 END_C_FUNCTION
    case 0xC28891: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
