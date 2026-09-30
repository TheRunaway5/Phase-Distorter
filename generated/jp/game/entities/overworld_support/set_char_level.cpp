// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/debug/set_char_level.asm
bool resume_overworld_debug_set_char_level(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/set_char_level.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC142D9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142DB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142DC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC142DD.
    case 0xC142DF: {
        Instruction step(cpu, 0xFF, 0xF7205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/set_char_level.asm:7 END_STACK_VARS
    case 0xC142E0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    case 0xC142E1: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:8 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC142DF.
    case 0xC142E3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC142E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC142E4.
    case 0xC142E6: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/set_char_level.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC142E7: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    case 0xC142EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:10 LDA #2
    // Overlapping static entry reached from 0xC142EA.
    case 0xC142EC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:11 JSR NUM_SELECT_PROMPT
    case 0xC142ED: {
        Instruction step(cpu, 0x20, 0x0015D6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:12 LDA @VIRTUAL06
    case 0xC142F0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:13 STA @VIRTUAL04
    case 0xC142F2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC142F4.
    case 0xC142F6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC142F9.
    case 0xC142FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC142FC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142FE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14300: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14302: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14304: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC14306: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC14308: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1430A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/set_char_level.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1430C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    case 0xC1430E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:17 LDX #1
    // Overlapping static entry reached from 0xC1430E.
    case 0xC14310: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:18 TXA
    case 0xC14311: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:19 JSR CHAR_SELECT_PROMPT
    case 0xC14312: {
        Instruction step(cpu, 0x20, 0x002EE7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:20 STA @VIRTUAL02
    case 0xC14315: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    case 0xC14317: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:21 CMP #0
    // Overlapping static entry reached from 0xC14317.
    case 0xC14319: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:22 BEQ @UNKNOWN0
    case 0xC1431A: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    case 0xC1431C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:23 LDY #1
    // Overlapping static entry reached from 0xC1431C.
    case 0xC1431E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:24 LDX @VIRTUAL04
    case 0xC1431F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:25 LDA @VIRTUAL02
    case 0xC14321: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:26 JSR RESET_CHAR_LEVEL_ONE
    case 0xC14323: {
        Instruction step(cpu, 0x20, 0x00D6CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    case 0xC14326: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:27 LDY #0
    // Overlapping static entry reached from 0xC14326.
    case 0xC14328: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    case 0xC14329: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:28 LDX #100
    // Overlapping static entry reached from 0xC14329.
    case 0xC1432B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:29 LDA @VIRTUAL02
    case 0xC1432C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:30 JSR RECOVER_HP_AMTPERCENT
    case 0xC1432E: {
        Instruction step(cpu, 0x20, 0x009014u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    case 0xC14331: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:31 LDY #0
    // Overlapping static entry reached from 0xC14331.
    case 0xC14333: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    case 0xC14334: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:32 LDX #100
    // Overlapping static entry reached from 0xC14334.
    case 0xC14336: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:33 LDA @VIRTUAL02
    case 0xC14337: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:34 JSR RECOVER_PP_AMTPERCENT
    case 0xC14339: {
        Instruction step(cpu, 0x20, 0x0090C6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC1433C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:36 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1433C.
    case 0xC1433E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/set_char_level.asm:37 JSR CLOSE_WINDOW
    case 0xC1433F: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC14342: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/set_char_level.asm:38 END_C_FUNCTION
    case 0xC14343: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
