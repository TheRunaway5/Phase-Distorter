// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/spawn_buzz_buzz.asm
bool resume_overworld_spawn_buzz_buzz(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06B21: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B23: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B24: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC06B25.
    case 0xC06B27: {
        Instruction step(cpu, 0xFF, 0x35A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B28: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000035u : 0x00EA35u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06B29.
    case 0xC06B2B: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B2C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C5u : 0x0000C5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06B2E.
    case 0xC06B30: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B31: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B33: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn_buzz_buzz.asm:8 JSL UNKNOWN_EF0EE8
    case 0xC06B37: {
        Instruction step(cpu, 0x22, 0xEF0EE8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06B3B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06B3C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
