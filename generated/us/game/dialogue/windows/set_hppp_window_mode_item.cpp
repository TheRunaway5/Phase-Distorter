// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/set_hppp_window_mode_item.asm
bool resume_text_set_hppp_window_mode_item(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_hppp_window_mode_item.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC19B4E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B50: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B51: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B52: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC19B53.
    case 0xC19B55: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B56: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B57: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    case 0xC19B58: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC19B55.
    case 0xC19B59: {
        Instruction step(cpu, 0x04, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    case 0xC19B5A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B59.
    case 0xC19B5B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B5A.
    case 0xC19B5C: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:18 STY @LOCAL02
    case 0xC19B5D: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:19 JMP @UNKNOWN17
    case 0xC19B5F: {
        Instruction step(cpu, 0x4C, 0x009CCBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:25 LDX @VIRTUAL04
    case 0xC19B62: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:26 TYA
    case 0xC19B64: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:27 INC
    case 0xC19B65: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:28 JSL UNKNOWN_C3EE14
    case 0xC19B66: {
        Instruction step(cpu, 0x22, 0xC3EE14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    case 0xC19B6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    // Overlapping static entry reached from 0xC19B6A.
    case 0xC19B6C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:30 BNE @UNKNOWN1
    case 0xC19B6D: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    case 0xC19B6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    // Overlapping static entry reached from 0xC19B6F.
    case 0xC19B71: {
        Instruction step(cpu, 0x0C, 0x001085u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:32 STA @LOCAL01
    case 0xC19B72: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:33 JMP @UNKNOWN16
    case 0xC19B74: {
        Instruction step(cpu, 0x4C, 0x009CB6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:35 LDA @VIRTUAL04
    case 0xC19B77: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:36 JSR GET_ITEM_TYPE
    case 0xC19B79: {
        Instruction step(cpu, 0x20, 0x009EE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    case 0xC19B7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    // Overlapping static entry reached from 0xC19B7C.
    case 0xC19B7E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:38 BEQ @UNKNOWN2
    case 0xC19B7F: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    case 0xC19B81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    // Overlapping static entry reached from 0xC19B81.
    case 0xC19B83: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    case 0xC19B84: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    // Overlapping static entry reached from 0xC19B83.
    case 0xC19B85: {
        Instruction step(cpu, 0x10, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    case 0xC19B86: {
        Instruction step(cpu, 0x4C, 0x009CB6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    // Overlapping static entry reached from 0xC19B85.
    case 0xC19B87: {
        Instruction step(cpu, 0xB6, 0x00009Cu, 2u, AddressMode::DirectPageIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:43 LDA @VIRTUAL04
    case 0xC19B89: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B8B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19B8B.
    case 0xC19B8D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B8E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:45 CLC
    case 0xC19B92: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    case 0xC19B93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    // Overlapping static entry reached from 0xC19B93.
    case 0xC19B95: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:47 TAX
    case 0xC19B96: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:48 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19B97: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    case 0xC19B9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC19B9B.
    case 0xC19B9D: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    case 0xC19B9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    // Overlapping static entry reached from 0xC19B9E.
    case 0xC19BA0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:51 BEQ @UNKNOWN3
    case 0xC19BA1: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    case 0xC19BA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    // Overlapping static entry reached from 0xC19BA3.
    case 0xC19BA5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:53 BEQ @UNKNOWN4
    case 0xC19BA6: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    case 0xC19BA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    // Overlapping static entry reached from 0xC19BA8.
    case 0xC19BAA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:55 BEQ @UNKNOWN5
    case 0xC19BAB: {
        Instruction step(cpu, 0xF0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    case 0xC19BAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    // Overlapping static entry reached from 0xC19BAD.
    case 0xC19BAF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:57 BEQ @UNKNOWN6
    case 0xC19BB0: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:58 BRA @UNKNOWN7
    case 0xC19BB2: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:60 LDY @LOCAL02
    case 0xC19BB4: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:61 TYA
    case 0xC19BB6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    case 0xC19BB7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BB7.
    case 0xC19BB9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:63 JSL MULT168
    case 0xC19BBA: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:64 TAX
    case 0xC19BBE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:65 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC19BBF: {
        Instruction step(cpu, 0xBD, 0x0099FFu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    case 0xC19BC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC19BC2.
    case 0xC19BC4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:67 STA @VIRTUAL02
    case 0xC19BC5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:68 STA @LOCAL00
    case 0xC19BC7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:69 BRA @UNKNOWN7
    case 0xC19BC9: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:71 LDY @LOCAL02
    case 0xC19BCB: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:72 TYA
    case 0xC19BCD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    case 0xC19BCE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BCE.
    case 0xC19BD0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    case 0xC19BD1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    // Overlapping static entry reached from 0xC19B85.
    case 0xC19BD3: {
        Instruction step(cpu, 0x8F, 0xBDAAC0u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:75 TAX
    case 0xC19BD5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:76 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC19BD6: {
        Instruction step(cpu, 0xBD, 0x009A00u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:76 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    // Overlapping static entry reached from 0xC19BD3.
    case 0xC19BD7: {
        Instruction step(cpu, 0x00, 0x00009Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    case 0xC19BD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC19BD9.
    case 0xC19BDB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:78 STA @VIRTUAL02
    case 0xC19BDC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:79 STA @LOCAL00
    case 0xC19BDE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:80 BRA @UNKNOWN7
    case 0xC19BE0: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:82 LDY @LOCAL02
    case 0xC19BE2: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:83 TYA
    case 0xC19BE4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    case 0xC19BE5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BE5.
    case 0xC19BE7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:85 JSL MULT168
    case 0xC19BE8: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:86 TAX
    case 0xC19BEC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:87 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC19BED: {
        Instruction step(cpu, 0xBD, 0x009A01u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    case 0xC19BF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC19BF0.
    case 0xC19BF2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:89 STA @VIRTUAL02
    case 0xC19BF3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:90 STA @LOCAL00
    case 0xC19BF5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:91 BRA @UNKNOWN7
    case 0xC19BF7: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:93 LDY @LOCAL02
    case 0xC19BF9: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:94 TYA
    case 0xC19BFB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    case 0xC19BFC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BFC.
    case 0xC19BFE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:96 JSL MULT168
    case 0xC19BFF: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:97 TAX
    case 0xC19C03: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:98 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC19C04: {
        Instruction step(cpu, 0xBD, 0x009A02u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    case 0xC19C07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC19C07.
    case 0xC19C09: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:100 STA @VIRTUAL02
    case 0xC19C0A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:101 STA @LOCAL00
    case 0xC19C0C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:103 LDA @LOCAL00
    case 0xC19C0E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:104 STA @VIRTUAL02
    case 0xC19C10: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:105 BEQ @UNKNOWN9
    case 0xC19C12: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    case 0xC19C14: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    // Overlapping static entry reached from 0xC19C14.
    case 0xC19C16: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:107 STX @LOCAL01
    case 0xC19C17: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:108 LDY @LOCAL02
    case 0xC19C19: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    case 0xC19C1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    // Overlapping static entry reached from 0xC19C1B.
    case 0xC19C1D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:110 BNE @UNKNOWN8
    case 0xC19C1E: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    case 0xC19C20: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    // Overlapping static entry reached from 0xC19C20.
    case 0xC19C22: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:112 STX @LOCAL01
    case 0xC19C23: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:114 LDA @VIRTUAL02
    case 0xC19C25: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:115 DEC
    case 0xC19C27: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:119 STA @VIRTUAL02
    case 0xC19C28: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:121 TYA
    case 0xC19C2A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    case 0xC19C2B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19C2B.
    case 0xC19C2D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:123 JSL MULT168
    case 0xC19C2E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:124 CLC
    case 0xC19C32: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC19C33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC19C33.
    case 0xC19C35: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:126 CLC
    case 0xC19C36: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:130 ADC @VIRTUAL02
    case 0xC19C37: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:130 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC19C35.
    case 0xC19C38: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:132 TAX
    case 0xC19C39: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:133 LDA __BSS_START__,X
    case 0xC19C3A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    case 0xC19C3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC19C3D.
    case 0xC19C3F: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C40: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19C40.
    case 0xC19C42: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C43: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:136 LDX @LOCAL01
    case 0xC19C47: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:137 STX @VIRTUAL02
    case 0xC19C49: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:138 CLC
    case 0xC19C4B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:139 ADC @VIRTUAL02
    case 0xC19C4C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:140 CLC
    case 0xC19C4E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    case 0xC19C4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C4F.
    case 0xC19C51: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:142 TAX
    case 0xC19C52: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:143 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C53: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:144 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C55: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC19C59: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:146 SEC
    case 0xC19C5B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    case 0xC19C5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    // Overlapping static entry reached from 0xC19C5C.
    case 0xC19C5E: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    case 0xC19C5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    // Overlapping static entry reached from 0xC19C5F.
    case 0xC19C61: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    case 0xC19C62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    // Overlapping static entry reached from 0xC19C62.
    case 0xC19C64: {
        Instruction step(cpu, 0xFF, 0xA90380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:150 BRA @UNKNOWN10
    case 0xC19C65: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    case 0xC19C67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C64.
    case 0xC19C68: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C67.
    case 0xC19C69: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    case 0xC19C6A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    // Overlapping static entry reached from 0xC19C6A.
    case 0xC19C6C: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:155 LDY @LOCAL02
    case 0xC19C6D: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    case 0xC19C6F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    // Overlapping static entry reached from 0xC19C6F.
    case 0xC19C71: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:157 BNE @UNKNOWN11
    case 0xC19C72: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    case 0xC19C74: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    // Overlapping static entry reached from 0xC19C74.
    case 0xC19C76: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:160 PHA
    case 0xC19C77: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:161 STX @VIRTUAL02
    case 0xC19C78: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:166 LDA @VIRTUAL04
    case 0xC19C7A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C7C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19C7C.
    case 0xC19C7E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C7F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:169 CLC
    case 0xC19C83: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:170 ADC @VIRTUAL02
    case 0xC19C84: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:171 CLC
    case 0xC19C86: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    case 0xC19C87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C87.
    case 0xC19C89: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:173 TAX
    case 0xC19C8A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C8B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:175 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C8D: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC19C91: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:177 SEC
    case 0xC19C93: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    case 0xC19C94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC19C94.
    case 0xC19C96: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    case 0xC19C97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    // Overlapping static entry reached from 0xC19C97.
    case 0xC19C99: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    case 0xC19C9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    // Overlapping static entry reached from 0xC19C9A.
    case 0xC19C9C: {
        Instruction step(cpu, 0xFF, 0x02847Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:181 PLY
    case 0xC19C9D: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:182 STY @VIRTUAL02
    case 0xC19C9E: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:183 CLC
    case 0xC19CA0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:184 SBC @VIRTUAL02
    case 0xC19CA1: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA3: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA5: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA7: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA9: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    case 0xC19CAB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    // Overlapping static entry reached from 0xC19CAB.
    case 0xC19CAD: {
        Instruction step(cpu, 0x14, 0x000080u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    case 0xC19CAE: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    // Overlapping static entry reached from 0xC19CAD.
    case 0xC19CAF: {
        Instruction step(cpu, 0x03, 0x0000A2u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    case 0xC19CB0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CAF.
    case 0xC19CB1: {
        Instruction step(cpu, 0x00, 0x000004u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CB0.
    case 0xC19CB2: {
        Instruction step(cpu, 0x04, 0x00008Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:191 TXA
    case 0xC19CB3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:192 STA @LOCAL01
    case 0xC19CB4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:194 LDY @LOCAL02
    case 0xC19CB6: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:195 TYA
    case 0xC19CB8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    case 0xC19CB9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19CB9.
    case 0xC19CBB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:197 JSL MULT168
    case 0xC19CBC: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:198 TAX
    case 0xC19CC0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:199 LDA @LOCAL01
    case 0xC19CC1: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:200 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19CC3: {
        Instruction step(cpu, 0x9D, 0x009A1Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:201 LDY @LOCAL02
    case 0xC19CC6: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:202 INY
    case 0xC19CC8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:203 STY @LOCAL02
    case 0xC19CC9: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    case 0xC19CCB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19CCB.
    case 0xC19CCD: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CCE: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD2: {
        Instruction step(cpu, 0x4C, 0x009B62u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    case 0xC19CD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    // Overlapping static entry reached from 0xC19CD5.
    case 0xC19CD7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_hppp_window_mode_item.asm:208 STA REDRAW_ALL_WINDOWS
    case 0xC19CD8: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CDB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CDC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
