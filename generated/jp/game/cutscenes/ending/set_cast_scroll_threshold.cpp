// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/set_cast_scroll_threshold.asm
bool resume_ending_set_cast_scroll_threshold(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BB37: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB39: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BB3C.
    case 0xC4BB3E: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB40: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:8 STA @LOCAL00
    case 0xC4BB41: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC4BB3E.
    case 0xC4BB42: {
        Instruction step(cpu, 0x0E, 0x0038ADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4BB43: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4BB42.
    case 0xC4BB45: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:10 ASL
    case 0xC4BB46: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:11 TAX
    case 0xC4BB47: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:12 LDA @LOCAL00
    case 0xC4BB48: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:13 ASL
    case 0xC4BB4A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:14 ASL
    case 0xC4BB4B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:15 ASL
    case 0xC4BB4C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:16 CLC
    case 0xC4BB4D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:17 ADC BG3_Y_POS
    case 0xC4BB4E: {
        Instruction step(cpu, 0x6D, 0x00003Bu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/set_cast_scroll_threshold.asm:18 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BB51: {
        Instruction step(cpu, 0x9D, 0x000E54u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:19 END_C_FUNCTION
    case 0xC4BB54: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:19 END_C_FUNCTION
    case 0xC4BB55: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
