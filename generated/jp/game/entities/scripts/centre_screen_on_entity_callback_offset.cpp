// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm
bool resume_overworld_actionscript_centre_screen_on_entity_callback_offset(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46288: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4628A: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:6 ASL
    case 0xC4628D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:7 TAY
    case 0xC4628E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC4628F: {
        Instruction step(cpu, 0xB9, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:9 CLC
    case 0xC46292: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:10 ADC ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC46293: {
        Instruction step(cpu, 0x79, 0x000E90u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:11 TAX
    case 0xC46296: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:12 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC46297: {
        Instruction step(cpu, 0xB9, 0x000B84u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:13 CLC
    case 0xC4629A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC4629B: {
        Instruction step(cpu, 0x79, 0x000E54u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:14 ADC ENTITY_SCRIPT_VAR0_TABLE,Y
    // Overlapping static entry reached from 0xC462EE.
    case 0xC4629D: {
        Instruction step(cpu, 0x0E, 0x009522u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    case 0xC4629E: {
        Instruction step(cpu, 0x22, 0xC04295u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:15 JSL CENTER_SCREEN
    // Overlapping static entry reached from 0xC4629D.
    case 0xC462A0: {
        Instruction step(cpu, 0x42, 0x0000C0u, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback_offset.asm:16 END_C_FUNCTION
    case 0xC462A2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
