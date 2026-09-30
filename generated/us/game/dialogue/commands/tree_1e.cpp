// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_1E.asm
bool resume_text_ccs_tree_1e(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/tree_1E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1811F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:4 TXA
    case 0xC18121: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:5 BEQ @UNKNOWN0
    case 0xC18122: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    case 0xC18124: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    // Overlapping static entry reached from 0xC18124.
    case 0xC18126: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:7 BEQ @UNKNOWN1
    case 0xC18127: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    case 0xC18129: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    // Overlapping static entry reached from 0xC18129.
    case 0xC1812B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:9 BEQ @UNKNOWN2
    case 0xC1812C: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    case 0xC1812E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    // Overlapping static entry reached from 0xC1812E.
    case 0xC18130: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:11 BEQ @UNKNOWN3
    case 0xC18131: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    case 0xC18133: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    // Overlapping static entry reached from 0xC18133.
    case 0xC18135: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:13 BEQ @UNKNOWN4
    case 0xC18136: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    case 0xC18138: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    // Overlapping static entry reached from 0xC18138.
    case 0xC1813A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:15 BEQ @UNKNOWN5
    case 0xC1813B: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    case 0xC1813D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    // Overlapping static entry reached from 0xC1813D.
    case 0xC1813F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:17 BEQ @UNKNOWN6
    case 0xC18140: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    case 0xC18142: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    // Overlapping static entry reached from 0xC18142.
    case 0xC18144: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:19 BEQ @UNKNOWN7
    case 0xC18145: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    case 0xC18147: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    // Overlapping static entry reached from 0xC18147.
    case 0xC18149: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:21 BEQ @UNKNOWN8
    case 0xC1814A: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    case 0xC1814C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    // Overlapping static entry reached from 0xC1814C.
    case 0xC1814E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:23 BEQ @UNKNOWN9
    case 0xC1814F: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    case 0xC18151: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    // Overlapping static entry reached from 0xC18151.
    case 0xC18153: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:25 BEQ @UNKNOWN10
    case 0xC18154: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    case 0xC18156: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    // Overlapping static entry reached from 0xC18156.
    case 0xC18158: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:27 BEQ @UNKNOWN11
    case 0xC18159: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    case 0xC1815B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    // Overlapping static entry reached from 0xC1815B.
    case 0xC1815D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:29 BEQ @UNKNOWN12
    case 0xC1815E: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    case 0xC18160: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    // Overlapping static entry reached from 0xC18160.
    case 0xC18162: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:31 BEQ @UNKNOWN13
    case 0xC18163: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    case 0xC18165: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    // Overlapping static entry reached from 0xC18165.
    case 0xC18167: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:33 BEQ @UNKNOWN14
    case 0xC18168: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:34 BRA @UNKNOWN15
    case 0xC1816A: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    case 0xC1816C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B6u : 0x0049B6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    // Overlapping static entry reached from 0xC1816C.
    case 0xC1816E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x004980u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:37 BRA @UNKNOWN16
    case 0xC1816F: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:37 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC1816E.
    case 0xC18170: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000A9u : 0x0003A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    case 0xC18171: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x004A03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC18170.
    case 0xC18172: {
        Instruction step(cpu, 0x03, 0x00004Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC18171.
    case 0xC18173: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:40 BRA @UNKNOWN16
    case 0xC18174: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    case 0xC18176: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x004A50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    // Overlapping static entry reached from 0xC18176.
    case 0xC18178: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:43 BRA @UNKNOWN16
    case 0xC18179: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    case 0xC1817B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x004A9Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    // Overlapping static entry reached from 0xC1817B.
    case 0xC1817D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:46 BRA @UNKNOWN16
    case 0xC1817E: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    case 0xC18180: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EAu : 0x004AEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    // Overlapping static entry reached from 0xC18180.
    case 0xC18182: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:49 BRA @UNKNOWN16
    case 0xC18183: {
        Instruction step(cpu, 0x80, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    case 0xC18185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000037u : 0x004B37u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    // Overlapping static entry reached from 0xC18185.
    case 0xC18187: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:52 BRA @UNKNOWN16
    case 0xC18188: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    case 0xC1818A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x004B84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC1818A.
    case 0xC1818C: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:55 BRA @UNKNOWN16
    case 0xC1818D: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    case 0xC1818F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x004BD1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC1818F.
    case 0xC18191: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:58 BRA @UNKNOWN16
    case 0xC18192: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    case 0xC18194: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x006A01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC18194.
    case 0xC18196: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:61 BRA @UNKNOWN16
    case 0xC18197: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    case 0xC18199: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x00744Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    // Overlapping static entry reached from 0xC18199.
    case 0xC1819B: {
        Instruction step(cpu, 0x74, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    case 0xC1819C: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC1819B.
    case 0xC1819D: {
        Instruction step(cpu, 0x1C, 0x0023A9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    case 0xC1819E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x007523u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    // Overlapping static entry reached from 0xC1819E.
    case 0xC181A0: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    case 0xC181A1: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181A0.
    case 0xC181A2: {
        Instruction step(cpu, 0x17, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    case 0xC181A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x007584u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC181A2.
    case 0xC181A4: {
        Instruction step(cpu, 0x84, 0x000075u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC181A3.
    case 0xC181A5: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:70 BRA @UNKNOWN16
    case 0xC181A6: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:70 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181A5.
    case 0xC181A7: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    case 0xC181A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E5u : 0x0075E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC181A7.
    case 0xC181A9: {
        Instruction step(cpu, 0xE5, 0x000075u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC181A8.
    case 0xC181AA: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:73 BRA @UNKNOWN16
    case 0xC181AB: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:73 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181AA.
    case 0xC181AC: {
        Instruction step(cpu, 0x0D, 0x0046A9u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    case 0xC181AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000046u : 0x007646u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    // Overlapping static entry reached from 0xC181AD.
    case 0xC181AF: {
        Instruction step(cpu, 0x76, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:76 BRA @UNKNOWN16
    case 0xC181B0: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:76 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181AF.
    case 0xC181B1: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    case 0xC181B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A7u : 0x0076A7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    // Overlapping static entry reached from 0xC181B2.
    case 0xC181B4: {
        Instruction step(cpu, 0x76, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:79 BRA @UNKNOWN16
    case 0xC181B5: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:79 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC181B4.
    case 0xC181B6: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    case 0xC181B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    // Overlapping static entry reached from 0xC181B6.
    case 0xC181B8: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    // Overlapping static entry reached from 0xC181B7.
    case 0xC181B9: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:83 RTS
    case 0xC181BA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
