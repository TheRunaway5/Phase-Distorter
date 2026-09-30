// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/check_dead_players.asm
bool resume_battle_check_dead_players(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_dead_players.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BAC3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BAC5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BAC6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BAC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BAC7.
    case 0xC2BAC9: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BACA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:10 LDA #$0000
    case 0xC2BACB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:10 LDA #$0000
    // Overlapping static entry reached from 0xC2BACB.
    case 0xC2BACD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:11 STA @VIRTUAL04
    case 0xC2BACE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:12 JMP @UNKNOWN9
    case 0xC2BAD0: {
        Instruction step(cpu, 0x4C, 0x00BBF9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:14 LDA @VIRTUAL04
    case 0xC2BAD3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    case 0xC2BAD5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BAD5.
    case 0xC2BAD7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:16 JSL MULT168
    case 0xC2BAD8: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:17 TAY
    case 0xC2BADC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:18 STY @LOCAL03
    case 0xC2BADD: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:19 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2BADF: {
        Instruction step(cpu, 0xB9, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:20 AND #$00FF
    case 0xC2BAE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2BAE2.
    case 0xC2BAE4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BAE5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BAE7: {
        Instruction step(cpu, 0x4C, 0x00BBF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:22 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2BAEA: {
        Instruction step(cpu, 0xB9, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:23 AND #$00FF
    case 0xC2BAED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BAED.
    case 0xC2BAEF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BAF0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BAF2: {
        Instruction step(cpu, 0x4C, 0x00BBF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:25 LDA BATTLERS_TABLE+battler::npc_id,Y
    case 0xC2BAF5: {
        Instruction step(cpu, 0xB9, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:26 AND #$00FF
    case 0xC2BAF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2BAF8.
    case 0xC2BAFA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BAFB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BAFD: {
        Instruction step(cpu, 0x4C, 0x00BBF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:28 LDA BATTLERS_TABLE+battler::row,Y
    case 0xC2BB00: {
        Instruction step(cpu, 0xB9, 0x00A1BEu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:29 AND #$00FF
    case 0xC2BB03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2BB03.
    case 0xC2BB05: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    case 0xC2BB06: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2BB06.
    case 0xC2BB08: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:31 JSL MULT168
    case 0xC2BB09: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:32 CLC
    case 0xC2BB0D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2BB0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2BB0E.
    case 0xC2BB10: {
        Instruction step(cpu, 0x9C, 0x000285u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:34 STA @VIRTUAL02
    case 0xC2BB11: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:35 STA @LOCAL02
    case 0xC2BB13: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:36 LDY @LOCAL03
    case 0xC2BB15: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:37 TYA
    case 0xC2BB17: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:38 CLC
    case 0xC2BB18: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    case 0xC2BB19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000BFu : 0x00A1BFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    // Overlapping static entry reached from 0xC2BB19.
    case 0xC2BB1B: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:40 TAX
    case 0xC2BB1C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:41 STX @LOCAL01
    case 0xC2BB1D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:42 LDX @VIRTUAL02
    case 0xC2BB1F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:43 LDA a:char_struct::current_hp,X
    case 0xC2BB21: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:44 LDX @LOCAL01
    case 0xC2BB24: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:45 STA __BSS_START__,X
    case 0xC2BB26: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:46 LDX @VIRTUAL02
    case 0xC2BB29: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:47 LDA a:char_struct::current_pp,X
    case 0xC2BB2B: {
        Instruction step(cpu, 0xBD, 0x00004Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:48 STA BATTLERS_TABLE+battler::pp,Y
    case 0xC2BB2E: {
        Instruction step(cpu, 0x99, 0x00A1C5u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:49 LDX @LOCAL01
    case 0xC2BB31: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:50 LDA __BSS_START__,X
    case 0xC2BB33: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:51 BNE @UNKNOWN4
    case 0xC2BB36: {
        Instruction step(cpu, 0xD0, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:52 LDA BATTLERS_TABLE+battler::afflictions,Y
    case 0xC2BB38: {
        Instruction step(cpu, 0xB9, 0x00A1CBu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:53 AND #$00FF
    case 0xC2BB3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC2BB3B.
    case 0xC2BB3D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BB3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BB3E.
    case 0xC2BB40: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:55 BEQ @UNKNOWN4
    case 0xC2BB41: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:56 TYA
    case 0xC2BB43: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:57 CLC
    case 0xC2BB44: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2BB45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BB45.
    case 0xC2BB47: {
        Instruction step(cpu, 0xA1, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:59 STA CURRENT_TARGET
    case 0xC2BB48: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:59 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2BB47.
    case 0xC2BB49: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:60 TAX
    case 0xC2BB4B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BB4C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:62 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2BB4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BB50: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC2BB4E.
    case 0xC2BB51: {
        Instruction step(cpu, 0x1D, 0x00AE00u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    case 0xC2BB53: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2BB51.
    case 0xC2BB54: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:65 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2BB56: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:66 LDX CURRENT_TARGET
    case 0xC2BB59: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:67 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC2BB5C: {
        Instruction step(cpu, 0x9E, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:68 LDX CURRENT_TARGET
    case 0xC2BB5F: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:69 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2BB62: {
        Instruction step(cpu, 0x9E, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:70 LDX CURRENT_TARGET
    case 0xC2BB65: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:71 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC2BB68: {
        Instruction step(cpu, 0x9E, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:72 LDX CURRENT_TARGET
    case 0xC2BB6B: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:73 STZ a:battler::afflictions + STATUS_GROUP:: TEMPORARY,X
    case 0xC2BB6E: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:74 LDX CURRENT_TARGET
    case 0xC2BB71: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:75 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2BB74: {
        Instruction step(cpu, 0x9E, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:76 JSL FIX_TARGET_NAME
    case 0xC2BB77: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:78 LDX OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC2BB7B: {
        Instruction step(cpu, 0xAE, 0x008C42u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:79 STX @LOCAL03
    case 0xC2BB7E: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BB80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2BB80.
    case 0xC2BB82: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BB83: {
        Instruction step(cpu, 0x22, 0xC1DB24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00317Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BB87.
    case 0xC2BB89: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB8A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BB89.
    case 0xC2BB8B: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BB8C.
    case 0xC2BB8E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB8F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB91: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:82 LDX @LOCAL03
    case 0xC2BB95: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    case 0xC2BB97: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    // Overlapping static entry reached from 0xC2BB97.
    case 0xC2BB99: {
        Instruction step(cpu, 0xFF, 0x2204D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:84 BNE @UNKNOWN4
    case 0xC2BB9A: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC2BB9C: {
        Instruction step(cpu, 0x22, 0xC1DB36u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2BB99.
    case 0xC2BB9D: {
        Instruction step(cpu, 0x36, 0x0000DBu, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2BB9D.
    case 0xC2BB9F: {
        Instruction step(cpu, 0xC1, 0x0000A2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:87 LDX #$0000
    case 0xC2BBA0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:87 LDX #$0000
    // Overlapping static entry reached from 0xC2BB9F.
    case 0xC2BBA1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:87 LDX #$0000
    // Overlapping static entry reached from 0xC2BBA0.
    case 0xC2BBA2: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:88 STX @LOCAL01
    case 0xC2BBA3: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:89 BRA @UNKNOWN6
    case 0xC2BBA5: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC2BBA7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:92 LDA @LOCAL02
    case 0xC2BBA9: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:93 STA @VIRTUAL02
    case 0xC2BBAB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:94 STX @VIRTUAL02
    case 0xC2BBAD: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:95 CLC
    case 0xC2BBAF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:96 ADC @VIRTUAL02
    case 0xC2BBB0: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:97 PHA
    case 0xC2BBB2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:98 STX @VIRTUAL02
    case 0xC2BBB3: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:99 LDA @VIRTUAL04
    case 0xC2BBB5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    case 0xC2BBB7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BBB7.
    case 0xC2BBB9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:101 JSL MULT168
    case 0xC2BBBA: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:102 CLC
    case 0xC2BBBE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    case 0xC2BBBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CBu : 0x00A1CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    // Overlapping static entry reached from 0xC2BBBF.
    case 0xC2BBC1: {
        Instruction step(cpu, 0xA1, 0x000018u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:104 CLC
    case 0xC2BBC2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:105 ADC @VIRTUAL02
    case 0xC2BBC3: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:106 TAX
    case 0xC2BBC5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BBC6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:108 LDA __BSS_START__,X
    case 0xC2BBC8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:109 PLX
    case 0xC2BBCB: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:110 STA a:char_struct::afflictions,X
    case 0xC2BBCC: {
        Instruction step(cpu, 0x9D, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:111 LDX @LOCAL01
    case 0xC2BBCF: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:112 INX
    case 0xC2BBD1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:113 STX @LOCAL01
    case 0xC2BBD2: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    case 0xC2BBD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    // Overlapping static entry reached from 0xC2BBD4.
    case 0xC2BBD6: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:116 BCC @UNKNOWN5
    case 0xC2BBD7: {
        Instruction step(cpu, 0x90, 0x0000CEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC2BBD9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:118 LDA @LOCAL02
    case 0xC2BBDB: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:119 STA @VIRTUAL02
    case 0xC2BBDD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:120 CLC
    case 0xC2BBDF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    case 0xC2BBE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    // Overlapping static entry reached from 0xC2BBE0.
    case 0xC2BBE2: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:122 TAX
    case 0xC2BBE3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:123 LDA __BSS_START__,X
    case 0xC2BBE4: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:124 AND #$00FF
    case 0xC2BBE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC2BBE7.
    case 0xC2BBE9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:125 BEQ @UNKNOWN7
    case 0xC2BBEA: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BBEC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:127 LDA #$0001
    case 0xC2BBEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    case 0xC2BBF0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2BBEE.
    case 0xC2BBF1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:130 JSL UPDATE_PARTY
    case 0xC2BBF3: {
        Instruction step(cpu, 0x22, 0xC036C7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:132 INC @VIRTUAL04
    case 0xC2BBF7: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:135 LDA @VIRTUAL04
    case 0xC2BBF9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    case 0xC2BBFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2BBFB.
    case 0xC2BBFD: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BBFE: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC00: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC02: {
        Instruction step(cpu, 0x4C, 0x00BAD3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC05: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC06: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
