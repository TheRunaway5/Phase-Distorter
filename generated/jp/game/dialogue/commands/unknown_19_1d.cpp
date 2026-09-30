// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/unknown_19_1D.asm
bool resume_text_ccs_unknown_19_1d(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_19_1D.asm:3 BEGIN_C_FUNCTION
    case 0xC162FF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16301: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16302: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16303: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16304: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC16304.
    case 0xC16306: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16307: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_19_1D.asm:11 END_STACK_VARS
    case 0xC16308: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:12 STX @VIRTUAL02
    case 0xC16309: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16306.
    case 0xC1630A: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:13 LDA #1
    case 0xC1630B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:13 LDA #1
    // Overlapping static entry reached from 0xC1630B.
    case 0xC1630D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:14 CLC
    case 0xC1630E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1630F: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16312: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16314: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16316: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16318: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:17 LDA @VIRTUAL02
    case 0xC1631A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1631C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1631E: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16321: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16324: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16326: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:23 LDA #.LOWORD(CC_19_1D)
    case 0xC16329: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0062FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:23 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC16329.
    case 0xC1632B: {
        Instruction step(cpu, 0x62, 0x007380u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:24 BRA @UNKNOWN6
    case 0xC1632C: {
        Instruction step(cpu, 0x80, 0x000073u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1632E: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:27 AND #$00FF
    case 0xC16331: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16331.
    case 0xC16333: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:28 TAX
    case 0xC16334: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:29 BEQ @ARG_IS_ZERO
    case 0xC16335: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:30 TXA
    case 0xC16337: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:31 BRA @ARG_IS_NONZERO
    case 0xC16338: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:33 JSR GET_WORKING_MEMORY
    case 0xC1633A: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:34 LDA @VIRTUAL06
    case 0xC1633D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:36 DEC
    case 0xC1633F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:37 CLC
    case 0xC16340: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:38 ADC #.LOWORD(GAME_STATE)
    case 0xC16341: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:38 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC16341.
    case 0xC16343: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:39 STA @LOCAL02
    case 0xC16344: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:40 CLC
    case 0xC16346: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:41 ADC #game_state::unknownB8
    case 0xC16347: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B6u : 0x0000B6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:41 ADC #game_state::unknownB8
    // Overlapping static entry reached from 0xC16347.
    case 0xC16349: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:42 TAY
    case 0xC1634A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:43 STY @LOCAL01
    case 0xC1634B: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC1634D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:45 LDA __BSS_START__,Y
    case 0xC1634F: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16352: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16354: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16356: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1D.asm:46 STORE_INT832 @VIRTUAL06
    case 0xC16358: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC1635A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1635C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1635E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16360: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16362: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:49 JSR SET_WORKING_MEMORY
    case 0xC16364: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:50 LDA @LOCAL02
    case 0xC16367: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:51 CLC
    case 0xC16369: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:52 ADC #game_state::unknownB6
    case 0xC1636A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B3u : 0x0000B3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:52 ADC #game_state::unknownB6
    // Overlapping static entry reached from 0xC1636A.
    case 0xC1636C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:53 TAX
    case 0xC1636D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:54 STX @LOCAL02
    case 0xC1636E: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC16370: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:56 LDA __BSS_START__,X
    case 0xC16372: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC16375: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC16377: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC16379: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/unknown_19_1D.asm:57 STORE_INT832 @VIRTUAL06
    case 0xC1637B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1637D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1637F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16381: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16383: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_19_1D.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16385: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:60 JSR SET_ARGUMENT_MEMORY
    case 0xC16387: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:61 LDA @VIRTUAL02
    case 0xC1638A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:62 BEQ @UNKNOWN5
    case 0xC1638C: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1638E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:64 LDA #0
    case 0xC16390: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:65 LDX @LOCAL02
    case 0xC16392: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:65 LDX @LOCAL02
    // Overlapping static entry reached from 0xC16390.
    case 0xC16393: {
        Instruction step(cpu, 0x14, 0x00009Du, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:66 STA __BSS_START__,X
    case 0xC16394: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:66 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC16393.
    case 0xC16395: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:67 LDY @LOCAL01
    case 0xC16397: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:68 STA __BSS_START__,Y
    case 0xC16399: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC1639C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:71 LDA #NULL
    case 0xC1639E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_19_1D.asm:71 LDA #NULL
    // Overlapping static entry reached from 0xC1639E.
    case 0xC163A0: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_19_1D.asm:73 END_C_FUNCTION
    case 0xC163A1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_19_1D.asm:73 END_C_FUNCTION
    case 0xC163A2: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
