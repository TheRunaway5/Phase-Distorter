// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/get_letter_from_stat.asm
bool resume_text_ccs_get_letter_from_stat(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:3 BEGIN_C_FUNCTION
    case 0xC14819: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1481E.
    case 0xC14820: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14821: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14822: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:11 TXA
    case 0xC14823: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:12 STA @LOCAL01
    case 0xC14824: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14826: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00550Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14826.
    case 0xC14828: {
        Instruction step(cpu, 0x55, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14829: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14828.
    case 0xC1482A: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1482B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1482A.
    case 0xC1482C: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1482B.
    case 0xC1482D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1482E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:14 LDA @LOCAL01
    case 0xC14830: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:15 STA @VIRTUAL04
    case 0xC14832: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:16 ASL
    case 0xC14834: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:17 ADC @VIRTUAL04
    case 0xC14835: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:18 STA @LOCAL01
    case 0xC14837: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:19 JSR GET_SECONDARY_MEMORY
    case 0xC14839: {
        Instruction step(cpu, 0x20, 0x000400u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:20 STA @VIRTUAL02
    case 0xC1483C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:21 LDA @LOCAL01
    case 0xC1483E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14840: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14842: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14844: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14846: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:23 CLC
    case 0xC14848: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:24 ADC @VIRTUAL0A
    case 0xC14849: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:25 STA @VIRTUAL0A
    case 0xC1484B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:26 LDA [@VIRTUAL0A]
    case 0xC1484D: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:27 AND #$00FF
    case 0xC1484F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1484F.
    case 0xC14851: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:28 CMP @VIRTUAL02
    case 0xC14852: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:29 BCS @UNKNOWN0
    case 0xC14854: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:30 LDA #0
    case 0xC14856: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:30 LDA #0
    // Overlapping static entry reached from 0xC14856.
    case 0xC14858: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:31 BRA @UNKNOWN1
    case 0xC14859: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:33 JSR GET_SECONDARY_MEMORY
    case 0xC1485B: {
        Instruction step(cpu, 0x20, 0x000400u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:34 STA @VIRTUAL02
    case 0xC1485E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:35 LDA @LOCAL01
    case 0xC14860: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:36 INC
    case 0xC14862: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:37 CLC
    case 0xC14863: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:38 ADC @VIRTUAL06
    case 0xC14864: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:39 STA @VIRTUAL06
    case 0xC14866: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:40 LDA [@VIRTUAL06]
    case 0xC14868: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:41 CLC
    case 0xC1486A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:42 ADC @VIRTUAL02
    case 0xC1486B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:43 TAX
    case 0xC1486D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:44 DEX
    case 0xC1486E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:45 LDA __BSS_START__,X
    case 0xC1486F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:46 AND #$00FF
    case 0xC14872: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC14872.
    case 0xC14874: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14875: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14877: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14879: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC1487B: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1487D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1487F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14881: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14883: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:50 JSR SET_WORKING_MEMORY
    case 0xC14885: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:51 LDA #NULL
    case 0xC14888: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_stat.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC14888.
    case 0xC1488A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:52 END_C_FUNCTION
    case 0xC1488B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:52 END_C_FUNCTION
    case 0xC1488C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
