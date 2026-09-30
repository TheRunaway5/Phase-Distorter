// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/25_percent_variance.asm
bool resume_battle_25_percent_variance(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/25_percent_variance.asm:3 BEGIN_C_FUNCTION
    case 0xC26AFD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26AFF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26B00: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26B01: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26B02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC26B02.
    case 0xC26B04: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26B05: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/25_percent_variance.asm:10 END_STACK_VARS
    case 0xC26B06: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:11 STA @VIRTUAL04
    case 0xC26B07: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:11 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC26B04.
    case 0xC26B08: {
        Instruction step(cpu, 0x04, 0x000020u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:12 JSR RAND_LONG
    case 0xC26B09: {
        Instruction step(cpu, 0x20, 0x0069EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:12 JSR RAND_LONG
    // Overlapping static entry reached from 0xC26B08.
    case 0xC26B0A: {
        Instruction step(cpu, 0xEF, 0x20C269u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC26B0C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:14 AND #$00FF
    case 0xC26B0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26B0E.
    case 0xC26B10: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:15 TAX
    case 0xC26B11: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:16 STX @LOCAL02
    case 0xC26B12: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:17 JSR RAND_LONG
    case 0xC26B14: {
        Instruction step(cpu, 0x20, 0x0069EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC26B17: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:19 AND #$00FF
    case 0xC26B19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC26B19.
    case 0xC26B1B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:20 STA @LOCAL01
    case 0xC26B1C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:21 LDX @LOCAL02
    case 0xC26B1E: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:22 TXA
    case 0xC26B20: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:23 SEC
    case 0xC26B21: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:24 SBC #$0080
    case 0xC26B22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:24 SBC #$0080
    // Overlapping static entry reached from 0xC26B22.
    case 0xC26B24: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:25 STA @LOCAL00
    case 0xC26B25: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:26 STA @VIRTUAL02
    case 0xC26B27: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:27 LDA #$0000
    case 0xC26B29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:27 LDA #$0000
    // Overlapping static entry reached from 0xC26B29.
    case 0xC26B2B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:28 CLC
    case 0xC26B2C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:29 SBC @VIRTUAL02
    case 0xC26B2D: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26B2F: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26B31: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26B33: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC26B35: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:31 LDA @LOCAL00
    case 0xC26B37: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:32 EOR #$FFFF
    case 0xC26B39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:32 EOR #$FFFF
    // Overlapping static entry reached from 0xC26B39.
    case 0xC26B3B: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:33 INC
    case 0xC26B3C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:34 BRA @UNKNOWN3
    case 0xC26B3D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:36 LDA @LOCAL00
    case 0xC26B3F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:38 TAY
    case 0xC26B41: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:39 LDA @LOCAL01
    case 0xC26B42: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:40 SEC
    case 0xC26B44: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:41 SBC #$0080
    case 0xC26B45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:41 SBC #$0080
    // Overlapping static entry reached from 0xC26B45.
    case 0xC26B47: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:42 STA @LOCAL00
    case 0xC26B48: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:43 STA @VIRTUAL02
    case 0xC26B4A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:44 LDA #$0000
    case 0xC26B4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:44 LDA #$0000
    // Overlapping static entry reached from 0xC26B4C.
    case 0xC26B4E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:45 CLC
    case 0xC26B4F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:46 SBC @VIRTUAL02
    case 0xC26B50: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26B52: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26B54: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26B56: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:47 BRANCHLTEQS @UNKNOWN6
    case 0xC26B58: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:48 LDA @LOCAL00
    case 0xC26B5A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:49 EOR #$FFFF
    case 0xC26B5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:49 EOR #$FFFF
    // Overlapping static entry reached from 0xC26B5C.
    case 0xC26B5E: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:50 INC
    case 0xC26B5F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:51 BRA @UNKNOWN7
    case 0xC26B60: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:53 LDA @LOCAL00
    case 0xC26B62: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:55 STA @VIRTUAL02
    case 0xC26B64: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:56 TYA
    case 0xC26B66: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:57 CMP @VIRTUAL02
    case 0xC26B67: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/25_percent_variance.asm:58 BLTEQ @UNKNOWN8
    case 0xC26B69: {
        Instruction step(cpu, 0x90, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/25_percent_variance.asm:58 BLTEQ @UNKNOWN8
    case 0xC26B6B: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:59 LDX @LOCAL01
    case 0xC26B6D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:60 LDY @VIRTUAL02
    case 0xC26B6F: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:62 STX @VIRTUAL02
    case 0xC26B71: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:63 LDA #$0080
    case 0xC26B73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:63 LDA #$0080
    // Overlapping static entry reached from 0xC26B73.
    case 0xC26B75: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:64 CLC
    case 0xC26B76: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:65 SBC @VIRTUAL02
    case 0xC26B77: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26B79: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26B7B: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26B7D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:66 BRANCHLTEQS @UNKNOWN11
    case 0xC26B7F: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:67 LDX @VIRTUAL04
    case 0xC26B81: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:68 TYA
    case 0xC26B83: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC26B84: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:70 JSR TRUNCATE_16_TO_8
    case 0xC26B86: {
        Instruction step(cpu, 0x20, 0x0069F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:71 LSR
    case 0xC26B89: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:72 STA @VIRTUAL02
    case 0xC26B8A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:73 LDA @VIRTUAL04
    case 0xC26B8C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:74 SEC
    case 0xC26B8E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:75 SBC @VIRTUAL02
    case 0xC26B8F: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:76 STA @VIRTUAL04
    case 0xC26B91: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:77 BRA @UNKNOWN14
    case 0xC26B93: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:80 TXA
    case 0xC26B95: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:81 CLC
    case 0xC26B96: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:82 SBC #$0080
    case 0xC26B97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:82 SBC #$0080
    // Overlapping static entry reached from 0xC26B97.
    case 0xC26B99: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26B9A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26B9C: {
        Instruction step(cpu, 0x10, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26B9E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/25_percent_variance.asm:83 BRANCHLTEQS @UNKNOWN14
    case 0xC26BA0: {
        Instruction step(cpu, 0x30, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:84 LDX @VIRTUAL04
    case 0xC26BA2: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:85 TYA
    case 0xC26BA4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC26BA5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:87 JSR TRUNCATE_16_TO_8
    case 0xC26BA7: {
        Instruction step(cpu, 0x20, 0x0069F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:88 LSR
    case 0xC26BAA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:89 STA @VIRTUAL02
    case 0xC26BAB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:90 LDA @VIRTUAL04
    case 0xC26BAD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:91 CLC
    case 0xC26BAF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:92 ADC @VIRTUAL02
    case 0xC26BB0: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:93 STA @VIRTUAL04
    case 0xC26BB2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/25_percent_variance.asm:95 LDA @VIRTUAL04
    case 0xC26BB4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/25_percent_variance.asm:96 END_C_FUNCTION
    case 0xC26BB6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/25_percent_variance.asm:96 END_C_FUNCTION
    case 0xC26BB7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
