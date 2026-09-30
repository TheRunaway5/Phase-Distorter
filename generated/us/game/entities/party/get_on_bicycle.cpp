// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/get_on_bicycle.asm
bool resume_overworld_get_on_bicycle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_on_bicycle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03C5E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C60: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C61: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03C62.
    case 0xC03C64: {
        Instruction step(cpu, 0xFF, 0xA3AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_on_bicycle.asm:7 END_STACK_VARS
    case 0xC03C65: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    case 0xC03C66: {
        Instruction step(cpu, 0xAD, 0x0098A3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:8 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC03C64.
    case 0xC03C68: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    case 0xC03C69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC03C69.
    case 0xC03C6B: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    case 0xC03C6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:10 CMP #1
    // Overlapping static entry reached from 0xC03C6C.
    case 0xC03C6E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03C6F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:11 BNEL @UNKNOWN3
    case 0xC03C71: {
        Instruction step(cpu, 0x4C, 0x003CFBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:12 LDA GAME_STATE + game_state::unknown96
    case 0xC03C74: {
        Instruction step(cpu, 0xAD, 0x00988Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    case 0xC03C77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC03C77.
    case 0xC03C79: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    case 0xC03C7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:14 CMP #1
    // Overlapping static entry reached from 0xC03C7A.
    case 0xC03C7C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03C7D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/get_on_bicycle.asm:15 BNEL @UNKNOWN3
    case 0xC03C7F: {
        Instruction step(cpu, 0x4C, 0x003CFBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:16 LDA DISABLE_MUSIC_CHANGES
    case 0xC03C82: {
        Instruction step(cpu, 0xAD, 0x005DD8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:17 BNE @UNKNOWN2
    case 0xC03C85: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    case 0xC03C87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:18 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC03C87.
    case 0xC03C89: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:19 JSL CHANGE_MUSIC
    case 0xC03C8A: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    case 0xC03C8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:21 LDA #24
    // Overlapping static entry reached from 0xC03C8E.
    case 0xC03C90: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:22 JSL UNKNOWN_C02140
    case 0xC03C91: {
        Instruction step(cpu, 0x22, 0xC02140u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    case 0xC03C95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:23 LDA #6
    // Overlapping static entry reached from 0xC03C95.
    case 0xC03C97: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:24 STA GAME_STATE + game_state::unknown92
    case 0xC03C98: {
        Instruction step(cpu, 0x8D, 0x009887u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    case 0xC03C9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:25 LDA #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC03C9B.
    case 0xC03C9D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:26 STA GAME_STATE+game_state::walking_style
    case 0xC03C9E: {
        Instruction step(cpu, 0x8D, 0x009883u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:27 STZ PARTY_CHARACTERS+char_struct::position_index
    case 0xC03CA1: {
        Instruction step(cpu, 0x9C, 0x009A0Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:28 STZ GAME_STATE + game_state::unknown88
    case 0xC03CA4: {
        Instruction step(cpu, 0x9C, 0x00987Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:29 STZ NEW_ENTITY_VAR0
    case 0xC03CA7: {
        Instruction step(cpu, 0x9C, 0x000A38u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:30 STZ NEW_ENTITY_VAR1
    case 0xC03CAA: {
        Instruction step(cpu, 0x9C, 0x000A3Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:31 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CAD: {
        Instruction step(cpu, 0xAD, 0x000BBEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:32 STA @LOCAL00
    case 0xC03CB0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:33 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CB2: {
        Instruction step(cpu, 0xAD, 0x000BFAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:34 STA @LOCAL01
    case 0xC03CB5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    case 0xC03CB7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:35 LDY #24
    // Overlapping static entry reached from 0xC03CB7.
    case 0xC03CB9: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    case 0xC03CBA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:36 LDX #EVENT_SCRIPT::EVENT_002
    // Overlapping static entry reached from 0xC03CBA.
    case 0xC03CBC: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    case 0xC03CBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:37 LDA #OVERWORLD_SPRITE::NESS_BICYCLE
    // Overlapping static entry reached from 0xC03CBD.
    case 0xC03CBF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:38 JSL CREATE_ENTITY
    case 0xC03CC0: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    case 0xC03CC4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E6u : 0x0010E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:39 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    // Overlapping static entry reached from 0xC03CC4.
    case 0xC03CC6: {
        Instruction step(cpu, 0x10, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    case 0xC03CC7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:40 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03CC6.
    case 0xC03CC8: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    case 0xC03CCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:41 ORA #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xC03CCA.
    case 0xC03CCC: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:42 STA __BSS_START__,X
    case 0xC03CCD: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    case 0xC03CD0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000032u : 0x001032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:43 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    // Overlapping static entry reached from 0xC03CD0.
    case 0xC03CD2: {
        Instruction step(cpu, 0x10, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    case 0xC03CD3: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03CD2.
    case 0xC03CD4: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    case 0xC03CD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:45 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    // Overlapping static entry reached from 0xC03CD6.
    case 0xC03CD8: {
        Instruction step(cpu, 0x30, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    case 0xC03CD9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:46 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03CD8.
    case 0xC03CDA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:47 STZ ENTITY_ANIMATION_FRAME + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CDC: {
        Instruction step(cpu, 0x9C, 0x001122u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:48 LDA GAME_STATE+game_state::leader_direction
    case 0xC03CDF: {
        Instruction step(cpu, 0xAD, 0x00987Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:49 STA ENTITY_DIRECTIONS + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03CE2: {
        Instruction step(cpu, 0x8D, 0x002B26u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    case 0xC03CE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:50 LDA #0
    // Overlapping static entry reached from 0xC03CE5.
    case 0xC03CE7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:51 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC03CE8: {
        Instruction step(cpu, 0x22, 0xC4FD45u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    case 0xC03CEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:52 LDA #1
    // Overlapping static entry reached from 0xC03CEC.
    case 0xC03CEE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:53 STA GAME_STATE + game_state::unknown90
    case 0xC03CEF: {
        Instruction step(cpu, 0x8D, 0x009885u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:54 STA UNREAD_7E5DBA
    case 0xC03CF2: {
        Instruction step(cpu, 0x8D, 0x005DBAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    case 0xC03CF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:55 LDA #2
    // Overlapping static entry reached from 0xC03CF5.
    case 0xC03CF7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_on_bicycle.asm:56 STA INPUT_DISABLE_FRAME_COUNTER
    case 0xC03CF8: {
        Instruction step(cpu, 0x8D, 0x005D74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03CFB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_on_bicycle.asm:58 END_C_FUNCTION
    case 0xC03CFC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
