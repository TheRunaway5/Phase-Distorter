// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/recover_hp_by_amount.asm
bool resume_text_ccs_recover_hp_by_amount(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_hp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14E50: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E52: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E53: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E54: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14E55.
    case 0xC14E57: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E58: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E59: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14E5A: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14E57.
    case 0xC14E5B: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:10 LDA #$0001
    case 0xC14E5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14E5C.
    case 0xC14E5E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:11 CLC
    case 0xC14E5F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E60: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E63: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E65: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E67: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E69: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14E6B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E6D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E6F: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14E72: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14E75: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E77: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_02)
    case 0xC14E7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x004E50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_02)
    // Overlapping static entry reached from 0xC14E7A.
    case 0xC14E7C: {
        Instruction step(cpu, 0x4E, 0x001C80u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14E7D: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14E7F: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:24 AND #$00FF
    case 0xC14E82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14E82.
    case 0xC14E84: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:25 TAX
    case 0xC14E85: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14E86: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:27 TXA
    case 0xC14E88: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14E89: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14E8B: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14E8E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:33 LDY #$0001
    case 0xC14E90: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC14E90.
    case 0xC14E92: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC14E93: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:35 JSR RECOVER_HP_AMTPERCENT
    case 0xC14E95: {
        Instruction step(cpu, 0x20, 0x009014u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:36 LDA #NULL
    case 0xC14E98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14E98.
    case 0xC14E9A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:38 PLD
    case 0xC14E9B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_amount.asm:39 RTS
    case 0xC14E9C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
