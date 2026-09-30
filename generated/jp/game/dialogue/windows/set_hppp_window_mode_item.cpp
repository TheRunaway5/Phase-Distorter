// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/set_hppp_window_mode_item.asm
bool resume_text_set_hppp_window_mode_item(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_hppp_window_mode_item.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC19B4B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B4D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B4E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B4F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC19B50.
    case 0xC19B52: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B53: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B54: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    case 0xC19B55: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC19B52.
    case 0xC19B56: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:15 STA @LOCAL03
    case 0xC19B57: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:15 STA @LOCAL03
    // Overlapping static entry reached from 0xC19B56.
    case 0xC19B58: {
        Instruction step(cpu, 0x14, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    case 0xC19B59: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B58.
    case 0xC19B5A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B59.
    case 0xC19B5B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:18 STY @LOCAL02
    case 0xC19B5C: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:19 JMP @UNKNOWN17
    case 0xC19B5E: {
        Instruction step(cpu, 0x4C, 0x009CD3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:22 LDA @LOCAL03
    case 0xC19B61: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:23 STA @VIRTUAL04
    case 0xC19B63: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:25 LDX @VIRTUAL04
    case 0xC19B65: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:26 TYA
    case 0xC19B67: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:27 INC
    case 0xC19B68: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:28 JSL UNKNOWN_C3EE14
    case 0xC19B69: {
        Instruction step(cpu, 0x22, 0xC3E9DAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    case 0xC19B6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    // Overlapping static entry reached from 0xC19B6D.
    case 0xC19B6F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:30 BNE @UNKNOWN1
    case 0xC19B70: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    case 0xC19B72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    // Overlapping static entry reached from 0xC19B72.
    case 0xC19B74: {
        Instruction step(cpu, 0x0C, 0x001085u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:32 STA @LOCAL01
    case 0xC19B75: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:33 JMP @UNKNOWN16
    case 0xC19B77: {
        Instruction step(cpu, 0x4C, 0x009CBEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:35 LDA @VIRTUAL04
    case 0xC19B7A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:36 JSR GET_ITEM_TYPE
    case 0xC19B7C: {
        Instruction step(cpu, 0x20, 0x009EE3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    case 0xC19B7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    // Overlapping static entry reached from 0xC19B7F.
    case 0xC19B81: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:38 BEQ @UNKNOWN2
    case 0xC19B82: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    case 0xC19B84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    // Overlapping static entry reached from 0xC19B84.
    case 0xC19B86: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    case 0xC19B87: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    // Overlapping static entry reached from 0xC19B86.
    case 0xC19B88: {
        Instruction step(cpu, 0x10, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    case 0xC19B89: {
        Instruction step(cpu, 0x4C, 0x009CBEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    // Overlapping static entry reached from 0xC19B88.
    case 0xC19B8A: {
        Instruction step(cpu, 0xBE, 0x00A59Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:43 LDA @VIRTUAL04
    case 0xC19B8C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:43 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC19B8A.
    case 0xC19B8D: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B8E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19B8D.
    case 0xC19B8F: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B90: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B91: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B93: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B94: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B95: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:45 CLC
    case 0xC19B96: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    case 0xC19B97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    // Overlapping static entry reached from 0xC19B97.
    case 0xC19B99: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:47 TAX
    case 0xC19B9A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:48 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19B9B: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    case 0xC19B9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC19B9F.
    case 0xC19BA1: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    case 0xC19BA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    // Overlapping static entry reached from 0xC19BA2.
    case 0xC19BA4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:51 BEQ @UNKNOWN3
    case 0xC19BA5: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    case 0xC19BA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    // Overlapping static entry reached from 0xC19BA7.
    case 0xC19BA9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:53 BEQ @UNKNOWN4
    case 0xC19BAA: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    case 0xC19BAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    // Overlapping static entry reached from 0xC19BAC.
    case 0xC19BAE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:55 BEQ @UNKNOWN5
    case 0xC19BAF: {
        Instruction step(cpu, 0xF0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    case 0xC19BB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    // Overlapping static entry reached from 0xC19BB1.
    case 0xC19BB3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:57 BEQ @UNKNOWN6
    case 0xC19BB4: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:58 BRA @UNKNOWN7
    case 0xC19BB6: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:60 LDY @LOCAL02
    case 0xC19BB8: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:61 TYA
    case 0xC19BBA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    case 0xC19BBB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BBB.
    case 0xC19BBD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:63 JSL MULT168
    case 0xC19BBE: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:64 TAX
    case 0xC19BC2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:65 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC19BC3: {
        Instruction step(cpu, 0xBD, 0x009CAFu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    case 0xC19BC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC19BC6.
    case 0xC19BC8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:67 STA @VIRTUAL02
    case 0xC19BC9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:68 STA @LOCAL00
    case 0xC19BCB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:69 BRA @UNKNOWN7
    case 0xC19BCD: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:71 LDY @LOCAL02
    case 0xC19BCF: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:72 TYA
    case 0xC19BD1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    case 0xC19BD2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BD2.
    case 0xC19BD4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    case 0xC19BD5: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    // Overlapping static entry reached from 0xC19B88.
    case 0xC19BD6: {
        Instruction step(cpu, 0xDB, 0x000000u, 1u, AddressMode::Implied);
        step.stop();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:75 TAX
    case 0xC19BD9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:76 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC19BDA: {
        Instruction step(cpu, 0xBD, 0x009CB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    case 0xC19BDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC19BDD.
    case 0xC19BDF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:78 STA @VIRTUAL02
    case 0xC19BE0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:79 STA @LOCAL00
    case 0xC19BE2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:80 BRA @UNKNOWN7
    case 0xC19BE4: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:82 LDY @LOCAL02
    case 0xC19BE6: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:83 TYA
    case 0xC19BE8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    case 0xC19BE9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BE9.
    case 0xC19BEB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:85 JSL MULT168
    case 0xC19BEC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:86 TAX
    case 0xC19BF0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:87 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC19BF1: {
        Instruction step(cpu, 0xBD, 0x009CB1u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    case 0xC19BF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC19BF4.
    case 0xC19BF6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:89 STA @VIRTUAL02
    case 0xC19BF7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:90 STA @LOCAL00
    case 0xC19BF9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:91 BRA @UNKNOWN7
    case 0xC19BFB: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:93 LDY @LOCAL02
    case 0xC19BFD: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:94 TYA
    case 0xC19BFF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    case 0xC19C00: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19C00.
    case 0xC19C02: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:96 JSL MULT168
    case 0xC19C03: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:97 TAX
    case 0xC19C07: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:98 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC19C08: {
        Instruction step(cpu, 0xBD, 0x009CB2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    case 0xC19C0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC19C0B.
    case 0xC19C0D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:100 STA @VIRTUAL02
    case 0xC19C0E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:101 STA @LOCAL00
    case 0xC19C10: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:103 LDA @LOCAL00
    case 0xC19C12: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:104 STA @VIRTUAL02
    case 0xC19C14: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:105 BEQ @UNKNOWN9
    case 0xC19C16: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    case 0xC19C18: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    // Overlapping static entry reached from 0xC19C18.
    case 0xC19C1A: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:107 STX @LOCAL01
    case 0xC19C1B: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:108 LDY @LOCAL02
    case 0xC19C1D: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    case 0xC19C1F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    // Overlapping static entry reached from 0xC19C1F.
    case 0xC19C21: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:110 BNE @UNKNOWN8
    case 0xC19C22: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    case 0xC19C24: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    // Overlapping static entry reached from 0xC19C24.
    case 0xC19C26: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:112 STX @LOCAL01
    case 0xC19C27: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:114 LDA @VIRTUAL02
    case 0xC19C29: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:115 DEC
    case 0xC19C2B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:117 STA @VIRTUAL04
    case 0xC19C2C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:121 TYA
    case 0xC19C2E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    case 0xC19C2F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19C2F.
    case 0xC19C31: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:123 JSL MULT168
    case 0xC19C32: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:124 CLC
    case 0xC19C36: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC19C37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC19C37.
    case 0xC19C39: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:126 CLC
    case 0xC19C3A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:128 ADC @VIRTUAL04
    case 0xC19C3B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:128 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC19C39.
    case 0xC19C3C: {
        Instruction step(cpu, 0x04, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:132 TAX
    case 0xC19C3D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:133 LDA __BSS_START__,X
    case 0xC19C3E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    case 0xC19C41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC19C41.
    case 0xC19C43: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C44: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C46: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C47: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C49: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C4A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C4B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:136 LDX @LOCAL01
    case 0xC19C4C: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:137 STX @VIRTUAL02
    case 0xC19C4E: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:138 CLC
    case 0xC19C50: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:139 ADC @VIRTUAL02
    case 0xC19C51: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:140 CLC
    case 0xC19C53: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    case 0xC19C54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C54.
    case 0xC19C56: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:142 TAX
    case 0xC19C57: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:143 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C58: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:144 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C5A: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC19C5E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:146 SEC
    case 0xC19C60: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    case 0xC19C61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    // Overlapping static entry reached from 0xC19C61.
    case 0xC19C63: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    case 0xC19C64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    // Overlapping static entry reached from 0xC19C64.
    case 0xC19C66: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    case 0xC19C67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    // Overlapping static entry reached from 0xC19C67.
    case 0xC19C69: {
        Instruction step(cpu, 0xFF, 0xA90380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:150 BRA @UNKNOWN10
    case 0xC19C6A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    case 0xC19C6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C69.
    case 0xC19C6D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C6C.
    case 0xC19C6E: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    case 0xC19C6F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    // Overlapping static entry reached from 0xC19C6F.
    case 0xC19C71: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:155 LDY @LOCAL02
    case 0xC19C72: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    case 0xC19C74: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    // Overlapping static entry reached from 0xC19C74.
    case 0xC19C76: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:157 BNE @UNKNOWN11
    case 0xC19C77: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    case 0xC19C79: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    // Overlapping static entry reached from 0xC19C79.
    case 0xC19C7B: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:160 PHA
    case 0xC19C7C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:161 STX @VIRTUAL02
    case 0xC19C7D: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:163 LDA @LOCAL03
    case 0xC19C7F: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:164 STA @VIRTUAL04
    case 0xC19C81: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C83: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C85: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C86: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C88: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C89: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C8A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:169 CLC
    case 0xC19C8B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:170 ADC @VIRTUAL02
    case 0xC19C8C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:171 CLC
    case 0xC19C8E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    case 0xC19C8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C8F.
    case 0xC19C91: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:173 TAX
    case 0xC19C92: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C93: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:175 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C95: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC19C99: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:177 SEC
    case 0xC19C9B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    case 0xC19C9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC19C9C.
    case 0xC19C9E: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    case 0xC19C9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    // Overlapping static entry reached from 0xC19C9F.
    case 0xC19CA1: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    case 0xC19CA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    // Overlapping static entry reached from 0xC19CA2.
    case 0xC19CA4: {
        Instruction step(cpu, 0xFF, 0x02847Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:181 PLY
    case 0xC19CA5: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:182 STY @VIRTUAL02
    case 0xC19CA6: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:183 CLC
    case 0xC19CA8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:184 SBC @VIRTUAL02
    case 0xC19CA9: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CAB: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CAD: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CAF: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CB1: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    case 0xC19CB3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    // Overlapping static entry reached from 0xC19CB3.
    case 0xC19CB5: {
        Instruction step(cpu, 0x14, 0x000080u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    case 0xC19CB6: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    // Overlapping static entry reached from 0xC19CB5.
    case 0xC19CB7: {
        Instruction step(cpu, 0x03, 0x0000A2u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    case 0xC19CB8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CB7.
    case 0xC19CB9: {
        Instruction step(cpu, 0x00, 0x000004u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CB8.
    case 0xC19CBA: {
        Instruction step(cpu, 0x04, 0x00008Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:191 TXA
    case 0xC19CBB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:192 STA @LOCAL01
    case 0xC19CBC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:194 LDY @LOCAL02
    case 0xC19CBE: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:195 TYA
    case 0xC19CC0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    case 0xC19CC1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19CC1.
    case 0xC19CC3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:197 JSL MULT168
    case 0xC19CC4: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:198 TAX
    case 0xC19CC8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:199 LDA @LOCAL01
    case 0xC19CC9: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:200 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19CCB: {
        Instruction step(cpu, 0x9D, 0x009CCDu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:201 LDY @LOCAL02
    case 0xC19CCE: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:202 INY
    case 0xC19CD0: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:203 STY @LOCAL02
    case 0xC19CD1: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    case 0xC19CD3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19CD3.
    case 0xC19CD5: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD6: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CDA: {
        Instruction step(cpu, 0x4C, 0x009B61u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    case 0xC19CDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    // Overlapping static entry reached from 0xC19CDD.
    case 0xC19CDF: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:208 STA REDRAW_ALL_WINDOWS
    case 0xC19CE0: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CE3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CE4: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
