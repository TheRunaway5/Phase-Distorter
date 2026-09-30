// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/jump_multi2.asm
bool resume_text_ccs_jump_multi2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_multi2.asm:3 BEGIN_C_FUNCTION
    case 0xC16308: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1630D.
    case 0xC1630F: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC16310: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC16311: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:11 STX @LOCAL01
    case 0xC16312: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1630F.
    case 0xC16313: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:12 TAY
    case 0xC16314: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:13 STY @LOCAL00
    case 0xC16315: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:14 JSR GET_WORKING_MEMORY
    case 0xC16317: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1631A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1631A.
    case 0xC1631C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1631D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1631F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1631F.
    case 0xC16321: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC16322: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC16324: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC16326: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC16328: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1632A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1632C: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:17 BEQ @UNKNOWN1
    case 0xC1632E: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:18 JSR GET_WORKING_MEMORY
    case 0xC16330: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:19 LDX @LOCAL01
    case 0xC16333: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:20 TXA
    case 0xC16335: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:21 STORE_INT1632 @VIRTUAL0A
    case 0xC16336: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:21 STORE_INT1632 @VIRTUAL0A
    case 0xC16338: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:22 CLC
    case 0xC1633A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:23 LDA @VIRTUAL06
    case 0xC1633B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:24 SBC @VIRTUAL0A
    case 0xC1633D: {
        Instruction step(cpu, 0xE5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:25 LDA @VIRTUAL06+2
    case 0xC1633F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:26 SBC @VIRTUAL0A+2
    case 0xC16341: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:27 BCS @UNKNOWN1
    case 0xC16343: {
        Instruction step(cpu, 0xB0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:28 JSR GET_WORKING_MEMORY
    case 0xC16345: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:29 LDA @VIRTUAL06
    case 0xC16348: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:30 STA @VIRTUAL02
    case 0xC1634A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:31 LDX @LOCAL01
    case 0xC1634C: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:32 TXA
    case 0xC1634E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:33 SEC
    case 0xC1634F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:34 SBC @VIRTUAL02
    case 0xC16350: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:35 STA ONGOSUB_OFFSET
    case 0xC16352: {
        Instruction step(cpu, 0x8D, 0x0097D5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:36 LDY @LOCAL00
    case 0xC16355: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:37 STY @LOCAL01
    case 0xC16357: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:38 JSR GET_WORKING_MEMORY
    case 0xC16359: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:39 LDA @VIRTUAL06
    case 0xC1635C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:40 DEC
    case 0xC1635E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:41 ASL
    case 0xC1635F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:42 ASL
    case 0xC16360: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:43 PHA
    case 0xC16361: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:44 LDY @LOCAL01
    case 0xC16362: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16364: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16367: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16369: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1636C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:46 PLA
    case 0xC1636E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:47 CLC
    case 0xC1636F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:48 ADC @VIRTUAL06
    case 0xC16370: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:49 STA @VIRTUAL06
    case 0xC16372: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:50 STA __BSS_START__,Y
    case 0xC16374: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:51 LDA @VIRTUAL06+2
    case 0xC16377: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:52 STA __BSS_START__+2,Y
    case 0xC16379: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:53 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1637C: {
        Instruction step(cpu, 0x9C, 0x0097CAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:54 LDA #.LOWORD(UNKNOWN_C1621F)
    case 0xC1637F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00621Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:54 LDA #.LOWORD(UNKNOWN_C1621F)
    // Overlapping static entry reached from 0xC1637F.
    case 0xC16381: {
        Instruction step(cpu, 0x62, 0x002180u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:55 BRA @UNKNOWN2
    case 0xC16382: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:57 LDY @LOCAL00
    case 0xC16384: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16386: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16389: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1638B: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1638E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:59 LDX @LOCAL01
    case 0xC16390: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:60 TXA
    case 0xC16392: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:61 ASL
    case 0xC16393: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:62 ASL
    case 0xC16394: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:63 CLC
    case 0xC16395: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:64 ADC @VIRTUAL06
    case 0xC16396: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:65 STA @VIRTUAL06
    case 0xC16398: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:66 STA __BSS_START__,Y
    case 0xC1639A: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:67 LDA @VIRTUAL06+2
    case 0xC1639D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:68 STA __BSS_START__+2,Y
    case 0xC1639F: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:69 LDA #NULL
    case 0xC163A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_multi2.asm:69 LDA #NULL
    // Overlapping static entry reached from 0xC163A2.
    case 0xC163A4: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_multi2.asm:71 END_C_FUNCTION
    case 0xC163A5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_multi2.asm:71 END_C_FUNCTION
    case 0xC163A6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
