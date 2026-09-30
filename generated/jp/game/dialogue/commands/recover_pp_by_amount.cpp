// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/recover_pp_by_amount.asm
bool resume_text_ccs_recover_pp_by_amount(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:3 BEGIN_C_FUNCTION
    case 0xC14F84: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F86: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F87: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F88: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14F89.
    case 0xC14F8B: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F8C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F8D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:10 STX @LOCAL00
    case 0xC14F8E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC14F8B.
    case 0xC14F8F: {
        Instruction step(cpu, 0x0E, 0x0001A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:11 LDA #1
    case 0xC14F90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:11 LDA #1
    // Overlapping static entry reached from 0xC14F90.
    case 0xC14F92: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:12 CLC
    case 0xC14F93: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F94: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F97: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F99: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F9B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F9D: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:15 TXA
    case 0xC14F9F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14FA0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14FA2: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14FA5: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14FA8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14FAA: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:21 LDA #.LOWORD(CC_1E_06)
    case 0xC14FAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x004F84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:21 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC14FAD.
    case 0xC14FAF: {
        Instruction step(cpu, 0x4F, 0xAD1D80u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:22 BRA @UNKNOWN5
    case 0xC14FB0: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:24 LDA CC_ARGUMENT_STORAGE
    case 0xC14FB2: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:24 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14FAF.
    case 0xC14FB3: {
        Instruction step(cpu, 0x6E, 0x00299Au, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    case 0xC14FB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC14FB3.
    case 0xC14FB6: {
        Instruction step(cpu, 0xFF, 0x05F000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC14FB5.
    case 0xC14FB7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14FB8: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:27 AND #$00FF
    case 0xC14FBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC14FBA.
    case 0xC14FBC: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14FBD: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14FBF: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14FC2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:33 LDY #1
    case 0xC14FC4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:33 LDY #1
    // Overlapping static entry reached from 0xC14FC4.
    case 0xC14FC6: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:34 LDX @LOCAL00
    case 0xC14FC7: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:35 JSR RECOVER_PP_AMTPERCENT
    case 0xC14FC9: {
        Instruction step(cpu, 0x20, 0x0090C6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:36 LDA #NULL
    case 0xC14FCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_pp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14FCC.
    case 0xC14FCE: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:38 END_C_FUNCTION
    case 0xC14FCF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:38 END_C_FUNCTION
    case 0xC14FD0: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
