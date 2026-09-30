// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/set_event_flag.asm
bool resume_text_set_event_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_event_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21506: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21508: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21509: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2150B.
    case 0xC2150D: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC2150F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:12 TXY
    case 0xC21510: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:13 STY @LOCAL02
    case 0xC21511: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:14 TAX
    case 0xC21513: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:15 DEC
    case 0xC21514: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/set_event_flag.asm:16 STA @LOCAL01
    case 0xC21515: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:17 LSR
    case 0xC21517: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/set_event_flag.asm:18 LSR
    case 0xC21518: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/set_event_flag.asm:19 LSR
    case 0xC21519: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/set_event_flag.asm:20 CLC
    case 0xC2151A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    case 0xC2151B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B3u : 0x009EB3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xC2151B.
    case 0xC2151D: {
        Instruction step(cpu, 0x9E, 0x0086AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/set_event_flag.asm:22 TAX
    case 0xC2151E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    case 0xC2151F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    // Overlapping static entry reached from 0xC2151D.
    case 0xC21520: {
        Instruction step(cpu, 0x0E, 0x0008A0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/set_event_flag.asm:24 LDY #8
    case 0xC21521: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:24 LDY #8
    // Overlapping static entry reached from 0xC21521.
    case 0xC21523: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_event_flag.asm:25 LDA @LOCAL01
    case 0xC21524: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:26 JSL MODULUS16
    case 0xC21526: {
        Instruction step(cpu, 0x22, 0xC09213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_event_flag.asm:27 TAX
    case 0xC2152A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2152B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_event_flag.asm:29 LDA f:POWERS_OF_TWO_8BIT,X
    case 0xC2152D: {
        Instruction step(cpu, 0xBF, 0xC43425u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:30 LDY @LOCAL02
    case 0xC21531: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_event_flag.asm:31 BEQ @UNKNOWN0
    case 0xC21533: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_event_flag.asm:32 STA @VIRTUAL00
    case 0xC21535: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:33 LDX @LOCAL00
    case 0xC21537: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:34 LDA __BSS_START__,X
    case 0xC21539: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:35 ORA @VIRTUAL00
    case 0xC2153C: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:36 BRA @UNKNOWN1
    case 0xC2153E: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_event_flag.asm:38 EOR #$00FF
    case 0xC21540: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    case 0xC21542: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC21540.
    case 0xC21543: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_event_flag.asm:40 LDX @LOCAL00
    case 0xC21544: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_event_flag.asm:41 LDA __BSS_START__,X
    case 0xC21546: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:41 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC215C0.
    case 0xC21547: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_event_flag.asm:42 AND @VIRTUAL00
    case 0xC21549: {
        Instruction step(cpu, 0x25, 0x000000u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:44 STA __BSS_START__,X
    case 0xC2154B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC2154E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_event_flag.asm:46 AND #$00FF
    case 0xC21550: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_event_flag.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC21550.
    case 0xC21552: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC21553: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC21554: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
