// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/prepare_new_entity_at_existing_entity_location.asm
bool resume_overworld_prepare_new_entity_at_existing_entity_location(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46DAD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DAF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46DB2.
    case 0xC46DB4: {
        Instruction step(cpu, 0xFF, 0xF0685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:7 END_STACK_VARS
    case 0xC46DB6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    case 0xC46DB7: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:8 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC46DB4.
    case 0xC46DB8: {
        Instruction step(cpu, 0x07, 0x0000C9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    case 0xC46DB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC46DB8.
    case 0xC46DBA: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:9 CMP #1
    // Overlapping static entry reached from 0xC46DB9.
    case 0xC46DBB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:10 BEQ @UNKNOWN1
    case 0xC46DBC: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:11 BRA @UNKNOWN2
    case 0xC46DBE: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:13 LDX CURRENT_ENTITY_SLOT
    case 0xC46DC0: {
        Instruction step(cpu, 0xAE, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:14 STX @LOCAL00
    case 0xC46DC3: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:15 BRA @UNKNOWN2
    case 0xC46DC5: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:17 LDX GAME_STATE+game_state::current_party_members
    case 0xC46DC7: {
        Instruction step(cpu, 0xAE, 0x009889u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:18 STX @LOCAL00
    case 0xC46DCA: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:20 LDX @LOCAL00
    case 0xC46DCC: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:21 TXA
    case 0xC46DCE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:22 ASL
    case 0xC46DCF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:23 TAX
    case 0xC46DD0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46DD1: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:25 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC46DD4: {
        Instruction step(cpu, 0x8D, 0x009E2Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:26 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46DD7: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:27 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46DDA: {
        Instruction step(cpu, 0x8D, 0x009E2Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:28 LDA ENTITY_DIRECTIONS,X
    case 0xC46DDD: {
        Instruction step(cpu, 0xBD, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_existing_entity_location.asm:29 STA ENTITY_PREPARED_DIRECTION
    case 0xC46DE0: {
        Instruction step(cpu, 0x8D, 0x009E31u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC46DE3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_new_entity_at_existing_entity_location.asm:30 END_C_FUNCTION
    case 0xC46DE4: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
