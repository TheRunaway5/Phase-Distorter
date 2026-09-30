// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/initialize_misc_object_data.asm
bool resume_overworld_initialize_misc_object_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_misc_object_data.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01A7F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:5 LDY #0
    case 0xC01A81: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:5 LDY #0
    // Overlapping static entry reached from 0xC01A81.
    case 0xC01A83: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:6 BRA @UNKNOWN1
    case 0xC01A84: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:8 TYA
    case 0xC01A86: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:9 ASL
    case 0xC01A87: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:10 TAX
    case 0xC01A88: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:11 STZ ENTITY_MOVEMENT_SPEEDS,X
    case 0xC01A89: {
        Instruction step(cpu, 0x9E, 0x002F30u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:12 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC01A8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:12 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC01A8C.
    case 0xC01A8E: {
        Instruction step(cpu, 0xFF, 0x2C9C9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:13 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC01A8F: {
        Instruction step(cpu, 0x9D, 0x002C9Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:14 STA ENTITY_NPC_IDS,X
    case 0xC01A92: {
        Instruction step(cpu, 0x9D, 0x003098u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:15 INY
    case 0xC01A95: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:17 CPY #MAX_ENTITIES
    case 0xC01A96: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:17 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC01A96.
    case 0xC01A98: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_misc_object_data.asm:18 BCC @UNKNOWN0
    case 0xC01A99: {
        Instruction step(cpu, 0x90, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_misc_object_data.asm:19 END_C_FUNCTION
    case 0xC01A9B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
