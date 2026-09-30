// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/check_dead_players.asm
bool resume_battle_check_dead_players(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_dead_players.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BB18: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BB1C.
    case 0xC2BB1E: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:10 LDA #$0000
    case 0xC2BB20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:10 LDA #$0000
    // Overlapping static entry reached from 0xC2BB20.
    case 0xC2BB22: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:11 STA @VIRTUAL04
    case 0xC2BB23: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:12 JMP @UNKNOWN9
    case 0xC2BB25: {
        Instruction step(cpu, 0x4C, 0x00BC4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:14 LDA @VIRTUAL04
    case 0xC2BB28: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    case 0xC2BB2A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BB2A.
    case 0xC2BB2C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:16 JSL MULT168
    case 0xC2BB2D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:17 TAY
    case 0xC2BB31: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:18 STY @LOCAL03
    case 0xC2BB32: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:19 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2BB34: {
        Instruction step(cpu, 0xB9, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:20 AND #$00FF
    case 0xC2BB37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2BB37.
    case 0xC2BB39: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BB3A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BB3C: {
        Instruction step(cpu, 0x4C, 0x00BC4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:22 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2BB3F: {
        Instruction step(cpu, 0xB9, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:23 AND #$00FF
    case 0xC2BB42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BB42.
    case 0xC2BB44: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BB45: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BB47: {
        Instruction step(cpu, 0x4C, 0x00BC4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:25 LDA BATTLERS_TABLE+battler::npc_id,Y
    case 0xC2BB4A: {
        Instruction step(cpu, 0xB9, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:26 AND #$00FF
    case 0xC2BB4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2BB4D.
    case 0xC2BB4F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BB50: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BB52: {
        Instruction step(cpu, 0x4C, 0x00BC4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:28 LDA BATTLERS_TABLE+battler::row,Y
    case 0xC2BB55: {
        Instruction step(cpu, 0xB9, 0x009FBCu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:29 AND #$00FF
    case 0xC2BB58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2BB58.
    case 0xC2BB5A: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    case 0xC2BB5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2BB5B.
    case 0xC2BB5D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:31 JSL MULT168
    case 0xC2BB5E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:32 CLC
    case 0xC2BB62: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2BB63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2BB63.
    case 0xC2BB65: {
        Instruction step(cpu, 0x99, 0x000285u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:34 STA @VIRTUAL02
    case 0xC2BB66: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:35 STA @LOCAL02
    case 0xC2BB68: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:36 LDY @LOCAL03
    case 0xC2BB6A: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:37 TYA
    case 0xC2BB6C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:38 CLC
    case 0xC2BB6D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    case 0xC2BB6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000BDu : 0x009FBDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    // Overlapping static entry reached from 0xC2BB6E.
    case 0xC2BB70: {
        Instruction step(cpu, 0x9F, 0x1286AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:40 TAX
    case 0xC2BB71: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:41 STX @LOCAL01
    case 0xC2BB72: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:42 LDX @VIRTUAL02
    case 0xC2BB74: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:43 LDA a:char_struct::current_hp,X
    case 0xC2BB76: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:44 LDX @LOCAL01
    case 0xC2BB79: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:45 STA __BSS_START__,X
    case 0xC2BB7B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:46 LDX @VIRTUAL02
    case 0xC2BB7E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:47 LDA a:char_struct::current_pp,X
    case 0xC2BB80: {
        Instruction step(cpu, 0xBD, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:48 STA BATTLERS_TABLE+battler::pp,Y
    case 0xC2BB83: {
        Instruction step(cpu, 0x99, 0x009FC3u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:49 LDX @LOCAL01
    case 0xC2BB86: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:50 LDA __BSS_START__,X
    case 0xC2BB88: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:51 BNE @UNKNOWN4
    case 0xC2BB8B: {
        Instruction step(cpu, 0xD0, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:52 LDA BATTLERS_TABLE+battler::afflictions,Y
    case 0xC2BB8D: {
        Instruction step(cpu, 0xB9, 0x009FC9u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:53 AND #$00FF
    case 0xC2BB90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC2BB90.
    case 0xC2BB92: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BB93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BB93.
    case 0xC2BB95: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:55 BEQ @UNKNOWN4
    case 0xC2BB96: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:56 TYA
    case 0xC2BB98: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:57 CLC
    case 0xC2BB99: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2BB9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BB9A.
    case 0xC2BB9C: {
        Instruction step(cpu, 0x9F, 0xA9728Du, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:59 STA CURRENT_TARGET
    case 0xC2BB9D: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:60 TAX
    case 0xC2BBA0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BBA1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:62 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2BBA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BBA5: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC2BBA3.
    case 0xC2BBA6: {
        Instruction step(cpu, 0x1D, 0x00AE00u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    case 0xC2BBA8: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2BBA6.
    case 0xC2BBA9: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:65 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2BBAB: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:66 LDX CURRENT_TARGET
    case 0xC2BBAE: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:67 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC2BBB1: {
        Instruction step(cpu, 0x9E, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:68 LDX CURRENT_TARGET
    case 0xC2BBB4: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:69 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2BBB7: {
        Instruction step(cpu, 0x9E, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:70 LDX CURRENT_TARGET
    case 0xC2BBBA: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:71 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC2BBBD: {
        Instruction step(cpu, 0x9E, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:72 LDX CURRENT_TARGET
    case 0xC2BBC0: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:73 STZ a:battler::afflictions + STATUS_GROUP:: TEMPORARY,X
    case 0xC2BBC3: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:74 LDX CURRENT_TARGET
    case 0xC2BBC6: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:75 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2BBC9: {
        Instruction step(cpu, 0x9E, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:76 JSL FIX_TARGET_NAME
    case 0xC2BBCC: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:78 LDX OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC2BBD0: {
        Instruction step(cpu, 0xAE, 0x008900u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:79 STX @LOCAL03
    case 0xC2BBD3: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BBD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2BBD5.
    case 0xC2BBD7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BBD8: {
        Instruction step(cpu, 0x22, 0xC1DD47u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Bu : 0x006C6Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BBDC.
    case 0xC2BBDE: {
        Instruction step(cpu, 0x6C, 0x000E85u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBDF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BBE1.
    case 0xC2BBE3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBE4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBE6: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:82 LDX @LOCAL03
    case 0xC2BBEA: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    case 0xC2BBEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    // Overlapping static entry reached from 0xC2BBEC.
    case 0xC2BBEE: {
        Instruction step(cpu, 0xFF, 0x2204D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:84 BNE @UNKNOWN4
    case 0xC2BBEF: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC2BBF1: {
        Instruction step(cpu, 0x22, 0xC1DD59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2BBEE.
    case 0xC2BBF2: {
        Instruction step(cpu, 0x59, 0x00C1DDu, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:87 LDX #$0000
    case 0xC2BBF5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:87 LDX #$0000
    // Overlapping static entry reached from 0xC2BBF5.
    case 0xC2BBF7: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:88 STX @LOCAL01
    case 0xC2BBF8: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:89 BRA @UNKNOWN6
    case 0xC2BBFA: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC2BBFC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:92 LDA @LOCAL02
    case 0xC2BBFE: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:93 STA @VIRTUAL02
    case 0xC2BC00: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:94 STX @VIRTUAL02
    case 0xC2BC02: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:95 CLC
    case 0xC2BC04: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:96 ADC @VIRTUAL02
    case 0xC2BC05: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:97 PHA
    case 0xC2BC07: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:98 STX @VIRTUAL02
    case 0xC2BC08: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:99 LDA @VIRTUAL04
    case 0xC2BC0A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    case 0xC2BC0C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BC0C.
    case 0xC2BC0E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:101 JSL MULT168
    case 0xC2BC0F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:102 CLC
    case 0xC2BC13: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    case 0xC2BC14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x009FC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    // Overlapping static entry reached from 0xC2BC14.
    case 0xC2BC16: {
        Instruction step(cpu, 0x9F, 0x026518u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:104 CLC
    case 0xC2BC17: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:105 ADC @VIRTUAL02
    case 0xC2BC18: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:106 TAX
    case 0xC2BC1A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BC1B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:108 LDA __BSS_START__,X
    case 0xC2BC1D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:109 PLX
    case 0xC2BC20: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:110 STA a:char_struct::afflictions,X
    case 0xC2BC21: {
        Instruction step(cpu, 0x9D, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:111 LDX @LOCAL01
    case 0xC2BC24: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:112 INX
    case 0xC2BC26: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:113 STX @LOCAL01
    case 0xC2BC27: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    case 0xC2BC29: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    // Overlapping static entry reached from 0xC2BC29.
    case 0xC2BC2B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:116 BCC @UNKNOWN5
    case 0xC2BC2C: {
        Instruction step(cpu, 0x90, 0x0000CEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC2BC2E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:118 LDA @LOCAL02
    case 0xC2BC30: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:119 STA @VIRTUAL02
    case 0xC2BC32: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:120 CLC
    case 0xC2BC34: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    case 0xC2BC35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    // Overlapping static entry reached from 0xC2BC35.
    case 0xC2BC37: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:122 TAX
    case 0xC2BC38: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:123 LDA __BSS_START__,X
    case 0xC2BC39: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:124 AND #$00FF
    case 0xC2BC3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC2BC3C.
    case 0xC2BC3E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:125 BEQ @UNKNOWN7
    case 0xC2BC3F: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BC41: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:127 LDA #$0001
    case 0xC2BC43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    case 0xC2BC45: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2BC43.
    case 0xC2BC46: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:130 JSL UPDATE_PARTY
    case 0xC2BC48: {
        Instruction step(cpu, 0x22, 0xC034D6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:132 INC @VIRTUAL04
    case 0xC2BC4C: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:135 LDA @VIRTUAL04
    case 0xC2BC4E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    case 0xC2BC50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2BC50.
    case 0xC2BC52: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC53: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC55: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC57: {
        Instruction step(cpu, 0x4C, 0x00BB28u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC5A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC5B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
