// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/initialize_credits_scene.asm
bool resume_ending_initialize_credits_scene(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/initialize_credits_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F07D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F07F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F080: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F081: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F081.
    case 0xC4F083: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F084: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F085: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F085.
    case 0xC4F087: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F088: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F08A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F08A.
    case 0xC4F08C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F08D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:9 JSL UNKNOWN_C08726
    case 0xC4F08F: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:10 JSL UNKNOWN_C021E6
    case 0xC4F093: {
        Instruction step(cpu, 0x22, 0xC021E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:11 STZ CREDITS_CURRENT_ROW
    case 0xC4F097: {
        Instruction step(cpu, 0x9C, 0x00B4F7u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:12 STZ CREDITS_DMA_QUEUE_START
    case 0xC4F09A: {
        Instruction step(cpu, 0x9C, 0x00B4F5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:13 STZ CREDITS_DMA_QUEUE_END
    case 0xC4F09D: {
        Instruction step(cpu, 0x9C, 0x00B4F3u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    case 0xC4F0A0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    // Overlapping static entry reached from 0xC4F0A0.
    case 0xC4F0A2: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    case 0xC4F0A3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC4F0A3.
    case 0xC4F0A5: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC4F0A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC4F0A6.
    case 0xC4F0A8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:17 JSL SET_BG1_VRAM_LOCATION
    case 0xC4F0A9: {
        Instruction step(cpu, 0x22, 0xC08D9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    case 0xC4F0AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    // Overlapping static entry reached from 0xC4F0AD.
    case 0xC4F0AF: {
        Instruction step(cpu, 0x20, 0x0000A2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    case 0xC4F0B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC4F0B0.
    case 0xC4F0B2: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    case 0xC4F0B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4F0B2.
    case 0xC4F0B4: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4F0B3.
    case 0xC4F0B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:21 JSL SET_BG2_VRAM_LOCATION
    case 0xC4F0B6: {
        Instruction step(cpu, 0x22, 0xC08DDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    case 0xC4F0BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    // Overlapping static entry reached from 0xC4F0BA.
    case 0xC4F0BC: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    case 0xC4F0BD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x006C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    // Overlapping static entry reached from 0xC4F0BD.
    case 0xC4F0BF: {
        Instruction step(cpu, 0x6C, 0x0000A9u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4F0C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4F0C0.
    case 0xC4F0C2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:25 JSL SET_BG3_VRAM_LOCATION
    case 0xC4F0C3: {
        Instruction step(cpu, 0x22, 0xC08E1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    case 0xC4F0C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    // Overlapping static entry reached from 0xC4F0C7.
    case 0xC4F0C9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:27 JSL SET_OAM_SIZE
    case 0xC4F0CA: {
        Instruction step(cpu, 0x22, 0xC08D92u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:28 STZ BG3_X_POS
    case 0xC4F0CE: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:29 STZ BG3_Y_POS
    case 0xC4F0D1: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:30 STZ BG2_Y_POS
    case 0xC4F0D4: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:31 STZ BG2_X_POS
    case 0xC4F0D7: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:32 STZ BG1_Y_POS
    case 0xC4F0DA: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:33 STZ BG1_X_POS
    case 0xC4F0DD: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:34 JSL UPDATE_SCREEN
    case 0xC4F0E0: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    case 0xC4F0E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    // Overlapping static entry reached from 0xC4F0E4.
    case 0xC4F0E6: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:36 STA [@VIRTUAL06]
    case 0xC4F0E7: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0E9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0EB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0ED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0EF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F1.
    case 0xC4F0F3: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F111.
    case 0xC4F0F5: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F4.
    case 0xC4F0F6: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F6.
    case 0xC4F0F8: {
        Instruction step(cpu, 0x20, 0x0003A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0FB: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F9.
    case 0xC4F0FC: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0FC.
    case 0xC4F0FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x000CA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    case 0xC4F0FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00240Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4F0FE.
    case 0xC4F100: {
        Instruction step(cpu, 0x0C, 0x008724u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4F0FF.
    case 0xC4F101: {
        Instruction step(cpu, 0x24, 0x000087u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    case 0xC4F102: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4F101.
    case 0xC4F103: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F104: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F103.
    case 0xC4F105: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F106: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F105.
    case 0xC4F107: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F108: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F10A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F10C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F129.
    case 0xC4F10D: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F10C.
    case 0xC4F10E: {
        Instruction step(cpu, 0x70, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F10F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F10E.
    case 0xC4F110: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F10F.
    case 0xC4F111: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F112: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F111.
    case 0xC4F113: {
        Instruction step(cpu, 0x20, 0x0009A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F114: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x002209u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F116: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F114.
    case 0xC4F117: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F117.
    case 0xC4F119: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0001A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F11A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F119.
    case 0xC4F11B: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F11A.
    case 0xC4F11C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F11D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F11F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F11F.
    case 0xC4F121: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F122: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F124: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F124.
    case 0xC4F126: {
        Instruction step(cpu, 0x70, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F127: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F126.
    case 0xC4F128: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F127.
    case 0xC4F129: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F12A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F129.
    case 0xC4F12B: {
        Instruction step(cpu, 0x20, 0x000FA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F12C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00220Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F12E: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F12C.
    case 0xC4F12F: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F12F.
    case 0xC4F131: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x004AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F132: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00E94Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F131.
    case 0xC4F133: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F132.
    case 0xC4F134: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F135: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F134.
    case 0xC4F136: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F137: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F137.
    case 0xC4F139: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F13A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F13C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F13E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F140: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F142: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:44 JSL DECOMP
    case 0xC4F144: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4F148: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000220u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F148.
    case 0xC4F14A: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:46 STA @VIRTUAL02
    case 0xC4F14B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F14D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x00E92Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F14D.
    case 0xC4F14F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F150: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F14F.
    case 0xC4F151: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F152: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F152.
    case 0xC4F154: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F155: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4F157: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F157.
    case 0xC4F159: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:49 LDA @VIRTUAL02
    case 0xC4F15A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:50 JSL MEMCPY16
    case 0xC4F15C: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F160: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F162: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F164: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F166: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F168: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F168.
    case 0xC4F16A: {
        Instruction step(cpu, 0x70, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F16B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000700u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F16A.
    case 0xC4F16C: {
        Instruction step(cpu, 0x00, 0x000007u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F16B.
    case 0xC4F16D: {
        Instruction step(cpu, 0x07, 0x0000E2u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F16E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F16D.
    case 0xC4F16F: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F170: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F172: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F170.
    case 0xC4F173: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F173.
    case 0xC4F175: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F176: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000700u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F175.
    case 0xC4F177: {
        Instruction step(cpu, 0x00, 0x000007u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F176.
    case 0xC4F178: {
        Instruction step(cpu, 0x07, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F179: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F178.
    case 0xC4F17A: {
        Instruction step(cpu, 0x0E, 0x007FA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F17B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F17B.
    case 0xC4F17D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F17E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F180: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F180.
    case 0xC4F182: {
        Instruction step(cpu, 0x20, 0x00E2BBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1155 TYX
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F183: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F184: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F182.
    case 0xC4F185: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F186: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F188: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F186.
    case 0xC4F189: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F189.
    case 0xC4F18B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    case 0xC4F18C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4F18B.
    case 0xC4F18D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4F18C.
    case 0xC4F18E: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:54 STA [@VIRTUAL06]
    case 0xC4F18F: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F191: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F193: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F195: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F197: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F199: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F199.
    case 0xC4F19B: {
        Instruction step(cpu, 0x6C, 0x0000A2u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F19C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F19C.
    case 0xC4F19E: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F19F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F1A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F1A3: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F1A1.
    case 0xC4F1A4: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F1A4.
    case 0xC4F1A6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0028A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x00E528u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1A6.
    case 0xC4F1A8: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1A7.
    case 0xC4F1A9: {
        Instruction step(cpu, 0xE5, 0x000085u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1AA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1A9.
    case 0xC4F1AB: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1AC.
    case 0xC4F1AE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1AF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B3: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B7: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:58 JSL DECOMP
    case 0xC4F1B9: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1BD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1BF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1C5.
    case 0xC4F1C7: {
        Instruction step(cpu, 0x62, 0x0000A2u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1C8.
    case 0xC4F1CA: {
        Instruction step(cpu, 0x0C, 0x0020E2u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1CB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1CF: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1CD.
    case 0xC4F1D0: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1D0.
    case 0xC4F1D2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0014A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x00E914u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D2.
    case 0xC4F1D4: {
        Instruction step(cpu, 0x14, 0x0000E9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D3.
    case 0xC4F1D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1D6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D5.
    case 0xC4F1D7: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D8.
    case 0xC4F1DA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1DB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    case 0xC4F1DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4F1DD.
    case 0xC4F1DF: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    case 0xC4F1E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4F1E0.
    case 0xC4F1E2: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:63 JSL MEMCPY16
    case 0xC4F1E3: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4F1E7.
    case 0xC4F1E9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1EA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4F1EC.
    case 0xC4F1EE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1EF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4F1F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4F1F1.
    case 0xC4F1F3: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4F1F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4F1F3.
    case 0xC4F1F5: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4F1F4.
    case 0xC4F1F6: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    case 0xC4F1F7: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4F1F6.
    case 0xC4F1F8: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4F1F8.
    case 0xC4F1FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F1FB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F1FA.
    case 0xC4F1FC: {
        Instruction step(cpu, 0x20, 0x000E64u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    case 0xC4F1FD: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    case 0xC4F1FF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC4F1FF.
    case 0xC4F201: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC4F202: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F201.
    case 0xC4F203: {
        Instruction step(cpu, 0x20, 0x0002A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:72 LDA @VIRTUAL02
    case 0xC4F204: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:73 JSL MEMSET16
    case 0xC4F206: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F20A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:75 LDA #PALETTE_UPLOAD::FULL
    case 0xC4F20C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    case 0xC4F20E: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4F20C.
    case 0xC4F20F: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:77 LDA #$17
    case 0xC4F211: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    case 0xC4F213: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F211.
    case 0xC4F214: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F214.
    case 0xC4F215: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC4F216: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:80 STZ CREDITS_NEXT_CREDIT_POSITION
    case 0xC4F218: {
        Instruction step(cpu, 0x9C, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F21B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4F21B.
    case 0xC4F21D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F21E: {
        Instruction step(cpu, 0x8D, 0x00B4EBu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F221: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4F221.
    case 0xC4F223: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F224: {
        Instruction step(cpu, 0x8D, 0x00B4EDu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    case 0xC4F227: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    // Overlapping static entry reached from 0xC4F227.
    case 0xC4F229: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:83 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC4F22A: {
        Instruction step(cpu, 0x8D, 0x00B4E5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F22D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F22D.
    case 0xC4F22F: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F230: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F232: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F233: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F235: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F236: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F238: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    case 0xC4F23A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    // Overlapping static entry reached from 0xC4F23A.
    case 0xC4F23C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:86 BRA @UNKNOWN1
    case 0xC4F23D: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC4F23F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    case 0xC4F241: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    // Overlapping static entry reached from 0xC4F241.
    case 0xC4F243: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:90 STA [@VIRTUAL06]
    case 0xC4F244: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:91 INC @VIRTUAL06
    case 0xC4F246: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:92 INC @VIRTUAL06
    case 0xC4F248: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:93 INX
    case 0xC4F24A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    case 0xC4F24B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    // Overlapping static entry reached from 0xC4F24B.
    case 0xC4F24D: {
        Instruction step(cpu, 0x02, 0x000090u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:96 BCC @UNKNOWN0
    case 0xC4F24E: {
        Instruction step(cpu, 0x90, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC4F250: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F252: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Fu : 0x00413Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4F252.
    case 0xC4F254: {
        Instruction step(cpu, 0x41, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F255: {
        Instruction step(cpu, 0x8D, 0x00B4E7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4F254.
    case 0xC4F256: {
        Instruction step(cpu, 0xE7, 0x0000B4u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F258: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4F258.
    case 0xC4F25A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F25B: {
        Instruction step(cpu, 0x8D, 0x00B4E9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:99 JSL UNKNOWN_C08744
    case 0xC4F25E: {
        Instruction step(cpu, 0x22, 0xC08744u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4F262: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4F263: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
