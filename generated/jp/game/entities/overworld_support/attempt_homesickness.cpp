// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/attempt_homesickness.asm
bool resume_overworld_attempt_homesickness(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/attempt_homesickness.asm:3 BEGIN_C_FUNCTION
    case 0xC1BCB3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCB5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCB6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BCB7.
    case 0xC1BCB9: {
        Instruction step(cpu, 0xFF, 0x8CAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BCBA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC1BCBB: {
        Instruction step(cpu, 0xAD, 0x009C8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC1BCB9.
    case 0xC1BCBD: {
        Instruction step(cpu, 0x9C, 0x00FF29u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    case 0xC1BCBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC1BCBE.
    case 0xC1BCC0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    case 0xC1BCC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1BCC1.
    case 0xC1BCC3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:11 BEQ @FAILED
    case 0xC1BCC4: {
        Instruction step(cpu, 0xF0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    case 0xC1BCC6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    // Overlapping static entry reached from 0xC1BCC6.
    case 0xC1BCC8: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    case 0xC1BCC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    // Overlapping static entry reached from 0xC1BCC9.
    case 0xC1BCCB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:14 STA @LOCAL00
    case 0xC1BCCC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:15 BRA @UNKNOWN5
    case 0xC1BCCE: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:17 LDA @LOCAL00
    case 0xC1BCD0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:18 STA @VIRTUAL02
    case 0xC1BCD2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:19 LDA PARTY_CHARACTERS+char_struct::level
    case 0xC1BCD4: {
        Instruction step(cpu, 0xAD, 0x009C83u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    case 0xC1BCD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1BCD7.
    case 0xC1BCD9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:21 CLC
    case 0xC1BCDA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:22 SBC @VIRTUAL02
    case 0xC1BCDB: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCDD: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCDF: {
        Instruction step(cpu, 0x10, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCE1: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BCE3: {
        Instruction step(cpu, 0x30, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:24 LDA f:HOMESICKNESS_PROBABILITY,X
    case 0xC1BCE5: {
        Instruction step(cpu, 0xBF, 0xC439DCu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    case 0xC1BCE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC1BCE9.
    case 0xC1BCEB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:26 BEQ @UNKNOWN3
    case 0xC1BCEC: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    case 0xC1BCEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1BCEE.
    case 0xC1BCF0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:28 JSL RAND_MOD
    case 0xC1BCF1: {
        Instruction step(cpu, 0x22, 0xC43CC9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    case 0xC1BCF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    // Overlapping static entry reached from 0xC1BCF5.
    case 0xC1BCF7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:30 BNE @UNKNOWN3
    case 0xC1BCF8: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    case 0xC1BCFA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    // Overlapping static entry reached from 0xC1BCFA.
    case 0xC1BCFC: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    case 0xC1BCFD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    // Overlapping static entry reached from 0xC1BCFD.
    case 0xC1BCFF: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    case 0xC1BD00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC1BD00.
    case 0xC1BD02: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:34 JSL INFLICT_STATUS_NONBATTLE
    case 0xC1BD03: {
        Instruction step(cpu, 0x22, 0xC436FCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:35 BRA @RETURN
    case 0xC1BD07: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    case 0xC1BD09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    // Overlapping static entry reached from 0xC1BD09.
    case 0xC1BD0B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:38 BRA @RETURN
    case 0xC1BD0C: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:40 INX
    case 0xC1BD0E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:41 LDA @LOCAL00
    case 0xC1BD0F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:42 CLC
    case 0xC1BD11: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    case 0xC1BD12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    // Overlapping static entry reached from 0xC1BD12.
    case 0xC1BD14: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:44 STA @LOCAL00
    case 0xC1BD15: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:46 STX @VIRTUAL02
    case 0xC1BD17: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    case 0xC1BD19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    // Overlapping static entry reached from 0xC1BD19.
    case 0xC1BD1B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:48 CLC
    case 0xC1BD1C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:49 SBC @VIRTUAL02
    case 0xC1BD1D: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD1F: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD21: {
        Instruction step(cpu, 0x10, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD23: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BD25: {
        Instruction step(cpu, 0x30, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    case 0xC1BD27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1BD27.
    case 0xC1BD29: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BD2A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BD2B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
