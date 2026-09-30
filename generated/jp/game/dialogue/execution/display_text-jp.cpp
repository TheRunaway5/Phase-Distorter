// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/display_text-jp.asm
bool resume_text_display_text_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_text-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC18913: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC18915: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC18916: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC18917: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18917.
    case 0xC18919: {
        Instruction step(cpu, 0xFF, 0x26A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC1891A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1891B: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1891D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1891F: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC18921: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:13 LDY #0
    case 0xC18923: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:13 LDY #0
    // Overlapping static entry reached from 0xC18923.
    case 0xC18925: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:14 STY @LOCAL03
    case 0xC18926: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC18928: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC18928.
    case 0xC1892A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1892B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1892D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1892D.
    case 0xC1892F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC18930: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18932: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18934: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18936: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18938: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1893A: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:17 BNE @UNKNOWN1
    case 0xC1893C: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1893E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18940: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18942: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18944: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:19 JMP @UNKNOWN74
    case 0xC18946: {
        Instruction step(cpu, 0x4C, 0x008BC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:21 JSR UNKNOWN_C14012
    case 0xC18949: {
        Instruction step(cpu, 0x20, 0x004454u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:22 STA @LOCAL02
    case 0xC1894C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1894E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18950: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18952: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18954: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:24 LDA @LOCAL02
    case 0xC18956: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:25 JSR UNKNOWN_C1866D
    case 0xC18958: {
        Instruction step(cpu, 0x20, 0x0088CFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:26 STA @VIRTUAL02
    case 0xC1895B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:27 STA @LOCAL02
    case 0xC1895D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:28 LDA @VIRTUAL02
    case 0xC1895F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:29 BNE @UNKNOWN2
    case 0xC18961: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18963: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18965: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18967: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18969: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:31 JMP @UNKNOWN74
    case 0xC1896B: {
        Instruction step(cpu, 0x4C, 0x008BC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:33 LDA @LOCAL02
    case 0xC1896E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:34 STA @VIRTUAL02
    case 0xC18970: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:35 LDX @VIRTUAL02
    case 0xC18972: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text-jp.asm:36 TXY
    case 0xC18974: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18975: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18978: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1897A: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1897D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:38 LDA [@VIRTUAL06]
    case 0xC1897F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:39 AND #$00FF
    case 0xC18981: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC18981.
    case 0xC18983: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:40 STA @LOCAL01
    case 0xC18984: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:41 INC @VIRTUAL06
    case 0xC18986: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/display_text-jp.asm:42 TXY
    case 0xC18988: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18989: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1898B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1898E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18990: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:45 LDY @LOCAL03
    case 0xC18993: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:46 BEQ @UNKNOWN7
    case 0xC18995: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text-jp.asm:47 LDA @LOCAL01
    case 0xC18997: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:48 TAX
    case 0xC18999: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/display_text-jp.asm:49 LDA @VIRTUAL02
    case 0xC1899A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:50 STY @VIRTUAL02
    case 0xC1899C: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:51 STA TEMP_REGISTER
    case 0xC1899E: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:52 PEA .LOWORD(@UNK)
    case 0xC189A1: {
        Instruction step(cpu, 0xF4, 0x0089ABu, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/text/display_text-jp.asm:53 LDA @VIRTUAL02
    case 0xC189A4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:54 DEC
    case 0xC189A6: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/display_text-jp.asm:55 PHA
    case 0xC189A7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:56 LDA TEMP_REGISTER
    case 0xC189A8: {
        Instruction step(cpu, 0xAD, 0x0000BEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:58 RTS
    case 0xC189AB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:59 TAY
    case 0xC189AC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:60 STY @LOCAL03
    case 0xC189AD: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:61 BRA @UNKNOWN2
    case 0xC189AF: {
        Instruction step(cpu, 0x80, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/display_text-jp.asm:63 LDA @LOCAL01
    case 0xC189B1: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:64 CMP #$20
    case 0xC189B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:64 CMP #$20
    // Overlapping static entry reached from 0xC189B3.
    case 0xC189B5: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:65 BCC @UNKNOWN13
    case 0xC189B6: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/display_text-jp.asm:66 JMP @UNKNOWN72
    case 0xC189B8: {
        Instruction step(cpu, 0x4C, 0x008BA7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:68 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC189BB: {
        Instruction step(cpu, 0x9C, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/display_text-jp.asm:69 CMP #$00
    case 0xC189BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:69 CMP #$00
    // Overlapping static entry reached from 0xC189BE.
    case 0xC189C0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:70 BEQL @CC_00
    case 0xC189C1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:70 BEQL @CC_00
    case 0xC189C3: {
        Instruction step(cpu, 0x4C, 0x008AA9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:71 CMP #$01
    case 0xC189C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:71 CMP #$01
    // Overlapping static entry reached from 0xC189C6.
    case 0xC189C8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:72 BEQL @CC_01
    case 0xC189C9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:72 BEQL @CC_01
    case 0xC189CB: {
        Instruction step(cpu, 0x4C, 0x008AAFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:73 CMP #$02
    case 0xC189CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:73 CMP #$02
    // Overlapping static entry reached from 0xC189CE.
    case 0xC189D0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:74 BEQL @UNKNOWN73
    case 0xC189D1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:74 BEQL @UNKNOWN73
    case 0xC189D3: {
        Instruction step(cpu, 0x4C, 0x008BADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:75 CMP #$03
    case 0xC189D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:75 CMP #$03
    // Overlapping static entry reached from 0xC189D6.
    case 0xC189D8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:76 BEQL @UNKNOWN46
    case 0xC189D9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:76 BEQL @UNKNOWN46
    case 0xC189DB: {
        Instruction step(cpu, 0x4C, 0x008AC0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:77 CMP #$04
    case 0xC189DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:77 CMP #$04
    // Overlapping static entry reached from 0xC189DE.
    case 0xC189E0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:78 BEQL @UNKNOWN47
    case 0xC189E1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:78 BEQL @UNKNOWN47
    case 0xC189E3: {
        Instruction step(cpu, 0x4C, 0x008ACCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:79 CMP #$05
    case 0xC189E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:79 CMP #$05
    // Overlapping static entry reached from 0xC189E6.
    case 0xC189E8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:80 BEQL @UNKNOWN48
    case 0xC189E9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:80 BEQL @UNKNOWN48
    case 0xC189EB: {
        Instruction step(cpu, 0x4C, 0x008AD4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:81 CMP #$06
    case 0xC189EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:81 CMP #$06
    // Overlapping static entry reached from 0xC189EE.
    case 0xC189F0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:82 BEQL @UNKNOWN49
    case 0xC189F1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:82 BEQL @UNKNOWN49
    case 0xC189F3: {
        Instruction step(cpu, 0x4C, 0x008ADCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:83 CMP #$07
    case 0xC189F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:83 CMP #$07
    // Overlapping static entry reached from 0xC189F6.
    case 0xC189F8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:84 BEQL @UNKNOWN50
    case 0xC189F9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:84 BEQL @UNKNOWN50
    case 0xC189FB: {
        Instruction step(cpu, 0x4C, 0x008AE4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:85 CMP #$08
    case 0xC189FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:85 CMP #$08
    // Overlapping static entry reached from 0xC189FE.
    case 0xC18A00: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:86 BEQL @UNKNOWN51
    case 0xC18A01: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:86 BEQL @UNKNOWN51
    case 0xC18A03: {
        Instruction step(cpu, 0x4C, 0x008AECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:87 CMP #$09
    case 0xC18A06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:87 CMP #$09
    // Overlapping static entry reached from 0xC18A06.
    case 0xC18A08: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:88 BEQL @UNKNOWN52
    case 0xC18A09: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:88 BEQL @UNKNOWN52
    case 0xC18A0B: {
        Instruction step(cpu, 0x4C, 0x008AF4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:89 CMP #$0A
    case 0xC18A0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:89 CMP #$0A
    // Overlapping static entry reached from 0xC18A0E.
    case 0xC18A10: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:90 BEQL @UNKNOWN53
    case 0xC18A11: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:90 BEQL @UNKNOWN53
    case 0xC18A13: {
        Instruction step(cpu, 0x4C, 0x008AFCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:91 CMP #$0B
    case 0xC18A16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:91 CMP #$0B
    // Overlapping static entry reached from 0xC18A16.
    case 0xC18A18: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:92 BEQL @UNKNOWN54
    case 0xC18A19: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:92 BEQL @UNKNOWN54
    case 0xC18A1B: {
        Instruction step(cpu, 0x4C, 0x008B04u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:93 CMP #$0C
    case 0xC18A1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:93 CMP #$0C
    // Overlapping static entry reached from 0xC18A1E.
    case 0xC18A20: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:94 BEQL @UNKNOWN55
    case 0xC18A21: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:94 BEQL @UNKNOWN55
    case 0xC18A23: {
        Instruction step(cpu, 0x4C, 0x008B0Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:95 CMP #$0D
    case 0xC18A26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:95 CMP #$0D
    // Overlapping static entry reached from 0xC18A26.
    case 0xC18A28: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:96 BEQL @UNKNOWN56
    case 0xC18A29: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:96 BEQL @UNKNOWN56
    case 0xC18A2B: {
        Instruction step(cpu, 0x4C, 0x008B14u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:97 CMP #$0E
    case 0xC18A2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:97 CMP #$0E
    // Overlapping static entry reached from 0xC18A2E.
    case 0xC18A30: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:98 BEQL @UNKNOWN57
    case 0xC18A31: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:98 BEQL @UNKNOWN57
    case 0xC18A33: {
        Instruction step(cpu, 0x4C, 0x008B1Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:99 CMP #$0F
    case 0xC18A36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:99 CMP #$0F
    // Overlapping static entry reached from 0xC18A36.
    case 0xC18A38: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:100 BEQL @UNKNOWN58
    case 0xC18A39: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:100 BEQL @UNKNOWN58
    case 0xC18A3B: {
        Instruction step(cpu, 0x4C, 0x008B24u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:101 CMP #$10
    case 0xC18A3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:101 CMP #$10
    // Overlapping static entry reached from 0xC18A3E.
    case 0xC18A40: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:102 BEQL @UNKNOWN59
    case 0xC18A41: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:102 BEQL @UNKNOWN59
    case 0xC18A43: {
        Instruction step(cpu, 0x4C, 0x008B2Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:103 CMP #$11
    case 0xC18A46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:103 CMP #$11
    // Overlapping static entry reached from 0xC18A46.
    case 0xC18A48: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:104 BEQL @UNKNOWN60
    case 0xC18A49: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:104 BEQL @UNKNOWN60
    case 0xC18A4B: {
        Instruction step(cpu, 0x4C, 0x008B32u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:105 CMP #$12
    case 0xC18A4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:105 CMP #$12
    // Overlapping static entry reached from 0xC18A4E.
    case 0xC18A50: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:106 BEQL @UNKNOWN61
    case 0xC18A51: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:106 BEQL @UNKNOWN61
    case 0xC18A53: {
        Instruction step(cpu, 0x4C, 0x008B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:107 CMP #$13
    case 0xC18A56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:107 CMP #$13
    // Overlapping static entry reached from 0xC18A56.
    case 0xC18A58: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:108 BEQL @UNKNOWN62
    case 0xC18A59: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:108 BEQL @UNKNOWN62
    case 0xC18A5B: {
        Instruction step(cpu, 0x4C, 0x008B53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:109 CMP #$14
    case 0xC18A5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:109 CMP #$14
    // Overlapping static entry reached from 0xC18A5E.
    case 0xC18A60: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:110 BEQL @UNKNOWN63
    case 0xC18A61: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:110 BEQL @UNKNOWN63
    case 0xC18A63: {
        Instruction step(cpu, 0x4C, 0x008B5Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:111 CMP #$18
    case 0xC18A66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:111 CMP #$18
    // Overlapping static entry reached from 0xC18A66.
    case 0xC18A68: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:112 BEQL @UNKNOWN64
    case 0xC18A69: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:112 BEQL @UNKNOWN64
    case 0xC18A6B: {
        Instruction step(cpu, 0x4C, 0x008B67u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:113 CMP #$19
    case 0xC18A6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:113 CMP #$19
    // Overlapping static entry reached from 0xC18A6E.
    case 0xC18A70: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:114 BEQL @UNKNOWN65
    case 0xC18A71: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:114 BEQL @UNKNOWN65
    case 0xC18A73: {
        Instruction step(cpu, 0x4C, 0x008B6Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:115 CMP #$1A
    case 0xC18A76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:115 CMP #$1A
    // Overlapping static entry reached from 0xC18A76.
    case 0xC18A78: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:116 BEQL @UNKNOWN66
    case 0xC18A79: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:116 BEQL @UNKNOWN66
    case 0xC18A7B: {
        Instruction step(cpu, 0x4C, 0x008B77u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:117 CMP #$1B
    case 0xC18A7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:117 CMP #$1B
    // Overlapping static entry reached from 0xC18A7E.
    case 0xC18A80: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:118 BEQL @UNKNOWN67
    case 0xC18A81: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:118 BEQL @UNKNOWN67
    case 0xC18A83: {
        Instruction step(cpu, 0x4C, 0x008B7Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:119 CMP #$1C
    case 0xC18A86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:119 CMP #$1C
    // Overlapping static entry reached from 0xC18A86.
    case 0xC18A88: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:120 BEQL @UNKNOWN68
    case 0xC18A89: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:120 BEQL @UNKNOWN68
    case 0xC18A8B: {
        Instruction step(cpu, 0x4C, 0x008B87u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:121 CMP #$1D
    case 0xC18A8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:121 CMP #$1D
    // Overlapping static entry reached from 0xC18A8E.
    case 0xC18A90: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:122 BEQL @UNKNOWN69
    case 0xC18A91: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:122 BEQL @UNKNOWN69
    case 0xC18A93: {
        Instruction step(cpu, 0x4C, 0x008B8Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:123 CMP #$1E
    case 0xC18A96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:123 CMP #$1E
    // Overlapping static entry reached from 0xC18A96.
    case 0xC18A98: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:124 BEQL @UNKNOWN70
    case 0xC18A99: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:124 BEQL @UNKNOWN70
    case 0xC18A9B: {
        Instruction step(cpu, 0x4C, 0x008B97u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:125 CMP #$1F
    case 0xC18A9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:125 CMP #$1F
    // Overlapping static entry reached from 0xC18A9E.
    case 0xC18AA0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:126 BEQL @UNKNOWN71
    case 0xC18AA1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:126 BEQL @UNKNOWN71
    case 0xC18AA3: {
        Instruction step(cpu, 0x4C, 0x008B9Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:127 JMP @UNKNOWN2
    case 0xC18AA6: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:129 JSR PRINT_NEWLINE
    case 0xC18AA9: {
        Instruction step(cpu, 0x20, 0x001174u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:130 JMP @UNKNOWN2
    case 0xC18AAC: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:132 JSR GET_TEXT_X
    case 0xC18AAF: {
        Instruction step(cpu, 0x20, 0x0006B8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:133 CMP #0
    case 0xC18AB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:133 CMP #0
    // Overlapping static entry reached from 0xC18AB2.
    case 0xC18AB4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:134 BEQL @UNKNOWN2
    case 0xC18AB5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:134 BEQL @UNKNOWN2
    case 0xC18AB7: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:135 JSR PRINT_NEWLINE
    case 0xC18ABA: {
        Instruction step(cpu, 0x20, 0x001174u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:136 JMP @UNKNOWN2
    case 0xC18ABD: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:138 LDX #0
    case 0xC18AC0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text-jp.asm:138 LDX #0
    // Overlapping static entry reached from 0xC18AC0.
    case 0xC18AC2: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:139 LDA #1
    case 0xC18AC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:139 LDA #1
    // Overlapping static entry reached from 0xC18AC3.
    case 0xC18AC5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:140 JSR CC_13_14
    case 0xC18AC6: {
        Instruction step(cpu, 0x20, 0x00036Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:141 JMP @UNKNOWN2
    case 0xC18AC9: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:143 LDY #.LOWORD(CC_04)
    case 0xC18ACC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000087u : 0x004687u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:143 LDY #.LOWORD(CC_04)
    // Overlapping static entry reached from 0xC18ACC.
    case 0xC18ACE: {
        Instruction step(cpu, 0x46, 0x000084u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:144 STY @LOCAL03
    case 0xC18ACF: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:144 STY @LOCAL03
    // Overlapping static entry reached from 0xC18ACE.
    case 0xC18AD0: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:145 JMP @UNKNOWN2
    case 0xC18AD1: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:145 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AD0.
    case 0xC18AD2: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:147 LDY #.LOWORD(CC_05)
    case 0xC18AD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000CFu : 0x0046CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:147 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18AD2.
    case 0xC18AD5: {
        Instruction step(cpu, 0xCF, 0x168446u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:147 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18AD4.
    case 0xC18AD6: {
        Instruction step(cpu, 0x46, 0x000084u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:148 STY @LOCAL03
    case 0xC18AD7: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:148 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AD6.
    case 0xC18AD8: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:149 JMP @UNKNOWN2
    case 0xC18AD9: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:149 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AD8.
    case 0xC18ADA: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:151 LDY #.LOWORD(CC_06)
    case 0xC18ADC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000017u : 0x004717u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:151 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18ADA.
    case 0xC18ADD: {
        Instruction step(cpu, 0x17, 0x000047u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:151 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18ADC.
    case 0xC18ADE: {
        Instruction step(cpu, 0x47, 0x000084u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:152 STY @LOCAL03
    case 0xC18ADF: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:152 STY @LOCAL03
    // Overlapping static entry reached from 0xC18ADE.
    case 0xC18AE0: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:153 JMP @UNKNOWN2
    case 0xC18AE1: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:153 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AE0.
    case 0xC18AE2: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:155 LDY #.LOWORD(CC_07)
    case 0xC18AE4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000081u : 0x004781u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:155 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18AE2.
    case 0xC18AE5: {
        Instruction step(cpu, 0x81, 0x000047u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:155 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18AE4.
    case 0xC18AE6: {
        Instruction step(cpu, 0x47, 0x000084u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:156 STY @LOCAL03
    case 0xC18AE7: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:156 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AE6.
    case 0xC18AE8: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:157 JMP @UNKNOWN2
    case 0xC18AE9: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:157 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AE8.
    case 0xC18AEA: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:159 LDY #.LOWORD(CC_08)
    case 0xC18AEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F8u : 0x0047F8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:159 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18AEA.
    case 0xC18AED: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // src/text/display_text-jp.asm:159 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18AEC.
    case 0xC18AEE: {
        Instruction step(cpu, 0x47, 0x000084u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:160 STY @LOCAL03
    case 0xC18AEF: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:160 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AEE.
    case 0xC18AF0: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:161 JMP @UNKNOWN2
    case 0xC18AF1: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:161 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AF0.
    case 0xC18AF2: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:163 LDY #.LOWORD(CC_09)
    case 0xC18AF4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F2u : 0x0045F2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:163 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18AF2.
    case 0xC18AF5: {
        Instruction step(cpu, 0xF2, 0x000045u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/display_text-jp.asm:163 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18AF4.
    case 0xC18AF6: {
        Instruction step(cpu, 0x45, 0x000084u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:164 STY @LOCAL03
    case 0xC18AF7: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:164 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AF6.
    case 0xC18AF8: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:165 JMP @UNKNOWN2
    case 0xC18AF9: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:165 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AF8.
    case 0xC18AFA: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:167 LDY #.LOWORD(CC_0A)
    case 0xC18AFC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000025u : 0x004525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:167 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18AFA.
    case 0xC18AFD: {
        Instruction step(cpu, 0x25, 0x000045u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:167 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18AFC.
    case 0xC18AFE: {
        Instruction step(cpu, 0x45, 0x000084u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:168 STY @LOCAL03
    case 0xC18AFF: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:168 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AFE.
    case 0xC18B00: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:169 JMP @UNKNOWN2
    case 0xC18B01: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:169 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B00.
    case 0xC18B02: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:171 LDY #.LOWORD(CC_0B)
    case 0xC18B04: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Cu : 0x00495Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:171 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18B02.
    case 0xC18B05: {
        Instruction step(cpu, 0x5C, 0x168449u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/display_text-jp.asm:171 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18B04.
    case 0xC18B06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000084u : 0x001684u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:172 STY @LOCAL03
    case 0xC18B07: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:172 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B06.
    case 0xC18B08: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:173 JMP @UNKNOWN2
    case 0xC18B09: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:173 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B08.
    case 0xC18B0A: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:175 LDY #.LOWORD(CC_0C)
    case 0xC18B0C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000095u : 0x004995u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:175 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18B0A.
    case 0xC18B0D: {
        Instruction step(cpu, 0x95, 0x000049u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:175 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18B0C.
    case 0xC18B0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000084u : 0x001684u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:176 STY @LOCAL03
    case 0xC18B0F: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:176 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B0E.
    case 0xC18B10: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:177 JMP @UNKNOWN2
    case 0xC18B11: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:177 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B10.
    case 0xC18B12: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:179 LDY #.LOWORD(CC_0D)
    case 0xC18B14: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F3u : 0x0049F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:179 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18B12.
    case 0xC18B15: {
        Instruction step(cpu, 0xF3, 0x000049u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/display_text-jp.asm:179 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18B14.
    case 0xC18B16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000084u : 0x001684u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:180 STY @LOCAL03
    case 0xC18B17: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:180 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B16.
    case 0xC18B18: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:181 JMP @UNKNOWN2
    case 0xC18B19: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:181 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B18.
    case 0xC18B1A: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:183 LDY #.LOWORD(CC_0E)
    case 0xC18B1C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Eu : 0x004A1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:183 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18B1A.
    case 0xC18B1D: {
        Instruction step(cpu, 0x1E, 0x00844Au, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:183 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18B1C.
    case 0xC18B1E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:184 STY @LOCAL03
    case 0xC18B1F: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:184 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B1D.
    case 0xC18B20: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:185 JMP @UNKNOWN2
    case 0xC18B21: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:185 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B20.
    case 0xC18B22: {
        Instruction step(cpu, 0x6E, 0x002089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:187 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC18B24: {
        Instruction step(cpu, 0x20, 0x000631u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:187 JSR INCREMENT_SECONDARY_MEMORY
    // Overlapping static entry reached from 0xC18B22.
    case 0xC18B25: {
        Instruction step(cpu, 0x31, 0x000006u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:188 JMP @UNKNOWN2
    case 0xC18B27: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:190 LDY #.LOWORD(CC_10)
    case 0xC18B2A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ABu : 0x0052ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:190 LDY #.LOWORD(CC_10)
    // Overlapping static entry reached from 0xC18B2A.
    case 0xC18B2C: {
        Instruction step(cpu, 0x52, 0x000084u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:191 STY @LOCAL03
    case 0xC18B2D: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:191 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B2C.
    case 0xC18B2E: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:192 JMP @UNKNOWN2
    case 0xC18B2F: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:192 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B2E.
    case 0xC18B30: {
        Instruction step(cpu, 0x6E, 0x00A989u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:194 LDA #1
    case 0xC18B32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:194 LDA #1
    // Overlapping static entry reached from 0xC18B30.
    case 0xC18B33: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:194 LDA #1
    // Overlapping static entry reached from 0xC18B32.
    case 0xC18B34: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:195 JSR SELECTION_MENU
    case 0xC18B35: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/display_text-jp.asm:196 STORE_INT1632 @VIRTUAL06
    case 0xC18B38: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/display_text-jp.asm:196 STORE_INT1632 @VIRTUAL06
    case 0xC18B3A: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B3C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B3E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B40: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B42: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:198 JSR SET_WORKING_MEMORY
    case 0xC18B44: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:199 JSR UNKNOWN_C11383
    case 0xC18B47: {
        Instruction step(cpu, 0x20, 0x0019ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:200 JMP @UNKNOWN2
    case 0xC18B4A: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:202 JSR CC_12
    case 0xC18B4D: {
        Instruction step(cpu, 0x20, 0x0011C9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:203 JMP @UNKNOWN2
    case 0xC18B50: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:205 LDX #0
    case 0xC18B53: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text-jp.asm:205 LDX #0
    // Overlapping static entry reached from 0xC18B53.
    case 0xC18B55: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:206 TXA
    case 0xC18B56: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:207 JSR CC_13_14
    case 0xC18B57: {
        Instruction step(cpu, 0x20, 0x00036Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:208 JMP @UNKNOWN2
    case 0xC18B5A: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:210 LDX #1
    case 0xC18B5D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text-jp.asm:210 LDX #1
    // Overlapping static entry reached from 0xC18B5D.
    case 0xC18B5F: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text-jp.asm:211 TXA
    case 0xC18B60: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:212 JSR CC_13_14
    case 0xC18B61: {
        Instruction step(cpu, 0x20, 0x00036Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:213 JMP @UNKNOWN2
    case 0xC18B64: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:215 LDY #.LOWORD(CC_18_TREE)
    case 0xC18B67: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00007Cu : 0x007B7Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:215 LDY #.LOWORD(CC_18_TREE)
    // Overlapping static entry reached from 0xC18B67.
    case 0xC18B69: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:216 STY @LOCAL03
    case 0xC18B6A: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:217 JMP @UNKNOWN2
    case 0xC18B6C: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:219 LDY #.LOWORD(CC_19_TREE)
    case 0xC18B6F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Bu : 0x007C1Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:219 LDY #.LOWORD(CC_19_TREE)
    // Overlapping static entry reached from 0xC18B6F.
    case 0xC18B71: {
        Instruction step(cpu, 0x7C, 0x001684u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:220 STY @LOCAL03
    case 0xC18B72: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:221 JMP @UNKNOWN2
    case 0xC18B74: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:223 LDY #.LOWORD(CC_1A_TREE)
    case 0xC18B77: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000CBu : 0x007DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:223 LDY #.LOWORD(CC_1A_TREE)
    // Overlapping static entry reached from 0xC18B77.
    case 0xC18B79: {
        Instruction step(cpu, 0x7D, 0x001684u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text-jp.asm:224 STY @LOCAL03
    case 0xC18B7A: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:225 JMP @UNKNOWN2
    case 0xC18B7C: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:227 LDY #.LOWORD(CC_1B_TREE)
    case 0xC18B7F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ABu : 0x007EABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:227 LDY #.LOWORD(CC_1B_TREE)
    // Overlapping static entry reached from 0xC18B7F.
    case 0xC18B81: {
        Instruction step(cpu, 0x7E, 0x001684u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:228 STY @LOCAL03
    case 0xC18B82: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:229 JMP @UNKNOWN2
    case 0xC18B84: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:231 LDY #.LOWORD(CC_1C_TREE)
    case 0xC18B87: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x008001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:231 LDY #.LOWORD(CC_1C_TREE)
    // Overlapping static entry reached from 0xC18B87.
    case 0xC18B89: {
        Instruction step(cpu, 0x80, 0x000084u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/display_text-jp.asm:232 STY @LOCAL03
    case 0xC18B8A: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:233 JMP @UNKNOWN2
    case 0xC18B8C: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:235 LDY #.LOWORD(CC_1D_TREE)
    case 0xC18B8F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000073u : 0x008173u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:235 LDY #.LOWORD(CC_1D_TREE)
    // Overlapping static entry reached from 0xC18B8F.
    case 0xC18B91: {
        Instruction step(cpu, 0x81, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:236 STY @LOCAL03
    case 0xC18B92: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:236 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B91.
    case 0xC18B93: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:237 JMP @UNKNOWN2
    case 0xC18B94: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:237 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B93.
    case 0xC18B95: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:239 LDY #.LOWORD(CC_1E_TREE)
    case 0xC18B97: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000081u : 0x008381u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:239 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18B95.
    case 0xC18B98: {
        Instruction step(cpu, 0x81, 0x000083u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:239 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18B97.
    case 0xC18B99: {
        Instruction step(cpu, 0x83, 0x000084u, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:240 STY @LOCAL03
    case 0xC18B9A: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:240 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B99.
    case 0xC18B9B: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:241 JMP @UNKNOWN2
    case 0xC18B9C: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:241 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B9B.
    case 0xC18B9D: {
        Instruction step(cpu, 0x6E, 0x00A089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:243 LDY #.LOWORD(CC_1F_TREE)
    case 0xC18B9F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Du : 0x00841Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:243 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18B9D.
    case 0xC18BA0: {
        Instruction step(cpu, 0x1D, 0x008484u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:243 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18B9F.
    case 0xC18BA1: {
        Instruction step(cpu, 0x84, 0x000084u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:244 STY @LOCAL03
    case 0xC18BA2: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:244 STY @LOCAL03
    // Overlapping static entry reached from 0xC18BA1.
    case 0xC18BA3: {
        Instruction step(cpu, 0x16, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text-jp.asm:245 JMP @UNKNOWN2
    case 0xC18BA4: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:245 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18BA3.
    case 0xC18BA5: {
        Instruction step(cpu, 0x6E, 0x002089u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:247 JSR PRINT_LETTER
    case 0xC18BA7: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:247 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC18BA5.
    case 0xC18BA8: {
        Instruction step(cpu, 0xEC, 0x004C11u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/text/display_text-jp.asm:248 JMP @UNKNOWN2
    case 0xC18BAA: {
        Instruction step(cpu, 0x4C, 0x00896Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text-jp.asm:248 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18BA8.
    case 0xC18BAB: {
        Instruction step(cpu, 0x6E, 0x00A489u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/display_text-jp.asm:250 LDY @VIRTUAL02
    case 0xC18BAD: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text-jp.asm:250 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC18BAB.
    case 0xC18BAE: {
        Instruction step(cpu, 0x02, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BAF: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BB4: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BB7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:252 LDA @VIRTUAL02
    case 0xC18BB9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text-jp.asm:253 JSR UNKNOWN_C1869D
    case 0xC18BBB: {
        Instruction step(cpu, 0x20, 0x0088FFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text-jp.asm:254 JSR UNKNOWN_C14049
    case 0xC18BBE: {
        Instruction step(cpu, 0x20, 0x00448Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC3: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC7: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_text-jp.asm:257 END_C_FUNCTION
    case 0xC18BC9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_text-jp.asm:257 END_C_FUNCTION
    case 0xC18BCA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
