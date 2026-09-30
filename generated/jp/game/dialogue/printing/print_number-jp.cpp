// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/print_number-jp.asm
bool resume_text_print_number_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_number-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC11344: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC11346: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC11347: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC11348: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC11348.
    case 0xC1134A: {
        Instruction step(cpu, 0xFF, 0x26A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC1134B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1134C: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1134E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC11350: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC11352: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC11354: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:13 CMP #.LOWORD(-1)
    case 0xC11357: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11357.
    case 0xC11359: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_number-jp.asm:14 BEQL @UNKNOWN6
    case 0xC1135A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number-jp.asm:14 BEQL @UNKNOWN6
    case 0xC1135C: {
        Instruction step(cpu, 0x4C, 0x001402u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number-jp.asm:14 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC11359.
    case 0xC1135D: {
        Instruction step(cpu, 0x02, 0x000014u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC1135F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00967Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC1135F.
    case 0xC11361: {
        Instruction step(cpu, 0x96, 0x000085u, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC11362: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC11361.
    case 0xC11363: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC11364: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC11363.
    case 0xC11365: {
        Instruction step(cpu, 0xFF, 0x0885FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC11364.
    case 0xC11366: {
        Instruction step(cpu, 0xFF, 0xA50885u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC11367: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:20 LDA @VIRTUAL06
    case 0xC11369: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:20 LDA @VIRTUAL06
    // Overlapping static entry reached from 0xC11366.
    case 0xC1136A: {
        Instruction step(cpu, 0x06, 0x0000C5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number-jp.asm:21 CMP @VIRTUAL0A
    case 0xC1136B: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:21 CMP @VIRTUAL0A
    // Overlapping static entry reached from 0xC1136A.
    case 0xC1136C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number-jp.asm:22 LDA @VIRTUAL06+2
    case 0xC1136D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:23 SBC @VIRTUAL0A+2
    case 0xC1136F: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_number-jp.asm:24 BCS @UNKNOWN1
    case 0xC11371: {
        Instruction step(cpu, 0xB0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11373: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11375: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11377: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11379: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:27 LDA CURRENT_FOCUS_WINDOW
    case 0xC1137B: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:28 ASL
    case 0xC1137E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_number-jp.asm:29 TAX
    case 0xC1137F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:30 LDA OPEN_WINDOW_TABLE,X
    case 0xC11380: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:31 LDY #.SIZEOF(window_stats)
    case 0xC11383: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:31 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11383.
    case 0xC11385: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:32 JSL MULT168
    case 0xC11386: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_number-jp.asm:33 CLC
    case 0xC1138A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_number-jp.asm:34 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1138B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_number-jp.asm:34 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1138B.
    case 0xC1138D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x0086AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_number-jp.asm:35 TAX
    case 0xC1138E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:36 STX @LOCAL03
    case 0xC1138F: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:36 STX @LOCAL03
    // Overlapping static entry reached from 0xC1138D.
    case 0xC11390: {
        Instruction step(cpu, 0x16, 0x0000A5u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11391: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    // Overlapping static entry reached from 0xC11390.
    case 0xC11392: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11393: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11395: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11397: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:38 JSR UNKNOWN_C10D7C
    case 0xC11399: {
        Instruction step(cpu, 0x20, 0x0012CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_number-jp.asm:39 TAY
    case 0xC1139C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:40 STY @LOCAL02
    case 0xC1139D: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:41 STY @VIRTUAL04
    case 0xC1139F: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:42 LDA #7
    case 0xC113A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:42 LDA #7
    // Overlapping static entry reached from 0xC113A1.
    case 0xC113A3: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:43 SEC
    case 0xC113A4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/print_number-jp.asm:44 SBC @VIRTUAL04
    case 0xC113A5: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_number-jp.asm:45 CLC
    case 0xC113A7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_number-jp.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC113A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000098u : 0x008C98u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_number-jp.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC113A8.
    case 0xC113AA: {
        Instruction step(cpu, 0x8C, 0x000285u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:47 STA @VIRTUAL02
    case 0xC113AB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:48 LDX @LOCAL03
    case 0xC113AD: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:49 LDA a:window_stats::number_padding,X
    case 0xC113AF: {
        Instruction step(cpu, 0xBD, 0x000012u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:50 AND #$00FF
    case 0xC113B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC113B2.
    case 0xC113B4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:51 STA @LOCAL01
    case 0xC113B5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:52 AND #$0080
    case 0xC113B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:52 AND #$0080
    // Overlapping static entry reached from 0xC113B7.
    case 0xC113B9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:53 BNE @UNKNOWN5
    case 0xC113BA: {
        Instruction step(cpu, 0xD0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_number-jp.asm:54 LDA @LOCAL01
    case 0xC113BC: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:55 AND #$000F
    case 0xC113BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:55 AND #$000F
    // Overlapping static entry reached from 0xC113BE.
    case 0xC113C0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:56 TAX
    case 0xC113C1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:57 INX
    case 0xC113C2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:58 STX @LOCAL03
    case 0xC113C3: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:59 STY @VIRTUAL04
    case 0xC113C5: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:60 TXA
    case 0xC113C7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:61 CMP @VIRTUAL04
    case 0xC113C8: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:62 BCS @UNKNOWN3
    case 0xC113CA: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/print_number-jp.asm:63 TYX
    case 0xC113CC: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:64 STX @LOCAL03
    case 0xC113CD: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:65 BRA @UNKNOWN3
    case 0xC113CF: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_number-jp.asm:67 LDA #CHAR::SPACE
    case 0xC113D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:67 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC113D1.
    case 0xC113D3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:68 JSR PRINT_LETTER
    case 0xC113D4: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_number-jp.asm:69 LDX @LOCAL03
    case 0xC113D7: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:70 DEX
    case 0xC113D9: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:71 STX @LOCAL03
    case 0xC113DA: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:73 LDY @LOCAL02
    case 0xC113DC: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:74 STY @VIRTUAL04
    case 0xC113DE: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:75 TXA
    case 0xC113E0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:76 CMP @VIRTUAL04
    case 0xC113E1: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:77 BNE @UNKNOWN2
    case 0xC113E3: {
        Instruction step(cpu, 0xD0, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_number-jp.asm:78 BRA @UNKNOWN5
    case 0xC113E5: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_number-jp.asm:80 LDX @VIRTUAL02
    case 0xC113E7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_number-jp.asm:81 LDA __BSS_START__,X
    case 0xC113E9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:82 AND #$00FF
    case 0xC113EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_number-jp.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC113EC.
    case 0xC113EE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:83 CLC
    case 0xC113EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_number-jp.asm:84 ADC #CHAR::ZERO
    case 0xC113F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_number-jp.asm:84 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC113F0.
    case 0xC113F2: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:85 INC @VIRTUAL02
    case 0xC113F3: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/print_number-jp.asm:86 JSR PRINT_LETTER
    case 0xC113F5: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_number-jp.asm:87 LDY @LOCAL02
    case 0xC113F8: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:88 DEY
    case 0xC113FA: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:89 STY @LOCAL02
    case 0xC113FB: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:91 CPY #0
    case 0xC113FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/print_number-jp.asm:91 CPY #0
    // Overlapping static entry reached from 0xC113FD.
    case 0xC113FF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_number-jp.asm:92 BNE @UNKNOWN4
    case 0xC11400: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_number-jp.asm:94 END_C_FUNCTION
    case 0xC11402: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_number-jp.asm:94 END_C_FUNCTION
    case 0xC11403: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
