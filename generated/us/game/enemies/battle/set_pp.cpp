// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/set_pp.asm
bool resume_battle_set_pp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/set_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC27191: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27193: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27194: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27195: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27196: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC27196.
    case 0xC27198: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27199: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC2719A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:10 TXY
    case 0xC2719B: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/set_pp.asm:11 STY @LOCAL01
    case 0xC2719C: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/set_pp.asm:12 TAX
    case 0xC2719E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/set_pp.asm:13 LDA a:battler::pp_max,X
    case 0xC2719F: {
        Instruction step(cpu, 0xBD, 0x00001Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:14 STA @LOCAL00
    case 0xC271A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:15 STA @VIRTUAL02
    case 0xC271A4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:16 TYA
    case 0xC271A6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:17 CMP @VIRTUAL02
    case 0xC271A7: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/set_pp.asm:18 BLTEQ @UNKNOWN0
    case 0xC271A9: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/set_pp.asm:18 BLTEQ @UNKNOWN0
    case 0xC271AB: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/set_pp.asm:19 LDA @LOCAL00
    case 0xC271AD: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:20 TAY
    case 0xC271AF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/set_pp.asm:21 STY @LOCAL01
    case 0xC271B0: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/set_pp.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC271B2: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:24 AND #$00FF
    case 0xC271B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC271B5.
    case 0xC271B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_pp.asm:25 BNE @UNKNOWN2
    case 0xC271B8: {
        Instruction step(cpu, 0xD0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/set_pp.asm:26 LDA a:battler::npc_id,X
    case 0xC271BA: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:27 AND #$00FF
    case 0xC271BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC271BD.
    case 0xC271BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_pp.asm:28 BNE @UNKNOWN1
    case 0xC271C0: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/set_pp.asm:29 TYA
    case 0xC271C2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:30 STA a:battler::pp_target,X
    case 0xC271C3: {
        Instruction step(cpu, 0x9D, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:31 LDA a:battler::row,X
    case 0xC271C6: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:32 AND #$00FF
    case 0xC271C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC271C9.
    case 0xC271CB: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_pp.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC271CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/set_pp.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC271CC.
    case 0xC271CE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_pp.asm:34 JSL MULT168
    case 0xC271CF: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/set_pp.asm:35 TAX
    case 0xC271D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/set_pp.asm:36 LDY @LOCAL01
    case 0xC271D4: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/set_pp.asm:37 TYA
    case 0xC271D6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:38 STA PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC271D7: {
        Instruction step(cpu, 0x9D, 0x009A1Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:39 BRA @UNKNOWN3
    case 0xC271DA: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/set_pp.asm:41 TYA
    case 0xC271DC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:42 STA a:battler::pp,X
    case 0xC271DD: {
        Instruction step(cpu, 0x9D, 0x000017u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:43 TYA
    case 0xC271E0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:44 STA a:battler::pp_target,X
    case 0xC271E1: {
        Instruction step(cpu, 0x9D, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:45 BRA @UNKNOWN3
    case 0xC271E4: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/set_pp.asm:47 TYA
    case 0xC271E6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:48 STA a:battler::pp,X
    case 0xC271E7: {
        Instruction step(cpu, 0x9D, 0x000017u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:49 TYA
    case 0xC271EA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_pp.asm:50 STA a:battler::pp_target,X
    case 0xC271EB: {
        Instruction step(cpu, 0x9D, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/set_pp.asm:52 END_C_FUNCTION
    case 0xC271EE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/set_pp.asm:52 END_C_FUNCTION
    case 0xC271EF: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
