// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/test_player_in_area.asm
bool resume_overworld_actionscript_test_player_in_area(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46E74: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E76: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E77: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46E78.
    case 0xC46E7A: {
        Instruction step(cpu, 0xFF, 0x3FAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:8 END_STACK_VARS
    case 0xC46E7B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    case 0xC46E7C: {
        Instruction step(cpu, 0xAD, 0x009F3Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:9 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC46E7A.
    case 0xC46E7E: {
        Instruction step(cpu, 0x9F, 0xA905F0u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:10 BEQ @UNKNOWN0
    case 0xC46E7F: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    case 0xC46E81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC46E7E.
    case 0xC46E82: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:11 LDA #FALSE
    // Overlapping static entry reached from 0xC46E81.
    case 0xC46E83: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:12 BRA @UNKNOWN10
    case 0xC46E84: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:14 LDY CURRENT_ENTITY_SLOT
    case 0xC46E86: {
        Instruction step(cpu, 0xAC, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:15 TYA
    case 0xC46E89: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:16 ASL
    case 0xC46E8A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:17 TAX
    case 0xC46E8B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:18 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC46E8C: {
        Instruction step(cpu, 0xBD, 0x000E5Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:19 SEC
    case 0xC46E8F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:20 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC46E90: {
        Instruction step(cpu, 0xED, 0x009877u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:21 STA @LOCAL01
    case 0xC46E93: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:22 STA @VIRTUAL02
    case 0xC46E95: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    case 0xC46E97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:23 LDA #0
    // Overlapping static entry reached from 0xC46E97.
    case 0xC46E99: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:24 CLC
    case 0xC46E9A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:25 SBC @VIRTUAL02
    case 0xC46E9B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46E9D: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46E9F: {
        Instruction step(cpu, 0x10, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46EA1: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:26 BRANCHLTEQS @UNKNOWN3
    case 0xC46EA3: {
        Instruction step(cpu, 0x30, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:27 LDA @LOCAL01
    case 0xC46EA5: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    case 0xC46EA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:28 EOR #$FFFF
    // Overlapping static entry reached from 0xC46EA7.
    case 0xC46EA9: {
        Instruction step(cpu, 0xFF, 0x0E851Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:29 INC
    case 0xC46EAA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:30 STA @LOCAL00
    case 0xC46EAB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:31 BRA @UNKNOWN4
    case 0xC46EAD: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:33 LDA @LOCAL01
    case 0xC46EAF: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:34 STA @LOCAL00
    case 0xC46EB1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:36 TYA
    case 0xC46EB3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:37 ASL
    case 0xC46EB4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:38 TAX
    case 0xC46EB5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:39 LDA @LOCAL00
    case 0xC46EB6: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:40 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC46EB8: {
        Instruction step(cpu, 0xDD, 0x000ED6u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:41 BCS @UNKNOWN9
    case 0xC46EBB: {
        Instruction step(cpu, 0xB0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:42 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC46EBD: {
        Instruction step(cpu, 0xBD, 0x000E9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:43 SEC
    case 0xC46EC0: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:44 SBC GAME_STATE+game_state::leader_y_coord
    case 0xC46EC1: {
        Instruction step(cpu, 0xED, 0x00987Bu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:45 STA @LOCAL01
    case 0xC46EC4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:46 STA @VIRTUAL02
    case 0xC46EC6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    case 0xC46EC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:47 LDA #0
    // Overlapping static entry reached from 0xC46EC8.
    case 0xC46ECA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:48 CLC
    case 0xC46ECB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:49 SBC @VIRTUAL02
    case 0xC46ECC: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ECE: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ED0: {
        Instruction step(cpu, 0x10, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ED2: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:50 BRANCHLTEQS @UNKNOWN7
    case 0xC46ED4: {
        Instruction step(cpu, 0x30, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:51 LDA @LOCAL01
    case 0xC46ED6: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    case 0xC46ED8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:52 EOR #$FFFF
    // Overlapping static entry reached from 0xC46ED8.
    case 0xC46EDA: {
        Instruction step(cpu, 0xFF, 0x10851Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:53 INC
    case 0xC46EDB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:54 STA @LOCAL01
    case 0xC46EDC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:55 BRA @UNKNOWN8
    case 0xC46EDE: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:57 LDA @LOCAL01
    case 0xC46EE0: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:58 STA @LOCAL01
    case 0xC46EE2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:60 TYA
    case 0xC46EE4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:61 ASL
    case 0xC46EE5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:62 TAX
    case 0xC46EE6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:63 LDA @LOCAL01
    case 0xC46EE7: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:64 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC46EE9: {
        Instruction step(cpu, 0xDD, 0x000F12u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:65 BCS @UNKNOWN9
    case 0xC46EEC: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    case 0xC46EEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:66 LDA #TRUE
    // Overlapping static entry reached from 0xC46EEE.
    case 0xC46EF0: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:67 BRA @UNKNOWN10
    case 0xC46EF1: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    case 0xC46EF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/test_player_in_area.asm:69 LDA #FALSE
    // Overlapping static entry reached from 0xC46EF3.
    case 0xC46EF5: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC46EF6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/test_player_in_area.asm:71 END_C_FUNCTION
    case 0xC46EF7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
