// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/increase_character_vitality.asm
bool resume_text_ccs_increase_character_vitality(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_vitality.asm:3 BEGIN_C_FUNCTION
    case 0xC17646: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC17648: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC17649: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1764B.
    case 0xC1764D: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:10 TXA
    case 0xC17650: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:11 STA @LOCAL00
    case 0xC17651: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:12 LDA #1
    case 0xC17653: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17653.
    case 0xC17655: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:13 CLC
    case 0xC17656: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17657: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1765A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1765C: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1765E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17660: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:16 LDA @LOCAL00
    case 0xC17662: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17664: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17666: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17669: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1766C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1766E: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:22 LDA #.LOWORD(CC_1E_0D)
    case 0xC17671: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000046u : 0x007646u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:22 LDA #.LOWORD(CC_1E_0D)
    // Overlapping static entry reached from 0xC17671.
    case 0xC17673: {
        Instruction step(cpu, 0x76, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:23 BRA @UNKNOWN3
    case 0xC17674: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC17673.
    case 0xC17675: {
        Instruction step(cpu, 0x2F, 0x97BAADu, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17676: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:26 AND #$00FF
    case 0xC17679: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC17679.
    case 0xC1767B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:27 TAX
    case 0xC1767C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:28 DEC
    case 0xC1767D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1767E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1767E.
    case 0xC17680: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:30 JSL MULT168
    case 0xC17681: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:31 CLC
    case 0xC17685: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    case 0xC17686: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000027u : 0x009A27u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    // Overlapping static entry reached from 0xC17686.
    case 0xC17688: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:33 TAY
    case 0xC17689: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:34 LDA @LOCAL00
    case 0xC1768A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1768C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:36 STA @VIRTUAL00
    case 0xC1768E: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:37 LDA __BSS_START__,Y
    case 0xC17690: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:38 CLC
    case 0xC17693: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:39 ADC @VIRTUAL00
    case 0xC17694: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:40 STA __BSS_START__,Y
    case 0xC17696: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17699: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:42 TXA
    case 0xC1769B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:43 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC1769C: {
        Instruction step(cpu, 0x22, 0xC21D65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC176A0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:45 LDA #NULL
    case 0xC176A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/increase_character_vitality.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC176A2.
    case 0xC176A4: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:47 END_C_FUNCTION
    case 0xC176A5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_vitality.asm:47 END_C_FUNCTION
    case 0xC176A6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
