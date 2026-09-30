// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/set_tpt_direction.asm
bool resume_text_ccs_set_tpt_direction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_direction.asm:3 BEGIN_C_FUNCTION
    case 0xC1670F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16711: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16712: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16713: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16714: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16714.
    case 0xC16716: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16717: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16718: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    case 0xC16719: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16716.
    case 0xC1671A: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    case 0xC1671B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1671A.
    case 0xC1671C: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1671B.
    case 0xC1671D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:13 CLC
    case 0xC1671E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1671F: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16722: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16724: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16726: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16728: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:16 TXA
    case 0xC1672A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1672B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1672D: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16730: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16733: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16735: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    case 0xC16738: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00670Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC16738.
    case 0xC1673A: {
        Instruction step(cpu, 0x67, 0x000080u, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    case 0xC1673B: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1673A.
    case 0xC1673C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC1673D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1673C.
    case 0xC1673E: {
        Instruction step(cpu, 0x20, 0x0008A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:26 LDA #8
    case 0xC1673F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC16741: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC1673F.
    case 0xC16742: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:28 TAY
    case 0xC16743: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC16744: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16746: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    case 0xC16749: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16749.
    case 0xC1674B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:32 JSL ASL16_ENTRY2
    case 0xC1674C: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:33 STA @VIRTUAL02
    case 0xC16750: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:34 LDA CC_ARGUMENT_STORAGE
    case 0xC16752: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    case 0xC16755: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16755.
    case 0xC16757: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:36 ORA @VIRTUAL02
    case 0xC16758: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:37 BEQ @ARG_1_IS_ZERO
    case 0xC1675A: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC1675C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC1675E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:39 BRA @ARG_1_IS_NONZERO
    case 0xC16760: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16762: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:43 LDA @VIRTUAL06
    case 0xC16765: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:44 STA @LOCAL00
    case 0xC16767: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC16769: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:46 LDX @LOCAL01
    case 0xC1676B: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:47 BEQ @ARG_2_IS_ZERO
    case 0xC1676D: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:48 TXA
    case 0xC1676F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16770: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16772: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:50 BRA @ARG_2_IS_NONZERO
    case 0xC16774: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:52 JSR GET_ARGUMENT_MEMORY
    case 0xC16776: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:54 LDA @VIRTUAL06
    case 0xC16779: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:55 TAX
    case 0xC1677B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:56 DEX
    case 0xC1677C: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:57 LDA @LOCAL00
    case 0xC1677D: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:58 JSL UNKNOWN_C462FF
    case 0xC1677F: {
        Instruction step(cpu, 0x22, 0xC4405Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    case 0xC16783: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC16783.
    case 0xC16785: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16786: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16787: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
