// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/halt.asm
bool resume_text_ccs_halt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/halt.asm:3 BEGIN_C_FUNCTION
    case 0xC10166: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10168: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10169: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1016B.
    case 0xC1016D: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    case 0xC10170: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC1016D.
    case 0xC10171: {
        Instruction step(cpu, 0x14, 0x0000A8u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:13 TAY
    case 0xC10172: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:14 STY @LOCAL01
    case 0xC10173: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:15 BRA @UNKNOWN1
    case 0xC10175: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:17 LDA DEBUG
    case 0xC10177: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:18 BEQ @UNKNOWN1
    case 0xC1017A: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:19 LDA PAD_PRESS
    case 0xC1017C: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC1017F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000010u : 0x008010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC1017F.
    case 0xC10181: {
        Instruction step(cpu, 0x80, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10182: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x008010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10182.
    case 0xC10184: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:22 BNE @UNKNOWN1
    case 0xC10185: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:23 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC10187: {
        Instruction step(cpu, 0x9C, 0x009645u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:24 BRA @UNKNOWN2
    case 0xC1018A: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:26 LDA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC1018C: {
        Instruction step(cpu, 0xAD, 0x009645u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:27 BNE @UNKNOWN0
    case 0xC1018F: {
        Instruction step(cpu, 0xD0, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:29 JSR CLEAR_INSTANT_PRINTING
    case 0xC10191: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:30 JSL WINDOW_TICK
    case 0xC10195: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:31 LDX @LOCAL02
    case 0xC10199: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:32 BNE @UNKNOWN3
    case 0xC1019B: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:33 LDA BLINKING_TRIANGLE_FLAG
    case 0xC1019D: {
        Instruction step(cpu, 0xAD, 0x00964Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:34 BEQ @UNKNOWN3
    case 0xC101A0: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:35 LDA TEXT_SPEED_BASED_WAIT
    case 0xC101A2: {
        Instruction step(cpu, 0xAD, 0x00964Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:36 BEQ @UNKNOWN3
    case 0xC101A5: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:37 LDA #0
    case 0xC101A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:37 LDA #0
    // Overlapping static entry reached from 0xC101A7.
    case 0xC101A9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:38 JSR UNKNOWN_C100FE
    case 0xC101AA: {
        Instruction step(cpu, 0x20, 0x0000FEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/halt.asm:39 JMP @UNKNOWN14
    case 0xC101AD: {
        Instruction step(cpu, 0x4C, 0x0002CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:41 LDA BLINKING_TRIANGLE_FLAG
    case 0xC101B0: {
        Instruction step(cpu, 0xAD, 0x00964Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:42 BEQ @UNKNOWN4
    case 0xC101B3: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:43 JSL PAUSE_MUSIC
    case 0xC101B5: {
        Instruction step(cpu, 0x22, 0xEF0256u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:45 LDA CURRENT_FOCUS_WINDOW
    case 0xC101B9: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:46 ASL
    case 0xC101BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:47 TAX
    case 0xC101BD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:48 LDA OPEN_WINDOW_TABLE,X
    case 0xC101BE: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC101C1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC101C1.
    case 0xC101C3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:50 JSL MULT168
    case 0xC101C4: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:51 CLC
    case 0xC101C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC101C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC101C9.
    case 0xC101CB: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    case 0xC101CC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC101CB.
    case 0xC101CD: {
        Instruction step(cpu, 0x02, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/halt.asm:54 LDY @LOCAL01
    case 0xC101CE: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:55 BNE @UNKNOWN7
    case 0xC101D0: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:56 BRA @UNKNOWN6
    case 0xC101D2: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:58 JSL UNKNOWN_C12E42
    case 0xC101D4: {
        Instruction step(cpu, 0x22, 0xC12E42u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:60 LDA PAD_PRESS
    case 0xC101D8: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC101DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x00A0A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC101DB.
    case 0xC101DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x00F4F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    case 0xC101DE: {
        Instruction step(cpu, 0xF0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC101DD.
    case 0xC101DF: {
        Instruction step(cpu, 0xF4, 0x00CA4Cu, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    case 0xC101E0: {
        Instruction step(cpu, 0x4C, 0x0002CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC101DF.
    case 0xC101E2: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x00E416u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC101E3.
    case 0xC101E5: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101E6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC101E5.
    case 0xC101E7: {
        Instruction step(cpu, 0x0E, 0x00C3A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC101E8.
    case 0xC101EA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101EB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:66 LDX @VIRTUAL02
    case 0xC101ED: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:67 LDA a:window_stats::window_y,X
    case 0xC101EF: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:68 LDX @VIRTUAL02
    case 0xC101F2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:69 CLC
    case 0xC101F4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:70 ADC a:window_stats::height,X
    case 0xC101F5: {
        Instruction step(cpu, 0x7D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101FA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:72 STA @VIRTUAL04
    case 0xC101FD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:73 LDX @VIRTUAL02
    case 0xC101FF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:74 LDA a:window_stats::window_x,X
    case 0xC10201: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:75 LDX @VIRTUAL02
    case 0xC10204: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:76 CLC
    case 0xC10206: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:77 ADC a:window_stats::width,X
    case 0xC10207: {
        Instruction step(cpu, 0x7D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:78 CLC
    case 0xC1020A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:79 ADC @VIRTUAL04
    case 0xC1020B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:80 CLC
    case 0xC1020D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC1020E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC1020E.
    case 0xC10210: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:82 TAY
    case 0xC10211: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:83 LDX #2
    case 0xC10212: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:83 LDX #2
    // Overlapping static entry reached from 0xC10212.
    case 0xC10214: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC10215: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:85 LDA #0
    case 0xC10217: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    case 0xC10219: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC10217.
    case 0xC1021A: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1021A.
    case 0xC1021C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x000FA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:88 LDX #15
    case 0xC1021D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC1021C.
    case 0xC1021E: {
        Instruction step(cpu, 0x0F, 0x128600u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC1021D.
    case 0xC1021F: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:89 STX @LOCAL01
    case 0xC10220: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:90 BRA @UNKNOWN9
    case 0xC10222: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:92 LDA PAD_PRESS
    case 0xC10224: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC10227: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x00A0A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC10227.
    case 0xC10229: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0062D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    case 0xC1022A: {
        Instruction step(cpu, 0xD0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    // Overlapping static entry reached from 0xC10229.
    case 0xC1022B: {
        Instruction step(cpu, 0x62, 0x004222u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    case 0xC1022C: {
        Instruction step(cpu, 0x22, 0xC12E42u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    // Overlapping static entry reached from 0xC1022B.
    case 0xC1022E: {
        Instruction step(cpu, 0x2E, 0x00A6C1u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:96 LDX @LOCAL01
    case 0xC10230: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:96 LDX @LOCAL01
    // Overlapping static entry reached from 0xC1022E.
    case 0xC10231: {
        Instruction step(cpu, 0x12, 0x0000CAu, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:97 DEX
    case 0xC10232: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:98 STX @LOCAL01
    case 0xC10233: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:100 BNE @UNKNOWN8
    case 0xC10235: {
        Instruction step(cpu, 0xD0, 0x0000EDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC10237: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x00E418u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10237.
    case 0xC10239: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1023A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10239.
    case 0xC1023B: {
        Instruction step(cpu, 0x0E, 0x00C3A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1023C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1023C.
    case 0xC1023E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1023F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:102 LDX @VIRTUAL02
    case 0xC10241: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:103 LDA a:window_stats::window_y,X
    case 0xC10243: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:104 LDX @VIRTUAL02
    case 0xC10246: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:105 CLC
    case 0xC10248: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:106 ADC a:window_stats::height,X
    case 0xC10249: {
        Instruction step(cpu, 0x7D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10250: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:108 STA @VIRTUAL04
    case 0xC10251: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:109 LDX @VIRTUAL02
    case 0xC10253: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:110 LDA a:window_stats::window_x,X
    case 0xC10255: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:111 LDX @VIRTUAL02
    case 0xC10258: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:112 CLC
    case 0xC1025A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:113 ADC a:window_stats::width,X
    case 0xC1025B: {
        Instruction step(cpu, 0x7D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:114 CLC
    case 0xC1025E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:115 ADC @VIRTUAL04
    case 0xC1025F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:116 CLC
    case 0xC10261: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC10262: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC10262.
    case 0xC10264: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:118 TAY
    case 0xC10265: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:119 LDX #2
    case 0xC10266: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:119 LDX #2
    // Overlapping static entry reached from 0xC10266.
    case 0xC10268: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC10269: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:121 LDA #0
    case 0xC1026B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    case 0xC1026D: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1026B.
    case 0xC1026E: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1026E.
    case 0xC10270: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x000AA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:124 LDX #10
    case 0xC10271: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10270.
    case 0xC10272: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10271.
    case 0xC10273: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:125 STX @LOCAL01
    case 0xC10274: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:126 BRA @UNKNOWN11
    case 0xC10276: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/halt.asm:128 LDA PAD_PRESS
    case 0xC10278: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1027B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x00A0A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1027B.
    case 0xC1027D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x004AD0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    case 0xC1027E: {
        Instruction step(cpu, 0xD0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC1027D.
    case 0xC1027F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/halt.asm:131 JSL UNKNOWN_C12E42
    case 0xC10280: {
        Instruction step(cpu, 0x22, 0xC12E42u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:132 LDX @LOCAL01
    case 0xC10284: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:133 DEX
    case 0xC10286: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:134 STX @LOCAL01
    case 0xC10287: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:136 BNE @UNKNOWN10
    case 0xC10289: {
        Instruction step(cpu, 0xD0, 0x0000EDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/halt.asm:137 JMP @UNKNOWN7
    case 0xC1028B: {
        Instruction step(cpu, 0x4C, 0x0001E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC1028E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00E41Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1028E.
    case 0xC10290: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10291: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10290.
    case 0xC10292: {
        Instruction step(cpu, 0x0E, 0x00C3A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10293: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10293.
    case 0xC10295: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10296: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:140 LDX @VIRTUAL02
    case 0xC10298: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:141 LDA a:window_stats::window_y,X
    case 0xC1029A: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:142 LDX @VIRTUAL02
    case 0xC1029D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:143 CLC
    case 0xC1029F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:144 ADC a:window_stats::height,X
    case 0xC102A0: {
        Instruction step(cpu, 0x7D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:146 PHA
    case 0xC102A8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:147 LDX @VIRTUAL02
    case 0xC102A9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:148 LDA a:window_stats::window_x,X
    case 0xC102AB: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:149 LDX @VIRTUAL02
    case 0xC102AE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:150 CLC
    case 0xC102B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:151 ADC a:window_stats::width,X
    case 0xC102B1: {
        Instruction step(cpu, 0x7D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:152 PLY
    case 0xC102B4: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:153 STY @VIRTUAL02
    case 0xC102B5: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:154 CLC
    case 0xC102B7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:155 ADC @VIRTUAL02
    case 0xC102B8: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:156 CLC
    case 0xC102BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC102BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC102BB.
    case 0xC102BD: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/halt.asm:158 TAY
    case 0xC102BE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:159 LDX #2
    case 0xC102BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/halt.asm:159 LDX #2
    // Overlapping static entry reached from 0xC102BF.
    case 0xC102C1: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/halt.asm:160 SEP #PROC_FLAGS::ACCUM8
    case 0xC102C2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/halt.asm:161 LDA #0
    case 0xC102C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    case 0xC102C6: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC102C4.
    case 0xC102C7: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC102C7.
    case 0xC102C9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x006E22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    case 0xC102CA: {
        Instruction step(cpu, 0x22, 0xEF026Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC102C9.
    case 0xC102CB: {
        Instruction step(cpu, 0x6E, 0x00EF02u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC102C9.
    case 0xC102CC: {
        Instruction step(cpu, 0x02, 0x0000EFu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC102CE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC102CF: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
