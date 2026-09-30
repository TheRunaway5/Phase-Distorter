// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_1B.asm
bool resume_text_ccs_tree_1b(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1B.asm:3 BEGIN_C_FUNCTION
    case 0xC17EAB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EAD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EAE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EAF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17EB0.
    case 0xC17EB2: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EB3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1B.asm:11 END_STACK_VARS
    case 0xC17EB4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:12 TAY
    case 0xC17EB5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:13 STY @LOCAL02
    case 0xC17EB6: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:14 TXA
    case 0xC17EB8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:15 BEQ @UNKNOWN3
    case 0xC17EB9: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    case 0xC17EBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:16 CMP #$01
    // Overlapping static entry reached from 0xC17EBB.
    case 0xC17EBD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:17 BEQ @UNKNOWN4
    case 0xC17EBE: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    case 0xC17EC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:18 CMP #$02
    // Overlapping static entry reached from 0xC17EC0.
    case 0xC17EC2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:19 BEQ @UNKNOWN5
    case 0xC17EC3: {
        Instruction step(cpu, 0xF0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    case 0xC17EC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:20 CMP #$03
    // Overlapping static entry reached from 0xC17EC5.
    case 0xC17EC7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:21 BEQ @UNKNOWN8
    case 0xC17EC8: {
        Instruction step(cpu, 0xF0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    case 0xC17ECA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:22 CMP #$04
    // Overlapping static entry reached from 0xC17ECA.
    case 0xC17ECC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17ECD: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:23 BEQL @UNKNOWN11
    case 0xC17ECF: {
        Instruction step(cpu, 0x4C, 0x007F6Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    case 0xC17ED2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:24 CMP #$05
    // Overlapping static entry reached from 0xC17ED2.
    case 0xC17ED4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17ED5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:25 BEQL @UNKNOWN12
    case 0xC17ED7: {
        Instruction step(cpu, 0x4C, 0x007FA3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    case 0xC17EDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:26 CMP #$06
    // Overlapping static entry reached from 0xC17EDA.
    case 0xC17EDC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17EDD: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:27 BEQL @UNKNOWN13
    case 0xC17EDF: {
        Instruction step(cpu, 0x4C, 0x007FC7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:28 JMP @UNKNOWN14
    case 0xC17EE2: {
        Instruction step(cpu, 0x4C, 0x007FFAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:30 JSR TRANSFER_ACTIVE_MEM_STORAGE
    case 0xC17EE5: {
        Instruction step(cpu, 0x20, 0x000527u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:31 JMP @UNKNOWN14
    case 0xC17EE8: {
        Instruction step(cpu, 0x4C, 0x007FFAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:33 JSR TRANSFER_STORAGE_MEM_ACTIVE
    case 0xC17EEB: {
        Instruction step(cpu, 0x20, 0x000583u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:34 JMP @UNKNOWN14
    case 0xC17EEE: {
        Instruction step(cpu, 0x4C, 0x007FFAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:36 JSR GET_WORKING_MEMORY
    case 0xC17EF1: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17EF4.
    case 0xC17EF6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EF7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17EF9.
    case 0xC17EFB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:37 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17EFC: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17EFE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F00: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F02: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F04: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:38 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F06: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:39 BNE @UNKNOWN7
    case 0xC17F08: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    case 0xC17F0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x004525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:40 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17F0A.
    case 0xC17F0C: {
        Instruction step(cpu, 0x45, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    case 0xC17F0D: {
        Instruction step(cpu, 0x4C, 0x007FFFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:41 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17F0C.
    case 0xC17F0E: {
        Instruction step(cpu, 0xFF, 0x16A47Fu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:43 LDY @LOCAL02
    case 0xC17F10: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F12: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F15: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F17: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:44 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F1A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:45 LDA #4
    case 0xC17F1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:45 LDA #4
    // Overlapping static entry reached from 0xC17F1C.
    case 0xC17F1E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:46 CLC
    case 0xC17F1F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:47 ADC @VIRTUAL06
    case 0xC17F20: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:48 STA @VIRTUAL06
    case 0xC17F22: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:49 STA __BSS_START__,Y
    case 0xC17F24: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:50 LDA @VIRTUAL06+2
    case 0xC17F27: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:51 STA __BSS_START__+2,Y
    case 0xC17F29: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:52 JMP @UNKNOWN14
    case 0xC17F2C: {
        Instruction step(cpu, 0x4C, 0x007FFAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:54 JSR GET_WORKING_MEMORY
    case 0xC17F2F: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17F32.
    case 0xC17F34: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F35: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17F37.
    case 0xC17F39: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:55 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC17F3A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F3C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F3E: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F40: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F42: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/tree_1B.asm:56 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC17F44: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:57 BEQ @UNKNOWN10
    case 0xC17F46: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    case 0xC17F48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x004525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:58 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC17F48.
    case 0xC17F4A: {
        Instruction step(cpu, 0x45, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    case 0xC17F4B: {
        Instruction step(cpu, 0x4C, 0x007FFFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:59 JMP @UNKNOWN15
    // Overlapping static entry reached from 0xC17F4A.
    case 0xC17F4C: {
        Instruction step(cpu, 0xFF, 0x16A47Fu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:61 LDY @LOCAL02
    case 0xC17F4E: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F50: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F53: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F55: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:62 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC17F58: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:63 LDA #4
    case 0xC17F5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:63 LDA #4
    // Overlapping static entry reached from 0xC17F5A.
    case 0xC17F5C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:64 CLC
    case 0xC17F5D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:65 ADC @VIRTUAL06
    case 0xC17F5E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:66 STA @VIRTUAL06
    case 0xC17F60: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:67 STA __BSS_START__,Y
    case 0xC17F62: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:68 LDA @VIRTUAL06+2
    case 0xC17F65: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:69 STA __BSS_START__+2,Y
    case 0xC17F67: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:70 JMP @UNKNOWN14
    case 0xC17F6A: {
        Instruction step(cpu, 0x4C, 0x007FFAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:72 JSR GET_WORKING_MEMORY
    case 0xC17F6D: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F70: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F72: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F74: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:73 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17F76: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:74 JSR GET_ARGUMENT_MEMORY
    case 0xC17F78: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F7B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F7D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F7F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:75 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17F81: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F83: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F87: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:77 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17F89: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:82 JSR SET_WORKING_MEMORY
    case 0xC17F8B: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F8E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F90: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F92: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:83 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC17F94: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F96: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F98: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F9A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17F9C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:85 JSR SET_ARGUMENT_MEMORY
    case 0xC17F9E: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:86 BRA @UNKNOWN14
    case 0xC17FA1: {
        Instruction step(cpu, 0x80, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:88 JSR GET_WORKING_MEMORY
    case 0xC17FA3: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FA6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FA8: {
        Instruction step(cpu, 0x8D, 0x009A80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FAB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:89 MOVE_INT @VIRTUAL06, TEXT_MAIN_REGISTER_BACKUP
    case 0xC17FAD: {
        Instruction step(cpu, 0x8D, 0x009A82u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:90 JSR GET_ARGUMENT_MEMORY
    case 0xC17FB0: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FB3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FB5: {
        Instruction step(cpu, 0x8D, 0x009A84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FB8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:91 MOVE_INT @VIRTUAL06, TEXT_SUB_REGISTER_BACKUP
    case 0xC17FBA: {
        Instruction step(cpu, 0x8D, 0x009A86u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:92 JSR GET_SECONDARY_MEMORY
    case 0xC17FBD: {
        Instruction step(cpu, 0x20, 0x000603u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC17FC0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:94 STA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17FC2: {
        Instruction step(cpu, 0x8D, 0x009A88u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:95 BRA @UNKNOWN14
    case 0xC17FC5: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FC7: {
        Instruction step(cpu, 0xAD, 0x009A80u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FCA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FCC: {
        Instruction step(cpu, 0xAD, 0x009A82u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:98 MOVE_INT TEXT_MAIN_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FCF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FD7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:100 JSR SET_WORKING_MEMORY
    case 0xC17FD9: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FDC: {
        Instruction step(cpu, 0xAD, 0x009A84u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FDF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FE1: {
        Instruction step(cpu, 0xAD, 0x009A86u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:101 MOVE_INT TEXT_SUB_REGISTER_BACKUP, @VIRTUAL06
    case 0xC17FE4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FE6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FE8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FEA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1B.asm:102 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17FEC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:103 JSR SET_ARGUMENT_MEMORY
    case 0xC17FEE: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:104 LDA TEXT_LOOP_REGISTER_BACKUP
    case 0xC17FF1: {
        Instruction step(cpu, 0xAD, 0x009A88u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    case 0xC17FF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC17FF4.
    case 0xC17FF6: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:106 JSR SET_SECONDARY_MEMORY
    case 0xC17FF7: {
        Instruction step(cpu, 0x20, 0x000646u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC17FFA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    case 0xC17FFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1B.asm:109 LDA #NULL
    // Overlapping static entry reached from 0xC17FFC.
    case 0xC17FFE: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC17FFF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1B.asm:111 END_C_FUNCTION
    case 0xC18000: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
