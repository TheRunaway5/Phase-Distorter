// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/print_cast_name_entity_var0.asm
bool resume_ending_print_cast_name_entity_var0(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EC52: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC54: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC55: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC56: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EC57.
    case 0xC4EC59: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC5A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC5B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:66 STX @LOCAL00
    case 0xC4EC5C: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:66 STX @LOCAL00
    // Overlapping static entry reached from 0xC4EC59.
    case 0xC4EC5D: {
        Instruction step(cpu, 0x0E, 0x0042ADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:67 LDA CURRENT_ENTITY_SLOT
    case 0xC4EC5E: {
        Instruction step(cpu, 0xAD, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:67 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4EC5D.
    case 0xC4EC60: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:68 ASL
    case 0xC4EC61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:69 TAX
    case 0xC4EC62: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:70 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4EC63: {
        Instruction step(cpu, 0xBD, 0x000E5Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:71 LDX @LOCAL00
    case 0xC4EC66: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:72 JSL PRINT_CAST_NAME
    case 0xC4EC68: {
        Instruction step(cpu, 0x22, 0xC4EBADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:74 PLD
    case 0xC4EC6C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/ending/print_cast_name_entity_var0.asm:75 RTL
    case 0xC4EC6D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
