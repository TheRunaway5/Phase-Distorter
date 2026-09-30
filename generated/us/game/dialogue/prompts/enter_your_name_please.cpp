// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/enter_your_name_please.asm
bool resume_text_enter_your_name_please(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/enter_your_name_please.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1EAA6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAA8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAA9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EAAB.
    case 0xC1EAAD: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:11 TAX
    case 0xC1EAB0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:12 STX @LOCAL02
    case 0xC1EAB1: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:13 STZ ENABLE_WORD_WRAP
    case 0xC1EAB3: {
        Instruction step(cpu, 0x9C, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EAB6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:15 LDA #1
    case 0xC1EAB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:16 STA ALLOW_TEXT_OVERFLOW
    case 0xC1EABA: {
        Instruction step(cpu, 0x8D, 0x00B49Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:16 STA ALLOW_TEXT_OVERFLOW
    // Overlapping static entry reached from 0xC1EAB8.
    case 0xC1EABB: {
        Instruction step(cpu, 0x9D, 0x0022B4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:17 JSL SET_INSTANT_PRINTING
    case 0xC1EABD: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:17 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1EABB.
    case 0xC1EABE: {
        Instruction step(cpu, 0xD4, 0x0000E4u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:17 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1EABE.
    case 0xC1EAC0: {
        Instruction step(cpu, 0xC3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1EAC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAC0.
    case 0xC1EAC2: {
        Instruction step(cpu, 0x27, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAC1.
    case 0xC1EAC3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1EAC4: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:20 LDX @LOCAL02
    case 0xC1EAC7: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/enter_your_name_please.asm:21 BEQL @UNKNOWN2
    case 0xC1EAC9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/enter_your_name_please.asm:21 BEQL @UNKNOWN2
    case 0xC1EACB: {
        Instruction step(cpu, 0x4C, 0x00EB4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:22 LDX #0
    case 0xC1EACE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:22 LDX #0
    // Overlapping static entry reached from 0xC1EACE.
    case 0xC1EAD0: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:23 TXA
    case 0xC1EAD1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:24 JSL UNKNOWN_C438A5
    case 0xC1EAD2: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EAD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009801u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EAD6.
    case 0xC1EAD8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EAD9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADB: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EAE1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC1EAE3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAE5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAE7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAE9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAEB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:29 LDA #24
    case 0xC1EAED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:29 LDA #24
    // Overlapping static entry reached from 0xC1EAED.
    case 0xC1EAEF: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:30 JSR PRINT_STRING
    case 0xC1EAF0: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:31 LDX #1
    case 0xC1EAF3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:31 LDX #1
    // Overlapping static entry reached from 0xC1EAF3.
    case 0xC1EAF5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:32 LDA #0
    case 0xC1EAF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:32 LDA #0
    // Overlapping static entry reached from 0xC1EAF6.
    case 0xC1EAF8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:33 JSL UNKNOWN_C438A5
    case 0xC1EAF9: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:34 LDA #12
    case 0xC1EAFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:34 LDA #12
    // Overlapping static entry reached from 0xC1EAFD.
    case 0xC1EAFF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:35 JSL UNKNOWN_C441B7
    case 0xC1EB00: {
        Instruction step(cpu, 0x22, 0xC441B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:36 LDA GAME_STATE
    case 0xC1EB04: {
        Instruction step(cpu, 0xAD, 0x0097F5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:37 AND #$00FF
    case 0xC1EB07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1EB07.
    case 0xC1EB09: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:38 BEQ @UNKNOWN1
    case 0xC1EB0A: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x0097F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EB0C.
    case 0xC1EB0E: {
        Instruction step(cpu, 0x97, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB0F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EB0E.
    case 0xC1EB10: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB11: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB12: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB14: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB15: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB17: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC1EB19: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB1B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB1D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB1F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB21: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:42 LDA #12
    case 0xC1EB23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:42 LDA #12
    // Overlapping static entry reached from 0xC1EB23.
    case 0xC1EB25: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:43 JSR PRINT_STRING
    case 0xC1EB26: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:45 LDX #1
    case 0xC1EB29: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:45 LDX #1
    // Overlapping static entry reached from 0xC1EB29.
    case 0xC1EB2B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:46 LDA #0
    case 0xC1EB2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:46 LDA #0
    // Overlapping static entry reached from 0xC1EB2C.
    case 0xC1EB2E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:47 JSL UNKNOWN_C438A5
    case 0xC1EB2F: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:48 STZ @LOCAL00
    case 0xC1EB33: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:49 LDA #.LOWORD(-1)
    case 0xC1EB35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:49 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EB35.
    case 0xC1EB37: {
        Instruction step(cpu, 0xFF, 0xA01085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:50 STA @LOCAL00+2
    case 0xC1EB38: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:51 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1EB3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F5u : 0x0097F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:51 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EB37.
    case 0xC1EB3B: {
        Instruction step(cpu, 0xF5, 0x000097u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:51 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EB3A.
    case 0xC1EB3C: {
        Instruction step(cpu, 0x97, 0x0000A2u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:52 LDX #12
    case 0xC1EB3D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:52 LDX #12
    // Overlapping static entry reached from 0xC1EB3C.
    case 0xC1EB3E: {
        Instruction step(cpu, 0x0C, 0x00A900u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:52 LDX #12
    // Overlapping static entry reached from 0xC1EB3D.
    case 0xC1EB3F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:53 LDA #WINDOW::UNKNOWN27
    case 0xC1EB40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:53 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EB3E.
    case 0xC1EB41: {
        Instruction step(cpu, 0x27, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:53 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EB40.
    case 0xC1EB42: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:54 JSR TEXT_INPUT_DIALOG
    case 0xC1EB43: {
        Instruction step(cpu, 0x20, 0x00E57Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:55 TAY
    case 0xC1EB46: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:56 STY @LOCAL01
    case 0xC1EB47: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:57 JMP @UNKNOWN4
    case 0xC1EB49: {
        Instruction step(cpu, 0x4C, 0x00EBE4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:59 LDX #0
    case 0xC1EB4C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:59 LDX #0
    // Overlapping static entry reached from 0xC1EB4C.
    case 0xC1EB4E: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:60 TXA
    case 0xC1EB4F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:61 JSL UNKNOWN_C438A5
    case 0xC1EB50: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x00FB2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1EB54.
    case 0xC1EB56: {
        Instruction step(cpu, 0xFB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_carry_emulation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB57: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1EB59.
    case 0xC1EB5B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB5C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:63 LDA #26
    case 0xC1EB5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:63 LDA #26
    // Overlapping static entry reached from 0xC1EB5E.
    case 0xC1EB60: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:64 JSR PRINT_STRING
    case 0xC1EB61: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:65 JSL WAIT_DMA_FINISHED
    case 0xC1EB64: {
        Instruction step(cpu, 0x22, 0xC08F8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:66 LDX #1
    case 0xC1EB68: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:66 LDX #1
    // Overlapping static entry reached from 0xC1EB68.
    case 0xC1EB6A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:67 LDA #0
    case 0xC1EB6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:67 LDA #0
    // Overlapping static entry reached from 0xC1EB6B.
    case 0xC1EB6D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:68 JSL UNKNOWN_C438A5
    case 0xC1EB6E: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:69 LDA #24
    case 0xC1EB72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:69 LDA #24
    // Overlapping static entry reached from 0xC1EB72.
    case 0xC1EB74: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:70 JSL UNKNOWN_C441B7
    case 0xC1EB75: {
        Instruction step(cpu, 0x22, 0xC441B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:71 LDX #1
    case 0xC1EB79: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:71 LDX #1
    // Overlapping static entry reached from 0xC1EB79.
    case 0xC1EB7B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:72 LDA #0
    case 0xC1EB7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:72 LDA #0
    // Overlapping static entry reached from 0xC1EB7C.
    case 0xC1EB7E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:73 JSL UNKNOWN_C438A5
    case 0xC1EB7F: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:74 LDY #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EB83: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x009801u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:74 LDY #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EB83.
    case 0xC1EB85: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:75 LDA __BSS_START__,Y
    case 0xC1EB86: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:75 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC1EBC1.
    case 0xC1EB87: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:76 AND #$00FF
    case 0xC1EB89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC1EB89.
    case 0xC1EB8B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:77 BEQ @UNKNOWN3
    case 0xC1EB8C: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:78 LDX #24
    case 0xC1EB8E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:78 LDX #24
    // Overlapping static entry reached from 0xC1EB8E.
    case 0xC1EB90: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:79 TYA
    case 0xC1EB91: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:80 JSL UNKNOWN_C440B5
    case 0xC1EB92: {
        Instruction step(cpu, 0x22, 0xC440B5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:82 LDX #1
    case 0xC1EB96: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:82 LDX #1
    // Overlapping static entry reached from 0xC1EB96.
    case 0xC1EB98: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:83 LDA #0
    case 0xC1EB99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:83 LDA #0
    // Overlapping static entry reached from 0xC1EB99.
    case 0xC1EB9B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:84 JSL UNKNOWN_C438A5
    case 0xC1EB9C: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:85 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EBA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009801u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:85 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EBA0.
    case 0xC1EBA2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:86 STA @VIRTUAL02
    case 0xC1EBA3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:87 STZ @LOCAL00
    case 0xC1EBA5: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:88 LDA #.LOWORD(-1)
    case 0xC1EBA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:88 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EBA7.
    case 0xC1EBA9: {
        Instruction step(cpu, 0xFF, 0xA41085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:89 STA @LOCAL00+2
    case 0xC1EBAA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:90 LDY @VIRTUAL02
    case 0xC1EBAC: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:90 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC1EBA9.
    case 0xC1EBAD: {
        Instruction step(cpu, 0x02, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:91 LDX #24
    case 0xC1EBAE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:91 LDX #24
    // Overlapping static entry reached from 0xC1EBAE.
    case 0xC1EBB0: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:92 LDA #WINDOW::UNKNOWN27
    case 0xC1EBB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:92 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EBB1.
    case 0xC1EBB3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:93 JSR TEXT_INPUT_DIALOG
    case 0xC1EBB4: {
        Instruction step(cpu, 0x20, 0x00E57Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:94 TAY
    case 0xC1EBB7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:95 STY @LOCAL01
    case 0xC1EBB8: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:96 LDX @VIRTUAL02
    case 0xC1EBBA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:97 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1EBBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:97 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1EBBC.
    case 0xC1EBBE: {
        Instruction step(cpu, 0x9C, 0x006522u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:98 JSL UNKNOWN_C4D065
    case 0xC1EBBF: {
        Instruction step(cpu, 0x22, 0xC4D065u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:98 JSL UNKNOWN_C4D065
    // Overlapping static entry reached from 0xC1EBBE.
    case 0xC1EBC1: {
        Instruction step(cpu, 0xD0, 0x0000C4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EBC3.
    case 0xC1EBC5: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC8: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBCB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBCC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBCE: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC1EBD0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:102 LDX #.SIZEOF(game_state::mother2_playername)
    case 0xC1EBDA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:102 LDX #.SIZEOF(game_state::mother2_playername)
    // Overlapping static entry reached from 0xC1EBDA.
    case 0xC1EBDC: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:103 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1EBDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x0097F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:103 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EBDD.
    case 0xC1EBDF: {
        Instruction step(cpu, 0x97, 0x000022u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:104 JSL MEMCPY16
    case 0xC1EBE0: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:104 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1EBDF.
    case 0xC1EBE1: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:104 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1EBE1.
    case 0xC1EBE3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x001CA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:106 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EBE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:106 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EBE3.
    case 0xC1EBE5: {
        Instruction step(cpu, 0x1C, 0x002200u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:106 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EBE4.
    case 0xC1EBE6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:107 JSL CLOSE_WINDOW
    case 0xC1EBE7: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:107 JSL CLOSE_WINDOW
    // Overlapping static entry reached from 0xC1EBE5.
    case 0xC1EBE8: {
        Instruction step(cpu, 0x21, 0x0000E5u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:107 JSL CLOSE_WINDOW
    // Overlapping static entry reached from 0xC1EBE8.
    case 0xC1EBEA: {
        Instruction step(cpu, 0xC3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:108 LDA #WINDOW::UNKNOWN27
    case 0xC1EBEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:108 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EBEA.
    case 0xC1EBEC: {
        Instruction step(cpu, 0x27, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:108 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EBEB.
    case 0xC1EBED: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:109 JSL CLOSE_WINDOW
    case 0xC1EBEE: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:110 LDA #$00FF
    case 0xC1EBF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:110 LDA #$00FF
    // Overlapping static entry reached from 0xC1EBF2.
    case 0xC1EBF4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:111 STA ENABLE_WORD_WRAP
    case 0xC1EBF5: {
        Instruction step(cpu, 0x8D, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:112 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EBF8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:113 STZ ALLOW_TEXT_OVERFLOW
    case 0xC1EBFA: {
        Instruction step(cpu, 0x9C, 0x00B49Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:114 LDY @LOCAL01
    case 0xC1EBFD: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC1EBFF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please.asm:116 TYA
    case 0xC1EC01: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/enter_your_name_please.asm:117 END_C_FUNCTION
    case 0xC1EC02: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/enter_your_name_please.asm:117 END_C_FUNCTION
    case 0xC1EC03: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
