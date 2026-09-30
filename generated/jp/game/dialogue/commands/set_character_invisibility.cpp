// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/set_character_invisibility.asm
bool resume_text_ccs_set_character_invisibility(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_invisibility.asm:3 BEGIN_C_FUNCTION
    case 0xC16F45: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F47: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F48: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F49: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F4A.
    case 0xC16F4C: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F4D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F4E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    case 0xC16F4F: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16F4C.
    case 0xC16F50: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    case 0xC16F51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16F50.
    case 0xC16F52: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16F51.
    case 0xC16F53: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:13 CLC
    case 0xC16F54: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F55: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F58: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F5A: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F5C: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F5E: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:16 TXA
    case 0xC16F60: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16F61: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F63: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16F66: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16F69: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F6B: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    case 0xC16F6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000045u : 0x006F45u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC16F6E.
    case 0xC16F70: {
        Instruction step(cpu, 0x6F, 0xAD1E80u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:23 BRA @UNKNOWN3
    case 0xC16F71: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16F73: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC16F70.
    case 0xC16F74: {
        Instruction step(cpu, 0x6E, 0x00299Au, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    case 0xC16F76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16F74.
    case 0xC16F77: {
        Instruction step(cpu, 0xFF, 0x84A800u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16F76.
    case 0xC16F78: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:27 TAY
    case 0xC16F79: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:28 STY @LOCAL00
    case 0xC16F7A: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:28 STY @LOCAL00
    // Overlapping static entry reached from 0xC16F77.
    case 0xC16F7B: {
        Instruction step(cpu, 0x0E, 0x002298u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:29 TYA
    case 0xC16F7C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    case 0xC16F7D: {
        Instruction step(cpu, 0x22, 0xC43DDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    // Overlapping static entry reached from 0xC16F7B.
    case 0xC16F7E: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    // Overlapping static entry reached from 0xC16F7E.
    case 0xC16F7F: {
        Instruction step(cpu, 0x3D, 0x00A6C4u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:31 LDX @LOCAL01
    case 0xC16F81: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:31 LDX @LOCAL01
    // Overlapping static entry reached from 0xC16F7F.
    case 0xC16F82: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    case 0xC16F83: {
        Instruction step(cpu, 0x22, 0xC49BEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16F82.
    case 0xC16F84: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16F84.
    case 0xC16F85: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16F85.
    case 0xC16F86: {
        Instruction step(cpu, 0xC4, 0x0000A4u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:33 LDY @LOCAL00
    case 0xC16F87: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:33 LDY @LOCAL00
    // Overlapping static entry reached from 0xC16F86.
    case 0xC16F88: {
        Instruction step(cpu, 0x0E, 0x002298u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:34 TYA
    case 0xC16F89: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    case 0xC16F8A: {
        Instruction step(cpu, 0x22, 0xC4415Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    // Overlapping static entry reached from 0xC16F88.
    case 0xC16F8B: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    // Overlapping static entry reached from 0xC16F8B.
    case 0xC16F8C: {
        Instruction step(cpu, 0x41, 0x0000C4u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    case 0xC16F8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC16F8E.
    case 0xC16F90: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16F91: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16F92: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
