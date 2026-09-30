// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/get_direction_rotated_clockwise.asm
bool resume_overworld_actionscript_get_direction_rotated_clockwise(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C682: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C684: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C685: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C686: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C687: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C687.
    case 0xC0C689: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C68A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:8 END_STACK_VARS
    case 0xC0C68B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:9 STA @LOCAL00
    case 0xC0C68C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC0C689.
    case 0xC0C68D: {
        Instruction step(cpu, 0x0E, 0x0042ADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C68E: {
        Instruction step(cpu, 0xAD, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C68D.
    case 0xC0C690: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:11 ASL
    case 0xC0C691: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:12 TAX
    case 0xC0C692: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:13 LDA @LOCAL00
    case 0xC0C693: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:14 CLC
    case 0xC0C695: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:15 ADC ENTITY_DIRECTIONS,X
    case 0xC0C696: {
        Instruction step(cpu, 0x7D, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:16 AND #$0007
    case 0xC0C699: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/get_direction_rotated_clockwise.asm:16 AND #$0007
    // Overlapping static entry reached from 0xC0C699.
    case 0xC0C69B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:17 END_C_FUNCTION
    case 0xC0C69C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/get_direction_rotated_clockwise.asm:17 END_C_FUNCTION
    case 0xC0C69D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
