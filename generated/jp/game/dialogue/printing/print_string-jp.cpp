// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/print_string-jp.asm
bool resume_text_print_string_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_string-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC114DD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114DF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC114E2.
    case 0xC114E4: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/print_string-jp.asm:9 TAX
    case 0xC114E7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_string-jp.asm:10 STX @LOCAL00
    case 0xC114E8: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114EA: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114EC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114EE: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114F0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_string-jp.asm:12 BRA @UNKNOWN1
    case 0xC114F2: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_string-jp.asm:14 DEX
    case 0xC114F4: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/print_string-jp.asm:15 STX @LOCAL00
    case 0xC114F5: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_string-jp.asm:16 AND #$00FF
    case 0xC114F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_string-jp.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC114F7.
    case 0xC114F9: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_string-jp.asm:17 INC @VIRTUAL06
    case 0xC114FA: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/print_string-jp.asm:18 JSR PRINT_LETTER
    case 0xC114FC: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_string-jp.asm:20 LDA [@VIRTUAL06]
    case 0xC114FF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_string-jp.asm:21 AND #$00FF
    case 0xC11501: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_string-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC11501.
    case 0xC11503: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_string-jp.asm:22 BEQ @UNKNOWN2
    case 0xC11504: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_string-jp.asm:23 LDX @LOCAL00
    case 0xC11506: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_string-jp.asm:24 BNE @UNKNOWN0
    case 0xC11508: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_string-jp.asm:26 END_C_FUNCTION
    case 0xC1150A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_string-jp.asm:26 END_C_FUNCTION
    case 0xC1150B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
