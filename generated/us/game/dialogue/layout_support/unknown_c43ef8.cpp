// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C43EF8.asm
bool resume_unresolved_c4_c43ef8(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43EF8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43EF8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC43EFD.
    case 0xC43EFF: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43F00: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43F01: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:12 STA @LOCAL03
    case 0xC43F02: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:12 STA @LOCAL03
    // Overlapping static entry reached from 0xC43EFF.
    case 0xC43F03: {
        Instruction step(cpu, 0x16, 0x0000A5u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F04: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F03.
    case 0xC43F05: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F06: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F05.
    case 0xC43F07: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F08: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F07.
    case 0xC43F09: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F0A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC43F0C: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:15 ASL
    case 0xC43F0F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:16 TAX
    case 0xC43F10: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC43F11: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC43F14: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43F14.
    case 0xC43F16: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:19 JSL MULT168
    case 0xC43F17: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:20 CLC
    case 0xC43F1B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43F1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43F1C.
    case 0xC43F1E: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:22 TAX
    case 0xC43F1F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:23 STX @LOCAL02
    case 0xC43F20: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F22: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F24: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F26: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F28: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:25 LDA @LOCAL03
    case 0xC43F2A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:26 JSL UNKNOWN_C43E31
    case 0xC43F2C: {
        Instruction step(cpu, 0x22, 0xC43E31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:27 STA @VIRTUAL02
    case 0xC43F30: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:28 LDX @LOCAL02
    case 0xC43F32: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:29 LDA a:window_stats::width,X
    case 0xC43F34: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:30 ASL
    case 0xC43F37: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:31 ASL
    case 0xC43F38: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:32 ASL
    case 0xC43F39: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:33 SEC
    case 0xC43F3A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:34 SBC @VIRTUAL02
    case 0xC43F3B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:35 LSR
    case 0xC43F3D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:36 STA @LOCAL01
    case 0xC43F3E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:37 LDA a:window_stats::text_y,X
    case 0xC43F40: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:38 TAX
    case 0xC43F43: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:39 LDA @LOCAL01
    case 0xC43F44: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:40 JSL UNKNOWN_C43D75
    case 0xC43F46: {
        Instruction step(cpu, 0x22, 0xC43D75u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC43F4A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:42 STZ FORCE_CENTRE_TEXT_ALIGNMENT
    case 0xC43F4C: {
        Instruction step(cpu, 0x9C, 0x005E74u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C43EF8.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC43F4F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43EF8.asm:44 END_C_FUNCTION
    case 0xC43F51: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43EF8.asm:44 END_C_FUNCTION
    case 0xC43F52: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
