// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/trigger_psi_teleport.asm
bool resume_text_ccs_trigger_psi_teleport(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:3 BEGIN_C_FUNCTION
    case 0xC151FB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC151FD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC151FE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC151FF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC15200: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC15200.
    case 0xC15202: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC15203: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:12 END_STACK_VARS
    case 0xC15204: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:13 TXA
    case 0xC15205: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:14 STA @LOCAL03
    case 0xC15206: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:15 LDA #1
    case 0xC15208: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:15 LDA #1
    // Overlapping static entry reached from 0xC15208.
    case 0xC1520A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:16 CLC
    case 0xC1520B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:17 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1520C: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC1520F: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC15211: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC15213: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC15215: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:19 LDA @LOCAL03
    case 0xC15217: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC15219: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:21 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1521B: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:22 STA CC_ARGUMENT_STORAGE,X
    case 0xC1521E: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC15221: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:24 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15223: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:25 LDA #.LOWORD(CC_1F_20)
    case 0xC15226: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FBu : 0x0051FBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:25 LDA #.LOWORD(CC_1F_20)
    // Overlapping static entry reached from 0xC15226.
    case 0xC15228: {
        Instruction step(cpu, 0x51, 0x000080u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:26 BRA @UNKNOWN7
    case 0xC15229: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:26 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC15228.
    case 0xC1522A: {
        Instruction step(cpu, 0x5F, 0xAD20E2u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC1522B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC1522D: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:29 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1522A.
    case 0xC1522E: {
        Instruction step(cpu, 0x6E, 0x00859Au, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:30 STA @VIRTUAL00
    case 0xC15230: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:30 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1522E.
    case 0xC15231: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC15232: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:32 LDA @LOCAL03
    case 0xC15234: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:33 BEQ @UNKNOWN3
    case 0xC15236: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC15238: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC1523A: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1523C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1523E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC15240: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC15242: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:36 BRA @UNKNOWN4
    case 0xC15244: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:38 JSR GET_ARGUMENT_MEMORY
    case 0xC15246: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC15249: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1524B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1524D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1524F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:41 LDA @VIRTUAL00
    case 0xC15251: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:42 AND #$00FF
    case 0xC15253: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC15253.
    case 0xC15255: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:43 BEQ @UNKNOWN5
    case 0xC15256: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC15258: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:45 LDA @VIRTUAL00
    case 0xC1525A: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:46 STA @LOCAL01
    case 0xC1525C: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:47 BRA @UNKNOWN6
    case 0xC1525E: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:49 JSR GET_WORKING_MEMORY
    case 0xC15260: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15263: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15265: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15267: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:50 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15269: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC1526B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:52 LDA @VIRTUAL0A
    case 0xC1526D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:53 STA @LOCAL01
    case 0xC1526F: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC15271: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15273: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15275: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15277: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC15279: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC1527B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:58 LDA @VIRTUAL06
    case 0xC1527D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:59 STA @LOCAL00
    case 0xC1527F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:60 LDA @LOCAL01
    case 0xC15281: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:61 JSL SET_TELEPORT_STATE
    case 0xC15283: {
        Instruction step(cpu, 0x22, 0xC0DD1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:63 LDA #NULL
    case 0xC15287: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_psi_teleport.asm:63 LDA #NULL
    // Overlapping static entry reached from 0xC15287.
    case 0xC15289: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:65 END_C_FUNCTION
    case 0xC1528A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_psi_teleport.asm:65 END_C_FUNCTION
    case 0xC1528B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
