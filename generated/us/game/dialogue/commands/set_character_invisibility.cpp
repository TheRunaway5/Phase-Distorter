// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/set_character_invisibility.asm
bool resume_text_ccs_set_character_invisibility(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_invisibility.asm:3 BEGIN_C_FUNCTION
    case 0xC16CC6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CC8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CC9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16CCB.
    case 0xC16CCD: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    case 0xC16CD0: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16CCD.
    case 0xC16CD1: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    case 0xC16CD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16CD1.
    case 0xC16CD3: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16CD2.
    case 0xC16CD4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:13 CLC
    case 0xC16CD5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CD6: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CD9: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CDB: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CDD: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CDF: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:16 TXA
    case 0xC16CE1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16CE2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CE4: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16CE7: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16CEA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CEC: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    case 0xC16CEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C6u : 0x006CC6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC16CEF.
    case 0xC16CF1: {
        Instruction step(cpu, 0x6C, 0x001E80u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:23 BRA @UNKNOWN3
    case 0xC16CF2: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16CF4: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    case 0xC16CF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16CF7.
    case 0xC16CF9: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:27 TAY
    case 0xC16CFA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:28 STY @LOCAL00
    case 0xC16CFB: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:29 TYA
    case 0xC16CFD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    case 0xC16CFE: {
        Instruction step(cpu, 0x22, 0xC4608Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:31 LDX @LOCAL01
    case 0xC16D02: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    case 0xC16D04: {
        Instruction step(cpu, 0x22, 0xC4C91Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:33 LDY @LOCAL00
    case 0xC16D08: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:34 TYA
    case 0xC16D0A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    case 0xC16D0B: {
        Instruction step(cpu, 0x22, 0xC463F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    case 0xC16D0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC16D0F.
    case 0xC16D11: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16D12: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16D13: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
