// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/get_off_bicycle.asm
bool resume_overworld_get_off_bicycle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_off_bicycle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BEC6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BEC8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BEC9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BECA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BECA.
    case 0xC1BECC: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_off_bicycle.asm:6 END_STACK_VARS
    case 0xC1BECD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1BECE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1BECE.
    case 0xC1BED0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/get_off_bicycle.asm:7 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1BED1: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BED4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    // Overlapping static entry reached from 0xC1BED4.
    case 0xC1BED6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BED7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BED9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    // Overlapping static entry reached from 0xC1BED9.
    case 0xC1BEDB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/get_off_bicycle.asm:8 MOVE_INT_CONSTANT 1, @LOCAL00
    case 0xC1BEDC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_off_bicycle.asm:9 JSR SET_WORKING_MEMORY
    case 0xC1BEDE: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Eu : 0x00C95Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BEE1.
    case 0xC1BEE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BEE3.
    case 0xC1BEE5: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    // Overlapping static entry reached from 0xC1BEE6.
    case 0xC1BEE8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEE9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/get_off_bicycle.asm:10 DISPLAY_TEXT_PTR MSG_SYS_BICYCLE_OFF
    case 0xC1BEEB: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_off_bicycle.asm:11 JSR CLOSE_FOCUS_WINDOW
    case 0xC1BEEF: {
        Instruction step(cpu, 0x20, 0x000084u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/get_off_bicycle.asm:12 JSL WINDOW_TICK
    case 0xC1BEF2: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_off_bicycle.asm:13 JSL UNKNOWN_C03CFD
    case 0xC1BEF6: {
        Instruction step(cpu, 0x22, 0xC03CFDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_off_bicycle.asm:14 END_C_FUNCTION
    case 0xC1BEFA: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_off_bicycle.asm:14 END_C_FUNCTION
    case 0xC1BEFB: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
