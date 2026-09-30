// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/set_event_flag.asm
bool resume_text_set_event_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_event_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2165E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21660: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21661: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21662: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21663: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC21663.
    case 0xC21665: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21666: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21667: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:12 TXY
    case 0xC21668: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:13 STY @LOCAL02
    case 0xC21669: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:14 TAX
    case 0xC2166B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:15 DEC
    case 0xC2166C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/set_event_flag.asm:16 STA @LOCAL01
    case 0xC2166D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:17 LSR
    case 0xC2166F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/set_event_flag.asm:18 LSR
    case 0xC21670: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/set_event_flag.asm:19 LSR
    case 0xC21671: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/set_event_flag.asm:20 CLC
    case 0xC21672: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    case 0xC21673: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x009C08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xC21673.
    case 0xC21675: {
        Instruction step(cpu, 0x9C, 0x0086AAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/set_event_flag.asm:22 TAX
    case 0xC21676: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    case 0xC21677: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    // Overlapping static entry reached from 0xC21675.
    case 0xC21678: {
        Instruction step(cpu, 0x0E, 0x0008A0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/set_event_flag.asm:24 LDY #8
    case 0xC21679: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:24 LDY #8
    // Overlapping static entry reached from 0xC21679.
    case 0xC2167B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_event_flag.asm:25 LDA @LOCAL01
    case 0xC2167C: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:26 JSL MODULUS16
    case 0xC2167E: {
        Instruction step(cpu, 0x22, 0xC09231u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_event_flag.asm:27 TAX
    case 0xC21682: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC21683: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_event_flag.asm:29 LDA f:POWERS_OF_TWO_8BIT,X
    case 0xC21685: {
        Instruction step(cpu, 0xBF, 0xC4562Fu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:30 LDY @LOCAL02
    case 0xC21689: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:31 BEQ @UNKNOWN0
    case 0xC2168B: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_event_flag.asm:32 STA @VIRTUAL00
    case 0xC2168D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:33 LDX @LOCAL00
    case 0xC2168F: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:34 LDA __BSS_START__,X
    case 0xC21691: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:34 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2053A.
    case 0xC21692: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_event_flag.asm:35 ORA @VIRTUAL00
    case 0xC21694: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:36 BRA @UNKNOWN1
    case 0xC21696: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_event_flag.asm:38 EOR #$00FF
    case 0xC21698: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    case 0xC2169A: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC21698.
    case 0xC2169B: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_event_flag.asm:40 LDX @LOCAL00
    case 0xC2169C: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:41 LDA __BSS_START__,X
    case 0xC2169E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:42 AND @VIRTUAL00
    case 0xC216A1: {
        Instruction step(cpu, 0x25, 0x000000u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:44 STA __BSS_START__,X
    case 0xC216A3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC216A6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_event_flag.asm:46 AND #$00FF
    case 0xC216A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC216A8.
    case 0xC216AA: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC216AB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC216AC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
