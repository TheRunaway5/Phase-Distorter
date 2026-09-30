// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_on_bicycle.asm
bool resume_overworld_get_on_bicycle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_on_bicycle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03EC5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03EC7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03EC8: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03EC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03EC9.
    case 0xC03ECB: {
        Instruction step(cpu, 0xFF, 0x54AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03ECC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    case 0xC03ECD: {
        Instruction step(cpu, 0xAD, 0x009B54u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC03ECB.
    case 0xC03ECF: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    case 0xC03ED0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC03ED0.
    case 0xC03ED2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    case 0xC03ED3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    // Overlapping static entry reached from 0xC03ED3.
    case 0xC03ED5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03ED6: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03ED8: {
        Instruction step(cpu, 0x4C, 0x003F62u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:12 LDA GAME_STATE + game_state::unknown96
    case 0xC03EDB: {
        Instruction step(cpu, 0xAD, 0x009B3Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    case 0xC03EDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC03EDE.
    case 0xC03EE0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    case 0xC03EE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    // Overlapping static entry reached from 0xC03EE1.
    case 0xC03EE3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03EE4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03EE6: {
        Instruction step(cpu, 0x4C, 0x003F62u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:16 LDA DISABLE_MUSIC_CHANGES
    case 0xC03EE9: {
        Instruction step(cpu, 0xAD, 0x00615Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:17 BNE @UNKNOWN2
    case 0xC03EEC: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    case 0xC03EEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC03EEE.
    case 0xC03EF0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:19 JSL CHANGE_MUSIC
    case 0xC03EF1: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    case 0xC03EF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    // Overlapping static entry reached from 0xC03EF5.
    case 0xC03EF7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:22 JSL UNKNOWN_C02140
    case 0xC03EF8: {
        Instruction step(cpu, 0x22, 0xC0214Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    case 0xC03EFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    // Overlapping static entry reached from 0xC03EFC.
    case 0xC03EFE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:24 STA GAME_STATE + game_state::unknown92
    case 0xC03EFF: {
        Instruction step(cpu, 0x8D, 0x009B38u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    case 0xC03F02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC03F02.
    case 0xC03F04: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:26 STA GAME_STATE+game_state::walking_style
    case 0xC03F05: {
        Instruction step(cpu, 0x8D, 0x009B34u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:27 STZ PARTY_CHARACTERS+char_struct::position_index
    case 0xC03F08: {
        Instruction step(cpu, 0x9C, 0x009CBBu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:28 STZ GAME_STATE + game_state::unknown88
    case 0xC03F0B: {
        Instruction step(cpu, 0x9C, 0x009B2Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:29 STZ NEW_ENTITY_VAR0
    case 0xC03F0E: {
        Instruction step(cpu, 0x9C, 0x000A2Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:30 STZ NEW_ENTITY_VAR1
    case 0xC03F11: {
        Instruction step(cpu, 0x9C, 0x000A30u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:31 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F14: {
        Instruction step(cpu, 0xAD, 0x000BB4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:32 STA @LOCAL00
    case 0xC03F17: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:33 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F19: {
        Instruction step(cpu, 0xAD, 0x000BF0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:34 STA @LOCAL01
    case 0xC03F1C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    case 0xC03F1E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    // Overlapping static entry reached from 0xC03F1E.
    case 0xC03F20: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    case 0xC03F21: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    // Overlapping static entry reached from 0xC03F21.
    case 0xC03F23: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    case 0xC03F24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    // Overlapping static entry reached from 0xC03F24.
    case 0xC03F26: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:38 JSL CREATE_ENTITY
    case 0xC03F27: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    case 0xC03F2B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000DCu : 0x0010DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    // Overlapping static entry reached from 0xC03F2B.
    case 0xC03F2D: {
        Instruction step(cpu, 0x10, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    case 0xC03F2E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03F2D.
    case 0xC03F2F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    case 0xC03F31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xC03F31.
    case 0xC03F33: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:42 STA __BSS_START__,X
    case 0xC03F34: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    case 0xC03F37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000028u : 0x001028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    // Overlapping static entry reached from 0xC03F37.
    case 0xC03F39: {
        Instruction step(cpu, 0x10, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    case 0xC03F3A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03F39.
    case 0xC03F3B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    case 0xC03F3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    // Overlapping static entry reached from 0xC03F3D.
    case 0xC03F3F: {
        Instruction step(cpu, 0x30, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    case 0xC03F40: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03F3F.
    case 0xC03F41: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:47 STZ ENTITY_ANIMATION_FRAME + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F43: {
        Instruction step(cpu, 0x9C, 0x001118u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:48 LDA GAME_STATE+game_state::leader_direction
    case 0xC03F46: {
        Instruction step(cpu, 0xAD, 0x009B30u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:49 STA ENTITY_DIRECTIONS + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03F49: {
        Instruction step(cpu, 0x8D, 0x002F24u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    case 0xC03F4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    // Overlapping static entry reached from 0xC03F4C.
    case 0xC03F4E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:51 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC03F4F: {
        Instruction step(cpu, 0x22, 0xC4D0E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    case 0xC03F53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    // Overlapping static entry reached from 0xC03F53.
    case 0xC03F55: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:53 STA GAME_STATE + game_state::unknown90
    case 0xC03F56: {
        Instruction step(cpu, 0x8D, 0x009B36u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:54 STA UNREAD_7E5DBA
    case 0xC03F59: {
        Instruction step(cpu, 0x8D, 0x006140u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    case 0xC03F5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    // Overlapping static entry reached from 0xC03F5C.
    case 0xC03F5E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:56 STA INPUT_DISABLE_FRAME_COUNTER
    case 0xC03F5F: {
        Instruction step(cpu, 0x8D, 0x0060FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03F62: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03F63: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
