// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/hp_pp_window/separate_decimal_digits.asm
bool resume_text_hp_pp_window_separate_decimal_digits(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:3 BEGIN_C_FUNCTION
    case 0xC20BD0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20BD5.
    case 0xC20BD7: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    case 0xC20BDA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC20BD7.
    case 0xC20BDB: {
        Instruction step(cpu, 0x0E, 0x00A6A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    case 0xC20BDC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000A6u : 0x008CA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    // Overlapping static entry reached from 0xC20BDC.
    case 0xC20BDE: {
        Instruction step(cpu, 0x8C, 0x000AA0u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    case 0xC20BDF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    // Overlapping static entry reached from 0xC20BDF.
    case 0xC20BE1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:12 JSL MODULUS16
    case 0xC20BE2: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC20BE6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:14 STA __BSS_START__,X
    case 0xC20BE8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:16 DEX
    case 0xC20BEB: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    case 0xC20BEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    // Overlapping static entry reached from 0xC20BEC.
    case 0xC20BEE: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC20BEF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:19 LDA @LOCAL00
    case 0xC20BF1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:20 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20BF3: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:21 STA @LOCAL00
    case 0xC20BF7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    case 0xC20BF9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20C73.
    case 0xC20BFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20BF9.
    case 0xC20BFB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:23 JSL MODULUS16
    case 0xC20BFC: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC20C00: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:25 STA __BSS_START__,X
    case 0xC20C02: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:26 DEX
    case 0xC20C05: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    case 0xC20C06: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    // Overlapping static entry reached from 0xC20C06.
    case 0xC20C08: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC20C09: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:30 LDA @LOCAL00
    case 0xC20C0B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:31 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20C0D: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC20C11: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:33 STA __BSS_START__,X
    case 0xC20C13: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC20C16: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC20C65.
    case 0xC20C17: {
        Instruction step(cpu, 0x20, 0x00602Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20C18: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20C19: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
