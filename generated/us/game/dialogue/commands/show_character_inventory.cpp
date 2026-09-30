// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/show_character_inventory.asm
bool resume_text_ccs_show_character_inventory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/show_character_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC1549E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A1: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC154A3.
    case 0xC154A5: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC154A7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:14 STX @LOCAL01
    case 0xC154A8: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xC154A5.
    case 0xC154A9: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:16 TAY
    case 0xC154AA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:17 STY @LOCAL00
    case 0xC154AB: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    case 0xC154AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    // Overlapping static entry reached from 0xC154AD.
    case 0xC154AF: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:21 CLC
    case 0xC154B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:22 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154B1: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154B4: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154B6: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154B8: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC154BA: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:24 TXA
    case 0xC154BC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC154BD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154BF: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:27 STA CC_ARGUMENT_STORAGE,X
    case 0xC154C2: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC154C5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:29 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC154C7: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    case 0xC154CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00549Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC154CA.
    case 0xC154CC: {
        Instruction step(cpu, 0x54, 0x005880u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:31 BRA @UNKNOWN6
    case 0xC154CD: {
        Instruction step(cpu, 0x80, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC154CF: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    case 0xC154D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC154D2.
    case 0xC154D4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:44 STA @VIRTUAL02
    case 0xC154D5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:46 LDA CURRENT_FOCUS_WINDOW
    case 0xC154D7: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:47 CMP #1
    case 0xC154DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:47 CMP #1
    // Overlapping static entry reached from 0xC154DA.
    case 0xC154DC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:48 BNE @UNKNOWN3
    case 0xC154DD: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:49 LDA #1
    case 0xC154DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:49 LDA #1
    // Overlapping static entry reached from 0xC154DF.
    case 0xC154E1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:50 JSL UNKNOWN_EF0115
    case 0xC154E2: {
        Instruction step(cpu, 0x22, 0xEF0115u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:52 LDA CURRENT_FOCUS_WINDOW
    case 0xC154E6: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:53 ASL
    case 0xC154E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:54 TAX
    case 0xC154EA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:55 LDA OPEN_WINDOW_TABLE,X
    case 0xC154EB: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:56 LDY #.SIZEOF(window_stats)
    case 0xC154EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:56 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC154EE.
    case 0xC154F0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:57 JSL MULT168
    case 0xC154F1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:58 CLC
    case 0xC154F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:59 ADC #.LOWORD(WINDOW_STATS)
    case 0xC154F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:59 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC154F6.
    case 0xC154F8: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:60 TAX
    case 0xC154F9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:61 STZ a:window_stats::text_y,X
    case 0xC154FA: {
        Instruction step(cpu, 0x9E, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:62 TAX
    case 0xC154FD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:63 STZ a:window_stats::text_x,X
    case 0xC154FE: {
        Instruction step(cpu, 0x9E, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:64 LDY @LOCAL00
    case 0xC15501: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:65 TYA
    case 0xC15503: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:66 CLC
    case 0xC15504: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:67 ADC #6
    case 0xC15505: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:67 ADC #6
    // Overlapping static entry reached from 0xC15505.
    case 0xC15507: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:68 JSL UNKNOWN_C20A20
    case 0xC15508: {
        Instruction step(cpu, 0x22, 0xC20A20u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC1550C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:71 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1550E: {
        Instruction step(cpu, 0x9C, 0x005E71u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:73 LDX @LOCAL01
    case 0xC15511: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:75 BEQ @UNKNOWN4
    case 0xC15513: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC15515: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:79 TXA
    case 0xC15517: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:80 BRA @UNKNOWN5
    case 0xC15518: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:82 JSR GET_ARGUMENT_MEMORY
    case 0xC1551A: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:83 LDA @VIRTUAL06
    case 0xC1551D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:89 LDX @VIRTUAL02
    case 0xC1551F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:91 JSR INVENTORY_GET_ITEM_NAME
    case 0xC15521: {
        Instruction step(cpu, 0x20, 0x0098DEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    case 0xC15524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    // Overlapping static entry reached from 0xC15524.
    case 0xC15526: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC15527: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC15528: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
