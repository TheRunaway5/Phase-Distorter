// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/print_letter.asm
bool resume_text_print_letter(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_letter.asm:3 BEGIN_C_FUNCTION
    case 0xC10CB6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CB8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CB9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC10CBB.
    case 0xC10CBD: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:9 TAY
    case 0xC10CC0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_letter.asm:10 STY @LOCAL01
    case 0xC10CC1: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_letter.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC10CC3: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:12 CMP #.LOWORD(-1)
    case 0xC10CC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10CC6.
    case 0xC10CC8: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_letter.asm:13 BEQL @UNKNOWN9
    case 0xC10CC9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_letter.asm:13 BEQL @UNKNOWN9
    case 0xC10CCB: {
        Instruction step(cpu, 0x4C, 0x000D5Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_letter.asm:13 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC10CC8.
    case 0xC10CCC: {
        Instruction step(cpu, 0x5E, 0x00AD0Du, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/print_letter.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC10CCE: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10CCC.
    case 0xC10CCF: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/print_letter.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC102F1.
    case 0xC10CD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x00000Au : 0x00AA0Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_letter.asm:15 ASL
    case 0xC10CD1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_letter.asm:16 TAX
    case 0xC10CD2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_letter.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC10CD3: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC10CD6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/print_letter.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10CD6.
    case 0xC10CD8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:19 JSL MULT168
    case 0xC10CD9: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_letter.asm:20 TAX
    case 0xC10CDD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_letter.asm:21 LDA WINDOW_STATS+window_stats::font,X
    case 0xC10CDE: {
        Instruction step(cpu, 0xBD, 0x008665u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:22 LDY @LOCAL01
    case 0xC10CE1: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_letter.asm:23 TYX
    case 0xC10CE3: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/print_letter.asm:24 JSL UNKNOWN_C44E61
    case 0xC10CE4: {
        Instruction step(cpu, 0x22, 0xC44E61u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_letter.asm:25 LDA CURRENT_FOCUS_WINDOW
    case 0xC10CE8: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:26 ASL
    case 0xC10CEB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_letter.asm:27 TAX
    case 0xC10CEC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_letter.asm:28 LDA OPEN_WINDOW_TABLE,X
    case 0xC10CED: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:29 CMP WINDOW_TAIL
    case 0xC10CF0: {
        Instruction step(cpu, 0xCD, 0x0088E2u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:30 BEQ @UNKNOWN1
    case 0xC10CF3: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC10CF5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_letter.asm:32 LDA #1
    case 0xC10CF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:33 STA REDRAW_ALL_WINDOWS
    case 0xC10CF9: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:33 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10CF7.
    case 0xC10CFA: {
        Instruction step(cpu, 0x23, 0x000096u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC10CFC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/print_letter.asm:36 LDA TEXT_SOUND_MODE
    case 0xC10CFE: {
        Instruction step(cpu, 0xAD, 0x00964Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:37 CMP #2
    case 0xC10D01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:37 CMP #2
    // Overlapping static entry reached from 0xC10D01.
    case 0xC10D03: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:38 BNE @UNKNOWN2
    case 0xC10D04: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:39 LDX #1
    case 0xC10D06: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter.asm:39 LDX #1
    // Overlapping static entry reached from 0xC10D06.
    case 0xC10D08: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:40 BRA @UNKNOWN5
    case 0xC10D09: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_letter.asm:42 LDA TEXT_SOUND_MODE
    case 0xC10D0B: {
        Instruction step(cpu, 0xAD, 0x00964Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:43 CMP #3
    case 0xC10D0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:43 CMP #3
    // Overlapping static entry reached from 0xC10D0E.
    case 0xC10D10: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:44 BNE @UNKNOWN3
    case 0xC10D11: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:45 LDX #0
    case 0xC10D13: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter.asm:45 LDX #0
    // Overlapping static entry reached from 0xC10D13.
    case 0xC10D15: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:46 BRA @UNKNOWN5
    case 0xC10D16: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_letter.asm:48 LDX #0
    case 0xC10D18: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter.asm:48 LDX #0
    // Overlapping static entry reached from 0xC10D18.
    case 0xC10D1A: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:49 LDA BLINKING_TRIANGLE_FLAG
    case 0xC10D1B: {
        Instruction step(cpu, 0xAD, 0x00964Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:50 BNE @UNKNOWN5
    case 0xC10D1E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:51 LDX #1
    case 0xC10D20: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter.asm:51 LDX #1
    // Overlapping static entry reached from 0xC10D20.
    case 0xC10D22: {
        Instruction step(cpu, 0x00, 0x0000E0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:53 CPX #0
    case 0xC10D23: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/print_letter.asm:53 CPX #0
    // Overlapping static entry reached from 0xC10D23.
    case 0xC10D25: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:54 BEQ @UNKNOWN6
    case 0xC10D26: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:55 LDA INSTANT_PRINTING
    case 0xC10D28: {
        Instruction step(cpu, 0xAD, 0x009622u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:56 AND #$00FF
    case 0xC10D2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC10D2B.
    case 0xC10D2D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:57 BNE @UNKNOWN6
    case 0xC10D2E: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:58 LDY @LOCAL01
    case 0xC10D30: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_letter.asm:59 CPY #32
    case 0xC10D32: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/print_letter.asm:59 CPY #32
    // Overlapping static entry reached from 0xC10D32.
    case 0xC10D34: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:60 BEQ @UNKNOWN6
    case 0xC10D35: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:62 CPY #CHAR::SPACE
    case 0xC10D37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/print_letter.asm:62 CPY #CHAR::SPACE
    // Overlapping static entry reached from 0xC10D37.
    case 0xC10D39: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:63 BEQ @UNKNOWN6
    case 0xC10D3A: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:65 LDA #SFX::TEXT_PRINT
    case 0xC10D3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:65 LDA #SFX::TEXT_PRINT
    // Overlapping static entry reached from 0xC10D3C.
    case 0xC10D3E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:66 JSL PLAY_SOUND
    case 0xC10D3F: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_letter.asm:68 LDA INSTANT_PRINTING
    case 0xC10D43: {
        Instruction step(cpu, 0xAD, 0x009622u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:69 AND #$00FF
    case 0xC10D46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_letter.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC10D46.
    case 0xC10D48: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_letter.asm:70 BNE @UNKNOWN9
    case 0xC10D49: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_letter.asm:71 LDX SELECTED_TEXT_SPEED
    case 0xC10D4B: {
        Instruction step(cpu, 0xAE, 0x009625u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter.asm:72 INX
    case 0xC10D4E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_letter.asm:73 STX @LOCAL00
    case 0xC10D4F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_letter.asm:74 BRA @UNKNOWN8
    case 0xC10D51: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_letter.asm:76 JSL WINDOW_TICK
    case 0xC10D53: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_letter.asm:77 LDX @LOCAL00
    case 0xC10D57: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_letter.asm:78 DEX
    case 0xC10D59: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/print_letter.asm:79 STX @LOCAL00
    case 0xC10D5A: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_letter.asm:81 BNE @UNKNOWN7
    case 0xC10D5C: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_letter.asm:83 END_C_FUNCTION
    case 0xC10D5E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_letter.asm:83 END_C_FUNCTION
    case 0xC10D5F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
