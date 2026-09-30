// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/hp_pp_window/separate_decimal_digits.asm
bool resume_text_hp_pp_window_separate_decimal_digits(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:3 BEGIN_C_FUNCTION
    case 0xC20D3F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D41: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D42: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D43: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20D44.
    case 0xC20D46: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D47: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D48: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    case 0xC20D49: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC20D46.
    case 0xC20D4A: {
        Instruction step(cpu, 0x0E, 0x0068A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    case 0xC20D4B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000068u : 0x008968u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    // Overlapping static entry reached from 0xC20D4B.
    case 0xC20D4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A0u : 0x000AA0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    case 0xC20D4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    // Overlapping static entry reached from 0xC20D4D.
    case 0xC20D4F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    // Overlapping static entry reached from 0xC20D4E.
    case 0xC20D50: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:12 JSL MODULUS16
    case 0xC20D51: {
        Instruction step(cpu, 0x22, 0xC09231u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC20D55: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:14 STA __BSS_START__,X
    case 0xC20D57: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:16 DEX
    case 0xC20D5A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    case 0xC20D5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    // Overlapping static entry reached from 0xC20D5B.
    case 0xC20D5D: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC20D5E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:19 LDA @LOCAL00
    case 0xC20D60: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:20 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20D62: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:21 STA @LOCAL00
    case 0xC20D66: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    case 0xC20D68: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20DE2.
    case 0xC20D69: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20D68.
    case 0xC20D6A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:23 JSL MODULUS16
    case 0xC20D6B: {
        Instruction step(cpu, 0x22, 0xC09231u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC20D6F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:25 STA __BSS_START__,X
    case 0xC20D71: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:26 DEX
    case 0xC20D74: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    case 0xC20D75: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    // Overlapping static entry reached from 0xC20D75.
    case 0xC20D77: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC20D78: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:30 LDA @LOCAL00
    case 0xC20D7A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:31 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20D7C: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC20D80: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:33 STA __BSS_START__,X
    case 0xC20D82: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC20D85: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC20DD4.
    case 0xC20D86: {
        Instruction step(cpu, 0x20, 0x00602Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20D87: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20D88: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
