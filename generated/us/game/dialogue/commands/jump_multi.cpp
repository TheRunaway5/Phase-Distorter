// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/jump_multi.asm
bool resume_text_ccs_jump_multi(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_multi.asm:3 BEGIN_C_FUNCTION
    case 0xC141D0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC141D5.
    case 0xC141D7: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:11 TXY
    case 0xC141DA: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:12 STY @LOCAL01
    case 0xC141DB: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:13 TAX
    case 0xC141DD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:14 STX @LOCAL00
    case 0xC141DE: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:15 JSR GET_WORKING_MEMORY
    case 0xC141E0: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC141E3.
    case 0xC141E5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141E6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC141E8.
    case 0xC141EA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141EB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141ED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141EF: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141F1: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141F5: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:18 BEQ @UNKNOWN1
    case 0xC141F7: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:19 JSR GET_WORKING_MEMORY
    case 0xC141F9: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:20 LDY @LOCAL01
    case 0xC141FC: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:21 TYA
    case 0xC141FE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC141FF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC14201: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:23 CLC
    case 0xC14203: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:24 LDA @VIRTUAL06
    case 0xC14204: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:25 SBC @VIRTUAL0A
    case 0xC14206: {
        Instruction step(cpu, 0xE5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:26 LDA @VIRTUAL06+2
    case 0xC14208: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:27 SBC @VIRTUAL0A+2
    case 0xC1420A: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:28 BCS @UNKNOWN1
    case 0xC1420C: {
        Instruction step(cpu, 0xB0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:29 LDX @LOCAL00
    case 0xC1420E: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:30 TXY
    case 0xC14210: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:31 STY @LOCAL00
    case 0xC14211: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:32 JSR GET_WORKING_MEMORY
    case 0xC14213: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:33 LDA @VIRTUAL06
    case 0xC14216: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:34 DEC
    case 0xC14218: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:35 ASL
    case 0xC14219: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:36 ASL
    case 0xC1421A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:37 PHA
    case 0xC1421B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:38 LDY @LOCAL00
    case 0xC1421C: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1421E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14221: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14223: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14226: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:40 PLA
    case 0xC14228: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:41 CLC
    case 0xC14229: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:42 ADC @VIRTUAL06
    case 0xC1422A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:43 STA @VIRTUAL06
    case 0xC1422C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:44 STA __BSS_START__,Y
    case 0xC1422E: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:45 LDA @VIRTUAL06+2
    case 0xC14231: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:46 STA __BSS_START__+2,Y
    case 0xC14233: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:47 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14236: {
        Instruction step(cpu, 0x9C, 0x0097CAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:48 LDA #.LOWORD(CC_0A)
    case 0xC14239: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x004103u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:48 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC14239.
    case 0xC1423B: {
        Instruction step(cpu, 0x41, 0x000080u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:49 BRA @UNKNOWN2
    case 0xC1423C: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:49 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1423B.
    case 0xC1423D: {
        Instruction step(cpu, 0x25, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:51 LDX @LOCAL00
    case 0xC1423E: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:51 LDX @LOCAL00
    // Overlapping static entry reached from 0xC1423D.
    case 0xC1423F: {
        Instruction step(cpu, 0x0E, 0x00B99Bu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:52 TXY
    case 0xC14240: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14241: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1423F.
    case 0xC14242: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14244: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14246: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14249: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:54 LDY @LOCAL01
    case 0xC1424B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:55 TYA
    case 0xC1424D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:56 ASL
    case 0xC1424E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:57 ASL
    case 0xC1424F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:58 CLC
    case 0xC14250: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:59 ADC @VIRTUAL06
    case 0xC14251: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:60 STA @VIRTUAL06
    case 0xC14253: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:61 TXY
    case 0xC14255: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC14256: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC14258: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1425B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1425D: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:63 LDA #NULL
    case 0xC14260: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi.asm:63 LDA #NULL
    // Overlapping static entry reached from 0xC14260.
    case 0xC14262: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_multi.asm:65 END_C_FUNCTION
    case 0xC14263: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_multi.asm:65 END_C_FUNCTION
    case 0xC14264: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
