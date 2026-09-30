// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_1A.asm
bool resume_text_ccs_tree_1a(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1A.asm:3 BEGIN_C_FUNCTION
    case 0xC17B56: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B58: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B59: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17B5B.
    case 0xC17B5D: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17B5F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:10 TXA
    case 0xC17B60: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:11 BEQ @UNKNOWN2
    case 0xC17B61: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    case 0xC17B63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC17B63.
    case 0xC17B65: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:13 BEQ @UNKNOWN3
    case 0xC17B66: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    case 0xC17B68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    // Overlapping static entry reached from 0xC17B68.
    case 0xC17B6A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:15 BEQ @UNKNOWN4
    case 0xC17B6B: {
        Instruction step(cpu, 0xF0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    case 0xC17B6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    // Overlapping static entry reached from 0xC17B6D.
    case 0xC17B6F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:17 BEQ @UNKNOWN5
    case 0xC17B70: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    case 0xC17B72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    // Overlapping static entry reached from 0xC17B72.
    case 0xC17B74: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:19 BEQ @UNKNOWN6
    case 0xC17B75: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    case 0xC17B77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    // Overlapping static entry reached from 0xC17B77.
    case 0xC17B79: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:21 BEQ @UNKNOWN7
    case 0xC17B7A: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    case 0xC17B7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    // Overlapping static entry reached from 0xC17B7C.
    case 0xC17B7E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:23 BEQ @UNKNOWN8
    case 0xC17B7F: {
        Instruction step(cpu, 0xF0, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    case 0xC17B81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    // Overlapping static entry reached from 0xC17B81.
    case 0xC17B83: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:25 BEQ @UNKNOWN9
    case 0xC17B84: {
        Instruction step(cpu, 0xF0, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    case 0xC17B86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    // Overlapping static entry reached from 0xC17B86.
    case 0xC17B88: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17B89: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17B8B: {
        Instruction step(cpu, 0x4C, 0x007C0Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    case 0xC17B8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    // Overlapping static entry reached from 0xC17B8E.
    case 0xC17B90: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17B91: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17B93: {
        Instruction step(cpu, 0x4C, 0x007C1Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:30 JMP @UNKNOWN12
    case 0xC17B96: {
        Instruction step(cpu, 0x4C, 0x007C31u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    case 0xC17B99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00463Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    // Overlapping static entry reached from 0xC17B99.
    case 0xC17B9B: {
        Instruction step(cpu, 0x46, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:33 JMP @UNKNOWN13
    case 0xC17B9C: {
        Instruction step(cpu, 0x4C, 0x007C34u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:33 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC17B9B.
    case 0xC17B9D: {
        Instruction step(cpu, 0x34, 0x00007Cu, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    case 0xC17B9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00467Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    // Overlapping static entry reached from 0xC17B9F.
    case 0xC17BA1: {
        Instruction step(cpu, 0x46, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:36 JMP @UNKNOWN13
    case 0xC17BA2: {
        Instruction step(cpu, 0x4C, 0x007C34u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:36 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC17BA1.
    case 0xC17BA3: {
        Instruction step(cpu, 0x34, 0x00007Cu, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:38 LDA #0
    case 0xC17BA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:38 LDA #0
    // Overlapping static entry reached from 0xC17BA5.
    case 0xC17BA7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:39 JSR SELECTION_MENU
    case 0xC17BA8: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17BAB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17BAD: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BAF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BB1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BB3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BB5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:42 JSR SET_WORKING_MEMORY
    case 0xC17BB7: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:43 JSR UNKNOWN_C11383
    case 0xC17BBA: {
        Instruction step(cpu, 0x20, 0x001383u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:44 BRA @UNKNOWN12
    case 0xC17BBD: {
        Instruction step(cpu, 0x80, 0x000072u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    case 0xC17BBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00549Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC17BBF.
    case 0xC17BC1: {
        Instruction step(cpu, 0x54, 0x007080u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:47 BRA @UNKNOWN13
    case 0xC17BC2: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    case 0xC17BC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B5u : 0x004EB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    // Overlapping static entry reached from 0xC17BC4.
    case 0xC17BC6: {
        Instruction step(cpu, 0x4E, 0x006B80u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:50 BRA @UNKNOWN13
    case 0xC17BC7: {
        Instruction step(cpu, 0x80, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:52 JSR UNKNOWN_C19A43
    case 0xC17BC9: {
        Instruction step(cpu, 0x20, 0x009A43u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17BCC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17BCE: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BD6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:55 JSR SET_WORKING_MEMORY
    case 0xC17BD8: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:56 BRA @UNKNOWN12
    case 0xC17BDB: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:58 LDA #0
    case 0xC17BDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:58 LDA #0
    // Overlapping static entry reached from 0xC17BDD.
    case 0xC17BDF: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:59 JSR SELECTION_MENU
    case 0xC17BE0: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17BE3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17BE5: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BE7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BE9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BEB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BED: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:62 JSR SET_WORKING_MEMORY
    case 0xC17BEF: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:63 BRA @UNKNOWN12
    case 0xC17BF2: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:65 LDA #1
    case 0xC17BF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:65 LDA #1
    // Overlapping static entry reached from 0xC17BF4.
    case 0xC17BF6: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:66 JSR SELECTION_MENU
    case 0xC17BF7: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17BFA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17BFC: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17BFE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C00: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C02: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C04: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:69 JSR SET_WORKING_MEMORY
    case 0xC17C06: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:70 BRA @UNKNOWN12
    case 0xC17C09: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:72 JSR UNKNOWN_C1AC00
    case 0xC17C0B: {
        Instruction step(cpu, 0x20, 0x00AC00u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17C0E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17C10: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C12: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C14: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C16: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C18: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:75 JSR SET_WORKING_MEMORY
    case 0xC17C1A: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:76 BRA @UNKNOWN12
    case 0xC17C1D: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:78 JSR UNKNOWN_C1AAFA
    case 0xC17C1F: {
        Instruction step(cpu, 0x20, 0x00AAFAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17C22: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17C24: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C26: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C28: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C2A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17C2C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:81 JSR SET_WORKING_MEMORY
    case 0xC17C2E: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    case 0xC17C31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    // Overlapping static entry reached from 0xC17C31.
    case 0xC17C33: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17C34: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17C35: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
