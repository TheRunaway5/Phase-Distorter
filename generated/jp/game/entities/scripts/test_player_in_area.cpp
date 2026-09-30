// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/test_player_in_area.asm
bool resume_overworld_actionscript_test_player_in_area(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44BF8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44BFC.
    case 0xC44BFE: {
        Instruction step(cpu, 0xFF, 0x41AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC44BFF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    case 0xC44C00: {
        Instruction step(cpu, 0xAD, 0x00A141u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC44BFE.
    case 0xC44C02: {
        Instruction step(cpu, 0xA1, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:10 BEQ @UNKNOWN0
    case 0xC44C03: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:10 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC44C02.
    case 0xC44C04: {
        Instruction step(cpu, 0x05, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    case 0xC44C05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC44C04.
    case 0xC44C06: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC44C05.
    case 0xC44C07: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:12 BRA @UNKNOWN10
    case 0xC44C08: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:14 LDY CURRENT_ENTITY_SLOT
    case 0xC44C0A: {
        Instruction step(cpu, 0xAC, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:15 TYA
    case 0xC44C0D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:16 ASL
    case 0xC44C0E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:17 TAX
    case 0xC44C0F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:18 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC44C10: {
        Instruction step(cpu, 0xBD, 0x000E54u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:19 SEC
    case 0xC44C13: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:20 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC44C14: {
        Instruction step(cpu, 0xED, 0x009B28u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:21 STA @LOCAL01
    case 0xC44C17: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:22 STA @VIRTUAL02
    case 0xC44C19: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    case 0xC44C1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    // Overlapping static entry reached from 0xC44C1B.
    case 0xC44C1D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:24 CLC
    case 0xC44C1E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:25 SBC @VIRTUAL02
    case 0xC44C1F: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C21: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C23: {
        Instruction step(cpu, 0x10, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C25: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC44C27: {
        Instruction step(cpu, 0x30, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:27 LDA @LOCAL01
    case 0xC44C29: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    case 0xC44C2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    // Overlapping static entry reached from 0xC44C2B.
    case 0xC44C2D: {
        Instruction step(cpu, 0xFF, 0x0E851Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:29 INC
    case 0xC44C2E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:30 STA @LOCAL00
    case 0xC44C2F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:31 BRA @UNKNOWN4
    case 0xC44C31: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:33 LDA @LOCAL01
    case 0xC44C33: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:34 STA @LOCAL00
    case 0xC44C35: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:36 TYA
    case 0xC44C37: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:37 ASL
    case 0xC44C38: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:38 TAX
    case 0xC44C39: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:39 LDA @LOCAL00
    case 0xC44C3A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:40 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC44C3C: {
        Instruction step(cpu, 0xDD, 0x000ECCu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:41 BCS @UNKNOWN9
    case 0xC44C3F: {
        Instruction step(cpu, 0xB0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:42 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC44C41: {
        Instruction step(cpu, 0xBD, 0x000E90u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:43 SEC
    case 0xC44C44: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:44 SBC GAME_STATE+game_state::leader_y_coord
    case 0xC44C45: {
        Instruction step(cpu, 0xED, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:45 STA @LOCAL01
    case 0xC44C48: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:46 STA @VIRTUAL02
    case 0xC44C4A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    case 0xC44C4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    // Overlapping static entry reached from 0xC44C4C.
    case 0xC44C4E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:48 CLC
    case 0xC44C4F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:49 SBC @VIRTUAL02
    case 0xC44C50: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C52: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C54: {
        Instruction step(cpu, 0x10, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C56: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC44C58: {
        Instruction step(cpu, 0x30, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:51 LDA @LOCAL01
    case 0xC44C5A: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    case 0xC44C5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    // Overlapping static entry reached from 0xC44C5C.
    case 0xC44C5E: {
        Instruction step(cpu, 0xFF, 0x10851Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:53 INC
    case 0xC44C5F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:54 STA @LOCAL01
    case 0xC44C60: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:55 BRA @UNKNOWN8
    case 0xC44C62: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:57 LDA @LOCAL01
    case 0xC44C64: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:58 STA @LOCAL01
    case 0xC44C66: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:60 TYA
    case 0xC44C68: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:61 ASL
    case 0xC44C69: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:62 TAX
    case 0xC44C6A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:63 LDA @LOCAL01
    case 0xC44C6B: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:64 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC44C6D: {
        Instruction step(cpu, 0xDD, 0x000F08u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:65 BCS @UNKNOWN9
    case 0xC44C70: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    case 0xC44C72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    // Overlapping static entry reached from 0xC44C72.
    case 0xC44C74: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:67 BRA @UNKNOWN10
    case 0xC44C75: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    case 0xC44C77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    // Overlapping static entry reached from 0xC44C77.
    case 0xC44C79: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC44C7A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC44C7B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
