// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/create_prepared_entity_sprite.asm
bool resume_overworld_create_prepared_entity_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44275: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC44277: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC44278: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC44279: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4427A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4427A.
    case 0xC4427C: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4427D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4427E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    case 0xC4427F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC4427C.
    case 0xC44280: {
        Instruction step(cpu, 0x14, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC44281: {
        Instruction step(cpu, 0xAD, 0x00A033u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    // Overlapping static entry reached from 0xC44280.
    case 0xC44282: {
        Instruction step(cpu, 0x33, 0x0000A0u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:15 STA @LOCAL00
    case 0xC44284: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC44286: {
        Instruction step(cpu, 0xAD, 0x00A035u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    // Overlapping static entry reached from 0xC442DB.
    case 0xC44287: {
        Instruction step(cpu, 0x35, 0x0000A0u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:17 STA @LOCAL01
    case 0xC44289: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    case 0xC4428B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    // Overlapping static entry reached from 0xC4428B.
    case 0xC4428D: {
        Instruction step(cpu, 0xFF, 0x2214A5u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:19 LDA @LOCAL03
    case 0xC4428E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    case 0xC44290: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4428D.
    case 0xC44291: {
        Instruction step(cpu, 0x5F, 0x85C01Eu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    case 0xC44294: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    // Overlapping static entry reached from 0xC44291.
    case 0xC44295: {
        Instruction step(cpu, 0x12, 0x00000Au, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:22 ASL
    case 0xC44296: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:23 TAX
    case 0xC44297: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:24 LDA ENTITY_PREPARED_DIRECTION
    case 0xC44298: {
        Instruction step(cpu, 0xAD, 0x00A037u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:25 STA ENTITY_DIRECTIONS,X
    case 0xC4429B: {
        Instruction step(cpu, 0x9D, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:26 LDA @LOCAL02
    case 0xC4429E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC442A0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC442A1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
