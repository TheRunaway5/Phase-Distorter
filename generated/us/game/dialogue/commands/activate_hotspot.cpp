// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/activate_hotspot.asm
bool resume_text_ccs_activate_hotspot(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/activate_hotspot.asm:3 BEGIN_C_FUNCTION
    case 0xC1711C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1711E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1711F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17120: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17121: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EBu : 0x00FFEBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17121.
    case 0xC17123: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17124: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17125: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    case 0xC17126: {
        Instruction step(cpu, 0x86, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC17123.
    case 0xC17127: {
        Instruction step(cpu, 0x13, 0x0000A9u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    case 0xC17128: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC17127.
    case 0xC17129: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC17128.
    case 0xC1712A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:14 CLC
    case 0xC1712B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1712C: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1712F: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17131: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17133: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17135: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:17 TXA
    case 0xC17137: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC17138: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1713A: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1713D: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC17140: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17142: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    case 0xC17145: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00711Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC17145.
    case 0xC17147: {
        Instruction step(cpu, 0x71, 0x00004Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    case 0xC17148: {
        Instruction step(cpu, 0x4C, 0x007231u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC17147.
    case 0xC17149: {
        Instruction step(cpu, 0x31, 0x000072u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1714B: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    case 0xC1714E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1714E.
    case 0xC17150: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:28 BEQ @UNKNOWN3
    case 0xC17151: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC17153: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC17155: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC17157: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC17159: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC1715B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:31 BRA @UNKNOWN4
    case 0xC1715D: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC1715F: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC17162: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:36 LDA @VIRTUAL06
    case 0xC17164: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:37 STA @VIRTUAL00
    case 0xC17166: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC17168: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:39 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1716A: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    case 0xC1716D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1716D.
    case 0xC1716F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:41 BEQ @UNKNOWN5
    case 0xC17170: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC17172: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC17174: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC17176: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC17178: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC1717A: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:44 BRA @UNKNOWN6
    case 0xC1717C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:46 JSR GET_WORKING_MEMORY
    case 0xC1717E: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC17181: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:49 LDA @VIRTUAL06
    case 0xC17183: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:50 STA @LOCAL01
    case 0xC17185: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:51 LDX @LOCAL02
    case 0xC17187: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC17189: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:53 TXA
    case 0xC1718B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1718C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1718E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:55 SEP #PROC_FLAGS::INDEX8
    case 0xC17190: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:56 LDY #24
    case 0xC17192: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x002218u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    case 0xC17194: {
        Instruction step(cpu, 0x22, 0xC09246u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17192.
    case 0xC17195: {
        Instruction step(cpu, 0x46, 0x000092u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17195.
    case 0xC17197: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0008A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC17198: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    // Overlapping static entry reached from 0xC17197.
    case 0xC17199: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1719A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1719B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1719D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:59 LDY #16
    case 0xC1719E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x00E210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC171A0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1719E.
    case 0xC171A1: {
        Instruction step(cpu, 0x20, 0x00BEADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A2: {
        Instruction step(cpu, 0xAD, 0x0097BEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A1.
    case 0xC171A4: {
        Instruction step(cpu, 0x97, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A4.
    case 0xC171A6: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A7: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A6.
    case 0xC171A8: {
        Instruction step(cpu, 0x07, 0x000064u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A8.
    case 0xC171AA: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171AB: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC171AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:63 JSL ASL32_ENTRY2
    case 0xC171AF: {
        Instruction step(cpu, 0x22, 0xC09246u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:65 LDY #8
    case 0xC171B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC171BB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC171B9.
    case 0xC171BC: {
        Instruction step(cpu, 0x20, 0x00BDADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171BD: {
        Instruction step(cpu, 0xAD, 0x0097BDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171BC.
    case 0xC171BF: {
        Instruction step(cpu, 0x97, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171BF.
    case 0xC171C1: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C2: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171C1.
    case 0xC171C3: {
        Instruction step(cpu, 0x07, 0x000064u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C4: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171C3.
    case 0xC171C5: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC171C8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:69 JSL ASL32_ENTRY2
    case 0xC171CA: {
        Instruction step(cpu, 0x22, 0xC09246u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171CE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171D0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171D2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171D4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC171D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171D8: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171DB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171DD: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171DF: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171E1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC171E3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171E5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171E7: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171E9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171EB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171ED: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171EF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171F7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171F9: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171FB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171FD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171FF: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17201: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17203: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17204: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17206: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17207: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17209: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1720B: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1720D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1720F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17211: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17213: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17215: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17217: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17219: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1721B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:80 LDA @LOCAL01
    case 0xC1721D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    case 0xC1721F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1721F.
    case 0xC17221: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:82 REP #PROC_FLAGS::INDEX8
    case 0xC17222: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:83 TAX
    case 0xC17224: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:84 LDA @VIRTUAL00
    case 0xC17225: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    case 0xC17227: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC17227.
    case 0xC17229: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:86 JSL ACTIVATE_HOTSPOT
    case 0xC1722A: {
        Instruction step(cpu, 0x22, 0xC072CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    case 0xC1722E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    // Overlapping static entry reached from 0xC1722E.
    case 0xC17230: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC17231: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC17232: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
