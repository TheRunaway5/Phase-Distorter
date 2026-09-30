// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/create_floating_sprite_at_character.asm
bool resume_text_ccs_create_floating_sprite_at_character(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:3 BEGIN_C_FUNCTION
    case 0xC168EC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168EE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168EF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC168F1.
    case 0xC168F3: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:10 TXA
    case 0xC168F6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:11 STA @LOCAL00
    case 0xC168F7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:12 LDA #1
    case 0xC168F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC168F9.
    case 0xC168FB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:13 CLC
    case 0xC168FC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168FD: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16900: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16902: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16904: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16906: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:16 LDA @LOCAL00
    case 0xC16908: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1690A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1690C: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC1690F: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16912: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16914: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:22 LDA #.LOWORD(CC_1F_1C)
    case 0xC16917: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ECu : 0x0068ECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:22 LDA #.LOWORD(CC_1F_1C)
    // Overlapping static entry reached from 0xC16917.
    case 0xC16919: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:23 BRA @UNKNOWN7
    case 0xC1691A: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC1691C: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:26 AND #$00FF
    case 0xC1691F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1691F.
    case 0xC16921: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16922: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC16924: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16926: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16929: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1692B: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1692D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1692F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC16931: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:32 JSR GET_WORKING_MEMORY
    case 0xC16933: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC16936: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:35 LDA @VIRTUAL06
    case 0xC16938: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:36 STA @VIRTUAL00
    case 0xC1693A: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC1693C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:38 LDA @LOCAL00
    case 0xC1693E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:39 BEQ @ARG_2_IS_ZERO
    case 0xC16940: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16942: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16944: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:41 BRA @ARG_2_IS_NONZERO
    case 0xC16946: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC16948: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:45 LDA @VIRTUAL06
    case 0xC1694B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:46 TAX
    case 0xC1694D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:47 LDA @VIRTUAL00
    case 0xC1694E: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:48 AND #$00FF
    case 0xC16950: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC16950.
    case 0xC16952: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:49 JSL UNKNOWN_C4B4FE
    case 0xC16953: {
        Instruction step(cpu, 0x22, 0xC4896Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:50 LDA #NULL
    case 0xC16957: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_character.asm:50 LDA #NULL
    // Overlapping static entry reached from 0xC16957.
    case 0xC16959: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:52 END_C_FUNCTION
    case 0xC1695A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:52 END_C_FUNCTION
    case 0xC1695B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
