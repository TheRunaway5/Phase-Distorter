// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_18.asm
bool resume_text_ccs_tree_18(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_18.asm:3 BEGIN_C_FUNCTION
    case 0xC17B7C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B7E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B7F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B80: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17B81.
    case 0xC17B83: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B84: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17B85: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:10 TAY
    case 0xC17B86: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:11 STY @LOCAL00
    case 0xC17B87: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:12 TXA
    case 0xC17B89: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:13 BEQ @UNKNOWN0
    case 0xC17B8A: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:14 CMP #$01
    case 0xC17B8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC17B8C.
    case 0xC17B8E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:15 BEQ @UNKNOWN1
    case 0xC17B8F: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:16 CMP #$02
    case 0xC17B91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC17B91.
    case 0xC17B93: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:17 BEQ @UNKNOWN2
    case 0xC17B94: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:18 CMP #$03
    case 0xC17B96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC17B96.
    case 0xC17B98: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:19 BEQ @UNKNOWN3
    case 0xC17B99: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:20 CMP #$04
    case 0xC17B9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC17B9B.
    case 0xC17B9D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:21 BEQ @UNKNOWN4
    case 0xC17B9E: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:22 CMP #$05
    case 0xC17BA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC17BA0.
    case 0xC17BA2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:23 BEQ @UNKNOWN5
    case 0xC17BA3: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:24 CMP #$06
    case 0xC17BA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC17BA5.
    case 0xC17BA7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:25 BEQ @UNKNOWN6
    case 0xC17BA8: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:26 CMP #$07
    case 0xC17BAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC17BAA.
    case 0xC17BAC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:27 BEQ @UNKNOWN7
    case 0xC17BAD: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:28 CMP #$08
    case 0xC17BAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC17BAF.
    case 0xC17BB1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:29 BEQ @UNKNOWN8
    case 0xC17BB2: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:30 CMP #$09
    case 0xC17BB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC17BB4.
    case 0xC17BB6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:31 BEQ @UNKNOWN9
    case 0xC17BB7: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    case 0xC17BB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC17BB9.
    case 0xC17BBB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:33 BEQ @UNKNOWN10
    case 0xC17BBC: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    case 0xC17BBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    // Overlapping static entry reached from 0xC17BBE.
    case 0xC17BC0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:35 BEQ @UNKNOWN11
    case 0xC17BC1: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:36 BRA @UNKNOWN12
    case 0xC17BC3: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC17BC5: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:39 BRA @UNKNOWN12
    case 0xC17BC8: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    case 0xC17BCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E4u : 0x0047E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    // Overlapping static entry reached from 0xC17BCA.
    case 0xC17BCC: {
        Instruction step(cpu, 0x47, 0x000080u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    case 0xC17BCD: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BCC.
    case 0xC17BCE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:44 TYA
    case 0xC17BCF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:45 CLC
    case 0xC17BD0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:46 ADC #6
    case 0xC17BD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:46 ADC #6
    // Overlapping static entry reached from 0xC17BD1.
    case 0xC17BD3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:47 JSL UNKNOWN_C20A20
    case 0xC17BD4: {
        Instruction step(cpu, 0x22, 0xC208B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:48 LDA #1
    case 0xC17BD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:48 LDA #1
    // Overlapping static entry reached from 0xC17BD8.
    case 0xC17BDA: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:49 LDY @LOCAL00
    case 0xC17BDB: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:50 STA __BSS_START__+4,Y
    case 0xC17BDD: {
        Instruction step(cpu, 0x99, 0x000004u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:51 BRA @UNKNOWN12
    case 0xC17BE0: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    case 0xC17BE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x0047EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    // Overlapping static entry reached from 0xC17BE2.
    case 0xC17BE4: {
        Instruction step(cpu, 0x47, 0x000080u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    case 0xC17BE5: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BE4.
    case 0xC17BE6: {
        Instruction step(cpu, 0x32, 0x000020u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    case 0xC17BE7: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC17BE6.
    case 0xC17BE8: {
        Instruction step(cpu, 0xAF, 0x722002u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    case 0xC17BEA: {
        Instruction step(cpu, 0x20, 0x000E72u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC17BE8.
    case 0xC17BEC: {
        Instruction step(cpu, 0x0E, 0x000222u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    case 0xC17BED: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC17BEC.
    case 0xC17BEF: {
        Instruction step(cpu, 0x35, 0x0000C1u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:59 BRA @UNKNOWN12
    case 0xC17BF1: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    case 0xC17BF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x00492Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC17BF3.
    case 0xC17BF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x002180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    case 0xC17BF6: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BF5.
    case 0xC17BF7: {
        Instruction step(cpu, 0x21, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    case 0xC17BF8: {
        Instruction step(cpu, 0x20, 0x00155Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    // Overlapping static entry reached from 0xC17BF7.
    case 0xC17BF9: {
        Instruction step(cpu, 0x5D, 0x008015u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:65 BRA @UNKNOWN12
    case 0xC17BFB: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:65 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC17BF9.
    case 0xC17BFC: {
        Instruction step(cpu, 0x19, 0x0047A9u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    case 0xC17BFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000047u : 0x005547u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    // Overlapping static entry reached from 0xC17BFD.
    case 0xC17BFF: {
        Instruction step(cpu, 0x55, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    case 0xC17C00: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17BFF.
    case 0xC17C01: {
        Instruction step(cpu, 0x17, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    case 0xC17C02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A5u : 0x0057A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17C01.
    case 0xC17C03: {
        Instruction step(cpu, 0xA5, 0x000057u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17C02.
    case 0xC17C04: {
        Instruction step(cpu, 0x57, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    case 0xC17C05: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17C04.
    case 0xC17C06: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    case 0xC17C07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0057CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17C06.
    case 0xC17C08: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17C07.
    case 0xC17C09: {
        Instruction step(cpu, 0x57, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    case 0xC17C0A: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17C09.
    case 0xC17C0B: {
        Instruction step(cpu, 0x0D, 0x00FF20u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    case 0xC17C0C: {
        Instruction step(cpu, 0x20, 0x00A8FFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    // Overlapping static entry reached from 0xC17C0B.
    case 0xC17C0E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:77 BRA @UNKNOWN12
    case 0xC17C0F: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    case 0xC17C11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C5u : 0x005DC5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    // Overlapping static entry reached from 0xC17C11.
    case 0xC17C13: {
        Instruction step(cpu, 0x5D, 0x000380u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:80 BRA @UNKNOWN13
    case 0xC17C14: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:82 LDA #0
    case 0xC17C16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:82 LDA #0
    // Overlapping static entry reached from 0xC17C16.
    case 0xC17C18: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC17C19: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC17C1A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
