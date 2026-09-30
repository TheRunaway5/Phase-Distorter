// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/increase_character_luck.asm
bool resume_text_ccs_increase_character_luck(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_luck.asm:3 BEGIN_C_FUNCTION
    case 0xC17927: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC17929: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1792C.
    case 0xC1792E: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC17930: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:10 TXA
    case 0xC17931: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:11 STA @LOCAL00
    case 0xC17932: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:12 LDA #1
    case 0xC17934: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17934.
    case 0xC17936: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:13 CLC
    case 0xC17937: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17938: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1793B: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1793D: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1793F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17941: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:16 LDA @LOCAL00
    case 0xC17943: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17945: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17947: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC1794A: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1794D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1794F: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:22 LDA #.LOWORD(CC_1E_0E)
    case 0xC17952: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x007927u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:22 LDA #.LOWORD(CC_1E_0E)
    // Overlapping static entry reached from 0xC17952.
    case 0xC17954: {
        Instruction step(cpu, 0x79, 0x002F80u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:23 BRA @UNKNOWN3
    case 0xC17955: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17957: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:26 AND #$00FF
    case 0xC1795A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1795A.
    case 0xC1795C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:27 TAX
    case 0xC1795D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:28 DEC
    case 0xC1795E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1795F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1795F.
    case 0xC17961: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:30 JSL MULT168
    case 0xC17962: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:31 CLC
    case 0xC17966: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    case 0xC17967: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D9u : 0x009CD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    // Overlapping static entry reached from 0xC17967.
    case 0xC17969: {
        Instruction step(cpu, 0x9C, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:33 TAY
    case 0xC1796A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:34 LDA @LOCAL00
    case 0xC1796B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:34 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17969.
    case 0xC1796C: {
        Instruction step(cpu, 0x0E, 0x0020E2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1796D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:36 STA @VIRTUAL00
    case 0xC1796F: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:37 LDA __BSS_START__,Y
    case 0xC17971: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:38 CLC
    case 0xC17974: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:39 ADC @VIRTUAL00
    case 0xC17975: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:40 STA __BSS_START__,Y
    case 0xC17977: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1797A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:42 TXA
    case 0xC1797C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:43 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC1797D: {
        Instruction step(cpu, 0x22, 0xC21AFAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC17981: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:45 LDA #NULL
    case 0xC17983: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_luck.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC17983.
    case 0xC17985: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_luck.asm:47 END_C_FUNCTION
    case 0xC17986: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_luck.asm:47 END_C_FUNCTION
    case 0xC17987: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
