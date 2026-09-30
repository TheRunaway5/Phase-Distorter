// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/enemy_select_mode.asm
bool resume_battle_enemy_select_mode(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_select_mode.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1E1A5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1A7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1A8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1A9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DAu : 0x00FFDAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E1AA.
    case 0xC1E1AC: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1AD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1AE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    case 0xC1E1AF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E1AC.
    case 0xC1E1B0: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    case 0xC1E1B1: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1E1B0.
    case 0xC1E1B2: {
        Instruction step(cpu, 0x24, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    case 0xC1E1B3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E1B2.
    case 0xC1E1B4: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    case 0xC1E1B5: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    // Overlapping static entry reached from 0xC1E1B4.
    case 0xC1E1B6: {
        Instruction step(cpu, 0x22, 0xE4D422u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:23 JSR SET_INSTANT_PRINTING
    case 0xC1E1B7: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:23 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E1B6.
    case 0xC1E1BA: {
        Instruction step(cpu, 0xC3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1E1BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E1BA.
    case 0xC1E1BC: {
        Instruction step(cpu, 0x0E, 0x002000u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E1BB.
    case 0xC1E1BD: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1E1BE: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E1BC.
    case 0xC1E1BF: {
        Instruction step(cpu, 0xEE, 0x00AD04u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:25 LDA OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC1E1C1: {
        Instruction step(cpu, 0xAD, 0x008900u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:25 LDA OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    // Overlapping static entry reached from 0xC1E1BF.
    case 0xC1E1C2: {
        Instruction step(cpu, 0x00, 0x000089u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC1E1C4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E1C4.
    case 0xC1E1C6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:27 JSL MULT168
    case 0xC1E1C7: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:28 CLC
    case 0xC1E1CB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E1CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E1CC.
    case 0xC1E1CE: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:30 TAX
    case 0xC1E1CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:31 LDA a:window_stats::text_x,X
    case 0xC1E1D0: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:32 STA @LOCAL08
    case 0xC1E1D3: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:33 LDA a:window_stats::text_y,X
    case 0xC1E1D5: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:34 STA @LOCAL07
    case 0xC1E1D8: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:35 LDA #1
    case 0xC1E1DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:35 LDA #1
    // Overlapping static entry reached from 0xC1E1DA.
    case 0xC1E1DC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:36 STA @LOCAL06
    case 0xC1E1DD: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:37 STA @LOCAL05
    case 0xC1E1DF: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:39 JSR SET_INSTANT_PRINTING
    case 0xC1E1E1: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:40 LDX @LOCAL07
    case 0xC1E1E5: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:41 LDA @LOCAL08
    case 0xC1E1E7: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:42 JSR UNKNOWN_C438A5
    case 0xC1E1E9: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:43 LDA @LOCAL0A
    case 0xC1E1ED: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:44 STA @VIRTUAL04
    case 0xC1E1EF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1E1F1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1E1F3: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1F5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1F7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1F9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1FB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:47 JSR UNKNOWN_C10D7C
    case 0xC1E1FD: {
        Instruction step(cpu, 0x20, 0x000D7Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:48 STA @VIRTUAL02
    case 0xC1E200: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:49 LDA #7
    case 0xC1E202: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:49 LDA #7
    // Overlapping static entry reached from 0xC1E202.
    case 0xC1E204: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:50 SEC
    case 0xC1E205: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:51 SBC @VIRTUAL02
    case 0xC1E206: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:52 CLC
    case 0xC1E208: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC1E209: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Au : 0x00895Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1E209.
    case 0xC1E20B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x0084A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:54 TAY
    case 0xC1E20C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    case 0xC1E20D: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    // Overlapping static entry reached from 0xC1E20B.
    case 0xC1E20E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:56 LDX #3
    case 0xC1E20F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:56 LDX #3
    // Overlapping static entry reached from 0xC1E20F.
    case 0xC1E211: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:57 STX @LOCAL03
    case 0xC1E212: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:58 BRA @UNKNOWN4
    case 0xC1E214: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:60 CPX @LOCAL06
    case 0xC1E216: {
        Instruction step(cpu, 0xE4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:61 BNE @UNKNOWN2
    case 0xC1E218: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1E21A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1E21A.
    case 0xC1E21C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:67 BRA @UNKNOWN3
    case 0xC1E21D: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    case 0xC1E21F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1E21F.
    case 0xC1E221: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:75 JSR PRINT_LETTER
    case 0xC1E222: {
        Instruction step(cpu, 0x20, 0x000CB6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:76 LDX @LOCAL03
    case 0xC1E225: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:77 DEX
    case 0xC1E227: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:78 STX @LOCAL03
    case 0xC1E228: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:80 TXA
    case 0xC1E22A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:81 CMP @VIRTUAL02
    case 0xC1E22B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1E22D: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1E22F: {
        Instruction step(cpu, 0xB0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:83 BRA @UNKNOWN9
    case 0xC1E231: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:85 CPX @LOCAL06
    case 0xC1E233: {
        Instruction step(cpu, 0xE4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:86 BNE @UNKNOWN7
    case 0xC1E235: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1E237: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1E237.
    case 0xC1E239: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:92 BRA @UNKNOWN8
    case 0xC1E23A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    case 0xC1E23C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1E23C.
    case 0xC1E23E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:100 STA @VIRTUAL02
    case 0xC1E23F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:101 LDY @LOCAL04
    case 0xC1E241: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:102 LDA __BSS_START__,Y
    case 0xC1E243: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    case 0xC1E246: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC1E246.
    case 0xC1E248: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:104 CLC
    case 0xC1E249: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:105 ADC @VIRTUAL02
    case 0xC1E24A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:106 INY
    case 0xC1E24C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:107 STY @LOCAL04
    case 0xC1E24D: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:108 JSR PRINT_LETTER
    case 0xC1E24F: {
        Instruction step(cpu, 0x20, 0x000CB6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:109 LDX @LOCAL03
    case 0xC1E252: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:110 DEX
    case 0xC1E254: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:111 STX @LOCAL03
    case 0xC1E255: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:113 CPX #0
    case 0xC1E257: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:113 CPX #0
    // Overlapping static entry reached from 0xC1E257.
    case 0xC1E259: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:114 BNE @UNKNOWN6
    case 0xC1E25A: {
        Instruction step(cpu, 0xD0, 0x0000D7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:115 JSR CLEAR_INSTANT_PRINTING
    case 0xC1E25C: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:116 JSL WINDOW_TICK
    case 0xC1E260: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:118 JSL WINDOW_TICK
    case 0xC1E264: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:119 LDA PAD_PRESS
    case 0xC1E268: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    case 0xC1E26B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E26B.
    case 0xC1E26D: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:121 BEQ @UNKNOWN11
    case 0xC1E26E: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:122 LDA @LOCAL06
    case 0xC1E270: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:123 CMP #3
    case 0xC1E272: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:123 CMP #3
    // Overlapping static entry reached from 0xC1E272.
    case 0xC1E274: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:124 BCS @UNKNOWN11
    case 0xC1E275: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:125 INC @LOCAL06
    case 0xC1E277: {
        Instruction step(cpu, 0xE6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:126 LDA @LOCAL05
    case 0xC1E279: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E281: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:128 STA @LOCAL05
    case 0xC1E282: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:129 JMP @UNKNOWN0
    case 0xC1E284: {
        Instruction step(cpu, 0x4C, 0x00E1E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:131 LDA PAD_PRESS
    case 0xC1E287: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    case 0xC1E28A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E28A.
    case 0xC1E28C: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    case 0xC1E28D: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    // Overlapping static entry reached from 0xC1E28C.
    case 0xC1E28E: {
        Instruction step(cpu, 0x26, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    case 0xC1E28F: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    // Overlapping static entry reached from 0xC1E28E.
    case 0xC1E290: {
        Instruction step(cpu, 0x1C, 0x0001C9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:135 CMP #1
    case 0xC1E291: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:135 CMP #1
    // Overlapping static entry reached from 0xC1E291.
    case 0xC1E293: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E294: {
        Instruction step(cpu, 0x90, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E296: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:137 DEC @LOCAL06
    case 0xC1E298: {
        Instruction step(cpu, 0xC6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E29A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E29A.
    case 0xC1E29C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E29D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E29F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E29F.
    case 0xC1E2A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2A2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E2A4: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E2A6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E2A8: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:140 JSL DIVISION32
    case 0xC1E2AA: {
        Instruction step(cpu, 0x22, 0xC090FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:141 LDA @VIRTUAL06
    case 0xC1E2AE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:142 STA @LOCAL05
    case 0xC1E2B0: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:143 JMP @UNKNOWN0
    case 0xC1E2B2: {
        Instruction step(cpu, 0x4C, 0x00E1E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:145 LDA PAD_HELD
    case 0xC1E2B5: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    case 0xC1E2B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E2B8.
    case 0xC1E2BA: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:147 BEQ @UNKNOWN15
    case 0xC1E2BB: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2BD.
    case 0xC1E2BF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2C0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2C2.
    case 0xC1E2C4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2C5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:149 LDY @LOCAL05
    case 0xC1E2C7: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:150 LDA @VIRTUAL04
    case 0xC1E2C9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:151 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E2CB: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E2CF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E2D1: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:153 JSL MODULUS32S
    case 0xC1E2D3: {
        Instruction step(cpu, 0x22, 0xC09206u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2D7.
    case 0xC1E2D9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2DA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2DC.
    case 0xC1E2DE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2DF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E3: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E5: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E9: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:156 BEQ @UNKNOWN14
    case 0xC1E2EB: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:157 LDA @VIRTUAL04
    case 0xC1E2ED: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:158 CLC
    case 0xC1E2EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:159 ADC @LOCAL05
    case 0xC1E2F0: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:160 STA @VIRTUAL04
    case 0xC1E2F2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:161 STA @LOCAL0A
    case 0xC1E2F4: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:162 JMP @UNKNOWN21
    case 0xC1E2F6: {
        Instruction step(cpu, 0x4C, 0x00E38Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:164 LDA @LOCAL05
    case 0xC1E2F9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E300: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:166 STA @VIRTUAL02
    case 0xC1E302: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:167 LDA @LOCAL0A
    case 0xC1E304: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:168 STA @VIRTUAL04
    case 0xC1E306: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:169 SEC
    case 0xC1E308: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:170 SBC @VIRTUAL02
    case 0xC1E309: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:171 STA @VIRTUAL04
    case 0xC1E30B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:172 STA @LOCAL0A
    case 0xC1E30D: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:173 JMP @UNKNOWN21
    case 0xC1E30F: {
        Instruction step(cpu, 0x4C, 0x00E38Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:175 LDA PAD_HELD
    case 0xC1E312: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    case 0xC1E315: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E315.
    case 0xC1E317: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    case 0xC1E318: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC1E317.
    case 0xC1E319: {
        Instruction step(cpu, 0x53, 0x0000A9u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E31A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E319.
    case 0xC1E31B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E31A.
    case 0xC1E31C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E31D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E31F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E31F.
    case 0xC1E321: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E322: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:179 LDY @LOCAL05
    case 0xC1E324: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:180 LDA @VIRTUAL04
    case 0xC1E326: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:181 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E328: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E32C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E32E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:183 JSL MODULUS32S
    case 0xC1E330: {
        Instruction step(cpu, 0x22, 0xC09206u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E334: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E334.
    case 0xC1E336: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E337: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E339: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E339.
    case 0xC1E33B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E33C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E33E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E340: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E342: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E344: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E346: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:186 BEQ @UNKNOWN17
    case 0xC1E348: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:187 LDA @VIRTUAL04
    case 0xC1E34A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:188 SEC
    case 0xC1E34C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:189 SBC @LOCAL05
    case 0xC1E34D: {
        Instruction step(cpu, 0xE5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:190 STA @VIRTUAL04
    case 0xC1E34F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:191 STA @LOCAL0A
    case 0xC1E351: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:192 BRA @UNKNOWN21
    case 0xC1E353: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:194 LDA @LOCAL05
    case 0xC1E355: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E357: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E359: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E35A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E35B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E35C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:196 STA @VIRTUAL02
    case 0xC1E35E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:197 LDA @LOCAL0A
    case 0xC1E360: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:198 STA @VIRTUAL04
    case 0xC1E362: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:199 CLC
    case 0xC1E364: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:200 ADC @VIRTUAL02
    case 0xC1E365: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:201 STA @VIRTUAL04
    case 0xC1E367: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:202 STA @LOCAL0A
    case 0xC1E369: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:203 BRA @UNKNOWN21
    case 0xC1E36B: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:205 LDA PAD_PRESS
    case 0xC1E36D: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E370: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E370.
    case 0xC1E372: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:207 BEQ @UNKNOWN19
    case 0xC1E373: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:208 LDX @VIRTUAL04
    case 0xC1E375: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:209 STX @LOCAL03
    case 0xC1E377: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:210 JMP @UNKNOWN31
    case 0xC1E379: {
        Instruction step(cpu, 0x4C, 0x00E47Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:212 LDA PAD_PRESS
    case 0xC1E37C: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E37F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E37F.
    case 0xC1E381: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0003D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E382: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E381.
    case 0xC1E383: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E384: {
        Instruction step(cpu, 0x4C, 0x00E264u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E383.
    case 0xC1E385: {
        Instruction step(cpu, 0x64, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:215 LDX @LOCAL09
    case 0xC1E387: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:216 STX @LOCAL03
    case 0xC1E389: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:217 JMP @UNKNOWN31
    case 0xC1E38B: {
        Instruction step(cpu, 0x4C, 0x00E47Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:219 LDA @VIRTUAL04
    case 0xC1E38E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E390: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E392: {
        Instruction step(cpu, 0x4C, 0x00E1E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:221 LDA @VIRTUAL04
    case 0xC1E395: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E397: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E2u : 0x0001E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E397.
    case 0xC1E399: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E39A: {
        Instruction step(cpu, 0x90, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E399.
    case 0xC1E39B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000F0u : 0x0007F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E39C: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E39B.
    case 0xC1E39D: {
        Instruction step(cpu, 0x07, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E39E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E2u : 0x0001E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E39D.
    case 0xC1E39F: {
        Instruction step(cpu, 0xE2, 0x000001u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E39E.
    case 0xC1E3A0: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    case 0xC1E3A1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E3A0.
    case 0xC1E3A2: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    case 0xC1E3A3: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1E3A2.
    case 0xC1E3A4: {
        Instruction step(cpu, 0x24, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    case 0xC1E3A5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E3A4.
    case 0xC1E3A6: {
        Instruction step(cpu, 0x04, 0x00008Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    case 0xC1E3A7: {
        Instruction step(cpu, 0x8D, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC1E3A6.
    case 0xC1E3A8: {
        Instruction step(cpu, 0x8C, 0x00A94Au, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00C60Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3A8.
    case 0xC1E3AB: {
        Instruction step(cpu, 0x0D, 0x0085C6u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3AA.
    case 0xC1E3AC: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3AD: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3AC.
    case 0xC1E3AE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3AF.
    case 0xC1E3B1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3B2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:231 LDA @VIRTUAL04
    case 0xC1E3B4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E3B6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E3B7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E3B8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:233 CLC
    case 0xC1E3B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:234 ADC @VIRTUAL0A
    case 0xC1E3BA: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:235 STA @VIRTUAL0A
    case 0xC1E3BC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    case 0xC1E3BE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    // Overlapping static entry reached from 0xC1E3BE.
    case 0xC1E3C0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:237 LDA [@VIRTUAL0A],Y
    case 0xC1E3C1: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:238 TAY
    case 0xC1E3C3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:239 LDA [@VIRTUAL0A]
    case 0xC1E3C4: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:240 STA @VIRTUAL06
    case 0xC1E3C6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:241 STY @VIRTUAL06+2
    case 0xC1E3C8: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:242 STZ ENEMIES_IN_BATTLE
    case 0xC1E3CA: {
        Instruction step(cpu, 0x9C, 0x009F8Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:243 BRA @UNKNOWN26
    case 0xC1E3CD: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:245 LDA ENEMIES_IN_BATTLE
    case 0xC1E3CF: {
        Instruction step(cpu, 0xAD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:246 ASL
    case 0xC1E3D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:247 TAX
    case 0xC1E3D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    case 0xC1E3D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    // Overlapping static entry reached from 0xC1E3D4.
    case 0xC1E3D6: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:249 LDA [@VIRTUAL06],Y
    case 0xC1E3D7: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:250 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E3D9: {
        Instruction step(cpu, 0x9D, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:251 INC ENEMIES_IN_BATTLE
    case 0xC1E3DC: {
        Instruction step(cpu, 0xEE, 0x009F8Au, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:253 LDX @LOCAL02
    case 0xC1E3DF: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:254 TXY
    case 0xC1E3E1: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:255 DEX
    case 0xC1E3E2: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:256 STX @LOCAL02
    case 0xC1E3E3: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:257 CPY #0
    case 0xC1E3E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:257 CPY #0
    // Overlapping static entry reached from 0xC1E3E5.
    case 0xC1E3E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:258 BNE @UNKNOWN24
    case 0xC1E3E8: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    case 0xC1E3EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    // Overlapping static entry reached from 0xC1E3EA.
    case 0xC1E3EC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:260 CLC
    case 0xC1E3ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:261 ADC @VIRTUAL06
    case 0xC1E3EE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:262 STA @VIRTUAL06
    case 0xC1E3F0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:265 LDA [@VIRTUAL0A]
    case 0xC1E3FA: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    case 0xC1E3FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    // Overlapping static entry reached from 0xC1E3FC.
    case 0xC1E3FE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:267 TAX
    case 0xC1E3FF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:268 STX @LOCAL02
    case 0xC1E400: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    case 0xC1E402: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    // Overlapping static entry reached from 0xC1E402.
    case 0xC1E404: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:270 BNE @UNKNOWN25
    case 0xC1E405: {
        Instruction step(cpu, 0xD0, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:271 JSL UNKNOWN_C08726
    case 0xC1E407: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:272 JSL UNKNOWN_C2EEE7
    case 0xC1E40B: {
        Instruction step(cpu, 0x22, 0xC2EEE7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:273 LDY #8
    case 0xC1E40F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:273 LDY #8
    // Overlapping static entry reached from 0xC1E40F.
    case 0xC1E411: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:274 STY @LOCAL03
    case 0xC1E412: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:275 BRA @UNKNOWN28
    case 0xC1E414: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E416: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    case 0xC1E418: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    case 0xC1E41A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E41A.
    case 0xC1E41C: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC1E41D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:281 TYA
    case 0xC1E41F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:282 TXY
    case 0xC1E420: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:283 JSL MULT168
    case 0xC1E421: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:284 CLC
    case 0xC1E425: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC1E426: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1E426.
    case 0xC1E428: {
        Instruction step(cpu, 0x9F, 0x8EFC22u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    case 0xC1E429: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    // Overlapping static entry reached from 0xC1E428.
    case 0xC1E42C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x0016A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:287 LDY @LOCAL03
    case 0xC1E42D: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:287 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1E42C.
    case 0xC1E42E: {
        Instruction step(cpu, 0x16, 0x0000C8u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:288 INY
    case 0xC1E42F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:289 STY @LOCAL03
    case 0xC1E430: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    case 0xC1E432: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC1E432.
    case 0xC1E434: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:292 BCC @UNKNOWN27
    case 0xC1E435: {
        Instruction step(cpu, 0x90, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:293 LDY #0
    case 0xC1E437: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:293 LDY #0
    // Overlapping static entry reached from 0xC1E437.
    case 0xC1E439: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:294 STY @LOCAL04
    case 0xC1E43A: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:295 BRA @UNKNOWN30
    case 0xC1E43C: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:297 TYA
    case 0xC1E43E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    case 0xC1E43F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E43F.
    case 0xC1E441: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:299 JSL MULT168
    case 0xC1E442: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:300 CLC
    case 0xC1E446: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC1E447: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC1E447.
    case 0xC1E449: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000AAu : 0x0086AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:302 TAX
    case 0xC1E44A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:303 STX @LOCAL01
    case 0xC1E44B: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:303 STX @LOCAL01
    // Overlapping static entry reached from 0xC1E449.
    case 0xC1E44C: {
        Instruction step(cpu, 0x12, 0x0000A4u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:304 LDY @LOCAL04
    case 0xC1E44D: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:304 LDY @LOCAL04
    // Overlapping static entry reached from 0xC1E44C.
    case 0xC1E44E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:305 TYA
    case 0xC1E44F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:306 ASL
    case 0xC1E450: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:307 TAX
    case 0xC1E451: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:308 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E452: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:309 LDX @LOCAL01
    case 0xC1E455: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:310 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC1E457: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:311 LDY @LOCAL04
    case 0xC1E45B: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:312 INY
    case 0xC1E45D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:313 STY @LOCAL04
    case 0xC1E45E: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:315 CPY ENEMIES_IN_BATTLE
    case 0xC1E460: {
        Instruction step(cpu, 0xCC, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:316 BCC @UNKNOWN29
    case 0xC1E463: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:317 JSL UNKNOWN_C2F121
    case 0xC1E465: {
        Instruction step(cpu, 0x22, 0xC2F121u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:318 LDA #24
    case 0xC1E469: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:318 LDA #24
    // Overlapping static entry reached from 0xC1E469.
    case 0xC1E46B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:319 JSL UNKNOWN_C0856B
    case 0xC1E46C: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:320 JSL UNKNOWN_C08744
    case 0xC1E470: {
        Instruction step(cpu, 0x22, 0xC08744u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:321 LDX #1
    case 0xC1E474: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:321 LDX #1
    // Overlapping static entry reached from 0xC1E474.
    case 0xC1E476: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:322 TXA
    case 0xC1E477: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:323 JSL FADE_IN
    case 0xC1E478: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:324 JMP @UNKNOWN0
    case 0xC1E47C: {
        Instruction step(cpu, 0x4C, 0x00E1E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    case 0xC1E47F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E47F.
    case 0xC1E481: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:327 JSR SET_WINDOW_FOCUS
    case 0xC1E482: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:328 JSR CLOSE_FOCUS_WINDOW
    case 0xC1E485: {
        Instruction step(cpu, 0x20, 0x000084u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:329 LDX @LOCAL03
    case 0xC1E488: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:330 TXA
    case 0xC1E48A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E48B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E48C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
