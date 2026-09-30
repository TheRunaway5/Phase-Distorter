// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/set_hp.asm
bool resume_battle_set_hp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/set_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC27065: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27067: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27068: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27069: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2706A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2706A.
    case 0xC2706C: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2706D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2706E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:10 TXY
    case 0xC2706F: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/set_hp.asm:11 STY @LOCAL01
    case 0xC27070: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/set_hp.asm:12 TAX
    case 0xC27072: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/set_hp.asm:13 LDA a:battler::hp_max,X
    case 0xC27073: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:14 STA @LOCAL00
    case 0xC27076: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:15 STA @VIRTUAL02
    case 0xC27078: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:16 TYA
    case 0xC2707A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:17 CMP @VIRTUAL02
    case 0xC2707B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/set_hp.asm:18 BLTEQ @UNKNOWN0
    case 0xC2707D: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/set_hp.asm:18 BLTEQ @UNKNOWN0
    case 0xC2707F: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/set_hp.asm:19 LDA @LOCAL00
    case 0xC27081: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:20 TAY
    case 0xC27083: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/set_hp.asm:21 STY @LOCAL01
    case 0xC27084: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/set_hp.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC27086: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:24 AND #$00FF
    case 0xC27089: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC27089.
    case 0xC2708B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_hp.asm:25 BNE @UNKNOWN2
    case 0xC2708C: {
        Instruction step(cpu, 0xD0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/set_hp.asm:26 LDA a:battler::npc_id,X
    case 0xC2708E: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:27 AND #$00FF
    case 0xC27091: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC27091.
    case 0xC27093: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_hp.asm:28 BNE @UNKNOWN1
    case 0xC27094: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/set_hp.asm:29 TYA
    case 0xC27096: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:30 STA a:battler::hp_target,X
    case 0xC27097: {
        Instruction step(cpu, 0x9D, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:31 LDA a:battler::row,X
    case 0xC2709A: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:32 AND #$00FF
    case 0xC2709D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC2709D.
    case 0xC2709F: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_hp.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC270A0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/set_hp.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC270A0.
    case 0xC270A2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_hp.asm:34 JSL MULT168
    case 0xC270A3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/set_hp.asm:35 TAX
    case 0xC270A7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/set_hp.asm:36 LDY @LOCAL01
    case 0xC270A8: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/set_hp.asm:37 TYA
    case 0xC270AA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:38 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC270AB: {
        Instruction step(cpu, 0x9D, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:39 BRA @UNKNOWN3
    case 0xC270AE: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/set_hp.asm:41 TYA
    case 0xC270B0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:42 STA a:battler::hp,X
    case 0xC270B1: {
        Instruction step(cpu, 0x9D, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:43 TYA
    case 0xC270B4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:44 STA a:battler::hp_target,X
    case 0xC270B5: {
        Instruction step(cpu, 0x9D, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:45 LDA a:battler::row,X
    case 0xC270B8: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:46 AND #$00FF
    case 0xC270BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC270BB.
    case 0xC270BD: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/set_hp.asm:47 ASL
    case 0xC270BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/set_hp.asm:49 CLC
    case 0xC270BF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/set_hp.asm:50 ADC #.LOWORD(GAME_STATE)
    case 0xC270C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/set_hp.asm:50 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC270C0.
    case 0xC270C2: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/set_hp.asm:51 TAX
    case 0xC270C3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/set_hp.asm:52 TYA
    case 0xC270C4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:53 STA a:game_state::party_npc_1_hp,X
    case 0xC270C5: {
        Instruction step(cpu, 0x9D, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:59 BRA @UNKNOWN3
    case 0xC270C8: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/set_hp.asm:61 TYA
    case 0xC270CA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:62 STA a:battler::hp,X
    case 0xC270CB: {
        Instruction step(cpu, 0x9D, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:63 TYA
    case 0xC270CE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/set_hp.asm:64 STA a:battler::hp_target,X
    case 0xC270CF: {
        Instruction step(cpu, 0x9D, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/set_hp.asm:66 END_C_FUNCTION
    case 0xC270D2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/set_hp.asm:66 END_C_FUNCTION
    case 0xC270D3: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
