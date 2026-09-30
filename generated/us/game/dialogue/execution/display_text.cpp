// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/display_text.asm
bool resume_text_display_text(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_text.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC186B1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC186B5.
    case 0xC186B7: {
        Instruction step(cpu, 0xFF, 0x32A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186B9: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186BB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186BD: {
        Instruction step(cpu, 0xA5, 0x000034u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186BF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C3: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C7: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:17 LDY #0
    case 0xC186C9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:17 LDY #0
    // Overlapping static entry reached from 0xC186C9.
    case 0xC186CB: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:18 STY @LOCAL05
    case 0xC186CC: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00550Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    // Overlapping static entry reached from 0xC186CE.
    case 0xC186D0: {
        Instruction step(cpu, 0x55, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186D1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    // Overlapping static entry reached from 0xC186D0.
    case 0xC186D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    // Overlapping static entry reached from 0xC186D3.
    case 0xC186D5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186D6: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186D8: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186DA: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186DC: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186DE: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC186E0.
    case 0xC186E2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC186E5.
    case 0xC186E7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186EA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186EC: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186EE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186F0: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC186FA: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC186FC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC186FE: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18700: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:25 CMP @VIRTUAL0A+2
    case 0xC18702: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:26 BNE @UNKNOWN0
    case 0xC18704: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/display_text.asm:27 LDA @VIRTUAL06
    case 0xC18706: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:28 CMP @VIRTUAL0A
    case 0xC18708: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:30 BNE @UNKNOWN1
    case 0xC1870A: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC1870C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC1870E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18710: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18712: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18714: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18716: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18718: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1871A: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:33 JMP @UNKNOWN74
    case 0xC1871C: {
        Instruction step(cpu, 0x4C, 0x008B2Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:35 JSR UNKNOWN_C14012
    case 0xC1871F: {
        Instruction step(cpu, 0x20, 0x004012u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:36 STA @LOCAL02
    case 0xC18722: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18724: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18726: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18728: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC1872A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1872C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1872E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18730: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18732: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:39 LDA @LOCAL02
    case 0xC18734: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:40 JSR UNKNOWN_C1866D
    case 0xC18736: {
        Instruction step(cpu, 0x20, 0x00866Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:41 STA @VIRTUAL02
    case 0xC18739: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:42 STA @LOCAL01
    case 0xC1873B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:43 LDA @VIRTUAL02
    case 0xC1873D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:44 BNE @UNKNOWN2
    case 0xC1873F: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18741: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18743: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18745: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18747: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18749: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1874B: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1874D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1874F: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:47 JMP @UNKNOWN74
    case 0xC18751: {
        Instruction step(cpu, 0x4C, 0x008B2Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:49 LDA ENABLE_WORD_WRAP
    case 0xC18754: {
        Instruction step(cpu, 0xAD, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:50 BEQ @UNKNOWN4
    case 0xC18757: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text.asm:51 LDY @LOCAL05
    case 0xC18759: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:52 BNE @UNKNOWN4
    case 0xC1875B: {
        Instruction step(cpu, 0xD0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/display_text.asm:53 LDA UPCOMING_WORD_LENGTH
    case 0xC1875D: {
        Instruction step(cpu, 0xAD, 0x009660u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:54 BNE @UNKNOWN3
    case 0xC18760: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18762: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18764: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18766: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18768: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1876A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1876C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1876E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC18770: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18772: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18774: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18776: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18778: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:58 LDA @LOCAL01
    case 0xC1877A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:59 STA @VIRTUAL02
    case 0xC1877C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:60 JSL UNKNOWN_C445E1
    case 0xC1877E: {
        Instruction step(cpu, 0x22, 0xC445E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/display_text.asm:61 BRA @UNKNOWN4
    case 0xC18782: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/display_text.asm:63 DEC UPCOMING_WORD_LENGTH
    case 0xC18784: {
        Instruction step(cpu, 0xCE, 0x009660u, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18787: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18789: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1878B: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1878D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:66 LDA [@VIRTUAL0A]
    case 0xC1878F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:67 AND #$00FF
    case 0xC18791: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC18791.
    case 0xC18793: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:68 BEQ @UNKNOWN5
    case 0xC18794: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text.asm:69 AND #$00FF
    case 0xC18796: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC18796.
    case 0xC18798: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:70 STA @LOCAL02
    case 0xC18799: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:71 INC @VIRTUAL0A
    case 0xC1879B: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC1879D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC1879F: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC187A1: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC187A3: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:73 BRA @UNKNOWN6
    case 0xC187A5: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/display_text.asm:75 LDA @LOCAL01
    case 0xC187A7: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:76 STA @VIRTUAL02
    case 0xC187A9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:77 LDX @VIRTUAL02
    case 0xC187AB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:78 TXY
    case 0xC187AD: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187AE: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187B1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187B3: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187B6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:80 LDA [@VIRTUAL06]
    case 0xC187B8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:81 AND #$00FF
    case 0xC187BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC187BA.
    case 0xC187BC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:82 STA @LOCAL02
    case 0xC187BD: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:83 INC @VIRTUAL06
    case 0xC187BF: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/display_text.asm:84 TXY
    case 0xC187C1: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C4: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C9: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:87 LDY @LOCAL05
    case 0xC187CC: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:88 BEQ @UNKNOWN7
    case 0xC187CE: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text.asm:89 LDA @LOCAL02
    case 0xC187D0: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:90 TAX
    case 0xC187D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/display_text.asm:91 LDA @LOCAL01
    case 0xC187D3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:92 STA @VIRTUAL02
    case 0xC187D5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:93 STY @VIRTUAL02
    case 0xC187D7: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:94 STA TEMP_REGISTER
    case 0xC187D9: {
        Instruction step(cpu, 0x8D, 0x0000C0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:95 PEA .LOWORD(@UNK)
    case 0xC187DC: {
        Instruction step(cpu, 0xF4, 0x0087E6u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/text/display_text.asm:96 LDA @VIRTUAL02
    case 0xC187DF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:97 DEC
    case 0xC187E1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/display_text.asm:98 PHA
    case 0xC187E2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:99 LDA TEMP_REGISTER
    case 0xC187E3: {
        Instruction step(cpu, 0xAD, 0x0000C0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:101 RTS
    case 0xC187E6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/display_text.asm:102 TAY
    case 0xC187E7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/display_text.asm:103 STY @LOCAL05
    case 0xC187E8: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:104 JMP @UNKNOWN2
    case 0xC187EA: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:106 LDA @LOCAL02
    case 0xC187ED: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:107 CMP #$15
    case 0xC187EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:107 CMP #$15
    // Overlapping static entry reached from 0xC187EF.
    case 0xC187F1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:108 BEQ @COMPRESSION_BANK_ONE
    case 0xC187F2: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text.asm:109 CMP #$16
    case 0xC187F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:109 CMP #$16
    // Overlapping static entry reached from 0xC187F4.
    case 0xC187F6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:110 BEQ @COMPRESSION_BANK_TWO
    case 0xC187F7: {
        Instruction step(cpu, 0xF0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text.asm:111 CMP #$17
    case 0xC187F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:111 CMP #$17
    // Overlapping static entry reached from 0xC187F9.
    case 0xC187FB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:112 BEQL @COMPRESSION_BANK_THREE
    case 0xC187FC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:112 BEQL @COMPRESSION_BANK_THREE
    case 0xC187FE: {
        Instruction step(cpu, 0x4C, 0x0088B7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:113 JMP @UNKNOWN12
    case 0xC18801: {
        Instruction step(cpu, 0x4C, 0x00890Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:115 LDA @LOCAL01
    case 0xC18804: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:116 STA @VIRTUAL02
    case 0xC18806: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:117 LDX @VIRTUAL02
    case 0xC18808: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:118 TXY
    case 0xC1880A: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1880B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1880E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18810: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18813: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC18815: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x00CDEDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC18815.
    case 0xC18817: {
        Instruction step(cpu, 0xCD, 0x000685u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC18818: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC1881A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1881A.
    case 0xC1881C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC1881D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:121 LDA [@VIRTUAL0A]
    case 0xC1881F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:122 AND #$00FF
    case 0xC18821: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:122 AND #$00FF
    // Overlapping static entry reached from 0xC18821.
    case 0xC18823: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:123 ASL
    case 0xC18824: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:124 ASL
    case 0xC18825: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:125 CLC
    case 0xC18826: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/display_text.asm:126 ADC @VIRTUAL06
    case 0xC18827: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text.asm:127 STA @VIRTUAL06
    case 0xC18829: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1882B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1882B.
    case 0xC1882D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1882E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18830: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18831: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18833: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18835: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:129 INC @VIRTUAL0A
    case 0xC18837: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/display_text.asm:130 TXY
    case 0xC18839: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1883A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1883C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1883F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18841: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:132 LDA [@VIRTUAL06]
    case 0xC18844: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:133 AND #$00FF
    case 0xC18846: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC18846.
    case 0xC18848: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18849: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1884B: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1884D: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1884F: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/display_text.asm:135 INC @VIRTUAL0A
    case 0xC18851: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18853: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18855: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18857: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18859: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/display_text.asm:137 JMP @UNKNOWN12
    case 0xC1885B: {
        Instruction step(cpu, 0x4C, 0x00890Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:139 LDA @LOCAL01
    case 0xC1885E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:140 STA @VIRTUAL02
    case 0xC18860: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:141 LDX @VIRTUAL02
    case 0xC18862: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:142 TXY
    case 0xC18864: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18865: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18868: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1886A: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1886D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC1886F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x00D1EDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC1886F.
    case 0xC18871: {
        Instruction step(cpu, 0xD1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC18872: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC18871.
    case 0xC18873: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC18874: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC18873.
    case 0xC18875: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC18874.
    case 0xC18876: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC18877: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:145 LDA [@VIRTUAL0A]
    case 0xC18879: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:146 AND #$00FF
    case 0xC1887B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC1887B.
    case 0xC1887D: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:147 ASL
    case 0xC1887E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:148 ASL
    case 0xC1887F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:149 CLC
    case 0xC18880: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/display_text.asm:150 ADC @VIRTUAL06
    case 0xC18881: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text.asm:151 STA @VIRTUAL06
    case 0xC18883: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18885: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC18885.
    case 0xC18887: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18888: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888F: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:153 INC @VIRTUAL0A
    case 0xC18891: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/display_text.asm:154 TXY
    case 0xC18893: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18894: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18896: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18899: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1889B: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:156 LDA [@VIRTUAL06]
    case 0xC1889E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:157 AND #$00FF
    case 0xC188A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:157 AND #$00FF
    // Overlapping static entry reached from 0xC188A0.
    case 0xC188A2: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A3: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A5: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A7: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A9: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/display_text.asm:159 INC @VIRTUAL0A
    case 0xC188AB: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188AD: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188AF: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188B1: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188B3: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/display_text.asm:161 BRA @UNKNOWN12
    case 0xC188B5: {
        Instruction step(cpu, 0x80, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/display_text.asm:163 LDA @LOCAL01
    case 0xC188B7: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:164 STA @VIRTUAL02
    case 0xC188B9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:165 LDX @VIRTUAL02
    case 0xC188BB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:166 TXY
    case 0xC188BD: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188BE: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188C1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188C3: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188C6: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x00D5EDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188C8.
    case 0xC188CA: {
        Instruction step(cpu, 0xD5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188CA.
    case 0xC188CC: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188CC.
    case 0xC188CE: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188CD.
    case 0xC188CF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188D0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:169 LDA [@VIRTUAL0A]
    case 0xC188D2: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:170 AND #$00FF
    case 0xC188D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:170 AND #$00FF
    // Overlapping static entry reached from 0xC188D4.
    case 0xC188D6: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:171 ASL
    case 0xC188D7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:172 ASL
    case 0xC188D8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:173 CLC
    case 0xC188D9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/display_text.asm:174 ADC @VIRTUAL06
    case 0xC188DA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text.asm:175 STA @VIRTUAL06
    case 0xC188DC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188DE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC188DE.
    case 0xC188E0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E1: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E4: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E8: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:177 INC @VIRTUAL0A
    case 0xC188EA: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/display_text.asm:178 TXY
    case 0xC188EC: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188ED: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188EF: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188F2: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188F4: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:180 LDA [@VIRTUAL06]
    case 0xC188F7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:181 AND #$00FF
    case 0xC188F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC188F9.
    case 0xC188FB: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188FC: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188FE: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18900: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18902: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/display_text.asm:183 INC @VIRTUAL0A
    case 0xC18904: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18906: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18908: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC1890A: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC1890C: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/display_text.asm:186 CMP #$20
    case 0xC1890E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:186 CMP #$20
    // Overlapping static entry reached from 0xC1890E.
    case 0xC18910: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:187 BCC @UNKNOWN13
    case 0xC18911: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/display_text.asm:188 JMP @UNKNOWN72
    case 0xC18913: {
        Instruction step(cpu, 0x4C, 0x008B04u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:190 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC18916: {
        Instruction step(cpu, 0x9C, 0x0097CAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/display_text.asm:191 CMP #$00
    case 0xC18919: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:191 CMP #$00
    // Overlapping static entry reached from 0xC18919.
    case 0xC1891B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:192 BEQL @CC_00
    case 0xC1891C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:192 BEQL @CC_00
    case 0xC1891E: {
        Instruction step(cpu, 0x4C, 0x008A04u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:193 CMP #$01
    case 0xC18921: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:193 CMP #$01
    // Overlapping static entry reached from 0xC18921.
    case 0xC18923: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:194 BEQL @CC_01
    case 0xC18924: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:194 BEQL @CC_01
    case 0xC18926: {
        Instruction step(cpu, 0x4C, 0x008A0Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:195 CMP #$02
    case 0xC18929: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:195 CMP #$02
    // Overlapping static entry reached from 0xC18929.
    case 0xC1892B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:196 BEQL @UNKNOWN73
    case 0xC1892C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:196 BEQL @UNKNOWN73
    case 0xC1892E: {
        Instruction step(cpu, 0x4C, 0x008B0Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:197 CMP #$03
    case 0xC18931: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:197 CMP #$03
    // Overlapping static entry reached from 0xC18931.
    case 0xC18933: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:198 BEQL @UNKNOWN46
    case 0xC18934: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:198 BEQL @UNKNOWN46
    case 0xC18936: {
        Instruction step(cpu, 0x4C, 0x008A1Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:199 CMP #$04
    case 0xC18939: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:199 CMP #$04
    // Overlapping static entry reached from 0xC18939.
    case 0xC1893B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:200 BEQL @UNKNOWN47
    case 0xC1893C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:200 BEQL @UNKNOWN47
    case 0xC1893E: {
        Instruction step(cpu, 0x4C, 0x008A29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:201 CMP #$05
    case 0xC18941: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:201 CMP #$05
    // Overlapping static entry reached from 0xC18941.
    case 0xC18943: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:202 BEQL @UNKNOWN48
    case 0xC18944: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:202 BEQL @UNKNOWN48
    case 0xC18946: {
        Instruction step(cpu, 0x4C, 0x008A31u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:203 CMP #$06
    case 0xC18949: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:203 CMP #$06
    // Overlapping static entry reached from 0xC18949.
    case 0xC1894B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:204 BEQL @UNKNOWN49
    case 0xC1894C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:204 BEQL @UNKNOWN49
    case 0xC1894E: {
        Instruction step(cpu, 0x4C, 0x008A39u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:205 CMP #$07
    case 0xC18951: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:205 CMP #$07
    // Overlapping static entry reached from 0xC18951.
    case 0xC18953: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:206 BEQL @UNKNOWN50
    case 0xC18954: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:206 BEQL @UNKNOWN50
    case 0xC18956: {
        Instruction step(cpu, 0x4C, 0x008A41u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:207 CMP #$08
    case 0xC18959: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:207 CMP #$08
    // Overlapping static entry reached from 0xC18959.
    case 0xC1895B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:208 BEQL @UNKNOWN51
    case 0xC1895C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:208 BEQL @UNKNOWN51
    case 0xC1895E: {
        Instruction step(cpu, 0x4C, 0x008A49u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:209 CMP #$09
    case 0xC18961: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:209 CMP #$09
    // Overlapping static entry reached from 0xC18961.
    case 0xC18963: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:210 BEQL @UNKNOWN52
    case 0xC18964: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:210 BEQL @UNKNOWN52
    case 0xC18966: {
        Instruction step(cpu, 0x4C, 0x008A51u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:211 CMP #$0A
    case 0xC18969: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:211 CMP #$0A
    // Overlapping static entry reached from 0xC18969.
    case 0xC1896B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:212 BEQL @UNKNOWN53
    case 0xC1896C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:212 BEQL @UNKNOWN53
    case 0xC1896E: {
        Instruction step(cpu, 0x4C, 0x008A59u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:213 CMP #$0B
    case 0xC18971: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:213 CMP #$0B
    // Overlapping static entry reached from 0xC18971.
    case 0xC18973: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:214 BEQL @UNKNOWN54
    case 0xC18974: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:214 BEQL @UNKNOWN54
    case 0xC18976: {
        Instruction step(cpu, 0x4C, 0x008A61u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:215 CMP #$0C
    case 0xC18979: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:215 CMP #$0C
    // Overlapping static entry reached from 0xC18979.
    case 0xC1897B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:216 BEQL @UNKNOWN55
    case 0xC1897C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:216 BEQL @UNKNOWN55
    case 0xC1897E: {
        Instruction step(cpu, 0x4C, 0x008A69u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:217 CMP #$0D
    case 0xC18981: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:217 CMP #$0D
    // Overlapping static entry reached from 0xC18981.
    case 0xC18983: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:218 BEQL @UNKNOWN56
    case 0xC18984: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:218 BEQL @UNKNOWN56
    case 0xC18986: {
        Instruction step(cpu, 0x4C, 0x008A71u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:219 CMP #$0E
    case 0xC18989: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:219 CMP #$0E
    // Overlapping static entry reached from 0xC18989.
    case 0xC1898B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:220 BEQL @UNKNOWN57
    case 0xC1898C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:220 BEQL @UNKNOWN57
    case 0xC1898E: {
        Instruction step(cpu, 0x4C, 0x008A79u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:221 CMP #$0F
    case 0xC18991: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:221 CMP #$0F
    // Overlapping static entry reached from 0xC18991.
    case 0xC18993: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:222 BEQL @UNKNOWN58
    case 0xC18994: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:222 BEQL @UNKNOWN58
    case 0xC18996: {
        Instruction step(cpu, 0x4C, 0x008A81u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:223 CMP #$10
    case 0xC18999: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:223 CMP #$10
    // Overlapping static entry reached from 0xC18999.
    case 0xC1899B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:224 BEQL @UNKNOWN59
    case 0xC1899C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:224 BEQL @UNKNOWN59
    case 0xC1899E: {
        Instruction step(cpu, 0x4C, 0x008A87u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:225 CMP #$11
    case 0xC189A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:225 CMP #$11
    // Overlapping static entry reached from 0xC189A1.
    case 0xC189A3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:226 BEQL @UNKNOWN60
    case 0xC189A4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:226 BEQL @UNKNOWN60
    case 0xC189A6: {
        Instruction step(cpu, 0x4C, 0x008A8Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:227 CMP #$12
    case 0xC189A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:227 CMP #$12
    // Overlapping static entry reached from 0xC189A9.
    case 0xC189AB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:228 BEQL @UNKNOWN61
    case 0xC189AC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:228 BEQL @UNKNOWN61
    case 0xC189AE: {
        Instruction step(cpu, 0x4C, 0x008AAAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:229 CMP #$13
    case 0xC189B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:229 CMP #$13
    // Overlapping static entry reached from 0xC189B1.
    case 0xC189B3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:230 BEQL @UNKNOWN62
    case 0xC189B4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:230 BEQL @UNKNOWN62
    case 0xC189B6: {
        Instruction step(cpu, 0x4C, 0x008AB0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:231 CMP #$14
    case 0xC189B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:231 CMP #$14
    // Overlapping static entry reached from 0xC189B9.
    case 0xC189BB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:232 BEQL @UNKNOWN63
    case 0xC189BC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:232 BEQL @UNKNOWN63
    case 0xC189BE: {
        Instruction step(cpu, 0x4C, 0x008ABAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:233 CMP #$18
    case 0xC189C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:233 CMP #$18
    // Overlapping static entry reached from 0xC189C1.
    case 0xC189C3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:234 BEQL @UNKNOWN64
    case 0xC189C4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:234 BEQL @UNKNOWN64
    case 0xC189C6: {
        Instruction step(cpu, 0x4C, 0x008AC4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:235 CMP #$19
    case 0xC189C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:235 CMP #$19
    // Overlapping static entry reached from 0xC189C9.
    case 0xC189CB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:236 BEQL @UNKNOWN65
    case 0xC189CC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:236 BEQL @UNKNOWN65
    case 0xC189CE: {
        Instruction step(cpu, 0x4C, 0x008ACCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:237 CMP #$1A
    case 0xC189D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:237 CMP #$1A
    // Overlapping static entry reached from 0xC189D1.
    case 0xC189D3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:238 BEQL @UNKNOWN66
    case 0xC189D4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:238 BEQL @UNKNOWN66
    case 0xC189D6: {
        Instruction step(cpu, 0x4C, 0x008AD4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:239 CMP #$1B
    case 0xC189D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:239 CMP #$1B
    // Overlapping static entry reached from 0xC189D9.
    case 0xC189DB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:240 BEQL @UNKNOWN67
    case 0xC189DC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:240 BEQL @UNKNOWN67
    case 0xC189DE: {
        Instruction step(cpu, 0x4C, 0x008ADCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:241 CMP #$1C
    case 0xC189E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:241 CMP #$1C
    // Overlapping static entry reached from 0xC189E1.
    case 0xC189E3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:242 BEQL @UNKNOWN68
    case 0xC189E4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:242 BEQL @UNKNOWN68
    case 0xC189E6: {
        Instruction step(cpu, 0x4C, 0x008AE4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:243 CMP #$1D
    case 0xC189E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:243 CMP #$1D
    // Overlapping static entry reached from 0xC189E9.
    case 0xC189EB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:244 BEQL @UNKNOWN69
    case 0xC189EC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:244 BEQL @UNKNOWN69
    case 0xC189EE: {
        Instruction step(cpu, 0x4C, 0x008AECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:245 CMP #$1E
    case 0xC189F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:245 CMP #$1E
    // Overlapping static entry reached from 0xC189F1.
    case 0xC189F3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:246 BEQL @UNKNOWN70
    case 0xC189F4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:246 BEQL @UNKNOWN70
    case 0xC189F6: {
        Instruction step(cpu, 0x4C, 0x008AF4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:247 CMP #$1F
    case 0xC189F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:247 CMP #$1F
    // Overlapping static entry reached from 0xC189F9.
    case 0xC189FB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:248 BEQL @UNKNOWN71
    case 0xC189FC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:248 BEQL @UNKNOWN71
    case 0xC189FE: {
        Instruction step(cpu, 0x4C, 0x008AFCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:249 JMP @UNKNOWN2
    case 0xC18A01: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:251 JSL PRINT_NEWLINE
    case 0xC18A04: {
        Instruction step(cpu, 0x22, 0xC438B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/display_text.asm:252 JMP @UNKNOWN2
    case 0xC18A08: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:254 JSR GET_TEXT_X
    case 0xC18A0B: {
        Instruction step(cpu, 0x20, 0x0004B5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:255 CMP #0
    case 0xC18A0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:255 CMP #0
    // Overlapping static entry reached from 0xC18A0E.
    case 0xC18A10: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:256 BEQL @UNKNOWN2
    case 0xC18A11: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:256 BEQL @UNKNOWN2
    case 0xC18A13: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:257 JSL PRINT_NEWLINE
    case 0xC18A16: {
        Instruction step(cpu, 0x22, 0xC438B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/display_text.asm:258 JMP @UNKNOWN2
    case 0xC18A1A: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:260 LDX #0
    case 0xC18A1D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:260 LDX #0
    // Overlapping static entry reached from 0xC18A1D.
    case 0xC18A1F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:261 LDA #1
    case 0xC18A20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:261 LDA #1
    // Overlapping static entry reached from 0xC18A20.
    case 0xC18A22: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:262 JSR CC_13_14
    case 0xC18A23: {
        Instruction step(cpu, 0x20, 0x000166u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:263 JMP @UNKNOWN2
    case 0xC18A26: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:265 LDY #.LOWORD(CC_04)
    case 0xC18A29: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000065u : 0x004265u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:265 LDY #.LOWORD(CC_04)
    // Overlapping static entry reached from 0xC18A29.
    case 0xC18A2B: {
        Instruction step(cpu, 0x42, 0x000084u, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/text/display_text.asm:266 STY @LOCAL05
    case 0xC18A2C: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:266 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A2B.
    case 0xC18A2D: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:267 JMP @UNKNOWN2
    case 0xC18A2E: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:267 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A2D.
    case 0xC18A30: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:269 LDY #.LOWORD(CC_05)
    case 0xC18A31: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ADu : 0x0042ADu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:269 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18A30.
    case 0xC18A32: {
        Instruction step(cpu, 0xAD, 0x008442u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:269 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18A31.
    case 0xC18A33: {
        Instruction step(cpu, 0x42, 0x000084u, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/text/display_text.asm:270 STY @LOCAL05
    case 0xC18A34: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:270 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A33.
    case 0xC18A35: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:271 JMP @UNKNOWN2
    case 0xC18A36: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:271 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A35.
    case 0xC18A38: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:273 LDY #.LOWORD(CC_06)
    case 0xC18A39: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F5u : 0x0042F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:273 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18A38.
    case 0xC18A3A: {
        Instruction step(cpu, 0xF5, 0x000042u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/display_text.asm:273 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18A39.
    case 0xC18A3B: {
        Instruction step(cpu, 0x42, 0x000084u, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/text/display_text.asm:274 STY @LOCAL05
    case 0xC18A3C: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:274 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A3B.
    case 0xC18A3D: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:275 JMP @UNKNOWN2
    case 0xC18A3E: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:275 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A3D.
    case 0xC18A40: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:277 LDY #.LOWORD(CC_07)
    case 0xC18A41: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00435Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:277 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18A40.
    case 0xC18A42: {
        Instruction step(cpu, 0x5F, 0x1E8443u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:277 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18A41.
    case 0xC18A43: {
        Instruction step(cpu, 0x43, 0x000084u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:278 STY @LOCAL05
    case 0xC18A44: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:278 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A43.
    case 0xC18A45: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:279 JMP @UNKNOWN2
    case 0xC18A46: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:279 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A45.
    case 0xC18A48: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:281 LDY #.LOWORD(CC_08)
    case 0xC18A49: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D6u : 0x0043D6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:281 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18A48.
    case 0xC18A4A: {
        Instruction step(cpu, 0xD6, 0x000043u, 2u, AddressMode::DirectPageIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/text/display_text.asm:281 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18A49.
    case 0xC18A4B: {
        Instruction step(cpu, 0x43, 0x000084u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:282 STY @LOCAL05
    case 0xC18A4C: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:282 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A4B.
    case 0xC18A4D: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:283 JMP @UNKNOWN2
    case 0xC18A4E: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:283 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A4D.
    case 0xC18A50: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:285 LDY #.LOWORD(CC_09)
    case 0xC18A51: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0041D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:285 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18A50.
    case 0xC18A52: {
        Instruction step(cpu, 0xD0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/display_text.asm:285 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18A51.
    case 0xC18A53: {
        Instruction step(cpu, 0x41, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:286 STY @LOCAL05
    case 0xC18A54: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:286 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A53.
    case 0xC18A55: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:287 JMP @UNKNOWN2
    case 0xC18A56: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:287 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A55.
    case 0xC18A58: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:289 LDY #.LOWORD(CC_0A)
    case 0xC18A59: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x004103u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:289 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18A58.
    case 0xC18A5A: {
        Instruction step(cpu, 0x03, 0x000041u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:289 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18A59.
    case 0xC18A5B: {
        Instruction step(cpu, 0x41, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:290 STY @LOCAL05
    case 0xC18A5C: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:290 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A5B.
    case 0xC18A5D: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:291 JMP @UNKNOWN2
    case 0xC18A5E: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:291 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A5D.
    case 0xC18A60: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:293 LDY #.LOWORD(CC_0B)
    case 0xC18A61: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000058u : 0x004558u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:293 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18A60.
    case 0xC18A62: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/display_text.asm:293 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18A61.
    case 0xC18A63: {
        Instruction step(cpu, 0x45, 0x000084u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:294 STY @LOCAL05
    case 0xC18A64: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:294 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A63.
    case 0xC18A65: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:295 JMP @UNKNOWN2
    case 0xC18A66: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:295 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A65.
    case 0xC18A68: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:297 LDY #.LOWORD(CC_0C)
    case 0xC18A69: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000091u : 0x004591u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:297 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18A68.
    case 0xC18A6A: {
        Instruction step(cpu, 0x91, 0x000045u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:297 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18A69.
    case 0xC18A6B: {
        Instruction step(cpu, 0x45, 0x000084u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:298 STY @LOCAL05
    case 0xC18A6C: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:298 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A6B.
    case 0xC18A6D: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:299 JMP @UNKNOWN2
    case 0xC18A6E: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:299 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A6D.
    case 0xC18A70: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:301 LDY #.LOWORD(CC_0D)
    case 0xC18A71: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000EFu : 0x0045EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:301 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18A70.
    case 0xC18A72: {
        Instruction step(cpu, 0xEF, 0x1E8445u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/display_text.asm:301 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18A71.
    case 0xC18A73: {
        Instruction step(cpu, 0x45, 0x000084u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:302 STY @LOCAL05
    case 0xC18A74: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:302 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A73.
    case 0xC18A75: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:303 JMP @UNKNOWN2
    case 0xC18A76: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:303 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A75.
    case 0xC18A78: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:305 LDY #.LOWORD(CC_0E)
    case 0xC18A79: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Au : 0x00461Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:305 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18A78.
    case 0xC18A7A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/display_text.asm:305 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18A79.
    case 0xC18A7B: {
        Instruction step(cpu, 0x46, 0x000084u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/display_text.asm:306 STY @LOCAL05
    case 0xC18A7C: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:306 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A7B.
    case 0xC18A7D: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:307 JMP @UNKNOWN2
    case 0xC18A7E: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:307 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A7D.
    case 0xC18A80: {
        Instruction step(cpu, 0x87, 0x000020u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:309 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC18A81: {
        Instruction step(cpu, 0x20, 0x00042Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:309 JSR INCREMENT_SECONDARY_MEMORY
    // Overlapping static entry reached from 0xC18A80.
    case 0xC18A82: {
        Instruction step(cpu, 0x2E, 0x004C04u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/display_text.asm:310 JMP @UNKNOWN2
    case 0xC18A84: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:310 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A82.
    case 0xC18A85: {
        Instruction step(cpu, 0x54, 0x00A087u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/display_text.asm:312 LDY #.LOWORD(CC_10)
    case 0xC18A87: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ABu : 0x004EABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:312 LDY #.LOWORD(CC_10)
    // Overlapping static entry reached from 0xC18A85.
    case 0xC18A88: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/text/display_text.asm:312 LDY #.LOWORD(CC_10)
    // Overlapping static entry reached from 0xC18A87.
    case 0xC18A89: {
        Instruction step(cpu, 0x4E, 0x001E84u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/display_text.asm:313 STY @LOCAL05
    case 0xC18A8A: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:314 JMP @UNKNOWN2
    case 0xC18A8C: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:316 LDA #1
    case 0xC18A8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:316 LDA #1
    // Overlapping static entry reached from 0xC18A8F.
    case 0xC18A91: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:317 JSR SELECTION_MENU
    case 0xC18A92: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/display_text.asm:318 STORE_INT1632 @VIRTUAL06
    case 0xC18A95: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/display_text.asm:318 STORE_INT1632 @VIRTUAL06
    case 0xC18A97: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A99: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A9B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A9D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A9F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:320 JSR SET_WORKING_MEMORY
    case 0xC18AA1: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:321 JSR UNKNOWN_C11383
    case 0xC18AA4: {
        Instruction step(cpu, 0x20, 0x001383u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:322 JMP @UNKNOWN2
    case 0xC18AA7: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:324 JSR CC_12
    case 0xC18AAA: {
        Instruction step(cpu, 0x20, 0x000BD3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:325 JMP @UNKNOWN2
    case 0xC18AAD: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:327 LDX #0
    case 0xC18AB0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:327 LDX #0
    // Overlapping static entry reached from 0xC18AB0.
    case 0xC18AB2: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:328 TXA
    case 0xC18AB3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:329 JSR CC_13_14
    case 0xC18AB4: {
        Instruction step(cpu, 0x20, 0x000166u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:330 JMP @UNKNOWN2
    case 0xC18AB7: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:332 LDX #1
    case 0xC18ABA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:332 LDX #1
    // Overlapping static entry reached from 0xC18ABA.
    case 0xC18ABC: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text.asm:333 TXA
    case 0xC18ABD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:334 JSR CC_13_14
    case 0xC18ABE: {
        Instruction step(cpu, 0x20, 0x000166u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:335 JMP @UNKNOWN2
    case 0xC18AC1: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:337 LDY #.LOWORD(CC_18_TREE)
    case 0xC18AC4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Bu : 0x00790Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:337 LDY #.LOWORD(CC_18_TREE)
    // Overlapping static entry reached from 0xC18AC4.
    case 0xC18AC6: {
        Instruction step(cpu, 0x79, 0x001E84u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text.asm:338 STY @LOCAL05
    case 0xC18AC7: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:339 JMP @UNKNOWN2
    case 0xC18AC9: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:341 LDY #.LOWORD(CC_19_TREE)
    case 0xC18ACC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000AAu : 0x0079AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:341 LDY #.LOWORD(CC_19_TREE)
    // Overlapping static entry reached from 0xC18ACC.
    case 0xC18ACE: {
        Instruction step(cpu, 0x79, 0x001E84u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text.asm:342 STY @LOCAL05
    case 0xC18ACF: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:343 JMP @UNKNOWN2
    case 0xC18AD1: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:345 LDY #.LOWORD(CC_1A_TREE)
    case 0xC18AD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000056u : 0x007B56u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:345 LDY #.LOWORD(CC_1A_TREE)
    // Overlapping static entry reached from 0xC18AD4.
    case 0xC18AD6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:346 STY @LOCAL05
    case 0xC18AD7: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:347 JMP @UNKNOWN2
    case 0xC18AD9: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:349 LDY #.LOWORD(CC_1B_TREE)
    case 0xC18ADC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000036u : 0x007C36u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:349 LDY #.LOWORD(CC_1B_TREE)
    // Overlapping static entry reached from 0xC18ADC.
    case 0xC18ADE: {
        Instruction step(cpu, 0x7C, 0x001E84u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:350 STY @LOCAL05
    case 0xC18ADF: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:351 JMP @UNKNOWN2
    case 0xC18AE1: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:353 LDY #.LOWORD(CC_1C_TREE)
    case 0xC18AE4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000094u : 0x007D94u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:353 LDY #.LOWORD(CC_1C_TREE)
    // Overlapping static entry reached from 0xC18AE4.
    case 0xC18AE6: {
        Instruction step(cpu, 0x7D, 0x001E84u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text.asm:354 STY @LOCAL05
    case 0xC18AE7: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:355 JMP @UNKNOWN2
    case 0xC18AE9: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:357 LDY #.LOWORD(CC_1D_TREE)
    case 0xC18AEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000011u : 0x007F11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:357 LDY #.LOWORD(CC_1D_TREE)
    // Overlapping static entry reached from 0xC18AEC.
    case 0xC18AEE: {
        Instruction step(cpu, 0x7F, 0x4C1E84u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/display_text.asm:358 STY @LOCAL05
    case 0xC18AEF: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:359 JMP @UNKNOWN2
    case 0xC18AF1: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:359 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AEE.
    case 0xC18AF2: {
        Instruction step(cpu, 0x54, 0x00A087u, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/display_text.asm:361 LDY #.LOWORD(CC_1E_TREE)
    case 0xC18AF4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Fu : 0x00811Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:361 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18AF2.
    case 0xC18AF5: {
        Instruction step(cpu, 0x1F, 0x1E8481u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:361 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18AF4.
    case 0xC18AF6: {
        Instruction step(cpu, 0x81, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:362 STY @LOCAL05
    case 0xC18AF7: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:362 STY @LOCAL05
    // Overlapping static entry reached from 0xC18AF6.
    case 0xC18AF8: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:363 JMP @UNKNOWN2
    case 0xC18AF9: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:363 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AF8.
    case 0xC18AFB: {
        Instruction step(cpu, 0x87, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:365 LDY #.LOWORD(CC_1F_TREE)
    case 0xC18AFC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BBu : 0x0081BBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/display_text.asm:365 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18AFB.
    case 0xC18AFD: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/display_text.asm:365 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18AFC.
    case 0xC18AFE: {
        Instruction step(cpu, 0x81, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:366 STY @LOCAL05
    case 0xC18AFF: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/display_text.asm:366 STY @LOCAL05
    // Overlapping static entry reached from 0xC18AFE.
    case 0xC18B00: {
        Instruction step(cpu, 0x1E, 0x00544Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/display_text.asm:367 JMP @UNKNOWN2
    case 0xC18B01: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:367 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B00.
    case 0xC18B03: {
        Instruction step(cpu, 0x87, 0x000020u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:369 JSR PRINT_LETTER
    case 0xC18B04: {
        Instruction step(cpu, 0x20, 0x000CB6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:369 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC18B03.
    case 0xC18B05: {
        Instruction step(cpu, 0xB6, 0x00000Cu, 2u, AddressMode::DirectPageIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text.asm:370 JMP @UNKNOWN2
    case 0xC18B07: {
        Instruction step(cpu, 0x4C, 0x008754u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/display_text.asm:372 LDA @LOCAL01
    case 0xC18B0A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:373 STA @VIRTUAL02
    case 0xC18B0C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:374 LDY @VIRTUAL02
    case 0xC18B0E: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B10: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B13: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B15: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B18: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:376 LDA @VIRTUAL02
    case 0xC18B1A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text.asm:377 JSR UNKNOWN_C1869D
    case 0xC18B1C: {
        Instruction step(cpu, 0x20, 0x00869Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text.asm:378 JSR UNKNOWN_C14049
    case 0xC18B1F: {
        Instruction step(cpu, 0x20, 0x004049u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B22: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B24: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B26: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B28: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_text.asm:381 END_C_FUNCTION
    case 0xC18B2A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_text.asm:381 END_C_FUNCTION
    case 0xC18B2B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
