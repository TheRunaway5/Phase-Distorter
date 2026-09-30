// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_18.asm
bool resume_text_ccs_tree_18(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_18.asm:3 BEGIN_C_FUNCTION
    case 0xC1790B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC1790D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC1790E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC1790F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17910: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17910.
    case 0xC17912: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17913: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_18.asm:9 END_STACK_VARS
    case 0xC17914: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:10 TAY
    case 0xC17915: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:11 STY @LOCAL00
    case 0xC17916: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:12 TXA
    case 0xC17918: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:13 BEQ @UNKNOWN0
    case 0xC17919: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:14 CMP #$01
    case 0xC1791B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC1791B.
    case 0xC1791D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:15 BEQ @UNKNOWN1
    case 0xC1791E: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:16 CMP #$02
    case 0xC17920: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC17920.
    case 0xC17922: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:17 BEQ @UNKNOWN2
    case 0xC17923: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:18 CMP #$03
    case 0xC17925: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC17925.
    case 0xC17927: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:19 BEQ @UNKNOWN3
    case 0xC17928: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:20 CMP #$04
    case 0xC1792A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC1792A.
    case 0xC1792C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:21 BEQ @UNKNOWN4
    case 0xC1792D: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:22 CMP #$05
    case 0xC1792F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC1792F.
    case 0xC17931: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:23 BEQ @UNKNOWN5
    case 0xC17932: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:24 CMP #$06
    case 0xC17934: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC17934.
    case 0xC17936: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:25 BEQ @UNKNOWN6
    case 0xC17937: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:26 CMP #$07
    case 0xC17939: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC17939.
    case 0xC1793B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:27 BEQ @UNKNOWN7
    case 0xC1793C: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:28 CMP #$08
    case 0xC1793E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC1793E.
    case 0xC17940: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:29 BEQ @UNKNOWN8
    case 0xC17941: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:30 CMP #$09
    case 0xC17943: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC17943.
    case 0xC17945: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:31 BEQ @UNKNOWN9
    case 0xC17946: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    case 0xC17948: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC17948.
    case 0xC1794A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:33 BEQ @UNKNOWN10
    case 0xC1794B: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    case 0xC1794D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:34 CMP #$0D
    // Overlapping static entry reached from 0xC1794D.
    case 0xC1794F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:35 BEQ @UNKNOWN11
    case 0xC17950: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:36 BRA @UNKNOWN12
    case 0xC17952: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC17954: {
        Instruction step(cpu, 0x20, 0x000084u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:39 BRA @UNKNOWN12
    case 0xC17957: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    case 0xC17959: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0043C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:41 LDA #.LOWORD(CC_18_01)
    // Overlapping static entry reached from 0xC17959.
    case 0xC1795B: {
        Instruction step(cpu, 0x43, 0x000080u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    case 0xC1795C: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:42 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC1795B.
    case 0xC1795D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:44 TYA
    case 0xC1795E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:45 CLC
    case 0xC1795F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:46 ADC #6
    case 0xC17960: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:46 ADC #6
    // Overlapping static entry reached from 0xC17960.
    case 0xC17962: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:47 JSL UNKNOWN_C20A20
    case 0xC17963: {
        Instruction step(cpu, 0x22, 0xC20A20u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:48 LDA #1
    case 0xC17967: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:48 LDA #1
    // Overlapping static entry reached from 0xC17967.
    case 0xC17969: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:49 LDY @LOCAL00
    case 0xC1796A: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:50 STA __BSS_START__+4,Y
    case 0xC1796C: {
        Instruction step(cpu, 0x99, 0x000004u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:51 BRA @UNKNOWN12
    case 0xC1796F: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    case 0xC17971: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0043CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:53 LDA #.LOWORD(CC_18_03)
    // Overlapping static entry reached from 0xC17971.
    case 0xC17973: {
        Instruction step(cpu, 0x43, 0x000080u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    case 0xC17974: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:54 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17973.
    case 0xC17975: {
        Instruction step(cpu, 0x32, 0x000020u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    case 0xC17976: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:56 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC17975.
    case 0xC17977: {
        Instruction step(cpu, 0x8E, 0x002000u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    case 0xC17979: {
        Instruction step(cpu, 0x20, 0x000A1Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:57 JSR HIDE_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC17977.
    case 0xC1797A: {
        Instruction step(cpu, 0x1D, 0x00220Au, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    case 0xC1797C: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC1797A.
    case 0xC1797D: {
        Instruction step(cpu, 0xD5, 0x00002Du, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:58 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC1797D.
    case 0xC1797F: {
        Instruction step(cpu, 0xC1, 0x000080u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:59 BRA @UNKNOWN12
    case 0xC17980: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:59 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC1797F.
    case 0xC17981: {
        Instruction step(cpu, 0x23, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    case 0xC17982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x004509u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC17981.
    case 0xC17983: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000045u : 0x008045u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:61 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC17982.
    case 0xC17984: {
        Instruction step(cpu, 0x45, 0x000080u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    case 0xC17985: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:62 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17984.
    case 0xC17986: {
        Instruction step(cpu, 0x21, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    case 0xC17987: {
        Instruction step(cpu, 0x20, 0x000FA3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:64 JSR UNKNOWN_C10FA3
    // Overlapping static entry reached from 0xC17986.
    case 0xC17988: {
        Instruction step(cpu, 0xA3, 0x00000Fu, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:65 BRA @UNKNOWN12
    case 0xC1798A: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    case 0xC1798C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Du : 0x00528Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:67 LDA #.LOWORD(CC_18_07)
    // Overlapping static entry reached from 0xC1798C.
    case 0xC1798E: {
        Instruction step(cpu, 0x52, 0x000080u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    case 0xC1798F: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:68 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC1798E.
    case 0xC17990: {
        Instruction step(cpu, 0x17, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    case 0xC17991: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000029u : 0x005529u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17990.
    case 0xC17992: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000055u : 0x008055u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:70 LDA #.LOWORD(CC_18_08)
    // Overlapping static entry reached from 0xC17991.
    case 0xC17993: {
        Instruction step(cpu, 0x55, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    case 0xC17994: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:71 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17993.
    case 0xC17995: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    case 0xC17996: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Eu : 0x00554Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17995.
    case 0xC17997: {
        Instruction step(cpu, 0x4E, 0x008055u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:73 LDA #.LOWORD(CC_18_09)
    // Overlapping static entry reached from 0xC17996.
    case 0xC17998: {
        Instruction step(cpu, 0x55, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    case 0xC17999: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:74 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17998.
    case 0xC1799A: {
        Instruction step(cpu, 0x0D, 0x001820u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    case 0xC1799B: {
        Instruction step(cpu, 0x20, 0x00AA18u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:76 JSR UNKNOWN_C1AA18
    // Overlapping static entry reached from 0xC1799A.
    case 0xC1799D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:77 BRA @UNKNOWN12
    case 0xC1799E: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    case 0xC179A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000046u : 0x005B46u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:79 LDA #.LOWORD(CC_18_0D)
    // Overlapping static entry reached from 0xC179A0.
    case 0xC179A2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:80 BRA @UNKNOWN13
    case 0xC179A3: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:82 LDA #0
    case 0xC179A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_18.asm:82 LDA #0
    // Overlapping static entry reached from 0xC179A5.
    case 0xC179A7: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC179A8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_18.asm:84 END_C_FUNCTION
    case 0xC179A9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
