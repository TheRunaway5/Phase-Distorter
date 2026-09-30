// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/debug/set_char_level.asm
bool resume_overworld_debug_set_char_level(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/set_char_level.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13E7A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E7C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E7D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC13E7E.
    case 0xC13E80: {
        Instruction step(cpu, 0xFF, 0xD4225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC13E81: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    case 0xC13E82: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC13E80.
    case 0xC13E84: {
        Instruction step(cpu, 0xE4, 0x0000C3u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13E86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13E86.
    case 0xC13E88: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13E89: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    case 0xC13E8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    // Overlapping static entry reached from 0xC13E8C.
    case 0xC13E8E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:11 JSR NUM_SELECT_PROMPT
    case 0xC13E8F: {
        Instruction step(cpu, 0x20, 0x00101Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:12 LDA @VIRTUAL06
    case 0xC13E92: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:13 STA @VIRTUAL04
    case 0xC13E94: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13E96.
    case 0xC13E98: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E99: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13E9B.
    case 0xC13E9D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13E9E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13EA6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EA8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EAA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EAC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13EAE: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    case 0xC13EB0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    // Overlapping static entry reached from 0xC13EB0.
    case 0xC13EB2: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:18 TXA
    case 0xC13EB3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:19 JSR CHAR_SELECT_PROMPT
    case 0xC13EB4: {
        Instruction step(cpu, 0x20, 0x0027EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:20 STA @VIRTUAL02
    case 0xC13EB7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    case 0xC13EB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    // Overlapping static entry reached from 0xC13EB9.
    case 0xC13EBB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:22 BEQ @UNKNOWN0
    case 0xC13EBC: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    case 0xC13EBE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    // Overlapping static entry reached from 0xC13EBE.
    case 0xC13EC0: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:24 LDX @VIRTUAL04
    case 0xC13EC1: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:25 LDA @VIRTUAL02
    case 0xC13EC3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:26 JSR RESET_CHAR_LEVEL_ONE
    case 0xC13EC5: {
        Instruction step(cpu, 0x20, 0x00D8D0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    case 0xC13EC8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    // Overlapping static entry reached from 0xC13EC8.
    case 0xC13ECA: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    case 0xC13ECB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    // Overlapping static entry reached from 0xC13ECB.
    case 0xC13ECD: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:29 LDA @VIRTUAL02
    case 0xC13ECE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:30 JSR RECOVER_HP_AMTPERCENT
    case 0xC13ED0: {
        Instruction step(cpu, 0x20, 0x008F64u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    case 0xC13ED3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    // Overlapping static entry reached from 0xC13ED3.
    case 0xC13ED5: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    case 0xC13ED6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    // Overlapping static entry reached from 0xC13ED6.
    case 0xC13ED8: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:33 LDA @VIRTUAL02
    case 0xC13ED9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:34 JSR RECOVER_PP_AMTPERCENT
    case 0xC13EDB: {
        Instruction step(cpu, 0x20, 0x009010u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC13EDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13EDE.
    case 0xC13EE0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:37 JSR CLOSE_WINDOW
    case 0xC13EE1: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC13EE5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC13EE6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
