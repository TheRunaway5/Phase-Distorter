// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/halt.asm
bool resume_text_ccs_halt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/halt.asm:3 BEGIN_C_FUNCTION
    case 0xC1036B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1036D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1036E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1036F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10370: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC10370.
    case 0xC10372: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10373: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10374: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    case 0xC10375: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC10372.
    case 0xC10376: {
        Instruction step(cpu, 0x14, 0x0000A8u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:13 TAY
    case 0xC10377: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:14 STY @LOCAL01
    case 0xC10378: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:15 BRA @UNKNOWN1
    case 0xC1037A: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:17 LDA DEBUG
    case 0xC1037C: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:18 BEQ @UNKNOWN1
    case 0xC1037F: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:18 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC17DC3.
    case 0xC10380: {
        Instruction step(cpu, 0x10, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/halt.asm:19 LDA PAD_PRESS
    case 0xC10381: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:19 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC10380.
    case 0xC10382: {
        Instruction step(cpu, 0x6D, 0x002900u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10384: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000010u : 0x008010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10382.
    case 0xC10385: {
        Instruction step(cpu, 0x10, 0x000080u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10384.
    case 0xC10386: {
        Instruction step(cpu, 0x80, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10387: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x008010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10387.
    case 0xC10389: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:22 BNE @UNKNOWN1
    case 0xC1038A: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:23 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC1038C: {
        Instruction step(cpu, 0x9C, 0x00993Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:24 BRA @UNKNOWN2
    case 0xC1038F: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:26 LDA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC10391: {
        Instruction step(cpu, 0xAD, 0x00993Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:27 BNE @UNKNOWN0
    case 0xC10394: {
        Instruction step(cpu, 0xD0, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:29 JSR CLEAR_INSTANT_PRINTING
    case 0xC10396: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/halt.asm:30 JSL WINDOW_TICK
    case 0xC10399: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:31 LDX @LOCAL02
    case 0xC1039D: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:32 BNE @UNKNOWN3
    case 0xC1039F: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:33 LDA BLINKING_TRIANGLE_FLAG
    case 0xC103A1: {
        Instruction step(cpu, 0xAD, 0x009945u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:34 BEQ @UNKNOWN3
    case 0xC103A4: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:35 LDA TEXT_SPEED_BASED_WAIT
    case 0xC103A6: {
        Instruction step(cpu, 0xAD, 0x009943u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:36 BEQ @UNKNOWN3
    case 0xC103A9: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:37 LDA #0
    case 0xC103AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:37 LDA #0
    // Overlapping static entry reached from 0xC103AB.
    case 0xC103AD: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:38 JSR UNKNOWN_C100FE
    case 0xC103AE: {
        Instruction step(cpu, 0x20, 0x000303u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/halt.asm:39 JMP @UNKNOWN14
    case 0xC103B1: {
        Instruction step(cpu, 0x4C, 0x0004D2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:41 LDA BLINKING_TRIANGLE_FLAG
    case 0xC103B4: {
        Instruction step(cpu, 0xAD, 0x009945u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:42 BEQ @UNKNOWN4
    case 0xC103B7: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:43 JSL PAUSE_MUSIC
    case 0xC103B9: {
        Instruction step(cpu, 0x22, 0xC1341Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:45 LDA CURRENT_FOCUS_WINDOW
    case 0xC103BD: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:46 ASL
    case 0xC103C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:47 TAX
    case 0xC103C1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:48 LDA OPEN_WINDOW_TABLE,X
    case 0xC103C2: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC103C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC103C5.
    case 0xC103C7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:50 JSL MULT168
    case 0xC103C8: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:51 CLC
    case 0xC103CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC103CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC103CD.
    case 0xC103CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    case 0xC103D0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC103CF.
    case 0xC103D1: {
        Instruction step(cpu, 0x02, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/halt.asm:54 LDY @LOCAL01
    case 0xC103D2: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:55 BNE @UNKNOWN7
    case 0xC103D4: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:56 BRA @UNKNOWN6
    case 0xC103D6: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:58 JSL UNKNOWN_C12E42
    case 0xC103D8: {
        Instruction step(cpu, 0x22, 0xC1355Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:60 LDA PAD_PRESS
    case 0xC103DC: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC103DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x00A0A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC103DF.
    case 0xC103E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x00F4F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    case 0xC103E2: {
        Instruction step(cpu, 0xF0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC103E1.
    case 0xC103E3: {
        Instruction step(cpu, 0xF4, 0x00CE4Cu, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    case 0xC103E4: {
        Instruction step(cpu, 0x4C, 0x0004CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC103E3.
    case 0xC103E6: {
        Instruction step(cpu, 0x04, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F8u : 0x00E3F8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103E6.
    case 0xC103E8: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103E7.
    case 0xC103E9: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103EA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103E9.
    case 0xC103EB: {
        Instruction step(cpu, 0x0E, 0x00C3A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103EC.
    case 0xC103EE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103EF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:66 LDX @VIRTUAL02
    case 0xC103F1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:67 LDA a:window_stats::window_y,X
    case 0xC103F3: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:68 LDX @VIRTUAL02
    case 0xC103F6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:69 CLC
    case 0xC103F8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:70 ADC a:window_stats::height,X
    case 0xC103F9: {
        Instruction step(cpu, 0x7D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10400: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:72 STA @VIRTUAL04
    case 0xC10401: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:73 LDX @VIRTUAL02
    case 0xC10403: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:74 LDA a:window_stats::window_x,X
    case 0xC10405: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:75 LDX @VIRTUAL02
    case 0xC10408: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:76 CLC
    case 0xC1040A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:77 ADC a:window_stats::width,X
    case 0xC1040B: {
        Instruction step(cpu, 0x7D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:78 CLC
    case 0xC1040E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:79 ADC @VIRTUAL04
    case 0xC1040F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:80 CLC
    case 0xC10411: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC10412: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC10412.
    case 0xC10414: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:82 TAY
    case 0xC10415: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:83 LDX #2
    case 0xC10416: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:83 LDX #2
    // Overlapping static entry reached from 0xC10416.
    case 0xC10418: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC10419: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:85 LDA #0
    case 0xC1041B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    case 0xC1041D: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1041B.
    case 0xC1041E: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1041E.
    case 0xC10420: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x000FA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:88 LDX #15
    case 0xC10421: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC10420.
    case 0xC10422: {
        Instruction step(cpu, 0x0F, 0x128600u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC10421.
    case 0xC10423: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:89 STX @LOCAL01
    case 0xC10424: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:90 BRA @UNKNOWN9
    case 0xC10426: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:92 LDA PAD_PRESS
    case 0xC10428: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1042B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x00A0A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1042B.
    case 0xC1042D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0062D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    case 0xC1042E: {
        Instruction step(cpu, 0xD0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    // Overlapping static entry reached from 0xC1042D.
    case 0xC1042F: {
        Instruction step(cpu, 0x62, 0x005E22u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    case 0xC10430: {
        Instruction step(cpu, 0x22, 0xC1355Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    // Overlapping static entry reached from 0xC1042F.
    case 0xC10432: {
        Instruction step(cpu, 0x35, 0x0000C1u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:96 LDX @LOCAL01
    case 0xC10434: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:97 DEX
    case 0xC10436: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:98 STX @LOCAL01
    case 0xC10437: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:100 BNE @UNKNOWN8
    case 0xC10439: {
        Instruction step(cpu, 0xD0, 0x0000EDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1043B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x00E3FAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1043B.
    case 0xC1043D: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1043E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1043D.
    case 0xC1043F: {
        Instruction step(cpu, 0x0E, 0x00C3A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC10440: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10440.
    case 0xC10442: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC10443: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:102 LDX @VIRTUAL02
    case 0xC10445: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:103 LDA a:window_stats::window_y,X
    case 0xC10447: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:104 LDX @VIRTUAL02
    case 0xC1044A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:105 CLC
    case 0xC1044C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:106 ADC a:window_stats::height,X
    case 0xC1044D: {
        Instruction step(cpu, 0x7D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10450: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10451: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10452: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10453: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10454: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:108 STA @VIRTUAL04
    case 0xC10455: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:109 LDX @VIRTUAL02
    case 0xC10457: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:110 LDA a:window_stats::window_x,X
    case 0xC10459: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:111 LDX @VIRTUAL02
    case 0xC1045C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:112 CLC
    case 0xC1045E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:113 ADC a:window_stats::width,X
    case 0xC1045F: {
        Instruction step(cpu, 0x7D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:114 CLC
    case 0xC10462: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:115 ADC @VIRTUAL04
    case 0xC10463: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:116 CLC
    case 0xC10465: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC10466: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC10466.
    case 0xC10468: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:118 TAY
    case 0xC10469: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:119 LDX #2
    case 0xC1046A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:119 LDX #2
    // Overlapping static entry reached from 0xC1046A.
    case 0xC1046C: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC1046D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:121 LDA #0
    case 0xC1046F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    case 0xC10471: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1046F.
    case 0xC10472: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC10472.
    case 0xC10474: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x000AA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:124 LDX #10
    case 0xC10475: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10474.
    case 0xC10476: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10475.
    case 0xC10477: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:125 STX @LOCAL01
    case 0xC10478: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:126 BRA @UNKNOWN11
    case 0xC1047A: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:128 LDA PAD_PRESS
    case 0xC1047C: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1047F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x00A0A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1047F.
    case 0xC10481: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x004AD0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    case 0xC10482: {
        Instruction step(cpu, 0xD0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC10481.
    case 0xC10483: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/halt.asm:131 JSL UNKNOWN_C12E42
    case 0xC10484: {
        Instruction step(cpu, 0x22, 0xC1355Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:132 LDX @LOCAL01
    case 0xC10488: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:133 DEX
    case 0xC1048A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:134 STX @LOCAL01
    case 0xC1048B: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:136 BNE @UNKNOWN10
    case 0xC1048D: {
        Instruction step(cpu, 0xD0, 0x0000EDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:137 JMP @UNKNOWN7
    case 0xC1048F: {
        Instruction step(cpu, 0x4C, 0x0003E7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10492: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FCu : 0x00E3FCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10492.
    case 0xC10494: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10495: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10494.
    case 0xC10496: {
        Instruction step(cpu, 0x0E, 0x00C3A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10497: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10497.
    case 0xC10499: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC1049A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:140 LDX @VIRTUAL02
    case 0xC1049C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:141 LDA a:window_stats::window_y,X
    case 0xC1049E: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:142 LDX @VIRTUAL02
    case 0xC104A1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:143 CLC
    case 0xC104A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:144 ADC a:window_stats::height,X
    case 0xC104A4: {
        Instruction step(cpu, 0x7D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104A9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:146 PHA
    case 0xC104AC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:147 LDX @VIRTUAL02
    case 0xC104AD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:148 LDA a:window_stats::window_x,X
    case 0xC104AF: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:149 LDX @VIRTUAL02
    case 0xC104B2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:150 CLC
    case 0xC104B4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:151 ADC a:window_stats::width,X
    case 0xC104B5: {
        Instruction step(cpu, 0x7D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:152 PLY
    case 0xC104B8: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:153 STY @VIRTUAL02
    case 0xC104B9: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:154 CLC
    case 0xC104BB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:155 ADC @VIRTUAL02
    case 0xC104BC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:156 CLC
    case 0xC104BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC104BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC104BF.
    case 0xC104C1: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:158 TAY
    case 0xC104C2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:159 LDX #2
    case 0xC104C3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:159 LDX #2
    // Overlapping static entry reached from 0xC104C3.
    case 0xC104C5: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:160 SEP #PROC_FLAGS::ACCUM8
    case 0xC104C6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:161 LDA #0
    case 0xC104C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    case 0xC104CA: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC104C8.
    case 0xC104CB: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC104CB.
    case 0xC104CD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x003522u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    case 0xC104CE: {
        Instruction step(cpu, 0x22, 0xC13435u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC104CD.
    case 0xC104CF: {
        Instruction step(cpu, 0x35, 0x000034u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC104CD.
    case 0xC104D0: {
        Instruction step(cpu, 0x34, 0x0000C1u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC104CF.
    case 0xC104D1: {
        Instruction step(cpu, 0xC1, 0x00002Bu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC104D2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC104D3: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
