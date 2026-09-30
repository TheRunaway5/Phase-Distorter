// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/spawn_buzz_buzz.asm
bool resume_overworld_spawn_buzz_buzz(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06D4F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D51: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D52: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC06D53.
    case 0xC06D55: {
        Instruction step(cpu, 0xFF, 0x25A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D56: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x000425u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06D57.
    case 0xC06D59: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D5A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06D59.
    case 0xC06D5B: {
        Instruction step(cpu, 0x0E, 0x00C5A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C5u : 0x0000C5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06D5C.
    case 0xC06D5E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D5F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D61: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_buzz_buzz.asm:8 JSL UNKNOWN_EF0EE8
    case 0xC06D65: {
        Instruction step(cpu, 0x22, 0xC4C981u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06D69: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06D6A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
