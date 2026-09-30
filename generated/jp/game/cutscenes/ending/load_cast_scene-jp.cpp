// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/load_cast_scene-jp.asm
bool resume_ending_load_cast_scene_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/load_cast_scene-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B5B6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5B8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5B9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B5BA.
    case 0xC4B5BC: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5BD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B5BE.
    case 0xC4B5C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5C1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B5C3.
    case 0xC4B5C5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5C6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:11 LDY #0
    case 0xC4B5C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:11 LDY #0
    // Overlapping static entry reached from 0xC4B5C8.
    case 0xC4B5CA: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:12 LDX #1
    case 0xC4B5CB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4B5CB.
    case 0xC4B5CD: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:13 TXA
    case 0xC4B5CE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:14 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4B5CF: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:15 JSL UNKNOWN_C08726
    case 0xC4B5D3: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:16 JSL UNKNOWN_C021E6
    case 0xC4B5D7: {
        Instruction step(cpu, 0x22, 0xC021F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:17 LDA #0
    case 0xC4B5DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:17 LDA #0
    // Overlapping static entry reached from 0xC4B5DB.
    case 0xC4B5DD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:18 STA @LOCAL03
    case 0xC4B5DE: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:19 BRA @UNKNOWN3
    case 0xC4B5E0: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:21 ASL
    case 0xC4B5E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:22 TAX
    case 0xC4B5E3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:23 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4B5E4: {
        Instruction step(cpu, 0xBD, 0x000A58u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:24 CMP #.LOWORD(-1)
    case 0xC4B5E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B5E7.
    case 0xC4B5E9: {
        Instruction step(cpu, 0xFF, 0x8A0FF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:25 BEQ @UNKNOWN2
    case 0xC4B5EA: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:26 TXA
    case 0xC4B5EC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:27 CLC
    case 0xC4B5ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4B5EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x001160u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4B5EE.
    case 0xC4B5F0: {
        Instruction step(cpu, 0x11, 0x0000AAu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:29 TAX
    case 0xC4B5F1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:30 LDA __BSS_START__,X
    case 0xC4B5F2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:31 ORA #$8000
    case 0xC4B5F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:31 ORA #$8000
    // Overlapping static entry reached from 0xC4B5F5.
    case 0xC4B5F7: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:32 STA __BSS_START__,X
    case 0xC4B5F8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:34 LDA @LOCAL03
    case 0xC4B5FB: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:35 INC
    case 0xC4B5FD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:36 STA @LOCAL03
    case 0xC4B5FE: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:38 CMP #MAX_ENTITIES
    case 0xC4B600: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:38 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4B600.
    case 0xC4B602: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:39 BCC @UNKNOWN1
    case 0xC4B603: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:40 LDX #BATTLEBG_LAYER::NONE
    case 0xC4B605: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:40 LDX #BATTLEBG_LAYER::NONE
    // Overlapping static entry reached from 0xC4B605.
    case 0xC4B607: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    case 0xC4B608: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000117u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    // Overlapping static entry reached from 0xC4B608.
    case 0xC4B60A: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC4B60B: {
        Instruction step(cpu, 0x22, 0xC450F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    // Overlapping static entry reached from 0xC4B60A.
    case 0xC4B60C: {
        Instruction step(cpu, 0xF4, 0x00C450u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:43 LDY #VRAM::CAST_TILES
    case 0xC4B60F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:43 LDY #VRAM::CAST_TILES
    // Overlapping static entry reached from 0xC4B60F.
    case 0xC4B611: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:44 LDX #VRAM::CAST_TILEMAP
    case 0xC4B612: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:44 LDX #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4B612.
    case 0xC4B614: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:45 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4B615: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:45 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4B615.
    case 0xC4B617: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:46 JSL SET_BG3_VRAM_LOCATION
    case 0xC4B618: {
        Instruction step(cpu, 0x22, 0xC08E0Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:47 LDA #$62
    case 0xC4B61C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:47 LDA #$62
    // Overlapping static entry reached from 0xC4B61C.
    case 0xC4B61E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:48 JSL SET_OAM_SIZE
    case 0xC4B61F: {
        Instruction step(cpu, 0x22, 0xC08D83u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:49 STZ BG3_X_POS
    case 0xC4B623: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:50 STZ BG3_Y_POS
    case 0xC4B626: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:51 STZ BG2_Y_POS
    case 0xC4B629: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:52 STZ BG2_X_POS
    case 0xC4B62C: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:53 STZ BG1_Y_POS
    case 0xC4B62F: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:54 STZ BG1_X_POS
    case 0xC4B632: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:55 JSL UPDATE_SCREEN
    case 0xC4B635: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:56 LDA #0
    case 0xC4B639: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:56 LDA #0
    // Overlapping static entry reached from 0xC4B639.
    case 0xC4B63B: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:57 STA [@VIRTUAL06]
    case 0xC4B63C: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B63E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B640: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B642: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B644: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B646: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B646.
    case 0xC4B648: {
        Instruction step(cpu, 0x7C, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B649: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B649.
    case 0xC4B64B: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B64C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B64E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B650: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B64E.
    case 0xC4B651: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B651.
    case 0xC4B653: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B654: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B653.
    case 0xC4B655: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B654.
    case 0xC4B656: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B657: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B659: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B659.
    case 0xC4B65B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B65C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B65E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B65E.
    case 0xC4B660: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B661: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B663: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B663.
    case 0xC4B665: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B666: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B668: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B66A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B66C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B66E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:63 JSL DECOMP
    case 0xC4B670: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B674: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Cu : 0x00D18Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B674.
    case 0xC4B676: {
        Instruction step(cpu, 0xD1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B677: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B676.
    case 0xC4B678: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B679: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B679.
    case 0xC4B67B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B67C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B67E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4B67E.
    case 0xC4B680: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B681: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B683: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4B683.
    case 0xC4B685: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B686: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:67 JSL DECOMP
    case 0xC4B688: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B68C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B68E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B690: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B692: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B694: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B694.
    case 0xC4B696: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B697: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B697.
    case 0xC4B699: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B69A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B69C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B69E: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B69C.
    case 0xC4B69F: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B69F.
    case 0xC4B6A1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x001A22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:69 JSL UNKNOWN_C47F87
    case 0xC4B6A2: {
        Instruction step(cpu, 0x22, 0xC45C1Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:69 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4B6A1.
    case 0xC4B6A3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:69 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4B6A1.
    case 0xC4B6A4: {
        Instruction step(cpu, 0x5C, 0x6AA9C4u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Au : 0x00D26Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4B6A6.
    case 0xC4B6A8: {
        Instruction step(cpu, 0xD2, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6A9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4B6A8.
    case 0xC4B6AA: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4B6AB.
    case 0xC4B6AD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6AE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:72 LDX #BPP2PALETTE_SIZE * 4
    case 0xC4B6B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:72 LDX #BPP2PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC4B6B0.
    case 0xC4B6B2: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:73 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 1
    case 0xC4B6B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:73 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4B6B3.
    case 0xC4B6B5: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:74 JSL MEMCPY16
    case 0xC4B6B6: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B6BA.
    case 0xC4B6BC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6BD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B6BF.
    case 0xC4B6C1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6C2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:76 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4B6C4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:76 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B6C4.
    case 0xC4B6C6: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:77 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4B6C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:77 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B6C6.
    case 0xC4B6C8: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:77 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B6C7.
    case 0xC4B6C9: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:78 JSL MEMCPY16
    case 0xC4B6CA: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:78 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B6C9.
    case 0xC4B6CB: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:78 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B6CB.
    case 0xC4B6CD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x008AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Au : 0x00D28Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6CD.
    case 0xC4B6CF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6CE.
    case 0xC4B6D0: {
        Instruction step(cpu, 0xD2, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6D1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6D0.
    case 0xC4B6D2: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6D3.
    case 0xC4B6D5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6D6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6D8.
    case 0xC4B6DA: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6DB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6DA.
    case 0xC4B6DC: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6DC.
    case 0xC4B6DE: {
        Instruction step(cpu, 0x7F, 0x148500u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6DD.
    case 0xC4B6DF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6E0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:81 JSL DECOMP
    case 0xC4B6E2: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:82 STZ PALETTES + 6
    case 0xC4B6E6: {
        Instruction step(cpu, 0x9C, 0x000206u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:83 STZ PALETTES
    case 0xC4B6E9: {
        Instruction step(cpu, 0x9C, 0x000200u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:84 LDY #.LOWORD(PALETTES) + 2
    case 0xC4B6EC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000202u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:84 LDY #.LOWORD(PALETTES) + 2
    // Overlapping static entry reached from 0xC4B6EC.
    case 0xC4B6EE: {
        Instruction step(cpu, 0x02, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:85 LDA __BSS_START__,Y
    case 0xC4B6EF: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:86 STA @LOCAL02
    case 0xC4B6F2: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:87 LDX #.LOWORD(PALETTES) + 4
    case 0xC4B6F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000204u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:87 LDX #.LOWORD(PALETTES) + 4
    // Overlapping static entry reached from 0xC4B6F4.
    case 0xC4B6F6: {
        Instruction step(cpu, 0x02, 0x0000BDu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:88 LDA __BSS_START__,X
    case 0xC4B6F7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:89 STA __BSS_START__,Y
    case 0xC4B6FA: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:90 LDA @LOCAL02
    case 0xC4B6FD: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:91 STA __BSS_START__,X
    case 0xC4B6FF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B702: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:93 LDA #PALETTE_UPLOAD::FULL
    case 0xC4B704: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:94 STA PALETTE_UPLOAD_MODE
    case 0xC4B706: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:94 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4B704.
    case 0xC4B707: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:95 LDA #$14
    case 0xC4B709: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x008D14u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:96 STA TM_MIRROR
    case 0xC4B70B: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:96 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B709.
    case 0xC4B70C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:96 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B70C.
    case 0xC4B70D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:97 LDA #$16
    case 0xC4B70E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x008D16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:98 STA TM_MIRROR
    case 0xC4B710: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:98 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B70E.
    case 0xC4B711: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:98 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B711.
    case 0xC4B712: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC4B713: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:100 STZ UNKNOWN_7EB4CF
    case 0xC4B715: {
        Instruction step(cpu, 0x9C, 0x00B6A2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:101 STZ CAST_TILE_OFFSET
    case 0xC4B718: {
        Instruction step(cpu, 0x9C, 0x00B6A4u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene-jp.asm:102 JSL UNKNOWN_C08744
    case 0xC4B71B: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/load_cast_scene-jp.asm:103 END_C_FUNCTION
    case 0xC4B71F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/load_cast_scene-jp.asm:103 END_C_FUNCTION
    case 0xC4B720: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
