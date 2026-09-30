// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/get_direction_from_character_to_entity.asm
bool resume_text_ccs_get_direction_from_character_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC168A0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC168A5.
    case 0xC168A7: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:11 TXA
    case 0xC168AA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:12 STA @LOCAL01
    case 0xC168AB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    case 0xC168AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    // Overlapping static entry reached from 0xC168AD.
    case 0xC168AF: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:14 CLC
    case 0xC168B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168B1: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168B4: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168B6: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168B8: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168BA: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:17 LDA @LOCAL01
    case 0xC168BC: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC168BE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168C0: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC168C3: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC168C6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168C8: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    case 0xC168CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A0u : 0x0068A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC168CB.
    case 0xC168CD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:24 BRA @UNKNOWN7
    case 0xC168CE: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC168D0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC168D2: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:28 STA @VIRTUAL00
    case 0xC168D5: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC168D7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:30 LDA @VIRTUAL00
    case 0xC168D9: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    case 0xC168DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC168DB.
    case 0xC168DD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:32 BEQ @ARG_1_IS_ZERO
    case 0xC168DE: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC168E0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E2: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E6: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E8: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168EA: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:35 BRA @ARG_1_IS_NONZERO
    case 0xC168EC: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:37 JSR GET_WORKING_MEMORY
    case 0xC168EE: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC168F1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:40 LDA @VIRTUAL06
    case 0xC168F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:41 STA @VIRTUAL01
    case 0xC168F5: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:42 LDA CC_ARGUMENT_STORAGE+1
    case 0xC168F7: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:43 STA @VIRTUAL00
    case 0xC168FA: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC168FC: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:45 LDY #8
    case 0xC168FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00C208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC16900: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC168FE.
    case 0xC16901: {
        Instruction step(cpu, 0x20, 0x0012A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:47 LDA @LOCAL01
    case 0xC16902: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:48 JSL ASL16_ENTRY2
    case 0xC16904: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:49 STA @VIRTUAL02
    case 0xC16908: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC1690A: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    case 0xC1690D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC1690D.
    case 0xC1690F: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:52 ORA @VIRTUAL02
    case 0xC16910: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:53 BEQ @ARG_2_IS_ZERO
    case 0xC16912: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16914: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16916: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:55 BRA @ARG_2_IS_NONZERO
    case 0xC16918: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:57 JSR GET_ARGUMENT_MEMORY
    case 0xC1691A: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:59 LDA @VIRTUAL06
    case 0xC1691D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:60 REP #PROC_FLAGS::INDEX8
    case 0xC1691F: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:61 TAY
    case 0xC16921: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:62 LDA @VIRTUAL00
    case 0xC16922: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    case 0xC16924: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC16924.
    case 0xC16926: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:64 TAX
    case 0xC16927: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:65 DEX
    case 0xC16928: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:66 LDA @VIRTUAL01
    case 0xC16929: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    case 0xC1692B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1692B.
    case 0xC1692D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:68 JSL UNKNOWN_C462E4
    case 0xC1692E: {
        Instruction step(cpu, 0x22, 0xC462E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:69 INC
    case 0xC16932: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16933: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16935: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16937: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16939: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1693B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1693D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:72 JSR SET_ARGUMENT_MEMORY
    case 0xC1693F: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    case 0xC16942: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    // Overlapping static entry reached from 0xC16942.
    case 0xC16944: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16945: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16946: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
