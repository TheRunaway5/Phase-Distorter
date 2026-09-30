// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm
bool resume_overworld_actionscript_centre_screen_on_entity_callback_offset(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48C3E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC48C40: {
        Instruction step(cpu, 0xAD, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:6 ASL
    case 0xC48C43: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:7 TAY
    case 0xC48C44: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC48C45: {
        Instruction step(cpu, 0xB9, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:9 CLC
    case 0xC48C48: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:10 ADC ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC48C49: {
        Instruction step(cpu, 0x79, 0x000E9Au, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:11 TAX
    case 0xC48C4C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:12 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC48C4D: {
        Instruction step(cpu, 0xB9, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:13 CLC
    case 0xC48C50: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC48C51: {
        Instruction step(cpu, 0x79, 0x000E5Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    // Overlapping static entry reached from 0xC48CA4.
    case 0xC48C53: {
        Instruction step(cpu, 0x0E, 0x000E22u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    case 0xC48C54: {
        Instruction step(cpu, 0x22, 0xC0400Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    // Overlapping static entry reached from 0xC48C53.
    case 0xC48C56: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:16 END_C_FUNCTION
    case 0xC48C58: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
