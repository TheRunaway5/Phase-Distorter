// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/close_window.asm
bool resume_text_close_window(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_window.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E521: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_window.asm:6 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC3E51E.
    case 0xC3E522: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E523: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E524: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E525: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E526: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E526.
    case 0xC3E528: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E529: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E52A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:16 STA @LOCAL04
    case 0xC3E52B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:16 STA @LOCAL04
    // Overlapping static entry reached from 0xC3E528.
    case 0xC3E52C: {
        Instruction step(cpu, 0x16, 0x0000C9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    case 0xC3E52D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E52C.
    case 0xC3E52E: {
        Instruction step(cpu, 0xFF, 0x03D0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E52D.
    case 0xC3E52F: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC3E530: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC3E532: {
        Instruction step(cpu, 0x4C, 0x00E6F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC3E52F.
    case 0xC3E533: {
        Instruction step(cpu, 0xF4, 0x00A5E6u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/text/close_window.asm:19 LDA @LOCAL04
    case 0xC3E535: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:19 LDA @LOCAL04
    // Overlapping static entry reached from 0xC3E533.
    case 0xC3E536: {
        Instruction step(cpu, 0x16, 0x00000Au, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:20 ASL
    case 0xC3E537: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:21 TAX
    case 0xC3E538: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC3E539: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:23 STA @VIRTUAL04
    case 0xC3E53C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    case 0xC3E53E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E53E.
    case 0xC3E540: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC3E541: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC3E543: {
        Instruction step(cpu, 0x4C, 0x00E6F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC3E540.
    case 0xC3E544: {
        Instruction step(cpu, 0xF4, 0x00ADE6u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xC3E546: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E544.
    case 0xC3E547: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E547.
    case 0xC3E548: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000C5u : 0x0016C5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/close_window.asm:27 CMP @LOCAL04
    case 0xC3E549: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:27 CMP @LOCAL04
    // Overlapping static entry reached from 0xC3E548.
    case 0xC3E54A: {
        Instruction step(cpu, 0x16, 0x0000D0u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    case 0xC3E54B: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC3E54A.
    case 0xC3E54C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    case 0xC3E54D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E54C.
    case 0xC3E54E: {
        Instruction step(cpu, 0xFF, 0x588DFFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E54D.
    case 0xC3E54F: {
        Instruction step(cpu, 0xFF, 0x89588Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    case 0xC3E550: {
        Instruction step(cpu, 0x8D, 0x008958u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E54E.
    case 0xC3E552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A5u : 0x0016A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/close_window.asm:32 LDA @LOCAL04
    case 0xC3E553: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:32 LDA @LOCAL04
    // Overlapping static entry reached from 0xC3E552.
    case 0xC3E554: {
        Instruction step(cpu, 0x16, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    case 0xC3E555: {
        Instruction step(cpu, 0x22, 0xC3E7E3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC3E554.
    case 0xC3E556: {
        Instruction step(cpu, 0xE3, 0x0000E7u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC3E556.
    case 0xC3E558: {
        Instruction step(cpu, 0xC3, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    case 0xC3E559: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC3E558.
    case 0xC3E55A: {
        Instruction step(cpu, 0x04, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC3E55B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E55A.
    case 0xC3E55C: {
        Instruction step(cpu, 0x52, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E55B.
    case 0xC3E55D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:36 JSL MULT168
    case 0xC3E55E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:37 TAX
    case 0xC3E562: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:38 LDY WINDOW_STATS + window_stats::next,X
    case 0xC3E563: {
        Instruction step(cpu, 0xBC, 0x008652u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:39 STY @LOCAL03
    case 0xC3E566: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:40 LDA WINDOW_STATS + window_stats::prev,X
    case 0xC3E568: {
        Instruction step(cpu, 0xBD, 0x008650u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:41 STA @LOCAL02
    case 0xC3E56B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    case 0xC3E56D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E56D.
    case 0xC3E56F: {
        Instruction step(cpu, 0xFF, 0x8D05D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:43 BNE @UNKNOWN3
    case 0xC3E570: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    case 0xC3E572: {
        Instruction step(cpu, 0x8D, 0x0088E2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    // Overlapping static entry reached from 0xC3E56F.
    case 0xC3E573: {
        Instruction step(cpu, 0xE2, 0x000088u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/close_window.asm:45 BRA @UNKNOWN4
    case 0xC3E575: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:47 TYA
    case 0xC3E577: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    case 0xC3E578: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E578.
    case 0xC3E57A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:49 JSL MULT168
    case 0xC3E57B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:50 TAX
    case 0xC3E57F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:51 LDA @LOCAL02
    case 0xC3E580: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:52 STA WINDOW_STATS + window_stats::prev,X
    case 0xC3E582: {
        Instruction step(cpu, 0x9D, 0x008650u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    case 0xC3E585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E585.
    case 0xC3E587: {
        Instruction step(cpu, 0xFF, 0xA407D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:55 BNE @UNKNOWN5
    case 0xC3E588: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:56 LDY @LOCAL03
    case 0xC3E58A: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:56 LDY @LOCAL03
    // Overlapping static entry reached from 0xC3E587.
    case 0xC3E58B: {
        Instruction step(cpu, 0x14, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    case 0xC3E58C: {
        Instruction step(cpu, 0x8C, 0x0088E0u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    // Overlapping static entry reached from 0xC3E58B.
    case 0xC3E58D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000088u : 0x008088u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    case 0xC3E58F: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC3E58D.
    case 0xC3E590: {
        Instruction step(cpu, 0x0E, 0x0052A0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    case 0xC3E591: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E591.
    case 0xC3E593: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:61 JSL MULT168
    case 0xC3E594: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:62 TAX
    case 0xC3E598: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:63 LDY @LOCAL03
    case 0xC3E599: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:64 TYA
    case 0xC3E59B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:65 STA WINDOW_STATS + window_stats::next,X
    case 0xC3E59C: {
        Instruction step(cpu, 0x9D, 0x008652u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:67 LDA @VIRTUAL04
    case 0xC3E59F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    case 0xC3E5A1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E5A1.
    case 0xC3E5A3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:69 JSL MULT168
    case 0xC3E5A4: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:70 TAX
    case 0xC3E5A8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:71 STX @LOCAL01
    case 0xC3E5A9: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    case 0xC3E5AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E5AB.
    case 0xC3E5AD: {
        Instruction step(cpu, 0xFF, 0x86549Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:73 STA WINDOW_STATS + window_stats::id,X
    case 0xC3E5AE: {
        Instruction step(cpu, 0x9D, 0x008654u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:74 LDA @LOCAL04
    case 0xC3E5B1: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:75 ASL
    case 0xC3E5B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:76 TAX
    case 0xC3E5B4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    case 0xC3E5B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E5B5.
    case 0xC3E5B7: {
        Instruction step(cpu, 0xFF, 0x88E49Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:78 STA OPEN_WINDOW_TABLE,X
    case 0xC3E5B8: {
        Instruction step(cpu, 0x9D, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:79 LDX @LOCAL01
    case 0xC3E5BB: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:80 LDA WINDOW_STATS + window_stats::window_x,X
    case 0xC3E5BD: {
        Instruction step(cpu, 0xBD, 0x008656u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:81 ASL
    case 0xC3E5C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:82 STA @VIRTUAL02
    case 0xC3E5C1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:83 LDA WINDOW_STATS + window_stats::window_y,X
    case 0xC3E5C3: {
        Instruction step(cpu, 0xBD, 0x008658u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5CA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:85 CLC
    case 0xC3E5CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/close_window.asm:86 ADC @VIRTUAL02
    case 0xC3E5CD: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/close_window.asm:87 CLC
    case 0xC3E5CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    case 0xC3E5D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC3E5D0.
    case 0xC3E5D2: {
        Instruction step(cpu, 0x7D, 0x000285u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/close_window.asm:96 STA @VIRTUAL02
    case 0xC3E5D3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:97 STA @LOCAL00
    case 0xC3E5D5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:98 LDY WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC3E5D7: {
        Instruction step(cpu, 0xBC, 0x008685u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:99 STY @LOCAL03
    case 0xC3E5DA: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:100 LDX #0
    case 0xC3E5DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:100 LDX #0
    // Overlapping static entry reached from 0xC3E5DC.
    case 0xC3E5DE: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:101 STX @LOCAL01
    case 0xC3E5DF: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:102 BRA @UNKNOWN10
    case 0xC3E5E1: {
        Instruction step(cpu, 0x80, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:104 LDY @LOCAL03
    case 0xC3E5E3: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:105 LDA __BSS_START__,Y
    case 0xC3E5E5: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:106 CMP #64
    case 0xC3E5E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:106 CMP #64
    // Overlapping static entry reached from 0xC3E5E8.
    case 0xC3E5EA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:107 BNE @UNKNOWN8
    case 0xC3E5EB: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:108 CMP #0
    case 0xC3E5ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:108 CMP #0
    // Overlapping static entry reached from 0xC3E5ED.
    case 0xC3E5EF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:109 BEQ @UNKNOWN9
    case 0xC3E5F0: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/close_window.asm:111 LDA __BSS_START__,Y
    case 0xC3E5F2: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:112 JSL FREE_TILE
    case 0xC3E5F5: {
        Instruction step(cpu, 0x22, 0xC44AF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:114 LDA #64
    case 0xC3E5F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:114 LDA #64
    // Overlapping static entry reached from 0xC3E5F9.
    case 0xC3E5FB: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:115 LDY @LOCAL03
    case 0xC3E5FC: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:116 STA __BSS_START__,Y
    case 0xC3E5FE: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:117 INY
    case 0xC3E601: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/close_window.asm:118 INY
    case 0xC3E602: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/close_window.asm:119 STY @LOCAL03
    case 0xC3E603: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:120 LDX @LOCAL01
    case 0xC3E605: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:121 INX
    case 0xC3E607: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/close_window.asm:122 STX @LOCAL01
    case 0xC3E608: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:124 LDA @VIRTUAL04
    case 0xC3E60A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:125 LDY #.SIZEOF(window_stats)
    case 0xC3E60C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:125 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E60C.
    case 0xC3E60E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:126 JSL MULT168
    case 0xC3E60F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:127 TAX
    case 0xC3E613: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:128 LDY WINDOW_STATS + window_stats::width,X
    case 0xC3E614: {
        Instruction step(cpu, 0xBC, 0x00865Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:129 TAX
    case 0xC3E617: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:130 LDA WINDOW_STATS + window_stats::height,X
    case 0xC3E618: {
        Instruction step(cpu, 0xBD, 0x00865Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:131 JSL MULT16
    case 0xC3E61B: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:132 STA @VIRTUAL02
    case 0xC3E61F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:133 LDX @LOCAL01
    case 0xC3E621: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:134 TXA
    case 0xC3E623: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:135 CMP @VIRTUAL02
    case 0xC3E624: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:136 BCC @UNKNOWN7
    case 0xC3E626: {
        Instruction step(cpu, 0x90, 0x0000BBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/close_window.asm:137 LDY #0
    case 0xC3E628: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:137 LDY #0
    // Overlapping static entry reached from 0xC3E628.
    case 0xC3E62A: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:138 STY @LOCAL01
    case 0xC3E62B: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:140 BRA @UNKNOWN14
    case 0xC3E62D: {
        Instruction step(cpu, 0x80, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:146 LDA #0
    case 0xC3E62F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:146 LDA #0
    // Overlapping static entry reached from 0xC3E62F.
    case 0xC3E631: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:147 STA @LOCAL02
    case 0xC3E632: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:149 BRA @UNKNOWN13
    case 0xC3E634: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:161 LDA #0
    case 0xC3E636: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:161 LDA #0
    // Overlapping static entry reached from 0xC3E636.
    case 0xC3E638: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:162 LDX @LOCAL00
    case 0xC3E639: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:163 STX @VIRTUAL02
    case 0xC3E63B: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:164 STA __BSS_START__,X
    case 0xC3E63D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:165 INC @VIRTUAL02
    case 0xC3E640: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:166 INC @VIRTUAL02
    case 0xC3E642: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:167 LDA @VIRTUAL02
    case 0xC3E644: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:168 STA @LOCAL00
    case 0xC3E646: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:169 LDA @LOCAL02
    case 0xC3E648: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:170 INC
    case 0xC3E64A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:171 STA @LOCAL02
    case 0xC3E64B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:174 LDA @VIRTUAL04
    case 0xC3E64D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    case 0xC3E64F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E64F.
    case 0xC3E651: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:176 JSL MULT168
    case 0xC3E652: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:177 TAX
    case 0xC3E656: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:178 LDA WINDOW_STATS + window_stats::width,X
    case 0xC3E657: {
        Instruction step(cpu, 0xBD, 0x00865Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:183 TAX
    case 0xC3E65A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:184 STX @VIRTUAL02
    case 0xC3E65B: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:186 INC @VIRTUAL02
    case 0xC3E65D: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:187 INC @VIRTUAL02
    case 0xC3E65F: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:193 LDA @LOCAL02
    case 0xC3E661: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:194 CMP @VIRTUAL02
    case 0xC3E663: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:196 BNE @UNKNOWN12
    case 0xC3E665: {
        Instruction step(cpu, 0xD0, 0x0000CFu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:201 STX @VIRTUAL02
    case 0xC3E667: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:203 LDA #32
    case 0xC3E669: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:203 LDA #32
    // Overlapping static entry reached from 0xC3E669.
    case 0xC3E66B: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:204 SEC
    case 0xC3E66C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/close_window.asm:205 SBC @VIRTUAL02
    case 0xC3E66D: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:206 DEC
    case 0xC3E66F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/close_window.asm:207 DEC
    case 0xC3E670: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/close_window.asm:208 ASL
    case 0xC3E671: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:214 PHA
    case 0xC3E672: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:215 LDA @LOCAL00
    case 0xC3E673: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:216 STA @VIRTUAL02
    case 0xC3E675: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:217 PLY
    case 0xC3E677: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/close_window.asm:218 STY @VIRTUAL02
    case 0xC3E678: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:220 CLC
    case 0xC3E67A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/close_window.asm:221 ADC @VIRTUAL02
    case 0xC3E67B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/close_window.asm:231 STA @VIRTUAL02
    case 0xC3E67D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:232 STA @LOCAL00
    case 0xC3E67F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:233 LDY @LOCAL01
    case 0xC3E681: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:234 INY
    case 0xC3E683: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/close_window.asm:235 STY @LOCAL01
    case 0xC3E684: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:238 LDA @VIRTUAL04
    case 0xC3E686: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    case 0xC3E688: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E688.
    case 0xC3E68A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:240 JSL MULT168
    case 0xC3E68B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:241 TAX
    case 0xC3E68F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:246 STX @LOCAL02
    case 0xC3E690: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:248 LDA WINDOW_STATS + window_stats::height,X
    case 0xC3E692: {
        Instruction step(cpu, 0xBD, 0x00865Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:249 STA @VIRTUAL02
    case 0xC3E695: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:250 INC @VIRTUAL02
    case 0xC3E697: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:251 INC @VIRTUAL02
    case 0xC3E699: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:255 LDY @LOCAL01
    case 0xC3E69B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:256 TYA
    case 0xC3E69D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:258 CMP @VIRTUAL02
    case 0xC3E69E: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:259 BNE @UNKNOWN11
    case 0xC3E6A0: {
        Instruction step(cpu, 0xD0, 0x00008Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:261 JSL UNKNOWN_C45E96
    case 0xC3E6A2: {
        Instruction step(cpu, 0x22, 0xC45E96u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:262 LDX @LOCAL02
    case 0xC3E6A6: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:264 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC3E6A8: {
        Instruction step(cpu, 0xBD, 0x00868Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:265 AND #$00FF
    case 0xC3E6AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:265 AND #$00FF
    // Overlapping static entry reached from 0xC3E6AB.
    case 0xC3E6AD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:266 BEQ @UNKNOWN15
    case 0xC3E6AE: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/close_window.asm:267 AND #$00FF
    case 0xC3E6B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC3E6B0.
    case 0xC3E6B2: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:268 DEC
    case 0xC3E6B3: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/close_window.asm:269 ASL
    case 0xC3E6B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:270 TAX
    case 0xC3E6B5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    case 0xC3E6B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E6B6.
    case 0xC3E6B8: {
        Instruction step(cpu, 0xFF, 0x894E9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:272 STA TITLED_WINDOWS,X
    case 0xC3E6B9: {
        Instruction step(cpu, 0x9D, 0x00894Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:274 LDA @VIRTUAL04
    case 0xC3E6BC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    case 0xC3E6BE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E6BE.
    case 0xC3E6C0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:276 JSL MULT168
    case 0xC3E6C1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:277 TAX
    case 0xC3E6C5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E6C6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/close_window.asm:279 STZ WINDOW_STATS + window_stats::unknown59,X
    case 0xC3E6C8: {
        Instruction step(cpu, 0x9E, 0x00868Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/close_window.asm:280 LDA #1
    case 0xC3E6CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    case 0xC3E6CD: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC3E6CB.
    case 0xC3E6CE: {
        Instruction step(cpu, 0x23, 0x000096u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:282 REP #PROC_FLAGS::ACCUM8
    case 0xC3E6D0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/close_window.asm:283 LDA PAGINATION_WINDOW
    case 0xC3E6D2: {
        Instruction step(cpu, 0xAD, 0x005E7Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:284 CMP @LOCAL04
    case 0xC3E6D5: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:285 BNE @UNKNOWN16
    case 0xC3E6D7: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    case 0xC3E6D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E6D9.
    case 0xC3E6DB: {
        Instruction step(cpu, 0xFF, 0x5E7A8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:287 STA PAGINATION_WINDOW
    case 0xC3E6DC: {
        Instruction step(cpu, 0x8D, 0x005E7Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:290 LDA EXTRA_TICK_ON_WINDOW_CLOSE
    case 0xC3E6DF: {
        Instruction step(cpu, 0xAD, 0x005E70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:291 AND #$00FF
    case 0xC3E6E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:291 AND #$00FF
    // Overlapping static entry reached from 0xC3E6E2.
    case 0xC3E6E4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:292 BNE @UNKNOWN17
    case 0xC3E6E5: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:293 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC3E6E7: {
        Instruction step(cpu, 0x22, 0xC3E4E0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:294 JSL CLEAR_INSTANT_PRINTING
    case 0xC3E6EB: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:297 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E6EF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/close_window.asm:298 STZ VWF_INDENT_NEW_LINE
    case 0xC3E6F1: {
        Instruction step(cpu, 0x9C, 0x005E75u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/close_window.asm:303 REP #PROC_FLAGS::ACCUM8
    case 0xC3E6F4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC3E6F6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC3E6F7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
