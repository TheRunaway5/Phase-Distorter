// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/deplete_pp_by_amount.asm
bool resume_text_ccs_deplete_pp_by_amount(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_pp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14BD1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14BD6.
    case 0xC14BD8: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BDA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14BDB: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14BD8.
    case 0xC14BDC: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:10 LDA #$0001
    case 0xC14BDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14BDD.
    case 0xC14BDF: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:11 CLC
    case 0xC14BE0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BE1: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BE4: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BE6: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BE8: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BEA: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14BEC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14BEE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BF0: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14BF3: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14BF6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BF8: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:20 LDA #.LOWORD(CC_1E_07)
    case 0xC14BFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x004BD1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:20 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC14BFB.
    case 0xC14BFD: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14BFE: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14C00: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:24 AND #$00FF
    case 0xC14C03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14C03.
    case 0xC14C05: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:25 TAX
    case 0xC14C06: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14C07: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:27 TXA
    case 0xC14C09: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14C0A: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14C0C: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14C0F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:33 LDY #$0001
    case 0xC14C11: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC14C11.
    case 0xC14C13: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC14C14: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:35 JSR REDUCE_PP_AMTPERCENT
    case 0xC14C16: {
        Instruction step(cpu, 0x20, 0x008FBAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:36 LDA #NULL
    case 0xC14C19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14C19.
    case 0xC14C1B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:38 PLD
    case 0xC14C1C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/deplete_pp_by_amount.asm:39 RTS
    case 0xC14C1D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
