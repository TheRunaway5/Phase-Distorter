// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C44E61.asm
bool resume_unresolved_c4_c44e61(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44E61.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44E61: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E63: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E64: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E65: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC44E66.
    case 0xC44E68: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E69: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C44E61.asm:13 END_STACK_VARS
    case 0xC44E6A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:14 TXY
    case 0xC44E6B: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:15 STY @LOCAL05
    case 0xC44E6C: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:16 STA @VIRTUAL02
    case 0xC44E6E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:17 LDA CURRENT_FOCUS_WINDOW
    case 0xC44E70: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:18 CMP #.LOWORD(-1)
    case 0xC44E73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44E73.
    case 0xC44E75: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44E61.asm:19 BEQL @UNKNOWN9
    case 0xC44E76: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44E61.asm:19 BEQL @UNKNOWN9
    case 0xC44E78: {
        Instruction step(cpu, 0x4C, 0x004FF1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44E61.asm:19 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC44E75.
    case 0xC44E79: {
        Instruction step(cpu, 0xF1, 0x00004Fu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:20 CPY #$2F
    case 0xC44E7B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:20 CPY #$2F
    // Overlapping static entry reached from 0xC44E7B.
    case 0xC44E7D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:21 BEQ @UNKNOWN1
    case 0xC44E7E: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:22 CPY #CHAR::EQUIPPED
    case 0xC44E80: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:22 CPY #CHAR::EQUIPPED
    // Overlapping static entry reached from 0xC44E80.
    case 0xC44E82: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:23 BEQ @UNKNOWN1
    case 0xC44E83: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:24 CPY #$20
    case 0xC44E85: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:24 CPY #$20
    // Overlapping static entry reached from 0xC44E85.
    case 0xC44E87: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:25 BNE @UNKNOWN2
    case 0xC44E88: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:27 TYA
    case 0xC44E8A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:28 JSL UNKNOWN_C43F77
    case 0xC44E8B: {
        Instruction step(cpu, 0x22, 0xC43F77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:29 JSL UNKNOWN_C43CAA
    case 0xC44E8F: {
        Instruction step(cpu, 0x22, 0xC43CAAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:30 JMP @UNKNOWN9
    case 0xC44E93: {
        Instruction step(cpu, 0x4C, 0x004FF1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:32 LDA CURRENT_FOCUS_WINDOW
    case 0xC44E96: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:33 ASL
    case 0xC44E99: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:34 TAX
    case 0xC44E9A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:35 LDA OPEN_WINDOW_TABLE,X
    case 0xC44E9B: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:36 LDY #.SIZEOF(window_stats)
    case 0xC44E9E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:36 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC44E9E.
    case 0xC44EA0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:37 JSL MULT168
    case 0xC44EA1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:38 CLC
    case 0xC44EA5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:39 ADC #.LOWORD(WINDOW_STATS)
    case 0xC44EA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:39 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC44EA6.
    case 0xC44EA8: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:40 TAX
    case 0xC44EA9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:41 LDY @LOCAL05
    case 0xC44EAA: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:42 CPY #CHAR::SPACE
    case 0xC44EAC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:42 CPY #CHAR::SPACE
    // Overlapping static entry reached from 0xC44EAC.
    case 0xC44EAE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:43 BNE @UNKNOWN4
    case 0xC44EAF: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:44 LDA VWF_INDENT_NEW_LINE
    case 0xC44EB1: {
        Instruction step(cpu, 0xAD, 0x005E75u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:45 AND #$00FF
    case 0xC44EB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC44EB4.
    case 0xC44EB6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C44E61.asm:46 BNEL @UNKNOWN9
    case 0xC44EB7: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C44E61.asm:46 BNEL @UNKNOWN9
    case 0xC44EB9: {
        Instruction step(cpu, 0x4C, 0x004FF1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:47 BRA @UNKNOWN6
    case 0xC44EBC: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:49 LDA VWF_INDENT_NEW_LINE
    case 0xC44EBE: {
        Instruction step(cpu, 0xAD, 0x005E75u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:50 AND #$00FF
    case 0xC44EC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC44EC1.
    case 0xC44EC3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:51 BEQ @UNKNOWN6
    case 0xC44EC4: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:52 STZ a:window_stats::text_x,X
    case 0xC44EC6: {
        Instruction step(cpu, 0x9E, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:53 CPY #CHAR::BULLET
    case 0xC44EC9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:53 CPY #CHAR::BULLET
    // Overlapping static entry reached from 0xC44EC9.
    case 0xC44ECB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:54 BEQ @UNKNOWN5
    case 0xC44ECC: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:55 LDA a:window_stats::text_y,X
    case 0xC44ECE: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:56 TAX
    case 0xC44ED1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:57 LDA #6
    case 0xC44ED2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:57 LDA #6
    // Overlapping static entry reached from 0xC44ED2.
    case 0xC44ED4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:58 JSL UNKNOWN_C43D75
    case 0xC44ED5: {
        Instruction step(cpu, 0x22, 0xC43D75u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC44ED9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:61 STZ VWF_INDENT_NEW_LINE
    case 0xC44EDB: {
        Instruction step(cpu, 0x9C, 0x005E75u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:63 LDY @LOCAL05
    case 0xC44EDE: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC44EE0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:65 TYA
    case 0xC44EE2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC44EE3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:67 STA LAST_PRINTED_CHARACTER
    case 0xC44EE5: {
        Instruction step(cpu, 0x8D, 0x005E76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC44EE8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:69 TYA
    case 0xC44EEA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:70 SEC
    case 0xC44EEB: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:71 SBC #$50
    case 0xC44EEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:71 SBC #$50
    // Overlapping static entry reached from 0xC44EEC.
    case 0xC44EEE: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:72 AND #$007F
    case 0xC44EEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:72 AND #$007F
    // Overlapping static entry reached from 0xC44EEF.
    case 0xC44EF1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:73 STA @LOCAL04
    case 0xC44EF2: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x00F054u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44EF4.
    case 0xC44EF6: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EF7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44EF6.
    case 0xC44EF8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44EF9.
    case 0xC44EFB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44E61.asm:74 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC44EFC: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:75 LDA @VIRTUAL02
    case 0xC44EFE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F00: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F03: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F05: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C44E61.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC44F06: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:77 TAY
    case 0xC44F07: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:78 STY @LOCAL03
    case 0xC44F08: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:79 TYA
    case 0xC44F0A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:80 CLC
    case 0xC44F0B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:81 ADC #font_table_entry::height
    case 0xC44F0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:81 ADC #font_table_entry::height
    // Overlapping static entry reached from 0xC44F0C.
    case 0xC44F0E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F0F: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F11: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F13: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:82 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F15: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:83 CLC
    case 0xC44F17: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:84 ADC @VIRTUAL06
    case 0xC44F18: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:85 STA @VIRTUAL06
    case 0xC44F1A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:86 LDA [@VIRTUAL06]
    case 0xC44F1C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:87 TAX
    case 0xC44F1E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:88 TYA
    case 0xC44F1F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:89 INC
    case 0xC44F20: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:90 INC
    case 0xC44F21: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:91 INC
    case 0xC44F22: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:92 INC
    case 0xC44F23: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F24: {
        Instruction step(cpu, 0xA4, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F26: {
        Instruction step(cpu, 0x84, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F28: {
        Instruction step(cpu, 0xA4, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:93 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC44F2A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:94 CLC
    case 0xC44F2C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:95 ADC @VIRTUAL06
    case 0xC44F2D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:96 STA @VIRTUAL06
    case 0xC44F2F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F31: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC44F31.
    case 0xC44F33: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F34: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F36: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F37: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F39: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44F3B: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:98 LDA @LOCAL04
    case 0xC44F3D: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:99 TAY
    case 0xC44F3F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:100 TXA
    case 0xC44F40: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:101 JSL MULT16
    case 0xC44F41: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:102 CLC
    case 0xC44F45: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:103 ADC @VIRTUAL06
    case 0xC44F46: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:104 STA @VIRTUAL06
    case 0xC44F48: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:105 STA @LOCAL02
    case 0xC44F4A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:106 LDA @VIRTUAL06+2
    case 0xC44F4C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:107 STA @LOCAL02+2
    case 0xC44F4E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:108 LDY @LOCAL03
    case 0xC44F50: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:109 TYA
    case 0xC44F52: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:110 CLC
    case 0xC44F53: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:111 ADC #font_table_entry::width
    case 0xC44F54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:111 ADC #font_table_entry::width
    // Overlapping static entry reached from 0xC44F54.
    case 0xC44F56: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F57: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F59: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F5B: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC44F5D: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:113 CLC
    case 0xC44F5F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:114 ADC @VIRTUAL06
    case 0xC44F60: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:115 STA @VIRTUAL06
    case 0xC44F62: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:116 LDA [@VIRTUAL06]
    case 0xC44F64: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:117 STA @VIRTUAL02
    case 0xC44F66: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:118 TYA
    case 0xC44F68: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:119 CLC
    case 0xC44F69: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:120 ADC @VIRTUAL0A
    case 0xC44F6A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:121 STA @VIRTUAL0A
    case 0xC44F6C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F6E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44F6E.
    case 0xC44F70: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F71: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F73: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F74: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F76: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:122 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC44F78: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:123 LDA @LOCAL04
    case 0xC44F7A: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:124 CLC
    case 0xC44F7C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:125 ADC @VIRTUAL0A
    case 0xC44F7D: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:126 STA @VIRTUAL0A
    case 0xC44F7F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:127 LDA [@VIRTUAL0A]
    case 0xC44F81: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:128 AND #$00FF
    case 0xC44F83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC44F83.
    case 0xC44F85: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:129 STA @LOCAL04
    case 0xC44F86: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:130 LDA CHARACTER_PADDING
    case 0xC44F88: {
        Instruction step(cpu, 0xAD, 0x005E6Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:131 AND #$00FF
    case 0xC44F8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC44F8B.
    case 0xC44F8D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:132 STA @VIRTUAL04
    case 0xC44F8E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:133 LDA @LOCAL04
    case 0xC44F90: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:134 CLC
    case 0xC44F92: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:135 ADC @VIRTUAL04
    case 0xC44F93: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:136 TAY
    case 0xC44F95: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:137 STY @LOCAL01
    case 0xC44F96: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:138 CPY #8
    case 0xC44F98: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:138 CPY #8
    // Overlapping static entry reached from 0xC44F98.
    case 0xC44F9A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C44E61.asm:139 BLTEQ @UNKNOWN8
    case 0xC44F9B: {
        Instruction step(cpu, 0x90, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C44E61.asm:139 BLTEQ @UNKNOWN8
    case 0xC44F9D: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44F9F: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FA1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FA3: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:141 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FA5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FA7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FA9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FAB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:142 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FAD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:143 LDX @VIRTUAL02
    case 0xC44FAF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:144 LDA #8
    case 0xC44FB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:144 LDA #8
    // Overlapping static entry reached from 0xC44FB1.
    case 0xC44FB3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:145 JSL UNKNOWN_C44B3A
    case 0xC44FB4: {
        Instruction step(cpu, 0x22, 0xC44B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:145 JSL UNKNOWN_C44B3A
    // Overlapping static entry reached from 0xC4502F.
    case 0xC44FB6: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:145 JSL UNKNOWN_C44B3A
    // Overlapping static entry reached from 0xC44FB6.
    case 0xC44FB7: {
        Instruction step(cpu, 0xC4, 0x0000A4u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:146 LDY @LOCAL01
    case 0xC44FB8: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:146 LDY @LOCAL01
    // Overlapping static entry reached from 0xC44FB7.
    case 0xC44FB9: {
        Instruction step(cpu, 0x12, 0x000098u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:147 TYA
    case 0xC44FBA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:148 SEC
    case 0xC44FBB: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:149 SBC #8
    case 0xC44FBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:149 SBC #8
    // Overlapping static entry reached from 0xC44FBC.
    case 0xC44FBE: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:150 TAY
    case 0xC44FBF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:151 STY @LOCAL01
    case 0xC44FC0: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:152 LDA @VIRTUAL02
    case 0xC44FC2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:153 CLC
    case 0xC44FC4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:154 ADC @VIRTUAL06
    case 0xC44FC5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:155 STA @VIRTUAL06
    case 0xC44FC7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:156 STA @LOCAL02
    case 0xC44FC9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:157 LDA @VIRTUAL06+2
    case 0xC44FCB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:158 STA @LOCAL02+2
    case 0xC44FCD: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:159 CPY #8
    case 0xC44FCF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:159 CPY #8
    // Overlapping static entry reached from 0xC44FCF.
    case 0xC44FD1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C4/C44E61.asm:160 BGT @UNKNOWN7
    case 0xC44FD2: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C4/C44E61.asm:160 BGT @UNKNOWN7
    case 0xC44FD4: {
        Instruction step(cpu, 0xB0, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FD6: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FD8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FDA: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:162 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC44FDC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FDE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FE0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FE2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44E61.asm:163 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44FE4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:164 LDX @VIRTUAL02
    case 0xC44FE6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:165 TYA
    case 0xC44FE8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:166 JSL UNKNOWN_C44B3A
    case 0xC44FE9: {
        Instruction step(cpu, 0x22, 0xC44B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C44E61.asm:167 JSL UNKNOWN_C44DCA
    case 0xC44FED: {
        Instruction step(cpu, 0x22, 0xC44DCAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44E61.asm:169 END_C_FUNCTION
    case 0xC44FF1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44E61.asm:169 END_C_FUNCTION
    case 0xC44FF2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
