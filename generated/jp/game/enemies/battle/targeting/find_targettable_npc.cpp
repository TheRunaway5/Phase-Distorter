// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/find_targettable_npc.asm
bool resume_battle_find_targettable_npc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/find_targettable_npc.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23E1C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E1E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E1F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC23E20.
    case 0xC23E22: {
        Instruction step(cpu, 0xFF, 0x8B225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E23: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:9 JSL RAND
    case 0xC23E24: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:9 JSL RAND
    // Overlapping static entry reached from 0xC23E22.
    case 0xC23E26: {
        Instruction step(cpu, 0x8E, 0x0029C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    case 0xC23E28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    // Overlapping static entry reached from 0xC23E26.
    case 0xC23E29: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    // Overlapping static entry reached from 0xC23E28.
    case 0xC23E2A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:11 BNE @UNKNOWN0
    case 0xC23E2B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:12 LDA #$0000
    case 0xC23E2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC23E2D.
    case 0xC23E2F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:13 BRA @UNKNOWN7
    case 0xC23E30: {
        Instruction step(cpu, 0x80, 0x00006Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:15 LDA #$0000
    case 0xC23E32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:15 LDA #$0000
    // Overlapping static entry reached from 0xC23E32.
    case 0xC23E34: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:16 STA @LOCAL01
    case 0xC23E35: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:17 BRA @UNKNOWN6
    case 0xC23E37: {
        Instruction step(cpu, 0x80, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1290 CLC
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E39: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:1291 ADC #.LOWORD(struct)
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1291 ADC #.LOWORD(struct)
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    // Overlapping static entry reached from 0xC23E3A.
    case 0xC23E3C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:1292 TAX
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E3D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:1293 LDA a:field,X
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E3E: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:20 AND #$00FF
    case 0xC23E41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC23E41.
    case 0xC23E43: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:21 TAY
    case 0xC23E44: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:22 STY @LOCAL00
    case 0xC23E45: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:23 CPY #PARTY_MEMBER::POKEY
    case 0xC23E47: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:23 CPY #PARTY_MEMBER::POKEY
    // Overlapping static entry reached from 0xC23E47.
    case 0xC23E49: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:24 BCC @INVALID_PARTY_TARGET
    case 0xC23E4A: {
        Instruction step(cpu, 0x90, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:25 TYA
    case 0xC23E4C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:26 ASL
    case 0xC23E4D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:27 TAX
    case 0xC23E4E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:28 LDA f:NPC_AI_TABLE,X
    case 0xC23E4F: {
        Instruction step(cpu, 0xBF, 0xD59DDAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:29 AND #$00FF
    case 0xC23E53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23E53.
    case 0xC23E55: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:30 AND #NPC_FLAGS::UNTARGETTABLE
    case 0xC23E56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:30 AND #NPC_FLAGS::UNTARGETTABLE
    // Overlapping static entry reached from 0xC23E56.
    case 0xC23E58: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:31 BEQ @INVALID_PARTY_TARGET
    case 0xC23E59: {
        Instruction step(cpu, 0xF0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:32 LDA #$0000
    case 0xC23E5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:32 LDA #$0000
    // Overlapping static entry reached from 0xC23E5B.
    case 0xC23E5D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:33 STA @LOCAL01
    case 0xC23E5E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:34 BRA @UNKNOWN4
    case 0xC23E60: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:36 LDY #.SIZEOF(battler)
    case 0xC23E62: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:36 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23E62.
    case 0xC23E64: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:37 JSL MULT168
    case 0xC23E65: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:38 TAX
    case 0xC23E69: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:39 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC23E6A: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:40 AND #$00FF
    case 0xC23E6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC23E6D.
    case 0xC23E6F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:41 BEQ @UNKNOWN3
    case 0xC23E70: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:42 LDY @LOCAL00
    case 0xC23E72: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:43 STY $02
    case 0xC23E74: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:44 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC23E76: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:45 AND #$00FF
    case 0xC23E79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC23E79.
    case 0xC23E7B: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:46 CMP $02
    case 0xC23E7C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:47 BNE @UNKNOWN3
    case 0xC23E7E: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:48 LDA @LOCAL01
    case 0xC23E80: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:49 INC
    case 0xC23E82: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:50 BRA @UNKNOWN7
    case 0xC23E83: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:52 LDA @LOCAL01
    case 0xC23E85: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:53 INC
    case 0xC23E87: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:54 STA @LOCAL01
    case 0xC23E88: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:56 CMP #.SIZEOF(game_state::party_members)
    case 0xC23E8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:56 CMP #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC23E8A.
    case 0xC23E8C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:57 BCC @UNKNOWN2
    case 0xC23E8D: {
        Instruction step(cpu, 0x90, 0x0000D3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:59 LDA @LOCAL01
    case 0xC23E8F: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:60 INC
    case 0xC23E91: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:61 STA @LOCAL01
    case 0xC23E92: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:63 CMP #.SIZEOF(game_state::party_members)
    case 0xC23E94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:63 CMP #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC23E94.
    case 0xC23E96: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:64 BCC @UNKNOWN1
    case 0xC23E97: {
        Instruction step(cpu, 0x90, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:65 LDA #$0000
    case 0xC23E99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_targettable_npc.asm:65 LDA #$0000
    // Overlapping static entry reached from 0xC23E99.
    case 0xC23E9B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/find_targettable_npc.asm:67 END_C_FUNCTION
    case 0xC23E9C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/find_targettable_npc.asm:67 END_C_FUNCTION
    case 0xC23E9D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
