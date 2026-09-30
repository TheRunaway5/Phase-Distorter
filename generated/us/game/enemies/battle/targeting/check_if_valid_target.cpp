// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/check_if_valid_target.asm
bool resume_battle_check_if_valid_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_if_valid_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A1F5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    case 0xC4A1F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC4A1F7.
    case 0xC4A1F9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:8 JSL MULT168
    case 0xC4A1FA: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:9 TAX
    case 0xC4A1FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:10 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC4A1FF: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    case 0xC4A202: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC4A202.
    case 0xC4A204: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:12 BEQ @INVALID
    case 0xC4A205: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:13 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC4A207: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    case 0xC4A20A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC4A20A.
    case 0xC4A20C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:15 BNE @INVALID
    case 0xC4A20D: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:16 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC4A20F: {
        Instruction step(cpu, 0xBD, 0x009FC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    case 0xC4A212: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC4A212.
    case 0xC4A214: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    case 0xC4A215: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC4A215.
    case 0xC4A217: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:19 BEQ @INVALID
    case 0xC4A218: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    case 0xC4A21A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC4A21A.
    case 0xC4A21C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:21 BEQ @INVALID
    case 0xC4A21D: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    case 0xC4A21F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    // Overlapping static entry reached from 0xC4A21F.
    case 0xC4A221: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:23 BRA @RETURN
    case 0xC4A222: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    case 0xC4A224: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC4A224.
    case 0xC4A226: {
        Instruction step(cpu, 0x00, 0x00006Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_if_valid_target.asm:27 END_C_FUNCTION
    case 0xC4A227: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
