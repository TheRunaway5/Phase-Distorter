// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/25_percent_variance.asm
bool resume_battle_25_percent_variance(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/25_percent_variance.asm:3 BEGIN_C_FUNCTION
    case 0xC26A3C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26A3E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26A3F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26A40: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26A41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC26A41.
    case 0xC26A43: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26A44: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26A45: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:11 STA @VIRTUAL04
    case 0xC26A46: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:11 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC26A43.
    case 0xC26A47: {
        Instruction step(cpu, 0x04, 0x000020u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:12 JSR RAND_LONG
    case 0xC26A48: {
        Instruction step(cpu, 0x20, 0x00692Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:12 JSR RAND_LONG
    // Overlapping static entry reached from 0xC26A47.
    case 0xC26A49: {
        Instruction step(cpu, 0x2E, 0x00C269u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC26A4B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:13 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC26A49.
    case 0xC26A4C: {
        Instruction step(cpu, 0x20, 0x00FF29u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:14 AND #$00FF
    case 0xC26A4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26A4D.
    case 0xC26A4F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:15 TAX
    case 0xC26A50: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:16 STX @LOCAL02
    case 0xC26A51: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:17 JSR RAND_LONG
    case 0xC26A53: {
        Instruction step(cpu, 0x20, 0x00692Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC26A56: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:19 AND #$00FF
    case 0xC26A58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC26A58.
    case 0xC26A5A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:20 STA @LOCAL01
    case 0xC26A5B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:21 LDX @LOCAL02
    case 0xC26A5D: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:22 TXA
    case 0xC26A5F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:23 SEC
    case 0xC26A60: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:24 SBC #$0080
    case 0xC26A61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:24 SBC #$0080
    // Overlapping static entry reached from 0xC26A61.
    case 0xC26A63: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:25 STA @LOCAL00
    case 0xC26A64: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:26 STA @VIRTUAL02
    case 0xC26A66: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:27 LDA #$0000
    case 0xC26A68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:27 LDA #$0000
    // Overlapping static entry reached from 0xC26A68.
    case 0xC26A6A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:28 CLC
    case 0xC26A6B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:29 SBC @VIRTUAL02
    case 0xC26A6C: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26A6E: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26A70: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26A72: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26A74: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:31 LDA @LOCAL00
    case 0xC26A76: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:32 EOR #$FFFF
    case 0xC26A78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:32 EOR #$FFFF
    // Overlapping static entry reached from 0xC26A78.
    case 0xC26A7A: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:33 INC
    case 0xC26A7B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:34 BRA @UNKNOWN3
    case 0xC26A7C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:36 LDA @LOCAL00
    case 0xC26A7E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:38 TAY
    case 0xC26A80: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:39 LDA @LOCAL01
    case 0xC26A81: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:40 SEC
    case 0xC26A83: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:41 SBC #$0080
    case 0xC26A84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:41 SBC #$0080
    // Overlapping static entry reached from 0xC26A84.
    case 0xC26A86: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:42 STA @LOCAL00
    case 0xC26A87: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:43 STA @VIRTUAL02
    case 0xC26A89: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:44 LDA #$0000
    case 0xC26A8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:44 LDA #$0000
    // Overlapping static entry reached from 0xC26A8B.
    case 0xC26A8D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:45 CLC
    case 0xC26A8E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:46 SBC @VIRTUAL02
    case 0xC26A8F: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26A91: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26A93: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26A95: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26A97: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:48 LDA @LOCAL00
    case 0xC26A99: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:49 EOR #$FFFF
    case 0xC26A9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:49 EOR #$FFFF
    // Overlapping static entry reached from 0xC26A9B.
    case 0xC26A9D: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:50 INC
    case 0xC26A9E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:51 BRA @UNKNOWN7
    case 0xC26A9F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:53 LDA @LOCAL00
    case 0xC26AA1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:55 STA @VIRTUAL02
    case 0xC26AA3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:56 TYA
    case 0xC26AA5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:57 CMP @VIRTUAL02
    case 0xC26AA6: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/25_percent_variance.asm:58 BLTEQ @UNKNOWN8
    case 0xC26AA8: {
        Instruction step(cpu, 0x90, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/25_percent_variance.asm:58 BLTEQ @UNKNOWN8
    case 0xC26AAA: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:59 LDX @LOCAL01
    case 0xC26AAC: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:60 LDY @VIRTUAL02
    case 0xC26AAE: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:62 STX @VIRTUAL02
    case 0xC26AB0: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:63 LDA #$0080
    case 0xC26AB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:63 LDA #$0080
    // Overlapping static entry reached from 0xC26AB2.
    case 0xC26AB4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:64 CLC
    case 0xC26AB5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:65 SBC @VIRTUAL02
    case 0xC26AB6: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26AB8: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26ABA: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26ABC: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26ABE: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:67 LDX @VIRTUAL04
    case 0xC26AC0: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:68 TYA
    case 0xC26AC2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC26AC3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:70 JSR TRUNCATE_16_TO_8
    case 0xC26AC5: {
        Instruction step(cpu, 0x20, 0x006937u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:71 LSR
    case 0xC26AC8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:72 STA @VIRTUAL02
    case 0xC26AC9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:73 LDA @VIRTUAL04
    case 0xC26ACB: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:74 SEC
    case 0xC26ACD: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:75 SBC @VIRTUAL02
    case 0xC26ACE: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:76 STA @VIRTUAL04
    case 0xC26AD0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:77 BRA @UNKNOWN14
    case 0xC26AD2: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:80 TXA
    case 0xC26AD4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:81 CLC
    case 0xC26AD5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:82 SBC #$0080
    case 0xC26AD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:82 SBC #$0080
    // Overlapping static entry reached from 0xC26AD6.
    case 0xC26AD8: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26AD9: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26ADB: {
        Instruction step(cpu, 0x10, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26ADD: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26ADF: {
        Instruction step(cpu, 0x30, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:84 LDX @VIRTUAL04
    case 0xC26AE1: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:85 TYA
    case 0xC26AE3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC26AE4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:87 JSR TRUNCATE_16_TO_8
    case 0xC26AE6: {
        Instruction step(cpu, 0x20, 0x006937u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:88 LSR
    case 0xC26AE9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:89 STA @VIRTUAL02
    case 0xC26AEA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:90 LDA @VIRTUAL04
    case 0xC26AEC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:91 CLC
    case 0xC26AEE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:92 ADC @VIRTUAL02
    case 0xC26AEF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:93 STA @VIRTUAL04
    case 0xC26AF1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:95 LDA @VIRTUAL04
    case 0xC26AF3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/25_percent_variance.asm:96 END_C_FUNCTION
    case 0xC26AF5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/25_percent_variance.asm:96 END_C_FUNCTION
    case 0xC26AF6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
