// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/character_select_prompt-jp.asm
bool resume_text_character_select_prompt_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/character_select_prompt-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC12EE7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EE9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CCu : 0x00FFCCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC12EEC.
    case 0xC12EEE: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EF0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:25 STX @LOCAL0D
    case 0xC12EF1: {
        Instruction step(cpu, 0x86, 0x000032u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:25 STX @LOCAL0D
    // Overlapping static entry reached from 0xC12EEE.
    case 0xC12EF2: {
        Instruction step(cpu, 0x32, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:26 STA @LOCAL0C
    case 0xC12EF3: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:26 STA @LOCAL0C
    // Overlapping static entry reached from 0xC12EF2.
    case 0xC12EF4: {
        Instruction step(cpu, 0x30, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EF5: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12EF4.
    case 0xC12EF6: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EF7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12EF6.
    case 0xC12EF8: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EF9: {
        Instruction step(cpu, 0xA5, 0x000048u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12EF8.
    case 0xC12EFA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EFB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12EFD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12EFF: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12F01: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12F03: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F05: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F07: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F09: {
        Instruction step(cpu, 0xA5, 0x000044u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F0B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F0D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F0F: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F11: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F13: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:31 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC12F15: {
        Instruction step(cpu, 0x20, 0x000504u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:32 STA @LOCAL09
    case 0xC12F18: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:33 CLC
    case 0xC12F1A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:34 ADC #window_stats::argument_memory
    case 0xC12F1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:34 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12F1B.
    case 0xC12F1D: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:35 TAY
    case 0xC12F1E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F1F: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F22: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F24: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F27: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F29: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F2B: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F2D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F2F: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:38 LDA @LOCAL0C
    case 0xC12F31: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:39 CMP #1
    case 0xC12F33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:39 CMP #1
    // Overlapping static entry reached from 0xC12F33.
    case 0xC12F35: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/character_select_prompt-jp.asm:40 BNEL @UNKNOWN7
    case 0xC12F36: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:40 BNEL @UNKNOWN7
    case 0xC12F38: {
        Instruction step(cpu, 0x4C, 0x003018u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12F3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000035u : 0x009F35u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12F3B.
    case 0xC12F3D: {
        Instruction step(cpu, 0x9F, 0x08B122u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:42 JSL UNKNOWN_C20A20
    case 0xC12F3E: {
        Instruction step(cpu, 0x22, 0xC208B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:42 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12F3D.
    case 0xC12F41: {
        Instruction step(cpu, 0xC2, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12F42: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC12F41.
    case 0xC12F43: {
        Instruction step(cpu, 0x55, 0x00009Bu, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:44 AND #$00FF
    case 0xC12F45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC12F45.
    case 0xC12F47: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:45 CMP #1
    case 0xC12F48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:45 CMP #1
    // Overlapping static entry reached from 0xC12F48.
    case 0xC12F4A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:46 BNE @UNKNOWN1
    case 0xC12F4B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:47 LDX #WINDOW::UNKNOWN33
    case 0xC12F4D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:47 LDX #WINDOW::UNKNOWN33
    // Overlapping static entry reached from 0xC12F4D.
    case 0xC12F4F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:48 BRA @UNKNOWN2
    case 0xC12F50: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:50 CLC
    case 0xC12F52: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:51 ADC #WINDOW::UNKNOWN28
    case 0xC12F53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:51 ADC #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC12F53.
    case 0xC12F55: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:52 TAX
    case 0xC12F56: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:53 DEX
    case 0xC12F57: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:55 STX @LOCAL07
    case 0xC12F58: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/character_select_prompt-jp.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12F5A: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/character_select_prompt-jp.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12F5C: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:57 LDA #0
    case 0xC12F5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:57 LDA #0
    // Overlapping static entry reached from 0xC12F5F.
    case 0xC12F61: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:58 STA @VIRTUAL02
    case 0xC12F62: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:59 BRA @UNKNOWN4
    case 0xC12F64: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:61 LDA @VIRTUAL02
    case 0xC12F66: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:62 CLC
    case 0xC12F68: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:64 ADC #.LOWORD(GAME_STATE)
    case 0xC12F69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:64 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC12F69.
    case 0xC12F6B: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:65 CLC
    case 0xC12F6C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:66 ADC #game_state::party_members
    case 0xC12F6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000077u : 0x000077u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:66 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC12F6D.
    case 0xC12F6F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:70 STA @VIRTUAL04
    case 0xC12F70: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:71 STA @LOCAL06
    case 0xC12F72: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:72 LDX @VIRTUAL04
    case 0xC12F74: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:73 LDA __BSS_START__,X
    case 0xC12F76: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:74 AND #$00FF
    case 0xC12F79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC12F79.
    case 0xC12F7B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:75 JSL GET_PARTY_CHARACTER_NAME
    case 0xC12F7C: {
        Instruction step(cpu, 0x22, 0xC22172u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F80: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F82: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F84: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F86: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:77 LDX #4
    case 0xC12F88: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:77 LDX #4
    // Overlapping static entry reached from 0xC12F88.
    case 0xC12F8A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC12F8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x009F4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC12F8B.
    case 0xC12F8D: {
        Instruction step(cpu, 0x9F, 0x8EC322u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:79 JSL MEMCPY16
    case 0xC12F8E: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC12F8D.
    case 0xC12F91: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC12F92: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:80 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC12F91.
    case 0xC12F93: {
        Instruction step(cpu, 0x20, 0x004E9Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    case 0xC12F94: {
        Instruction step(cpu, 0x9C, 0x009F4Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC12F93.
    case 0xC12F96: {
        Instruction step(cpu, 0x9F, 0xA920C2u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC12F97: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x009F4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC12F96.
    case 0xC12F9A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC12F99.
    case 0xC12F9B: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F9C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F9E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F9F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12FA1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12FA2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12FA4: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC12FA6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FA8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FAA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FAC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FAE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC12FB0.
    case 0xC12FB2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB3: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC12FB5.
    case 0xC12FB7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB8: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:87 LDY #0
    case 0xC12FBA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:87 LDY #0
    // Overlapping static entry reached from 0xC12FBA.
    case 0xC12FBC: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:88 LDA @VIRTUAL02
    case 0xC12FBD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:89 STA @VIRTUAL04
    case 0xC12FBF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:90 ASL
    case 0xC12FC1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:91 ADC @VIRTUAL04
    case 0xC12FC2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:92 ASL
    case 0xC12FC4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:93 TAX
    case 0xC12FC5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:94 STX @LOCAL05
    case 0xC12FC6: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:95 LDA @LOCAL06
    case 0xC12FC8: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:96 STA @VIRTUAL04
    case 0xC12FCA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:97 LDX @VIRTUAL04
    case 0xC12FCC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:98 LDA __BSS_START__,X
    case 0xC12FCE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:99 AND #$00FF
    case 0xC12FD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC12FD1.
    case 0xC12FD3: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:100 LDX @LOCAL05
    case 0xC12FD4: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:101 JSR UNKNOWN_C1153B
    case 0xC12FD6: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:102 INC @VIRTUAL02
    case 0xC12FD9: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12FDB: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:105 AND #$00FF
    case 0xC12FDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC12FDE.
    case 0xC12FE0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:106 CLC
    case 0xC12FE1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:107 SBC @VIRTUAL02
    case 0xC12FE2: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FE4: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FE6: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FE8: {
        Instruction step(cpu, 0x4C, 0x002F66u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FEB: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    // Overlapping static entry reached from 0xC13021.
    case 0xC12FEC: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FED: {
        Instruction step(cpu, 0x4C, 0x002F66u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    // Overlapping static entry reached from 0xC12FEC.
    case 0xC12FEE: {
        Instruction step(cpu, 0x66, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:109 JSR PRINT_MENU_ITEMS
    case 0xC12FF0: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF3: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF7: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:116 JSR UNKNOWN_C11F5A
    case 0xC12FFB: {
        Instruction step(cpu, 0x20, 0x00267Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:117 LDA @LOCAL0D
    case 0xC12FFE: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:118 JSR SELECTION_MENU
    case 0xC13000: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:119 TAX
    case 0xC13003: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:120 STX @LOCAL06
    case 0xC13004: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:121 JSR UNKNOWN_C11F8A
    case 0xC13006: {
        Instruction step(cpu, 0x20, 0x0026ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:122 LDA @LOCAL07
    case 0xC13009: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:123 JSR CLOSE_WINDOW
    case 0xC1300B: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1300E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000035u : 0x009F35u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1300E.
    case 0xC13010: {
        Instruction step(cpu, 0x9F, 0x094D22u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:125 JSL UNKNOWN_C20ABC
    case 0xC13011: {
        Instruction step(cpu, 0x22, 0xC2094Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:125 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC13010.
    case 0xC13014: {
        Instruction step(cpu, 0xC2, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:126 JMP @UNKNOWN44
    case 0xC13015: {
        Instruction step(cpu, 0x4C, 0x0032B7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:126 JMP @UNKNOWN44
    // Overlapping static entry reached from 0xC13014.
    case 0xC13016: {
        Instruction step(cpu, 0xB7, 0x000032u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:128 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC13018: {
        Instruction step(cpu, 0xAD, 0x008D08u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:129 CMP #.LOWORD(-1)
    case 0xC1301B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:129 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1301B.
    case 0xC1301D: {
        Instruction step(cpu, 0xFF, 0xA507F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:130 BEQ @UNKNOWN8
    case 0xC1301E: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:131 LDA @LOCAL0C
    case 0xC13020: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:131 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC1301D.
    case 0xC13021: {
        Instruction step(cpu, 0x30, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:132 CMP #2
    case 0xC13022: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:132 CMP #2
    // Overlapping static entry reached from 0xC13021.
    case 0xC13023: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:132 CMP #2
    // Overlapping static entry reached from 0xC13022.
    case 0xC13024: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:133 BNE @UNKNOWN9
    case 0xC13025: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:135 LDX #0
    case 0xC13027: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:135 LDX #0
    // Overlapping static entry reached from 0xC13027.
    case 0xC13029: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:136 BRA @UNKNOWN10
    case 0xC1302A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:138 LDX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC1302C: {
        Instruction step(cpu, 0xAE, 0x008D08u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:140 STX @VIRTUAL04
    case 0xC1302F: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13031: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13031.
    case 0xC13033: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13034: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13036: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13036.
    case 0xC13038: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13039: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1303B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1303D: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1303F: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13041: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13043: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:143 BEQ @UNKNOWN12
    case 0xC13045: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:145 LDA @VIRTUAL04
    case 0xC13047: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:146 CLC
    case 0xC13049: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:147 ADC #.LOWORD(GAME_STATE)
    case 0xC1304A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:147 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1304A.
    case 0xC1304C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:148 TAX
    case 0xC1304D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:149 LDA a:game_state::party_members,X
    case 0xC1304E: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:154 AND #$00FF
    case 0xC13051: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC13051.
    case 0xC13053: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:155 PHA
    case 0xC13054: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC13055: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC13057: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1305A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1305C: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:157 PLA
    case 0xC1305F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:158 JSL UNKNOWN_C09279
    case 0xC13060: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:160 STZ PAGINATION_ANIMATION_FRAME
    case 0xC13064: {
        Instruction step(cpu, 0x9C, 0x0061F4u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:161 LDA #10
    case 0xC13067: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:161 LDA #10
    // Overlapping static entry reached from 0xC13067.
    case 0xC13069: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:162 STA @VIRTUAL02
    case 0xC1306A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:163 STA @LOCAL07
    case 0xC1306C: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:165 LDA @LOCAL0C
    case 0xC1306E: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:166 BNE @UNKNOWN14
    case 0xC13070: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:167 LDA @VIRTUAL04
    case 0xC13072: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:168 JSR UNKNOWN_C43573
    case 0xC13074: {
        Instruction step(cpu, 0x20, 0x000C40u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:170 JSR CLEAR_INSTANT_PRINTING
    case 0xC13077: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:171 JSL WINDOW_TICK
    case 0xC1307A: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:172 LDA @VIRTUAL04
    case 0xC1307E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:173 STA @LOCAL04
    case 0xC13080: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:174 LDA PAGINATION_WINDOW
    case 0xC13082: {
        Instruction step(cpu, 0xAD, 0x0061F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:175 CMP #.LOWORD(-1)
    case 0xC13085: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:175 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13085.
    case 0xC13087: {
        Instruction step(cpu, 0xFF, 0xAD1AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:176 BEQ @UNKNOWN15
    case 0xC13088: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:177 LDA PAGINATION_WINDOW
    case 0xC1308A: {
        Instruction step(cpu, 0xAD, 0x0061F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:177 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC13087.
    case 0xC1308B: {
        Instruction step(cpu, 0xF2, 0x000061u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:178 ASL
    case 0xC1308D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:179 TAX
    case 0xC1308E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:180 LDA OPEN_WINDOW_TABLE,X
    case 0xC1308F: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:181 CMP #.LOWORD(-1)
    case 0xC13092: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:181 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13092.
    case 0xC13094: {
        Instruction step(cpu, 0xFF, 0xA00DF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:182 BEQ @UNKNOWN15
    case 0xC13095: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:183 LDY #.SIZEOF(window_stats)
    case 0xC13097: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC13094.
    case 0xC13098: {
        Instruction step(cpu, 0x4C, 0x002200u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC13097.
    case 0xC13099: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:184 JSL MULT168
    case 0xC1309A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:185 CLC
    case 0xC1309E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:186 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1309F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:186 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1309F.
    case 0xC130A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x001885u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:187 STA @LOCAL03
    case 0xC130A2: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:187 STA @LOCAL03
    // Overlapping static entry reached from 0xC130A1.
    case 0xC130A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:189 LDA PAGINATION_WINDOW
    case 0xC130A4: {
        Instruction step(cpu, 0xAD, 0x0061F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:190 CMP #.LOWORD(-1)
    case 0xC130A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:190 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC130A7.
    case 0xC130A9: {
        Instruction step(cpu, 0xFF, 0xAD62F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:191 BEQ @UNKNOWN16
    case 0xC130AA: {
        Instruction step(cpu, 0xF0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:192 LDA PAGINATION_WINDOW
    case 0xC130AC: {
        Instruction step(cpu, 0xAD, 0x0061F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:192 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC130A9.
    case 0xC130AD: {
        Instruction step(cpu, 0xF2, 0x000061u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:193 ASL
    case 0xC130AF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:194 TAX
    case 0xC130B0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:195 LDA OPEN_WINDOW_TABLE,X
    case 0xC130B1: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:196 CMP #.LOWORD(-1)
    case 0xC130B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:196 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC130B4.
    case 0xC130B6: {
        Instruction step(cpu, 0xFF, 0xA955F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:197 BEQ @UNKNOWN16
    case 0xC130B7: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00E41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130B6.
    case 0xC130BA: {
        Instruction step(cpu, 0x1E, 0x0085E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130B9.
    case 0xC130BB: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130BC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130BB.
    case 0xC130BD: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130BD.
    case 0xC130BF: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130BE.
    case 0xC130C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130C1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:199 LDA PAGINATION_ANIMATION_FRAME
    case 0xC130C3: {
        Instruction step(cpu, 0xAD, 0x0061F4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:200 ASL
    case 0xC130C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:201 ASL
    case 0xC130C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:202 CLC
    case 0xC130C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:203 ADC @VIRTUAL06
    case 0xC130C9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:204 STA @VIRTUAL06
    case 0xC130CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130CD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC130CD.
    case 0xC130CF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D0: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D7: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130D9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130DD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130DF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:207 LDY #window_stats::window_y
    case 0xC130E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:207 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC130E1.
    case 0xC130E3: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:208 LDA (@LOCAL03),Y
    case 0xC130E4: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:210 STA @VIRTUAL02
    case 0xC130EB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:211 LDY #window_stats::window_x
    case 0xC130ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:211 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC130ED.
    case 0xC130EF: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:212 LDA (@LOCAL03),Y
    case 0xC130F0: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:213 LDY #window_stats::width
    case 0xC130F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:213 LDY #window_stats::width
    // Overlapping static entry reached from 0xC130F2.
    case 0xC130F4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:214 CLC
    case 0xC130F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:215 ADC (@LOCAL03),Y
    case 0xC130F6: {
        Instruction step(cpu, 0x71, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:216 DEC
    case 0xC130F8: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:217 DEC
    case 0xC130F9: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:218 DEC
    case 0xC130FA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:219 CLC
    case 0xC130FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:220 ADC @VIRTUAL02
    case 0xC130FC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:221 CLC
    case 0xC130FE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xC130FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC130FF.
    case 0xC13101: {
        Instruction step(cpu, 0x7C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:223 TAY
    case 0xC13102: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:224 LDX #8
    case 0xC13103: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:224 LDX #8
    // Overlapping static entry reached from 0xC13103.
    case 0xC13105: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC13106: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:226 LDA #0
    case 0xC13108: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:227 JSL PREPARE_VRAM_COPY
    case 0xC1310A: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC13108.
    case 0xC1310B: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1310B.
    case 0xC1310D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:230 LDA #0
    case 0xC1310E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:230 LDA #0
    // Overlapping static entry reached from 0xC1310D.
    case 0xC1310F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:230 LDA #0
    // Overlapping static entry reached from 0xC1310E.
    case 0xC13110: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:231 STA @LOCAL06
    case 0xC13111: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:232 JMP @UNKNOWN28
    case 0xC13113: {
        Instruction step(cpu, 0x4C, 0x0031B4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:234 JSL UNKNOWN_C12E42
    case 0xC13116: {
        Instruction step(cpu, 0x22, 0xC1355Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:235 LDA PAD_PRESS
    case 0xC1311A: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:236 AND #PAD::LEFT
    case 0xC1311D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:236 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1311D.
    case 0xC1311F: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:237 BEQ @UNKNOWN20
    case 0xC13120: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:238 LDX @LOCAL04
    case 0xC13122: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:239 DEX
    case 0xC13124: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:240 STX @LOCAL06
    case 0xC13125: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:241 LDA @LOCAL0C
    case 0xC13127: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:242 BEQ @UNKNOWN18
    case 0xC13129: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:243 LDY #SFX::CURSOR2
    case 0xC1312B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:243 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1312B.
    case 0xC1312D: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:244 BRA @UNKNOWN19
    case 0xC1312E: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC13130: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13130.
    case 0xC13132: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:248 STY @LOCAL05
    case 0xC13133: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:249 LDA #2
    case 0xC13135: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:249 LDA #2
    // Overlapping static entry reached from 0xC13135.
    case 0xC13137: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:250 STA PAGINATION_ANIMATION_FRAME
    case 0xC13138: {
        Instruction step(cpu, 0x8D, 0x0061F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:251 JMP @UNKNOWN32
    case 0xC1313B: {
        Instruction step(cpu, 0x4C, 0x0031DBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:253 LDA PAD_PRESS
    case 0xC1313E: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:254 AND #PAD::RIGHT
    case 0xC13141: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:254 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC13141.
    case 0xC13143: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:255 BEQ @UNKNOWN23
    case 0xC13144: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:255 BEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC13143.
    case 0xC13145: {
        Instruction step(cpu, 0x1C, 0x001AA6u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:256 LDX @LOCAL04
    case 0xC13146: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:257 INX
    case 0xC13148: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:258 STX @LOCAL06
    case 0xC13149: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:259 LDA @LOCAL0C
    case 0xC1314B: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:260 BEQ @UNKNOWN21
    case 0xC1314D: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:261 LDY #SFX::CURSOR2
    case 0xC1314F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:261 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1314F.
    case 0xC13151: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:262 BRA @UNKNOWN22
    case 0xC13152: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC13154: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13154.
    case 0xC13156: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:266 STY @LOCAL05
    case 0xC13157: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:267 LDA #3
    case 0xC13159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:267 LDA #3
    // Overlapping static entry reached from 0xC13159.
    case 0xC1315B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:268 STA PAGINATION_ANIMATION_FRAME
    case 0xC1315C: {
        Instruction step(cpu, 0x8D, 0x0061F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:269 JMP @UNKNOWN32
    case 0xC1315F: {
        Instruction step(cpu, 0x4C, 0x0031DBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:271 LDA PAD_PRESS
    case 0xC13162: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13165: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13165.
    case 0xC13167: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:273 BEQ @UNKNOWN24
    case 0xC13168: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:274 LDA @VIRTUAL04
    case 0xC1316A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:275 CLC
    case 0xC1316C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:276 ADC #.LOWORD(GAME_STATE)
    case 0xC1316D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:276 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1316D.
    case 0xC1316F: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:277 TAX
    case 0xC13170: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:278 LDA a:game_state::party_members,X
    case 0xC13171: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:279 AND #$00FF
    case 0xC13174: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:279 AND #$00FF
    // Overlapping static entry reached from 0xC13174.
    case 0xC13176: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:280 TAX
    case 0xC13177: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:281 STX @LOCAL06
    case 0xC13178: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:282 LDA #SFX::CURSOR1
    case 0xC1317A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:282 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC1317A.
    case 0xC1317C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:283 JSL PLAY_SOUND
    case 0xC1317D: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:284 JMP @UNKNOWN44
    case 0xC13181: {
        Instruction step(cpu, 0x4C, 0x0032B7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:286 LDA PAD_PRESS
    case 0xC13184: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:287 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13187: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:287 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13187.
    case 0xC13189: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0023F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:288 BEQ @UNKNOWN27
    case 0xC1318A: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:288 BEQ @UNKNOWN27
    // Overlapping static entry reached from 0xC13189.
    case 0xC1318B: {
        Instruction step(cpu, 0x23, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:289 LDA @LOCAL0D
    case 0xC1318C: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:289 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC1318B.
    case 0xC1318D: {
        Instruction step(cpu, 0x32, 0x0000C9u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:290 CMP #1
    case 0xC1318E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:290 CMP #1
    // Overlapping static entry reached from 0xC1318D.
    case 0xC1318F: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:290 CMP #1
    // Overlapping static entry reached from 0xC1318E.
    case 0xC13190: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:291 BNE @UNKNOWN27
    case 0xC13191: {
        Instruction step(cpu, 0xD0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:292 LDX #0
    case 0xC13193: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:292 LDX #0
    // Overlapping static entry reached from 0xC13193.
    case 0xC13195: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:293 STX @LOCAL06
    case 0xC13196: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:294 LDA @LOCAL0C
    case 0xC13198: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:295 BEQ @UNKNOWN25
    case 0xC1319A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:296 LDY #SFX::CURSOR2
    case 0xC1319C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:296 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1319C.
    case 0xC1319E: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:297 BRA @UNKNOWN26
    case 0xC1319F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:299 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC131A1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:299 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC131A1.
    case 0xC131A3: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:301 TYA
    case 0xC131A4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:302 JSL PLAY_SOUND
    case 0xC131A5: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:303 JSR UNKNOWN_C3E6F8
    case 0xC131A9: {
        Instruction step(cpu, 0x20, 0x000BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:304 JMP @UNKNOWN44
    case 0xC131AC: {
        Instruction step(cpu, 0x4C, 0x0032B7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:306 LDA @LOCAL06
    case 0xC131AF: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:307 INC
    case 0xC131B1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:308 STA @LOCAL06
    case 0xC131B2: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:310 LDX @LOCAL07
    case 0xC131B4: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:311 STX @VIRTUAL02
    case 0xC131B6: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:312 CMP @VIRTUAL02
    case 0xC131B8: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/character_select_prompt-jp.asm:313 BCCL @UNKNOWN17
    case 0xC131BA: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/character_select_prompt-jp.asm:313 BCCL @UNKNOWN17
    case 0xC131BC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:313 BCCL @UNKNOWN17
    case 0xC131BE: {
        Instruction step(cpu, 0x4C, 0x003116u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:314 LDA PAGINATION_ANIMATION_FRAME
    case 0xC131C1: {
        Instruction step(cpu, 0xAD, 0x0061F4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:315 BNE @UNKNOWN30
    case 0xC131C4: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:316 LDX #1
    case 0xC131C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:316 LDX #1
    // Overlapping static entry reached from 0xC131C6.
    case 0xC131C8: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:317 BRA @UNKNOWN31
    case 0xC131C9: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:319 LDX #0
    case 0xC131CB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:319 LDX #0
    // Overlapping static entry reached from 0xC131CB.
    case 0xC131CD: {
        Instruction step(cpu, 0x00, 0x00008Eu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:321 STX PAGINATION_ANIMATION_FRAME
    case 0xC131CE: {
        Instruction step(cpu, 0x8E, 0x0061F4u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:322 LDA #10
    case 0xC131D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:322 LDA #10
    // Overlapping static entry reached from 0xC131D1.
    case 0xC131D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:323 STA @VIRTUAL02
    case 0xC131D4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:324 STA @LOCAL07
    case 0xC131D6: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:325 JMP @UNKNOWN15
    case 0xC131D8: {
        Instruction step(cpu, 0x4C, 0x0030A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:327 TXA
    case 0xC131DB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:328 SEC
    case 0xC131DC: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:329 SBC @VIRTUAL04
    case 0xC131DD: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:330 STA @VIRTUAL02
    case 0xC131DF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:331 STA @LOCAL02
    case 0xC131E1: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:333 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC131E3: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:334 AND #$00FF
    case 0xC131E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:334 AND #$00FF
    // Overlapping static entry reached from 0xC131E6.
    case 0xC131E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:335 STA @LOCAL07
    case 0xC131E9: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:336 STX @VIRTUAL02
    case 0xC131EB: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:337 CLC
    case 0xC131ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:338 SBC @VIRTUAL02
    case 0xC131EE: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F0: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F2: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F4: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F6: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:340 LDX #0
    case 0xC131F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:340 LDX #0
    // Overlapping static entry reached from 0xC131F8.
    case 0xC131FA: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:341 STX @LOCAL06
    case 0xC131FB: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:342 BRA @UNKNOWN39
    case 0xC131FD: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:344 STX @VIRTUAL02
    case 0xC131FF: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:345 LDA #0
    case 0xC13201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:345 LDA #0
    // Overlapping static entry reached from 0xC13201.
    case 0xC13203: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:346 CLC
    case 0xC13204: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:347 SBC @VIRTUAL02
    case 0xC13205: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC13207: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC13209: {
        Instruction step(cpu, 0x10, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC1320B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC1320D: {
        Instruction step(cpu, 0x30, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:349 LDA @LOCAL07
    case 0xC1320F: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:350 TAX
    case 0xC13211: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:351 DEX
    case 0xC13212: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:352 STX @LOCAL06
    case 0xC13213: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13215: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13215.
    case 0xC13217: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13218: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1321A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1321A.
    case 0xC1321C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1321D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC1321F: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC13221: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC13223: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC13225: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:356 CMP @VIRTUAL0A+2
    case 0xC13227: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:357 BNE @UNKNOWN40
    case 0xC13229: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:358 LDA @VIRTUAL06
    case 0xC1322B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:359 CMP @VIRTUAL0A
    case 0xC1322D: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:361 BEQ @UNKNOWN41
    case 0xC1322F: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:362 TXA
    case 0xC13231: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:363 CLC
    case 0xC13232: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:364 ADC #.LOWORD(GAME_STATE)
    case 0xC13233: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:364 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC13233.
    case 0xC13235: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:365 TAX
    case 0xC13236: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:366 LDA a:game_state::party_members,X
    case 0xC13237: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:367 AND #$00FF
    case 0xC1323A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:367 AND #$00FF
    // Overlapping static entry reached from 0xC1323A.
    case 0xC1323C: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:368 PHA
    case 0xC1323D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1323E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC13240: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC13243: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC13245: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:370 PLA
    case 0xC13248: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:371 JSL UNKNOWN_C09279
    case 0xC13249: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:372 CMP #0
    case 0xC1324D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:372 CMP #0
    // Overlapping static entry reached from 0xC1324D.
    case 0xC1324F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:373 BNE @UNKNOWN41
    case 0xC13250: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:374 LDA @LOCAL02
    case 0xC13252: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:375 STA @VIRTUAL02
    case 0xC13254: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:376 LDX @LOCAL06
    case 0xC13256: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:377 TXA
    case 0xC13258: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:378 CLC
    case 0xC13259: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:379 ADC @VIRTUAL02
    case 0xC1325A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:380 TAX
    case 0xC1325C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:381 STX @LOCAL06
    case 0xC1325D: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:382 JMP @UNKNOWN33
    case 0xC1325F: {
        Instruction step(cpu, 0x4C, 0x0031E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:384 LDX @LOCAL06
    case 0xC13262: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:385 TXA
    case 0xC13264: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:386 CMP @VIRTUAL04
    case 0xC13265: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:387 BEQ @UNKNOWN43
    case 0xC13267: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:388 LDY @LOCAL05
    case 0xC13269: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:389 TYA
    case 0xC1326B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:390 JSL PLAY_SOUND
    case 0xC1326C: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:391 LDX @LOCAL06
    case 0xC13270: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:392 STX @VIRTUAL04
    case 0xC13272: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13274: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13274.
    case 0xC13276: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13277: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13279: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13279.
    case 0xC1327B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1327C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC1327E: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC13280: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC13282: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC13284: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:395 CMP @VIRTUAL06+2
    case 0xC13286: {
        Instruction step(cpu, 0xC5, 0x000008u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:396 BNE @UNKNOWN42
    case 0xC13288: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:397 LDA @VIRTUAL0A
    case 0xC1328A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:398 CMP @VIRTUAL06
    case 0xC1328C: {
        Instruction step(cpu, 0xC5, 0x000006u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:400 BEQ @UNKNOWN43
    case 0xC1328E: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:401 LDA @VIRTUAL04
    case 0xC13290: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:402 CLC
    case 0xC13292: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:403 ADC #.LOWORD(GAME_STATE)
    case 0xC13293: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:403 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC13293.
    case 0xC13295: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:404 TAX
    case 0xC13296: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:405 LDA a:game_state::party_members,X
    case 0xC13297: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:406 AND #$00FF
    case 0xC1329A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:406 AND #$00FF
    // Overlapping static entry reached from 0xC1329A.
    case 0xC1329C: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:407 PHA
    case 0xC1329D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1329E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC132A0: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC132A3: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC132A5: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:409 PLA
    case 0xC132A8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:410 JSL UNKNOWN_C09279
    case 0xC132A9: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:412 LDA #4
    case 0xC132AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:412 LDA #4
    // Overlapping static entry reached from 0xC132AD.
    case 0xC132AF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:413 STA @VIRTUAL02
    case 0xC132B0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:414 STA @LOCAL07
    case 0xC132B2: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:415 JMP @UNKNOWN13
    case 0xC132B4: {
        Instruction step(cpu, 0x4C, 0x00306Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:417 LDA #.LOWORD(-1)
    case 0xC132B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:417 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC132B7.
    case 0xC132B9: {
        Instruction step(cpu, 0xFF, 0x61F48Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:418 STA PAGINATION_ANIMATION_FRAME
    case 0xC132BA: {
        Instruction step(cpu, 0x8D, 0x0061F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132BD: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132BF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132C1: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132C3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:420 LDA @LOCAL09
    case 0xC132C5: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:421 CLC
    case 0xC132C7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:422 ADC #window_stats::argument_memory
    case 0xC132C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:422 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC132C8.
    case 0xC132CA: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:423 TAY
    case 0xC132CB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132CC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132CE: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132D1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132D3: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:425 LDX @LOCAL06
    case 0xC132D6: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/character_select_prompt-jp.asm:426 TXA
    case 0xC132D8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/character_select_prompt-jp.asm:427 END_C_FUNCTION
    case 0xC132D9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/character_select_prompt-jp.asm:427 END_C_FUNCTION
    case 0xC132DA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
