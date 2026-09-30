// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/set_window_title.asm
bool resume_text_set_window_title(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_window_title.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2032B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2032D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2032E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2032F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20330: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x00FFF1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC20330.
    case 0xC20332: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20333: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20334: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:10 STX @VIRTUAL02
    case 0xC20335: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_window_title.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20332.
    case 0xC20336: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/set_window_title.asm:11 STA @VIRTUAL04
    case 0xC20337: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC20339: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2033B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC20297.
    case 0xC2033C: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2033D: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC2033C.
    case 0xC2033E: {
        Instruction step(cpu, 0x1F, 0xA50885u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2033F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:13 LDA @VIRTUAL04
    case 0xC20341: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:13 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC2033E.
    case 0xC20342: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_window_title.asm:14 ASL
    case 0xC20343: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/set_window_title.asm:15 TAX
    case 0xC20344: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_window_title.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC20345: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC20348: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_window_title.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20348.
    case 0xC2034A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_window_title.asm:18 JSL MULT168
    case 0xC2034B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_window_title.asm:19 CLC
    case 0xC2034F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_window_title.asm:20 ADC #.LOWORD(WINDOW_STATS)+window_stats::title
    case 0xC20350: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x00868Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_window_title.asm:20 ADC #.LOWORD(WINDOW_STATS)+window_stats::title
    // Overlapping static entry reached from 0xC20350.
    case 0xC20352: {
        Instruction step(cpu, 0x86, 0x0000A8u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_window_title.asm:21 TAY
    case 0xC20353: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/set_window_title.asm:22 BRA @UNKNOWN1
    case 0xC20354: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_window_title.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC20356: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_window_title.asm:25 LDA @LOCAL00
    case 0xC20358: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:26 STA __BSS_START__,Y
    case 0xC2035A: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2035D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_window_title.asm:28 INC @VIRTUAL06
    case 0xC2035F: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/set_window_title.asm:29 INY
    case 0xC20361: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/set_window_title.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC20362: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_window_title.asm:32 LDA [@VIRTUAL06]
    case 0xC20364: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:33 STA @LOCAL00
    case 0xC20366: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC20368: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_window_title.asm:35 AND #$00FF
    case 0xC2036A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC2036A.
    case 0xC2036C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_window_title.asm:36 BEQ @UNKNOWN2
    case 0xC2036D: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_window_title.asm:37 LDX @VIRTUAL02
    case 0xC2036F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_window_title.asm:38 LDA @VIRTUAL02
    case 0xC20371: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:39 DEC
    case 0xC20373: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/set_window_title.asm:40 STA @VIRTUAL02
    case 0xC20374: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:41 CPX #0
    case 0xC20376: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/set_window_title.asm:41 CPX #0
    // Overlapping static entry reached from 0xC20376.
    case 0xC20378: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_window_title.asm:42 BNE @UNKNOWN0
    case 0xC20379: {
        Instruction step(cpu, 0xD0, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/set_window_title.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC2037B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_window_title.asm:45 LDA #0
    case 0xC2037D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009900u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:46 STA __BSS_START__,Y
    case 0xC2037F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:46 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2037D.
    case 0xC20380: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_window_title.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC20382: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_window_title.asm:48 LDA @VIRTUAL04
    case 0xC20384: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_window_title.asm:49 JSR UNKNOWN_C202AC
    case 0xC20386: {
        Instruction step(cpu, 0x20, 0x0002ACu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_window_title.asm:50 END_C_FUNCTION
    case 0xC20389: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_window_title.asm:50 END_C_FUNCTION
    case 0xC2038A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
