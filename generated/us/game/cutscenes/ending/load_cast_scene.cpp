// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/load_cast_scene.asm
bool resume_ending_load_cast_scene(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/load_cast_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E369: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E36B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E36C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E36D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E36D.
    case 0xC4E36F: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E370: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E371: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E371.
    case 0xC4E373: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E374: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E376: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E376.
    case 0xC4E378: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E379: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:10 STZ ITEM_TRANSFORMATIONS_LOADED
    case 0xC4E37B: {
        Instruction step(cpu, 0x9C, 0x009F2Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:11 LDY #0
    case 0xC4E37E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:11 LDY #0
    // Overlapping static entry reached from 0xC4E37E.
    case 0xC4E380: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:12 LDX #1
    case 0xC4E381: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4E381.
    case 0xC4E383: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:13 TXA
    case 0xC4E384: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:14 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4E385: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:15 JSL UNKNOWN_C08726
    case 0xC4E389: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:16 JSL UNKNOWN_C021E6
    case 0xC4E38D: {
        Instruction step(cpu, 0x22, 0xC021E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:17 LDA #0
    case 0xC4E391: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:17 LDA #0
    // Overlapping static entry reached from 0xC4E391.
    case 0xC4E393: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:18 STA @LOCAL02
    case 0xC4E394: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:19 BRA @UNKNOWN2
    case 0xC4E396: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:21 ASL
    case 0xC4E398: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:22 TAX
    case 0xC4E399: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:23 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4E39A: {
        Instruction step(cpu, 0xBD, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:24 CMP #.LOWORD(-1)
    case 0xC4E39D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4E39D.
    case 0xC4E39F: {
        Instruction step(cpu, 0xFF, 0x8A0FF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:25 BEQ @UNKNOWN1
    case 0xC4E3A0: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:26 TXA
    case 0xC4E3A2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:27 CLC
    case 0xC4E3A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4E3A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Au : 0x00116Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4E3A4.
    case 0xC4E3A6: {
        Instruction step(cpu, 0x11, 0x0000AAu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:29 TAX
    case 0xC4E3A7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:30 LDA __BSS_START__,X
    case 0xC4E3A8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:31 ORA #$8000
    case 0xC4E3AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:31 ORA #$8000
    // Overlapping static entry reached from 0xC4E3AB.
    case 0xC4E3AD: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:32 STA __BSS_START__,X
    case 0xC4E3AE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:34 LDA @LOCAL02
    case 0xC4E3B1: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:35 INC
    case 0xC4E3B3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:36 STA @LOCAL02
    case 0xC4E3B4: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:38 CMP #MAX_ENTITIES
    case 0xC4E3B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:38 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4E3B6.
    case 0xC4E3B8: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:39 BCC @UNKNOWN0
    case 0xC4E3B9: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:40 LDX #BATTLEBG_LAYER::NONE
    case 0xC4E3BB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:40 LDX #BATTLEBG_LAYER::NONE
    // Overlapping static entry reached from 0xC4E3BB.
    case 0xC4E3BD: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    case 0xC4E3BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000117u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    // Overlapping static entry reached from 0xC4E3BE.
    case 0xC4E3C0: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC4E3C1: {
        Instruction step(cpu, 0x22, 0xC47370u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    // Overlapping static entry reached from 0xC4E3C0.
    case 0xC4E3C2: {
        Instruction step(cpu, 0x70, 0x000073u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    // Overlapping static entry reached from 0xC4E3C2.
    case 0xC4E3C4: {
        Instruction step(cpu, 0xC4, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:43 LDY #VRAM::CAST_TILES
    case 0xC4E3C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:43 LDY #VRAM::CAST_TILES
    // Overlapping static entry reached from 0xC4E3C4.
    case 0xC4E3C6: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:43 LDY #VRAM::CAST_TILES
    // Overlapping static entry reached from 0xC4E3C5.
    case 0xC4E3C7: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:44 LDX #VRAM::CAST_TILEMAP
    case 0xC4E3C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:44 LDX #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4E3C8.
    case 0xC4E3CA: {
        Instruction step(cpu, 0x7C, 0x002298u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:45 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4E3CB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:46 JSL SET_BG3_VRAM_LOCATION
    case 0xC4E3CC: {
        Instruction step(cpu, 0x22, 0xC08E1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:47 LDA #$62
    case 0xC4E3D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:47 LDA #$62
    // Overlapping static entry reached from 0xC4E3D0.
    case 0xC4E3D2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:48 JSL SET_OAM_SIZE
    case 0xC4E3D3: {
        Instruction step(cpu, 0x22, 0xC08D92u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:49 STZ BG3_X_POS
    case 0xC4E3D7: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:50 STZ BG3_Y_POS
    case 0xC4E3DA: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:51 STZ BG2_Y_POS
    case 0xC4E3DD: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:52 STZ BG2_X_POS
    case 0xC4E3E0: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:52 STZ BG2_X_POS
    // Overlapping static entry reached from 0xC4E437.
    case 0xC4E3E2: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:53 STZ BG1_Y_POS
    case 0xC4E3E3: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:54 STZ BG1_X_POS
    case 0xC4E3E6: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:55 JSL UPDATE_SCREEN
    case 0xC4E3E9: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:56 LDA #0
    case 0xC4E3ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:56 LDA #0
    // Overlapping static entry reached from 0xC4E3ED.
    case 0xC4E3EF: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:57 STA [@VIRTUAL06]
    case 0xC4E3F0: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E3FA.
    case 0xC4E3FC: {
        Instruction step(cpu, 0x7C, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E3FD.
    case 0xC4E3FF: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E400: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E402: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E404: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E402.
    case 0xC4E405: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E405.
    case 0xC4E407: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E408: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:59 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E425.
    case 0xC4E409: {
        Instruction step(cpu, 0x20, 0x00FFA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:60 LDA #$00FF
    case 0xC4E40A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x008DFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:61 STA FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    case 0xC4E40C: {
        Instruction step(cpu, 0x8D, 0x00B4CEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:61 STA FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    // Overlapping static entry reached from 0xC4E40A.
    case 0xC4E40D: {
        Instruction step(cpu, 0xCE, 0x00C2B4u, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC4E40F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:62 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E40D.
    case 0xC4E410: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E411: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E411.
    case 0xC4E413: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E414: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E416: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E416.
    case 0xC4E418: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E419: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E41B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E41D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E41F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E421: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:65 LDX #4096
    case 0xC4E423: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:65 LDX #4096
    // Overlapping static entry reached from 0xC4E423.
    case 0xC4E425: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E426: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E425.
    case 0xC4E427: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:67 LDA #0
    case 0xC4E428: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:68 JSL MEMSET24
    case 0xC4E42A: {
        Instruction step(cpu, 0x22, 0xC08F15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:68 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E428.
    case 0xC4E42B: {
        Instruction step(cpu, 0x15, 0x00008Fu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:68 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E42B.
    case 0xC4E42D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00E1A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E42E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x00D6E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E42D.
    case 0xC4E42F: {
        Instruction step(cpu, 0xE1, 0x0000D6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E42E.
    case 0xC4E430: {
        Instruction step(cpu, 0xD6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E431: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E430.
    case 0xC4E432: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E433: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E433.
    case 0xC4E435: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E436: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E3C2.
    case 0xC4E437: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E438: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4E437.
    case 0xC4E439: {
        Instruction step(cpu, 0x00, 0x000002u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4E438.
    case 0xC4E43A: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E43B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E43D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4E43D.
    case 0xC4E43F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E440: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:72 JSL DECOMP
    case 0xC4E442: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E446: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000035u : 0x00D835u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4E446.
    case 0xC4E448: {
        Instruction step(cpu, 0xD8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E449: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E44B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4E44B.
    case 0xC4E44D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E44E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E450: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E450.
    case 0xC4E452: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E453: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E452.
    case 0xC4E454: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E454.
    case 0xC4E456: {
        Instruction step(cpu, 0x7F, 0x148500u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E455.
    case 0xC4E457: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E458: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:75 JSL DECOMP
    case 0xC4E45A: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:76 JSL PREPARE_DYNAMIC_CAST_NAME_TEXT
    case 0xC4E45E: {
        Instruction step(cpu, 0x22, 0xC4E7AEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E462: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E464: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E466: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E468: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E46A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    // Overlapping static entry reached from 0xC4E46A.
    case 0xC4E46C: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E46D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    // Overlapping static entry reached from 0xC4E46D.
    case 0xC4E46F: {
        Instruction step(cpu, 0x80, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E470: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1161 TYA
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E472: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E473: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E477: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:79 STZ FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    case 0xC4E479: {
        Instruction step(cpu, 0x9C, 0x00B4CEu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:80 JSL UNKNOWN_C47F87
    case 0xC4E47C: {
        Instruction step(cpu, 0x22, 0xC47F87u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E480: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x00D815u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4E480.
    case 0xC4E482: {
        Instruction step(cpu, 0xD8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E483: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E485: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4E485.
    case 0xC4E487: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E488: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:83 LDX #BPP2PALETTE_SIZE * 4
    case 0xC4E48A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:83 LDX #BPP2PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC4E48A.
    case 0xC4E48C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:84 LDA #.LOWORD(PALETTES)
    case 0xC4E48D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:84 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4E48D.
    case 0xC4E48F: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:85 JSL MEMCPY16
    case 0xC4E490: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E494: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4E494.
    case 0xC4E496: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E497: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E499: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4E499.
    case 0xC4E49B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E49C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:87 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4E49E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:87 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E49E.
    case 0xC4E4A0: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:88 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4E4A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:88 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E4A0.
    case 0xC4E4A2: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:88 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E4A1.
    case 0xC4E4A3: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:89 JSL MEMCPY16
    case 0xC4E4A4: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:89 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E4A3.
    case 0xC4E4A5: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:89 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E4A5.
    case 0xC4E4A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00E6A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E6u : 0x00E4E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4A7.
    case 0xC4E4A9: {
        Instruction step(cpu, 0xE6, 0x0000E4u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4A8.
    case 0xC4E4AA: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4AB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4AA.
    case 0xC4E4AC: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4AD.
    case 0xC4E4AF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4B0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B2.
    case 0xC4E4B4: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4B5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B4.
    case 0xC4E4B6: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B6.
    case 0xC4E4B8: {
        Instruction step(cpu, 0x7F, 0x148500u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B7.
    case 0xC4E4B9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4BA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:92 JSL DECOMP
    case 0xC4E4BC: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E4C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:94 LDA #PALETTE_UPLOAD::FULL
    case 0xC4E4C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:95 STA PALETTE_UPLOAD_MODE
    case 0xC4E4C4: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:95 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4E4C2.
    case 0xC4E4C5: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:96 LDA #$14
    case 0xC4E4C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x008D14u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:97 STA TM_MIRROR
    case 0xC4E4C9: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:97 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4E4C7.
    case 0xC4E4CA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:97 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4E4CA.
    case 0xC4E4CB: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC4E4CC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:99 STZ UNKNOWN_7EB4CF
    case 0xC4E4CE: {
        Instruction step(cpu, 0x9C, 0x00B4CFu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:100 STZ CAST_TILE_OFFSET
    case 0xC4E4D1: {
        Instruction step(cpu, 0x9C, 0x00B4D1u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/load_cast_scene.asm:101 JSL UNKNOWN_C08744
    case 0xC4E4D4: {
        Instruction step(cpu, 0x22, 0xC08744u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/load_cast_scene.asm:102 END_C_FUNCTION
    case 0xC4E4D8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/load_cast_scene.asm:102 END_C_FUNCTION
    case 0xC4E4D9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
