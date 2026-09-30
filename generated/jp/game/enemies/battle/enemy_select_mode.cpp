// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/enemy_select_mode.asm
bool resume_battle_enemy_select_mode(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_select_mode.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DF69: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DAu : 0x00FFDAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DF6E.
    case 0xC1DF70: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF71: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF72: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    case 0xC1DF73: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1DF70.
    case 0xC1DF74: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    case 0xC1DF75: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1DF74.
    case 0xC1DF76: {
        Instruction step(cpu, 0x24, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    case 0xC1DF77: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1DF76.
    case 0xC1DF78: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    case 0xC1DF79: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    // Overlapping static entry reached from 0xC1DF78.
    case 0xC1DF7A: {
        Instruction step(cpu, 0x22, 0x00F720u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:23 JSR SET_INSTANT_PRINTING
    case 0xC1DF7B: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1DF7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1DF7E.
    case 0xC1DF80: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1DF81: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:25 LDA OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC1DF84: {
        Instruction step(cpu, 0xAD, 0x008C42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC1DF87: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1DF87.
    case 0xC1DF89: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:27 JSL MULT168
    case 0xC1DF8A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:28 CLC
    case 0xC1DF8E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1DF8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1DF8F.
    case 0xC1DF91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x00BDAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:30 TAX
    case 0xC1DF92: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:31 LDA a:window_stats::text_x,X
    case 0xC1DF93: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:31 LDA a:window_stats::text_x,X
    // Overlapping static entry reached from 0xC1DF91.
    case 0xC1DF94: {
        Instruction step(cpu, 0x0E, 0x008500u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:32 STA @LOCAL08
    case 0xC1DF96: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:32 STA @LOCAL08
    // Overlapping static entry reached from 0xC1DF94.
    case 0xC1DF97: {
        Instruction step(cpu, 0x20, 0x0010BDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:33 LDA a:window_stats::text_y,X
    case 0xC1DF98: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:33 LDA a:window_stats::text_y,X
    // Overlapping static entry reached from 0xC1DF97.
    case 0xC1DF9A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:34 STA @LOCAL07
    case 0xC1DF9B: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:35 LDA #1
    case 0xC1DF9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:35 LDA #1
    // Overlapping static entry reached from 0xC1DF9D.
    case 0xC1DF9F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:36 STA @LOCAL06
    case 0xC1DFA0: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:37 STA @LOCAL05
    case 0xC1DFA2: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:39 JSR SET_INSTANT_PRINTING
    case 0xC1DFA4: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:40 LDX @LOCAL07
    case 0xC1DFA7: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:41 LDA @LOCAL08
    case 0xC1DFA9: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:42 JSR UNKNOWN_C438A5
    case 0xC1DFAB: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:43 LDA @LOCAL0A
    case 0xC1DFAE: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:44 STA @VIRTUAL04
    case 0xC1DFB0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1DFB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1DFB4: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFB6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFB8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFBA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFBC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:47 JSR UNKNOWN_C10D7C
    case 0xC1DFBE: {
        Instruction step(cpu, 0x20, 0x0012CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:48 STA @VIRTUAL02
    case 0xC1DFC1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:49 LDA #7
    case 0xC1DFC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:49 LDA #7
    // Overlapping static entry reached from 0xC1DFC3.
    case 0xC1DFC5: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:50 SEC
    case 0xC1DFC6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:51 SBC @VIRTUAL02
    case 0xC1DFC7: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:52 CLC
    case 0xC1DFC9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC1DFCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000098u : 0x008C98u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1DFCA.
    case 0xC1DFCC: {
        Instruction step(cpu, 0x8C, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:54 TAY
    case 0xC1DFCD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    case 0xC1DFCE: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DFCC.
    case 0xC1DFCF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:56 LDX #3
    case 0xC1DFD0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:56 LDX #3
    // Overlapping static entry reached from 0xC1DFD0.
    case 0xC1DFD2: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:57 STX @LOCAL03
    case 0xC1DFD3: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:58 BRA @UNKNOWN4
    case 0xC1DFD5: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:60 CPX @LOCAL06
    case 0xC1DFD7: {
        Instruction step(cpu, 0xE4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:61 BNE @UNKNOWN2
    case 0xC1DFD9: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1DFDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1DFDB.
    case 0xC1DFDD: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:67 BRA @UNKNOWN3
    case 0xC1DFDE: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    case 0xC1DFE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1DFE0.
    case 0xC1DFE2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:75 JSR PRINT_LETTER
    case 0xC1DFE3: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:76 LDX @LOCAL03
    case 0xC1DFE6: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:77 DEX
    case 0xC1DFE8: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:78 STX @LOCAL03
    case 0xC1DFE9: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:80 TXA
    case 0xC1DFEB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:81 CMP @VIRTUAL02
    case 0xC1DFEC: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1DFEE: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1DFF0: {
        Instruction step(cpu, 0xB0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:83 BRA @UNKNOWN9
    case 0xC1DFF2: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:85 CPX @LOCAL06
    case 0xC1DFF4: {
        Instruction step(cpu, 0xE4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:86 BNE @UNKNOWN7
    case 0xC1DFF6: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1DFF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1DFF8.
    case 0xC1DFFA: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:92 BRA @UNKNOWN8
    case 0xC1DFFB: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    case 0xC1DFFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1DFFD.
    case 0xC1DFFF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:100 STA @VIRTUAL02
    case 0xC1E000: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:101 LDY @LOCAL04
    case 0xC1E002: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:102 LDA __BSS_START__,Y
    case 0xC1E004: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    case 0xC1E007: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC1E007.
    case 0xC1E009: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:104 CLC
    case 0xC1E00A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:105 ADC @VIRTUAL02
    case 0xC1E00B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:106 INY
    case 0xC1E00D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:107 STY @LOCAL04
    case 0xC1E00E: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:108 JSR PRINT_LETTER
    case 0xC1E010: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:109 LDX @LOCAL03
    case 0xC1E013: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:110 DEX
    case 0xC1E015: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:111 STX @LOCAL03
    case 0xC1E016: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:113 CPX #0
    case 0xC1E018: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:113 CPX #0
    // Overlapping static entry reached from 0xC1E018.
    case 0xC1E01A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:114 BNE @UNKNOWN6
    case 0xC1E01B: {
        Instruction step(cpu, 0xD0, 0x0000D7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:115 JSR CLEAR_INSTANT_PRINTING
    case 0xC1E01D: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:116 JSL WINDOW_TICK
    case 0xC1E020: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:118 JSL WINDOW_TICK
    case 0xC1E024: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:119 LDA PAD_PRESS
    case 0xC1E028: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    case 0xC1E02B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E02B.
    case 0xC1E02D: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:121 BEQ @UNKNOWN11
    case 0xC1E02E: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:122 LDA @LOCAL06
    case 0xC1E030: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:123 CMP #3
    case 0xC1E032: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:123 CMP #3
    // Overlapping static entry reached from 0xC1E032.
    case 0xC1E034: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:124 BCS @UNKNOWN11
    case 0xC1E035: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:125 INC @LOCAL06
    case 0xC1E037: {
        Instruction step(cpu, 0xE6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:126 LDA @LOCAL05
    case 0xC1E039: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E041: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:128 STA @LOCAL05
    case 0xC1E042: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:129 JMP @UNKNOWN0
    case 0xC1E044: {
        Instruction step(cpu, 0x4C, 0x00DFA4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:131 LDA PAD_PRESS
    case 0xC1E047: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    case 0xC1E04A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E04A.
    case 0xC1E04C: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    case 0xC1E04D: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    // Overlapping static entry reached from 0xC1E04C.
    case 0xC1E04E: {
        Instruction step(cpu, 0x26, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    case 0xC1E04F: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    // Overlapping static entry reached from 0xC1E04E.
    case 0xC1E050: {
        Instruction step(cpu, 0x1C, 0x0001C9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:135 CMP #1
    case 0xC1E051: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:135 CMP #1
    // Overlapping static entry reached from 0xC1E051.
    case 0xC1E053: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E054: {
        Instruction step(cpu, 0x90, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E056: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:137 DEC @LOCAL06
    case 0xC1E058: {
        Instruction step(cpu, 0xC6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E05A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E05A.
    case 0xC1E05C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E05D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E05F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E05F.
    case 0xC1E061: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E062: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E064: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E066: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E068: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:140 JSL DIVISION32
    case 0xC1E06A: {
        Instruction step(cpu, 0x22, 0xC090E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:141 LDA @VIRTUAL06
    case 0xC1E06E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:142 STA @LOCAL05
    case 0xC1E070: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:143 JMP @UNKNOWN0
    case 0xC1E072: {
        Instruction step(cpu, 0x4C, 0x00DFA4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:145 LDA PAD_HELD
    case 0xC1E075: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    case 0xC1E078: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E078.
    case 0xC1E07A: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:147 BEQ @UNKNOWN15
    case 0xC1E07B: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E07D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E07D.
    case 0xC1E07F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E080: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E082: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E082.
    case 0xC1E084: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E085: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:149 LDY @LOCAL05
    case 0xC1E087: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:150 LDA @VIRTUAL04
    case 0xC1E089: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:151 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E08B: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E08F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E091: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:153 JSL MODULUS32S
    case 0xC1E093: {
        Instruction step(cpu, 0x22, 0xC091E8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E097: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E097.
    case 0xC1E099: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E09A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E09C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E09C.
    case 0xC1E09E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E09F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A3: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A5: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A9: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:156 BEQ @UNKNOWN14
    case 0xC1E0AB: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:157 LDA @VIRTUAL04
    case 0xC1E0AD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:158 CLC
    case 0xC1E0AF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:159 ADC @LOCAL05
    case 0xC1E0B0: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:160 STA @VIRTUAL04
    case 0xC1E0B2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:161 STA @LOCAL0A
    case 0xC1E0B4: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:162 JMP @UNKNOWN21
    case 0xC1E0B6: {
        Instruction step(cpu, 0x4C, 0x00E14Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:164 LDA @LOCAL05
    case 0xC1E0B9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0C0: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:166 STA @VIRTUAL02
    case 0xC1E0C2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:167 LDA @LOCAL0A
    case 0xC1E0C4: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:168 STA @VIRTUAL04
    case 0xC1E0C6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:169 SEC
    case 0xC1E0C8: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:170 SBC @VIRTUAL02
    case 0xC1E0C9: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:171 STA @VIRTUAL04
    case 0xC1E0CB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:172 STA @LOCAL0A
    case 0xC1E0CD: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:173 JMP @UNKNOWN21
    case 0xC1E0CF: {
        Instruction step(cpu, 0x4C, 0x00E14Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:175 LDA PAD_HELD
    case 0xC1E0D2: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    case 0xC1E0D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E0D5.
    case 0xC1E0D7: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    case 0xC1E0D8: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC1E0D7.
    case 0xC1E0D9: {
        Instruction step(cpu, 0x53, 0x0000A9u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0D9.
    case 0xC1E0DB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0DA.
    case 0xC1E0DC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0DD: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0DF.
    case 0xC1E0E1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0E2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:179 LDY @LOCAL05
    case 0xC1E0E4: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:180 LDA @VIRTUAL04
    case 0xC1E0E6: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:181 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E0E8: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E0EC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E0EE: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:183 JSL MODULUS32S
    case 0xC1E0F0: {
        Instruction step(cpu, 0x22, 0xC091E8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0F4.
    case 0xC1E0F6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0F7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0F9.
    case 0xC1E0FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0FC: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0FE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E100: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E102: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E104: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E106: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:186 BEQ @UNKNOWN17
    case 0xC1E108: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:187 LDA @VIRTUAL04
    case 0xC1E10A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:188 SEC
    case 0xC1E10C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:189 SBC @LOCAL05
    case 0xC1E10D: {
        Instruction step(cpu, 0xE5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:190 STA @VIRTUAL04
    case 0xC1E10F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:191 STA @LOCAL0A
    case 0xC1E111: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:192 BRA @UNKNOWN21
    case 0xC1E113: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:194 LDA @LOCAL05
    case 0xC1E115: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E117: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E119: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E11A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E11B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E11C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:196 STA @VIRTUAL02
    case 0xC1E11E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:197 LDA @LOCAL0A
    case 0xC1E120: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:198 STA @VIRTUAL04
    case 0xC1E122: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:199 CLC
    case 0xC1E124: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:200 ADC @VIRTUAL02
    case 0xC1E125: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:201 STA @VIRTUAL04
    case 0xC1E127: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:202 STA @LOCAL0A
    case 0xC1E129: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:203 BRA @UNKNOWN21
    case 0xC1E12B: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:205 LDA PAD_PRESS
    case 0xC1E12D: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E130: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E130.
    case 0xC1E132: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:207 BEQ @UNKNOWN19
    case 0xC1E133: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:208 LDX @VIRTUAL04
    case 0xC1E135: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:209 STX @LOCAL03
    case 0xC1E137: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:210 JMP @UNKNOWN31
    case 0xC1E139: {
        Instruction step(cpu, 0x4C, 0x00E241u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:212 LDA PAD_PRESS
    case 0xC1E13C: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E13F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E13F.
    case 0xC1E141: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0003D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E142: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E141.
    case 0xC1E143: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E144: {
        Instruction step(cpu, 0x4C, 0x00E024u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E143.
    case 0xC1E145: {
        Instruction step(cpu, 0x24, 0x0000E0u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:215 LDX @LOCAL09
    case 0xC1E147: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:216 STX @LOCAL03
    case 0xC1E149: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:217 JMP @UNKNOWN31
    case 0xC1E14B: {
        Instruction step(cpu, 0x4C, 0x00E241u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:219 LDA @VIRTUAL04
    case 0xC1E14E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E150: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E152: {
        Instruction step(cpu, 0x4C, 0x00DFA4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:221 LDA @VIRTUAL04
    case 0xC1E155: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E157: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E2u : 0x0001E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E157.
    case 0xC1E159: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E15A: {
        Instruction step(cpu, 0x90, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E159.
    case 0xC1E15B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000F0u : 0x0007F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E15C: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E15B.
    case 0xC1E15D: {
        Instruction step(cpu, 0x07, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E15E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E2u : 0x0001E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E15D.
    case 0xC1E15F: {
        Instruction step(cpu, 0xE2, 0x000001u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E15E.
    case 0xC1E160: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    case 0xC1E161: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E160.
    case 0xC1E162: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    case 0xC1E163: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1E162.
    case 0xC1E164: {
        Instruction step(cpu, 0x24, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    case 0xC1E165: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E164.
    case 0xC1E166: {
        Instruction step(cpu, 0x04, 0x00008Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    case 0xC1E167: {
        Instruction step(cpu, 0x8D, 0x004E12u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC1E166.
    case 0xC1E168: {
        Instruction step(cpu, 0x12, 0x00004Eu, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E16A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00C60Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E16A.
    case 0xC1E16C: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E16D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E16C.
    case 0xC1E16E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E16F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E16F.
    case 0xC1E171: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E172: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:231 LDA @VIRTUAL04
    case 0xC1E174: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E176: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E177: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E178: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:233 CLC
    case 0xC1E179: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:234 ADC @VIRTUAL0A
    case 0xC1E17A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:235 STA @VIRTUAL0A
    case 0xC1E17C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    case 0xC1E17E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    // Overlapping static entry reached from 0xC1E17E.
    case 0xC1E180: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:237 LDA [@VIRTUAL0A],Y
    case 0xC1E181: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:238 TAY
    case 0xC1E183: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:239 LDA [@VIRTUAL0A]
    case 0xC1E184: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:240 STA @VIRTUAL06
    case 0xC1E186: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:241 STY @VIRTUAL06+2
    case 0xC1E188: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:242 STZ ENEMIES_IN_BATTLE
    case 0xC1E18A: {
        Instruction step(cpu, 0x9C, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:243 BRA @UNKNOWN26
    case 0xC1E18D: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:245 LDA ENEMIES_IN_BATTLE
    case 0xC1E18F: {
        Instruction step(cpu, 0xAD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:246 ASL
    case 0xC1E192: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:247 TAX
    case 0xC1E193: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    case 0xC1E194: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    // Overlapping static entry reached from 0xC1E194.
    case 0xC1E196: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:249 LDA [@VIRTUAL06],Y
    case 0xC1E197: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:250 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E199: {
        Instruction step(cpu, 0x9D, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:251 INC ENEMIES_IN_BATTLE
    case 0xC1E19C: {
        Instruction step(cpu, 0xEE, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:253 LDX @LOCAL02
    case 0xC1E19F: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:254 TXY
    case 0xC1E1A1: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:255 DEX
    case 0xC1E1A2: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:256 STX @LOCAL02
    case 0xC1E1A3: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:257 CPY #0
    case 0xC1E1A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:257 CPY #0
    // Overlapping static entry reached from 0xC1E1A5.
    case 0xC1E1A7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:258 BNE @UNKNOWN24
    case 0xC1E1A8: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    case 0xC1E1AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    // Overlapping static entry reached from 0xC1E1AA.
    case 0xC1E1AC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:260 CLC
    case 0xC1E1AD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:261 ADC @VIRTUAL06
    case 0xC1E1AE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:262 STA @VIRTUAL06
    case 0xC1E1B0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:265 LDA [@VIRTUAL0A]
    case 0xC1E1BA: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    case 0xC1E1BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    // Overlapping static entry reached from 0xC1E1BC.
    case 0xC1E1BE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:267 TAX
    case 0xC1E1BF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:268 STX @LOCAL02
    case 0xC1E1C0: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    case 0xC1E1C2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    // Overlapping static entry reached from 0xC1E1C2.
    case 0xC1E1C4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:270 BNE @UNKNOWN25
    case 0xC1E1C5: {
        Instruction step(cpu, 0xD0, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:271 JSL UNKNOWN_C08726
    case 0xC1E1C7: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:272 JSL UNKNOWN_C2EEE7
    case 0xC1E1CB: {
        Instruction step(cpu, 0x22, 0xC2EE00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:273 LDY #8
    case 0xC1E1CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:273 LDY #8
    // Overlapping static entry reached from 0xC1E1CF.
    case 0xC1E1D1: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:274 STY @LOCAL03
    case 0xC1E1D2: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:275 BRA @UNKNOWN28
    case 0xC1E1D4: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E1D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    case 0xC1E1D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    case 0xC1E1DA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1E1D8.
    case 0xC1E1DB: {
        Instruction step(cpu, 0x0E, 0x004EA2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    case 0xC1E1DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E1DC.
    case 0xC1E1DE: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC1E1DF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:281 TYA
    case 0xC1E1E1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:282 TXY
    case 0xC1E1E2: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:283 JSL MULT168
    case 0xC1E1E3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:284 CLC
    case 0xC1E1E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC1E1E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1E1E8.
    case 0xC1E1EA: {
        Instruction step(cpu, 0xA1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    case 0xC1E1EB: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    // Overlapping static entry reached from 0xC1E1EA.
    case 0xC1E1EC: {
        Instruction step(cpu, 0xED, 0x00C08Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:287 LDY @LOCAL03
    case 0xC1E1EF: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:288 INY
    case 0xC1E1F1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:289 STY @LOCAL03
    case 0xC1E1F2: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    case 0xC1E1F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC1E1F4.
    case 0xC1E1F6: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:292 BCC @UNKNOWN27
    case 0xC1E1F7: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:293 LDY #0
    case 0xC1E1F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:293 LDY #0
    // Overlapping static entry reached from 0xC1E1F9.
    case 0xC1E1FB: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:294 STY @LOCAL04
    case 0xC1E1FC: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:295 BRA @UNKNOWN30
    case 0xC1E1FE: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:297 TYA
    case 0xC1E200: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    case 0xC1E201: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E201.
    case 0xC1E203: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:299 JSL MULT168
    case 0xC1E204: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:300 CLC
    case 0xC1E208: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC1E209: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC1E209.
    case 0xC1E20B: {
        Instruction step(cpu, 0xA4, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:302 TAX
    case 0xC1E20C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:303 STX @LOCAL01
    case 0xC1E20D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:304 LDY @LOCAL04
    case 0xC1E20F: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:305 TYA
    case 0xC1E211: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:306 ASL
    case 0xC1E212: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:307 TAX
    case 0xC1E213: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:308 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E214: {
        Instruction step(cpu, 0xBD, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:309 LDX @LOCAL01
    case 0xC1E217: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:310 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC1E219: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:311 LDY @LOCAL04
    case 0xC1E21D: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:312 INY
    case 0xC1E21F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:313 STY @LOCAL04
    case 0xC1E220: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:315 CPY ENEMIES_IN_BATTLE
    case 0xC1E222: {
        Instruction step(cpu, 0xCC, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:316 BCC @UNKNOWN29
    case 0xC1E225: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:317 JSL UNKNOWN_C2F121
    case 0xC1E227: {
        Instruction step(cpu, 0x22, 0xC2F03Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:318 LDA #24
    case 0xC1E22B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:318 LDA #24
    // Overlapping static entry reached from 0xC1E22B.
    case 0xC1E22D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:319 JSL UNKNOWN_C0856B
    case 0xC1E22E: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:320 JSL UNKNOWN_C08744
    case 0xC1E232: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:321 LDX #1
    case 0xC1E236: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:321 LDX #1
    // Overlapping static entry reached from 0xC1E236.
    case 0xC1E238: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:322 TXA
    case 0xC1E239: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:323 JSL FADE_IN
    case 0xC1E23A: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:324 JMP @UNKNOWN0
    case 0xC1E23E: {
        Instruction step(cpu, 0x4C, 0x00DFA4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    case 0xC1E241: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E241.
    case 0xC1E243: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:327 JSR SET_WINDOW_FOCUS
    case 0xC1E244: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:328 JSR CLOSE_FOCUS_WINDOW
    case 0xC1E247: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:329 LDX @LOCAL03
    case 0xC1E24A: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/enemy_select_mode.asm:330 TXA
    case 0xC1E24C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E24D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E24E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
