// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/is_entity_still_on_cast_screen.asm
bool resume_ending_is_entity_still_on_cast_screen(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BF42: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF44: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF45: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BF46.
    case 0xC4BF48: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF49: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:8 LDA #0
    case 0xC4BF4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:8 LDA #0
    // Overlapping static entry reached from 0xC4BF4A.
    case 0xC4BF4C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:9 STA @LOCAL00
    case 0xC4BF4D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC4BF4F: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:11 ASL
    case 0xC4BF52: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:12 TAX
    case 0xC4BF53: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:13 LDA BG3_Y_POS
    case 0xC4BF54: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:14 SEC
    case 0xC4BF57: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:15 SBC #8
    case 0xC4BF58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:15 SBC #8
    // Overlapping static entry reached from 0xC4BF58.
    case 0xC4BF5A: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:16 CMP ENTITY_ABS_Y_TABLE,X
    case 0xC4BF5B: {
        Instruction step(cpu, 0xDD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:17 BCS @UNKNOWN0
    case 0xC4BF5E: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:18 LDA #1
    case 0xC4BF60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:18 LDA #1
    // Overlapping static entry reached from 0xC4BF60.
    case 0xC4BF62: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:19 STA @LOCAL00
    case 0xC4BF63: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/is_entity_still_on_cast_screen.asm:21 LDA @LOCAL00
    case 0xC4BF65: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:22 END_C_FUNCTION
    case 0xC4BF67: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:22 END_C_FUNCTION
    case 0xC4BF68: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
