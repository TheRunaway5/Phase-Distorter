// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/50_percent_variance.asm
bool resume_battle_50_percent_variance(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/50_percent_variance.asm:3 BEGIN_C_FUNCTION
    case 0xC26983: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/50_percent_variance.asm:10 END_STACK_VARS
    case 0xC26985: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/50_percent_variance.asm:10 END_STACK_VARS
    case 0xC26986: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/50_percent_variance.asm:10 END_STACK_VARS
    case 0xC26987: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/50_percent_variance.asm:10 END_STACK_VARS
    case 0xC26988: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/50_percent_variance.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC26988.
    case 0xC2698A: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/50_percent_variance.asm:10 END_STACK_VARS
    case 0xC2698B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/50_percent_variance.asm:10 END_STACK_VARS
    case 0xC2698C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:11 STA @VIRTUAL04
    case 0xC2698D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:11 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2698A.
    case 0xC2698E: {
        Instruction step(cpu, 0x04, 0x000020u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:12 JSR RAND_LONG
    case 0xC2698F: {
        Instruction step(cpu, 0x20, 0x00692Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:12 JSR RAND_LONG
    // Overlapping static entry reached from 0xC2698E.
    case 0xC26990: {
        Instruction step(cpu, 0x2E, 0x00C269u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC26992: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:13 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC26990.
    case 0xC26993: {
        Instruction step(cpu, 0x20, 0x00FF29u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:14 AND #$00FF
    case 0xC26994: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26994.
    case 0xC26996: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:15 TAX
    case 0xC26997: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:16 STX @LOCAL02
    case 0xC26998: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:17 JSR RAND_LONG
    case 0xC2699A: {
        Instruction step(cpu, 0x20, 0x00692Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC2699D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:19 AND #$00FF
    case 0xC2699F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2699F.
    case 0xC269A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:20 STA @LOCAL01
    case 0xC269A2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:21 LDX @LOCAL02
    case 0xC269A4: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:22 TXA
    case 0xC269A6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:23 SEC
    case 0xC269A7: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:24 SBC #$0080
    case 0xC269A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:24 SBC #$0080
    // Overlapping static entry reached from 0xC269A8.
    case 0xC269AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:25 STA @LOCAL00
    case 0xC269AB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:26 STA @VIRTUAL02
    case 0xC269AD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:27 LDA #$0000
    case 0xC269AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:27 LDA #$0000
    // Overlapping static entry reached from 0xC269AF.
    case 0xC269B1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:28 CLC
    case 0xC269B2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:29 SBC @VIRTUAL02
    case 0xC269B3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/50_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC269B5: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/50_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC269B7: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/50_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC269B9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/50_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC269BB: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:31 LDA @LOCAL00
    case 0xC269BD: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:32 EOR #$FFFF
    case 0xC269BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:32 EOR #$FFFF
    // Overlapping static entry reached from 0xC269BF.
    case 0xC269C1: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:33 INC
    case 0xC269C2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:34 BRA @UNKNOWN3
    case 0xC269C3: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:36 LDA @LOCAL00
    case 0xC269C5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:38 TAY
    case 0xC269C7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:39 LDA @LOCAL01
    case 0xC269C8: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:40 SEC
    case 0xC269CA: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:41 SBC #$0080
    case 0xC269CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:41 SBC #$0080
    // Overlapping static entry reached from 0xC269CB.
    case 0xC269CD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:42 STA @LOCAL00
    case 0xC269CE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:43 STA @VIRTUAL02
    case 0xC269D0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:44 LDA #$0000
    case 0xC269D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:44 LDA #$0000
    // Overlapping static entry reached from 0xC269D2.
    case 0xC269D4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:45 CLC
    case 0xC269D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:46 SBC @VIRTUAL02
    case 0xC269D6: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/50_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC269D8: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/50_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC269DA: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/50_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC269DC: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/50_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC269DE: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:48 LDA @LOCAL00
    case 0xC269E0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:49 EOR #$FFFF
    case 0xC269E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:49 EOR #$FFFF
    // Overlapping static entry reached from 0xC269E2.
    case 0xC269E4: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:50 INC
    case 0xC269E5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:51 BRA @UNKNOWN7
    case 0xC269E6: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:53 LDA @LOCAL00
    case 0xC269E8: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:55 STA @VIRTUAL02
    case 0xC269EA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:56 TYA
    case 0xC269EC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:57 CMP @VIRTUAL02
    case 0xC269ED: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/50_percent_variance.asm:58 BLTEQ @UNKNOWN8
    case 0xC269EF: {
        Instruction step(cpu, 0x90, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/50_percent_variance.asm:58 BLTEQ @UNKNOWN8
    case 0xC269F1: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:59 LDX @LOCAL01
    case 0xC269F3: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:60 LDY @VIRTUAL02
    case 0xC269F5: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:62 STX @VIRTUAL02
    case 0xC269F7: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:63 LDA #$0080
    case 0xC269F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:63 LDA #$0080
    // Overlapping static entry reached from 0xC269F9.
    case 0xC269FB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:64 CLC
    case 0xC269FC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:65 SBC @VIRTUAL02
    case 0xC269FD: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/50_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC269FF: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/50_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26A01: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/50_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26A03: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/50_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26A05: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:67 LDX @VIRTUAL04
    case 0xC26A07: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:68 TYA
    case 0xC26A09: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC26A0A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:70 JSR TRUNCATE_16_TO_8
    case 0xC26A0C: {
        Instruction step(cpu, 0x20, 0x006937u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:71 STA @VIRTUAL02
    case 0xC26A0F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:72 LDA @VIRTUAL04
    case 0xC26A11: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:73 SEC
    case 0xC26A13: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:74 SBC @VIRTUAL02
    case 0xC26A14: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:75 STA @VIRTUAL04
    case 0xC26A16: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:76 BRA @UNKNOWN14
    case 0xC26A18: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:79 TXA
    case 0xC26A1A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:80 CLC
    case 0xC26A1B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:81 SBC #$0080
    case 0xC26A1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:81 SBC #$0080
    // Overlapping static entry reached from 0xC26A1C.
    case 0xC26A1E: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/50_percent_variance.asm:82 BRANCHLTEQS @UNKNOWN14
    case 0xC26A1F: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/50_percent_variance.asm:82 BRANCHLTEQS @UNKNOWN14
    case 0xC26A21: {
        Instruction step(cpu, 0x10, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/50_percent_variance.asm:82 BRANCHLTEQS @UNKNOWN14
    case 0xC26A23: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/50_percent_variance.asm:82 BRANCHLTEQS @UNKNOWN14
    case 0xC26A25: {
        Instruction step(cpu, 0x30, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:83 LDX @VIRTUAL04
    case 0xC26A27: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:84 TYA
    case 0xC26A29: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC26A2A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:86 JSR TRUNCATE_16_TO_8
    case 0xC26A2C: {
        Instruction step(cpu, 0x20, 0x006937u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:87 STA @VIRTUAL02
    case 0xC26A2F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:88 LDA @VIRTUAL04
    case 0xC26A31: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:89 CLC
    case 0xC26A33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:90 ADC @VIRTUAL02
    case 0xC26A34: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:91 STA @VIRTUAL04
    case 0xC26A36: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/50_percent_variance.asm:93 LDA @VIRTUAL04
    case 0xC26A38: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/50_percent_variance.asm:94 END_C_FUNCTION
    case 0xC26A3A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/50_percent_variance.asm:94 END_C_FUNCTION
    case 0xC26A3B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
