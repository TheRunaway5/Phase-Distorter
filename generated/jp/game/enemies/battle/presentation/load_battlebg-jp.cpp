// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/load_battlebg-jp.asm
bool resume_battle_load_battlebg_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_battlebg-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2D0D5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0D7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0D8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0D9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x00FFCEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC2D0DA.
    case 0xC2D0DC: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0DD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0DE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:21 STY @LOCAL0B
    case 0xC2D0DF: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:21 STY @LOCAL0B
    // Overlapping static entry reached from 0xC2D0DC.
    case 0xC2D0E0: {
        Instruction step(cpu, 0x30, 0x000086u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:22 STX @VIRTUAL04
    case 0xC2D0E1: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:22 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D0E0.
    case 0xC2D0E2: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:23 STX @LOCAL0A
    case 0xC2D0E3: {
        Instruction step(cpu, 0x86, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:23 STX @LOCAL0A
    // Overlapping static entry reached from 0xC2D0E2.
    case 0xC2D0E4: {
        Instruction step(cpu, 0x2E, 0x000285u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:24 STA @VIRTUAL02
    case 0xC2D0E5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:25 STZ RED_FLASH_DURATION
    case 0xC2D0E7: {
        Instruction step(cpu, 0x9C, 0x00AF75u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:26 STZ GREEN_FLASH_DURATION
    case 0xC2D0EA: {
        Instruction step(cpu, 0x9C, 0x00AF73u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:27 STZ SHAKE_DURATION
    case 0xC2D0ED: {
        Instruction step(cpu, 0x9C, 0x00AF69u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:28 STZ WOBBLE_DURATION
    case 0xC2D0F0: {
        Instruction step(cpu, 0x9C, 0x00AF67u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:29 STZ SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2D0F3: {
        Instruction step(cpu, 0x9C, 0x00AF65u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:30 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2D0F6: {
        Instruction step(cpu, 0x9C, 0x00AF63u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:31 STZ VERTICAL_SHAKE_DURATION
    case 0xC2D0F9: {
        Instruction step(cpu, 0x9C, 0x00AF61u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:32 LDA @LOCAL0B
    case 0xC2D0FC: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:33 AND #$0003
    case 0xC2D0FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:33 AND #$0003
    // Overlapping static entry reached from 0xC2D0FE.
    case 0xC2D100: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:34 BEQ @NO_LETTERBOX
    case 0xC2D101: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:35 CMP #LETTERBOX_STYLE::LARGE
    case 0xC2D103: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:35 CMP #LETTERBOX_STYLE::LARGE
    // Overlapping static entry reached from 0xC2D103.
    case 0xC2D105: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:36 BEQ @LARGE_LETTERBOX
    case 0xC2D106: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:37 CMP #LETTERBOX_STYLE::MEDIUM
    case 0xC2D108: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:37 CMP #LETTERBOX_STYLE::MEDIUM
    // Overlapping static entry reached from 0xC2D108.
    case 0xC2D10A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:38 BEQ @MEDIUM_LETTERBOX
    case 0xC2D10B: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:39 CMP #LETTERBOX_STYLE::SMALL
    case 0xC2D10D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:39 CMP #LETTERBOX_STYLE::SMALL
    // Overlapping static entry reached from 0xC2D10D.
    case 0xC2D10F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:40 BEQ @SMALL_LETTERBOX
    case 0xC2D110: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:41 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D112: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:43 STZ LETTERBOX_TOP_END
    case 0xC2D114: {
        Instruction step(cpu, 0x9C, 0x00AF87u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:44 LDA #SCREEN_Y_RESOLUTION
    case 0xC2D117: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:44 LDA #SCREEN_Y_RESOLUTION
    // Overlapping static entry reached from 0xC2D117.
    case 0xC2D119: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:45 STA LETTERBOX_BOTTOM_START
    case 0xC2D11A: {
        Instruction step(cpu, 0x8D, 0x00AF89u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:46 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D11D: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:48 LDA #LETTERBOX_SIZE_LARGE - 1
    case 0xC2D11F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:48 LDA #LETTERBOX_SIZE_LARGE - 1
    // Overlapping static entry reached from 0xC2D11F.
    case 0xC2D121: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:49 STA LETTERBOX_TOP_END
    case 0xC2D122: {
        Instruction step(cpu, 0x8D, 0x00AF87u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:50 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    case 0xC2D125: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:50 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    // Overlapping static entry reached from 0xC2D125.
    case 0xC2D127: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:51 STA LETTERBOX_BOTTOM_START
    case 0xC2D128: {
        Instruction step(cpu, 0x8D, 0x00AF89u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:52 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D12B: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:54 LDA #LETTERBOX_SIZE_MEDIUM - 1
    case 0xC2D12D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000039u : 0x000039u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:54 LDA #LETTERBOX_SIZE_MEDIUM - 1
    // Overlapping static entry reached from 0xC2D12D.
    case 0xC2D12F: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:55 STA LETTERBOX_TOP_END
    case 0xC2D130: {
        Instruction step(cpu, 0x8D, 0x00AF87u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:56 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    case 0xC2D133: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A6u : 0x0000A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:56 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    // Overlapping static entry reached from 0xC2D133.
    case 0xC2D135: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:57 STA LETTERBOX_BOTTOM_START
    case 0xC2D136: {
        Instruction step(cpu, 0x8D, 0x00AF89u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:58 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D139: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:60 LDA #LETTERBOX_SIZE_SMALL - 1
    case 0xC2D13B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000043u : 0x000043u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:60 LDA #LETTERBOX_SIZE_SMALL - 1
    // Overlapping static entry reached from 0xC2D13B.
    case 0xC2D13D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:61 STA LETTERBOX_TOP_END
    case 0xC2D13E: {
        Instruction step(cpu, 0x8D, 0x00AF87u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:62 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    case 0xC2D141: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Cu : 0x00009Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:62 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    // Overlapping static entry reached from 0xC2D141.
    case 0xC2D143: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:63 STA LETTERBOX_BOTTOM_START
    case 0xC2D144: {
        Instruction step(cpu, 0x8D, 0x00AF89u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:65 STZ LETTERBOX_EFFECT_ENDING
    case 0xC2D147: {
        Instruction step(cpu, 0x9C, 0x00AF8Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:66 LDX #$7000
    case 0xC2D14A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:66 LDX #$7000
    // Overlapping static entry reached from 0xC2D14A.
    case 0xC2D14C: {
        Instruction step(cpu, 0x70, 0x00008Eu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:67 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2D14D: {
        Instruction step(cpu, 0x8E, 0x00AFA3u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:67 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2D14C.
    case 0xC2D14E: {
        Instruction step(cpu, 0xA3, 0x0000AFu, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:68 STX LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2D150: {
        Instruction step(cpu, 0x8E, 0x00AFA1u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:69 STZ ENABLE_BACKGROUND_DARKENING
    case 0xC2D153: {
        Instruction step(cpu, 0x9C, 0x00AFA5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:70 LDA #$FFFF
    case 0xC2D156: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:70 LDA #$FFFF
    // Overlapping static entry reached from 0xC2D156.
    case 0xC2D158: {
        Instruction step(cpu, 0xFF, 0xAFA78Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:71 STA BACKGROUND_BRIGHTNESS
    case 0xC2D159: {
        Instruction step(cpu, 0x8D, 0x00AFA7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D15C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D15C.
    case 0xC2D15E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D15F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D161: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D161.
    case 0xC2D163: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D164: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D166: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    // Overlapping static entry reached from 0xC2D1C3.
    case 0xC2D167: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D168: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    // Overlapping static entry reached from 0xC2D167.
    case 0xC2D169: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D16A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D16C: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D16E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00D7A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D16E.
    case 0xC2D170: {
        Instruction step(cpu, 0xD7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D171: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D170.
    case 0xC2D172: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D173: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D172.
    case 0xC2D174: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D173.
    case 0xC2D175: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D176: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:75 LDA @VIRTUAL02
    case 0xC2D178: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D180: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:77 TAX
    case 0xC2D182: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:78 LDA f:BG_DATA_TABLE,X
    case 0xC2D183: {
        Instruction step(cpu, 0xBF, 0xCADCA1u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:79 AND #$00FF
    case 0xC2D187: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC2D187.
    case 0xC2D189: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:80 ASL
    case 0xC2D18A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:81 ASL
    case 0xC2D18B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:82 CLC
    case 0xC2D18C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:83 ADC @VIRTUAL06
    case 0xC2D18D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:84 STA @VIRTUAL06
    case 0xC2D18F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D191: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D191.
    case 0xC2D193: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D194: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D196: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D197: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D199: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D19B: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D19D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D19F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D1A1: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D1A3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1A5: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1A7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1A9: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1AB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1AD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1AF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1B1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1B3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:89 JSL DECOMP
    case 0xC2D1B5: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:90 LDA CURRENT_BATTLE_GROUP
    case 0xC2D1B9: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:91 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    case 0xC2D1BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DEu : 0x0001DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:91 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    // Overlapping static entry reached from 0xC2D1BC.
    case 0xC2D1BE: {
        Instruction step(cpu, 0x01, 0x0000D0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:92 BNE @UNKNOWN5
    case 0xC2D1BF: {
        Instruction step(cpu, 0xD0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:92 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC2D1BE.
    case 0xC2D1C0: {
        Instruction step(cpu, 0x25, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:93 LDY #$3000
    case 0xC2D1C1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:93 LDY #$3000
    // Overlapping static entry reached from 0xC2D1C0.
    case 0xC2D1C2: {
        Instruction step(cpu, 0x00, 0x000030u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:93 LDY #$3000
    // Overlapping static entry reached from 0xC2D1C1.
    case 0xC2D1C3: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:94 LDX #$5C00
    case 0xC2D1C4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:94 LDX #$5C00
    // Overlapping static entry reached from 0xC2D1C3.
    case 0xC2D1C5: {
        Instruction step(cpu, 0x00, 0x00005Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:94 LDX #$5C00
    // Overlapping static entry reached from 0xC2D1C4.
    case 0xC2D1C6: {
        Instruction step(cpu, 0x5C, 0x0000A9u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:95 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D1C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:95 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D1C7.
    case 0xC2D1C9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:96 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D1CA: {
        Instruction step(cpu, 0x22, 0xC08DCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1CE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1D6.
    case 0xC2D1D8: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1D8.
    case 0xC2D1DA: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1D9.
    case 0xC2D1DB: {
        Instruction step(cpu, 0x50, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1DC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1DB.
    case 0xC2D1DD: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1E0: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1DE.
    case 0xC2D1E1: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1E1.
    case 0xC2D1E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000080u : 0x001680u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:98 BRA @UNKNOWN6
    case 0xC2D1E4: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:98 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC2D1E3.
    case 0xC2D1E5: {
        Instruction step(cpu, 0x16, 0x0000A5u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1E6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1E5.
    case 0xC2D1E7: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1E8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1E7.
    case 0xC2D1E9: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1EA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1EC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1EE.
    case 0xC2D1F0: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F0.
    case 0xC2D1F2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F1.
    case 0xC2D1F3: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F8: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F6.
    case 0xC2D1F9: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F9.
    case 0xC2D1FB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1FB.
    case 0xC2D1FD: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1FC.
    case 0xC2D1FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D201.
    case 0xC2D203: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D204: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D206: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D208: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D20A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D20C: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D20E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:106 LDA #0
    case 0xC2D210: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008700u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:107 STA [@VIRTUAL06]
    case 0xC2D212: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:107 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D210.
    case 0xC2D213: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC2D214: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:108 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D213.
    case 0xC2D215: {
        Instruction step(cpu, 0x20, 0x0006A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D216: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D218: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D21A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D21C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D21E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D21E.
    case 0xC2D220: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D221: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D221.
    case 0xC2D223: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D224: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D226: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D228: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D226.
    case 0xC2D229: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D229.
    case 0xC2D22B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0006A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D22C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D22B.
    case 0xC2D22D: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D22E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D22D.
    case 0xC2D22F: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D230: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D232: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D234: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D234.
    case 0xC2D236: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D237: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D237.
    case 0xC2D239: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D23A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D23C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D23E: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D23C.
    case 0xC2D23F: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D23F.
    case 0xC2D241: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D242: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D241.
    case 0xC2D243: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D242.
    case 0xC2D244: {
        Instruction step(cpu, 0xDC, 0x000A85u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D245: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D247: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D247.
    case 0xC2D249: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D24A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:113 LDA @VIRTUAL02
    case 0xC2D24C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D24E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D250: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D251: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D252: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D253: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D254: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:115 STA @LOCAL08
    case 0xC2D256: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D258: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25A: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25C: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25E: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:117 CLC
    case 0xC2D260: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:118 ADC @VIRTUAL06
    case 0xC2D261: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:119 STA @VIRTUAL06
    case 0xC2D263: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:120 LDA [@VIRTUAL06]
    case 0xC2D265: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:121 AND #$00FF
    case 0xC2D267: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC2D267.
    case 0xC2D269: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D26A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D26B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:123 PHA
    case 0xC2D26C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D26D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00D93Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D26D.
    case 0xC2D26F: {
        Instruction step(cpu, 0xD9, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D270: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D272: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D272.
    case 0xC2D274: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D275: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:125 PLA
    case 0xC2D277: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:126 CLC
    case 0xC2D278: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:127 ADC @VIRTUAL06
    case 0xC2D279: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:128 STA @VIRTUAL06
    case 0xC2D27B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D27D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D27D.
    case 0xC2D27F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D280: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D282: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D283: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D285: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D287: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D289: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D28B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D28D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D28F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D291: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D293: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D295: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D297: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D299: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D29B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D29D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D29F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:133 JSL DECOMP
    case 0xC2D2A1: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:134 LDA @LOCAL08
    case 0xC2D2A5: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:135 INC
    case 0xC2D2A7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:136 INC
    case 0xC2D2A8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2A9: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2AB: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2AD: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2AF: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:138 CLC
    case 0xC2D2B1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:139 ADC @VIRTUAL06
    case 0xC2D2B2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:140 STA @VIRTUAL06
    case 0xC2D2B4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:141 LDA [@VIRTUAL06]
    case 0xC2D2B6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:142 AND #$00FF
    case 0xC2D2B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2D2B8.
    case 0xC2D2BA: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:143 CMP #4
    case 0xC2D2BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:143 CMP #4
    // Overlapping static entry reached from 0xC2D2BB.
    case 0xC2D2BD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/load_battlebg-jp.asm:144 BNEL @UNKNOWN15
    case 0xC2D2BE: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:144 BNEL @UNKNOWN15
    case 0xC2D2C0: {
        Instruction step(cpu, 0x4C, 0x00D698u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:145 LDA #9
    case 0xC2D2C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:145 LDA #9
    // Overlapping static entry reached from 0xC2D2C3.
    case 0xC2D2C5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:146 JSL UNKNOWN_C08D79
    case 0xC2D2C6: {
        Instruction step(cpu, 0x22, 0xC08D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:147 LDA #0
    case 0xC2D2CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:147 LDA #0
    // Overlapping static entry reached from 0xC2D2CA.
    case 0xC2D2CC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:148 STA @LOCAL08
    case 0xC2D2CD: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:149 BRA @UNKNOWN9
    case 0xC2D2CF: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D2D1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D2D3: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:152 CLC
    case 0xC2D2D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2D6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2D8.
    case 0xC2D2DA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2DB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2DD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2DF.
    case 0xC2D2E1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2E2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D2E4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:155 LDA [@VIRTUAL06]
    case 0xC2D2E6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:156 AND #$00DF
    case 0xC2D2E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0009DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:157 ORA #$0008
    case 0xC2D2EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000008u : 0x008708u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:157 ORA #$0008
    // Overlapping static entry reached from 0xC2D2E8.
    case 0xC2D2EB: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:158 STA [@VIRTUAL06]
    case 0xC2D2EC: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:158 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D2EA.
    case 0xC2D2ED: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:159 REP #PROC_FLAGS::ACCUM8
    case 0xC2D2EE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:159 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D2ED.
    case 0xC2D2EF: {
        Instruction step(cpu, 0x20, 0x0028A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:160 LDA @LOCAL08
    case 0xC2D2F0: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:161 INC
    case 0xC2D2F2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:162 INC
    case 0xC2D2F3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:163 STA @LOCAL08
    case 0xC2D2F4: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:165 CMP #$0800
    case 0xC2D2F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:165 CMP #$0800
    // Overlapping static entry reached from 0xC2D2F6.
    case 0xC2D2F8: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:166 BCC @UNKNOWN8
    case 0xC2D2F9: {
        Instruction step(cpu, 0x90, 0x0000D6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D2FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D2FB.
    case 0xC2D2FD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D2FE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D300: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D300.
    case 0xC2D302: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D303: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D305: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D307: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D309: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D30B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D30D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D30D.
    case 0xC2D30F: {
        Instruction step(cpu, 0x5C, 0x0800A2u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D310: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D310.
    case 0xC2D312: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D313: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D315: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D317: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D315.
    case 0xC2D318: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D318.
    case 0xC2D31A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D31B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D31A.
    case 0xC2D31C: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D31B.
    case 0xC2D31D: {
        Instruction step(cpu, 0xDC, 0x000685u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D31E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D320: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D320.
    case 0xC2D322: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D323: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D325: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D327: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D329: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D32B: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:172 LDA @VIRTUAL02
    case 0xC2D32D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D32F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D331: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D332: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D333: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D334: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D335: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:174 TAX
    case 0xC2D337: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:175 STX @LOCAL06
    case 0xC2D338: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:176 TXA
    case 0xC2D33A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:177 CLC
    case 0xC2D33B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:178 ADC @VIRTUAL06
    case 0xC2D33C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:179 STA @VIRTUAL06
    case 0xC2D33E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:180 STA @LOCAL00
    case 0xC2D340: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:181 LDA @VIRTUAL06+2
    case 0xC2D342: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:182 STA @LOCAL00+2
    case 0xC2D344: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:183 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D346: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x00AFA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:183 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D346.
    case 0xC2D348: {
        Instruction step(cpu, 0xAF, 0xCF9F22u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:184 JSL UNKNOWN_C2CFE5
    case 0xC2D349: {
        Instruction step(cpu, 0x22, 0xC2CF9Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:184 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D348.
    case 0xC2D34C: {
        Instruction step(cpu, 0xC2, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:185 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D34D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x00AFF5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:185 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D34C.
    case 0xC2D34E: {
        Instruction step(cpu, 0xF5, 0x0000AFu, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:185 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D34D.
    case 0xC2D34F: {
        Instruction step(cpu, 0xAF, 0xA90285u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:186 STA @VIRTUAL02
    case 0xC2D350: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:187 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC2D352: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:187 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC2D34F.
    case 0xC2D353: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:187 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC2D352.
    case 0xC2D354: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:188 LDX @VIRTUAL02
    case 0xC2D355: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:189 STA __BSS_START__,X
    case 0xC2D357: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:190 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D35A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000B5u : 0x00AFB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:190 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D35A.
    case 0xC2D35C: {
        Instruction step(cpu, 0xAF, 0xA92084u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:191 STY @LOCAL05
    case 0xC2D35D: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D35F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D35C.
    case 0xC2D360: {
        Instruction step(cpu, 0xD9, 0x0085DAu, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D35F.
    case 0xC2D361: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D362: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D360.
    case 0xC2D363: {
        Instruction step(cpu, 0x1C, 0x00CAA9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D364: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D364.
    case 0xC2D366: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D367: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:193 LDX @LOCAL06
    case 0xC2D369: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:194 TXA
    case 0xC2D36B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:195 INC
    case 0xC2D36C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D36D: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D36F: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D371: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D373: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:197 CLC
    case 0xC2D375: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:198 ADC @VIRTUAL06
    case 0xC2D376: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:199 STA @VIRTUAL06
    case 0xC2D378: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:200 STA @LOCAL03
    case 0xC2D37A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:201 LDA @VIRTUAL06+2
    case 0xC2D37C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:202 STA @LOCAL03+2
    case 0xC2D37E: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D380: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D382: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D384: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D386: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:204 LDA [@LOCAL03]
    case 0xC2D388: {
        Instruction step(cpu, 0xA7, 0x000018u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:205 AND #$00FF
    case 0xC2D38A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:205 AND #$00FF
    // Overlapping static entry reached from 0xC2D38A.
    case 0xC2D38C: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:206 ASL
    case 0xC2D38D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:207 ASL
    case 0xC2D38E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:208 CLC
    case 0xC2D38F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:209 ADC @VIRTUAL06
    case 0xC2D390: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:210 STA @VIRTUAL06
    case 0xC2D392: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D394: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D394.
    case 0xC2D396: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D397: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D399: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D39A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D39C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D39E: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:213 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D3A8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:213 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D3A8.
    case 0xC2D3AA: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:214 LDY @LOCAL05
    case 0xC2D3AB: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:215 TYA
    case 0xC2D3AD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:216 JSL MEMCPY16
    case 0xC2D3AE: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B2: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B6: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:218 LDA [@LOCAL03]
    case 0xC2D3BA: {
        Instruction step(cpu, 0xA7, 0x000018u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:219 AND #$00FF
    case 0xC2D3BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC2D3BC.
    case 0xC2D3BE: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:220 ASL
    case 0xC2D3BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:221 ASL
    case 0xC2D3C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:222 CLC
    case 0xC2D3C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:223 ADC @VIRTUAL06
    case 0xC2D3C2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:224 STA @VIRTUAL06
    case 0xC2D3C4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D3C6.
    case 0xC2D3C8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3C9: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3CB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3CC: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3CE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3D0: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:227 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D3DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:227 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D3DA.
    case 0xC2D3DC: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:228 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D3DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x00AFD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:228 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D3DD.
    case 0xC2D3DF: {
        Instruction step(cpu, 0xAF, 0x8EC322u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:229 JSL MEMCPY16
    case 0xC2D3E0: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:229 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D3DF.
    case 0xC2D3E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x0020A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:230 LDY @LOCAL05
    case 0xC2D3E4: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:230 LDY @LOCAL05
    // Overlapping static entry reached from 0xC2D3E3.
    case 0xC2D3E5: {
        Instruction step(cpu, 0x20, 0x008598u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:231 TYA
    case 0xC2D3E6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D3E5.
    case 0xC2D3E8: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3E9: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3EA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3EC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3ED: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3EF: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:233 REP #PROC_FLAGS::ACCUM8
    case 0xC2D3F1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:235 LDX #32
    case 0xC2D3FB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:235 LDX #32
    // Overlapping static entry reached from 0xC2D3FB.
    case 0xC2D3FD: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:236 STX @LOCAL08
    case 0xC2D3FE: {
        Instruction step(cpu, 0x86, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:237 LDX @VIRTUAL02
    case 0xC2D400: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:238 LDA __BSS_START__,X
    case 0xC2D402: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:239 LDX @LOCAL08
    case 0xC2D405: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:240 JSL MEMCPY16
    case 0xC2D407: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:241 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D40B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:242 LDA #2
    case 0xC2D40D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x008D02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:243 STA LOADED_BG_DATA_LAYER1
    case 0xC2D40F: {
        Instruction step(cpu, 0x8D, 0x00AFA9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:243 STA LOADED_BG_DATA_LAYER1
    // Overlapping static entry reached from 0xC2D40D.
    case 0xC2D410: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x00A2AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:244 LDX #0
    case 0xC2D412: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:244 LDX #0
    // Overlapping static entry reached from 0xC2D410.
    case 0xC2D413: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:244 LDX #0
    // Overlapping static entry reached from 0xC2D412.
    case 0xC2D414: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC2D415: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:246 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D417: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x00AFA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:246 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D417.
    case 0xC2D419: {
        Instruction step(cpu, 0xAF, 0xC8E722u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:247 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D41A: {
        Instruction step(cpu, 0x22, 0xC2C8E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:247 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC2D419.
    case 0xC2D41D: {
        Instruction step(cpu, 0xC2, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:248 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D41E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x00B020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:248 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D41D.
    case 0xC2D41F: {
        Instruction step(cpu, 0x20, 0x0086B0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:248 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D41E.
    case 0xC2D420: {
        Instruction step(cpu, 0xB0, 0x000086u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:249 STX @LOCAL05
    case 0xC2D421: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:249 STX @LOCAL05
    // Overlapping static entry reached from 0xC2D420.
    case 0xC2D422: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D423: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:251 LDA #0
    case 0xC2D425: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:252 STA __BSS_START__,X
    case 0xC2D427: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:252 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D425.
    case 0xC2D428: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC2D42A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:254 LDA #1
    case 0xC2D42C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:254 LDA #1
    // Overlapping static entry reached from 0xC2D42C.
    case 0xC2D42E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:255 STA CURRENT_LAYER_CONFIG
    case 0xC2D42F: {
        Instruction step(cpu, 0x8D, 0x00AF5Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:256 JSL UNKNOWN_C0AFCD
    case 0xC2D432: {
        Instruction step(cpu, 0x22, 0xC0AFACu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:257 LDA #$0017
    case 0xC2D436: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:257 LDA #$0017
    // Overlapping static entry reached from 0xC2D436.
    case 0xC2D438: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:258 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D439: {
        Instruction step(cpu, 0x8D, 0x00AF83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:259 LDA #$0015
    case 0xC2D43C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:259 LDA #$0015
    // Overlapping static entry reached from 0xC2D43C.
    case 0xC2D43E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:260 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D43F: {
        Instruction step(cpu, 0x8D, 0x00AF85u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:261 LDA @LOCAL0A
    case 0xC2D442: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:262 STA @VIRTUAL04
    case 0xC2D444: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg-jp.asm:263 BEQL @UNKNOWN23
    case 0xC2D446: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:263 BEQL @UNKNOWN23
    case 0xC2D448: {
        Instruction step(cpu, 0x4C, 0x00DA27u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:264 LDA @LOCAL0B
    case 0xC2D44B: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:265 AND #$0004
    case 0xC2D44D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:265 AND #$0004
    // Overlapping static entry reached from 0xC2D44D.
    case 0xC2D44F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg-jp.asm:266 BEQL @UNKNOWN14
    case 0xC2D450: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:266 BEQL @UNKNOWN14
    case 0xC2D452: {
        Instruction step(cpu, 0x4C, 0x00D663u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:267 LDA #7
    case 0xC2D455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:267 LDA #7
    // Overlapping static entry reached from 0xC2D455.
    case 0xC2D457: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:268 STA CURRENT_LAYER_CONFIG
    case 0xC2D458: {
        Instruction step(cpu, 0x8D, 0x00AF5Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:269 JSL UNKNOWN_C0AFCD
    case 0xC2D45B: {
        Instruction step(cpu, 0x22, 0xC0AFACu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:270 LDA @VIRTUAL04
    case 0xC2D45F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D461: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D463: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D464: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D465: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D466: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D467: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D469: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D46B: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D46D: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D46F: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:273 CLC
    case 0xC2D471: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:274 ADC @VIRTUAL06
    case 0xC2D472: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:275 STA @VIRTUAL06
    case 0xC2D474: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:276 STA @LOCAL07
    case 0xC2D476: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:277 LDA @VIRTUAL06+2
    case 0xC2D478: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:278 STA @LOCAL07+2
    case 0xC2D47A: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:279 LDA [@VIRTUAL06]
    case 0xC2D47C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:280 AND #$00FF
    case 0xC2D47E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:280 AND #$00FF
    // Overlapping static entry reached from 0xC2D47E.
    case 0xC2D480: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:281 ASL
    case 0xC2D481: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:282 ASL
    case 0xC2D482: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:283 PHA
    case 0xC2D483: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D484: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00D7A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D484.
    case 0xC2D486: {
        Instruction step(cpu, 0xD7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D487: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D486.
    case 0xC2D488: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D489: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D488.
    case 0xC2D48A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D489.
    case 0xC2D48B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D48C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:285 PLA
    case 0xC2D48E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:286 CLC
    case 0xC2D48F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:287 ADC @VIRTUAL06
    case 0xC2D490: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:288 STA @VIRTUAL06
    case 0xC2D492: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D494: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D494.
    case 0xC2D496: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D497: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D499: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D49A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D49C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D49E: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4A8: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4AA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4AC: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4AE: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:292 JSL DECOMP
    case 0xC2D4B0: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:292 JSL DECOMP
    // Overlapping static entry reached from 0xC2D52A.
    case 0xC2D4B3: {
        Instruction step(cpu, 0xC4, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4B4: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D4B3.
    case 0xC2D4B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4B6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4B8: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4BA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4BC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D4BC.
    case 0xC2D4BE: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D4BF.
    case 0xC2D4C1: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4C2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1161 TYA
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4C4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4C5: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4C9: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4CD: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4CF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:296 LDA [@VIRTUAL06]
    case 0xC2D4D1: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:297 AND #$00FF
    case 0xC2D4D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:297 AND #$00FF
    // Overlapping static entry reached from 0xC2D4D3.
    case 0xC2D4D5: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:298 ASL
    case 0xC2D4D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:299 ASL
    case 0xC2D4D7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:300 PHA
    case 0xC2D4D8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00D93Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4D9.
    case 0xC2D4DB: {
        Instruction step(cpu, 0xD9, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4DC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4DE.
    case 0xC2D4E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4E1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:302 PLA
    case 0xC2D4E3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:303 CLC
    case 0xC2D4E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:304 ADC @VIRTUAL06
    case 0xC2D4E5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:305 STA @VIRTUAL06
    case 0xC2D4E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4E9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4E9.
    case 0xC2D4EB: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4EC: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4EE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4EF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4F1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4F3: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D56D.
    case 0xC2D4F4: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4F5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4F7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4F9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4FB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4FD: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4FF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D501: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D503: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:309 JSL DECOMP
    case 0xC2D505: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:310 LDA #0
    case 0xC2D509: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:310 LDA #0
    // Overlapping static entry reached from 0xC2D509.
    case 0xC2D50B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:311 STA @LOCAL0B
    case 0xC2D50C: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:312 BRA @UNKNOWN13
    case 0xC2D50E: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D510: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D512: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:314 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC2D58C.
    case 0xC2D513: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:315 CLC
    case 0xC2D514: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D515: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D517: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D517.
    case 0xC2D519: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D51A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D51C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D51E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D51E.
    case 0xC2D520: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D521: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:317 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D523: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:318 LDA [@VIRTUAL06]
    case 0xC2D525: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:319 AND #$00DF
    case 0xC2D527: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0009DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:319 AND #$00DF
    // Overlapping static entry reached from 0xC2D5A2.
    case 0xC2D528: {
        Instruction step(cpu, 0xDF, 0x871009u, 4u, AddressMode::LongIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:320 ORA #$0010
    case 0xC2D529: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000010u : 0x008710u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:320 ORA #$0010
    // Overlapping static entry reached from 0xC2D527.
    case 0xC2D52A: {
        Instruction step(cpu, 0x10, 0x000087u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:321 STA [@VIRTUAL06]
    case 0xC2D52B: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:321 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D529.
    case 0xC2D52C: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:322 REP #PROC_FLAGS::ACCUM8
    case 0xC2D52D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:322 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D52C.
    case 0xC2D52E: {
        Instruction step(cpu, 0x20, 0x0030A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:323 LDA @LOCAL0B
    case 0xC2D52F: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:324 INC
    case 0xC2D531: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:325 INC
    case 0xC2D532: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:326 STA @LOCAL0B
    case 0xC2D533: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:328 CMP #$0800
    case 0xC2D535: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:328 CMP #$0800
    // Overlapping static entry reached from 0xC2D535.
    case 0xC2D537: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:329 BCC @UNKNOWN12
    case 0xC2D538: {
        Instruction step(cpu, 0x90, 0x0000D6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D53A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D53A.
    case 0xC2D53C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D53D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D53F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D53F.
    case 0xC2D541: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D542: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D544: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D544.
    case 0xC2D546: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D547: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D547.
    case 0xC2D549: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D54A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D54C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D54E: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D54C.
    case 0xC2D54F: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D54F.
    case 0xC2D551: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D551.
    case 0xC2D553: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D552.
    case 0xC2D554: {
        Instruction step(cpu, 0xDC, 0x000685u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D555: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D557: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D557.
    case 0xC2D559: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D55A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:333 LDA @LOCAL0A
    case 0xC2D55C: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:334 STA @VIRTUAL04
    case 0xC2D55E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D560: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D562: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D563: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D564: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D565: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D566: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:336 TAX
    case 0xC2D568: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:337 STX @LOCAL05
    case 0xC2D569: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:338 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D56B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x00B020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:338 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D56B.
    case 0xC2D56D: {
        Instruction step(cpu, 0xB0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:339 STA @VIRTUAL04
    case 0xC2D56E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:339 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2D56D.
    case 0xC2D56F: {
        Instruction step(cpu, 0x04, 0x00008Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:340 TXA
    case 0xC2D570: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D571: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D573: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D575: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D577: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:342 CLC
    case 0xC2D579: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:343 ADC @VIRTUAL0A
    case 0xC2D57A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:344 STA @VIRTUAL0A
    case 0xC2D57C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:345 STA @LOCAL00
    case 0xC2D57E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:346 LDA @VIRTUAL0A+2
    case 0xC2D580: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:347 STA @LOCAL00+2
    case 0xC2D582: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:348 LDA @VIRTUAL04
    case 0xC2D584: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:349 JSL UNKNOWN_C2CFE5
    case 0xC2D586: {
        Instruction step(cpu, 0x22, 0xC2CF9Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D58A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Cu : 0x00B06Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D58A.
    case 0xC2D58C: {
        Instruction step(cpu, 0xB0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:351 STA @VIRTUAL02
    case 0xC2D58D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:351 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D58C.
    case 0xC2D58E: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D58F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000280u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D58F.
    case 0xC2D591: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:353 LDX @VIRTUAL02
    case 0xC2D592: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:354 STA __BSS_START__,X
    case 0xC2D594: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:355 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D597: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:356 LDA #1
    case 0xC2D599: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:357 LDX @VIRTUAL04
    case 0xC2D59B: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:357 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D599.
    case 0xC2D59C: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:358 STA __BSS_START__,X
    case 0xC2D59D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:358 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D59C.
    case 0xC2D59E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D5A0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Cu : 0x00B02Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D5A0.
    case 0xC2D5A2: {
        Instruction step(cpu, 0xB0, 0x000084u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:360 STY @LOCAL0B
    case 0xC2D5A3: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:360 STY @LOCAL0B
    // Overlapping static entry reached from 0xC2D5A2.
    case 0xC2D5A4: {
        Instruction step(cpu, 0x30, 0x0000C2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:361 REP #PROC_FLAGS::ACCUM8
    case 0xC2D5A5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:361 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D5A4.
    case 0xC2D5A6: {
        Instruction step(cpu, 0x20, 0x00D9A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D5A7.
    case 0xC2D5A9: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5AA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D5AC.
    case 0xC2D5AE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5AF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:363 LDX @LOCAL05
    case 0xC2D5B1: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:364 TXA
    case 0xC2D5B3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:365 INC
    case 0xC2D5B4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:366 CLC
    case 0xC2D5B5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:367 ADC @VIRTUAL06
    case 0xC2D5B6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:368 STA @VIRTUAL06
    case 0xC2D5B8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:369 STA @LOCAL09
    case 0xC2D5BA: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:370 LDA @VIRTUAL06+2
    case 0xC2D5BC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:371 STA @LOCAL09+2
    case 0xC2D5BE: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:371 STA @LOCAL09+2
    // Overlapping static entry reached from 0xC2D625.
    case 0xC2D5BF: {
        Instruction step(cpu, 0x2C, 0x0006A7u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:372 LDA [@VIRTUAL06]
    case 0xC2D5C0: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:373 AND #$00FF
    case 0xC2D5C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:373 AND #$00FF
    // Overlapping static entry reached from 0xC2D5C2.
    case 0xC2D5C4: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:374 ASL
    case 0xC2D5C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:375 ASL
    case 0xC2D5C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5C7: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5C9: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5CB: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5CD: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:377 CLC
    case 0xC2D5CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:378 ADC @VIRTUAL06
    case 0xC2D5D0: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:379 STA @VIRTUAL06
    case 0xC2D5D2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5D4.
    case 0xC2D5D6: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5D7: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5D9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5DA: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5DC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5DE: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:382 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D5E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:382 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D5E8.
    case 0xC2D5EA: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:383 LDY @LOCAL0B
    case 0xC2D5EB: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:384 TYA
    case 0xC2D5ED: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:385 JSL MEMCPY16
    case 0xC2D5EE: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F2: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F6: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:387 LDA [@VIRTUAL06]
    case 0xC2D5FA: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:388 AND #$00FF
    case 0xC2D5FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:388 AND #$00FF
    // Overlapping static entry reached from 0xC2D5FC.
    case 0xC2D5FE: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:389 ASL
    case 0xC2D5FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:390 ASL
    case 0xC2D600: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:391 CLC
    case 0xC2D601: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:392 ADC @VIRTUAL0A
    case 0xC2D602: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:393 STA @VIRTUAL0A
    case 0xC2D604: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D606: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D606.
    case 0xC2D608: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D609: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D60B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D60C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D60E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D610: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D612: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D614: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D616: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D618: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:396 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D61A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:396 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D61A.
    case 0xC2D61C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:397 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2D61D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Cu : 0x00B04Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:397 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D61D.
    case 0xC2D61F: {
        Instruction step(cpu, 0xB0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:398 JSL MEMCPY16
    case 0xC2D620: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:398 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D61F.
    case 0xC2D621: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:398 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D621.
    case 0xC2D623: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x0030A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:399 LDY @LOCAL0B
    case 0xC2D624: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:399 LDY @LOCAL0B
    // Overlapping static entry reached from 0xC2D623.
    case 0xC2D625: {
        Instruction step(cpu, 0x30, 0x000098u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:400 TYA
    case 0xC2D626: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D627: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D629: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:402 REP #PROC_FLAGS::ACCUM8
    case 0xC2D631: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D633: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D635: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D637: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D639: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:404 LDX #32
    case 0xC2D63B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:404 LDX #32
    // Overlapping static entry reached from 0xC2D63B.
    case 0xC2D63D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:405 STX @LOCAL08
    case 0xC2D63E: {
        Instruction step(cpu, 0x86, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:406 LDX @VIRTUAL02
    case 0xC2D640: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:407 LDA __BSS_START__,X
    case 0xC2D642: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:407 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D61F.
    case 0xC2D643: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:408 LDX @LOCAL08
    case 0xC2D645: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:409 JSL MEMCPY16
    case 0xC2D647: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:410 LDX #1
    case 0xC2D64B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:410 LDX #1
    // Overlapping static entry reached from 0xC2D64B.
    case 0xC2D64D: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:411 LDA @VIRTUAL04
    case 0xC2D64E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:412 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D650: {
        Instruction step(cpu, 0x22, 0xC2C8E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:413 LDA #$0215
    case 0xC2D654: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000215u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:413 LDA #$0215
    // Overlapping static entry reached from 0xC2D654.
    case 0xC2D656: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:414 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D657: {
        Instruction step(cpu, 0x8D, 0x00AF83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:415 LDA #$0014
    case 0xC2D65A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:415 LDA #$0014
    // Overlapping static entry reached from 0xC2D65A.
    case 0xC2D65C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:416 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D65D: {
        Instruction step(cpu, 0x8D, 0x00AF85u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:417 JMP @UNKNOWN23
    case 0xC2D660: {
        Instruction step(cpu, 0x4C, 0x00DA27u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:419 LDA @VIRTUAL04
    case 0xC2D663: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D665: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D667: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D668: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D669: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D66A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D66B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D66D: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D66F: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D671: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D673: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:422 CLC
    case 0xC2D675: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:423 ADC @VIRTUAL06
    case 0xC2D676: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:424 STA @VIRTUAL06
    case 0xC2D678: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:425 STA @LOCAL00
    case 0xC2D67A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:426 LDA @VIRTUAL06+2
    case 0xC2D67C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:427 STA @LOCAL00+2
    case 0xC2D67E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:428 LDX @LOCAL05
    case 0xC2D680: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:429 TXA
    case 0xC2D682: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:430 JSL UNKNOWN_C2CFE5
    case 0xC2D683: {
        Instruction step(cpu, 0x22, 0xC2CF9Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:431 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D687: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:432 LDA #1
    case 0xC2D689: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:433 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    case 0xC2D68B: {
        Instruction step(cpu, 0x8D, 0x00B022u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:433 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    // Overlapping static entry reached from 0xC2D689.
    case 0xC2D68C: {
        Instruction step(cpu, 0x22, 0x02A9B0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:434 LDA #2
    case 0xC2D68E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x00A602u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:435 LDX @LOCAL05
    case 0xC2D690: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:435 LDX @LOCAL05
    // Overlapping static entry reached from 0xC2D68E.
    case 0xC2D691: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:436 STA __BSS_START__,X
    case 0xC2D692: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:436 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D691.
    case 0xC2D694: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:437 JMP @UNKNOWN23
    case 0xC2D695: {
        Instruction step(cpu, 0x4C, 0x00DA27u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:440 LDA #8
    case 0xC2D698: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:440 LDA #8
    // Overlapping static entry reached from 0xC2D698.
    case 0xC2D69A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:441 JSL UNKNOWN_C08D79
    case 0xC2D69B: {
        Instruction step(cpu, 0x22, 0xC08D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:442 LDY #$6000
    case 0xC2D69F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:442 LDY #$6000
    // Overlapping static entry reached from 0xC2D69F.
    case 0xC2D6A1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:443 LDX #$7C00
    case 0xC2D6A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:443 LDX #$7C00
    // Overlapping static entry reached from 0xC2D6A2.
    case 0xC2D6A4: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:444 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D6A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:444 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D6A5.
    case 0xC2D6A7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:445 JSL SET_BG1_VRAM_LOCATION
    case 0xC2D6A8: {
        Instruction step(cpu, 0x22, 0xC08D8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:446 LDY #$0000
    case 0xC2D6AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:446 LDY #$0000
    // Overlapping static entry reached from 0xC2D6AC.
    case 0xC2D6AE: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:447 LDX #$5800
    case 0xC2D6AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:447 LDX #$5800
    // Overlapping static entry reached from 0xC2D6AF.
    case 0xC2D6B1: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:448 TYA
    case 0xC2D6B2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:449 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D6B3: {
        Instruction step(cpu, 0x22, 0xC08DCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:450 LDY #$1000
    case 0xC2D6B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:450 LDY #$1000
    // Overlapping static entry reached from 0xC2D6B7.
    case 0xC2D6B9: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:451 LDX #$5C00
    case 0xC2D6BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:451 LDX #$5C00
    // Overlapping static entry reached from 0xC2D6B9.
    case 0xC2D6BB: {
        Instruction step(cpu, 0x00, 0x00005Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:451 LDX #$5C00
    // Overlapping static entry reached from 0xC2D6BA.
    case 0xC2D6BC: {
        Instruction step(cpu, 0x5C, 0x0000A9u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:452 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D6BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:452 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D6BD.
    case 0xC2D6BF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:453 JSL SET_BG3_VRAM_LOCATION
    case 0xC2D6C0: {
        Instruction step(cpu, 0x22, 0xC08E0Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:454 LDY #$3000
    case 0xC2D6C4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:454 LDY #$3000
    // Overlapping static entry reached from 0xC2D6C4.
    case 0xC2D6C6: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:455 LDX #$0C00
    case 0xC2D6C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:455 LDX #$0C00
    // Overlapping static entry reached from 0xC2D6C6.
    case 0xC2D6C8: {
        Instruction step(cpu, 0x00, 0x00000Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:455 LDX #$0C00
    // Overlapping static entry reached from 0xC2D6C7.
    case 0xC2D6C9: {
        Instruction step(cpu, 0x0C, 0x0000A9u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:456 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D6CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:456 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D6CA.
    case 0xC2D6CC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:457 JSL SET_BG4_VRAM_LOCATION
    case 0xC2D6CD: {
        Instruction step(cpu, 0x22, 0xC08E4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:458 LDA #0
    case 0xC2D6D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:458 LDA #0
    // Overlapping static entry reached from 0xC2D6D1.
    case 0xC2D6D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:459 STA @LOCAL0B
    case 0xC2D6D4: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:460 BRA @UNKNOWN17
    case 0xC2D6D6: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:462 STORE_INT1632 @VIRTUAL06
    case 0xC2D6D8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:462 STORE_INT1632 @VIRTUAL06
    case 0xC2D6DA: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:463 CLC
    case 0xC2D6DC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6DD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D6DF.
    case 0xC2D6E1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D6E6.
    case 0xC2D6E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:465 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D6EB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:466 LDA [@VIRTUAL06]
    case 0xC2D6ED: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:467 AND #$00DF
    case 0xC2D6EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0087DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:468 STA [@VIRTUAL06]
    case 0xC2D6F1: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:468 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D6EF.
    case 0xC2D6F2: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:469 REP #PROC_FLAGS::ACCUM8
    case 0xC2D6F3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:469 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D6F2.
    case 0xC2D6F4: {
        Instruction step(cpu, 0x20, 0x0030A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:470 LDA @LOCAL0B
    case 0xC2D6F5: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:471 INC
    case 0xC2D6F7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:472 INC
    case 0xC2D6F8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:473 STA @LOCAL0B
    case 0xC2D6F9: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:475 CMP #$0800
    case 0xC2D6FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:475 CMP #$0800
    // Overlapping static entry reached from 0xC2D6FB.
    case 0xC2D6FD: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:476 BCC @UNKNOWN16
    case 0xC2D6FE: {
        Instruction step(cpu, 0x90, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D700: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D700.
    case 0xC2D702: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D703: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D705: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D705.
    case 0xC2D707: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D708: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D70A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D70C: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D70E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D710: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D712: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D714: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D716: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D718: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D71A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D71A.
    case 0xC2D71C: {
        Instruction step(cpu, 0x5C, 0x0800A2u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D71D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D71D.
    case 0xC2D71F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D720: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D722: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D724: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D722.
    case 0xC2D725: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D725.
    case 0xC2D727: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D728: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    // Overlapping static entry reached from 0xC2D727.
    case 0xC2D729: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    // Overlapping static entry reached from 0xC2D728.
    case 0xC2D72A: {
        Instruction step(cpu, 0xDC, 0x001C85u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D72B: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D72D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    // Overlapping static entry reached from 0xC2D72D.
    case 0xC2D72F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D730: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:482 LDA @VIRTUAL02
    case 0xC2D732: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D734: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D736: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D737: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D738: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D739: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D73A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:484 TAX
    case 0xC2D73C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:485 STX @LOCAL06
    case 0xC2D73D: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D73F: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D741: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D743: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D745: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:487 TXA
    case 0xC2D747: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:488 CLC
    case 0xC2D748: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:489 ADC @VIRTUAL0A
    case 0xC2D749: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:490 STA @VIRTUAL0A
    case 0xC2D74B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:491 STA @LOCAL00
    case 0xC2D74D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:492 LDA @VIRTUAL0A+2
    case 0xC2D74F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:493 STA @LOCAL00+2
    case 0xC2D751: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:494 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D753: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x00AFA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:494 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D753.
    case 0xC2D755: {
        Instruction step(cpu, 0xAF, 0xCF9F22u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:495 JSL UNKNOWN_C2CFE5
    case 0xC2D756: {
        Instruction step(cpu, 0x22, 0xC2CF9Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:495 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D755.
    case 0xC2D759: {
        Instruction step(cpu, 0xC2, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:496 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D75A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x00AFF5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:496 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D759.
    case 0xC2D75B: {
        Instruction step(cpu, 0xF5, 0x0000AFu, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:496 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D75A.
    case 0xC2D75C: {
        Instruction step(cpu, 0xAF, 0xA90285u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:497 STA @VIRTUAL02
    case 0xC2D75D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:498 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D75F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000280u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:498 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D75C.
    case 0xC2D760: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:498 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D75F.
    case 0xC2D761: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:499 LDX @VIRTUAL02
    case 0xC2D762: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:500 STA __BSS_START__,X
    case 0xC2D764: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:501 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D767: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000B5u : 0x00AFB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:501 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D767.
    case 0xC2D769: {
        Instruction step(cpu, 0xAF, 0xA93084u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:502 STY @LOCAL0B
    case 0xC2D76A: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D76C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D769.
    case 0xC2D76D: {
        Instruction step(cpu, 0xD9, 0x0085DAu, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D76C.
    case 0xC2D76E: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D76F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D76D.
    case 0xC2D770: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D771: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D771.
    case 0xC2D773: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D774: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D776: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D778: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D77A: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D77C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:505 LDX @LOCAL06
    case 0xC2D77E: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:506 TXA
    case 0xC2D780: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:507 INC
    case 0xC2D781: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:508 CLC
    case 0xC2D782: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:509 ADC @VIRTUAL0A
    case 0xC2D783: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:510 STA @VIRTUAL0A
    case 0xC2D785: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:510 STA @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D7EC.
    case 0xC2D786: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D787: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D789: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D78B: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D78D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:512 LDA [@VIRTUAL0A]
    case 0xC2D78F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:513 AND #$00FF
    case 0xC2D791: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:513 AND #$00FF
    // Overlapping static entry reached from 0xC2D791.
    case 0xC2D793: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:514 ASL
    case 0xC2D794: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:515 ASL
    case 0xC2D795: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:516 CLC
    case 0xC2D796: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:517 ADC @VIRTUAL06
    case 0xC2D797: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:518 STA @VIRTUAL06
    case 0xC2D799: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D79B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D79B.
    case 0xC2D79D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D79E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A1: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A5: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7A7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7A9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7AB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7AD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:521 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D7AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:521 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D7AF.
    case 0xC2D7B1: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:522 LDY @LOCAL0B
    case 0xC2D7B2: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:523 TYA
    case 0xC2D7B4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:524 JSL MEMCPY16
    case 0xC2D7B5: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7B9: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7BB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7BD: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7BF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:526 LDA [@VIRTUAL0A]
    case 0xC2D7C1: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:527 AND #$00FF
    case 0xC2D7C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC2D7C3.
    case 0xC2D7C5: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:528 ASL
    case 0xC2D7C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:529 ASL
    case 0xC2D7C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:530 CLC
    case 0xC2D7C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:531 ADC @VIRTUAL06
    case 0xC2D7C9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:532 STA @VIRTUAL06
    case 0xC2D7CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7CD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D7CD.
    case 0xC2D7CF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D0: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D7: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7D9: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7DD: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7DF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:535 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D7E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:535 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D7E1.
    case 0xC2D7E3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:536 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D7E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x00AFD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:536 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D7E4.
    case 0xC2D7E6: {
        Instruction step(cpu, 0xAF, 0x8EC322u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:537 JSL MEMCPY16
    case 0xC2D7E7: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:537 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D7E6.
    case 0xC2D7EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x0030A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:538 LDY @LOCAL0B
    case 0xC2D7EB: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:538 LDY @LOCAL0B
    // Overlapping static entry reached from 0xC2D7EA.
    case 0xC2D7EC: {
        Instruction step(cpu, 0x30, 0x000098u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:539 TYA
    case 0xC2D7ED: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7EE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F0: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F6: {
        Instruction step(cpu, 0x64, 0x00000Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:541 REP #PROC_FLAGS::ACCUM8
    case 0xC2D7F8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7FA: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7FC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7FE: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D800: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:543 LDX #32
    case 0xC2D802: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:543 LDX #32
    // Overlapping static entry reached from 0xC2D802.
    case 0xC2D804: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:544 STX @LOCAL06
    case 0xC2D805: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:545 LDX @VIRTUAL02
    case 0xC2D807: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:546 LDA __BSS_START__,X
    case 0xC2D809: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:547 LDX @LOCAL06
    case 0xC2D80C: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:548 JSL MEMCPY16
    case 0xC2D80E: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:549 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D812: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:550 LDA #3
    case 0xC2D814: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008D03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:551 STA LOADED_BG_DATA_LAYER1
    case 0xC2D816: {
        Instruction step(cpu, 0x8D, 0x00AFA9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:551 STA LOADED_BG_DATA_LAYER1
    // Overlapping static entry reached from 0xC2D814.
    case 0xC2D817: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AFu : 0x00C2AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:552 REP #PROC_FLAGS::ACCUM8
    case 0xC2D819: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:552 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D817.
    case 0xC2D81A: {
        Instruction step(cpu, 0x20, 0x002EA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:553 LDA @LOCAL0A
    case 0xC2D81B: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:554 STA @VIRTUAL04
    case 0xC2D81D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg-jp.asm:555 BEQL @UNKNOWN21
    case 0xC2D81F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:555 BEQL @UNKNOWN21
    case 0xC2D821: {
        Instruction step(cpu, 0x4C, 0x00DA14u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:556 LDA #3
    case 0xC2D824: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:556 LDA #3
    // Overlapping static entry reached from 0xC2D824.
    case 0xC2D826: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:557 STA CURRENT_LAYER_CONFIG
    case 0xC2D827: {
        Instruction step(cpu, 0x8D, 0x00AF5Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:558 JSL UNKNOWN_C0AFCD
    case 0xC2D82A: {
        Instruction step(cpu, 0x22, 0xC0AFACu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D82E: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D830: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D88D.
    case 0xC2D831: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D832: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D834: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:560 LDA @VIRTUAL04
    case 0xC2D836: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D838: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:562 CLC
    case 0xC2D840: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:563 ADC @VIRTUAL0A
    case 0xC2D841: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:564 STA @VIRTUAL0A
    case 0xC2D843: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D845: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00D7A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D845.
    case 0xC2D847: {
        Instruction step(cpu, 0xD7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D848: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D847.
    case 0xC2D849: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D84A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D849.
    case 0xC2D84B: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D84A.
    case 0xC2D84C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D84D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:566 LDA [@VIRTUAL0A]
    case 0xC2D84F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:567 AND #$00FF
    case 0xC2D851: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:567 AND #$00FF
    // Overlapping static entry reached from 0xC2D851.
    case 0xC2D853: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:568 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D854: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:568 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D855: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:569 CLC
    case 0xC2D856: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:570 ADC @VIRTUAL06
    case 0xC2D857: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:571 STA @VIRTUAL06
    case 0xC2D859: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D85B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D85B.
    case 0xC2D85D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D85E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D860: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D861: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D863: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D865: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D867: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D869: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D86B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D86D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D86F: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D871: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D873: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D875: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D877: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D879: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D87B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D87D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:576 JSL DECOMP
    case 0xC2D87F: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D883: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D885: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D887: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D889: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D88B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D88B.
    case 0xC2D88D: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D88E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D88D.
    case 0xC2D88F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D88E.
    case 0xC2D890: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D891: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D893: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D895: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D893.
    case 0xC2D896: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D896.
    case 0xC2D898: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x003DA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D899: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00D93Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D898.
    case 0xC2D89A: {
        Instruction step(cpu, 0x3D, 0x0085D9u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D899.
    case 0xC2D89B: {
        Instruction step(cpu, 0xD9, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D89C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D89A.
    case 0xC2D89D: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D89E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D89D.
    case 0xC2D89F: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D89E.
    case 0xC2D8A0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D8A1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:580 LDA [@VIRTUAL0A]
    case 0xC2D8A3: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:581 AND #$00FF
    case 0xC2D8A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:581 AND #$00FF
    // Overlapping static entry reached from 0xC2D8A5.
    case 0xC2D8A7: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:582 ASL
    case 0xC2D8A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:583 ASL
    case 0xC2D8A9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:584 CLC
    case 0xC2D8AA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:585 ADC @VIRTUAL06
    case 0xC2D8AB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:586 STA @VIRTUAL06
    case 0xC2D8AD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D8AF.
    case 0xC2D8B1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B9: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8BB: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8BD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8BF: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8C1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C3: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C7: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8CB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8CD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8CF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8D1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:591 JSL DECOMP
    case 0xC2D8D3: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:592 LDA #0
    case 0xC2D8D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:592 LDA #0
    // Overlapping static entry reached from 0xC2D8D7.
    case 0xC2D8D9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:593 STA @LOCAL0B
    case 0xC2D8DA: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:594 BRA @UNKNOWN20
    case 0xC2D8DC: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:596 STORE_INT1632 @VIRTUAL06
    case 0xC2D8DE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:596 STORE_INT1632 @VIRTUAL06
    case 0xC2D8E0: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:597 CLC
    case 0xC2D8E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8E3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8E5.
    case 0xC2D8E7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8E8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8EA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D964.
    case 0xC2D8EB: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8EC.
    case 0xC2D8EE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8EF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:599 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D8F1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:600 LDA [@VIRTUAL06]
    case 0xC2D8F3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:601 AND #$00DF
    case 0xC2D8F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0087DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:602 STA [@VIRTUAL06]
    case 0xC2D8F7: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:602 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D8F5.
    case 0xC2D8F8: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:603 REP #PROC_FLAGS::ACCUM8
    case 0xC2D8F9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:603 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D8F8.
    case 0xC2D8FA: {
        Instruction step(cpu, 0x20, 0x0030A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:604 LDA @LOCAL0B
    case 0xC2D8FB: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:605 INC
    case 0xC2D8FD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:606 INC
    case 0xC2D8FE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:607 STA @LOCAL0B
    case 0xC2D8FF: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:609 CMP #$0800
    case 0xC2D901: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:609 CMP #$0800
    // Overlapping static entry reached from 0xC2D901.
    case 0xC2D903: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:610 BCC @UNKNOWN19
    case 0xC2D904: {
        Instruction step(cpu, 0x90, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D906: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D906.
    case 0xC2D908: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D909: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D90B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D90B.
    case 0xC2D90D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D90E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D910: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D910.
    case 0xC2D912: {
        Instruction step(cpu, 0x0C, 0x0000A2u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D913: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D913.
    case 0xC2D915: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D916: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D918: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D91A: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D918.
    case 0xC2D91B: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D91B.
    case 0xC2D91D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D91E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D91D.
    case 0xC2D91F: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D91E.
    case 0xC2D920: {
        Instruction step(cpu, 0xDC, 0x000685u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D921: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D923: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D923.
    case 0xC2D925: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D926: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:614 LDA @LOCAL0A
    case 0xC2D928: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:615 STA @VIRTUAL04
    case 0xC2D92A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D92C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D92E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D92F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D930: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D931: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D932: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:617 TAX
    case 0xC2D934: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:618 STX @LOCAL06
    case 0xC2D935: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:619 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D937: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000020u : 0x00B020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:619 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D937.
    case 0xC2D939: {
        Instruction step(cpu, 0xB0, 0x000084u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:620 STY @LOCAL02
    case 0xC2D93A: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:620 STY @LOCAL02
    // Overlapping static entry reached from 0xC2D939.
    case 0xC2D93B: {
        Instruction step(cpu, 0x16, 0x00008Au, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:621 TXA
    case 0xC2D93C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D93D: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D93F: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D941: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D943: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:623 CLC
    case 0xC2D945: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:624 ADC @VIRTUAL0A
    case 0xC2D946: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:625 STA @VIRTUAL0A
    case 0xC2D948: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:626 STA @LOCAL00
    case 0xC2D94A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:627 LDA @VIRTUAL0A+2
    case 0xC2D94C: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:628 STA @LOCAL00+2
    case 0xC2D94E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:629 TYA
    case 0xC2D950: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:630 JSL UNKNOWN_C2CFE5
    case 0xC2D951: {
        Instruction step(cpu, 0x22, 0xC2CF9Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:631 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D955: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Cu : 0x00B06Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:631 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D955.
    case 0xC2D957: {
        Instruction step(cpu, 0xB0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:632 STA @VIRTUAL04
    case 0xC2D958: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:632 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2D957.
    case 0xC2D959: {
        Instruction step(cpu, 0x04, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:633 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    case 0xC2D95A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0002C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:633 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2D959.
    case 0xC2D95B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000002u : 0x00A602u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:633 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2D95A.
    case 0xC2D95C: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:634 LDX @VIRTUAL04
    case 0xC2D95D: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:634 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D95B.
    case 0xC2D95E: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:635 STA __BSS_START__,X
    case 0xC2D95F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:635 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D95E.
    case 0xC2D960: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D962: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x00B02Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D962.
    case 0xC2D964: {
        Instruction step(cpu, 0xB0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:637 STA @VIRTUAL02
    case 0xC2D965: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:637 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D964.
    case 0xC2D966: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D967: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D967.
    case 0xC2D969: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D96A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D96C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D96C.
    case 0xC2D96E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D96F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:639 LDX @LOCAL06
    case 0xC2D971: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:640 TXA
    case 0xC2D973: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:641 INC
    case 0xC2D974: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:642 CLC
    case 0xC2D975: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:643 ADC @VIRTUAL06
    case 0xC2D976: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:644 STA @VIRTUAL06
    case 0xC2D978: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:645 STA @LOCAL03
    case 0xC2D97A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:646 LDA @VIRTUAL06+2
    case 0xC2D97C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:647 STA @LOCAL03+2
    case 0xC2D97E: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:648 LDA [@VIRTUAL06]
    case 0xC2D980: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:649 AND #$00FF
    case 0xC2D982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:649 AND #$00FF
    // Overlapping static entry reached from 0xC2D982.
    case 0xC2D984: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:650 ASL
    case 0xC2D985: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:651 ASL
    case 0xC2D986: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D987: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D989: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D98B: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D98D: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:653 CLC
    case 0xC2D98F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:654 ADC @VIRTUAL06
    case 0xC2D990: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:655 STA @VIRTUAL06
    case 0xC2D992: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D994: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D994.
    case 0xC2D996: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D997: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D999: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D99A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D99C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D99E: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:658 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D9A8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:658 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D5A6.
    case 0xC2D9A9: {
        Instruction step(cpu, 0x20, 0x00A500u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:658 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D9A8.
    case 0xC2D9AA: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:659 LDA @VIRTUAL02
    case 0xC2D9AB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:659 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D9A9.
    case 0xC2D9AC: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:660 JSL MEMCPY16
    case 0xC2D9AD: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B1: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B5: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:662 LDA [@VIRTUAL06]
    case 0xC2D9B9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:663 AND #$00FF
    case 0xC2D9BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:663 AND #$00FF
    // Overlapping static entry reached from 0xC2D9BB.
    case 0xC2D9BD: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:664 ASL
    case 0xC2D9BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:665 ASL
    case 0xC2D9BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:666 CLC
    case 0xC2D9C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:667 ADC @VIRTUAL0A
    case 0xC2D9C1: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:668 STA @VIRTUAL0A
    case 0xC2D9C3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D9C5.
    case 0xC2D9C7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9C8: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CF: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:671 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D9D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:671 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D9D9.
    case 0xC2D9DB: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:672 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2D9DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Cu : 0x00B04Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:672 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D9DC.
    case 0xC2D9DE: {
        Instruction step(cpu, 0xB0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:673 JSL MEMCPY16
    case 0xC2D9DF: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:673 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D9DE.
    case 0xC2D9E0: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:673 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D9E0.
    case 0xC2D9E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0002A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:674 LDA @VIRTUAL02
    case 0xC2D9E3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:674 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D9E2.
    case 0xC2D9E4: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9E5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9E7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9E8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9EA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9EB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9ED: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:676 REP #PROC_FLAGS::ACCUM8
    case 0xC2D9EF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:678 LDX #32
    case 0xC2D9F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:678 LDX #32
    // Overlapping static entry reached from 0xC2D9F9.
    case 0xC2D9FB: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:679 STX @LOCAL06
    case 0xC2D9FC: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:680 LDX @VIRTUAL04
    case 0xC2D9FE: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:681 LDA __BSS_START__,X
    case 0xC2DA00: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:681 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D9DE.
    case 0xC2DA02: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:682 LDX @LOCAL06
    case 0xC2DA03: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:683 JSL MEMCPY16
    case 0xC2DA05: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:684 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA09: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:685 LDA #4
    case 0xC2DA0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x00A404u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:686 LDY @LOCAL02
    case 0xC2DA0D: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:686 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2DA0B.
    case 0xC2DA0E: {
        Instruction step(cpu, 0x16, 0x000099u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:687 STA __BSS_START__,Y
    case 0xC2DA0F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:687 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DA0E.
    case 0xC2DA10: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:688 BRA @UNKNOWN22
    case 0xC2DA12: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:690 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA14: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:691 STZ LOADED_BG_DATA_LAYER2
    case 0xC2DA16: {
        Instruction step(cpu, 0x9C, 0x00B020u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:693 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA19: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:694 LDA #$0817
    case 0xC2DA1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000817u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:694 LDA #$0817
    // Overlapping static entry reached from 0xC2DA1B.
    case 0xC2DA1D: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:695 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2DA1E: {
        Instruction step(cpu, 0x8D, 0x00AF83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:696 LDA #$0013
    case 0xC2DA21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:696 LDA #$0013
    // Overlapping static entry reached from 0xC2DA21.
    case 0xC2DA23: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:697 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2DA24: {
        Instruction step(cpu, 0x8D, 0x00AF85u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:699 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA27: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:700 STZ DISTORT_30FPS
    case 0xC2DA29: {
        Instruction step(cpu, 0x9C, 0x00AF81u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:701 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DA2C: {
        Instruction step(cpu, 0xAD, 0x00B020u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:702 AND #$00FF
    case 0xC2DA2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:702 AND #$00FF
    // Overlapping static entry reached from 0xC2DA2F.
    case 0xC2DA31: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:703 BEQ @UNKNOWN24
    case 0xC2DA32: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:704 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::distortion_styles
    case 0xC2DA34: {
        Instruction step(cpu, 0xAD, 0x00B081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:705 AND #$00FF
    case 0xC2DA37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:705 AND #$00FF
    // Overlapping static entry reached from 0xC2DA37.
    case 0xC2DA39: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:706 BEQ @UNKNOWN24
    case 0xC2DA3A: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:707 LDA #1
    case 0xC2DA3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:707 LDA #1
    // Overlapping static entry reached from 0xC2DA3C.
    case 0xC2DA3E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:708 STA DISTORT_30FPS
    case 0xC2DA3F: {
        Instruction step(cpu, 0x8D, 0x00AF81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:710 JSL UNKNOWN_C2D0AC
    case 0xC2DA42: {
        Instruction step(cpu, 0x22, 0xC2D060u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:711 LDA LETTERBOX_TOP_END
    case 0xC2DA46: {
        Instruction step(cpu, 0xAD, 0x00AF87u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:712 BEQ @UNKNOWN25
    case 0xC2DA49: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:713 LDA #2
    case 0xC2DA4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:713 LDA #2
    // Overlapping static entry reached from 0xC2DA4B.
    case 0xC2DA4D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:714 JSL UNKNOWN_C429E8
    case 0xC2DA4E: {
        Instruction step(cpu, 0x22, 0xC42926u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg-jp.asm:716 JSL UNKNOWN_C2E9ED
    case 0xC2DA52: {
        Instruction step(cpu, 0x22, 0xC2E906u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_battlebg-jp.asm:717 END_C_FUNCTION
    case 0xC2DA56: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/load_battlebg-jp.asm:717 END_C_FUNCTION
    case 0xC2DA57: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
