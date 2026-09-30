// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/character_select_prompt.asm
bool resume_text_character_select_prompt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/character_select_prompt.asm:3 BEGIN_C_FUNCTION
    case 0xC127EF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CCu : 0x00FFCCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC127F4.
    case 0xC127F6: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:25 STX @LOCAL0D
    case 0xC127F9: {
        Instruction step(cpu, 0x86, 0x000032u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:25 STX @LOCAL0D
    // Overlapping static entry reached from 0xC127F6.
    case 0xC127FA: {
        Instruction step(cpu, 0x32, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:26 STA @LOCAL0C
    case 0xC127FB: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:26 STA @LOCAL0C
    // Overlapping static entry reached from 0xC127FA.
    case 0xC127FC: {
        Instruction step(cpu, 0x30, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC127FD: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC127FC.
    case 0xC127FE: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC127FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC127FE.
    case 0xC12800: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12801: {
        Instruction step(cpu, 0xA5, 0x000048u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12800.
    case 0xC12802: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12803: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12805: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12807: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12809: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC1280B: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC1280D: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC1280F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12811: {
        Instruction step(cpu, 0xA5, 0x000044u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12813: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12815: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12817: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12819: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC1281B: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:31 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1281D: {
        Instruction step(cpu, 0x20, 0x000301u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:32 STA @LOCAL09
    case 0xC12820: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:33 CLC
    case 0xC12822: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:34 ADC #window_stats::argument_memory
    case 0xC12823: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:34 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12823.
    case 0xC12825: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:35 TAY
    case 0xC12826: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12827: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1282A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1282C: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1282F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12831: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12833: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12835: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12837: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:38 LDA @LOCAL0C
    case 0xC12839: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:39 CMP #1
    case 0xC1283B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:39 CMP #1
    // Overlapping static entry reached from 0xC1283B.
    case 0xC1283D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/character_select_prompt.asm:40 BNEL @UNKNOWN7
    case 0xC1283E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:40 BNEL @UNKNOWN7
    case 0xC12840: {
        Instruction step(cpu, 0x4C, 0x002925u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12843: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Au : 0x009C8Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12843.
    case 0xC12845: {
        Instruction step(cpu, 0x9C, 0x002022u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:42 JSL UNKNOWN_C20A20
    case 0xC12846: {
        Instruction step(cpu, 0x22, 0xC20A20u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:42 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12845.
    case 0xC12848: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:42 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12848.
    case 0xC12849: {
        Instruction step(cpu, 0xC2, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1284A: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC12849.
    case 0xC1284B: {
        Instruction step(cpu, 0xA4, 0x000098u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:44 AND #$00FF
    case 0xC1284D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1284D.
    case 0xC1284F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:45 CMP #1
    case 0xC12850: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:45 CMP #1
    // Overlapping static entry reached from 0xC12850.
    case 0xC12852: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:46 BNE @UNKNOWN1
    case 0xC12853: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:47 LDX #WINDOW::UNKNOWN33
    case 0xC12855: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:47 LDX #WINDOW::UNKNOWN33
    // Overlapping static entry reached from 0xC12855.
    case 0xC12857: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:48 BRA @UNKNOWN2
    case 0xC12858: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:50 CLC
    case 0xC1285A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:51 ADC #WINDOW::UNKNOWN28
    case 0xC1285B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:51 ADC #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC1285B.
    case 0xC1285D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:52 TAX
    case 0xC1285E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:53 DEX
    case 0xC1285F: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:55 STX @LOCAL07
    case 0xC12860: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/character_select_prompt.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12862: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/character_select_prompt.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12864: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:57 LDA #0
    case 0xC12867: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:57 LDA #0
    // Overlapping static entry reached from 0xC12867.
    case 0xC12869: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:58 STA @VIRTUAL02
    case 0xC1286A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:59 BRA @UNKNOWN4
    case 0xC1286C: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:61 LDA @VIRTUAL02
    case 0xC1286E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:62 CLC
    case 0xC12870: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:68 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC12871: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:68 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC12871.
    case 0xC12873: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:70 STA @VIRTUAL04
    case 0xC12874: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:71 STA @LOCAL06
    case 0xC12876: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:72 LDX @VIRTUAL04
    case 0xC12878: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:73 LDA __BSS_START__,X
    case 0xC1287A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:74 AND #$00FF
    case 0xC1287D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC1287D.
    case 0xC1287F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:75 JSL GET_PARTY_CHARACTER_NAME
    case 0xC12880: {
        Instruction step(cpu, 0x22, 0xC222D3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12884: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12886: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12888: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1288A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:77 LDX #6
    case 0xC1288C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:77 LDX #6
    // Overlapping static entry reached from 0xC1288C.
    case 0xC1288E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1288F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1288F.
    case 0xC12891: {
        Instruction step(cpu, 0x9C, 0x00D222u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:79 JSL MEMCPY16
    case 0xC12892: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC12891.
    case 0xC12894: {
        Instruction step(cpu, 0x8E, 0x00E2C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC12896: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:80 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC12894.
    case 0xC12897: {
        Instruction step(cpu, 0x20, 0x00A49Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    case 0xC12898: {
        Instruction step(cpu, 0x9C, 0x009CA4u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC12897.
    case 0xC1289A: {
        Instruction step(cpu, 0x9C, 0x0020C2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC1289B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1289D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1289D.
    case 0xC1289F: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A2: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A8: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC128AA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128AC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128AE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128B0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128B2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC128B4.
    case 0xC128B6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128B7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC128B9.
    case 0xC128BB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128BC: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:87 LDY #0
    case 0xC128BE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:87 LDY #0
    // Overlapping static entry reached from 0xC128BE.
    case 0xC128C0: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:88 LDA @VIRTUAL02
    case 0xC128C1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:89 STA @VIRTUAL04
    case 0xC128C3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:90 ASL
    case 0xC128C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:91 ADC @VIRTUAL04
    case 0xC128C6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:92 ASL
    case 0xC128C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:93 TAX
    case 0xC128C9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:94 STX @LOCAL05
    case 0xC128CA: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:95 LDA @LOCAL06
    case 0xC128CC: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:96 STA @VIRTUAL04
    case 0xC128CE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:97 LDX @VIRTUAL04
    case 0xC128D0: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:98 LDA __BSS_START__,X
    case 0xC128D2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:99 AND #$00FF
    case 0xC128D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC128D5.
    case 0xC128D7: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:100 LDX @LOCAL05
    case 0xC128D8: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:101 JSR UNKNOWN_C1153B
    case 0xC128DA: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:102 INC @VIRTUAL02
    case 0xC128DD: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC128DF: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:105 AND #$00FF
    case 0xC128E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC128E2.
    case 0xC128E4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:106 CLC
    case 0xC128E5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:107 SBC @VIRTUAL02
    case 0xC128E6: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128E8: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128EA: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128EC: {
        Instruction step(cpu, 0x4C, 0x00286Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128EF: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128F1: {
        Instruction step(cpu, 0x4C, 0x00286Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:109 JSR PRINT_MENU_ITEMS
    case 0xC128F4: {
        Instruction step(cpu, 0x20, 0x00163Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128F7: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128F9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128FB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128FD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128FF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12901: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12903: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12905: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:116 JSR UNKNOWN_C11F5A
    case 0xC12907: {
        Instruction step(cpu, 0x20, 0x001F5Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:117 LDA @LOCAL0D
    case 0xC1290A: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:118 JSR SELECTION_MENU
    case 0xC1290C: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:119 TAX
    case 0xC1290F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:120 STX @LOCAL06
    case 0xC12910: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:121 JSR UNKNOWN_C11F8A
    case 0xC12912: {
        Instruction step(cpu, 0x20, 0x001F8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:122 LDA @LOCAL07
    case 0xC12915: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:123 JSR CLOSE_WINDOW
    case 0xC12917: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1291B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Au : 0x009C8Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1291B.
    case 0xC1291D: {
        Instruction step(cpu, 0x9C, 0x00BC22u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:125 JSL UNKNOWN_C20ABC
    case 0xC1291E: {
        Instruction step(cpu, 0x22, 0xC20ABCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:125 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1291D.
    case 0xC12920: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:125 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC12920.
    case 0xC12921: {
        Instruction step(cpu, 0xC2, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:126 JMP @UNKNOWN44
    case 0xC12922: {
        Instruction step(cpu, 0x4C, 0x002BB1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:126 JMP @UNKNOWN44
    // Overlapping static entry reached from 0xC12921.
    case 0xC12923: {
        Instruction step(cpu, 0xB1, 0x00002Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:128 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC12925: {
        Instruction step(cpu, 0xAD, 0x0089CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:129 CMP #.LOWORD(-1)
    case 0xC12928: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:129 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12928.
    case 0xC1292A: {
        Instruction step(cpu, 0xFF, 0xA507F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:130 BEQ @UNKNOWN8
    case 0xC1292B: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:131 LDA @LOCAL0C
    case 0xC1292D: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:131 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC1292A.
    case 0xC1292E: {
        Instruction step(cpu, 0x30, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:132 CMP #2
    case 0xC1292F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:132 CMP #2
    // Overlapping static entry reached from 0xC1292E.
    case 0xC12930: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:132 CMP #2
    // Overlapping static entry reached from 0xC1292F.
    case 0xC12931: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:133 BNE @UNKNOWN9
    case 0xC12932: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:135 LDX #0
    case 0xC12934: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:135 LDX #0
    // Overlapping static entry reached from 0xC12934.
    case 0xC12936: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:136 BRA @UNKNOWN10
    case 0xC12937: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:138 LDX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC12939: {
        Instruction step(cpu, 0xAE, 0x0089CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:140 STX @VIRTUAL04
    case 0xC1293C: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1293E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1293E.
    case 0xC12940: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12941: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12943: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12943.
    case 0xC12945: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12946: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC12948: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1294A: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1294C: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1294E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC12950: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:143 BEQ @UNKNOWN12
    case 0xC12952: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:151 LDX @VIRTUAL04
    case 0xC12954: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:152 LDA GAME_STATE + game_state::party_members,X
    case 0xC12956: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:154 AND #$00FF
    case 0xC12959: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC12959.
    case 0xC1295B: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:155 PHA
    case 0xC1295C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1295D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1295F: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12962: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12964: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:157 PLA
    case 0xC12967: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:158 JSL UNKNOWN_C09279
    case 0xC12968: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:160 STZ PAGINATION_ANIMATION_FRAME
    case 0xC1296C: {
        Instruction step(cpu, 0x9C, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:161 LDA #10
    case 0xC1296F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:161 LDA #10
    // Overlapping static entry reached from 0xC1296F.
    case 0xC12971: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:162 STA @VIRTUAL02
    case 0xC12972: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:163 STA @LOCAL07
    case 0xC12974: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:165 LDA @LOCAL0C
    case 0xC12976: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:166 BNE @UNKNOWN14
    case 0xC12978: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:167 LDA @VIRTUAL04
    case 0xC1297A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:168 JSR UNKNOWN_C43573
    case 0xC1297C: {
        Instruction step(cpu, 0x22, 0xC43573u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:170 JSR CLEAR_INSTANT_PRINTING
    case 0xC12980: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:171 JSL WINDOW_TICK
    case 0xC12984: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:172 LDA @VIRTUAL04
    case 0xC12988: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:173 STA @LOCAL04
    case 0xC1298A: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:174 LDA PAGINATION_WINDOW
    case 0xC1298C: {
        Instruction step(cpu, 0xAD, 0x005E7Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:175 CMP #.LOWORD(-1)
    case 0xC1298F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:175 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1298F.
    case 0xC12991: {
        Instruction step(cpu, 0xFF, 0xAD1AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:176 BEQ @UNKNOWN15
    case 0xC12992: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:177 LDA PAGINATION_WINDOW
    case 0xC12994: {
        Instruction step(cpu, 0xAD, 0x005E7Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:177 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12991.
    case 0xC12995: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:177 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12995.
    case 0xC12996: {
        Instruction step(cpu, 0x5E, 0x00AA0Au, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:178 ASL
    case 0xC12997: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:179 TAX
    case 0xC12998: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:180 LDA OPEN_WINDOW_TABLE,X
    case 0xC12999: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:181 CMP #.LOWORD(-1)
    case 0xC1299C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:181 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1299C.
    case 0xC1299E: {
        Instruction step(cpu, 0xFF, 0xA00DF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:182 BEQ @UNKNOWN15
    case 0xC1299F: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:183 LDY #.SIZEOF(window_stats)
    case 0xC129A1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1299E.
    case 0xC129A2: {
        Instruction step(cpu, 0x52, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC129A1.
    case 0xC129A3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:184 JSL MULT168
    case 0xC129A4: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:185 CLC
    case 0xC129A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:186 ADC #.LOWORD(WINDOW_STATS)
    case 0xC129A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:186 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC129A9.
    case 0xC129AB: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:187 STA @LOCAL03
    case 0xC129AC: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:187 STA @LOCAL03
    // Overlapping static entry reached from 0xC129AB.
    case 0xC129AD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:189 LDA PAGINATION_WINDOW
    case 0xC129AE: {
        Instruction step(cpu, 0xAD, 0x005E7Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:190 CMP #.LOWORD(-1)
    case 0xC129B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:190 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC129B1.
    case 0xC129B3: {
        Instruction step(cpu, 0xFF, 0xAD62F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:191 BEQ @UNKNOWN16
    case 0xC129B4: {
        Instruction step(cpu, 0xF0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:192 LDA PAGINATION_WINDOW
    case 0xC129B6: {
        Instruction step(cpu, 0xAD, 0x005E7Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:192 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC129B3.
    case 0xC129B7: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:192 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC129B7.
    case 0xC129B8: {
        Instruction step(cpu, 0x5E, 0x00AA0Au, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:193 ASL
    case 0xC129B9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:194 TAX
    case 0xC129BA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:195 LDA OPEN_WINDOW_TABLE,X
    case 0xC129BB: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:196 CMP #.LOWORD(-1)
    case 0xC129BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:196 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC129BE.
    case 0xC129C0: {
        Instruction step(cpu, 0xFF, 0xA955F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:197 BEQ @UNKNOWN16
    case 0xC129C1: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00E43Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C0.
    case 0xC129C4: {
        Instruction step(cpu, 0x3C, 0x0085E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C3.
    case 0xC129C5: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129C6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C5.
    case 0xC129C7: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C7.
    case 0xC129C9: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C8.
    case 0xC129CA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129CB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:199 LDA PAGINATION_ANIMATION_FRAME
    case 0xC129CD: {
        Instruction step(cpu, 0xAD, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:200 ASL
    case 0xC129D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:201 ASL
    case 0xC129D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:202 CLC
    case 0xC129D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:203 ADC @VIRTUAL06
    case 0xC129D3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:204 STA @VIRTUAL06
    case 0xC129D5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC129D7.
    case 0xC129D9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DD: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129E1: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:207 LDY #window_stats::window_y
    case 0xC129EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:207 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC129EB.
    case 0xC129ED: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:208 LDA (@LOCAL03),Y
    case 0xC129EE: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:210 STA @VIRTUAL02
    case 0xC129F5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:211 LDY #window_stats::window_x
    case 0xC129F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:211 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC129F7.
    case 0xC129F9: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:212 LDA (@LOCAL03),Y
    case 0xC129FA: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:213 LDY #window_stats::width
    case 0xC129FC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:213 LDY #window_stats::width
    // Overlapping static entry reached from 0xC129FC.
    case 0xC129FE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:214 CLC
    case 0xC129FF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:215 ADC (@LOCAL03),Y
    case 0xC12A00: {
        Instruction step(cpu, 0x71, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:216 DEC
    case 0xC12A02: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:217 DEC
    case 0xC12A03: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:218 DEC
    case 0xC12A04: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:219 CLC
    case 0xC12A05: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:220 ADC @VIRTUAL02
    case 0xC12A06: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:221 CLC
    case 0xC12A08: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xC12A09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC12A09.
    case 0xC12A0B: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:223 TAY
    case 0xC12A0C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:224 LDX #8
    case 0xC12A0D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:224 LDX #8
    // Overlapping static entry reached from 0xC12A0D.
    case 0xC12A0F: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC12A10: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:226 LDA #0
    case 0xC12A12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:227 JSL PREPARE_VRAM_COPY
    case 0xC12A14: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12A12.
    case 0xC12A15: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12A15.
    case 0xC12A17: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:230 LDA #0
    case 0xC12A18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:230 LDA #0
    // Overlapping static entry reached from 0xC12A17.
    case 0xC12A19: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:230 LDA #0
    // Overlapping static entry reached from 0xC12A18.
    case 0xC12A1A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:231 STA @LOCAL06
    case 0xC12A1B: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:232 JMP @UNKNOWN28
    case 0xC12A1D: {
        Instruction step(cpu, 0x4C, 0x002AB9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:234 JSL UNKNOWN_C12E42
    case 0xC12A20: {
        Instruction step(cpu, 0x22, 0xC12E42u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:235 LDA PAD_PRESS
    case 0xC12A24: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:236 AND #PAD::LEFT
    case 0xC12A27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:236 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC12A27.
    case 0xC12A29: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:237 BEQ @UNKNOWN20
    case 0xC12A2A: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:238 LDX @LOCAL04
    case 0xC12A2C: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:239 DEX
    case 0xC12A2E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:240 STX @LOCAL04
    case 0xC12A2F: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:241 LDA @LOCAL0C
    case 0xC12A31: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:242 BEQ @UNKNOWN18
    case 0xC12A33: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:243 LDY #SFX::CURSOR2
    case 0xC12A35: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:243 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12A35.
    case 0xC12A37: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:244 BRA @UNKNOWN19
    case 0xC12A38: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12A3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12A3A.
    case 0xC12A3C: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:248 STY @LOCAL02
    case 0xC12A3D: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:249 LDA #2
    case 0xC12A3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:249 LDA #2
    // Overlapping static entry reached from 0xC12A3F.
    case 0xC12A41: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:250 STA PAGINATION_ANIMATION_FRAME
    case 0xC12A42: {
        Instruction step(cpu, 0x8D, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:251 JMP @UNKNOWN32
    case 0xC12A45: {
        Instruction step(cpu, 0x4C, 0x002AE0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:253 LDA PAD_PRESS
    case 0xC12A48: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:254 AND #PAD::RIGHT
    case 0xC12A4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:254 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC12A4B.
    case 0xC12A4D: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:255 BEQ @UNKNOWN23
    case 0xC12A4E: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:255 BEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC12A4D.
    case 0xC12A4F: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:256 LDX @LOCAL04
    case 0xC12A50: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:257 INX
    case 0xC12A52: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:258 STX @LOCAL04
    case 0xC12A53: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:259 LDA @LOCAL0C
    case 0xC12A55: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:260 BEQ @UNKNOWN21
    case 0xC12A57: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:261 LDY #SFX::CURSOR2
    case 0xC12A59: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:261 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12A59.
    case 0xC12A5B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:262 BRA @UNKNOWN22
    case 0xC12A5C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12A5E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12A5E.
    case 0xC12A60: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:266 STY @LOCAL02
    case 0xC12A61: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:267 LDA #3
    case 0xC12A63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:267 LDA #3
    // Overlapping static entry reached from 0xC12A63.
    case 0xC12A65: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:268 STA PAGINATION_ANIMATION_FRAME
    case 0xC12A66: {
        Instruction step(cpu, 0x8D, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:269 BRA @UNKNOWN32
    case 0xC12A69: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:271 LDA PAD_PRESS
    case 0xC12A6B: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC12A6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC12A6E.
    case 0xC12A70: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:273 BEQ @UNKNOWN24
    case 0xC12A71: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:274 LDX @VIRTUAL04
    case 0xC12A73: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:275 LDA GAME_STATE + game_state::party_members,X
    case 0xC12A75: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:276 AND #$00FF
    case 0xC12A78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:276 AND #$00FF
    // Overlapping static entry reached from 0xC12A78.
    case 0xC12A7A: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:277 TAX
    case 0xC12A7B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:278 STX @LOCAL06
    case 0xC12A7C: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:279 LDA #SFX::CURSOR1
    case 0xC12A7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:279 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC12A7E.
    case 0xC12A80: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:280 JSL PLAY_SOUND
    case 0xC12A81: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:281 JMP @UNKNOWN44
    case 0xC12A85: {
        Instruction step(cpu, 0x4C, 0x002BB1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:283 LDA PAD_PRESS
    case 0xC12A88: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:284 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC12A8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:284 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC12A8B.
    case 0xC12A8D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0024F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:285 BEQ @UNKNOWN27
    case 0xC12A8E: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:285 BEQ @UNKNOWN27
    // Overlapping static entry reached from 0xC12A8D.
    case 0xC12A8F: {
        Instruction step(cpu, 0x24, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:286 LDA @LOCAL0D
    case 0xC12A90: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:286 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC12A8F.
    case 0xC12A91: {
        Instruction step(cpu, 0x32, 0x0000C9u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:287 CMP #1
    case 0xC12A92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:287 CMP #1
    // Overlapping static entry reached from 0xC12A91.
    case 0xC12A93: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:287 CMP #1
    // Overlapping static entry reached from 0xC12A92.
    case 0xC12A94: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:288 BNE @UNKNOWN27
    case 0xC12A95: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:289 LDX #0
    case 0xC12A97: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:289 LDX #0
    // Overlapping static entry reached from 0xC12A97.
    case 0xC12A99: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:290 STX @LOCAL06
    case 0xC12A9A: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:291 LDA @LOCAL0C
    case 0xC12A9C: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:292 BEQ @UNKNOWN25
    case 0xC12A9E: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:293 LDY #SFX::CURSOR2
    case 0xC12AA0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:293 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12AA0.
    case 0xC12AA2: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:294 BRA @UNKNOWN26
    case 0xC12AA3: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:296 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12AA5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:296 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12AA5.
    case 0xC12AA7: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:298 TYA
    case 0xC12AA8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:299 JSL PLAY_SOUND
    case 0xC12AA9: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:300 JSL UNKNOWN_C3E6F8
    case 0xC12AAD: {
        Instruction step(cpu, 0x22, 0xC3E6F8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:301 JMP @UNKNOWN44
    case 0xC12AB1: {
        Instruction step(cpu, 0x4C, 0x002BB1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:303 LDA @LOCAL06
    case 0xC12AB4: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:304 INC
    case 0xC12AB6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:305 STA @LOCAL06
    case 0xC12AB7: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:307 LDX @LOCAL07
    case 0xC12AB9: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:308 STX @VIRTUAL02
    case 0xC12ABB: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:309 CMP @VIRTUAL02
    case 0xC12ABD: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/character_select_prompt.asm:310 BCCL @UNKNOWN17
    case 0xC12ABF: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/character_select_prompt.asm:310 BCCL @UNKNOWN17
    case 0xC12AC1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:310 BCCL @UNKNOWN17
    case 0xC12AC3: {
        Instruction step(cpu, 0x4C, 0x002A20u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:311 LDA PAGINATION_ANIMATION_FRAME
    case 0xC12AC6: {
        Instruction step(cpu, 0xAD, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:312 BNE @UNKNOWN30
    case 0xC12AC9: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:313 LDX #1
    case 0xC12ACB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:313 LDX #1
    // Overlapping static entry reached from 0xC12ACB.
    case 0xC12ACD: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:314 BRA @UNKNOWN31
    case 0xC12ACE: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:316 LDX #0
    case 0xC12AD0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:316 LDX #0
    // Overlapping static entry reached from 0xC12AD0.
    case 0xC12AD2: {
        Instruction step(cpu, 0x00, 0x00008Eu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:318 STX PAGINATION_ANIMATION_FRAME
    case 0xC12AD3: {
        Instruction step(cpu, 0x8E, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:319 LDA #10
    case 0xC12AD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:319 LDA #10
    // Overlapping static entry reached from 0xC12AD6.
    case 0xC12AD8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:320 STA @VIRTUAL02
    case 0xC12AD9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:321 STA @LOCAL07
    case 0xC12ADB: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:322 JMP @UNKNOWN15
    case 0xC12ADD: {
        Instruction step(cpu, 0x4C, 0x0029AEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:324 TXA
    case 0xC12AE0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:325 SEC
    case 0xC12AE1: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:326 SBC @VIRTUAL04
    case 0xC12AE2: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:327 STA @VIRTUAL02
    case 0xC12AE4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:328 STA @LOCAL07
    case 0xC12AE6: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:330 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12AE8: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:331 AND #$00FF
    case 0xC12AEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:331 AND #$00FF
    // Overlapping static entry reached from 0xC12AEB.
    case 0xC12AED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:332 STA @LOCAL06
    case 0xC12AEE: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:333 STX @VIRTUAL02
    case 0xC12AF0: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:334 CLC
    case 0xC12AF2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:335 SBC @VIRTUAL02
    case 0xC12AF3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AF5: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AF7: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AF9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AFB: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:337 LDX #0
    case 0xC12AFD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:337 LDX #0
    // Overlapping static entry reached from 0xC12AFD.
    case 0xC12AFF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:338 STX @LOCAL04
    case 0xC12B00: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:339 BRA @UNKNOWN39
    case 0xC12B02: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:341 STX @VIRTUAL02
    case 0xC12B04: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:342 LDA #0
    case 0xC12B06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:342 LDA #0
    // Overlapping static entry reached from 0xC12B06.
    case 0xC12B08: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:343 CLC
    case 0xC12B09: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:344 SBC @VIRTUAL02
    case 0xC12B0A: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B0C: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B0E: {
        Instruction step(cpu, 0x10, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B10: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B12: {
        Instruction step(cpu, 0x30, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:346 LDA @LOCAL06
    case 0xC12B14: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:347 TAX
    case 0xC12B16: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:348 DEX
    case 0xC12B17: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:349 STX @LOCAL04
    case 0xC12B18: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12B1A.
    case 0xC12B1C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B1D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12B1F.
    case 0xC12B21: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B22: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B24: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B26: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B28: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B2A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:353 CMP @VIRTUAL0A+2
    case 0xC12B2C: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:354 BNE @UNKNOWN40
    case 0xC12B2E: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:355 LDA @VIRTUAL06
    case 0xC12B30: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:356 CMP @VIRTUAL0A
    case 0xC12B32: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:358 BEQ @UNKNOWN41
    case 0xC12B34: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:359 LDA GAME_STATE + game_state::party_members,X
    case 0xC12B36: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:360 AND #$00FF
    case 0xC12B39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:360 AND #$00FF
    // Overlapping static entry reached from 0xC12B39.
    case 0xC12B3B: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:361 PHA
    case 0xC12B3C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B3D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B3F: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B42: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B44: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:363 PLA
    case 0xC12B47: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:364 JSL UNKNOWN_C09279
    case 0xC12B48: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:365 CMP #0
    case 0xC12B4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:365 CMP #0
    // Overlapping static entry reached from 0xC12B4C.
    case 0xC12B4E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:366 BNE @UNKNOWN41
    case 0xC12B4F: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:367 LDA @LOCAL07
    case 0xC12B51: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:368 STA @VIRTUAL02
    case 0xC12B53: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:369 LDX @LOCAL04
    case 0xC12B55: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:370 TXA
    case 0xC12B57: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:371 CLC
    case 0xC12B58: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:372 ADC @VIRTUAL02
    case 0xC12B59: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:373 TAX
    case 0xC12B5B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:374 STX @LOCAL04
    case 0xC12B5C: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:375 JMP @UNKNOWN33
    case 0xC12B5E: {
        Instruction step(cpu, 0x4C, 0x002AE8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:377 LDX @LOCAL04
    case 0xC12B61: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:378 TXA
    case 0xC12B63: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:379 CMP @VIRTUAL04
    case 0xC12B64: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:380 BEQ @UNKNOWN43
    case 0xC12B66: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:381 LDY @LOCAL02
    case 0xC12B68: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:382 TYA
    case 0xC12B6A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:383 JSL PLAY_SOUND
    case 0xC12B6B: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:384 LDX @LOCAL04
    case 0xC12B6F: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:385 STX @VIRTUAL04
    case 0xC12B71: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12B73.
    case 0xC12B75: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B76: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12B78.
    case 0xC12B7A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B7B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B7D: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B7F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B81: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B83: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:388 CMP @VIRTUAL06+2
    case 0xC12B85: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:389 BNE @UNKNOWN42
    case 0xC12B87: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:390 LDA @VIRTUAL0A
    case 0xC12B89: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:391 CMP @VIRTUAL06
    case 0xC12B8B: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:393 BEQ @UNKNOWN43
    case 0xC12B8D: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:394 LDX @VIRTUAL04
    case 0xC12B8F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:395 LDA GAME_STATE + game_state::party_members,X
    case 0xC12B91: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:396 AND #$00FF
    case 0xC12B94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC12B94.
    case 0xC12B96: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:397 PHA
    case 0xC12B97: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B98: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B9A: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B9D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B9F: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    // Overlapping static entry reached from 0xC11A2C.
    case 0xC12BA0: {
        Instruction step(cpu, 0xBE, 0x006800u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:399 PLA
    case 0xC12BA2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:400 JSL UNKNOWN_C09279
    case 0xC12BA3: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:402 LDA #4
    case 0xC12BA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:402 LDA #4
    // Overlapping static entry reached from 0xC12BA7.
    case 0xC12BA9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:403 STA @VIRTUAL02
    case 0xC12BAA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:404 STA @LOCAL07
    case 0xC12BAC: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:405 JMP @UNKNOWN13
    case 0xC12BAE: {
        Instruction step(cpu, 0x4C, 0x002976u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:407 LDA #.LOWORD(-1)
    case 0xC12BB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:407 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12BB1.
    case 0xC12BB3: {
        Instruction step(cpu, 0xFF, 0x5E7C8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:408 STA PAGINATION_ANIMATION_FRAME
    case 0xC12BB4: {
        Instruction step(cpu, 0x8D, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BB7: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BB9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BBB: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BBD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:410 LDA @LOCAL09
    case 0xC12BBF: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:411 CLC
    case 0xC12BC1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:412 ADC #window_stats::argument_memory
    case 0xC12BC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:412 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12BC2.
    case 0xC12BC4: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:413 TAY
    case 0xC12BC5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BC6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BC8: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BCB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BCD: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:415 LDX @LOCAL06
    case 0xC12BD0: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt.asm:416 TXA
    case 0xC12BD2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/character_select_prompt.asm:417 END_C_FUNCTION
    case 0xC12BD3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/character_select_prompt.asm:417 END_C_FUNCTION
    case 0xC12BD4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
