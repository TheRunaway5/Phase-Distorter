// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/attempt_homesickness.asm
bool resume_overworld_attempt_homesickness(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/attempt_homesickness.asm:3 BEGIN_C_FUNCTION
    case 0xC1BE4D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE4F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE50: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BE51.
    case 0xC1BE53: {
        Instruction step(cpu, 0xFF, 0xDCAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/attempt_homesickness.asm:7 END_STACK_VARS
    case 0xC1BE54: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC1BE55: {
        Instruction step(cpu, 0xAD, 0x0099DCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:8 LDA PARTY_CHARACTERS+char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC1BE53.
    case 0xC1BE57: {
        Instruction step(cpu, 0x99, 0x00FF29u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    case 0xC1BE58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC1BE58.
    case 0xC1BE5A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    case 0xC1BE5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:10 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1BE5B.
    case 0xC1BE5D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:11 BEQ @FAILED
    case 0xC1BE5E: {
        Instruction step(cpu, 0xF0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    case 0xC1BE60: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:12 LDX #0
    // Overlapping static entry reached from 0xC1BE60.
    case 0xC1BE62: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    case 0xC1BE63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:13 LDA #15
    // Overlapping static entry reached from 0xC1BE63.
    case 0xC1BE65: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:14 STA @LOCAL00
    case 0xC1BE66: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:15 BRA @UNKNOWN5
    case 0xC1BE68: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:17 LDA @LOCAL00
    case 0xC1BE6A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:18 STA @VIRTUAL02
    case 0xC1BE6C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:19 LDA PARTY_CHARACTERS+char_struct::level
    case 0xC1BE6E: {
        Instruction step(cpu, 0xAD, 0x0099D3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    case 0xC1BE71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1BE71.
    case 0xC1BE73: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:21 CLC
    case 0xC1BE74: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:22 SBC @VIRTUAL02
    case 0xC1BE75: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE77: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE79: {
        Instruction step(cpu, 0x10, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE7B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:23 BRANCHGTS @UNKNOWN4
    case 0xC1BE7D: {
        Instruction step(cpu, 0x30, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:24 LDA f:HOMESICKNESS_PROBABILITY,X
    case 0xC1BE7F: {
        Instruction step(cpu, 0xBF, 0xC45C8Au, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    case 0xC1BE83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC1BE83.
    case 0xC1BE85: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:26 BEQ @UNKNOWN3
    case 0xC1BE86: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    case 0xC1BE88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1BE88.
    case 0xC1BE8A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:28 JSL RAND_MOD
    case 0xC1BE8B: {
        Instruction step(cpu, 0x22, 0xC45F7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    case 0xC1BE8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:29 CMP #0
    // Overlapping static entry reached from 0xC1BE8F.
    case 0xC1BE91: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:30 BNE @UNKNOWN3
    case 0xC1BE92: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    case 0xC1BE94: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:31 LDY #STATUS_5::HOMESICK + 1
    // Overlapping static entry reached from 0xC1BE94.
    case 0xC1BE96: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    case 0xC1BE97: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:32 LDX #STATUS_GROUP::HOMESICKNESS + 1
    // Overlapping static entry reached from 0xC1BE97.
    case 0xC1BE99: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    case 0xC1BE9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:33 LDA #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC1BE9A.
    case 0xC1BE9C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:34 JSL INFLICT_STATUS_NONBATTLE
    case 0xC1BE9D: {
        Instruction step(cpu, 0x22, 0xC458FEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:35 BRA @RETURN
    case 0xC1BEA1: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    case 0xC1BEA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:37 LDA #0
    // Overlapping static entry reached from 0xC1BEA3.
    case 0xC1BEA5: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:38 BRA @RETURN
    case 0xC1BEA6: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:40 INX
    case 0xC1BEA8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:41 LDA @LOCAL00
    case 0xC1BEA9: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:42 CLC
    case 0xC1BEAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    case 0xC1BEAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    // Overlapping static entry reached from 0xC171A1.
    case 0xC1BEAD: {
        Instruction step(cpu, 0x0F, 0x0E8500u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:43 ADC #15
    // Overlapping static entry reached from 0xC1BEAC.
    case 0xC1BEAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:44 STA @LOCAL00
    case 0xC1BEAF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:46 STX @VIRTUAL02
    case 0xC1BEB1: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    case 0xC1BEB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:47 LDA #100 / 15
    // Overlapping static entry reached from 0xC1BEB3.
    case 0xC1BEB5: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:48 CLC
    case 0xC1BEB6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:49 SBC @VIRTUAL02
    case 0xC1BEB7: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEB9: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEBB: {
        Instruction step(cpu, 0x10, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEBD: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/attempt_homesickness.asm:50 BRANCHGTS @UNKNOWN0
    case 0xC1BEBF: {
        Instruction step(cpu, 0x30, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    case 0xC1BEC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/attempt_homesickness.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1BEC1.
    case 0xC1BEC3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BEC4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/attempt_homesickness.asm:54 END_C_FUNCTION
    case 0xC1BEC5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
