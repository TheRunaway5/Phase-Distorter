// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/load_battlebg.asm
bool resume_battle_load_battlebg(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_battlebg.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2D121: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D123: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D124: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D125: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D126: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D0u : 0x00FFD0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC2D126.
    case 0xC2D128: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D129: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D12A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:20 STY @LOCAL0A
    case 0xC2D12B: {
        Instruction step(cpu, 0x84, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:20 STY @LOCAL0A
    // Overlapping static entry reached from 0xC2D128.
    case 0xC2D12C: {
        Instruction step(cpu, 0x2E, 0x000486u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:21 STX @VIRTUAL04
    case 0xC2D12D: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:22 STX @LOCAL09
    case 0xC2D12F: {
        Instruction step(cpu, 0x86, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:23 STA @VIRTUAL02
    case 0xC2D131: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:24 STZ RED_FLASH_DURATION
    case 0xC2D133: {
        Instruction step(cpu, 0x9C, 0x00ADA0u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:25 STZ GREEN_FLASH_DURATION
    case 0xC2D136: {
        Instruction step(cpu, 0x9C, 0x00AD9Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:26 STZ SHAKE_DURATION
    case 0xC2D139: {
        Instruction step(cpu, 0x9C, 0x00AD94u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:27 STZ WOBBLE_DURATION
    case 0xC2D13C: {
        Instruction step(cpu, 0x9C, 0x00AD92u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:28 STZ SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2D13F: {
        Instruction step(cpu, 0x9C, 0x00AD90u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:29 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2D142: {
        Instruction step(cpu, 0x9C, 0x00AD8Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:30 STZ VERTICAL_SHAKE_DURATION
    case 0xC2D145: {
        Instruction step(cpu, 0x9C, 0x00AD8Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:31 LDA @LOCAL0A
    case 0xC2D148: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:32 AND #$0003
    case 0xC2D14A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:32 AND #$0003
    // Overlapping static entry reached from 0xC2D14A.
    case 0xC2D14C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:33 BEQ @NO_LETTERBOX
    case 0xC2D14D: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:34 CMP #LETTERBOX_STYLE::LARGE
    case 0xC2D14F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:34 CMP #LETTERBOX_STYLE::LARGE
    // Overlapping static entry reached from 0xC2D14F.
    case 0xC2D151: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:35 BEQ @LARGE_LETTERBOX
    case 0xC2D152: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:36 CMP #LETTERBOX_STYLE::MEDIUM
    case 0xC2D154: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:36 CMP #LETTERBOX_STYLE::MEDIUM
    // Overlapping static entry reached from 0xC2D154.
    case 0xC2D156: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:37 BEQ @MEDIUM_LETTERBOX
    case 0xC2D157: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:38 CMP #LETTERBOX_STYLE::SMALL
    case 0xC2D159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:38 CMP #LETTERBOX_STYLE::SMALL
    // Overlapping static entry reached from 0xC2D159.
    case 0xC2D15B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:39 BEQ @SMALL_LETTERBOX
    case 0xC2D15C: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:40 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D15E: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:42 STZ LETTERBOX_TOP_END
    case 0xC2D160: {
        Instruction step(cpu, 0x9C, 0x00ADB2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:43 LDA #SCREEN_Y_RESOLUTION
    case 0xC2D163: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:43 LDA #SCREEN_Y_RESOLUTION
    // Overlapping static entry reached from 0xC2D163.
    case 0xC2D165: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:44 STA LETTERBOX_BOTTOM_START
    case 0xC2D166: {
        Instruction step(cpu, 0x8D, 0x00ADB4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:45 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D169: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:47 LDA #LETTERBOX_SIZE_LARGE - 1
    case 0xC2D16B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:47 LDA #LETTERBOX_SIZE_LARGE - 1
    // Overlapping static entry reached from 0xC2D16B.
    case 0xC2D16D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:48 STA LETTERBOX_TOP_END
    case 0xC2D16E: {
        Instruction step(cpu, 0x8D, 0x00ADB2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:49 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    case 0xC2D171: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:49 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    // Overlapping static entry reached from 0xC2D171.
    case 0xC2D173: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:50 STA LETTERBOX_BOTTOM_START
    case 0xC2D174: {
        Instruction step(cpu, 0x8D, 0x00ADB4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:51 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D177: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:53 LDA #LETTERBOX_SIZE_MEDIUM - 1
    case 0xC2D179: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000039u : 0x000039u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:53 LDA #LETTERBOX_SIZE_MEDIUM - 1
    // Overlapping static entry reached from 0xC2D179.
    case 0xC2D17B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:54 STA LETTERBOX_TOP_END
    case 0xC2D17C: {
        Instruction step(cpu, 0x8D, 0x00ADB2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:55 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    case 0xC2D17F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A6u : 0x0000A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:55 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    // Overlapping static entry reached from 0xC2D17F.
    case 0xC2D181: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:56 STA LETTERBOX_BOTTOM_START
    case 0xC2D182: {
        Instruction step(cpu, 0x8D, 0x00ADB4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:57 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D185: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:59 LDA #LETTERBOX_SIZE_SMALL - 1
    case 0xC2D187: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000043u : 0x000043u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:59 LDA #LETTERBOX_SIZE_SMALL - 1
    // Overlapping static entry reached from 0xC2D187.
    case 0xC2D189: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:60 STA LETTERBOX_TOP_END
    case 0xC2D18A: {
        Instruction step(cpu, 0x8D, 0x00ADB2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:61 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    case 0xC2D18D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Cu : 0x00009Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:61 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    // Overlapping static entry reached from 0xC2D18D.
    case 0xC2D18F: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:62 STA LETTERBOX_BOTTOM_START
    case 0xC2D190: {
        Instruction step(cpu, 0x8D, 0x00ADB4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:64 STZ LETTERBOX_EFFECT_ENDING
    case 0xC2D193: {
        Instruction step(cpu, 0x9C, 0x00ADB6u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:65 LDX #$7000
    case 0xC2D196: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:65 LDX #$7000
    // Overlapping static entry reached from 0xC2D196.
    case 0xC2D198: {
        Instruction step(cpu, 0x70, 0x00008Eu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:66 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2D199: {
        Instruction step(cpu, 0x8E, 0x00ADCEu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:66 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2D198.
    case 0xC2D19A: {
        Instruction step(cpu, 0xCE, 0x008EADu, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:67 STX LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2D19C: {
        Instruction step(cpu, 0x8E, 0x00ADCCu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:67 STX LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2D19A.
    case 0xC2D19D: {
        Instruction step(cpu, 0xCC, 0x009CADu, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:68 STZ ENABLE_BACKGROUND_DARKENING
    case 0xC2D19F: {
        Instruction step(cpu, 0x9C, 0x00ADD0u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:68 STZ ENABLE_BACKGROUND_DARKENING
    // Overlapping static entry reached from 0xC2D19D.
    case 0xC2D1A0: {
        Instruction step(cpu, 0xD0, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:69 LDA #$FFFF
    case 0xC2D1A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:69 LDA #$FFFF
    // Overlapping static entry reached from 0xC2D1A2.
    case 0xC2D1A4: {
        Instruction step(cpu, 0xFF, 0xADD28Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:70 STA BACKGROUND_BRIGHTNESS
    case 0xC2D1A5: {
        Instruction step(cpu, 0x8D, 0x00ADD2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1A8.
    case 0xC2D1AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1AB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1AD.
    case 0xC2D1AF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1B0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    // Overlapping static entry reached from 0xC2D20F.
    case 0xC2D1B3: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B4: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    // Overlapping static entry reached from 0xC2D1B3.
    case 0xC2D1B5: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B8: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00D7A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D1BA.
    case 0xC2D1BC: {
        Instruction step(cpu, 0xD7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1BD: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D1BC.
    case 0xC2D1BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D1BF.
    case 0xC2D1C1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1C2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:74 LDA @VIRTUAL02
    case 0xC2D1C4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1C6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1CA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1CC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:76 TAX
    case 0xC2D1CE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:77 LDA f:BG_DATA_TABLE,X
    case 0xC2D1CF: {
        Instruction step(cpu, 0xBF, 0xCADCA1u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:78 AND #$00FF
    case 0xC2D1D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC2D1D3.
    case 0xC2D1D5: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:79 ASL
    case 0xC2D1D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:80 ASL
    case 0xC2D1D7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:81 CLC
    case 0xC2D1D8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:82 ADC @VIRTUAL0A
    case 0xC2D1D9: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:83 STA @VIRTUAL0A
    case 0xC2D1DB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1DD.
    case 0xC2D1DF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E0: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E3: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E7: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1E9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1EB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1ED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1EF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F1: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F5: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1F9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1FB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1FD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1FF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:88 JSL DECOMP
    case 0xC2D201: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:89 LDA CURRENT_BATTLE_GROUP
    case 0xC2D205: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:90 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    case 0xC2D208: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DEu : 0x0001DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:90 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    // Overlapping static entry reached from 0xC2D208.
    case 0xC2D20A: {
        Instruction step(cpu, 0x01, 0x0000D0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:91 BNE @UNKNOWN5
    case 0xC2D20B: {
        Instruction step(cpu, 0xD0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:91 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC2D20A.
    case 0xC2D20C: {
        Instruction step(cpu, 0x25, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:92 LDY #$3000
    case 0xC2D20D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:92 LDY #$3000
    // Overlapping static entry reached from 0xC2D20C.
    case 0xC2D20E: {
        Instruction step(cpu, 0x00, 0x000030u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:92 LDY #$3000
    // Overlapping static entry reached from 0xC2D20D.
    case 0xC2D20F: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:93 LDX #$5C00
    case 0xC2D210: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:93 LDX #$5C00
    // Overlapping static entry reached from 0xC2D20F.
    case 0xC2D211: {
        Instruction step(cpu, 0x00, 0x00005Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:93 LDX #$5C00
    // Overlapping static entry reached from 0xC2D210.
    case 0xC2D212: {
        Instruction step(cpu, 0x5C, 0x0000A9u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:94 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:94 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D213.
    case 0xC2D215: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:95 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D216: {
        Instruction step(cpu, 0x22, 0xC08DDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D21A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D21C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D21E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D220: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D222: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D222.
    case 0xC2D224: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D225: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D224.
    case 0xC2D226: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D225.
    case 0xC2D227: {
        Instruction step(cpu, 0x50, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D228: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D227.
    case 0xC2D229: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D22A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D22C: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D22A.
    case 0xC2D22D: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D22D.
    case 0xC2D22F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000080u : 0x001680u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:97 BRA @UNKNOWN6
    case 0xC2D230: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:97 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC2D22F.
    case 0xC2D231: {
        Instruction step(cpu, 0x16, 0x0000A5u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D232: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D231.
    case 0xC2D233: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D234: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D233.
    case 0xC2D235: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D236: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D238: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D23A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D23A.
    case 0xC2D23C: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D23D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D23C.
    case 0xC2D23E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D23D.
    case 0xC2D23F: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D240: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D242: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D244: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D242.
    case 0xC2D245: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D245.
    case 0xC2D247: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D248: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D247.
    case 0xC2D249: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D248.
    case 0xC2D24A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D24B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D24D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D24D.
    case 0xC2D24F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D250: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D252: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:104 LDA #0
    case 0xC2D254: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008700u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:105 STA [@VIRTUAL0A]
    case 0xC2D256: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:105 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC2D254.
    case 0xC2D257: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC2D258: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D260: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D262: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D264: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D266: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D268: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D26A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D26A.
    case 0xC2D26C: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D26D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D26D.
    case 0xC2D26F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D270: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D272: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D274: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D272.
    case 0xC2D275: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D275.
    case 0xC2D277: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x000AA5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D278: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D277.
    case 0xC2D279: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D27A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D27C: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D27E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D280: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D282: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D284: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D286: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D288: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D288.
    case 0xC2D28A: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D28B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D28B.
    case 0xC2D28D: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D28E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D290: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D292: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D290.
    case 0xC2D293: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D293.
    case 0xC2D295: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D296: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D295.
    case 0xC2D297: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D296.
    case 0xC2D298: {
        Instruction step(cpu, 0xDC, 0x000685u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D299: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D29B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D29B.
    case 0xC2D29D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D29E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A2: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A6: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:114 LDA @VIRTUAL02
    case 0xC2D2A8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2B0: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:116 STA @LOCAL06
    case 0xC2D2B2: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:117 CLC
    case 0xC2D2B4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:118 ADC @VIRTUAL06
    case 0xC2D2B5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:119 STA @VIRTUAL06
    case 0xC2D2B7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:120 LDA [@VIRTUAL06]
    case 0xC2D2B9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:121 AND #$00FF
    case 0xC2D2BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC2D2BB.
    case 0xC2D2BD: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D2BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D2BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:123 PHA
    case 0xC2D2C0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00D93Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2C1.
    case 0xC2D2C3: {
        Instruction step(cpu, 0xD9, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2C6.
    case 0xC2D2C8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:125 PLA
    case 0xC2D2CB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:126 CLC
    case 0xC2D2CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:127 ADC @VIRTUAL06
    case 0xC2D2CD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:128 STA @VIRTUAL06
    case 0xC2D2CF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2D1.
    case 0xC2D2D3: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D4: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2DB: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2DD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2DF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2E1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2E3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2E5: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2E9: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2EB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2ED: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2EF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2F1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2F3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:133 JSL DECOMP
    case 0xC2D2F5: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:134 LDA @LOCAL06
    case 0xC2D2F9: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:135 INC
    case 0xC2D2FB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:136 INC
    case 0xC2D2FC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D2FD: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D2FF: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D301: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D303: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:138 CLC
    case 0xC2D305: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:139 ADC @VIRTUAL06
    case 0xC2D306: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:140 STA @VIRTUAL06
    case 0xC2D308: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:141 LDA [@VIRTUAL06]
    case 0xC2D30A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:142 AND #$00FF
    case 0xC2D30C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2D30C.
    case 0xC2D30E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:143 CMP #4
    case 0xC2D30F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:143 CMP #4
    // Overlapping static entry reached from 0xC2D30F.
    case 0xC2D311: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/load_battlebg.asm:144 BNEL @UNKNOWN15
    case 0xC2D312: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:144 BNEL @UNKNOWN15
    case 0xC2D314: {
        Instruction step(cpu, 0x4C, 0x00D714u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:145 LDA #9
    case 0xC2D317: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:145 LDA #9
    // Overlapping static entry reached from 0xC2D317.
    case 0xC2D319: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:146 JSL UNKNOWN_C08D79
    case 0xC2D31A: {
        Instruction step(cpu, 0x22, 0xC08D79u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:147 LDA #0
    case 0xC2D31E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:147 LDA #0
    // Overlapping static entry reached from 0xC2D31E.
    case 0xC2D320: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:148 STA @LOCAL06
    case 0xC2D321: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:149 BRA @UNKNOWN9
    case 0xC2D323: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D325: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D327: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:152 CLC
    case 0xC2D329: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D32A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D32C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D32C.
    case 0xC2D32E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D32F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D331: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D333: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D333.
    case 0xC2D335: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D336: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D338: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:155 LDA [@VIRTUAL06]
    case 0xC2D33A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:156 AND #$00DF
    case 0xC2D33C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0009DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:157 ORA #$0008
    case 0xC2D33E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000008u : 0x008708u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:157 ORA #$0008
    // Overlapping static entry reached from 0xC2D33C.
    case 0xC2D33F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:158 STA [@VIRTUAL06]
    case 0xC2D340: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:158 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D33E.
    case 0xC2D341: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:159 REP #PROC_FLAGS::ACCUM8
    case 0xC2D342: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:159 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D341.
    case 0xC2D343: {
        Instruction step(cpu, 0x20, 0x0022A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:160 LDA @LOCAL06
    case 0xC2D344: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:161 INC
    case 0xC2D346: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:162 INC
    case 0xC2D347: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:163 STA @LOCAL06
    case 0xC2D348: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:165 CMP #$0800
    case 0xC2D34A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:165 CMP #$0800
    // Overlapping static entry reached from 0xC2D34A.
    case 0xC2D34C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:166 BCC @UNKNOWN8
    case 0xC2D34D: {
        Instruction step(cpu, 0x90, 0x0000D6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D34F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    // Overlapping static entry reached from 0xC2D34F.
    case 0xC2D351: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D352: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D354: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    // Overlapping static entry reached from 0xC2D354.
    case 0xC2D356: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D357: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D359: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D35B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D35D: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D35F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D361: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D363: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D365: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D367: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D369: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D369.
    case 0xC2D36B: {
        Instruction step(cpu, 0x5C, 0x0800A2u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D36C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D36C.
    case 0xC2D36E: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D36F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D371: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D373: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D371.
    case 0xC2D374: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D374.
    case 0xC2D376: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D377: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D376.
    case 0xC2D378: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D377.
    case 0xC2D379: {
        Instruction step(cpu, 0xDC, 0x000685u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D37A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D37C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D37C.
    case 0xC2D37E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D37F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D381: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D383: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D385: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D387: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:173 LDA @VIRTUAL02
    case 0xC2D389: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D390: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D391: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:175 TAX
    case 0xC2D393: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:176 STX @LOCAL05
    case 0xC2D394: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:177 TXA
    case 0xC2D396: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:178 CLC
    case 0xC2D397: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:179 ADC @VIRTUAL06
    case 0xC2D398: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:180 STA @VIRTUAL06
    case 0xC2D39A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:181 STA @LOCAL00
    case 0xC2D39C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:182 LDA @VIRTUAL06+2
    case 0xC2D39E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:183 STA @LOCAL00+2
    case 0xC2D3A0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:184 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D3A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D4u : 0x00ADD4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:184 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D3A2.
    case 0xC2D3A4: {
        Instruction step(cpu, 0xAD, 0x00E522u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:185 JSL UNKNOWN_C2CFE5
    case 0xC2D3A5: {
        Instruction step(cpu, 0x22, 0xC2CFE5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:185 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D3A4.
    case 0xC2D3A7: {
        Instruction step(cpu, 0xCF, 0x20A9C2u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:186 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D3A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x00AE20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:186 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D3A9.
    case 0xC2D3AB: {
        Instruction step(cpu, 0xAE, 0x000285u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:187 STA @VIRTUAL02
    case 0xC2D3AC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:188 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC2D3AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:188 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC2D3AE.
    case 0xC2D3B0: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:189 LDX @VIRTUAL02
    case 0xC2D3B1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:190 STA __BSS_START__,X
    case 0xC2D3B3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:191 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D3B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000E0u : 0x00ADE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:191 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D3B6.
    case 0xC2D3B8: {
        Instruction step(cpu, 0xAD, 0x001E84u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:192 STY @LOCAL04
    case 0xC2D3B9: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D3BB.
    case 0xC2D3BD: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3BE: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D3C0.
    case 0xC2D3C2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3C3: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:194 LDX @LOCAL05
    case 0xC2D3C5: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:195 TXA
    case 0xC2D3C7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:196 INC
    case 0xC2D3C8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3C9: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3CB: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3CD: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3CF: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D1: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D3: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D5: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D7: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:199 CLC
    case 0xC2D3D9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:200 ADC @VIRTUAL0A
    case 0xC2D3DA: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:201 STA @VIRTUAL0A
    case 0xC2D3DC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3DE: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3E0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3E2: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3E4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:203 LDA [@VIRTUAL0A]
    case 0xC2D3E6: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:204 AND #$00FF
    case 0xC2D3E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC2D3E8.
    case 0xC2D3EA: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:205 ASL
    case 0xC2D3EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:206 ASL
    case 0xC2D3EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:207 CLC
    case 0xC2D3ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:208 ADC @VIRTUAL06
    case 0xC2D3EE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:209 STA @VIRTUAL06
    case 0xC2D3F0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D3F2.
    case 0xC2D3F4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F5: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3FA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3FC: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3FE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D400: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D402: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D404: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:212 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D406: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:212 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D406.
    case 0xC2D408: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:213 LDY @LOCAL04
    case 0xC2D409: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:214 TYA
    case 0xC2D40B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:215 JSL MEMCPY16
    case 0xC2D40C: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:216 LDA [@VIRTUAL0A]
    case 0xC2D410: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:217 AND #$00FF
    case 0xC2D412: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC2D412.
    case 0xC2D414: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:218 ASL
    case 0xC2D415: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:219 ASL
    case 0xC2D416: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:220 PHA
    case 0xC2D417: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D418: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D41A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D41C: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D41E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:222 PLA
    case 0xC2D420: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:223 CLC
    case 0xC2D421: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:224 ADC @VIRTUAL0A
    case 0xC2D422: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:225 STA @VIRTUAL0A
    case 0xC2D424: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D426: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D426.
    case 0xC2D428: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D429: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D42B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D42C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D42E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D430: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D432: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D434: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D436: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D438: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:228 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D43A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:228 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D43A.
    case 0xC2D43C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:229 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D43D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00AE00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:229 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D43D.
    case 0xC2D43F: {
        Instruction step(cpu, 0xAE, 0x00D222u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:230 JSL MEMCPY16
    case 0xC2D440: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:230 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D43F.
    case 0xC2D442: {
        Instruction step(cpu, 0x8E, 0x00A4C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:231 LDY @LOCAL04
    case 0xC2D444: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:231 LDY @LOCAL04
    // Overlapping static entry reached from 0xC2D442.
    case 0xC2D445: {
        Instruction step(cpu, 0x1E, 0x008598u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:232 TYA
    case 0xC2D446: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D447: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D445.
    case 0xC2D448: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D449: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC2D451: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D453: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D455: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D457: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D459: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:236 LDX #32
    case 0xC2D45B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:236 LDX #32
    // Overlapping static entry reached from 0xC2D45B.
    case 0xC2D45D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:237 STX @LOCAL05
    case 0xC2D45E: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:238 LDX @VIRTUAL02
    case 0xC2D460: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:239 LDA __BSS_START__,X
    case 0xC2D462: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:240 LDX @LOCAL05
    case 0xC2D465: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:241 JSL MEMCPY16
    case 0xC2D467: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:242 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D46B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:243 LDA #2
    case 0xC2D46D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x008D02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:244 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    case 0xC2D46F: {
        Instruction step(cpu, 0x8D, 0x00ADD4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:244 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    // Overlapping static entry reached from 0xC2D46D.
    case 0xC2D470: {
        Instruction step(cpu, 0xD4, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:245 LDX #0
    case 0xC2D472: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:245 LDX #0
    // Overlapping static entry reached from 0xC2D472.
    case 0xC2D474: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:246 REP #PROC_FLAGS::ACCUM8
    case 0xC2D475: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:247 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D477: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D4u : 0x00ADD4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:247 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D477.
    case 0xC2D479: {
        Instruction step(cpu, 0xAD, 0x002D22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:248 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D47A: {
        Instruction step(cpu, 0x22, 0xC2C92Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:248 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC2D479.
    case 0xC2D47C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C2u : 0x00A2C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:249 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D47E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Bu : 0x00AE4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:249 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D47C.
    case 0xC2D47F: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:249 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D47E.
    case 0xC2D480: {
        Instruction step(cpu, 0xAE, 0x001E86u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:250 STX @LOCAL04
    case 0xC2D481: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:251 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D483: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:252 LDA #0
    case 0xC2D485: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:253 STA __BSS_START__,X
    case 0xC2D487: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:253 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D485.
    case 0xC2D488: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:254 REP #PROC_FLAGS::ACCUM8
    case 0xC2D48A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:255 LDA #1
    case 0xC2D48C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:255 LDA #1
    // Overlapping static entry reached from 0xC2D48C.
    case 0xC2D48E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:256 STA CURRENT_LAYER_CONFIG
    case 0xC2D48F: {
        Instruction step(cpu, 0x8D, 0x00AD8Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:257 JSL UNKNOWN_C0AFCD
    case 0xC2D492: {
        Instruction step(cpu, 0x22, 0xC0AFCDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:258 LDA #$0017
    case 0xC2D496: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:258 LDA #$0017
    // Overlapping static entry reached from 0xC2D496.
    case 0xC2D498: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:259 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D499: {
        Instruction step(cpu, 0x8D, 0x00ADAEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:260 LDA #$0015
    case 0xC2D49C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:260 LDA #$0015
    // Overlapping static entry reached from 0xC2D49C.
    case 0xC2D49E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:261 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D49F: {
        Instruction step(cpu, 0x8D, 0x00ADB0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:262 LDA @LOCAL09
    case 0xC2D4A2: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:263 STA @VIRTUAL04
    case 0xC2D4A4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg.asm:264 BEQL @UNKNOWN23
    case 0xC2D4A6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:264 BEQL @UNKNOWN23
    case 0xC2D4A8: {
        Instruction step(cpu, 0x4C, 0x00DAB2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:265 LDA @LOCAL0A
    case 0xC2D4AB: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:266 AND #$0004
    case 0xC2D4AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:266 AND #$0004
    // Overlapping static entry reached from 0xC2D4AD.
    case 0xC2D4AF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg.asm:267 BEQL @UNKNOWN14
    case 0xC2D4B0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:267 BEQL @UNKNOWN14
    case 0xC2D4B2: {
        Instruction step(cpu, 0x4C, 0x00D6DFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:268 LDA #7
    case 0xC2D4B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:268 LDA #7
    // Overlapping static entry reached from 0xC2D4B5.
    case 0xC2D4B7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:269 STA CURRENT_LAYER_CONFIG
    case 0xC2D4B8: {
        Instruction step(cpu, 0x8D, 0x00AD8Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:270 JSL UNKNOWN_C0AFCD
    case 0xC2D4BB: {
        Instruction step(cpu, 0x22, 0xC0AFCDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:271 LDA @VIRTUAL04
    case 0xC2D4BF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4C9: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4CB: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4CD: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4CF: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:274 CLC
    case 0xC2D4D1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:275 ADC @VIRTUAL06
    case 0xC2D4D2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:276 STA @VIRTUAL06
    case 0xC2D4D4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:277 STA @LOCAL02
    case 0xC2D4D6: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:278 LDA @VIRTUAL06+2
    case 0xC2D4D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:279 STA @LOCAL02+2
    case 0xC2D4DA: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00D7A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D4DC.
    case 0xC2D4DE: {
        Instruction step(cpu, 0xD7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4DF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D4DE.
    case 0xC2D4E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D4E1.
    case 0xC2D4E3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4E4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:281 LDA [@VIRTUAL06]
    case 0xC2D4E6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:282 AND #$00FF
    case 0xC2D4E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC2D4E8.
    case 0xC2D4EA: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:283 ASL
    case 0xC2D4EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:284 ASL
    case 0xC2D4EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:285 CLC
    case 0xC2D4ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:286 ADC @VIRTUAL0A
    case 0xC2D4EE: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:287 STA @VIRTUAL0A
    case 0xC2D4F0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4F2.
    case 0xC2D4F4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F5: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F8: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4FA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4FC: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4FE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D500: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D502: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D504: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D506: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D508: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D50A: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D50C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D50E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D510: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D512: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D514: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:292 JSL DECOMP
    case 0xC2D516: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D51A: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D51C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D51E: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D520: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D522: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D524: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D526: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D59E.
    case 0xC2D527: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D528: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D52A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D52A.
    case 0xC2D52C: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D52D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D52D.
    case 0xC2D52F: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D530: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1161 TYA
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D532: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D533: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D537: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00D93Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D537.
    case 0xC2D539: {
        Instruction step(cpu, 0xD9, 0x000A85u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D53A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D53C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D53C.
    case 0xC2D53E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D53F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D541: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D543: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D545: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D547: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:298 LDA [@VIRTUAL06]
    case 0xC2D549: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:299 AND #$00FF
    case 0xC2D54B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC2D54B.
    case 0xC2D54D: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:300 ASL
    case 0xC2D54E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:301 ASL
    case 0xC2D54F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:302 CLC
    case 0xC2D550: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:303 ADC @VIRTUAL0A
    case 0xC2D551: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:304 STA @VIRTUAL0A
    case 0xC2D553: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D555: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D555.
    case 0xC2D557: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D558: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55F: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D561: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D563: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D565: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D567: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D569: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D56B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D56D: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D56F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D571: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D573: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D575: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D577: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:309 JSL DECOMP
    case 0xC2D579: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:310 LDA #0
    case 0xC2D57D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:310 LDA #0
    // Overlapping static entry reached from 0xC2D57D.
    case 0xC2D57F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:311 STA @LOCAL0A
    case 0xC2D580: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:312 BRA @UNKNOWN13
    case 0xC2D582: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D584: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D586: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:315 CLC
    case 0xC2D588: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D589: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D58B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D58B.
    case 0xC2D58D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D58E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D590: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D592: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D592.
    case 0xC2D594: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D595: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:317 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D597: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:318 LDA [@VIRTUAL06]
    case 0xC2D599: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:319 AND #$00DF
    case 0xC2D59B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0009DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:320 ORA #$0010
    case 0xC2D59D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000010u : 0x008710u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:320 ORA #$0010
    // Overlapping static entry reached from 0xC2D59B.
    case 0xC2D59E: {
        Instruction step(cpu, 0x10, 0x000087u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:321 STA [@VIRTUAL06]
    case 0xC2D59F: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:321 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D59D.
    case 0xC2D5A0: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:322 REP #PROC_FLAGS::ACCUM8
    case 0xC2D5A1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:322 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D5A0.
    case 0xC2D5A2: {
        Instruction step(cpu, 0x20, 0x002EA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:323 LDA @LOCAL0A
    case 0xC2D5A3: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:324 INC
    case 0xC2D5A5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:325 INC
    case 0xC2D5A6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:326 STA @LOCAL0A
    case 0xC2D5A7: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:328 CMP #$0800
    case 0xC2D5A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:328 CMP #$0800
    // Overlapping static entry reached from 0xC2D5A9.
    case 0xC2D5AB: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:329 BCC @UNKNOWN12
    case 0xC2D5AC: {
        Instruction step(cpu, 0x90, 0x0000D6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5AE.
    case 0xC2D5B0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5B3.
    case 0xC2D5B5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5B8.
    case 0xC2D5BA: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5BB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5BB.
    case 0xC2D5BD: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5BE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5C2: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5C0.
    case 0xC2D5C3: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5C3.
    case 0xC2D5C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5C5.
    case 0xC2D5C7: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5C6.
    case 0xC2D5C8: {
        Instruction step(cpu, 0xDC, 0x000685u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5C9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5CB.
    case 0xC2D5CD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5CE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D2: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D6: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:334 LDA @LOCAL09
    case 0xC2D5D8: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:335 STA @VIRTUAL04
    case 0xC2D5DA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5DC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5DE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5E2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:337 TAX
    case 0xC2D5E4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:338 STX @LOCAL05
    case 0xC2D5E5: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:339 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D5E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x00AE4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:339 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D5E7.
    case 0xC2D5E9: {
        Instruction step(cpu, 0xAE, 0x000485u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:340 STA @VIRTUAL04
    case 0xC2D5EA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:341 TXA
    case 0xC2D5EC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:342 CLC
    case 0xC2D5ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:343 ADC @VIRTUAL06
    case 0xC2D5EE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:344 STA @VIRTUAL06
    case 0xC2D5F0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:345 STA @LOCAL00
    case 0xC2D5F2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:346 LDA @VIRTUAL06+2
    case 0xC2D5F4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:347 STA @LOCAL00+2
    case 0xC2D5F6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:348 LDA @VIRTUAL04
    case 0xC2D5F8: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:349 JSL UNKNOWN_C2CFE5
    case 0xC2D5FA: {
        Instruction step(cpu, 0x22, 0xC2CFE5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D5FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000097u : 0x00AE97u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D5FE.
    case 0xC2D600: {
        Instruction step(cpu, 0xAE, 0x000285u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:351 STA @VIRTUAL02
    case 0xC2D601: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D603: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000280u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D603.
    case 0xC2D605: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:353 LDX @VIRTUAL02
    case 0xC2D606: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:354 STA __BSS_START__,X
    case 0xC2D608: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:355 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D60B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:356 LDA #1
    case 0xC2D60D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:357 LDX @VIRTUAL04
    case 0xC2D60F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:357 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D60D.
    case 0xC2D610: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:358 STA __BSS_START__,X
    case 0xC2D611: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:358 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D610.
    case 0xC2D612: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D614: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000057u : 0x00AE57u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D614.
    case 0xC2D616: {
        Instruction step(cpu, 0xAE, 0x002C84u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:360 STY @LOCAL09
    case 0xC2D617: {
        Instruction step(cpu, 0x84, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:361 REP #PROC_FLAGS::ACCUM8
    case 0xC2D619: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D61B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D61B.
    case 0xC2D61D: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D61E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D620: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D620.
    case 0xC2D622: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D623: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:363 LDX @LOCAL05
    case 0xC2D625: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:364 TXA
    case 0xC2D627: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:365 INC
    case 0xC2D628: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D629: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D62B: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D62D: {
        Instruction step(cpu, 0xA6, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D62F: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:367 CLC
    case 0xC2D631: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:368 ADC @VIRTUAL06
    case 0xC2D632: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:369 STA @VIRTUAL06
    case 0xC2D634: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:370 STA @LOCAL02
    case 0xC2D636: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:371 LDA @VIRTUAL06+2
    case 0xC2D638: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:372 STA @LOCAL02+2
    case 0xC2D63A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:373 LDA [@VIRTUAL06]
    case 0xC2D63C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:374 AND #$00FF
    case 0xC2D63E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:374 AND #$00FF
    // Overlapping static entry reached from 0xC2D63E.
    case 0xC2D640: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:375 ASL
    case 0xC2D641: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:376 ASL
    case 0xC2D642: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D643: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D645: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D647: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D649: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:378 CLC
    case 0xC2D64B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:379 ADC @VIRTUAL06
    case 0xC2D64C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:380 STA @VIRTUAL06
    case 0xC2D64E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D650: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D650.
    case 0xC2D652: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D653: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D655: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D656: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D658: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D65A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D65C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D65E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D660: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D662: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:383 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D664: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:383 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D664.
    case 0xC2D666: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:384 LDY @LOCAL09
    case 0xC2D667: {
        Instruction step(cpu, 0xA4, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:385 TYA
    case 0xC2D669: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:386 JSL MEMCPY16
    case 0xC2D66A: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D66E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D670: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D672: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D674: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:388 LDA [@VIRTUAL06]
    case 0xC2D676: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:389 AND #$00FF
    case 0xC2D678: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:389 AND #$00FF
    // Overlapping static entry reached from 0xC2D678.
    case 0xC2D67A: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:390 ASL
    case 0xC2D67B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:391 ASL
    case 0xC2D67C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:392 CLC
    case 0xC2D67D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:393 ADC @VIRTUAL0A
    case 0xC2D67E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:394 STA @VIRTUAL0A
    case 0xC2D680: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D682: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D682.
    case 0xC2D684: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D685: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D687: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D688: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D68A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D68C: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D68E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D690: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D692: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D694: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:397 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D696: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:397 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D696.
    case 0xC2D698: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:398 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2D699: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000077u : 0x00AE77u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:398 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D699.
    case 0xC2D69B: {
        Instruction step(cpu, 0xAE, 0x00D222u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:399 JSL MEMCPY16
    case 0xC2D69C: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:399 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D69B.
    case 0xC2D69E: {
        Instruction step(cpu, 0x8E, 0x00A4C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:400 LDY @LOCAL09
    case 0xC2D6A0: {
        Instruction step(cpu, 0xA4, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:400 LDY @LOCAL09
    // Overlapping static entry reached from 0xC2D69E.
    case 0xC2D6A1: {
        Instruction step(cpu, 0x2C, 0x008598u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:401 TYA
    case 0xC2D6A2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D6A1.
    case 0xC2D6A4: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A5: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6AB: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:403 REP #PROC_FLAGS::ACCUM8
    case 0xC2D6AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6AF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6B1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6B3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6B5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:405 LDX #32
    case 0xC2D6B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:405 LDX #32
    // Overlapping static entry reached from 0xC2D6B7.
    case 0xC2D6B9: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:406 STX @LOCAL06
    case 0xC2D6BA: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:407 LDX @VIRTUAL02
    case 0xC2D6BC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:408 LDA __BSS_START__,X
    case 0xC2D6BE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:409 LDX @LOCAL06
    case 0xC2D6C1: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:410 JSL MEMCPY16
    case 0xC2D6C3: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:411 LDX #1
    case 0xC2D6C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:411 LDX #1
    // Overlapping static entry reached from 0xC2D6C7.
    case 0xC2D6C9: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:412 LDA @VIRTUAL04
    case 0xC2D6CA: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:413 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D6CC: {
        Instruction step(cpu, 0x22, 0xC2C92Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:414 LDA #$0215
    case 0xC2D6D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000215u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:414 LDA #$0215
    // Overlapping static entry reached from 0xC2D6D0.
    case 0xC2D6D2: {
        Instruction step(cpu, 0x02, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:415 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D6D3: {
        Instruction step(cpu, 0x8D, 0x00ADAEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:416 LDA #$0014
    case 0xC2D6D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:416 LDA #$0014
    // Overlapping static entry reached from 0xC2D6D6.
    case 0xC2D6D8: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:417 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D6D9: {
        Instruction step(cpu, 0x8D, 0x00ADB0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:418 JMP @UNKNOWN23
    case 0xC2D6DC: {
        Instruction step(cpu, 0x4C, 0x00DAB2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:420 LDA @VIRTUAL04
    case 0xC2D6DF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6E9: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6EB: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6ED: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6EF: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:423 CLC
    case 0xC2D6F1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:424 ADC @VIRTUAL06
    case 0xC2D6F2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:425 STA @VIRTUAL06
    case 0xC2D6F4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:426 STA @LOCAL00
    case 0xC2D6F6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:427 LDA @VIRTUAL06+2
    case 0xC2D6F8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:428 STA @LOCAL00+2
    case 0xC2D6FA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:429 LDX @LOCAL04
    case 0xC2D6FC: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:430 TXA
    case 0xC2D6FE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:431 JSL UNKNOWN_C2CFE5
    case 0xC2D6FF: {
        Instruction step(cpu, 0x22, 0xC2CFE5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:432 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D703: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:433 LDA #1
    case 0xC2D705: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:434 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    case 0xC2D707: {
        Instruction step(cpu, 0x8D, 0x00AE4Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:434 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    // Overlapping static entry reached from 0xC2D705.
    case 0xC2D708: {
        Instruction step(cpu, 0x4D, 0x00A9AEu, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:435 LDA #2
    case 0xC2D70A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x00A602u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:435 LDA #2
    // Overlapping static entry reached from 0xC2D708.
    case 0xC2D70B: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:436 LDX @LOCAL04
    case 0xC2D70C: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:436 LDX @LOCAL04
    // Overlapping static entry reached from 0xC2D70A.
    case 0xC2D70D: {
        Instruction step(cpu, 0x1E, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:437 STA __BSS_START__,X
    case 0xC2D70E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:437 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D70D.
    case 0xC2D710: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:438 JMP @UNKNOWN23
    case 0xC2D711: {
        Instruction step(cpu, 0x4C, 0x00DAB2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:441 LDA #8
    case 0xC2D714: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:441 LDA #8
    // Overlapping static entry reached from 0xC2D714.
    case 0xC2D716: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:442 JSL UNKNOWN_C08D79
    case 0xC2D717: {
        Instruction step(cpu, 0x22, 0xC08D79u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:443 LDY #$6000
    case 0xC2D71B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:443 LDY #$6000
    // Overlapping static entry reached from 0xC2D71B.
    case 0xC2D71D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:444 LDX #$7C00
    case 0xC2D71E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:444 LDX #$7C00
    // Overlapping static entry reached from 0xC2D71E.
    case 0xC2D720: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:445 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D721: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:445 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D721.
    case 0xC2D723: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:446 JSL SET_BG1_VRAM_LOCATION
    case 0xC2D724: {
        Instruction step(cpu, 0x22, 0xC08D9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:447 LDY #$0000
    case 0xC2D728: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:447 LDY #$0000
    // Overlapping static entry reached from 0xC2D728.
    case 0xC2D72A: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:448 LDX #$5800
    case 0xC2D72B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:448 LDX #$5800
    // Overlapping static entry reached from 0xC2D72B.
    case 0xC2D72D: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:449 TYA
    case 0xC2D72E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:450 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D72F: {
        Instruction step(cpu, 0x22, 0xC08DDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:451 LDY #$1000
    case 0xC2D733: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:451 LDY #$1000
    // Overlapping static entry reached from 0xC2D733.
    case 0xC2D735: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:452 LDX #$5C00
    case 0xC2D736: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:452 LDX #$5C00
    // Overlapping static entry reached from 0xC2D735.
    case 0xC2D737: {
        Instruction step(cpu, 0x00, 0x00005Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:452 LDX #$5C00
    // Overlapping static entry reached from 0xC2D736.
    case 0xC2D738: {
        Instruction step(cpu, 0x5C, 0x0000A9u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:453 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D739: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:453 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D739.
    case 0xC2D73B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:454 JSL SET_BG3_VRAM_LOCATION
    case 0xC2D73C: {
        Instruction step(cpu, 0x22, 0xC08E1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:455 LDY #$3000
    case 0xC2D740: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:455 LDY #$3000
    // Overlapping static entry reached from 0xC2D740.
    case 0xC2D742: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:456 LDX #$0C00
    case 0xC2D743: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:456 LDX #$0C00
    // Overlapping static entry reached from 0xC2D742.
    case 0xC2D744: {
        Instruction step(cpu, 0x00, 0x00000Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:456 LDX #$0C00
    // Overlapping static entry reached from 0xC2D743.
    case 0xC2D745: {
        Instruction step(cpu, 0x0C, 0x0000A9u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:457 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D746: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:457 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D746.
    case 0xC2D748: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:458 JSL SET_BG4_VRAM_LOCATION
    case 0xC2D749: {
        Instruction step(cpu, 0x22, 0xC08E5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:459 LDA #0
    case 0xC2D74D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:459 LDA #0
    // Overlapping static entry reached from 0xC2D74D.
    case 0xC2D74F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:460 STA @LOCAL0A
    case 0xC2D750: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:461 BRA @UNKNOWN17
    case 0xC2D752: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:463 STORE_INT1632 @VIRTUAL06
    case 0xC2D754: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:463 STORE_INT1632 @VIRTUAL06
    case 0xC2D756: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:464 CLC
    case 0xC2D758: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D759: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D75B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D75B.
    case 0xC2D75D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D75E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D760: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D762: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D762.
    case 0xC2D764: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D765: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:466 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D767: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:467 LDA [@VIRTUAL06]
    case 0xC2D769: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:468 AND #$00DF
    case 0xC2D76B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0087DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:469 STA [@VIRTUAL06]
    case 0xC2D76D: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:469 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D76B.
    case 0xC2D76E: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:470 REP #PROC_FLAGS::ACCUM8
    case 0xC2D76F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:470 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D76E.
    case 0xC2D770: {
        Instruction step(cpu, 0x20, 0x002EA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:471 LDA @LOCAL0A
    case 0xC2D771: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:472 INC
    case 0xC2D773: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:473 INC
    case 0xC2D774: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:474 STA @LOCAL0A
    case 0xC2D775: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:476 CMP #$0800
    case 0xC2D777: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:476 CMP #$0800
    // Overlapping static entry reached from 0xC2D777.
    case 0xC2D779: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:477 BCC @UNKNOWN16
    case 0xC2D77A: {
        Instruction step(cpu, 0x90, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D77C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D77C.
    case 0xC2D77E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D77F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D781: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D781.
    case 0xC2D783: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D784: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D786: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D788: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D78A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D78C: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D78E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D790: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D792: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D794: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D796: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D796.
    case 0xC2D798: {
        Instruction step(cpu, 0x5C, 0x0800A2u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D799: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D799.
    case 0xC2D79B: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D79C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D79E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D7A0: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D79E.
    case 0xC2D7A1: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D7A1.
    case 0xC2D7A3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    // Overlapping static entry reached from 0xC2D7A3.
    case 0xC2D7A5: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    // Overlapping static entry reached from 0xC2D7A4.
    case 0xC2D7A6: {
        Instruction step(cpu, 0xDC, 0x002885u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7A7: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    // Overlapping static entry reached from 0xC2D7A9.
    case 0xC2D7AB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7AC: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:483 LDA @VIRTUAL02
    case 0xC2D7AE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:485 TAX
    case 0xC2D7B8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:486 STX @LOCAL05
    case 0xC2D7B9: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7BB: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7BD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7BF: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7C1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:488 TXA
    case 0xC2D7C3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:489 CLC
    case 0xC2D7C4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:490 ADC @VIRTUAL06
    case 0xC2D7C5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:491 STA @VIRTUAL06
    case 0xC2D7C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:492 STA @LOCAL00
    case 0xC2D7C9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:493 LDA @VIRTUAL06+2
    case 0xC2D7CB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:494 STA @LOCAL00+2
    case 0xC2D7CD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:495 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D7CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D4u : 0x00ADD4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:495 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D7CF.
    case 0xC2D7D1: {
        Instruction step(cpu, 0xAD, 0x00E522u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:496 JSL UNKNOWN_C2CFE5
    case 0xC2D7D2: {
        Instruction step(cpu, 0x22, 0xC2CFE5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:496 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D7D1.
    case 0xC2D7D4: {
        Instruction step(cpu, 0xCF, 0x20A9C2u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:497 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D7D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x00AE20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:497 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D7D6.
    case 0xC2D7D8: {
        Instruction step(cpu, 0xAE, 0x000285u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:498 STA @VIRTUAL02
    case 0xC2D7D9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:499 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D7DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000280u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:499 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D7DB.
    case 0xC2D7DD: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:500 LDX @VIRTUAL02
    case 0xC2D7DE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:501 STA __BSS_START__,X
    case 0xC2D7E0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:502 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D7E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000E0u : 0x00ADE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:502 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D7E3.
    case 0xC2D7E5: {
        Instruction step(cpu, 0xAD, 0x001E84u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:503 STY @LOCAL04
    case 0xC2D7E6: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D7E8.
    case 0xC2D7EA: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7EB: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D7ED.
    case 0xC2D7EF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7F0: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F2: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F6: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:506 LDX @LOCAL05
    case 0xC2D7FA: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:507 TXA
    case 0xC2D7FC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:508 INC
    case 0xC2D7FD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:509 CLC
    case 0xC2D7FE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:510 ADC @VIRTUAL0A
    case 0xC2D7FF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:511 STA @VIRTUAL0A
    case 0xC2D801: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D803: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D805: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D807: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D809: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:513 LDA [@VIRTUAL0A]
    case 0xC2D80B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:514 AND #$00FF
    case 0xC2D80D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:514 AND #$00FF
    // Overlapping static entry reached from 0xC2D80D.
    case 0xC2D80F: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:515 ASL
    case 0xC2D810: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:516 ASL
    case 0xC2D811: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:517 CLC
    case 0xC2D812: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:518 ADC @VIRTUAL06
    case 0xC2D813: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:519 STA @VIRTUAL06
    case 0xC2D815: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D817: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D817.
    case 0xC2D819: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81A: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D821: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D823: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D825: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D827: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D829: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:522 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D82B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:522 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D82B.
    case 0xC2D82D: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:523 LDY @LOCAL04
    case 0xC2D82E: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:524 TYA
    case 0xC2D830: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:525 JSL MEMCPY16
    case 0xC2D831: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:526 LDA [@VIRTUAL0A]
    case 0xC2D835: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:527 AND #$00FF
    case 0xC2D837: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC2D837.
    case 0xC2D839: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:528 ASL
    case 0xC2D83A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:529 ASL
    case 0xC2D83B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:530 PHA
    case 0xC2D83C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D83D: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D83F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D841: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D843: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:532 PLA
    case 0xC2D845: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:533 CLC
    case 0xC2D846: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:534 ADC @VIRTUAL0A
    case 0xC2D847: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:535 STA @VIRTUAL0A
    case 0xC2D849: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D84B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D84B.
    case 0xC2D84D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D84E: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D850: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D851: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D853: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D855: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D857: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D859: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D85B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D85D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:538 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D85F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:538 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D85F.
    case 0xC2D861: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:539 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D862: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00AE00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:539 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D862.
    case 0xC2D864: {
        Instruction step(cpu, 0xAE, 0x00D222u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:540 JSL MEMCPY16
    case 0xC2D865: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:540 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D864.
    case 0xC2D867: {
        Instruction step(cpu, 0x8E, 0x00A4C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:541 LDY @LOCAL04
    case 0xC2D869: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:541 LDY @LOCAL04
    // Overlapping static entry reached from 0xC2D867.
    case 0xC2D86A: {
        Instruction step(cpu, 0x1E, 0x008598u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:542 TYA
    case 0xC2D86B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D86C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D86A.
    case 0xC2D86D: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D86E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D86F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D871: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D872: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D874: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:544 REP #PROC_FLAGS::ACCUM8
    case 0xC2D876: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D878: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D87A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D87C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D87E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:546 LDX #32
    case 0xC2D880: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:546 LDX #32
    // Overlapping static entry reached from 0xC2D880.
    case 0xC2D882: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:547 STX @LOCAL05
    case 0xC2D883: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:548 LDX @VIRTUAL02
    case 0xC2D885: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:549 LDA __BSS_START__,X
    case 0xC2D887: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:550 LDX @LOCAL05
    case 0xC2D88A: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:551 JSL MEMCPY16
    case 0xC2D88C: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:552 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D890: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:553 LDA #3
    case 0xC2D892: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008D03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:554 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    case 0xC2D894: {
        Instruction step(cpu, 0x8D, 0x00ADD4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:554 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    // Overlapping static entry reached from 0xC2D892.
    case 0xC2D895: {
        Instruction step(cpu, 0xD4, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:555 REP #PROC_FLAGS::ACCUM8
    case 0xC2D897: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:556 LDA @LOCAL09
    case 0xC2D899: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:557 STA @VIRTUAL04
    case 0xC2D89B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg.asm:558 BEQL @UNKNOWN21
    case 0xC2D89D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:558 BEQL @UNKNOWN21
    case 0xC2D89F: {
        Instruction step(cpu, 0x4C, 0x00DA9Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:559 LDA #3
    case 0xC2D8A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:559 LDA #3
    // Overlapping static entry reached from 0xC2D8A2.
    case 0xC2D8A4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:560 STA CURRENT_LAYER_CONFIG
    case 0xC2D8A5: {
        Instruction step(cpu, 0x8D, 0x00AD8Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:561 JSL UNKNOWN_C0AFCD
    case 0xC2D8A8: {
        Instruction step(cpu, 0x22, 0xC0AFCDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8AC: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8AE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D90B.
    case 0xC2D8AF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8B0: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8B2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:563 LDA @VIRTUAL04
    case 0xC2D8B4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8B6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8B8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8B9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8BA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8BC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:565 CLC
    case 0xC2D8BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:566 ADC @VIRTUAL0A
    case 0xC2D8BF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:567 STA @VIRTUAL0A
    case 0xC2D8C1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00D7A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C3.
    case 0xC2D8C5: {
        Instruction step(cpu, 0xD7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8C6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C5.
    case 0xC2D8C7: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C7.
    case 0xC2D8C9: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C8.
    case 0xC2D8CA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8CB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:569 LDA [@VIRTUAL0A]
    case 0xC2D8CD: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:570 AND #$00FF
    case 0xC2D8CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:570 AND #$00FF
    // Overlapping static entry reached from 0xC2D8CF.
    case 0xC2D8D1: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg.asm:571 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D8D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg.asm:571 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D8D3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:572 CLC
    case 0xC2D8D4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:573 ADC @VIRTUAL06
    case 0xC2D8D5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:574 STA @VIRTUAL06
    case 0xC2D8D7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8D9.
    case 0xC2D8DB: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8DC: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8DE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8DF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8E1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8E3: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8E5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8E7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8E9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8EB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8ED: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8EF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8F1: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8F3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8F5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8F7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8F9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8FB: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:579 JSL DECOMP
    case 0xC2D8FD: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D901: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D903: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D905: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D907: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D909: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D909.
    case 0xC2D90B: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D90C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D90B.
    case 0xC2D90D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D90C.
    case 0xC2D90E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D90F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D911: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D913: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D911.
    case 0xC2D914: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D914.
    case 0xC2D916: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A7u : 0x000AA7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:582 LDA [@VIRTUAL0A]
    case 0xC2D917: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:582 LDA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC2D916.
    case 0xC2D918: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:583 AND #$00FF
    case 0xC2D919: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:583 AND #$00FF
    // Overlapping static entry reached from 0xC2D919.
    case 0xC2D91B: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:584 ASL
    case 0xC2D91C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:585 ASL
    case 0xC2D91D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:586 PHA
    case 0xC2D91E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D91F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00D93Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D91F.
    case 0xC2D921: {
        Instruction step(cpu, 0xD9, 0x000A85u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D922: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D924: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D924.
    case 0xC2D926: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D927: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:588 PLA
    case 0xC2D929: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:589 CLC
    case 0xC2D92A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:590 ADC @VIRTUAL0A
    case 0xC2D92B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:591 STA @VIRTUAL0A
    case 0xC2D92D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D92F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D92F.
    case 0xC2D931: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D932: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D934: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D935: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D937: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D939: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D93B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D93D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D93F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D941: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D943: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D945: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D947: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D949: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D94B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D94D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D94F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D951: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:596 JSL DECOMP
    case 0xC2D953: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:597 LDA #0
    case 0xC2D957: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:597 LDA #0
    // Overlapping static entry reached from 0xC2D957.
    case 0xC2D959: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:598 STA @LOCAL0A
    case 0xC2D95A: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:599 BRA @UNKNOWN20
    case 0xC2D95C: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:601 STORE_INT1632 @VIRTUAL06
    case 0xC2D95E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:601 STORE_INT1632 @VIRTUAL06
    case 0xC2D960: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:602 CLC
    case 0xC2D962: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D963: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D965: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D965.
    case 0xC2D967: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D968: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D96A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D96C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D96C.
    case 0xC2D96E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D96F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:604 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D971: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:605 LDA [@VIRTUAL06]
    case 0xC2D973: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:606 AND #$00DF
    case 0xC2D975: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000DFu : 0x0087DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:607 STA [@VIRTUAL06]
    case 0xC2D977: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:607 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D975.
    case 0xC2D978: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:608 REP #PROC_FLAGS::ACCUM8
    case 0xC2D979: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:608 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D978.
    case 0xC2D97A: {
        Instruction step(cpu, 0x20, 0x002EA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:609 LDA @LOCAL0A
    case 0xC2D97B: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:610 INC
    case 0xC2D97D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:611 INC
    case 0xC2D97E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:612 STA @LOCAL0A
    case 0xC2D97F: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:614 CMP #$0800
    case 0xC2D981: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:614 CMP #$0800
    // Overlapping static entry reached from 0xC2D981.
    case 0xC2D983: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:615 BCC @UNKNOWN19
    case 0xC2D984: {
        Instruction step(cpu, 0x90, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D986: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D986.
    case 0xC2D988: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D989: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D98B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D98B.
    case 0xC2D98D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D98E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D990: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D990.
    case 0xC2D992: {
        Instruction step(cpu, 0x0C, 0x0000A2u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D993: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D993.
    case 0xC2D995: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D996: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D998: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D99A: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D998.
    case 0xC2D99B: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D99B.
    case 0xC2D99D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D99E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x00DCA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D99D.
    case 0xC2D99F: {
        Instruction step(cpu, 0xA1, 0x0000DCu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D99E.
    case 0xC2D9A0: {
        Instruction step(cpu, 0xDC, 0x000685u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D9A1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D9A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D9A3.
    case 0xC2D9A5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D9A6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9A8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9AA: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9AC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9AE: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:620 LDA @LOCAL09
    case 0xC2D9B0: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:621 STA @VIRTUAL04
    case 0xC2D9B2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9BA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:623 TAX
    case 0xC2D9BC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:624 STX @LOCAL05
    case 0xC2D9BD: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:625 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D9BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x00AE4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:625 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D9BF.
    case 0xC2D9C1: {
        Instruction step(cpu, 0xAE, 0x000485u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:626 STA @VIRTUAL04
    case 0xC2D9C2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:627 TXA
    case 0xC2D9C4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:628 CLC
    case 0xC2D9C5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:629 ADC @VIRTUAL06
    case 0xC2D9C6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:630 STA @VIRTUAL06
    case 0xC2D9C8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:631 STA @LOCAL00
    case 0xC2D9CA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:632 LDA @VIRTUAL06+2
    case 0xC2D9CC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:633 STA @LOCAL00+2
    case 0xC2D9CE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:634 LDA @VIRTUAL04
    case 0xC2D9D0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:635 JSL UNKNOWN_C2CFE5
    case 0xC2D9D2: {
        Instruction step(cpu, 0x22, 0xC2CFE5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D9D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000097u : 0x00AE97u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D9D6.
    case 0xC2D9D8: {
        Instruction step(cpu, 0xAE, 0x000285u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:637 STA @VIRTUAL02
    case 0xC2D9D9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:638 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    case 0xC2D9DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0002C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:638 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2D9DB.
    case 0xC2D9DD: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:639 LDX @VIRTUAL02
    case 0xC2D9DE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:640 STA __BSS_START__,X
    case 0xC2D9E0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:641 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D9E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000057u : 0x00AE57u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:641 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D9E3.
    case 0xC2D9E5: {
        Instruction step(cpu, 0xAE, 0x002C84u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:642 STY @LOCAL09
    case 0xC2D9E6: {
        Instruction step(cpu, 0x84, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00DAD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D9E8.
    case 0xC2D9EA: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9EB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D9ED.
    case 0xC2D9EF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9F0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:644 LDX @LOCAL05
    case 0xC2D9F2: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:645 TXA
    case 0xC2D9F4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:646 INC
    case 0xC2D9F5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9F6: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9F8: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9FA: {
        Instruction step(cpu, 0xA6, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9FC: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:648 CLC
    case 0xC2D9FE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:649 ADC @VIRTUAL06
    case 0xC2D9FF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:650 STA @VIRTUAL06
    case 0xC2DA01: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:651 STA @LOCAL02
    case 0xC2DA03: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:652 LDA @VIRTUAL06+2
    case 0xC2DA05: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:653 STA @LOCAL02+2
    case 0xC2DA07: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:654 LDA [@VIRTUAL06]
    case 0xC2DA09: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:655 AND #$00FF
    case 0xC2DA0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:655 AND #$00FF
    // Overlapping static entry reached from 0xC2DA0B.
    case 0xC2DA0D: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:656 ASL
    case 0xC2DA0E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:657 ASL
    case 0xC2DA0F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA10: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA12: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA14: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA16: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:659 CLC
    case 0xC2DA18: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:660 ADC @VIRTUAL06
    case 0xC2DA19: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:661 STA @VIRTUAL06
    case 0xC2DA1B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA1D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DA1D.
    case 0xC2DA1F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA20: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA22: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA23: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA25: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA27: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA29: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA2B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA2D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA2F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:664 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DA31: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:664 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DA31.
    case 0xC2DA33: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:665 LDY @LOCAL09
    case 0xC2DA34: {
        Instruction step(cpu, 0xA4, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:666 TYA
    case 0xC2DA36: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:667 JSL MEMCPY16
    case 0xC2DA37: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA3B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA3D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA3F: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA41: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:669 LDA [@VIRTUAL06]
    case 0xC2DA43: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:670 AND #$00FF
    case 0xC2DA45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:670 AND #$00FF
    // Overlapping static entry reached from 0xC2DA45.
    case 0xC2DA47: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:671 ASL
    case 0xC2DA48: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:672 ASL
    case 0xC2DA49: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:673 CLC
    case 0xC2DA4A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:674 ADC @VIRTUAL0A
    case 0xC2DA4B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:675 STA @VIRTUAL0A
    case 0xC2DA4D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA4F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DA4F.
    case 0xC2DA51: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA52: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA54: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA55: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA57: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA59: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA5B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA5D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA5F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA61: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:678 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2DA63: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:678 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2DA63.
    case 0xC2DA65: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:679 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2DA66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000077u : 0x00AE77u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:679 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2DA66.
    case 0xC2DA68: {
        Instruction step(cpu, 0xAE, 0x00D222u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:680 JSL MEMCPY16
    case 0xC2DA69: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:680 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DA68.
    case 0xC2DA6B: {
        Instruction step(cpu, 0x8E, 0x00A4C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:681 LDY @LOCAL09
    case 0xC2DA6D: {
        Instruction step(cpu, 0xA4, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:681 LDY @LOCAL09
    // Overlapping static entry reached from 0xC2DA6B.
    case 0xC2DA6E: {
        Instruction step(cpu, 0x2C, 0x008598u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:682 TYA
    case 0xC2DA6F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA70: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2DA6E.
    case 0xC2DA71: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA72: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA73: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA75: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA76: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA78: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:684 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA7A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA7C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA7E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA80: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA82: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:686 LDX #32
    case 0xC2DA84: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:686 LDX #32
    // Overlapping static entry reached from 0xC2DA84.
    case 0xC2DA86: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:687 STX @LOCAL05
    case 0xC2DA87: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:688 LDX @VIRTUAL02
    case 0xC2DA89: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:689 LDA __BSS_START__,X
    case 0xC2DA8B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:690 LDX @LOCAL05
    case 0xC2DA8E: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:691 JSL MEMCPY16
    case 0xC2DA90: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:692 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA94: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:693 LDA #4
    case 0xC2DA96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x00A604u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:694 LDX @VIRTUAL04
    case 0xC2DA98: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:694 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2DA96.
    case 0xC2DA99: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:695 STA __BSS_START__,X
    case 0xC2DA9A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:695 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2DA99.
    case 0xC2DA9B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:696 BRA @UNKNOWN22
    case 0xC2DA9D: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:698 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA9F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:699 STZ LOADED_BG_DATA_LAYER2 + loaded_bg_data::target_layer
    case 0xC2DAA1: {
        Instruction step(cpu, 0x9C, 0x00AE4Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC2DAA4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:702 LDA #$0817
    case 0xC2DAA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000817u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:702 LDA #$0817
    // Overlapping static entry reached from 0xC2DAA6.
    case 0xC2DAA8: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:703 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2DAA9: {
        Instruction step(cpu, 0x8D, 0x00ADAEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:704 LDA #$0013
    case 0xC2DAAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:704 LDA #$0013
    // Overlapping static entry reached from 0xC2DAAC.
    case 0xC2DAAE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:705 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2DAAF: {
        Instruction step(cpu, 0x8D, 0x00ADB0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:707 REP #PROC_FLAGS::ACCUM8
    case 0xC2DAB2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:708 STZ DISTORT_30FPS
    case 0xC2DAB4: {
        Instruction step(cpu, 0x9C, 0x00ADACu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:709 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DAB7: {
        Instruction step(cpu, 0xAD, 0x00AE4Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:710 AND #$00FF
    case 0xC2DABA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:710 AND #$00FF
    // Overlapping static entry reached from 0xC2DABA.
    case 0xC2DABC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:711 BEQ @UNKNOWN24
    case 0xC2DABD: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:712 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::distortion_styles
    case 0xC2DABF: {
        Instruction step(cpu, 0xAD, 0x00AEACu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:713 AND #$00FF
    case 0xC2DAC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:713 AND #$00FF
    // Overlapping static entry reached from 0xC2DAC2.
    case 0xC2DAC4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:714 BEQ @UNKNOWN24
    case 0xC2DAC5: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:715 LDA #1
    case 0xC2DAC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:715 LDA #1
    // Overlapping static entry reached from 0xC2DAC7.
    case 0xC2DAC9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:716 STA DISTORT_30FPS
    case 0xC2DACA: {
        Instruction step(cpu, 0x8D, 0x00ADACu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:718 JSL UNKNOWN_C2D0AC
    case 0xC2DACD: {
        Instruction step(cpu, 0x22, 0xC2D0ACu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:719 LDA LETTERBOX_TOP_END
    case 0xC2DAD1: {
        Instruction step(cpu, 0xAD, 0x00ADB2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:720 BEQ @UNKNOWN25
    case 0xC2DAD4: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:721 LDA #2
    case 0xC2DAD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:721 LDA #2
    // Overlapping static entry reached from 0xC2DAD6.
    case 0xC2DAD8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:722 JSL UNKNOWN_C429E8
    case 0xC2DAD9: {
        Instruction step(cpu, 0x22, 0xC429E8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg.asm:724 JSL UNKNOWN_C2E9ED
    case 0xC2DADD: {
        Instruction step(cpu, 0x22, 0xC2E9EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_battlebg.asm:725 END_C_FUNCTION
    case 0xC2DAE1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/load_battlebg.asm:725 END_C_FUNCTION
    case 0xC2DAE2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
