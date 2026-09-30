// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/check_if_valid_target.asm
bool resume_battle_check_if_valid_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_if_valid_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47662: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    case 0xC47664: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC47664.
    case 0xC47666: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:8 JSL MULT168
    case 0xC47667: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:9 TAX
    case 0xC4766B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:10 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC4766C: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    case 0xC4766F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC4766F.
    case 0xC47671: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:12 BEQ @INVALID
    case 0xC47672: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:13 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC47674: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    case 0xC47677: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC47677.
    case 0xC47679: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:15 BNE @INVALID
    case 0xC4767A: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:16 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC4767C: {
        Instruction step(cpu, 0xBD, 0x00A1CBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    case 0xC4767F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC4767F.
    case 0xC47681: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    case 0xC47682: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC47682.
    case 0xC47684: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:19 BEQ @INVALID
    case 0xC47685: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    case 0xC47687: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC47687.
    case 0xC47689: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:21 BEQ @INVALID
    case 0xC4768A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    case 0xC4768C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    // Overlapping static entry reached from 0xC4768C.
    case 0xC4768E: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:23 BRA @RETURN
    case 0xC4768F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    case 0xC47691: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC47691.
    case 0xC47693: {
        Instruction step(cpu, 0x00, 0x00006Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_if_valid_target.asm:27 END_C_FUNCTION
    case 0xC47694: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
