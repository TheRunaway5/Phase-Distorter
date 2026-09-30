// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/recover_hp_by_percent.asm
bool resume_text_ccs_recover_hp_by_percent(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_hp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC149B6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149B8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149B9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC149BB.
    case 0xC149BD: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC149C0: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC149BD.
    case 0xC149C1: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:10 LDA #$0001
    case 0xC149C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC149C2.
    case 0xC149C4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:11 CLC
    case 0xC149C5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC149C6: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149C9: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149CB: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149CD: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149CF: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC149D1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC149D3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC149D5: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC149D8: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC149DB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC149DD: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_00)
    case 0xC149E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B6u : 0x0049B6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_00)
    // Overlapping static entry reached from 0xC149E0.
    case 0xC149E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x001C80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC149E3: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:21 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC149E2.
    case 0xC149E4: {
        Instruction step(cpu, 0x1C, 0x00BAADu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC149E5: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC149E4.
    case 0xC149E7: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    case 0xC149E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC149E7.
    case 0xC149E9: {
        Instruction step(cpu, 0xFF, 0xF0AA00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC149E8.
    case 0xC149EA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:25 TAX
    case 0xC149EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC149EC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:26 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC149E9.
    case 0xC149ED: {
        Instruction step(cpu, 0x03, 0x00008Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:27 TXA
    case 0xC149EE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC149EF: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC149F1: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC149F4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:33 LDY #$0000
    case 0xC149F6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC149F6.
    case 0xC149F8: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC149F9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:35 JSR RECOVER_HP_AMTPERCENT
    case 0xC149FB: {
        Instruction step(cpu, 0x20, 0x008F64u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:36 LDA #NULL
    case 0xC149FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC149FE.
    case 0xC14A00: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:38 PLD
    case 0xC14A01: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/recover_hp_by_percent.asm:39 RTS
    case 0xC14A02: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
