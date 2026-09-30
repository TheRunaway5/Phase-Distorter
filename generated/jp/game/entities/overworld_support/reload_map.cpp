// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/reload_map.asm
bool resume_overworld_reload_map(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01909: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC0190B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC0190C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC0190D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0190D.
    case 0xC0190F: {
        Instruction step(cpu, 0xFF, 0xFFA95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC01910: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/reload_map.asm:8 LDA #.LOWORD(-1)
    case 0xC01911: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:8 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01911.
    case 0xC01913: {
        Instruction step(cpu, 0xFF, 0x46F68Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map.asm:9 STA LOADED_MAP_PALETTE
    case 0xC01914: {
        Instruction step(cpu, 0x8D, 0x0046F6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:10 STA LOADED_MAP_TILE_COMBO
    case 0xC01917: {
        Instruction step(cpu, 0x8D, 0x0046F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:11 LDA SCREEN_X_PIXELS
    case 0xC0191A: {
        Instruction step(cpu, 0xAD, 0x004706u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:12 AND #$FFF8
    case 0xC0191D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F8u : 0x00FFF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:12 AND #$FFF8
    // Overlapping static entry reached from 0xC0191D.
    case 0xC0191F: {
        Instruction step(cpu, 0xFF, 0x47068Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map.asm:13 STA SCREEN_X_PIXELS
    case 0xC01920: {
        Instruction step(cpu, 0x8D, 0x004706u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:14 LDA SCREEN_Y_PIXELS
    case 0xC01923: {
        Instruction step(cpu, 0xAD, 0x004708u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:15 AND #$FFF8
    case 0xC01926: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F8u : 0x00FFF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:15 AND #$FFF8
    // Overlapping static entry reached from 0xC01926.
    case 0xC01928: {
        Instruction step(cpu, 0xFF, 0x47088Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map.asm:16 STA SCREEN_Y_PIXELS
    case 0xC01929: {
        Instruction step(cpu, 0x8D, 0x004708u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:17 JSL UNKNOWN_C08726
    case 0xC0192C: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:18 LDA #.LOWORD(-1)
    case 0xC01930: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:18 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01930.
    case 0xC01932: {
        Instruction step(cpu, 0xFF, 0x615A8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map.asm:19 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC01933: {
        Instruction step(cpu, 0x8D, 0x00615Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC01936: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x009B28u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC01936.
    case 0xC01938: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/reload_map.asm:21 STA @VIRTUAL04
    case 0xC01939: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:22 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC0193B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x009B2Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:22 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC0193B.
    case 0xC0193D: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/reload_map.asm:23 STA @VIRTUAL02
    case 0xC0193E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:24 LDX @VIRTUAL02
    case 0xC01940: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:25 LDA __BSS_START__,X
    case 0xC01942: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:26 TAX
    case 0xC01945: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:27 STX @LOCAL01
    case 0xC01946: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:28 LDX @VIRTUAL04
    case 0xC01948: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:29 LDA __BSS_START__,X
    case 0xC0194A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:30 LDX @LOCAL01
    case 0xC0194D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:31 JSL UNKNOWN_C068F4
    case 0xC0194F: {
        Instruction step(cpu, 0x22, 0xC06B22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:32 LDA #$9
    case 0xC01953: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:32 LDA #$9
    // Overlapping static entry reached from 0xC01953.
    case 0xC01955: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:33 JSL UNKNOWN_C08D79
    case 0xC01956: {
        Instruction step(cpu, 0x22, 0xC08D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:34 LDY #$0000
    case 0xC0195A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map.asm:34 LDY #$0000
    // Overlapping static entry reached from 0xC0195A.
    case 0xC0195C: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:35 LDX #$3800
    case 0xC0195D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:35 LDX #$3800
    // Overlapping static entry reached from 0xC0195D.
    case 0xC0195F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/reload_map.asm:36 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC01960: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:36 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC01960.
    case 0xC01962: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:37 JSL SET_BG1_VRAM_LOCATION
    case 0xC01963: {
        Instruction step(cpu, 0x22, 0xC08D8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:38 LDY #$2000
    case 0xC01967: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map.asm:38 LDY #$2000
    // Overlapping static entry reached from 0xC01967.
    case 0xC01969: {
        Instruction step(cpu, 0x20, 0x0000A2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/reload_map.asm:39 LDX #$5800
    case 0xC0196A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:39 LDX #$5800
    // Overlapping static entry reached from 0xC0196A.
    case 0xC0196C: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/overworld/reload_map.asm:40 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC0196D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:40 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC0196D.
    case 0xC0196F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:41 JSL SET_BG2_VRAM_LOCATION
    case 0xC01970: {
        Instruction step(cpu, 0x22, 0xC08DCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:42 LDY #$6000
    case 0xC01974: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map.asm:42 LDY #$6000
    // Overlapping static entry reached from 0xC01974.
    case 0xC01976: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/reload_map.asm:43 LDX #$7C00
    case 0xC01977: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:43 LDX #$7C00
    // Overlapping static entry reached from 0xC01977.
    case 0xC01979: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/reload_map.asm:44 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC0197A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:44 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC0197A.
    case 0xC0197C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:45 JSL SET_BG3_VRAM_LOCATION
    case 0xC0197D: {
        Instruction step(cpu, 0x22, 0xC08E0Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:46 LDA #$62
    case 0xC01981: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000062u : 0x000062u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:46 LDA #$62
    // Overlapping static entry reached from 0xC01981.
    case 0xC01983: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:47 JSL SET_OAM_SIZE
    case 0xC01984: {
        Instruction step(cpu, 0x22, 0xC08D83u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:48 LDX @VIRTUAL02
    case 0xC01988: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:49 LDA __BSS_START__,X
    case 0xC0198A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:50 TAX
    case 0xC0198D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:51 STX @LOCAL00
    case 0xC0198E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:52 LDX @VIRTUAL04
    case 0xC01990: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:53 LDA __BSS_START__,X
    case 0xC01992: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:54 LDX @LOCAL00
    case 0xC01995: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map.asm:55 JSL RELOAD_MAP_AT_POSITION
    case 0xC01997: {
        Instruction step(cpu, 0x22, 0xC01303u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:56 LDA GAME_STATE+game_state::walking_style
    case 0xC0199B: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:57 CMP #WALKING_STYLE::BICYCLE
    case 0xC0199E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:57 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC0199E.
    case 0xC019A0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:58 BNE @UNKNOWN0
    case 0xC019A1: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/reload_map.asm:59 LDA #MUSIC::BICYCLE
    case 0xC019A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:59 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC019A3.
    case 0xC019A5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:60 JSL CHANGE_MUSIC
    case 0xC019A6: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:61 BRA @UNKNOWN1
    case 0xC019AA: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/reload_map.asm:63 JSL UNKNOWN_C069AF
    case 0xC019AC: {
        Instruction step(cpu, 0x22, 0xC06BDDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC019B0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/reload_map.asm:66 LDA #$17
    case 0xC019B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    case 0xC019B4: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC019B2.
    case 0xC019B5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC019B5.
    case 0xC019B6: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC019B7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/reload_map.asm:69 LDA DEBUG
    case 0xC019B9: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map.asm:70 BEQ @UNKNOWN2
    case 0xC019BC: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/reload_map.asm:71 JSL UNKNOWN_EFD9F3
    case 0xC019BE: {
        Instruction step(cpu, 0x22, 0xEFC30Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/reload_map.asm:73 JSL UNKNOWN_C08744
    case 0xC019C2: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_map.asm:74 END_C_FUNCTION
    case 0xC019C6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_map.asm:74 END_C_FUNCTION
    case 0xC019C7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
