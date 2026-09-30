// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/activate_hotspot.asm
bool resume_text_ccs_activate_hotspot(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/activate_hotspot.asm:3 BEGIN_C_FUNCTION
    case 0xC1739C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1739E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1739F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EBu : 0x00FFEBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC173A1.
    case 0xC173A3: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    case 0xC173A6: {
        Instruction step(cpu, 0x86, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC173A3.
    case 0xC173A7: {
        Instruction step(cpu, 0x13, 0x0000A9u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    case 0xC173A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC173A7.
    case 0xC173A9: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC173A8.
    case 0xC173AA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:14 CLC
    case 0xC173AB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173AC: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173AF: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173B1: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173B3: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173B5: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:17 TXA
    case 0xC173B7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC173B8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173BA: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC173BD: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC173C0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173C2: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    case 0xC173C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Cu : 0x00739Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC173C5.
    case 0xC173C7: {
        Instruction step(cpu, 0x73, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    case 0xC173C8: {
        Instruction step(cpu, 0x4C, 0x0074B1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC173C7.
    case 0xC173C9: {
        Instruction step(cpu, 0xB1, 0x000074u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC173CB: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    case 0xC173CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC173CE.
    case 0xC173D0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:28 BEQ @UNKNOWN3
    case 0xC173D1: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC173D3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173D5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173D7: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173D9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173DB: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:31 BRA @UNKNOWN4
    case 0xC173DD: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC173DF: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC173E2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:36 LDA @VIRTUAL06
    case 0xC173E4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:37 STA @VIRTUAL00
    case 0xC173E6: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC173E8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:39 LDA CC_ARGUMENT_STORAGE+1
    case 0xC173EA: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    case 0xC173ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC173ED.
    case 0xC173EF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:41 BEQ @UNKNOWN5
    case 0xC173F0: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC173F2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173F4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173F6: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173F8: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173FA: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:44 BRA @UNKNOWN6
    case 0xC173FC: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:46 JSR GET_WORKING_MEMORY
    case 0xC173FE: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC17401: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:49 LDA @VIRTUAL06
    case 0xC17403: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:50 STA @LOCAL01
    case 0xC17405: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:51 LDX @LOCAL02
    case 0xC17407: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC17409: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:53 TXA
    case 0xC1740B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1740C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1740E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:55 SEP #PROC_FLAGS::INDEX8
    case 0xC17410: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:56 LDY #24
    case 0xC17412: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x002218u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    case 0xC17414: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17412.
    case 0xC17415: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17415.
    case 0xC17416: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC17418: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1741A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1741B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1741D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:59 LDY #16
    case 0xC1741E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x00E210u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC17420: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1741E.
    case 0xC17421: {
        Instruction step(cpu, 0x20, 0x0072ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17422: {
        Instruction step(cpu, 0xAD, 0x009A72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC17421.
    case 0xC17424: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17425: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17427: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17429: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC1742B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC1742D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:63 JSL ASL32_ENTRY2
    case 0xC1742F: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17433: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17435: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17436: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17438: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:65 LDY #8
    case 0xC17439: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC1743B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC17439.
    case 0xC1743C: {
        Instruction step(cpu, 0x20, 0x0071ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC1743D: {
        Instruction step(cpu, 0xAD, 0x009A71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC1743C.
    case 0xC1743F: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17440: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17442: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17444: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17446: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC17448: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:69 JSL ASL32_ENTRY2
    case 0xC1744A: {
        Instruction step(cpu, 0x22, 0xC09228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC1744E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC17450: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC17452: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC17454: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC17456: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17458: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1745B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1745D: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1745F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17461: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC17463: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17465: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17467: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17469: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1746B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1746D: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1746F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17471: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17472: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17474: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17475: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17477: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17479: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1747B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1747D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1747F: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17481: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17483: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17484: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17486: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17487: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17489: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1748B: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1748D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1748F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17491: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17493: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17495: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17497: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17499: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1749B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:80 LDA @LOCAL01
    case 0xC1749D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    case 0xC1749F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1749F.
    case 0xC174A1: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:82 REP #PROC_FLAGS::INDEX8
    case 0xC174A2: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:83 TAX
    case 0xC174A4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:84 LDA @VIRTUAL00
    case 0xC174A5: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    case 0xC174A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC174A7.
    case 0xC174A9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:86 JSL ACTIVATE_HOTSPOT
    case 0xC174AA: {
        Instruction step(cpu, 0x22, 0xC07507u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    case 0xC174AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    // Overlapping static entry reached from 0xC174AE.
    case 0xC174B0: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC174B1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC174B2: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
