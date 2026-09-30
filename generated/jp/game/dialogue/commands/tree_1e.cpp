// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_1E.asm
bool resume_text_ccs_tree_1e(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/tree_1E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC18381: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:4 TXA
    case 0xC18383: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:5 BEQ @UNKNOWN0
    case 0xC18384: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    case 0xC18386: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:6 CMP #$0001
    // Overlapping static entry reached from 0xC18386.
    case 0xC18388: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:7 BEQ @UNKNOWN1
    case 0xC18389: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    case 0xC1838B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:8 CMP #$0002
    // Overlapping static entry reached from 0xC1838B.
    case 0xC1838D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:9 BEQ @UNKNOWN2
    case 0xC1838E: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    case 0xC18390: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:10 CMP #$0003
    // Overlapping static entry reached from 0xC18390.
    case 0xC18392: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:11 BEQ @UNKNOWN3
    case 0xC18393: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    case 0xC18395: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:12 CMP #$0004
    // Overlapping static entry reached from 0xC18395.
    case 0xC18397: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:13 BEQ @UNKNOWN4
    case 0xC18398: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    case 0xC1839A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:14 CMP #$0005
    // Overlapping static entry reached from 0xC1839A.
    case 0xC1839C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:15 BEQ @UNKNOWN5
    case 0xC1839D: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    case 0xC1839F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:16 CMP #$0006
    // Overlapping static entry reached from 0xC1839F.
    case 0xC183A1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:17 BEQ @UNKNOWN6
    case 0xC183A2: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    case 0xC183A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:18 CMP #$0007
    // Overlapping static entry reached from 0xC183A4.
    case 0xC183A6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:19 BEQ @UNKNOWN7
    case 0xC183A7: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    case 0xC183A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:20 CMP #$0008
    // Overlapping static entry reached from 0xC183A9.
    case 0xC183AB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:21 BEQ @UNKNOWN8
    case 0xC183AC: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    case 0xC183AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:22 CMP #$0009
    // Overlapping static entry reached from 0xC183AE.
    case 0xC183B0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:23 BEQ @UNKNOWN9
    case 0xC183B1: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    case 0xC183B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:24 CMP #$000A
    // Overlapping static entry reached from 0xC183B3.
    case 0xC183B5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:25 BEQ @UNKNOWN10
    case 0xC183B6: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    case 0xC183B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:26 CMP #$000B
    // Overlapping static entry reached from 0xC183B8.
    case 0xC183BA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:27 BEQ @UNKNOWN11
    case 0xC183BB: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    case 0xC183BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:28 CMP #$000C
    // Overlapping static entry reached from 0xC183BD.
    case 0xC183BF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:29 BEQ @UNKNOWN12
    case 0xC183C0: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    case 0xC183C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:30 CMP #$000D
    // Overlapping static entry reached from 0xC183C2.
    case 0xC183C4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:31 BEQ @UNKNOWN13
    case 0xC183C5: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    case 0xC183C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:32 CMP #$000E
    // Overlapping static entry reached from 0xC183C7.
    case 0xC183C9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:33 BEQ @UNKNOWN14
    case 0xC183CA: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:34 BRA @UNKNOWN15
    case 0xC183CC: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    case 0xC183CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B6u : 0x004DB6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:36 LDA #.LOWORD(CC_1E_00)
    // Overlapping static entry reached from 0xC183CE.
    case 0xC183D0: {
        Instruction step(cpu, 0x4D, 0x004980u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:37 BRA @UNKNOWN16
    case 0xC183D1: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    case 0xC183D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x004E03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:39 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC183D3.
    case 0xC183D5: {
        Instruction step(cpu, 0x4E, 0x004480u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:40 BRA @UNKNOWN16
    case 0xC183D6: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    case 0xC183D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x004E50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:42 LDA #.LOWORD(CC_1E_02)
    // Overlapping static entry reached from 0xC183D8.
    case 0xC183DA: {
        Instruction step(cpu, 0x4E, 0x003F80u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:43 BRA @UNKNOWN16
    case 0xC183DB: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    case 0xC183DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x004E9Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:45 LDA #.LOWORD(CC_1E_03)
    // Overlapping static entry reached from 0xC183DD.
    case 0xC183DF: {
        Instruction step(cpu, 0x4E, 0x003A80u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:46 BRA @UNKNOWN16
    case 0xC183E0: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    case 0xC183E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EAu : 0x004EEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:48 LDA #.LOWORD(CC_1E_04)
    // Overlapping static entry reached from 0xC183E2.
    case 0xC183E4: {
        Instruction step(cpu, 0x4E, 0x003580u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:49 BRA @UNKNOWN16
    case 0xC183E5: {
        Instruction step(cpu, 0x80, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    case 0xC183E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000037u : 0x004F37u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:51 LDA #.LOWORD(CC_1E_05)
    // Overlapping static entry reached from 0xC183E7.
    case 0xC183E9: {
        Instruction step(cpu, 0x4F, 0xA93080u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:52 BRA @UNKNOWN16
    case 0xC183EA: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    case 0xC183EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x004F84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC183E9.
    case 0xC183ED: {
        Instruction step(cpu, 0x84, 0x00004Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:54 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC183EC.
    case 0xC183EE: {
        Instruction step(cpu, 0x4F, 0xA92B80u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:55 BRA @UNKNOWN16
    case 0xC183EF: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    case 0xC183F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x004FD1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC183EE.
    case 0xC183F2: {
        Instruction step(cpu, 0xD1, 0x00004Fu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:57 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC183F1.
    case 0xC183F3: {
        Instruction step(cpu, 0x4F, 0xA92680u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:58 BRA @UNKNOWN16
    case 0xC183F4: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    case 0xC183F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x006C80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC183F3.
    case 0xC183F7: {
        Instruction step(cpu, 0x80, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:60 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC183F6.
    case 0xC183F8: {
        Instruction step(cpu, 0x6C, 0x002180u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:61 BRA @UNKNOWN16
    case 0xC183F9: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    case 0xC183FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x0076CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:63 LDA #.LOWORD(CC_1E_09)
    // Overlapping static entry reached from 0xC183FB.
    case 0xC183FD: {
        Instruction step(cpu, 0x76, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    case 0xC183FE: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:64 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC183FD.
    case 0xC183FF: {
        Instruction step(cpu, 0x1C, 0x00A3A9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    case 0xC18400: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A3u : 0x0077A3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:66 LDA #.LOWORD(CC_1E_0A)
    // Overlapping static entry reached from 0xC18400.
    case 0xC18402: {
        Instruction step(cpu, 0x77, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    case 0xC18403: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:67 BRA @UNKNOWN16
    // Overlapping static entry reached from 0xC18402.
    case 0xC18404: {
        Instruction step(cpu, 0x17, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    case 0xC18405: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x007804u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC18404.
    case 0xC18406: {
        Instruction step(cpu, 0x04, 0x000078u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:69 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC18405.
    case 0xC18407: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:70 BRA @UNKNOWN16
    case 0xC18408: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    case 0xC1840A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000065u : 0x007865u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:72 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC1840A.
    case 0xC1840C: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:73 BRA @UNKNOWN16
    case 0xC1840D: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    case 0xC1840F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C6u : 0x0078C6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:75 LDA #.LOWORD(CC_1E_0D)
    // Overlapping static entry reached from 0xC1840F.
    case 0xC18411: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:76 BRA @UNKNOWN16
    case 0xC18412: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    case 0xC18414: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x007927u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:78 LDA #.LOWORD(CC_1E_0E)
    // Overlapping static entry reached from 0xC18414.
    case 0xC18416: {
        Instruction step(cpu, 0x79, 0x000380u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:79 BRA @UNKNOWN16
    case 0xC18417: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    case 0xC18419: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:81 LDA #$0000
    // Overlapping static entry reached from 0xC18419.
    case 0xC1841B: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1E.asm:83 RTS
    case 0xC1841C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
