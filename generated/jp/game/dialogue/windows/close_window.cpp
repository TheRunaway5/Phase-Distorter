// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/close_window.asm
bool resume_text_close_window(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_window.asm:4 BEGIN_C_FUNCTION
    case 0xC10141: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10143: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10144: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10145: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10146: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC10146.
    case 0xC10148: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10149: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC1014A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:16 STA @LOCAL04
    case 0xC1014B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:16 STA @LOCAL04
    // Overlapping static entry reached from 0xC10148.
    case 0xC1014C: {
        Instruction step(cpu, 0x16, 0x0000C9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    case 0xC1014D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1014C.
    case 0xC1014E: {
        Instruction step(cpu, 0xFF, 0x03D0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1014D.
    case 0xC1014F: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC10150: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC10152: {
        Instruction step(cpu, 0x4C, 0x0002A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC1014F.
    case 0xC10153: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:19 LDA @LOCAL04
    case 0xC10155: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:20 ASL
    case 0xC10157: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:21 TAX
    case 0xC10158: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC10159: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:23 STA @VIRTUAL04
    case 0xC1015C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    case 0xC1015E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1015E.
    case 0xC10160: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC10161: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC10163: {
        Instruction step(cpu, 0x4C, 0x0002A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC10160.
    case 0xC10164: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xC10166: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:27 CMP @LOCAL04
    case 0xC10169: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    case 0xC1016B: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    case 0xC1016D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1016D.
    case 0xC1016F: {
        Instruction step(cpu, 0xFF, 0x8C968Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    case 0xC10170: {
        Instruction step(cpu, 0x8D, 0x008C96u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:32 LDA @LOCAL04
    case 0xC10173: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    case 0xC10175: {
        Instruction step(cpu, 0x20, 0x00193Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    case 0xC10178: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC1017A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1017A.
    case 0xC1017C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:36 JSL MULT168
    case 0xC1017D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:37 TAX
    case 0xC10181: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:38 LDY WINDOW_STATS + window_stats::next,X
    case 0xC10182: {
        Instruction step(cpu, 0xBC, 0x0089C4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:39 STY @LOCAL03
    case 0xC10185: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:40 LDA WINDOW_STATS + window_stats::prev,X
    case 0xC10187: {
        Instruction step(cpu, 0xBD, 0x0089C2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:41 STA @LOCAL02
    case 0xC1018A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    case 0xC1018C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1018C.
    case 0xC1018E: {
        Instruction step(cpu, 0xFF, 0x8D05D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:43 BNE @UNKNOWN3
    case 0xC1018F: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    case 0xC10191: {
        Instruction step(cpu, 0x8D, 0x008C24u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    // Overlapping static entry reached from 0xC1018E.
    case 0xC10192: {
        Instruction step(cpu, 0x24, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/close_window.asm:45 BRA @UNKNOWN4
    case 0xC10194: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:47 TYA
    case 0xC10196: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    case 0xC10197: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10197.
    case 0xC10199: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:49 JSL MULT168
    case 0xC1019A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:50 TAX
    case 0xC1019E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:51 LDA @LOCAL02
    case 0xC1019F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:52 STA WINDOW_STATS + window_stats::prev,X
    case 0xC101A1: {
        Instruction step(cpu, 0x9D, 0x0089C2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    case 0xC101A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC101A4.
    case 0xC101A6: {
        Instruction step(cpu, 0xFF, 0xA407D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:55 BNE @UNKNOWN5
    case 0xC101A7: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:56 LDY @LOCAL03
    case 0xC101A9: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:56 LDY @LOCAL03
    // Overlapping static entry reached from 0xC101A6.
    case 0xC101AA: {
        Instruction step(cpu, 0x14, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    case 0xC101AB: {
        Instruction step(cpu, 0x8C, 0x008C22u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    // Overlapping static entry reached from 0xC101AA.
    case 0xC101AC: {
        Instruction step(cpu, 0x22, 0x0E808Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    case 0xC101AE: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    case 0xC101B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC101B0.
    case 0xC101B2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:61 JSL MULT168
    case 0xC101B3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:62 TAX
    case 0xC101B7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:63 LDY @LOCAL03
    case 0xC101B8: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:64 TYA
    case 0xC101BA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:65 STA WINDOW_STATS + window_stats::next,X
    case 0xC101BB: {
        Instruction step(cpu, 0x9D, 0x0089C4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:67 LDA @VIRTUAL04
    case 0xC101BE: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    case 0xC101C0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC101C0.
    case 0xC101C2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:69 JSL MULT168
    case 0xC101C3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:70 TAX
    case 0xC101C7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:71 STX @LOCAL01
    case 0xC101C8: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    case 0xC101CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC101CA.
    case 0xC101CC: {
        Instruction step(cpu, 0xFF, 0x89C69Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:73 STA WINDOW_STATS + window_stats::id,X
    case 0xC101CD: {
        Instruction step(cpu, 0x9D, 0x0089C6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:74 LDA @LOCAL04
    case 0xC101D0: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:75 ASL
    case 0xC101D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:76 TAX
    case 0xC101D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    case 0xC101D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC101D4.
    case 0xC101D6: {
        Instruction step(cpu, 0xFF, 0x8C269Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:78 STA OPEN_WINDOW_TABLE,X
    case 0xC101D7: {
        Instruction step(cpu, 0x9D, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:79 LDX @LOCAL01
    case 0xC101DA: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:80 LDA WINDOW_STATS + window_stats::window_x,X
    case 0xC101DC: {
        Instruction step(cpu, 0xBD, 0x0089C8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:81 ASL
    case 0xC101DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:82 STA @VIRTUAL02
    case 0xC101E0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:83 LDA WINDOW_STATS + window_stats::window_y,X
    case 0xC101E2: {
        Instruction step(cpu, 0xBD, 0x0089CAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:85 CLC
    case 0xC101EB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/close_window.asm:86 ADC @VIRTUAL02
    case 0xC101EC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/close_window.asm:87 CLC
    case 0xC101EE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    case 0xC101EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC101EF.
    case 0xC101F1: {
        Instruction step(cpu, 0x81, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:90 TAY
    case 0xC101F2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/close_window.asm:91 STY @LOCAL00
    case 0xC101F3: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:92 LDA #0
    case 0xC101F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:92 LDA #0
    // Overlapping static entry reached from 0xC101F5.
    case 0xC101F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:93 STA @VIRTUAL02
    case 0xC101F8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:94 STA @LOCAL01
    case 0xC101FA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:140 BRA @UNKNOWN14
    case 0xC101FC: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:143 LDX #0
    case 0xC101FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:143 LDX #0
    // Overlapping static entry reached from 0xC101FE.
    case 0xC10200: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:144 STX @LOCAL03
    case 0xC10201: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:149 BRA @UNKNOWN13
    case 0xC10203: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/close_window.asm:152 LDA #0
    case 0xC10205: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:152 LDA #0
    // Overlapping static entry reached from 0xC10205.
    case 0xC10207: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:153 LDY @LOCAL00
    case 0xC10208: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:154 STA __BSS_START__,Y
    case 0xC1020A: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:155 INY
    case 0xC1020D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/close_window.asm:156 INY
    case 0xC1020E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/close_window.asm:157 STY @LOCAL00
    case 0xC1020F: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:158 INX
    case 0xC10211: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/close_window.asm:159 STX @LOCAL03
    case 0xC10212: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/close_window.asm:174 LDA @VIRTUAL04
    case 0xC10214: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    case 0xC10216: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10216.
    case 0xC10218: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:176 JSL MULT168
    case 0xC10219: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:177 TAX
    case 0xC1021D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:178 LDA WINDOW_STATS + window_stats::width,X
    case 0xC1021E: {
        Instruction step(cpu, 0xBD, 0x0089CCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:180 STA @LOCAL02
    case 0xC10221: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:181 STA @VIRTUAL02
    case 0xC10223: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:186 INC @VIRTUAL02
    case 0xC10225: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:187 INC @VIRTUAL02
    case 0xC10227: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:189 LDX @LOCAL03
    case 0xC10229: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/close_window.asm:190 TXA
    case 0xC1022B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:191 CMP @VIRTUAL02
    case 0xC1022C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:196 BNE @UNKNOWN12
    case 0xC1022E: {
        Instruction step(cpu, 0xD0, 0x0000D5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:198 LDA @LOCAL02
    case 0xC10230: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:199 STA @VIRTUAL02
    case 0xC10232: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:203 LDA #32
    case 0xC10234: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:203 LDA #32
    // Overlapping static entry reached from 0xC10234.
    case 0xC10236: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:204 SEC
    case 0xC10237: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/close_window.asm:205 SBC @VIRTUAL02
    case 0xC10238: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:206 DEC
    case 0xC1023A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/close_window.asm:207 DEC
    case 0xC1023B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/close_window.asm:208 ASL
    case 0xC1023C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:210 STA @VIRTUAL02
    case 0xC1023D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:211 LDY @LOCAL00
    case 0xC1023F: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:212 TYA
    case 0xC10241: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:220 CLC
    case 0xC10242: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/close_window.asm:221 ADC @VIRTUAL02
    case 0xC10243: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/close_window.asm:223 TAY
    case 0xC10245: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/close_window.asm:224 STY @LOCAL00
    case 0xC10246: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/close_window.asm:225 LDA @LOCAL01
    case 0xC10248: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:226 STA @VIRTUAL02
    case 0xC1024A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:227 INC @VIRTUAL02
    case 0xC1024C: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:228 LDA @VIRTUAL02
    case 0xC1024E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:229 STA @LOCAL01
    case 0xC10250: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:238 LDA @VIRTUAL04
    case 0xC10252: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    case 0xC10254: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10254.
    case 0xC10256: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:240 JSL MULT168
    case 0xC10257: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:241 TAX
    case 0xC1025B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:243 LDA @VIRTUAL02
    case 0xC1025C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:244 PHA
    case 0xC1025E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:248 LDA WINDOW_STATS + window_stats::height,X
    case 0xC1025F: {
        Instruction step(cpu, 0xBD, 0x0089CEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:249 STA @VIRTUAL02
    case 0xC10262: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:250 INC @VIRTUAL02
    case 0xC10264: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:251 INC @VIRTUAL02
    case 0xC10266: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/close_window.asm:253 PLA
    case 0xC10268: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:258 CMP @VIRTUAL02
    case 0xC10269: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:259 BNE @UNKNOWN11
    case 0xC1026B: {
        Instruction step(cpu, 0xD0, 0x000091u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:264 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC1026D: {
        Instruction step(cpu, 0xBD, 0x0089FDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:265 AND #$00FF
    case 0xC10270: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:265 AND #$00FF
    // Overlapping static entry reached from 0xC10270.
    case 0xC10272: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:266 BEQ @UNKNOWN15
    case 0xC10273: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/close_window.asm:267 AND #$00FF
    case 0xC10275: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC10275.
    case 0xC10277: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:268 DEC
    case 0xC10278: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/close_window.asm:269 ASL
    case 0xC10279: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/close_window.asm:270 TAX
    case 0xC1027A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    case 0xC1027B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1027B.
    case 0xC1027D: {
        Instruction step(cpu, 0xFF, 0x8C8E9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:272 STA TITLED_WINDOWS,X
    case 0xC1027E: {
        Instruction step(cpu, 0x9D, 0x008C8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:274 LDA @VIRTUAL04
    case 0xC10281: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    case 0xC10283: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10283.
    case 0xC10285: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/close_window.asm:276 JSL MULT168
    case 0xC10286: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/close_window.asm:277 TAX
    case 0xC1028A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/close_window.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC1028B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/close_window.asm:279 STZ WINDOW_STATS + window_stats::unknown59,X
    case 0xC1028D: {
        Instruction step(cpu, 0x9E, 0x0089FDu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/close_window.asm:280 LDA #1
    case 0xC10290: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    case 0xC10292: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10290.
    case 0xC10293: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10293.
    case 0xC10294: {
        Instruction step(cpu, 0x99, 0x0020C2u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:282 REP #PROC_FLAGS::ACCUM8
    case 0xC10295: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/close_window.asm:283 LDA PAGINATION_WINDOW
    case 0xC10297: {
        Instruction step(cpu, 0xAD, 0x0061F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:284 CMP @LOCAL04
    case 0xC1029A: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:285 BNE @UNKNOWN16
    case 0xC1029C: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    case 0xC1029E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1029E.
    case 0xC102A0: {
        Instruction step(cpu, 0xFF, 0x61F28Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/close_window.asm:287 STA PAGINATION_WINDOW
    case 0xC102A1: {
        Instruction step(cpu, 0x8D, 0x0061F2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC102A4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC102A5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
