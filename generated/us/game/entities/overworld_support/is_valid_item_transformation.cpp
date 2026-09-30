// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/is_valid_item_transformation.asm
bool resume_overworld_is_valid_item_transformation(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/is_valid_item_transformation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48ECE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:7 LDY #0
    case 0xC48ED0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:7 LDY #0
    // Overlapping static entry reached from 0xC48ED0.
    case 0xC48ED2: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48ED3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48ED4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:9 TAX
    case 0xC48ED5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:10 LDA LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::transformation_countdown,X
    case 0xC48ED6: {
        Instruction step(cpu, 0xBD, 0x009F1Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:11 AND #$00FF
    case 0xC48ED9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC48ED9.
    case 0xC48EDB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:12 BNE @UNKNOWN0
    case 0xC48EDC: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:13 LDA LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::sfx_frequency,X
    case 0xC48EDE: {
        Instruction step(cpu, 0xBD, 0x009F1Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:14 AND #$00FF
    case 0xC48EE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC48EE1.
    case 0xC48EE3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:15 BEQ @UNKNOWN1
    case 0xC48EE4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:17 LDY #1
    case 0xC48EE6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:17 LDY #1
    // Overlapping static entry reached from 0xC48EE6.
    case 0xC48EE8: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/is_valid_item_transformation.asm:19 TYA
    case 0xC48EE9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/is_valid_item_transformation.asm:20 END_C_FUNCTION
    case 0xC48EEA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
