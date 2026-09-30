// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/create_prepared_entity_sprite.asm
bool resume_overworld_create_prepared_entity_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46507: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC46509: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4650C.
    case 0xC4650E: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC4650F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:12 END_STACK_VARS
    case 0xC46510: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    case 0xC46511: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC4650E.
    case 0xC46512: {
        Instruction step(cpu, 0x14, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC46513: {
        Instruction step(cpu, 0xAD, 0x009E2Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:14 LDA ENTITY_PREPARED_X_COORDINATE
    // Overlapping static entry reached from 0xC46512.
    case 0xC46514: {
        Instruction step(cpu, 0x2D, 0x00859Eu, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:15 STA @LOCAL00
    case 0xC46516: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xC46514.
    case 0xC46517: {
        Instruction step(cpu, 0x0E, 0x002FADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46518: {
        Instruction step(cpu, 0xAD, 0x009E2Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    // Overlapping static entry reached from 0xC4656D.
    case 0xC46519: {
        Instruction step(cpu, 0x2F, 0x10859Eu, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:16 LDA ENTITY_PREPARED_Y_COORDINATE
    // Overlapping static entry reached from 0xC46517.
    case 0xC4651A: {
        Instruction step(cpu, 0x9E, 0x001085u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:17 STA @LOCAL01
    case 0xC4651B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    case 0xC4651D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:18 LDY #$FFFF
    // Overlapping static entry reached from 0xC4651D.
    case 0xC4651F: {
        Instruction step(cpu, 0xFF, 0x2214A5u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:19 LDA @LOCAL03
    case 0xC46520: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    case 0xC46522: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4651F.
    case 0xC46523: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x00001Eu : 0x00C01Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:20 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC46523.
    case 0xC46525: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    case 0xC46526: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:21 STA @LOCAL02
    // Overlapping static entry reached from 0xC46525.
    case 0xC46527: {
        Instruction step(cpu, 0x12, 0x00000Au, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:22 ASL
    case 0xC46528: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:23 TAX
    case 0xC46529: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:24 LDA ENTITY_PREPARED_DIRECTION
    case 0xC4652A: {
        Instruction step(cpu, 0xAD, 0x009E31u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:25 STA ENTITY_DIRECTIONS,X
    case 0xC4652D: {
        Instruction step(cpu, 0x9D, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_sprite.asm:26 LDA @LOCAL02
    case 0xC46530: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC46532: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/create_prepared_entity_sprite.asm:27 END_C_FUNCTION
    case 0xC46533: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
