// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/print_number.asm
bool resume_text_print_number(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_number.asm:3 BEGIN_C_FUNCTION
    case 0xC10DF6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DF8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DF9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC10DFA.
    case 0xC10DFC: {
        Instruction step(cpu, 0xFF, 0x26A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DFD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10DFE: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10E00: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10E02: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10E04: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC10E06: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:13 CMP #.LOWORD(-1)
    case 0xC10E09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10E09.
    case 0xC10E0B: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_number.asm:14 BEQL @UNKNOWN6
    case 0xC10E0C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number.asm:14 BEQL @UNKNOWN6
    case 0xC10E0E: {
        Instruction step(cpu, 0x4C, 0x000EB2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number.asm:14 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC10E0B.
    case 0xC10E0F: {
        Instruction step(cpu, 0xB2, 0x00000Eu, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00967Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E11.
    case 0xC10E13: {
        Instruction step(cpu, 0x96, 0x000085u, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E14: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E13.
    case 0xC10E15: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E15.
    case 0xC10E17: {
        Instruction step(cpu, 0xFF, 0x0885FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E16.
    case 0xC10E18: {
        Instruction step(cpu, 0xFF, 0xA50885u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E19: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:20 LDA @VIRTUAL06
    case 0xC10E1B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:20 LDA @VIRTUAL06
    // Overlapping static entry reached from 0xC10E18.
    case 0xC10E1C: {
        Instruction step(cpu, 0x06, 0x0000C5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number.asm:21 CMP @VIRTUAL0A
    case 0xC10E1D: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:21 CMP @VIRTUAL0A
    // Overlapping static entry reached from 0xC10E1C.
    case 0xC10E1E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number.asm:22 LDA @VIRTUAL06+2
    case 0xC10E1F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:23 SBC @VIRTUAL0A+2
    case 0xC10E21: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_number.asm:24 BCS @UNKNOWN1
    case 0xC10E23: {
        Instruction step(cpu, 0xB0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E25: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E27: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E29: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E2B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:27 LDA CURRENT_FOCUS_WINDOW
    case 0xC10E2D: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:28 ASL
    case 0xC10E30: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number.asm:29 TAX
    case 0xC10E31: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_number.asm:30 LDA OPEN_WINDOW_TABLE,X
    case 0xC10E32: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:31 LDY #.SIZEOF(window_stats)
    case 0xC10E35: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/print_number.asm:31 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10E35.
    case 0xC10E37: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number.asm:32 JSL MULT168
    case 0xC10E38: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_number.asm:33 CLC
    case 0xC10E3C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_number.asm:34 ADC #.LOWORD(WINDOW_STATS)
    case 0xC10E3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_number.asm:34 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC10E3D.
    case 0xC10E3F: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number.asm:35 STA @LOCAL03
    case 0xC10E40: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:35 STA @LOCAL03
    // Overlapping static entry reached from 0xC10E3F.
    case 0xC10E41: {
        Instruction step(cpu, 0x16, 0x0000A5u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E42: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC10E41.
    case 0xC10E43: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E44: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E46: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E48: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E4A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E4C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E4E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E50: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:38 JSR UNKNOWN_C10D7C
    case 0xC10E52: {
        Instruction step(cpu, 0x20, 0x000D7Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_number.asm:39 TAX
    case 0xC10E55: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_number.asm:40 STX @LOCAL02
    case 0xC10E56: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number.asm:41 STX @VIRTUAL02
    case 0xC10E58: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number.asm:42 LDA #7
    case 0xC10E5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:42 LDA #7
    // Overlapping static entry reached from 0xC10E5A.
    case 0xC10E5C: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number.asm:43 SEC
    case 0xC10E5D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/print_number.asm:44 SBC @VIRTUAL02
    case 0xC10E5E: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_number.asm:45 CLC
    case 0xC10E60: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_number.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC10E61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Au : 0x00895Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_number.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC10E61.
    case 0xC10E63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x0084A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_number.asm:47 TAY
    case 0xC10E64: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_number.asm:48 STY @LOCAL01
    case 0xC10E65: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number.asm:48 STY @LOCAL01
    // Overlapping static entry reached from 0xC10E63.
    case 0xC10E66: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:49 LDA @LOCAL03
    case 0xC10E67: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:49 LDA @LOCAL03
    // Overlapping static entry reached from 0xC10E66.
    case 0xC10E68: {
        Instruction step(cpu, 0x16, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number.asm:50 TAX
    case 0xC10E69: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_number.asm:51 LDA a:window_stats::number_padding,X
    case 0xC10E6A: {
        Instruction step(cpu, 0xBD, 0x000012u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:52 AND #$00FF
    case 0xC10E6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC10E6D.
    case 0xC10E6F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number.asm:53 STA @LOCAL03
    case 0xC10E70: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:54 AND #$0080
    case 0xC10E72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:54 AND #$0080
    // Overlapping static entry reached from 0xC10E72.
    case 0xC10E74: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number.asm:55 BNE @UNKNOWN5
    case 0xC10E75: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_number.asm:56 LDA @LOCAL03
    case 0xC10E77: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:57 AND #$000F
    case 0xC10E79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:57 AND #$000F
    // Overlapping static entry reached from 0xC10E79.
    case 0xC10E7B: {
        Instruction step(cpu, 0x00, 0x00001Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number.asm:58 INC
    case 0xC10E7C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/print_number.asm:59 LDX @LOCAL02
    case 0xC10E7D: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_number.asm:60 STX @VIRTUAL02
    case 0xC10E7F: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number.asm:61 CMP @VIRTUAL02
    case 0xC10E81: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:62 BCS @UNKNOWN2
    case 0xC10E83: {
        Instruction step(cpu, 0xB0, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/print_number.asm:63 TXA
    case 0xC10E85: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:65 STX @VIRTUAL02
    case 0xC10E86: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number.asm:66 SEC
    case 0xC10E88: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/print_number.asm:67 SBC @VIRTUAL02
    case 0xC10E89: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E8B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E8D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E8E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E90: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number.asm:69 JSL UNKNOWN_C43D95
    case 0xC10E91: {
        Instruction step(cpu, 0x22, 0xC43D95u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_number.asm:70 BRA @UNKNOWN5
    case 0xC10E95: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_number.asm:72 LDY @LOCAL01
    case 0xC10E97: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_number.asm:73 LDA __BSS_START__,Y
    case 0xC10E99: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:74 AND #$00FF
    case 0xC10E9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC10E9C.
    case 0xC10E9E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number.asm:75 CLC
    case 0xC10E9F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_number.asm:76 ADC #CHAR::ZERO
    case 0xC10EA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_number.asm:76 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC10EA0.
    case 0xC10EA2: {
        Instruction step(cpu, 0x00, 0x0000C8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number.asm:77 INY
    case 0xC10EA3: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/print_number.asm:78 STY @LOCAL01
    case 0xC10EA4: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number.asm:79 JSR PRINT_LETTER
    case 0xC10EA6: {
        Instruction step(cpu, 0x20, 0x000CB6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_number.asm:80 LDX @LOCAL02
    case 0xC10EA9: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_number.asm:81 DEX
    case 0xC10EAB: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/print_number.asm:82 STX @LOCAL02
    case 0xC10EAC: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number.asm:84 LDX @LOCAL02
    case 0xC10EAE: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_number.asm:85 BNE @UNKNOWN4
    case 0xC10EB0: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_number.asm:87 END_C_FUNCTION
    case 0xC10EB2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_number.asm:87 END_C_FUNCTION
    case 0xC10EB3: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
