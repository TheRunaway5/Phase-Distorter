// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/prepare_new_entity_at_existing_entity_location.asm
bool resume_overworld_prepare_new_entity_at_existing_entity_location(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44B31: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B33: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B34: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B35: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44B36.
    case 0xC44B38: {
        Instruction step(cpu, 0xFF, 0xF0685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B39: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC44B3A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    case 0xC44B3B: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC44B38.
    case 0xC44B3C: {
        Instruction step(cpu, 0x07, 0x0000C9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    case 0xC44B3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC44B3C.
    case 0xC44B3E: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC44B3D.
    case 0xC44B3F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:10 BEQ @UNKNOWN1
    case 0xC44B40: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:11 BRA @UNKNOWN2
    case 0xC44B42: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:13 LDX CURRENT_ENTITY_SLOT
    case 0xC44B44: {
        Instruction step(cpu, 0xAE, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:14 STX @LOCAL00
    case 0xC44B47: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:15 BRA @UNKNOWN2
    case 0xC44B49: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:17 LDX GAME_STATE+game_state::current_party_members
    case 0xC44B4B: {
        Instruction step(cpu, 0xAE, 0x009B3Au, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:18 STX @LOCAL00
    case 0xC44B4E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:20 LDX @LOCAL00
    case 0xC44B50: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:21 TXA
    case 0xC44B52: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:22 ASL
    case 0xC44B53: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:23 TAX
    case 0xC44B54: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44B55: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:25 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC44B58: {
        Instruction step(cpu, 0x8D, 0x00A033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:26 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44B5B: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:27 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC44B5E: {
        Instruction step(cpu, 0x8D, 0x00A035u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:28 LDA ENTITY_DIRECTIONS,X
    case 0xC44B61: {
        Instruction step(cpu, 0xBD, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:29 STA ENTITY_PREPARED_DIRECTION
    case 0xC44B64: {
        Instruction step(cpu, 0x8D, 0x00A037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC44B67: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC44B68: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
