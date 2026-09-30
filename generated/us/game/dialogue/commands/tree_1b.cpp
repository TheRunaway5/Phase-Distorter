// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_1B.asm
bool resume_text_ccs_tree_1b(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1B.asm:3 BEGIN_C_FUNCTION
    case 0xC17C36: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C38: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C39: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17C3B.
    case 0xC17C3D: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17C3F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:12 TAY
    case 0xC17C40: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:13 STY @LOCAL02
    case 0xC17C41: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:14 TXA
    case 0xC17C43: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:15 BEQ @UNKNOWN3
    case 0xC17C44: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    case 0xC17C46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    // Overlapping static entry reached from 0xC17C46.
    case 0xC17C48: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:17 BEQ @UNKNOWN4
    case 0xC17C49: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    case 0xC17C4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    // Overlapping static entry reached from 0xC17C4B.
    case 0xC17C4D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:19 BEQ @UNKNOWN5
    case 0xC17C4E: {
        Instruction step(cpu, 0xF0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    case 0xC17C50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    // Overlapping static entry reached from 0xC17C50.
    case 0xC17C52: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:21 BEQ @UNKNOWN8
    case 0xC17C53: {
        Instruction step(cpu, 0xF0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    case 0xC17C55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    // Overlapping static entry reached from 0xC17C55.
    case 0xC17C57: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17C58: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17C5A: {
        Instruction step(cpu, 0x4C, 0x007CF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    case 0xC17C5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    // Overlapping static entry reached from 0xC17C5D.
    case 0xC17C5F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17C60: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17C62: {
        Instruction step(cpu, 0x4C, 0x007D36u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    case 0xC17C65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    // Overlapping static entry reached from 0xC17C65.
    case 0xC17C67: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17C68: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17C6A: {
        Instruction step(cpu, 0x4C, 0x007D5Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:28 JMP @UNKNOWN14
    case 0xC17C6D: {
        Instruction step(cpu, 0x4C, 0x007D8Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:30 JSR TRANSFER_ACTIVE_MEM_STORAGE
    case 0xC17C70: {
        Instruction step(cpu, 0x20, 0x000324u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:31 JMP @UNKNOWN14
    case 0xC17C73: {
        Instruction step(cpu, 0x4C, 0x007D8Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:33 JSR TRANSFER_STORAGE_MEM_ACTIVE
    case 0xC17C76: {
        Instruction step(cpu, 0x20, 0x000380u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:34 JMP @UNKNOWN14
    case 0xC17C79: {
        Instruction step(cpu, 0x4C, 0x007D8Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:36 JSR GET_WORKING_MEMORY
    case 0xC17C7C: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17C7F.
    case 0xC17C81: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C82: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17C84.
    case 0xC17C86: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17C87: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C89: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C8B: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C8D: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C8F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17C91: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:39 BNE @UNKNOWN7
    case 0xC17C93: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    case 0xC17C95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x004103u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17C95.
    case 0xC17C97: {
        Instruction step(cpu, 0x41, 0x00004Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    case 0xC17C98: {
        Instruction step(cpu, 0x4C, 0x007D92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17C97.
    case 0xC17C99: {
        Instruction step(cpu, 0x92, 0x00007Du, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:43 LDY @LOCAL02
    case 0xC17C9B: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17C9D: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CA0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CA2: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CA5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:45 LDA #4
    case 0xC17CA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:45 LDA #4
    // Overlapping static entry reached from 0xC17CA7.
    case 0xC17CA9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:46 CLC
    case 0xC17CAA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:47 ADC @VIRTUAL06
    case 0xC17CAB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:48 STA @VIRTUAL06
    case 0xC17CAD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:49 STA __BSS_START__,Y
    case 0xC17CAF: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:50 LDA @VIRTUAL06+2
    case 0xC17CB2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:51 STA __BSS_START__+2,Y
    case 0xC17CB4: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:52 JMP @UNKNOWN14
    case 0xC17CB7: {
        Instruction step(cpu, 0x4C, 0x007D8Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:54 JSR GET_WORKING_MEMORY
    case 0xC17CBA: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17CBD.
    case 0xC17CBF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CC0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17CC2.
    case 0xC17CC4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17CC5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CC7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CC9: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CCB: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CCD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17CCF: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:57 BEQ @UNKNOWN10
    case 0xC17CD1: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    case 0xC17CD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x004103u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17CD3.
    case 0xC17CD5: {
        Instruction step(cpu, 0x41, 0x00004Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    case 0xC17CD6: {
        Instruction step(cpu, 0x4C, 0x007D92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17CD5.
    case 0xC17CD7: {
        Instruction step(cpu, 0x92, 0x00007Du, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:61 LDY @LOCAL02
    case 0xC17CD9: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CDB: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CDE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CE0: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17CE3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:63 LDA #4
    case 0xC17CE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:63 LDA #4
    // Overlapping static entry reached from 0xC17CE5.
    case 0xC17CE7: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:64 CLC
    case 0xC17CE8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:65 ADC @VIRTUAL06
    case 0xC17CE9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:66 STA @VIRTUAL06
    case 0xC17CEB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:67 STA __BSS_START__,Y
    case 0xC17CED: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:68 LDA @VIRTUAL06+2
    case 0xC17CF0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:69 STA __BSS_START__+2,Y
    case 0xC17CF2: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:70 JMP @UNKNOWN14
    case 0xC17CF5: {
        Instruction step(cpu, 0x4C, 0x007D8Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:72 JSR GET_WORKING_MEMORY
    case 0xC17CF8: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17CFB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17CFD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17CFF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17D01: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:74 JSR GET_ARGUMENT_MEMORY
    case 0xC17D03: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D06: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D08: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D0A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17D0C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D0E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D10: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D12: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:79 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC17D14: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D16: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D18: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D1A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D1C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:82 JSR SET_WORKING_MEMORY
    case 0xC17D1E: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D21: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D23: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D25: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17D27: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D29: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D2B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D2D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D2F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:85 JSR SET_ARGUMENT_MEMORY
    case 0xC17D31: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:86 BRA @UNKNOWN14
    case 0xC17D34: {
        Instruction step(cpu, 0x80, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:88 JSR GET_WORKING_MEMORY
    case 0xC17D36: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D39: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D3B: {
        Instruction step(cpu, 0x8D, 0x0097CCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D3E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17D40: {
        Instruction step(cpu, 0x8D, 0x0097CEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:90 JSR GET_ARGUMENT_MEMORY
    case 0xC17D43: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D46: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D48: {
        Instruction step(cpu, 0x8D, 0x0097D0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D4B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17D4D: {
        Instruction step(cpu, 0x8D, 0x0097D2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:92 JSR GET_SECONDARY_MEMORY
    case 0xC17D50: {
        Instruction step(cpu, 0x20, 0x000400u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC17D53: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:94 STA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17D55: {
        Instruction step(cpu, 0x8D, 0x0097D4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:95 BRA @UNKNOWN14
    case 0xC17D58: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D5A: {
        Instruction step(cpu, 0xAD, 0x0097CCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D5D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D5F: {
        Instruction step(cpu, 0xAD, 0x0097CEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D62: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D64: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D66: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D68: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D6A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:100 JSR SET_WORKING_MEMORY
    case 0xC17D6C: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D6F: {
        Instruction step(cpu, 0xAD, 0x0097D0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D72: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D74: {
        Instruction step(cpu, 0xAD, 0x0097D2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17D77: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D79: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:103 JSR SET_ARGUMENT_MEMORY
    case 0xC17D81: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:104 LDA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17D84: {
        Instruction step(cpu, 0xAD, 0x0097D4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    case 0xC17D87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC17D87.
    case 0xC17D89: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:106 JSR SET_SECONDARY_MEMORY
    case 0xC17D8A: {
        Instruction step(cpu, 0x20, 0x000443u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC17D8D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    case 0xC17D8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    // Overlapping static entry reached from 0xC17D8F.
    case 0xC17D91: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC17D92: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC17D93: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
