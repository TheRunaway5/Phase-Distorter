// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/get_position_of_party_member.asm
bool resume_overworld_get_position_of_party_member(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_position_of_party_member.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46BE9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BEB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BEC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BED: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46BEE.
    case 0xC46BF0: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BF1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_position_of_party_member.asm:9 END_STACK_VARS
    case 0xC46BF2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:10 TAX
    case 0xC46BF3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:11 LDY CURRENT_ENTITY_SLOT
    case 0xC46BF4: {
        Instruction step(cpu, 0xAC, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:12 STY @LOCAL02
    case 0xC46BF7: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    case 0xC46BF9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FEu : 0x0000FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:13 CPX #<-2
    // Overlapping static entry reached from 0xC46BF9.
    case 0xC46BFB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:14 BNE @UNKNOWN0
    case 0xC46BFC: {
        Instruction step(cpu, 0xD0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:15 LDA GAME_STATE+game_state::party_count
    case 0xC46BFE: {
        Instruction step(cpu, 0xAD, 0x0098A3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    case 0xC46C01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC46C01.
    case 0xC46C03: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:17 TAX
    case 0xC46C04: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:18 STX @LOCAL01
    case 0xC46C05: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:19 TXA
    case 0xC46C07: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:20 DEC
    case 0xC46C08: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:21 ASL
    case 0xC46C09: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:28 TAX
    case 0xC46C0A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:29 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC46C0B: {
        Instruction step(cpu, 0xBD, 0x009897u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:31 STA @LOCAL00
    case 0xC46C0E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:32 ASL
    case 0xC46C10: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:33 TAX
    case 0xC46C11: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:34 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46C12: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:35 BNE @UNKNOWN1
    case 0xC46C15: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:36 LDX @LOCAL01
    case 0xC46C17: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:37 TXA
    case 0xC46C19: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:38 DEC
    case 0xC46C1A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:39 DEC
    case 0xC46C1B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:40 ASL
    case 0xC46C1C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:47 TAX
    case 0xC46C1D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:48 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC46C1E: {
        Instruction step(cpu, 0xBD, 0x009897u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:50 STA @LOCAL00
    case 0xC46C21: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:51 BRA @UNKNOWN1
    case 0xC46C23: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:53 TXA
    case 0xC46C25: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC46C26: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:55 JSL UNKNOWN_C4608C
    case 0xC46C28: {
        Instruction step(cpu, 0x22, 0xC4608Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:56 STA @LOCAL00
    case 0xC46C2C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:58 LDY @LOCAL02
    case 0xC46C2E: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:59 TYA
    case 0xC46C30: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:60 ASL
    case 0xC46C31: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:61 TAY
    case 0xC46C32: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:62 LDA @LOCAL00
    case 0xC46C33: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:63 ASL
    case 0xC46C35: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:64 TAX
    case 0xC46C36: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:65 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46C37: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:66 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC46C3A: {
        Instruction step(cpu, 0x99, 0x000FC6u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:67 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46C3D: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_position_of_party_member.asm:68 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC46C40: {
        Instruction step(cpu, 0x99, 0x001002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC46C43: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_position_of_party_member.asm:69 END_C_FUNCTION
    case 0xC46C44: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
