// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/initialize_credits_scene.asm
bool resume_ending_initialize_credits_scene(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/initialize_credits_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C0B7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0B9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0BA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C0BB.
    case 0xC4C0BD: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0BE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C0BF.
    case 0xC4C0C1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0C2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C0C4.
    case 0xC4C0C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0C7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:9 JSL UNKNOWN_C08726
    case 0xC4C0C9: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:10 JSL UNKNOWN_C021E6
    case 0xC4C0CD: {
        Instruction step(cpu, 0x22, 0xC021F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:11 STZ CREDITS_CURRENT_ROW
    case 0xC4C0D1: {
        Instruction step(cpu, 0x9C, 0x00B6C0u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:12 STZ CREDITS_DMA_QUEUE_START
    case 0xC4C0D4: {
        Instruction step(cpu, 0x9C, 0x00B6BEu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:13 STZ CREDITS_DMA_QUEUE_END
    case 0xC4C0D7: {
        Instruction step(cpu, 0x9C, 0x00B6BCu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    case 0xC4C0DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    // Overlapping static entry reached from 0xC4C0DA.
    case 0xC4C0DC: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    case 0xC4C0DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC4C0DD.
    case 0xC4C0DF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC4C0E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC4C0E0.
    case 0xC4C0E2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:17 JSL SET_BG1_VRAM_LOCATION
    case 0xC4C0E3: {
        Instruction step(cpu, 0x22, 0xC08D8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    case 0xC4C0E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    // Overlapping static entry reached from 0xC4C0E7.
    case 0xC4C0E9: {
        Instruction step(cpu, 0x20, 0x0000A2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    case 0xC4C0EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC4C0EA.
    case 0xC4C0EC: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    case 0xC4C0ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4C0EC.
    case 0xC4C0EE: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4C0ED.
    case 0xC4C0EF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:21 JSL SET_BG2_VRAM_LOCATION
    case 0xC4C0F0: {
        Instruction step(cpu, 0x22, 0xC08DCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    case 0xC4C0F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    // Overlapping static entry reached from 0xC4C0F4.
    case 0xC4C0F6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    case 0xC4C0F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x006C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    // Overlapping static entry reached from 0xC4C0F7.
    case 0xC4C0F9: {
        Instruction step(cpu, 0x6C, 0x0000A9u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4C0FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4C0FA.
    case 0xC4C0FC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:25 JSL SET_BG3_VRAM_LOCATION
    case 0xC4C0FD: {
        Instruction step(cpu, 0x22, 0xC08E0Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    case 0xC4C101: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    // Overlapping static entry reached from 0xC4C101.
    case 0xC4C103: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:27 JSL SET_OAM_SIZE
    case 0xC4C104: {
        Instruction step(cpu, 0x22, 0xC08D83u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:28 STZ BG3_X_POS
    case 0xC4C108: {
        Instruction step(cpu, 0x9C, 0x000039u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:29 STZ BG3_Y_POS
    case 0xC4C10B: {
        Instruction step(cpu, 0x9C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:30 STZ BG2_Y_POS
    case 0xC4C10E: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:31 STZ BG2_X_POS
    case 0xC4C111: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:32 STZ BG1_Y_POS
    case 0xC4C114: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:33 STZ BG1_X_POS
    case 0xC4C117: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:34 JSL UPDATE_SCREEN
    case 0xC4C11A: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    case 0xC4C11E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    // Overlapping static entry reached from 0xC4C11E.
    case 0xC4C120: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:36 STA [@VIRTUAL06]
    case 0xC4C121: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C123: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C125: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C127: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C129: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C12B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C12B.
    case 0xC4C12D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C12E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C14B.
    case 0xC4C12F: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C12E.
    case 0xC4C130: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C131: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C130.
    case 0xC4C132: {
        Instruction step(cpu, 0x20, 0x0003A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C133: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C135: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C133.
    case 0xC4C136: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C136.
    case 0xC4C138: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x000CA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    case 0xC4C139: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00240Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4C138.
    case 0xC4C13A: {
        Instruction step(cpu, 0x0C, 0x008724u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4C139.
    case 0xC4C13B: {
        Instruction step(cpu, 0x24, 0x000087u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    case 0xC4C13C: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4C13B.
    case 0xC4C13D: {
        Instruction step(cpu, 0x06, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C13E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C13D.
    case 0xC4C13F: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C140: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C13F.
    case 0xC4C141: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C142: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C144: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C146: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C163.
    case 0xC4C147: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C146.
    case 0xC4C148: {
        Instruction step(cpu, 0x70, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C149: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C148.
    case 0xC4C14A: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C149.
    case 0xC4C14B: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C14C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C14B.
    case 0xC4C14D: {
        Instruction step(cpu, 0x20, 0x0009A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C14E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x002209u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C150: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C14E.
    case 0xC4C151: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C151.
    case 0xC4C153: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0001A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C154: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C153.
    case 0xC4C155: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C154.
    case 0xC4C156: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C157: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C159.
    case 0xC4C15B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C15C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C15E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C15E.
    case 0xC4C160: {
        Instruction step(cpu, 0x70, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C161: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C160.
    case 0xC4C162: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C161.
    case 0xC4C163: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C164: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C163.
    case 0xC4C165: {
        Instruction step(cpu, 0x20, 0x000FA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C166: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00220Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C168: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C166.
    case 0xC4C169: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C169.
    case 0xC4C16B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00DCA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C16C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DCu : 0x00D6DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C16B.
    case 0xC4C16D: {
        Instruction step(cpu, 0xDC, 0x0085D6u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C16C.
    case 0xC4C16E: {
        Instruction step(cpu, 0xD6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C16F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C16E.
    case 0xC4C170: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C171: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C171.
    case 0xC4C173: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C174: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C176: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C178: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C17A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C17C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:44 JSL DECOMP
    case 0xC4C17E: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4C182: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000220u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C182.
    case 0xC4C184: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:46 STA @VIRTUAL02
    case 0xC4C185: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C187: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BCu : 0x00D6BCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C187.
    case 0xC4C189: {
        Instruction step(cpu, 0xD6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C18A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C189.
    case 0xC4C18B: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C18C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C18C.
    case 0xC4C18E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C18F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4C191: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C191.
    case 0xC4C193: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:49 LDA @VIRTUAL02
    case 0xC4C194: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:50 JSL MEMCPY16
    case 0xC4C196: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C19A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C19C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C19E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A2.
    case 0xC4C1A4: {
        Instruction step(cpu, 0x70, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000700u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A4.
    case 0xC4C1A6: {
        Instruction step(cpu, 0x00, 0x000007u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A5.
    case 0xC4C1A7: {
        Instruction step(cpu, 0x07, 0x0000E2u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A7.
    case 0xC4C1A9: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1AC: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1AA.
    case 0xC4C1AD: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1AD.
    case 0xC4C1AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000700u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1AF.
    case 0xC4C1B1: {
        Instruction step(cpu, 0x00, 0x000007u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1B0.
    case 0xC4C1B2: {
        Instruction step(cpu, 0x07, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1B2.
    case 0xC4C1B4: {
        Instruction step(cpu, 0x0E, 0x007FA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1B5.
    case 0xC4C1B7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1BA.
    case 0xC4C1BC: {
        Instruction step(cpu, 0x20, 0x00E2BBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1155 TYX
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1BD: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1BE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1BC.
    case 0xC4C1BF: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1C2: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1C0.
    case 0xC4C1C3: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1C3.
    case 0xC4C1C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    case 0xC4C1C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4C1C5.
    case 0xC4C1C7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4C1C6.
    case 0xC4C1C8: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:54 STA [@VIRTUAL06]
    case 0xC4C1C9: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1CB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1CD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1CF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1D3.
    case 0xC4C1D5: {
        Instruction step(cpu, 0x6C, 0x0000A2u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1D6.
    case 0xC4C1D8: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1DD: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1DB.
    case 0xC4C1DE: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1DE.
    case 0xC4C1E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00CCA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x00D2CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E0.
    case 0xC4C1E2: {
        Instruction step(cpu, 0xCC, 0x0085D2u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E1.
    case 0xC4C1E3: {
        Instruction step(cpu, 0xD2, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E3.
    case 0xC4C1E5: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E6.
    case 0xC4C1E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1EB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1ED: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1EF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1F1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:58 JSL DECOMP
    case 0xC4C1F3: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1F7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1F9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1FB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1FD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1FF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C1FF.
    case 0xC4C201: {
        Instruction step(cpu, 0x62, 0x0000A2u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C202: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C202.
    case 0xC4C204: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C205: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C207: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C209: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C207.
    case 0xC4C20A: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C20A.
    case 0xC4C20C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00A6A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C20D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A6u : 0x00D6A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C20C.
    case 0xC4C20E: {
        Instruction step(cpu, 0xA6, 0x0000D6u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C20D.
    case 0xC4C20F: {
        Instruction step(cpu, 0xD6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C210: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C20F.
    case 0xC4C211: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C212: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C212.
    case 0xC4C214: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C215: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    case 0xC4C217: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4C217.
    case 0xC4C219: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    case 0xC4C21A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4C21A.
    case 0xC4C21C: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:63 JSL MEMCPY16
    case 0xC4C21D: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C221: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4C221.
    case 0xC4C223: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C224: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C226: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4C226.
    case 0xC4C228: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C229: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4C22B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4C22B.
    case 0xC4C22D: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4C22E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4C22D.
    case 0xC4C22F: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4C22E.
    case 0xC4C230: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    case 0xC4C231: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4C230.
    case 0xC4C232: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4C232.
    case 0xC4C234: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C235: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C234.
    case 0xC4C236: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    case 0xC4C237: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    case 0xC4C239: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4C237.
    case 0xC4C23A: {
        Instruction step(cpu, 0x0E, 0x00E0A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    case 0xC4C23B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC4C23B.
    case 0xC4C23D: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC4C23E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C23D.
    case 0xC4C23F: {
        Instruction step(cpu, 0x20, 0x0002A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:72 LDA @VIRTUAL02
    case 0xC4C240: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:73 JSL MEMSET16
    case 0xC4C242: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C246: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:75 LDA #PALETTE_UPLOAD::FULL
    case 0xC4C248: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    case 0xC4C24A: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4C248.
    case 0xC4C24B: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:77 LDA #$17
    case 0xC4C24D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    case 0xC4C24F: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C24D.
    case 0xC4C250: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C250.
    case 0xC4C251: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC4C252: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:80 STZ CREDITS_NEXT_CREDIT_POSITION
    case 0xC4C254: {
        Instruction step(cpu, 0x9C, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C257: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4C257.
    case 0xC4C259: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C25A: {
        Instruction step(cpu, 0x8D, 0x00B6B4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C25D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4C25D.
    case 0xC4C25F: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C260: {
        Instruction step(cpu, 0x8D, 0x00B6B6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    case 0xC4C263: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    // Overlapping static entry reached from 0xC4C263.
    case 0xC4C265: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:83 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC4C266: {
        Instruction step(cpu, 0x8D, 0x00B6AEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C269: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C269.
    case 0xC4C26B: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C26C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C26B.
    case 0xC4C26D: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C26E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C26F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C271: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C272: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C274: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    case 0xC4C276: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    // Overlapping static entry reached from 0xC4C276.
    case 0xC4C278: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:86 BRA @UNKNOWN1
    case 0xC4C279: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC4C27B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    case 0xC4C27D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    // Overlapping static entry reached from 0xC4C27D.
    case 0xC4C27F: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:90 STA [@VIRTUAL06]
    case 0xC4C280: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:91 INC @VIRTUAL06
    case 0xC4C282: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:92 INC @VIRTUAL06
    case 0xC4C284: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:93 INX
    case 0xC4C286: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    case 0xC4C287: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    // Overlapping static entry reached from 0xC4C287.
    case 0xC4C289: {
        Instruction step(cpu, 0x02, 0x000090u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:96 BCC @UNKNOWN0
    case 0xC4C28A: {
        Instruction step(cpu, 0x90, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC4C28C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C28E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x003596u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4C28E.
    case 0xC4C290: {
        Instruction step(cpu, 0x35, 0x00008Du, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C291: {
        Instruction step(cpu, 0x8D, 0x00B6B0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4C290.
    case 0xC4C292: {
        Instruction step(cpu, 0xB0, 0x0000B6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C294: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4C294.
    case 0xC4C296: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C297: {
        Instruction step(cpu, 0x8D, 0x00B6B2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/initialize_credits_scene.asm:99 JSL UNKNOWN_C08744
    case 0xC4C29A: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4C29E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4C29F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
