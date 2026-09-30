// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/deplete_pp_by_percent.asm
bool resume_text_ccs_deplete_pp_by_percent(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_pp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14F37: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F39: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14F3C.
    case 0xC14F3E: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F40: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14F41: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14F3E.
    case 0xC14F42: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:10 LDA #$0001
    case 0xC14F43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14F43.
    case 0xC14F45: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:11 CLC
    case 0xC14F46: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F47: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F4A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F4C: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F4E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F50: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14F52: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14F54: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F56: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14F59: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14F5C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F5E: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_05)
    case 0xC14F61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000037u : 0x004F37u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_05)
    // Overlapping static entry reached from 0xC14F61.
    case 0xC14F63: {
        Instruction step(cpu, 0x4F, 0xAD1C80u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14F64: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14F66: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14F63.
    case 0xC14F67: {
        Instruction step(cpu, 0x6E, 0x00299Au, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    case 0xC14F69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14F67.
    case 0xC14F6A: {
        Instruction step(cpu, 0xFF, 0xF0AA00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14F69.
    case 0xC14F6B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:25 TAX
    case 0xC14F6C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14F6D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:26 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC14F6A.
    case 0xC14F6E: {
        Instruction step(cpu, 0x03, 0x00008Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:27 TXA
    case 0xC14F6F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14F70: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14F72: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14F75: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:33 LDY #$0000
    case 0xC14F77: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14F77.
    case 0xC14F79: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14F7A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:35 JSR REDUCE_PP_AMTPERCENT
    case 0xC14F7C: {
        Instruction step(cpu, 0x20, 0x00906Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:36 LDA #NULL
    case 0xC14F7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14F7F.
    case 0xC14F81: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:38 PLD
    case 0xC14F82: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_percent.asm:39 RTS
    case 0xC14F83: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
