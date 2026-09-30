// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/enter_your_name_please-jp.asm
bool resume_text_enter_your_name_please_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/enter_your_name_please-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1E8F6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8F8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8F9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E8FB.
    case 0xC1E8FD: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:11 TAX
    case 0xC1E900: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:12 STX @LOCAL02
    case 0xC1E901: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:13 JSR SET_INSTANT_PRINTING
    case 0xC1E903: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1E906: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1E906.
    case 0xC1E908: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/enter_your_name_please-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1E909: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:16 LDX @LOCAL02
    case 0xC1E90C: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/enter_your_name_please-jp.asm:17 BEQL @UNKNOWN4_
    case 0xC1E90E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:17 BEQL @UNKNOWN4_
    case 0xC1E910: {
        Instruction step(cpu, 0x4C, 0x00E9EBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E913: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B5u : 0x009AB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E913.
    case 0xC1E915: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E916: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E918: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E919: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E91B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E91C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E91E: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1E920: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E922: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E924: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E926: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E928: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:22 LDA #24
    case 0xC1E92A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:22 LDA #24
    // Overlapping static entry reached from 0xC1E92A.
    case 0xC1E92C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:23 JSR PRINT_STRING
    case 0xC1E92D: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:24 LDX #1
    case 0xC1E930: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:24 LDX #1
    // Overlapping static entry reached from 0xC1E930.
    case 0xC1E932: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:25 LDA #0
    case 0xC1E933: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1E933.
    case 0xC1E935: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:26 JSR UNKNOWN_C438A5
    case 0xC1E936: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:27 LDX #0
    case 0xC1E939: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:27 LDX #0
    // Overlapping static entry reached from 0xC1E939.
    case 0xC1E93B: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:28 STX @LOCAL02
    case 0xC1E93C: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:29 BRA @UNKNOWN2
    case 0xC1E93E: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:31 LDA #CHAR::PLACEHOLDER
    case 0xC1E940: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Cu : 0x00005Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:31 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1E940.
    case 0xC1E942: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:32 JSR PRINT_LETTER
    case 0xC1E943: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:33 LDX @LOCAL02
    case 0xC1E946: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:34 INX
    case 0xC1E948: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:35 STX @LOCAL02
    case 0xC1E949: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:37 CPX #12
    case 0xC1E94B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:37 CPX #12
    // Overlapping static entry reached from 0xC1E94B.
    case 0xC1E94D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:38 BCC @UNKNOWN1
    case 0xC1E94E: {
        Instruction step(cpu, 0x90, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:39 LDX #1
    case 0xC1E950: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:39 LDX #1
    // Overlapping static entry reached from 0xC1E950.
    case 0xC1E952: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:40 LDA #0
    case 0xC1E953: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:40 LDA #0
    // Overlapping static entry reached from 0xC1E953.
    case 0xC1E955: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:41 JSR UNKNOWN_C438A5
    case 0xC1E956: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:42 LDA GAME_STATE
    case 0xC1E959: {
        Instruction step(cpu, 0xAD, 0x009AA9u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:43 AND #$00FF
    case 0xC1E95C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC1E95C.
    case 0xC1E95E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:44 BEQ @UNKNOWN3
    case 0xC1E95F: {
        Instruction step(cpu, 0xF0, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E961: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E961.
    case 0xC1E963: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E964: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E966: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E967: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E969: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E96A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E96C: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC1E96E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E970: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E972: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E974: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E976: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:48 LDA #12
    case 0xC1E978: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:48 LDA #12
    // Overlapping static entry reached from 0xC1E978.
    case 0xC1E97A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:49 JSR PRINT_STRING
    case 0xC1E97B: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:50 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    case 0xC1E97E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0089D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:50 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    // Overlapping static entry reached from 0xC1E97E.
    case 0xC1E980: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:51 STA @VIRTUAL02
    case 0xC1E981: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:51 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1E980.
    case 0xC1E982: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:52 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E983: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:53 ASL
    case 0xC1E986: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:54 TAX
    case 0xC1E987: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:55 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E988: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E98B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E98B.
    case 0xC1E98D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E98E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:57 CLC
    case 0xC1E992: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:58 ADC @VIRTUAL02
    case 0xC1E993: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:59 TAX
    case 0xC1E995: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:60 LDA __BSS_START__,X
    case 0xC1E996: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:61 CMP #12
    case 0xC1E999: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:61 CMP #12
    // Overlapping static entry reached from 0xC1E999.
    case 0xC1E99B: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:62 BCS @UNKNOWN4
    case 0xC1E99C: {
        Instruction step(cpu, 0xB0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:63 LDA #CHAR::BULLET
    case 0xC1E99E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:63 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E99E.
    case 0xC1E9A0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:64 JSR PRINT_LETTER
    case 0xC1E9A1: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:65 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E9A4: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:66 ASL
    case 0xC1E9A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:67 TAX
    case 0xC1E9A8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:68 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E9A9: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E9AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E9AC.
    case 0xC1E9AE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E9AF: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:70 CLC
    case 0xC1E9B3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:71 ADC @VIRTUAL02
    case 0xC1E9B4: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:72 TAX
    case 0xC1E9B6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:73 LDA __BSS_START__,X
    case 0xC1E9B7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:74 DEC
    case 0xC1E9BA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:75 STA __BSS_START__,X
    case 0xC1E9BB: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:76 BRA @UNKNOWN4
    case 0xC1E9BE: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:78 LDA #CHAR::BULLET
    case 0xC1E9C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:78 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E9C0.
    case 0xC1E9C2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:79 JSR PRINT_LETTER
    case 0xC1E9C3: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:80 LDX #1
    case 0xC1E9C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:80 LDX #1
    // Overlapping static entry reached from 0xC1E9C6.
    case 0xC1E9C8: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:81 LDA #0
    case 0xC1E9C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:81 LDA #0
    // Overlapping static entry reached from 0xC1E9C9.
    case 0xC1E9CB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:82 JSR UNKNOWN_C438A5
    case 0xC1E9CC: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:84 LDA #0
    case 0xC1E9CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:84 LDA #0
    // Overlapping static entry reached from 0xC1E9CF.
    case 0xC1E9D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:85 STA @LOCAL00
    case 0xC1E9D2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:86 LDA #.LOWORD(-1)
    case 0xC1E9D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:86 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9D4.
    case 0xC1E9D6: {
        Instruction step(cpu, 0xFF, 0xA01085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:87 STA @LOCAL00+2
    case 0xC1E9D7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:88 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1E9D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:88 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1E9D6.
    case 0xC1E9DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00A29Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:88 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1E9D9.
    case 0xC1E9DB: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:89 LDX #12
    case 0xC1E9DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:89 LDX #12
    // Overlapping static entry reached from 0xC1E9DA.
    case 0xC1E9DD: {
        Instruction step(cpu, 0x0C, 0x00A900u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:89 LDX #12
    // Overlapping static entry reached from 0xC1E9DC.
    case 0xC1E9DE: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:90 LDA #WINDOW::UNKNOWN27
    case 0xC1E9DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:90 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1E9DD.
    case 0xC1E9E0: {
        Instruction step(cpu, 0x27, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:90 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1E9DF.
    case 0xC1E9E1: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:91 JSR TEXT_INPUT_DIALOG
    case 0xC1E9E2: {
        Instruction step(cpu, 0x20, 0x00E498u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:92 TAY
    case 0xC1E9E5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:93 STY @LOCAL01
    case 0xC1E9E6: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:94 JMP @UNKNOWN9
    case 0xC1E9E8: {
        Instruction step(cpu, 0x4C, 0x00EAE2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000070u : 0x00F670u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1E9EB.
    case 0xC1E9ED: {
        Instruction step(cpu, 0xF6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9EE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1E9ED.
    case 0xC1E9EF: {
        Instruction step(cpu, 0x0E, 0x00C3A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1E9F0.
    case 0xC1E9F2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9F3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:97 LDA #11
    case 0xC1E9F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:97 LDA #11
    // Overlapping static entry reached from 0xC1E9F5.
    case 0xC1E9F7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:98 JSR PRINT_STRING
    case 0xC1E9F8: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:99 LDX #1
    case 0xC1E9FB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:99 LDX #1
    // Overlapping static entry reached from 0xC1E9FB.
    case 0xC1E9FD: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:100 LDA #0
    case 0xC1E9FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:100 LDA #0
    // Overlapping static entry reached from 0xC1E9FE.
    case 0xC1EA00: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:101 JSR UNKNOWN_C438A5
    case 0xC1EA01: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:102 LDX #0
    case 0xC1EA04: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:102 LDX #0
    // Overlapping static entry reached from 0xC1EA04.
    case 0xC1EA06: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:103 STX @LOCAL02
    case 0xC1EA07: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:104 BRA @UNKNOWN6
    case 0xC1EA09: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:106 LDA #CHAR::PLACEHOLDER
    case 0xC1EA0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Cu : 0x00005Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:106 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1EA0B.
    case 0xC1EA0D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:107 JSR PRINT_LETTER
    case 0xC1EA0E: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:108 LDX @LOCAL02
    case 0xC1EA11: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:109 INX
    case 0xC1EA13: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:110 STX @LOCAL02
    case 0xC1EA14: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:112 CPX #24
    case 0xC1EA16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:112 CPX #24
    // Overlapping static entry reached from 0xC1EA16.
    case 0xC1EA18: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:113 BCC @UNKNOWN5
    case 0xC1EA19: {
        Instruction step(cpu, 0x90, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:114 LDX #1
    case 0xC1EA1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:114 LDX #1
    // Overlapping static entry reached from 0xC1EA1B.
    case 0xC1EA1D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:115 LDA #0
    case 0xC1EA1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:115 LDA #0
    // Overlapping static entry reached from 0xC1EA1E.
    case 0xC1EA20: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:116 JSR UNKNOWN_C438A5
    case 0xC1EA21: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:117 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EA24: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B5u : 0x009AB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:117 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EA24.
    case 0xC1EA26: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:118 LDA __BSS_START__,X
    case 0xC1EA27: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:119 AND #$00FF
    case 0xC1EA2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1EA2A.
    case 0xC1EA2C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:120 BEQ @UNKNOWN7
    case 0xC1EA2D: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:121 TXA
    case 0xC1EA2F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA30: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA32: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA33: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA35: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA36: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA38: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA3A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA3C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA3E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA40: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA42: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:125 LDA #24
    case 0xC1EA44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:125 LDA #24
    // Overlapping static entry reached from 0xC1EA44.
    case 0xC1EA46: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:126 JSR PRINT_STRING
    case 0xC1EA47: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:127 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    case 0xC1EA4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0089D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:127 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    // Overlapping static entry reached from 0xC1EA4A.
    case 0xC1EA4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:128 STA @VIRTUAL02
    case 0xC1EA4D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:128 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1EA4C.
    case 0xC1EA4E: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:129 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EA4F: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:130 ASL
    case 0xC1EA52: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:131 TAX
    case 0xC1EA53: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:132 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EA54: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA57: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EA57.
    case 0xC1EA59: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA5A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:134 CLC
    case 0xC1EA5E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:135 ADC @VIRTUAL02
    case 0xC1EA5F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:136 TAX
    case 0xC1EA61: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:137 LDA __BSS_START__,X
    case 0xC1EA62: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:138 CMP #24
    case 0xC1EA65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:138 CMP #24
    // Overlapping static entry reached from 0xC1EA65.
    case 0xC1EA67: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:139 BCS @UNKNOWN8
    case 0xC1EA68: {
        Instruction step(cpu, 0xB0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:140 LDA #CHAR::BULLET
    case 0xC1EA6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:140 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EA6A.
    case 0xC1EA6C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:141 JSR PRINT_LETTER
    case 0xC1EA6D: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:142 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EA70: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:143 ASL
    case 0xC1EA73: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:144 TAX
    case 0xC1EA74: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:145 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EA75: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA78: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EA78.
    case 0xC1EA7A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA7B: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:147 CLC
    case 0xC1EA7F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:148 ADC @VIRTUAL02
    case 0xC1EA80: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:149 TAX
    case 0xC1EA82: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:150 LDA __BSS_START__,X
    case 0xC1EA83: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:151 DEC
    case 0xC1EA86: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:152 STA __BSS_START__,X
    case 0xC1EA87: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:153 BRA @UNKNOWN8
    case 0xC1EA8A: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:155 LDA #CHAR::BULLET
    case 0xC1EA8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:155 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EA8C.
    case 0xC1EA8E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:156 JSR PRINT_LETTER
    case 0xC1EA8F: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:157 LDX #1
    case 0xC1EA92: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:157 LDX #1
    // Overlapping static entry reached from 0xC1EA92.
    case 0xC1EA94: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:158 LDA #0
    case 0xC1EA95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:158 LDA #0
    // Overlapping static entry reached from 0xC1EA95.
    case 0xC1EA97: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:159 JSR UNKNOWN_C438A5
    case 0xC1EA98: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:161 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EA9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B5u : 0x009AB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:161 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EA9B.
    case 0xC1EA9D: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:162 STA @VIRTUAL02
    case 0xC1EA9E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:163 LDA #2
    case 0xC1EAA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:163 LDA #2
    // Overlapping static entry reached from 0xC1EAA0.
    case 0xC1EAA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:164 STA @LOCAL00
    case 0xC1EAA3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:165 LDA #.LOWORD(-1)
    case 0xC1EAA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:165 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EAA5.
    case 0xC1EAA7: {
        Instruction step(cpu, 0xFF, 0xA41085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:166 STA @LOCAL00+2
    case 0xC1EAA8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:167 LDY @VIRTUAL02
    case 0xC1EAAA: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:167 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC1EAA7.
    case 0xC1EAAB: {
        Instruction step(cpu, 0x02, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:168 LDX #24
    case 0xC1EAAC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:168 LDX #24
    // Overlapping static entry reached from 0xC1EAAC.
    case 0xC1EAAE: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:169 LDA #WINDOW::UNKNOWN27
    case 0xC1EAAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:169 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAAF.
    case 0xC1EAB1: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:170 JSR TEXT_INPUT_DIALOG
    case 0xC1EAB2: {
        Instruction step(cpu, 0x20, 0x00E498u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:171 TAY
    case 0xC1EAB5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:172 STY @LOCAL01
    case 0xC1EAB6: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:173 LDX @VIRTUAL02
    case 0xC1EAB8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:174 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1EABA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x009F4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:174 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1EABA.
    case 0xC1EABC: {
        Instruction step(cpu, 0x9F, 0xA33522u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:175 JSL UNKNOWN_C4D065
    case 0xC1EABD: {
        Instruction step(cpu, 0x22, 0xC4A335u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:175 JSL UNKNOWN_C4D065
    // Overlapping static entry reached from 0xC1EABC.
    case 0xC1EAC0: {
        Instruction step(cpu, 0xC4, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x009F4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EAC0.
    case 0xC1EAC2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EAC1.
    case 0xC1EAC3: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC6: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EACA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EACC: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:177 REP #PROC_FLAGS::ACCUM8
    case 0xC1EACE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:179 LDX #.SIZEOF(game_state::mother2_playername)
    case 0xC1EAD8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:179 LDX #.SIZEOF(game_state::mother2_playername)
    // Overlapping static entry reached from 0xC1EAD8.
    case 0xC1EADA: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:180 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1EADB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:180 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EADB.
    case 0xC1EADD: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:181 JSL MEMCPY16
    case 0xC1EADE: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:183 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EAE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:183 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EAE2.
    case 0xC1EAE4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:184 JSR CLOSE_WINDOW
    case 0xC1EAE5: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:185 LDA #WINDOW::UNKNOWN27
    case 0xC1EAE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:185 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAE8.
    case 0xC1EAEA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:186 JSR CLOSE_WINDOW
    case 0xC1EAEB: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:187 LDY @LOCAL01
    case 0xC1EAEE: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/enter_your_name_please-jp.asm:188 TYA
    case 0xC1EAF0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/enter_your_name_please-jp.asm:189 END_C_FUNCTION
    case 0xC1EAF1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/enter_your_name_please-jp.asm:189 END_C_FUNCTION
    case 0xC1EAF2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
