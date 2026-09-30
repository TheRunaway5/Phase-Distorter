// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_1A.asm
bool resume_text_ccs_tree_1a(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1A.asm:3 BEGIN_C_FUNCTION
    case 0xC17DCB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DCD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DCE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DCF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17DD0.
    case 0xC17DD2: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DD3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1A.asm:9 END_STACK_VARS
    case 0xC17DD4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:10 TXA
    case 0xC17DD5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:11 BEQ @UNKNOWN2
    case 0xC17DD6: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    case 0xC17DD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:12 CMP #$01
    // Overlapping static entry reached from 0xC17DD8.
    case 0xC17DDA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:13 BEQ @UNKNOWN3
    case 0xC17DDB: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    case 0xC17DDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:14 CMP #$04
    // Overlapping static entry reached from 0xC17DDD.
    case 0xC17DDF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:15 BEQ @UNKNOWN4
    case 0xC17DE0: {
        Instruction step(cpu, 0xF0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    case 0xC17DE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    // Overlapping static entry reached from 0xC17E38.
    case 0xC17DE3: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:16 CMP #$05
    // Overlapping static entry reached from 0xC17DE2.
    case 0xC17DE4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:17 BEQ @UNKNOWN5
    case 0xC17DE5: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    case 0xC17DE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:18 CMP #$06
    // Overlapping static entry reached from 0xC17DE7.
    case 0xC17DE9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:19 BEQ @UNKNOWN6
    case 0xC17DEA: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    case 0xC17DEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:20 CMP #$07
    // Overlapping static entry reached from 0xC17DEC.
    case 0xC17DEE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:21 BEQ @UNKNOWN7
    case 0xC17DEF: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    case 0xC17DF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:22 CMP #$08
    // Overlapping static entry reached from 0xC17DF1.
    case 0xC17DF3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:23 BEQ @UNKNOWN8
    case 0xC17DF4: {
        Instruction step(cpu, 0xF0, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    case 0xC17DF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:24 CMP #$09
    // Overlapping static entry reached from 0xC17DF6.
    case 0xC17DF8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:25 BEQ @UNKNOWN9
    case 0xC17DF9: {
        Instruction step(cpu, 0xF0, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    case 0xC17DFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:26 CMP #$0A
    // Overlapping static entry reached from 0xC17DFB.
    case 0xC17DFD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17DFE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:27 BEQL @UNKNOWN10
    case 0xC17E00: {
        Instruction step(cpu, 0x4C, 0x007E80u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    case 0xC17E03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:28 CMP #$0B
    // Overlapping static entry reached from 0xC17E03.
    case 0xC17E05: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17E06: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1A.asm:29 BEQL @UNKNOWN11
    case 0xC17E08: {
        Instruction step(cpu, 0x4C, 0x007E94u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:30 JMP @UNKNOWN12
    case 0xC17E0B: {
        Instruction step(cpu, 0x4C, 0x007EA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    case 0xC17E0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Fu : 0x004A3Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:32 LDA #.LOWORD(CC_1A_00)
    // Overlapping static entry reached from 0xC17E0E.
    case 0xC17E10: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:33 JMP @UNKNOWN13
    case 0xC17E11: {
        Instruction step(cpu, 0x4C, 0x007EA9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    case 0xC17E14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x004A81u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:35 LDA #.LOWORD(CC_1A_01)
    // Overlapping static entry reached from 0xC17E14.
    case 0xC17E16: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:36 JMP @UNKNOWN13
    case 0xC17E17: {
        Instruction step(cpu, 0x4C, 0x007EA9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:38 LDA #0
    case 0xC17E1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:38 LDA #0
    // Overlapping static entry reached from 0xC17E1A.
    case 0xC17E1C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:39 JSR SELECTION_MENU
    case 0xC17E1D: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17E20: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC17E22: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E24: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E26: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E28: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E2A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:42 JSR SET_WORKING_MEMORY
    case 0xC17E2C: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:43 JSR UNKNOWN_C11383
    case 0xC17E2F: {
        Instruction step(cpu, 0x20, 0x0019ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:44 BRA @UNKNOWN12
    case 0xC17E32: {
        Instruction step(cpu, 0x80, 0x000072u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    case 0xC17E34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x005758u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:46 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC17E34.
    case 0xC17E36: {
        Instruction step(cpu, 0x57, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:47 BRA @UNKNOWN13
    case 0xC17E37: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:47 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17E36.
    case 0xC17E38: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    case 0xC17E39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B5u : 0x0052B5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    // Overlapping static entry reached from 0xC17E38.
    case 0xC17E3A: {
        Instruction step(cpu, 0xB5, 0x000052u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:49 LDA #.LOWORD(CC_1A_06)
    // Overlapping static entry reached from 0xC17E39.
    case 0xC17E3B: {
        Instruction step(cpu, 0x52, 0x000080u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:50 BRA @UNKNOWN13
    case 0xC17E3C: {
        Instruction step(cpu, 0x80, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:50 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC17E3B.
    case 0xC17E3D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:52 JSR UNKNOWN_C19A43
    case 0xC17E3E: {
        Instruction step(cpu, 0x20, 0x009A88u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17E41: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC17E43: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E45: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E47: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E49: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E4B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:55 JSR SET_WORKING_MEMORY
    case 0xC17E4D: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:56 BRA @UNKNOWN12
    case 0xC17E50: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:58 LDA #0
    case 0xC17E52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:58 LDA #0
    // Overlapping static entry reached from 0xC17E52.
    case 0xC17E54: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:59 JSR SELECTION_MENU
    case 0xC17E55: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17E58: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:60 STORE_INT1632 @VIRTUAL06
    case 0xC17E5A: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E5C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E5E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E60: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E62: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:62 JSR SET_WORKING_MEMORY
    case 0xC17E64: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:63 BRA @UNKNOWN12
    case 0xC17E67: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:65 LDA #1
    case 0xC17E69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:65 LDA #1
    // Overlapping static entry reached from 0xC17E69.
    case 0xC17E6B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:66 JSR SELECTION_MENU
    case 0xC17E6C: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17E6F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:67 STORE_INT1632 @VIRTUAL06
    case 0xC17E71: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E73: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E75: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E77: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E79: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:69 JSR SET_WORKING_MEMORY
    case 0xC17E7B: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:70 BRA @UNKNOWN12
    case 0xC17E7E: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:72 JSR UNKNOWN_C1AC00
    case 0xC17E80: {
        Instruction step(cpu, 0x20, 0x00AACBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17E83: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC17E85: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E87: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E89: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E8B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E8D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:75 JSR SET_WORKING_MEMORY
    case 0xC17E8F: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:76 BRA @UNKNOWN12
    case 0xC17E92: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:78 JSR UNKNOWN_C1AAFA
    case 0xC17E94: {
        Instruction step(cpu, 0x20, 0x00A9D0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17E97: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:79 STORE_INT1632 @VIRTUAL06
    case 0xC17E99: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E9B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E9D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17E9F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1A.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17EA1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:81 JSR SET_WORKING_MEMORY
    case 0xC17EA3: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    case 0xC17EA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1A.asm:83 LDA #NULL
    // Overlapping static entry reached from 0xC17EA6.
    case 0xC17EA8: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17EA9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1A.asm:85 END_C_FUNCTION
    case 0xC17EAA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
