// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/set_tpt_direction.asm
bool resume_text_ccs_set_tpt_direction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_direction.asm:3 BEGIN_C_FUNCTION
    case 0xC16490: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16492: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16493: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16494: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16495: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16495.
    case 0xC16497: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16498: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_direction.asm:10 END_STACK_VARS
    case 0xC16499: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    case 0xC1649A: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16497.
    case 0xC1649B: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    case 0xC1649C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1649B.
    case 0xC1649D: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:12 LDA #2
    // Overlapping static entry reached from 0xC1649C.
    case 0xC1649E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:13 CLC
    case 0xC1649F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164A0: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A3: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A5: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A7: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC164A9: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:16 TXA
    case 0xC164AB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC164AC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164AE: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC164B1: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC164B4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164B6: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    case 0xC164B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x006490u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:22 LDA #.LOWORD(CC_1F_16)
    // Overlapping static entry reached from 0xC164B9.
    case 0xC164BB: {
        Instruction step(cpu, 0x64, 0x000080u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    case 0xC164BC: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC164BB.
    case 0xC164BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC164BE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC164BD.
    case 0xC164BF: {
        Instruction step(cpu, 0x20, 0x0008A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:26 LDA #8
    case 0xC164C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC164C2: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC164C0.
    case 0xC164C3: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:28 TAY
    case 0xC164C4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC164C5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC164C7: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    case 0xC164CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC164CA.
    case 0xC164CC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:32 JSL ASL16_ENTRY2
    case 0xC164CD: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:33 STA @VIRTUAL02
    case 0xC164D1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:34 LDA CC_ARGUMENT_STORAGE
    case 0xC164D3: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    case 0xC164D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC164D6.
    case 0xC164D8: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:36 ORA @VIRTUAL02
    case 0xC164D9: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:37 BEQ @ARG_1_IS_ZERO
    case 0xC164DB: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC164DD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC164DF: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:39 BRA @ARG_1_IS_NONZERO
    case 0xC164E1: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:41 JSR GET_WORKING_MEMORY
    case 0xC164E3: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:43 LDA @VIRTUAL06
    case 0xC164E6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:44 STA @LOCAL00
    case 0xC164E8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC164EA: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:46 LDX @LOCAL01
    case 0xC164EC: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:47 BEQ @ARG_2_IS_ZERO
    case 0xC164EE: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:48 TXA
    case 0xC164F0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC164F1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_tpt_direction.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC164F3: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:50 BRA @ARG_2_IS_NONZERO
    case 0xC164F5: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:52 JSR GET_ARGUMENT_MEMORY
    case 0xC164F7: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:54 LDA @VIRTUAL06
    case 0xC164FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:55 TAX
    case 0xC164FC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:56 DEX
    case 0xC164FD: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:57 LDA @LOCAL00
    case 0xC164FE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:58 JSL UNKNOWN_C462FF
    case 0xC16500: {
        Instruction step(cpu, 0x22, 0xC462FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    case 0xC16504: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_direction.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC16504.
    case 0xC16506: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16507: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_direction.asm:61 END_C_FUNCTION
    case 0xC16508: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
