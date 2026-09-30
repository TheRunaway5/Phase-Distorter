// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/print_string.asm
bool resume_text_print_string(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_string.asm:3 BEGIN_C_FUNCTION
    case 0xC10EFC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10EFE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10EFF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F00: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC10F01.
    case 0xC10F03: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F04: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F05: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:10 TAX
    case 0xC10F06: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_string.asm:11 STX @LOCAL01
    case 0xC10F07: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F09: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F0B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F0D: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F0F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:13 LDA FORCE_CENTRE_TEXT_ALIGNMENT
    case 0xC10F11: {
        Instruction step(cpu, 0xAD, 0x005E74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:14 AND #$00FF
    case 0xC10F14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC10F14.
    case 0xC10F16: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_string.asm:15 BEQ @UNKNOWN1
    case 0xC10F17: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F19: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F1B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F1D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F1F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:17 TXA
    case 0xC10F21: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:18 JSL UNKNOWN_C43EF8
    case 0xC10F22: {
        Instruction step(cpu, 0x22, 0xC43EF8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_string.asm:19 BRA @UNKNOWN1
    case 0xC10F26: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_string.asm:21 DEX
    case 0xC10F28: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/print_string.asm:22 STX @LOCAL01
    case 0xC10F29: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_string.asm:23 AND #$00FF
    case 0xC10F2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC10F2B.
    case 0xC10F2D: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_string.asm:24 INC @VIRTUAL06
    case 0xC10F2E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/print_string.asm:25 JSR PRINT_LETTER
    case 0xC10F30: {
        Instruction step(cpu, 0x20, 0x000CB6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_string.asm:27 LDA [@VIRTUAL06]
    case 0xC10F33: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:28 AND #$00FF
    case 0xC10F35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_string.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC10F35.
    case 0xC10F37: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_string.asm:29 BEQ @UNKNOWN2
    case 0xC10F38: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_string.asm:30 LDX @LOCAL01
    case 0xC10F3A: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_string.asm:31 BNE @UNKNOWN0
    case 0xC10F3C: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_string.asm:33 END_C_FUNCTION
    case 0xC10F3E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_string.asm:33 END_C_FUNCTION
    case 0xC10F3F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
