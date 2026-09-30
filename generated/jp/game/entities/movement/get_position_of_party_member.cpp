// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_position_of_party_member.asm
bool resume_overworld_get_position_of_party_member(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_position_of_party_member.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44965: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC44967: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC44968: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC44969: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC4496A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4496A.
    case 0xC4496C: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC4496D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC4496E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:10 TAX
    case 0xC4496F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:11 LDY CURRENT_ENTITY_SLOT
    case 0xC44970: {
        Instruction step(cpu, 0xAC, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:12 STY @LOCAL02
    case 0xC44973: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    case 0xC44975: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FEu : 0x0000FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    // Overlapping static entry reached from 0xC44975.
    case 0xC44977: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:14 BNE @UNKNOWN0
    case 0xC44978: {
        Instruction step(cpu, 0xD0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:15 LDA GAME_STATE+game_state::party_count
    case 0xC4497A: {
        Instruction step(cpu, 0xAD, 0x009B54u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    case 0xC4497D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC4497D.
    case 0xC4497F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:17 TAX
    case 0xC44980: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:18 STX @LOCAL01
    case 0xC44981: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:19 TXA
    case 0xC44983: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:20 DEC
    case 0xC44984: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:21 ASL
    case 0xC44985: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:23 CLC
    case 0xC44986: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:24 ADC #.LOWORD(GAME_STATE)
    case 0xC44987: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:24 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC44987.
    case 0xC44989: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:25 TAX
    case 0xC4498A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:26 LDA a:game_state::unknownA2,X
    case 0xC4498B: {
        Instruction step(cpu, 0xBD, 0x00009Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:31 STA @LOCAL00
    case 0xC4498E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:32 ASL
    case 0xC44990: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:33 TAX
    case 0xC44991: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:34 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44992: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:35 BNE @UNKNOWN1
    case 0xC44995: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:36 LDX @LOCAL01
    case 0xC44997: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:37 TXA
    case 0xC44999: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:38 DEC
    case 0xC4499A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:39 DEC
    case 0xC4499B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:40 ASL
    case 0xC4499C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:42 CLC
    case 0xC4499D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:43 ADC #.LOWORD(GAME_STATE)
    case 0xC4499E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:43 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4499E.
    case 0xC449A0: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:44 TAX
    case 0xC449A1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:45 LDA a:game_state::unknownA2,X
    case 0xC449A2: {
        Instruction step(cpu, 0xBD, 0x00009Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:50 STA @LOCAL00
    case 0xC449A5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:51 BRA @UNKNOWN1
    case 0xC449A7: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:53 TXA
    case 0xC449A9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC449AA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:55 JSL UNKNOWN_C4608C
    case 0xC449AC: {
        Instruction step(cpu, 0x22, 0xC43DDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:56 STA @LOCAL00
    case 0xC449B0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:58 LDY @LOCAL02
    case 0xC449B2: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:59 TYA
    case 0xC449B4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:60 ASL
    case 0xC449B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:61 TAY
    case 0xC449B6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:62 LDA @LOCAL00
    case 0xC449B7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:63 ASL
    case 0xC449B9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:64 TAX
    case 0xC449BA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:65 LDA ENTITY_ABS_X_TABLE,X
    case 0xC449BB: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:66 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC449BE: {
        Instruction step(cpu, 0x99, 0x000FBCu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:67 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC449C1: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:68 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC449C4: {
        Instruction step(cpu, 0x99, 0x000FF8u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC449C7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC449C8: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
