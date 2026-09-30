// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/main_battle_routine.asm
bool resume_battle_main_battle_routine(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/main_battle_routine.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC246EE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x00FFC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC246F2.
    case 0xC246F4: {
        Instruction step(cpu, 0xFF, 0x48AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC246F5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    case 0xC246F6: {
        Instruction step(cpu, 0xAD, 0x005148u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC246F4.
    case 0xC246F8: {
        Instruction step(cpu, 0x51, 0x0000D0u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:27 BNE @UNKNOWN0
    case 0xC246F9: {
        Instruction step(cpu, 0xD0, 0x000066u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:27 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC246F8.
    case 0xC246FA: {
        Instruction step(cpu, 0x66, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:28 LDA #1
    case 0xC246FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:28 LDA #1
    // Overlapping static entry reached from 0xC246FA.
    case 0xC246FC: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:28 LDA #1
    // Overlapping static entry reached from 0xC246FB.
    case 0xC246FD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:29 STA @LOCAL12
    case 0xC246FE: {
        Instruction step(cpu, 0x85, 0x000035u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:30 STA @LOCAL11
    case 0xC24700: {
        Instruction step(cpu, 0x85, 0x000033u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC24702: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:32 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24704: {
        Instruction step(cpu, 0x8D, 0x009B55u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC24707: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:35 LDA #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC24709: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x009B20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:35 LDA #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC24709.
    case 0xC2470B: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:36 STA @VIRTUAL02
    case 0xC2470C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC2470E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    case 0xC24710: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    case 0xC24712: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC24710.
    case 0xC24713: {
        Instruction step(cpu, 0x0E, 0x0006A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:43 LDX #6
    case 0xC24714: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:43 LDX #6
    // Overlapping static entry reached from 0xC24714.
    case 0xC24716: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC24717: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:46 LDA @VIRTUAL02
    case 0xC24719: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:50 JSL MEMSET16
    case 0xC2471B: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:52 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    case 0xC2471F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Cu : 0x009B3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:52 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    // Overlapping static entry reached from 0xC2471F.
    case 0xC24721: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:53 STY @LOCAL10
    case 0xC24722: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC24724: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    case 0xC24726: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    case 0xC24728: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC24726.
    case 0xC24729: {
        Instruction step(cpu, 0x0E, 0x0006A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:60 LDX #6
    case 0xC2472A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:60 LDX #6
    // Overlapping static entry reached from 0xC2472A.
    case 0xC2472C: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC2472D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:63 TYA
    case 0xC2472F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:67 JSL MEMSET16
    case 0xC24730: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC24734: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:69 LDA #1
    case 0xC24736: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:71 LDX @VIRTUAL02
    case 0xC24738: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:71 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC24736.
    case 0xC24739: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:72 STA __BSS_START__,X
    case 0xC2473A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:73 LDY @LOCAL10
    case 0xC2473D: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:74 STA __BSS_START__,Y
    case 0xC2473F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC24742: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:82 LDA #1
    case 0xC24744: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:82 LDA #1
    // Overlapping static entry reached from 0xC24744.
    case 0xC24746: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:83 STA ENEMIES_IN_BATTLE
    case 0xC24747: {
        Instruction step(cpu, 0x8D, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:84 STA CURRENT_BATTLE_GROUP
    case 0xC2474A: {
        Instruction step(cpu, 0x8D, 0x004E12u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC2474D: {
        Instruction step(cpu, 0xAF, 0xD0C615u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24751: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24753: {
        Instruction step(cpu, 0xAF, 0xD0C617u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24757: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:86 LDY #1
    case 0xC24759: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:86 LDY #1
    // Overlapping static entry reached from 0xC24759.
    case 0xC2475B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:87 LDA [@VIRTUAL06],Y
    case 0xC2475C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:88 STA ENEMIES_IN_BATTLE_IDS
    case 0xC2475E: {
        Instruction step(cpu, 0x8D, 0x00A18Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:90 STZ GIYGAS_PHASE
    case 0xC24761: {
        Instruction step(cpu, 0x9C, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:91 LDA CURRENT_BATTLE_GROUP
    case 0xC24764: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    case 0xC24767: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DBu : 0x0001DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    // Overlapping static entry reached from 0xC24767.
    case 0xC24769: {
        Instruction step(cpu, 0x01, 0x0000D0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    case 0xC2476A: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC24769.
    case 0xC2476B: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    case 0xC2476C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC2476B.
    case 0xC2476D: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC2476C.
    case 0xC2476E: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:95 STA GIYGAS_PHASE
    case 0xC2476F: {
        Instruction step(cpu, 0x8D, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24772: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00D89Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24772.
    case 0xC24774: {
        Instruction step(cpu, 0xD8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24775: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24777: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x0000CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24777.
    case 0xC24779: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2477A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:98 LDA CURRENT_BATTLE_GROUP
    case 0xC2477C: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:99 ASL
    case 0xC2477F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:100 ASL
    case 0xC24780: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:101 STA @LOCAL0F
    case 0xC24781: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24783: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24785: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24787: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24789: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:103 CLC
    case 0xC2478B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:104 ADC @VIRTUAL0A
    case 0xC2478C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:105 STA @VIRTUAL0A
    case 0xC2478E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:106 LDA [@VIRTUAL0A]
    case 0xC24790: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:107 STA @LOCAL0E
    case 0xC24792: {
        Instruction step(cpu, 0x85, 0x00002Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:108 LDA @LOCAL0F
    case 0xC24794: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:109 INC
    case 0xC24796: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:110 INC
    case 0xC24797: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:111 CLC
    case 0xC24798: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:112 ADC @VIRTUAL06
    case 0xC24799: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:113 STA @VIRTUAL06
    case 0xC2479B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:114 LDA [@VIRTUAL06]
    case 0xC2479D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:116 STA @LOCAL0F
    case 0xC2479F: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:120 LDA CURRENT_BATTLE_GROUP
    case 0xC247A1: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:121 ASL
    case 0xC247A4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:122 ASL
    case 0xC247A5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:123 ASL
    case 0xC247A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:124 CLC
    case 0xC247A7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC247A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC247A8.
    case 0xC247AA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:126 TAX
    case 0xC247AB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:127 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC247AC: {
        Instruction step(cpu, 0xBF, 0xD0C60Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    case 0xC247B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC247B0.
    case 0xC247B2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:130 STA @LOCAL0D
    case 0xC247B3: {
        Instruction step(cpu, 0x85, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:138 STZ MIRROR_ENEMY
    case 0xC247B5: {
        Instruction step(cpu, 0x9C, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:140 STZ @LOCAL0C
    case 0xC247B8: {
        Instruction step(cpu, 0x64, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC247BA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:142 STZ BATTLE_ITEM_USED ;huh... usually mother 2 optimizes this worse
    case 0xC247BC: {
        Instruction step(cpu, 0x9C, 0x00AB7Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC247BF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:144 STZ @LOCAL0B
    case 0xC247C1: {
        Instruction step(cpu, 0x64, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:153 STZ BATTLE_MONEY_SCRATCH
    case 0xC247C3: {
        Instruction step(cpu, 0x9C, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC247C6.
    case 0xC247C8: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247C9: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC247CC.
    case 0xC247CE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC247CF: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:155 JSL UNKNOWN_C08726
    case 0xC247D2: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:156 JSL UNKNOWN_C2E0E7
    case 0xC247D6: {
        Instruction step(cpu, 0x22, 0xC2E03Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:157 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC247DA: {
        Instruction step(cpu, 0x22, 0xC2C882u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:158 JSL LOAD_WINDOW_GFX
    case 0xC247DE: {
        Instruction step(cpu, 0x22, 0xC459ABu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247E2.
    case 0xC247E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247E5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247E7.
    case 0xC247E9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247EA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247EC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247EC.
    case 0xC247EE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247EF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247EF.
    case 0xC247F1: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247F2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    case 0xC247F6: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247F4.
    case 0xC247F7: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/main_battle_routine.asm:160 COPY_TO_VRAM1 BUFFER, $6000, $3800, $00
    // Overlapping static entry reached from 0xC247F7.
    case 0xC247F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x002BA4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:161 LDY @LOCAL0D
    case 0xC247FA: {
        Instruction step(cpu, 0xA4, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:161 LDY @LOCAL0D
    // Overlapping static entry reached from 0xC247F9.
    case 0xC247FB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:162 LDX @LOCAL0F
    case 0xC247FC: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:169 LDA @LOCAL0E
    case 0xC247FE: {
        Instruction step(cpu, 0xA5, 0x00002Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:170 JSL LOAD_BATTLE_BG
    case 0xC24800: {
        Instruction step(cpu, 0x22, 0xC2D0D5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:171 JSL UNKNOWN_C2EEE7
    case 0xC24804: {
        Instruction step(cpu, 0x22, 0xC2EE00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:172 LDY #0
    case 0xC24808: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:172 LDY #0
    // Overlapping static entry reached from 0xC24808.
    case 0xC2480A: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:174 STY @LOCAL0A
    case 0xC2480B: {
        Instruction step(cpu, 0x84, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:178 BRA @UNKNOWN4
    case 0xC2480D: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:180 SEP #PROC_FLAGS::ACCUM8
    case 0xC2480F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    case 0xC24811: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    case 0xC24813: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC24811.
    case 0xC24814: {
        Instruction step(cpu, 0x0E, 0x004EA2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    case 0xC24815: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24815.
    case 0xC24817: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:183 REP #PROC_FLAGS::ACCUM8
    case 0xC24818: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:184 TYA
    case 0xC2481A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:185 TXY
    case 0xC2481B: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:186 JSL MULT168
    case 0xC2481C: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:187 CLC
    case 0xC24820: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24821: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24821.
    case 0xC24823: {
        Instruction step(cpu, 0xA1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    case 0xC24824: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    // Overlapping static entry reached from 0xC24823.
    case 0xC24825: {
        Instruction step(cpu, 0xED, 0x00C08Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:191 LDY @LOCAL0A
    case 0xC24828: {
        Instruction step(cpu, 0xA4, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:192 INY
    case 0xC2482A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:193 STY @LOCAL0A
    case 0xC2482B: {
        Instruction step(cpu, 0x84, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    case 0xC2482D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2482D.
    case 0xC2482F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:201 BCC @UNKNOWN3
    case 0xC24830: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:202 STZ HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC24832: {
        Instruction step(cpu, 0x9C, 0x00ABE1u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:203 LDY #0
    case 0xC24835: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:203 LDY #0
    // Overlapping static entry reached from 0xC24835.
    case 0xC24837: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:204 STY @LOCAL09
    case 0xC24838: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:205 STZ @LOCAL10
    case 0xC2483A: {
        Instruction step(cpu, 0x64, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:206 JMP @UNKNOWN9
    case 0xC2483C: {
        Instruction step(cpu, 0x4C, 0x0048E1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:209 LDA @LOCAL10
    case 0xC2483F: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:210 CLC
    case 0xC24841: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:211 ADC #.LOWORD(GAME_STATE)
    case 0xC24842: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:211 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24842.
    case 0xC24844: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:212 TAX
    case 0xC24845: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:213 LDA a:game_state::party_members,X
    case 0xC24846: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    case 0xC24849: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC24849.
    case 0xC2484B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:219 STA @VIRTUAL04
    case 0xC2484C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:220 STA @LOCAL08
    case 0xC2484E: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:221 LDA @VIRTUAL04
    case 0xC24850: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:222 BEQ @UNKNOWN7
    case 0xC24852: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:223 LDA @VIRTUAL04
    case 0xC24854: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:224 CMP #4
    case 0xC24856: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:224 CMP #4
    // Overlapping static entry reached from 0xC24856.
    case 0xC24858: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC24859: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC2485B: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:226 LDA @LOCAL10
    case 0xC2485D: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    case 0xC2485F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2485F.
    case 0xC24861: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:228 JSL MULT168
    case 0xC24862: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:229 CLC
    case 0xC24866: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24867: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24867.
    case 0xC24869: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:231 TAX
    case 0xC2486A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:232 LDA @VIRTUAL04
    case 0xC2486B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:233 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC2486D: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:234 BRA @UNKNOWN8
    case 0xC24871: {
        Instruction step(cpu, 0x80, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:236 LDA @VIRTUAL04
    case 0xC24873: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:237 CMP #5
    case 0xC24875: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:237 CMP #5
    // Overlapping static entry reached from 0xC24875.
    case 0xC24877: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:238 BCC @UNKNOWN8
    case 0xC24878: {
        Instruction step(cpu, 0x90, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:239 LDA @LOCAL10
    case 0xC2487A: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    case 0xC2487C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2487C.
    case 0xC2487E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:241 JSL MULT168
    case 0xC2487F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:242 STA @VIRTUAL02
    case 0xC24883: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:243 CLC
    case 0xC24885: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24886: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24886.
    case 0xC24888: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:245 TAX
    case 0xC24889: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:246 STX @LOCAL07
    case 0xC2488A: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:247 LDA @VIRTUAL04
    case 0xC2488C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:248 ASL
    case 0xC2488E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:249 TAX
    case 0xC2488F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:250 INX
    case 0xC24890: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:251 LDA f:NPC_AI_TABLE,X
    case 0xC24891: {
        Instruction step(cpu, 0xBF, 0xD59DDAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    case 0xC24895: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC24895.
    case 0xC24897: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:253 LDX @LOCAL07
    case 0xC24898: {
        Instruction step(cpu, 0xA6, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:254 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2489A: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:255 LDX @VIRTUAL02
    case 0xC2489E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:256 SEP #PROC_FLAGS::ACCUM8
    case 0xC248A0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:257 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC248A2: {
        Instruction step(cpu, 0x9E, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:258 REP #PROC_FLAGS::ACCUM8
    case 0xC248A5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:259 LDA @VIRTUAL04
    case 0xC248A7: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC248A9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:261 LDX @VIRTUAL02
    case 0xC248AB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:262 STA BATTLERS_TABLE+battler::npc_id,X
    case 0xC248AD: {
        Instruction step(cpu, 0x9D, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:263 LDY @LOCAL09
    case 0xC248B0: {
        Instruction step(cpu, 0xA4, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC248B2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:265 TYA
    case 0xC248B4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC248B5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:267 LDX @VIRTUAL02
    case 0xC248B7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:268 STA BATTLERS_TABLE+16,X
    case 0xC248B9: {
        Instruction step(cpu, 0x9D, 0x00A1BEu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC248BC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:270 TYA
    case 0xC248BE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:271 ASL
    case 0xC248BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:273 CLC
    case 0xC248C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:274 ADC #.LOWORD(GAME_STATE)
    case 0xC248C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:274 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC248C1.
    case 0xC248C3: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:275 TAX
    case 0xC248C4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:276 LDA a:game_state::party_npc_1_hp,X
    case 0xC248C5: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:281 LDX @VIRTUAL02
    case 0xC248C8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:282 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC248CA: {
        Instruction step(cpu, 0x9D, 0x00A1C1u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:283 LDX @VIRTUAL02
    case 0xC248CD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:284 STA BATTLERS_TABLE+battler::hp,X
    case 0xC248CF: {
        Instruction step(cpu, 0x9D, 0x00A1BFu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:285 INY
    case 0xC248D2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:286 STY @LOCAL09
    case 0xC248D3: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:287 LDX @VIRTUAL02
    case 0xC248D5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:288 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC248D7: {
        Instruction step(cpu, 0x9E, 0x00A1C7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:289 LDX @VIRTUAL02
    case 0xC248DA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:290 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC248DC: {
        Instruction step(cpu, 0x9E, 0x00A1C5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:292 INC @LOCAL10
    case 0xC248DF: {
        Instruction step(cpu, 0xE6, 0x000031u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:294 LDA @LOCAL10
    case 0xC248E1: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:295 CMP #6
    case 0xC248E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:295 CMP #6
    // Overlapping static entry reached from 0xC248E3.
    case 0xC248E5: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC248E6: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC248E8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC248EA: {
        Instruction step(cpu, 0x4C, 0x00483Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:297 JSL UNKNOWN_C2F0D1
    case 0xC248ED: {
        Instruction step(cpu, 0x22, 0xC2EFEEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:298 LDY #0
    case 0xC248F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:298 LDY #0
    // Overlapping static entry reached from 0xC248F1.
    case 0xC248F3: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:299 STY @LOCAL10
    case 0xC248F4: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:300 BRA @UNKNOWN12
    case 0xC248F6: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:302 TYA
    case 0xC248F8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    case 0xC248F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC248F9.
    case 0xC248FB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:304 JSL MULT168
    case 0xC248FC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:305 CLC
    case 0xC24900: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC24901: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC24901.
    case 0xC24903: {
        Instruction step(cpu, 0xA4, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:307 TAX
    case 0xC24904: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:308 STX @LOCAL07
    case 0xC24905: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:309 LDY @LOCAL10
    case 0xC24907: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:310 TYA
    case 0xC24909: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:311 ASL
    case 0xC2490A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:312 TAX
    case 0xC2490B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:313 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2490C: {
        Instruction step(cpu, 0xBD, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:314 LDX @LOCAL07
    case 0xC2490F: {
        Instruction step(cpu, 0xA6, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:315 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24911: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:316 LDY @LOCAL10
    case 0xC24915: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:317 INY
    case 0xC24917: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:318 STY @LOCAL10
    case 0xC24918: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:320 CPY ENEMIES_IN_BATTLE
    case 0xC2491A: {
        Instruction step(cpu, 0xCC, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:321 BCC @UNKNOWN11
    case 0xC2491D: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:322 JSL UNKNOWN_C2F121
    case 0xC2491F: {
        Instruction step(cpu, 0x22, 0xC2F03Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:323 JSL UNKNOWN_C2F8F9
    case 0xC24923: {
        Instruction step(cpu, 0x22, 0xC2F812u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:324 JSL UNKNOWN_C47F87
    case 0xC24927: {
        Instruction step(cpu, 0x22, 0xC45C1Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:325 LDA #24
    case 0xC2492B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:325 LDA #24
    // Overlapping static entry reached from 0xC2492B.
    case 0xC2492D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:326 JSL UNKNOWN_C0856B
    case 0xC2492E: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:327 LDA #1
    case 0xC24932: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:327 LDA #1
    // Overlapping static entry reached from 0xC24932.
    case 0xC24934: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:328 STA BATTLE_MODE_FLAG
    case 0xC24935: {
        Instruction step(cpu, 0x8D, 0x00993Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:329 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24938: {
        Instruction step(cpu, 0xAD, 0x00A18Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    case 0xC2493B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2493B.
    case 0xC2493D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:331 JSL MULT168
    case 0xC2493E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:332 CLC
    case 0xC24942: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    case 0xC24943: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24943.
    case 0xC24945: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:334 TAX
    case 0xC24946: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:335 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24947: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    case 0xC2494B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC2494B.
    case 0xC2494D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:337 JSL CHANGE_MUSIC
    case 0xC2494E: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:338 JSL UNKNOWN_C08744
    case 0xC24952: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:339 LDX #1
    case 0xC24956: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:339 LDX #1
    // Overlapping static entry reached from 0xC24956.
    case 0xC24958: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:340 TXA
    case 0xC24959: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:341 JSL FADE_IN
    case 0xC2495A: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:342 LDA BATTLE_MODE
    case 0xC2495E: {
        Instruction step(cpu, 0xAD, 0x005148u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24961: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24963: {
        Instruction step(cpu, 0x4C, 0x004C1Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:344 LDA @LOCAL12
    case 0xC24966: {
        Instruction step(cpu, 0xA5, 0x000035u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:345 JSL UNKNOWN_C1DCCB
    case 0xC24968: {
        Instruction step(cpu, 0x22, 0xC1DAA6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:346 LDA #0
    case 0xC2496C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:346 LDA #0
    // Overlapping static entry reached from 0xC2496C.
    case 0xC2496E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:347 STA @VIRTUAL02
    case 0xC2496F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:348 TAY
    case 0xC24971: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:349 STY @LOCAL10
    case 0xC24972: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:350 JMP @UNKNOWN19
    case 0xC24974: {
        Instruction step(cpu, 0x4C, 0x004A41u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC24977: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:354 TYA
    case 0xC24979: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:355 CLC
    case 0xC2497A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:356 ADC #.LOWORD(GAME_STATE)
    case 0xC2497B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:356 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2497B.
    case 0xC2497D: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:357 TAX
    case 0xC2497E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:358 LDA a:game_state::party_members,X
    case 0xC2497F: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    case 0xC24982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    // Overlapping static entry reached from 0xC24982.
    case 0xC24984: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:363 STA @VIRTUAL04
    case 0xC24985: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:364 STA @LOCAL08
    case 0xC24987: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:365 LDA @VIRTUAL04
    case 0xC24989: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:366 BEQ @UNKNOWN16
    case 0xC2498B: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:367 LDA @VIRTUAL04
    case 0xC2498D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:368 CMP #4
    case 0xC2498F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:368 CMP #4
    // Overlapping static entry reached from 0xC2498F.
    case 0xC24991: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24992: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24994: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:370 TYA
    case 0xC24996: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    case 0xC24997: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24997.
    case 0xC24999: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:372 JSL MULT168
    case 0xC2499A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:373 CLC
    case 0xC2499E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2499F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2499F.
    case 0xC249A1: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:375 TAX
    case 0xC249A2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:376 LDA @VIRTUAL04
    case 0xC249A3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:377 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC249A5: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:378 JMP @UNKNOWN18
    case 0xC249A9: {
        Instruction step(cpu, 0x4C, 0x004A3Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:380 LDA @VIRTUAL04
    case 0xC249AC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:381 CMP #5
    case 0xC249AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:381 CMP #5
    // Overlapping static entry reached from 0xC249AE.
    case 0xC249B0: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC249B1: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC249B3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC249B5: {
        Instruction step(cpu, 0x4C, 0x004A3Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DAu : 0x009DDAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC249B8.
    case 0xC249BA: {
        Instruction step(cpu, 0x9D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249BB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC249BD.
    case 0xC249BF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC249C0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:384 LDA @VIRTUAL04
    case 0xC249C2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:385 ASL
    case 0xC249C4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:387 STA @LOCAL09
    case 0xC249C5: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249C7: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249C9: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249CB: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC249CD: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:392 CLC
    case 0xC249CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:393 ADC @VIRTUAL0A
    case 0xC249D0: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:394 STA @VIRTUAL0A
    case 0xC249D2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:395 LDA [@VIRTUAL0A]
    case 0xC249D4: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    case 0xC249D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC249D6.
    case 0xC249D8: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:397 AND #$0001
    case 0xC249D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:397 AND #$0001
    // Overlapping static entry reached from 0xC249D9.
    case 0xC249DB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:398 BEQ @UNKNOWN18
    case 0xC249DC: {
        Instruction step(cpu, 0xF0, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:399 TYA
    case 0xC249DE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    case 0xC249DF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC249DF.
    case 0xC249E1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:401 JSL MULT168
    case 0xC249E2: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:403 STA @LOCAL06
    case 0xC249E6: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:407 CLC
    case 0xC249E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC249E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC249E9.
    case 0xC249EB: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:409 TAX
    case 0xC249EC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:411 LDA @LOCAL09
    case 0xC249ED: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:415 INC
    case 0xC249EF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:416 CLC
    case 0xC249F0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:417 ADC @VIRTUAL06
    case 0xC249F1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:418 STA @VIRTUAL06
    case 0xC249F3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:419 LDA [@VIRTUAL06]
    case 0xC249F5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    case 0xC249F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    // Overlapping static entry reached from 0xC249F7.
    case 0xC249F9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:421 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC249FA: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:422 LDA @VIRTUAL02
    case 0xC249FE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:423 SEP #PROC_FLAGS::ACCUM8
    case 0xC24A00: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC24A02: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BEu : 0x00A1BEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC24A02.
    case 0xC24A04: {
        Instruction step(cpu, 0xA1, 0x000091u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:426 STA (@LOCAL06),Y
    case 0xC24A05: {
        Instruction step(cpu, 0x91, 0x00001Du, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:426 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A04.
    case 0xC24A06: {
        Instruction step(cpu, 0x1D, 0x0020C2u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:430 REP #PROC_FLAGS::ACCUM8
    case 0xC24A07: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:431 LDA @VIRTUAL02
    case 0xC24A09: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:432 ASL
    case 0xC24A0B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:434 CLC
    case 0xC24A0C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:435 ADC #.LOWORD(GAME_STATE)
    case 0xC24A0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:435 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24A0D.
    case 0xC24A0F: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:436 TAX
    case 0xC24A10: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:437 LDA a:game_state::party_npc_1_hp,X
    case 0xC24A11: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:438 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    case 0xC24A14: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000C1u : 0x00A1C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:438 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    // Overlapping static entry reached from 0xC24A14.
    case 0xC24A16: {
        Instruction step(cpu, 0xA1, 0x000091u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:439 STA (@LOCAL06),Y
    case 0xC24A17: {
        Instruction step(cpu, 0x91, 0x00001Du, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:439 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A16.
    case 0xC24A18: {
        Instruction step(cpu, 0x1D, 0x00BFA0u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:440 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    case 0xC24A19: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BFu : 0x00A1BFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:440 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    // Overlapping static entry reached from 0xC24A19.
    case 0xC24A1B: {
        Instruction step(cpu, 0xA1, 0x000091u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:441 STA (@LOCAL06),Y
    case 0xC24A1C: {
        Instruction step(cpu, 0x91, 0x00001Du, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:441 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A1B.
    case 0xC24A1D: {
        Instruction step(cpu, 0x1D, 0x0002E6u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:442 INC @VIRTUAL02
    case 0xC24A1E: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:443 LDX @LOCAL06
    case 0xC24A20: {
        Instruction step(cpu, 0xA6, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:444 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC24A22: {
        Instruction step(cpu, 0x9E, 0x00A1C7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:445 LDX @LOCAL06
    case 0xC24A25: {
        Instruction step(cpu, 0xA6, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:446 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC24A27: {
        Instruction step(cpu, 0x9E, 0x00A1C5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:447 LDX @LOCAL06
    case 0xC24A2A: {
        Instruction step(cpu, 0xA6, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:462 SEP #PROC_FLAGS::ACCUM8
    case 0xC24A2C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:463 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC24A2E: {
        Instruction step(cpu, 0x9E, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:464 REP #PROC_FLAGS::ACCUM8
    case 0xC24A31: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:465 LDA @VIRTUAL04
    case 0xC24A33: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:466 SEP #PROC_FLAGS::ACCUM8
    case 0xC24A35: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    case 0xC24A37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BDu : 0x00A1BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    // Overlapping static entry reached from 0xC24A37.
    case 0xC24A39: {
        Instruction step(cpu, 0xA1, 0x000091u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:469 STA (@LOCAL06),Y
    case 0xC24A3A: {
        Instruction step(cpu, 0x91, 0x00001Du, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:469 STA (@LOCAL06),Y
    // Overlapping static entry reached from 0xC24A39.
    case 0xC24A3B: {
        Instruction step(cpu, 0x1D, 0x0031A4u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:474 LDY @LOCAL10
    case 0xC24A3C: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:475 INY
    case 0xC24A3E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:476 STY @LOCAL10
    case 0xC24A3F: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:478 CPY #6
    case 0xC24A41: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:478 CPY #6
    // Overlapping static entry reached from 0xC24A41.
    case 0xC24A43: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24A44: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24A46: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24A48: {
        Instruction step(cpu, 0x4C, 0x004977u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:480 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24A4B: {
        Instruction step(cpu, 0x22, 0xC1DB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    case 0xC24A4F: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC24A60.
    case 0xC24A52: {
        Instruction step(cpu, 0xC1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC24A53: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC24A52.
    case 0xC24A54: {
        Instruction step(cpu, 0x4C, 0x00C087u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    case 0xC24A57: {
        Instruction step(cpu, 0x22, 0xC2DAB4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:486 LDA PAD_PRESS
    case 0xC24A5B: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    case 0xC24A5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC24A5E.
    case 0xC24A60: {
        Instruction step(cpu, 0x10, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24A61: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24A60.
    case 0xC24A62: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24A63: {
        Instruction step(cpu, 0x4C, 0x004C03u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24A62.
    case 0xC24A64: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:489 LDA PAD_PRESS
    case 0xC24A66: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    case 0xC24A69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC24A69.
    case 0xC24A6B: {
        Instruction step(cpu, 0x20, 0x004EF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:491 BEQ @UNKNOWN23
    case 0xC24A6C: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:492 LDA CURRENT_BATTLE_GROUP
    case 0xC24A6E: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:493 JSL ENEMY_SELECT_MODE
    case 0xC24A71: {
        Instruction step(cpu, 0x22, 0xC1DF69u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:494 STA @LOCAL10
    case 0xC24A75: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:495 STA CURRENT_BATTLE_GROUP
    case 0xC24A77: {
        Instruction step(cpu, 0x8D, 0x004E12u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00D89Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24A7A.
    case 0xC24A7C: {
        Instruction step(cpu, 0xD8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A7D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x0000CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24A7F.
    case 0xC24A81: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24A82: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:497 LDA @LOCAL10
    case 0xC24A84: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:498 ASL
    case 0xC24A86: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:499 ASL
    case 0xC24A87: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:500 TAX
    case 0xC24A88: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A89: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A8B: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A8D: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24A8F: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:502 CLC
    case 0xC24A91: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:503 ADC @VIRTUAL0A
    case 0xC24A92: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:504 STA @VIRTUAL0A
    case 0xC24A94: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:505 LDA [@VIRTUAL0A]
    case 0xC24A96: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:506 STA @LOCAL0E
    case 0xC24A98: {
        Instruction step(cpu, 0x85, 0x00002Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:507 TXA
    case 0xC24A9A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:508 INC
    case 0xC24A9B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:509 INC
    case 0xC24A9C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:510 CLC
    case 0xC24A9D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:511 ADC @VIRTUAL06
    case 0xC24A9E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:512 STA @VIRTUAL06
    case 0xC24AA0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:513 LDA [@VIRTUAL06]
    case 0xC24AA2: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:515 STA @LOCAL0F
    case 0xC24AA4: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:519 LDA @LOCAL10
    case 0xC24AA6: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:520 ASL
    case 0xC24AA8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:521 ASL
    case 0xC24AA9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:522 ASL
    case 0xC24AAA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:523 CLC
    case 0xC24AAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC24AAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC24AAC.
    case 0xC24AAE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:525 TAX
    case 0xC24AAF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:526 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC24AB0: {
        Instruction step(cpu, 0xBF, 0xD0C60Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    case 0xC24AB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC24AB4.
    case 0xC24AB6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:529 STA @LOCAL0D
    case 0xC24AB7: {
        Instruction step(cpu, 0x85, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:533 JMP @UNKNOWN32
    case 0xC24AB9: {
        Instruction step(cpu, 0x4C, 0x004B6Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:535 LDA PAD_HELD
    case 0xC24ABC: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    case 0xC24ABF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC24ABF.
    case 0xC24AC1: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    case 0xC24AC2: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xC24AC1.
    case 0xC24AC3: {
        Instruction step(cpu, 0x0C, 0x0033A5u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:538 LDA @LOCAL11
    case 0xC24AC4: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:539 CMP #15
    case 0xC24AC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:539 CMP #15
    // Overlapping static entry reached from 0xC24AC6.
    case 0xC24AC8: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:540 BCS @UNKNOWN25
    case 0xC24AC9: {
        Instruction step(cpu, 0xB0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:541 INC @LOCAL11
    case 0xC24ACB: {
        Instruction step(cpu, 0xE6, 0x000033u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:542 JMP @UNKNOWN32
    case 0xC24ACD: {
        Instruction step(cpu, 0x4C, 0x004B6Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:544 LDA PAD_HELD
    case 0xC24AD0: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    case 0xC24AD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC24AD3.
    case 0xC24AD5: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:546 BEQ @UNKNOWN25
    case 0xC24AD6: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:547 LDA @LOCAL11
    case 0xC24AD8: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:548 CMP #1
    case 0xC24ADA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:548 CMP #1
    // Overlapping static entry reached from 0xC24ADA.
    case 0xC24ADC: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24ADD: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24ADF: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:550 DEC @LOCAL11
    case 0xC24AE1: {
        Instruction step(cpu, 0xC6, 0x000033u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:551 JMP @UNKNOWN32
    case 0xC24AE3: {
        Instruction step(cpu, 0x4C, 0x004B6Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:553 LDA PAD_HELD
    case 0xC24AE6: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    case 0xC24AE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC24AE9.
    case 0xC24AEB: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    case 0xC24AEC: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    // Overlapping static entry reached from 0xC24AEB.
    case 0xC24AED: {
        Instruction step(cpu, 0x0D, 0x0035A5u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:556 LDA @LOCAL12
    case 0xC24AEE: {
        Instruction step(cpu, 0xA5, 0x000035u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:557 CMP #1
    case 0xC24AF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:557 CMP #1
    // Overlapping static entry reached from 0xC24AF0.
    case 0xC24AF2: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24AF3: {
        Instruction step(cpu, 0x90, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24AF5: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:559 DEC @LOCAL12
    case 0xC24AF7: {
        Instruction step(cpu, 0xC6, 0x000035u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:560 BRA @UNKNOWN32
    case 0xC24AF9: {
        Instruction step(cpu, 0x80, 0x000074u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:562 LDA PAD_HELD
    case 0xC24AFB: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    case 0xC24AFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    // Overlapping static entry reached from 0xC24AFE.
    case 0xC24B00: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:564 BEQ @UNKNOWN27
    case 0xC24B01: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:565 LDA @LOCAL12
    case 0xC24B03: {
        Instruction step(cpu, 0xA5, 0x000035u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    case 0xC24B05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000063u : 0x000063u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    // Overlapping static entry reached from 0xC24B05.
    case 0xC24B07: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:567 BCS @UNKNOWN27
    case 0xC24B08: {
        Instruction step(cpu, 0xB0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:568 INC @LOCAL12
    case 0xC24B0A: {
        Instruction step(cpu, 0xE6, 0x000035u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:569 BRA @UNKNOWN32
    case 0xC24B0C: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:571 LDA PAD_PRESS
    case 0xC24B0E: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    case 0xC24B11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24B40.
    case 0xC24B12: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24B11.
    case 0xC24B13: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:573 BEQ @UNKNOWN28
    case 0xC24B14: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:574 LDA HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC24B16: {
        Instruction step(cpu, 0xAD, 0x00ABE1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:575 STA @LOCAL12
    case 0xC24B19: {
        Instruction step(cpu, 0x85, 0x000035u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:576 BRA @UNKNOWN32
    case 0xC24B1B: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:578 LDA PAD_PRESS
    case 0xC24B1D: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    case 0xC24B20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC24B20.
    case 0xC24B22: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:580 BEQ @UNKNOWN29
    case 0xC24B23: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:581 LDA DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B25: {
        Instruction step(cpu, 0xAD, 0x00AC45u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:582 JSL SHOW_PSI_ANIMATION
    case 0xC24B28: {
        Instruction step(cpu, 0x22, 0xC2E06Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:583 LDX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B2C: {
        Instruction step(cpu, 0xAE, 0x00AC45u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:584 INX
    case 0xC24B2F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:585 STX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B30: {
        Instruction step(cpu, 0x8E, 0x00AC45u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:586 CPX #34
    case 0xC24B33: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:586 CPX #34
    // Overlapping static entry reached from 0xC24B33.
    case 0xC24B35: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:587 BNE @UNKNOWN29
    case 0xC24B36: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:588 STZ DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24B38: {
        Instruction step(cpu, 0x9C, 0x00AC45u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:590 LDA PAD_PRESS
    case 0xC24B3B: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    case 0xC24B3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC24B3E.
    case 0xC24B40: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24B41: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24B43: {
        Instruction step(cpu, 0x4C, 0x004A53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:593 LDX DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24B46: {
        Instruction step(cpu, 0xAE, 0x00AC49u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:594 LDA DEBUGGING_CURRENT_SWIRL
    case 0xC24B49: {
        Instruction step(cpu, 0xAD, 0x00AC47u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:595 JSL UNKNOWN_C4A67E
    case 0xC24B4C: {
        Instruction step(cpu, 0x22, 0xC47AE7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:596 LDX DEBUGGING_CURRENT_SWIRL
    case 0xC24B50: {
        Instruction step(cpu, 0xAE, 0x00AC47u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:597 INX
    case 0xC24B53: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:598 STX DEBUGGING_CURRENT_SWIRL
    case 0xC24B54: {
        Instruction step(cpu, 0x8E, 0x00AC47u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:599 CPX #8
    case 0xC24B57: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:599 CPX #8
    // Overlapping static entry reached from 0xC24B57.
    case 0xC24B59: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24B5A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24B5C: {
        Instruction step(cpu, 0x4C, 0x004A53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:601 STZ DEBUGGING_CURRENT_SWIRL
    case 0xC24B5F: {
        Instruction step(cpu, 0x9C, 0x00AC47u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:602 LDA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24B62: {
        Instruction step(cpu, 0xAD, 0x00AC49u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:603 INC
    case 0xC24B65: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:604 AND #$0003
    case 0xC24B66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:604 AND #$0003
    // Overlapping static entry reached from 0xC24B66.
    case 0xC24B68: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:605 STA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24B69: {
        Instruction step(cpu, 0x8D, 0x00AC49u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:606 JMP @UNKNOWN21
    case 0xC24B6C: {
        Instruction step(cpu, 0x4C, 0x004A53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:609 LDA #0
    case 0xC24B6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:609 LDA #0
    // Overlapping static entry reached from 0xC24B6F.
    case 0xC24B71: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:610 STA @LOCAL0B
    case 0xC24B72: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:614 LDA @LOCAL11
    case 0xC24B74: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:615 AND #$0001
    case 0xC24B76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:615 AND #$0001
    // Overlapping static entry reached from 0xC24B76.
    case 0xC24B78: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:616 BEQ @UNKNOWN33
    case 0xC24B79: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:617 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B7B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:618 LDA #1
    case 0xC24B7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    case 0xC24B7F: {
        Instruction step(cpu, 0x8D, 0x009B20u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC24B7D.
    case 0xC24B80: {
        Instruction step(cpu, 0x20, 0x00C29Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:621 REP #PROC_FLAGS::ACCUM8
    case 0xC24B82: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:621 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24B80.
    case 0xC24B83: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:622 LDA #1
    case 0xC24B84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:622 LDA #1
    // Overlapping static entry reached from 0xC24B84.
    case 0xC24B86: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:623 STA @LOCAL0B
    case 0xC24B87: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:629 LDA @LOCAL11
    case 0xC24B89: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:630 AND #$0002
    case 0xC24B8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:630 AND #$0002
    // Overlapping static entry reached from 0xC24B8B.
    case 0xC24B8D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:631 BEQ @UNKNOWN34
    case 0xC24B8E: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:632 LDA @LOCAL0B
    case 0xC24B90: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:633 CLC
    case 0xC24B92: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:634 ADC #.LOWORD(GAME_STATE)
    case 0xC24B93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:634 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24B93.
    case 0xC24B95: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:635 TAX
    case 0xC24B96: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:636 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B97: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:637 LDA #2
    case 0xC24B99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x009D02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:638 STA a:game_state::party_members,X
    case 0xC24B9B: {
        Instruction step(cpu, 0x9D, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:638 STA a:game_state::party_members,X
    // Overlapping static entry reached from 0xC24B99.
    case 0xC24B9C: {
        Instruction step(cpu, 0x77, 0x000000u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:639 REP #PROC_FLAGS::ACCUM8
    case 0xC24B9E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:640 LDA @LOCAL0B
    case 0xC24BA0: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:641 INC
    case 0xC24BA2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:642 STA @LOCAL0B
    case 0xC24BA3: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:655 LDA @LOCAL11
    case 0xC24BA5: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:656 AND #$0004
    case 0xC24BA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:656 AND #$0004
    // Overlapping static entry reached from 0xC24BA7.
    case 0xC24BA9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:657 BEQ @UNKNOWN35
    case 0xC24BAA: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:658 LDA @LOCAL0B
    case 0xC24BAC: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:659 CLC
    case 0xC24BAE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:660 ADC #.LOWORD(GAME_STATE)
    case 0xC24BAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:660 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24BAF.
    case 0xC24BB1: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:661 TAX
    case 0xC24BB2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:662 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BB3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:663 LDA #3
    case 0xC24BB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x009D03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:664 STA a:game_state::party_members,X
    case 0xC24BB7: {
        Instruction step(cpu, 0x9D, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:664 STA a:game_state::party_members,X
    // Overlapping static entry reached from 0xC24BB5.
    case 0xC24BB8: {
        Instruction step(cpu, 0x77, 0x000000u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:665 REP #PROC_FLAGS::ACCUM8
    case 0xC24BBA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:666 LDA @LOCAL0B
    case 0xC24BBC: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:667 INC
    case 0xC24BBE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:668 STA @LOCAL0B
    case 0xC24BBF: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:681 LDA @LOCAL11
    case 0xC24BC1: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:682 AND #$0008
    case 0xC24BC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:682 AND #$0008
    // Overlapping static entry reached from 0xC24BC3.
    case 0xC24BC5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:683 BEQ @UNKNOWN36
    case 0xC24BC6: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:684 LDA @LOCAL0B
    case 0xC24BC8: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:685 CLC
    case 0xC24BCA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:686 ADC #.LOWORD(GAME_STATE)
    case 0xC24BCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:686 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24BCB.
    case 0xC24BCD: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:687 TAX
    case 0xC24BCE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:688 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BCF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:689 LDA #4
    case 0xC24BD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x009D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:690 STA a:game_state::party_members,X
    case 0xC24BD3: {
        Instruction step(cpu, 0x9D, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:690 STA a:game_state::party_members,X
    // Overlapping static entry reached from 0xC24BD1.
    case 0xC24BD4: {
        Instruction step(cpu, 0x77, 0x000000u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:691 REP #PROC_FLAGS::ACCUM8
    case 0xC24BD6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:692 LDA @LOCAL0B
    case 0xC24BD8: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:693 INC
    case 0xC24BDA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:694 STA @LOCAL0B
    case 0xC24BDB: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:707 LDA @LOCAL0B
    case 0xC24BDD: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:712 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BDF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:713 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24BE1: {
        Instruction step(cpu, 0x8D, 0x009B55u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:714 BRA @UNKNOWN38
    case 0xC24BE4: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:718 CLC
    case 0xC24BE6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:719 ADC #.LOWORD(GAME_STATE)
    case 0xC24BE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:719 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24BE7.
    case 0xC24BE9: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:720 TAX
    case 0xC24BEA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:721 SEP #PROC_FLAGS::ACCUM8
    case 0xC24BEB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:722 STZ a:game_state::party_members,X
    case 0xC24BED: {
        Instruction step(cpu, 0x9E, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:723 REP #PROC_FLAGS::ACCUM8
    case 0xC24BF0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:724 LDA @LOCAL0B
    case 0xC24BF2: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:725 INC
    case 0xC24BF4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:726 STA @LOCAL0B
    case 0xC24BF5: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:733 REP #PROC_FLAGS::ACCUM8
    case 0xC24BF7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:734 LDA @LOCAL0B
    case 0xC24BF9: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:735 CMP #$0006
    case 0xC24BFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:735 CMP #$0006
    // Overlapping static entry reached from 0xC24BFB.
    case 0xC24BFD: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:739 BCC @UNKNOWN37
    case 0xC24BFE: {
        Instruction step(cpu, 0x90, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:740 JMP @UNKNOWN2
    case 0xC24C00: {
        Instruction step(cpu, 0x4C, 0x0047B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:742 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24C03: {
        Instruction step(cpu, 0xAD, 0x00A18Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    case 0xC24C06: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24C06.
    case 0xC24C08: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:744 JSL MULT168
    case 0xC24C09: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:746 CLC
    case 0xC24C0D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    case 0xC24C0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24C0E.
    case 0xC24C10: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:748 TAX
    case 0xC24C11: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:749 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24C12: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    case 0xC24C16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    // Overlapping static entry reached from 0xC24C16.
    case 0xC24C18: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:751 JSL CHANGE_MUSIC
    case 0xC24C19: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    case 0xC24C1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    // Overlapping static entry reached from 0xC24C1D.
    case 0xC24C1F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:754 JSL GET_EVENT_FLAG
    case 0xC24C20: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:755 CMP #0
    case 0xC24C24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:755 CMP #0
    // Overlapping static entry reached from 0xC24C24.
    case 0xC24C26: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:756 BEQ @UNKNOWN41
    case 0xC24C27: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24C29: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000082u : 0x00A382u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24C29.
    case 0xC24C2B: {
        Instruction step(cpu, 0xA3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24C2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0000D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24C2B.
    case 0xC24C2D: {
        Instruction step(cpu, 0xD7, 0x000000u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24C2C.
    case 0xC24C2E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:759 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24C2F: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:760 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C33: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:761 LDA #1
    case 0xC24C35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    case 0xC24C37: {
        Instruction step(cpu, 0x8D, 0x00A392u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    // Overlapping static entry reached from 0xC24C35.
    case 0xC24C38: {
        Instruction step(cpu, 0x92, 0x0000A3u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:763 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::ally_or_enemy
    case 0xC24C3A: {
        Instruction step(cpu, 0x9C, 0x00A390u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:764 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24C3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x008DD7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24C3F: {
        Instruction step(cpu, 0x8D, 0x00A391u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24C3D.
    case 0xC24C40: {
        Instruction step(cpu, 0x91, 0x0000A3u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:768 REP #PROC_FLAGS::ACCUM8
    case 0xC24C42: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:769 LDA #0
    case 0xC24C44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:769 LDA #0
    // Overlapping static entry reached from 0xC24C44.
    case 0xC24C46: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:770 STA @LOCAL07
    case 0xC24C47: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:775 BRA @UNKNOWN45
    case 0xC24C49: {
        Instruction step(cpu, 0x80, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:778 CLC
    case 0xC24C4B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:779 ADC #.LOWORD(GAME_STATE)
    case 0xC24C4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:779 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24C4C.
    case 0xC24C4E: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:780 TAX
    case 0xC24C4F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:781 LDA a:game_state::party_members,X
    case 0xC24C50: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    case 0xC24C53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    // Overlapping static entry reached from 0xC24C53.
    case 0xC24C55: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:787 STA @VIRTUAL04
    case 0xC24C56: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:788 STA @LOCAL08
    case 0xC24C58: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:789 LDA @VIRTUAL04
    case 0xC24C5A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:790 BEQ @UNKNOWN44
    case 0xC24C5C: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:791 LDA @VIRTUAL04
    case 0xC24C5E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:792 CMP #4
    case 0xC24C60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:792 CMP #4
    // Overlapping static entry reached from 0xC24C60.
    case 0xC24C62: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24C63: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24C65: {
        Instruction step(cpu, 0xB0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:794 LDA @VIRTUAL04
    case 0xC24C67: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:795 DEC
    case 0xC24C69: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    case 0xC24C6A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24C6A.
    case 0xC24C6C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:797 JSL MULT168
    case 0xC24C6D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:798 CLC
    case 0xC24C71: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC24C72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x009C8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC24C72.
    case 0xC24C74: {
        Instruction step(cpu, 0x9C, 0x00BDAAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:800 TAX
    case 0xC24C75: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC24C76: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC24C74.
    case 0xC24C77: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    case 0xC24C79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    // Overlapping static entry reached from 0xC24C79.
    case 0xC24C7B: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    case 0xC24C7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC24C7C.
    case 0xC24C7E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:804 BNE @UNKNOWN44
    case 0xC24C7F: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24C81: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000082u : 0x00A382u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24C81.
    case 0xC24C83: {
        Instruction step(cpu, 0xA3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24C84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24C83.
    case 0xC24C85: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24C84.
    case 0xC24C86: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:807 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24C87: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:808 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C8B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:809 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24C8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24C8F: {
        Instruction step(cpu, 0x8D, 0x00A391u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24C8D.
    case 0xC24C90: {
        Instruction step(cpu, 0x91, 0x0000A3u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:811 BRA @UNKNOWN46
    case 0xC24C92: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:814 LDA @LOCAL07
    case 0xC24C94: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:815 INC
    case 0xC24C96: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:816 STA @LOCAL07
    case 0xC24C97: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:825 CMP #TOTAL_PARTY_COUNT
    case 0xC24C99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:825 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC24C99.
    case 0xC24C9B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:829 BCC @UNKNOWN42
    case 0xC24C9C: {
        Instruction step(cpu, 0x90, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:831 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24C9E: {
        Instruction step(cpu, 0x22, 0xC1DB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:832 LDA ENEMIES_IN_BATTLE
    case 0xC24CA2: {
        Instruction step(cpu, 0xAD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:833 JSR RAND_LIMIT
    case 0xC24CA5: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:835 ASL
    case 0xC24CA8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:836 TAX
    case 0xC24CA9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:837 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC24CAA: {
        Instruction step(cpu, 0xBD, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:839 STA @LOCAL0A
    case 0xC24CAD: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CAF.
    case 0xC24CB1: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CB1.
    case 0xC24CB3: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CB3.
    case 0xC24CB5: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CB4.
    case 0xC24CB6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24CB7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:845 LDA @LOCAL0A
    case 0xC24CB9: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    case 0xC24CBB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24CBB.
    case 0xC24CBD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:850 JSL MULT168
    case 0xC24CBE: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:853 STA @LOCAL0A
    case 0xC24CC2: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:857 CLC
    case 0xC24CC4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    case 0xC24CC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000047u : 0x000047u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC24CC5.
    case 0xC24CC7: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CC8: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CCA: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CCC: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24CCE: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:860 CLC
    case 0xC24CD0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:861 ADC @VIRTUAL0A
    case 0xC24CD1: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:862 STA @VIRTUAL0A
    case 0xC24CD3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:863 LDA [@VIRTUAL0A]
    case 0xC24CD5: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    case 0xC24CD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    // Overlapping static entry reached from 0xC24CD7.
    case 0xC24CD9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:865 STA ITEM_DROPPED
    case 0xC24CDA: {
        Instruction step(cpu, 0x8D, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:867 LDA @LOCAL0A
    case 0xC24CDD: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:871 CLC
    case 0xC24CDF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    case 0xC24CE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000046u : 0x000046u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC24CE0.
    case 0xC24CE2: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:873 CLC
    case 0xC24CE3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:874 ADC @VIRTUAL06
    case 0xC24CE4: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:875 STA @VIRTUAL06
    case 0xC24CE6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:876 LDA [@VIRTUAL06]
    case 0xC24CE8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    case 0xC24CEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    // Overlapping static entry reached from 0xC24CEA.
    case 0xC24CEC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:878 BEQ @RARITY_ZERO
    case 0xC24CED: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:879 CMP #1
    case 0xC24CEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:879 CMP #1
    // Overlapping static entry reached from 0xC24CEF.
    case 0xC24CF1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:880 BEQ @RARITY_ONE
    case 0xC24CF2: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:881 CMP #2
    case 0xC24CF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:881 CMP #2
    // Overlapping static entry reached from 0xC24CF4.
    case 0xC24CF6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:882 BEQ @RARITY_TWO
    case 0xC24CF7: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:883 CMP #3
    case 0xC24CF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:883 CMP #3
    // Overlapping static entry reached from 0xC24CF9.
    case 0xC24CFB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:884 BEQ @RARITY_THREE
    case 0xC24CFC: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:885 CMP #4
    case 0xC24CFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:885 CMP #4
    // Overlapping static entry reached from 0xC24CFE.
    case 0xC24D00: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:886 BEQ @RARITY_FOUR
    case 0xC24D01: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:887 CMP #5
    case 0xC24D03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:887 CMP #5
    // Overlapping static entry reached from 0xC24D03.
    case 0xC24D05: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:888 BEQ @RARITY_FIVE
    case 0xC24D06: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:889 CMP #6
    case 0xC24D08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:889 CMP #6
    // Overlapping static entry reached from 0xC24D08.
    case 0xC24D0A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:890 BEQ @RARITY_SIX
    case 0xC24D0B: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:891 BRA @RARITY_SEVEN
    case 0xC24D0D: {
        Instruction step(cpu, 0x80, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:893 JSL RAND
    case 0xC24D0F: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    case 0xC24D13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    // Overlapping static entry reached from 0xC24D13.
    case 0xC24D15: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:895 BEQ @RARITY_SEVEN
    case 0xC24D16: {
        Instruction step(cpu, 0xF0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:896 STZ ITEM_DROPPED
    case 0xC24D18: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:897 BRA @RARITY_SEVEN
    case 0xC24D1B: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:899 JSL RAND
    case 0xC24D1D: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    case 0xC24D21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    // Overlapping static entry reached from 0xC24D21.
    case 0xC24D23: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:901 BEQ @RARITY_SEVEN
    case 0xC24D24: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:902 STZ ITEM_DROPPED
    case 0xC24D26: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:903 BRA @RARITY_SEVEN
    case 0xC24D29: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:905 JSL RAND
    case 0xC24D2B: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    case 0xC24D2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    // Overlapping static entry reached from 0xC24D2F.
    case 0xC24D31: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:907 BEQ @RARITY_SEVEN
    case 0xC24D32: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:908 STZ ITEM_DROPPED
    case 0xC24D34: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:909 BRA @RARITY_SEVEN
    case 0xC24D37: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:911 JSL RAND
    case 0xC24D39: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    case 0xC24D3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    // Overlapping static entry reached from 0xC24D3D.
    case 0xC24D3F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:913 BEQ @RARITY_SEVEN
    case 0xC24D40: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:914 STZ ITEM_DROPPED
    case 0xC24D42: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:915 BRA @RARITY_SEVEN
    case 0xC24D45: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:917 JSL RAND
    case 0xC24D47: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    case 0xC24D4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    // Overlapping static entry reached from 0xC24D4B.
    case 0xC24D4D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:919 BEQ @RARITY_SEVEN
    case 0xC24D4E: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:920 STZ ITEM_DROPPED
    case 0xC24D50: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:921 BRA @RARITY_SEVEN
    case 0xC24D53: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:923 JSL RAND
    case 0xC24D55: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    case 0xC24D59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    // Overlapping static entry reached from 0xC24D59.
    case 0xC24D5B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:925 BEQ @RARITY_SEVEN
    case 0xC24D5C: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:926 STZ ITEM_DROPPED
    case 0xC24D5E: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:927 BRA @RARITY_SEVEN
    case 0xC24D61: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:929 JSL RAND
    case 0xC24D63: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    case 0xC24D67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    // Overlapping static entry reached from 0xC24D67.
    case 0xC24D69: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:931 BEQ @RARITY_SEVEN
    case 0xC24D6A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:932 STZ ITEM_DROPPED
    case 0xC24D6C: {
        Instruction step(cpu, 0x9C, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:934 LDA ITEM_DROPPED
    case 0xC24D6F: {
        Instruction step(cpu, 0xAD, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24D72: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24D74: {
        Instruction step(cpu, 0x4C, 0x004E00u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:936 LDX #0
    case 0xC24D77: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:936 LDX #0
    // Overlapping static entry reached from 0xC24D77.
    case 0xC24D79: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:937 STX @LOCAL10
    case 0xC24D7A: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:938 BRA @CONSOLATION_OUTER_LOOP_ENTRY
    case 0xC24D7C: {
        Instruction step(cpu, 0x80, 0x000078u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:940 LDY #8
    case 0xC24D7E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:940 LDY #8
    // Overlapping static entry reached from 0xC24D7E.
    case 0xC24D80: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:942 STY @LOCAL0A
    case 0xC24D81: {
        Instruction step(cpu, 0x84, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:946 BRA @CONSOLATION_INNER_LOOP_ENTRY
    case 0xC24D83: {
        Instruction step(cpu, 0x80, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:948 TYA
    case 0xC24D85: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    case 0xC24D86: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24D86.
    case 0xC24D88: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:950 JSL MULT168
    case 0xC24D89: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:952 STA @LOCAL09
    case 0xC24D8D: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:953 TAX
    case 0xC24D8F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:954 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC24D90: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    case 0xC24D93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    // Overlapping static entry reached from 0xC24D93.
    case 0xC24D95: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:956 BEQ @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24D96: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24D98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Eu : 0x00302Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D98.
    case 0xC24D9A: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24D9B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D9A.
    case 0xC24D9C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24D9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D9C.
    case 0xC24D9E: {
        Instruction step(cpu, 0xC2, 0x000000u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D9D.
    case 0xC24D9F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24DA0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:958 LDX @LOCAL10
    case 0xC24DA2: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:959 TXA
    case 0xC24DA4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DA9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24DAA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:961 STA @VIRTUAL02
    case 0xC24DAC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:962 LDA @LOCAL09
    case 0xC24DAE: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:963 TAX
    case 0xC24DB0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:964 LDA @VIRTUAL02
    case 0xC24DB1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB3: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB5: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB7: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24DB9: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:966 CLC
    case 0xC24DBB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:967 ADC @VIRTUAL0A
    case 0xC24DBC: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:968 STA @VIRTUAL0A
    case 0xC24DBE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:969 LDA [@VIRTUAL0A]
    case 0xC24DC0: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    case 0xC24DC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    // Overlapping static entry reached from 0xC24DC2.
    case 0xC24DC4: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:971 CMP BATTLERS_TABLE + battler::id,X
    case 0xC24DC5: {
        Instruction step(cpu, 0xDD, 0x00A1AEu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:972 BNE @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24DC8: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:973 LDA #7
    case 0xC24DCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:973 LDA #7
    // Overlapping static entry reached from 0xC24DCA.
    case 0xC24DCC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:974 JSR RAND_LIMIT
    case 0xC24DCD: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:975 PHA
    case 0xC24DD0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:976 LDA @VIRTUAL02
    case 0xC24DD1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:977 PLY
    case 0xC24DD3: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:978 STY @VIRTUAL02
    case 0xC24DD4: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:979 CLC
    case 0xC24DD6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:980 ADC @VIRTUAL02
    case 0xC24DD7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:981 INC
    case 0xC24DD9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:982 CLC
    case 0xC24DDA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:983 ADC @VIRTUAL06
    case 0xC24DDB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:984 STA @VIRTUAL06
    case 0xC24DDD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:985 LDA [@VIRTUAL06]
    case 0xC24DDF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    case 0xC24DE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    // Overlapping static entry reached from 0xC24DE1.
    case 0xC24DE3: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:987 STA ITEM_DROPPED
    case 0xC24DE4: {
        Instruction step(cpu, 0x8D, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:990 LDY @LOCAL0A
    case 0xC24DE7: {
        Instruction step(cpu, 0xA4, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:991 INY
    case 0xC24DE9: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:992 STY @LOCAL0A
    case 0xC24DEA: {
        Instruction step(cpu, 0x84, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    case 0xC24DEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24DEC.
    case 0xC24DEE: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1000 BCC @CONSOLATION_INNER_LOOP_BEGIN
    case 0xC24DEF: {
        Instruction step(cpu, 0x90, 0x000094u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1001 LDX @LOCAL10
    case 0xC24DF1: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1002 INX
    case 0xC24DF3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1003 STX @LOCAL10
    case 0xC24DF4: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1005 CPX #2
    case 0xC24DF6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1005 CPX #2
    // Overlapping static entry reached from 0xC24DF6.
    case 0xC24DF8: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24DF9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24DFB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24DFD: {
        Instruction step(cpu, 0x4C, 0x004D7Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1009 STZ @LOCAL09
    case 0xC24E00: {
        Instruction step(cpu, 0x64, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1013 LDA BATTLE_INITIATIVE
    case 0xC24E02: {
        Instruction step(cpu, 0xAD, 0x005142u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1014 BEQ @UNKNOWN64
    case 0xC24E05: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1015 CMP #1
    case 0xC24E07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1015 CMP #1
    // Overlapping static entry reached from 0xC24E07.
    case 0xC24E09: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1016 BEQ @UNKNOWN62
    case 0xC24E0A: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1017 CMP #2
    case 0xC24E0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1017 CMP #2
    // Overlapping static entry reached from 0xC24E0C.
    case 0xC24E0E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1018 BEQ @UNKNOWN63
    case 0xC24E0F: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1019 BRA @UNKNOWN64
    case 0xC24E11: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    case 0xC24E13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24E13.
    case 0xC24E15: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1023 STA @LOCAL09
    case 0xC24E16: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1027 BRA @UNKNOWN64
    case 0xC24E18: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    case 0xC24E1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC24E1A.
    case 0xC24E1C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1031 STA @LOCAL09
    case 0xC24E1D: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1036 STZ BATTLE_INITIATIVE
    case 0xC24E1F: {
        Instruction step(cpu, 0x9C, 0x005142u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24E22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24E22.
    case 0xC24E24: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24E25: {
        Instruction step(cpu, 0x22, 0xC1DB24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24E29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E29.
    case 0xC24E2B: {
        Instruction step(cpu, 0xA4, 0x00008Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    case 0xC24E2C: {
        Instruction step(cpu, 0x8D, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24E2B.
    case 0xC24E2D: {
        Instruction step(cpu, 0x72, 0x0000ABu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1041 LDA #1
    case 0xC24E2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1041 LDA #1
    // Overlapping static entry reached from 0xC24E2F.
    case 0xC24E31: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1042 JSL FIX_ATTACKER_NAME
    case 0xC24E32: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24E36.
    case 0xC24E38: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E39: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24E38.
    case 0xC24E3A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24E3B.
    case 0xC24E3D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24E3E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1044 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24E40: {
        Instruction step(cpu, 0xAD, 0x00A18Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    case 0xC24E43: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24E43.
    case 0xC24E45: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1046 JSL MULT168
    case 0xC24E46: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1047 CLC
    case 0xC24E4A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    case 0xC24E4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    // Overlapping static entry reached from 0xC24E4B.
    case 0xC24E4D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1049 CLC
    case 0xC24E4E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1050 ADC @VIRTUAL0A
    case 0xC24E4F: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1051 STA @VIRTUAL0A
    case 0xC24E51: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E53: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E53.
    case 0xC24E55: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E56: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E58: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E59: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E5B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24E5D: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E5F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E61: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E63: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24E65: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1054 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC24E67: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1056 LDA @LOCAL09
    case 0xC24E6B: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    case 0xC24E6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24E6D.
    case 0xC24E6F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1061 BNE @UNKNOWN65
    case 0xC24E70: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x004718u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24E72.
    case 0xC24E74: {
        Instruction step(cpu, 0x47, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E75: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24E74.
    case 0xC24E76: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24E77.
    case 0xC24E79: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E7A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24E7C: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1064 LDA #0
    case 0xC24E80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1064 LDA #0
    // Overlapping static entry reached from 0xC24E80.
    case 0xC24E82: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1065 STA @LOCAL10
    case 0xC24E83: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1066 BRA @UNKNOWN70
    case 0xC24E85: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    case 0xC24E87: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E87.
    case 0xC24E89: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1069 JSL MULT168
    case 0xC24E8A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1070 CLC
    case 0xC24E8E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24E8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E8F.
    case 0xC24E91: {
        Instruction step(cpu, 0xA4, 0x00008Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    case 0xC24E92: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC24E91.
    case 0xC24E93: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    case 0xC24E95: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1074 LDX CURRENT_TARGET
    case 0xC24E99: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1075 LDA a:battler::afflictions+2,X
    case 0xC24E9C: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    case 0xC24E9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    // Overlapping static entry reached from 0xC24E9F.
    case 0xC24EA1: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    case 0xC24EA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC24EA2.
    case 0xC24EA4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1078 BNE @UNKNOWN67
    case 0xC24EA5: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24EA7.
    case 0xC24EA9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EAA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24EAC.
    case 0xC24EAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EAF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24EB1: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1081 LDX CURRENT_TARGET
    case 0xC24EB5: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1082 LDA a:battler::afflictions+4,X
    case 0xC24EB8: {
        Instruction step(cpu, 0xBD, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    case 0xC24EBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    // Overlapping static entry reached from 0xC24EBB.
    case 0xC24EBD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1084 BEQ @UNKNOWN68
    case 0xC24EBE: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24EC0.
    case 0xC24EC2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24EC5.
    case 0xC24EC7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24EC8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24ECA: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1087 LDX CURRENT_TARGET
    case 0xC24ECE: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1088 LDA a:battler::afflictions+3,X
    case 0xC24ED1: {
        Instruction step(cpu, 0xBD, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    case 0xC24ED4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    // Overlapping static entry reached from 0xC24ED4.
    case 0xC24ED6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    case 0xC24ED7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC24ED7.
    case 0xC24ED9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1091 BNE @UNKNOWN69
    case 0xC24EDA: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24EDC.
    case 0xC24EDE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EDF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24EE1.
    case 0xC24EE3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EE4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24EE6: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1094 LDA @LOCAL10
    case 0xC24EEA: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1095 INC
    case 0xC24EEC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1096 STA @LOCAL10
    case 0xC24EED: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1098 CMP ENEMIES_IN_BATTLE
    case 0xC24EEF: {
        Instruction step(cpu, 0xCD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1098 CMP ENEMIES_IN_BATTLE
    // Overlapping static entry reached from 0xC24A6B.
    case 0xC24EF0: {
        Instruction step(cpu, 0x8C, 0x0090A1u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1099 BCC @UNKNOWN66
    case 0xC24EF2: {
        Instruction step(cpu, 0x90, 0x000093u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1099 BCC @UNKNOWN66
    // Overlapping static entry reached from 0xC24EF0.
    case 0xC24EF3: {
        Instruction step(cpu, 0x93, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC24EF4: {
        Instruction step(cpu, 0x22, 0xC1DB36u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC24EF3.
    case 0xC24EF5: {
        Instruction step(cpu, 0x36, 0x0000DBu, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC24EF5.
    case 0xC24EF7: {
        Instruction step(cpu, 0xC1, 0x000064u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1102 STZ @LOCAL06
    case 0xC24EF8: {
        Instruction step(cpu, 0x64, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1102 STZ @LOCAL06
    // Overlapping static entry reached from 0xC24EF7.
    case 0xC24EF9: {
        Instruction step(cpu, 0x1D, 0x001DA5u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1103 LDA @LOCAL06
    case 0xC24EFA: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1108 STA SPECIAL_DEFEAT
    case 0xC24EFC: {
        Instruction step(cpu, 0x8D, 0x00ABE3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1109 JMP @UNKNOWN236
    case 0xC24EFF: {
        Instruction step(cpu, 0x4C, 0x005FB8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1112 INC @LOCAL0B
    case 0xC24F02: {
        Instruction step(cpu, 0xE6, 0x000027u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1116 JSL UNKNOWN_C2F917
    case 0xC24F04: {
        Instruction step(cpu, 0x22, 0xC2F830u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC24F08: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24F08.
    case 0xC24F0A: {
        Instruction step(cpu, 0xA1, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1118 STY @LOCAL10
    case 0xC24F0B: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1118 STY @LOCAL10
    // Overlapping static entry reached from 0xC24F0A.
    case 0xC24F0C: {
        Instruction step(cpu, 0x31, 0x0000A2u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1119 LDX #0
    case 0xC24F0D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24F0C.
    case 0xC24F0E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24F0D.
    case 0xC24F0F: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1120 STX @LOCAL05
    case 0xC24F10: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1121 BRA @UNKNOWN74
    case 0xC24F12: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1123 TYX
    case 0xC24F14: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1124 SEP #PROC_FLAGS::ACCUM8
    case 0xC24F15: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1125 STZ a:battler::has_taken_turn,X
    case 0xC24F17: {
        Instruction step(cpu, 0x9E, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1126 REP #PROC_FLAGS::ACCUM8
    case 0xC24F1A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1127 LDA a:battler::consciousness,Y
    case 0xC24F1C: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    case 0xC24F1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    // Overlapping static entry reached from 0xC24F1F.
    case 0xC24F21: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1129 BEQ @UNKNOWN73
    case 0xC24F22: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1130 TYA
    case 0xC24F24: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1131 CLC
    case 0xC24F25: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    case 0xC24F26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000046u : 0x000046u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    // Overlapping static entry reached from 0xC24F26.
    case 0xC24F28: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1133 STA @VIRTUAL02
    case 0xC24F29: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1134 LDA a:battler::speed,Y
    case 0xC24F2B: {
        Instruction step(cpu, 0xB9, 0x00002Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1135 JSR FIFTY_PERCENT_VARIANCE
    case 0xC24F2E: {
        Instruction step(cpu, 0x20, 0x006983u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1136 LDX @VIRTUAL02
    case 0xC24F31: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1137 STA __BSS_START__,X
    case 0xC24F33: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1138 CMP #0
    case 0xC24F36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1138 CMP #0
    // Overlapping static entry reached from 0xC24F36.
    case 0xC24F38: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1139 BNE @UNKNOWN73
    case 0xC24F39: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1140 LDA #1
    case 0xC24F3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1140 LDA #1
    // Overlapping static entry reached from 0xC24F3B.
    case 0xC24F3D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1141 LDX @VIRTUAL02
    case 0xC24F3E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1142 STA __BSS_START__,X
    case 0xC24F40: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1144 LDY @LOCAL10
    case 0xC24F43: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1145 TYA
    case 0xC24F45: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1146 CLC
    case 0xC24F46: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    case 0xC24F47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24F47.
    case 0xC24F49: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1148 TAY
    case 0xC24F4A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1149 STY @LOCAL10
    case 0xC24F4B: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1150 LDX @LOCAL05
    case 0xC24F4D: {
        Instruction step(cpu, 0xA6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1151 INX
    case 0xC24F4F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1152 STX @LOCAL05
    case 0xC24F50: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    case 0xC24F52: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24F52.
    case 0xC24F54: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1155 BCC @UNKNOWN72
    case 0xC24F55: {
        Instruction step(cpu, 0x90, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1156 LDA #0
    case 0xC24F57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1156 LDA #0
    // Overlapping static entry reached from 0xC24F57.
    case 0xC24F59: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1157 STA @LOCAL10
    case 0xC24F5A: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1158 BRA @UNKNOWN76
    case 0xC24F5C: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    case 0xC24F5E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24F5E.
    case 0xC24F60: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1161 JSL MULT168
    case 0xC24F61: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1162 TAX
    case 0xC24F65: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1163 SEP #PROC_FLAGS::ACCUM8
    case 0xC24F66: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1164 STZ PARTY_CHARACTERS + char_struct::unknown94,X
    case 0xC24F68: {
        Instruction step(cpu, 0x9E, 0x009CDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1165 REP #PROC_FLAGS::ACCUM8
    case 0xC24F6B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1166 LDA @LOCAL10
    case 0xC24F6D: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1167 INC
    case 0xC24F6F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1168 STA @LOCAL10
    case 0xC24F70: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1170 CMP #4
    case 0xC24F72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1170 CMP #4
    // Overlapping static entry reached from 0xC24F72.
    case 0xC24F74: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1171 BCC @UNKNOWN75
    case 0xC24F75: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1172 LDY #0
    case 0xC24F77: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1172 LDY #0
    // Overlapping static entry reached from 0xC24F77.
    case 0xC24F79: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1173 STY @LOCAL04
    case 0xC24F7A: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1174 TYA
    case 0xC24F7C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1175 STA @VIRTUAL02
    case 0xC24F7D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1176 JMP @UNKNOWN106
    case 0xC24F7F: {
        Instruction step(cpu, 0x4C, 0x0051B4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1178 JSL CHECK_DEAD_PLAYERS
    case 0xC24F82: {
        Instruction step(cpu, 0x22, 0xC2BAC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1179 LDA #0
    case 0xC24F86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1179 LDA #0
    // Overlapping static entry reached from 0xC24F86.
    case 0xC24F88: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1180 JSL COUNT_CHARS
    case 0xC24F89: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1181 CMP #0
    case 0xC24F8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1181 CMP #0
    // Overlapping static entry reached from 0xC24F8D.
    case 0xC24F8F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1182 BNE @UNKNOWN78
    case 0xC24F90: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24F92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24F92.
    case 0xC24F94: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24F95: {
        Instruction step(cpu, 0x22, 0xC1DB24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1184 JMP @UNKNOWN225
    case 0xC24F99: {
        Instruction step(cpu, 0x4C, 0x005E23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1187 LDA @VIRTUAL02
    case 0xC24F9C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1188 CLC
    case 0xC24F9E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1189 ADC #.LOWORD(GAME_STATE)
    case 0xC24F9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1189 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC24F9F.
    case 0xC24FA1: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1190 TAX
    case 0xC24FA2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1191 LDA a:game_state::party_members,X
    case 0xC24FA3: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    case 0xC24FA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    // Overlapping static entry reached from 0xC24FA6.
    case 0xC24FA8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1197 STA @VIRTUAL04
    case 0xC24FA9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1198 STA @LOCAL08
    case 0xC24FAB: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1199 LDA @VIRTUAL04
    case 0xC24FAD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC24FAF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC24FB1: {
        Instruction step(cpu, 0x4C, 0x0051B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1201 LDA @VIRTUAL04
    case 0xC24FB4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1202 CMP #4
    case 0xC24FB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1202 CMP #4
    // Overlapping static entry reached from 0xC24FB6.
    case 0xC24FB8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC24FB9: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC24FBB: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC24FBD: {
        Instruction step(cpu, 0x4C, 0x0051B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1205 LDA @LOCAL09
    case 0xC24FC0: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1209 CMP #2
    case 0xC24FC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1209 CMP #2
    // Overlapping static entry reached from 0xC24FC2.
    case 0xC24FC4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1210 BEQ @UNKNOWN82
    case 0xC24FC5: {
        Instruction step(cpu, 0xF0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1212 LDA @LOCAL09
    case 0xC24FC7: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1216 CMP #3
    case 0xC24FC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1216 CMP #3
    // Overlapping static entry reached from 0xC24FC9.
    case 0xC24FCB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1217 BEQ @UNKNOWN82
    case 0xC24FCC: {
        Instruction step(cpu, 0xF0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1219 LDA @LOCAL09
    case 0xC24FCE: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1223 CMP #4
    case 0xC24FD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1223 CMP #4
    // Overlapping static entry reached from 0xC24FD0.
    case 0xC24FD2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1224 BEQ @UNKNOWN82
    case 0xC24FD3: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1225 LDA @VIRTUAL04
    case 0xC24FD5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1226 CMP #4
    case 0xC24FD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1226 CMP #4
    // Overlapping static entry reached from 0xC24FD7.
    case 0xC24FD9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1227 BNE @UNKNOWN81
    case 0xC24FDA: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1228 LDA MIRROR_ENEMY
    case 0xC24FDC: {
        Instruction step(cpu, 0xAD, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1229 BNE @UNKNOWN82
    case 0xC24FDF: {
        Instruction step(cpu, 0xD0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1231 LDA @VIRTUAL04
    case 0xC24FE1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1232 DEC
    case 0xC24FE3: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    case 0xC24FE4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24FE4.
    case 0xC24FE6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1234 JSL MULT168
    case 0xC24FE7: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1235 CLC
    case 0xC24FEB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC24FEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x009C8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC24FEC.
    case 0xC24FEE: {
        Instruction step(cpu, 0x9C, 0x00BDAAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1237 TAX
    case 0xC24FEF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC24FF0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC24FEE.
    case 0xC24FF1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    case 0xC24FF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    // Overlapping static entry reached from 0xC24FF3.
    case 0xC24FF5: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    case 0xC24FF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC24FF6.
    case 0xC24FF8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1241 BEQ @UNKNOWN82
    case 0xC24FF9: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    case 0xC24FFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC24FFB.
    case 0xC24FFD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1243 BEQ @UNKNOWN82
    case 0xC24FFE: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1244 LDA a:STATUS_GROUP::TEMPORARY,X
    case 0xC25000: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    case 0xC25003: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    // Overlapping static entry reached from 0xC25003.
    case 0xC25005: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1246 TAX
    case 0xC25006: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    case 0xC25007: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25007.
    case 0xC25009: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1248 BEQ @UNKNOWN82
    case 0xC2500A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    case 0xC2500C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2500C.
    case 0xC2500E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1250 BNE @UNKNOWN83
    case 0xC2500F: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC25011: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC25011.
    case 0xC25013: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1253 STA @LOCAL07
    case 0xC25014: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1254 SEP #PROC_FLAGS::ACCUM8
    case 0xC25016: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1255 STZ BATTLE_ITEM_USED
    case 0xC25018: {
        Instruction step(cpu, 0x9C, 0x00AB7Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1256 JMP @UNKNOWN91
    case 0xC2501B: {
        Instruction step(cpu, 0x4C, 0x0050A9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1258 LDA @VIRTUAL02
    case 0xC2501E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1259 JSL REDIRECT_C43573
    case 0xC25020: {
        Instruction step(cpu, 0x22, 0xC1DBA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1260 LDY @LOCAL04
    case 0xC25024: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1261 TYX
    case 0xC25026: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1262 LDA @VIRTUAL04
    case 0xC25027: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1263 JSL BATTLE_SELECTION_MENU
    case 0xC25029: {
        Instruction step(cpu, 0x22, 0xC23040u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1265 STA @LOCAL07
    case 0xC2502D: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1266 JSL REDIRECT_C3E6F8
    case 0xC2502F: {
        Instruction step(cpu, 0x22, 0xC1DBAFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1267 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC25033: {
        Instruction step(cpu, 0x22, 0xC1DB36u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1268 LDA BATTLE_MODE
    case 0xC25037: {
        Instruction step(cpu, 0xAD, 0x005148u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1269 BEQ @UNKNOWN84
    case 0xC2503A: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1270 LDA @LOCAL07
    case 0xC2503C: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    case 0xC2503E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    // Overlapping static entry reached from 0xC2503E.
    case 0xC25040: {
        Instruction step(cpu, 0xFF, 0x6405D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1272 BNE @UNKNOWN84
    case 0xC25041: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    case 0xC25043: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    // Overlapping static entry reached from 0xC25040.
    case 0xC25044: {
        Instruction step(cpu, 0x17, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    case 0xC25045: {
        Instruction step(cpu, 0x4C, 0x005FBFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    // Overlapping static entry reached from 0xC25044.
    case 0xC25046: {
        Instruction step(cpu, 0xBF, 0x1FA55Fu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1276 LDA @LOCAL07
    case 0xC25048: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    case 0xC2504A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000117u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC2504A.
    case 0xC2504C: {
        Instruction step(cpu, 0x01, 0x0000D0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    case 0xC2504D: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    // Overlapping static entry reached from 0xC2504C.
    case 0xC2504E: {
        Instruction step(cpu, 0x1D, 0x0001A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC2504F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC2504F.
    case 0xC25051: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1280 STA @LOCAL07
    case 0xC25052: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1282 LDA @LOCAL09
    case 0xC25054: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1286 CMP #1
    case 0xC25056: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1286 CMP #1
    // Overlapping static entry reached from 0xC25056.
    case 0xC25058: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1287 BNE @UNKNOWN85
    case 0xC25059: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1288 LDA #4
    case 0xC2505B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1288 LDA #4
    // Overlapping static entry reached from 0xC2505B.
    case 0xC2505D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1290 STA @LOCAL09
    case 0xC2505E: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1294 BRA @UNKNOWN86
    case 0xC25060: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1296 LDA #3
    case 0xC25062: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1296 LDA #3
    // Overlapping static entry reached from 0xC25062.
    case 0xC25064: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1298 STA @LOCAL09
    case 0xC25065: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1303 LDA #1
    case 0xC25067: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1303 LDA #1
    // Overlapping static entry reached from 0xC25067.
    case 0xC25069: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1305 STA @LOCAL0C
    case 0xC2506A: {
        Instruction step(cpu, 0x85, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1310 LDA @LOCAL07
    case 0xC2506C: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    case 0xC2506E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    // Overlapping static entry reached from 0xC2506E.
    case 0xC25070: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC25071: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC25073: {
        Instruction step(cpu, 0x4C, 0x0047B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC25070.
    case 0xC25074: {
        Instruction step(cpu, 0xB5, 0x000047u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1313 CMP #0
    case 0xC25076: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1313 CMP #0
    // Overlapping static entry reached from 0xC25076.
    case 0xC25078: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1314 BNE @UNKNOWN90
    case 0xC25079: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1315 LDY @LOCAL04
    case 0xC2507B: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC2507D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC2507F: {
        Instruction step(cpu, 0x4C, 0x004F82u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1317 DEY
    case 0xC25082: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1318 STY @LOCAL04
    case 0xC25083: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1319 TYA
    case 0xC25085: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1320 ASL
    case 0xC25086: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1321 TAX
    case 0xC25087: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1322 LDA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC25088: {
        Instruction step(cpu, 0xBD, 0x00AC39u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1323 STA @VIRTUAL02
    case 0xC2508B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1324 JMP @UNKNOWN77
    case 0xC2508D: {
        Instruction step(cpu, 0x4C, 0x004F82u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1326 LDY @LOCAL04
    case 0xC25090: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1327 TYA
    case 0xC25092: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1328 ASL
    case 0xC25093: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1329 TAX
    case 0xC25094: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1330 LDA @VIRTUAL02
    case 0xC25095: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1331 STA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC25097: {
        Instruction step(cpu, 0x9D, 0x00AC39u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1332 INY
    case 0xC2509A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1333 STY @LOCAL04
    case 0xC2509B: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1334 LDA @LOCAL07
    case 0xC2509D: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1335 CMP #1
    case 0xC2509F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1335 CMP #1
    // Overlapping static entry reached from 0xC2509F.
    case 0xC250A1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1336 BNE @UNKNOWN91
    case 0xC250A2: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1337 LDA #0
    case 0xC250A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1337 LDA #0
    // Overlapping static entry reached from 0xC250A4.
    case 0xC250A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1338 STA @LOCAL07
    case 0xC250A7: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1340 REP #PROC_FLAGS::ACCUM8
    case 0xC250A9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1341 STZ @LOCAL05
    case 0xC250AB: {
        Instruction step(cpu, 0x64, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1342 JMP @UNKNOWN104
    case 0xC250AD: {
        Instruction step(cpu, 0x4C, 0x0051A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1344 LDA @LOCAL05
    case 0xC250B0: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    case 0xC250B2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC250B2.
    case 0xC250B4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1346 JSL MULT168
    case 0xC250B5: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1347 TAX
    case 0xC250B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1348 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC250BA: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    case 0xC250BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    // Overlapping static entry reached from 0xC250BD.
    case 0xC250BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC250C0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC250C2: {
        Instruction step(cpu, 0x4C, 0x0051A2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1351 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC250C5: {
        Instruction step(cpu, 0xBD, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    case 0xC250C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    // Overlapping static entry reached from 0xC250C8.
    case 0xC250CA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC250CB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC250CD: {
        Instruction step(cpu, 0x4C, 0x0051A2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1354 LDA @VIRTUAL04
    case 0xC250D0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1355 CMP BATTLERS_TABLE + battler::id,X
    case 0xC250D2: {
        Instruction step(cpu, 0xDD, 0x00A1AEu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC250D5: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC250D7: {
        Instruction step(cpu, 0x4C, 0x0051A2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1357 LDA @LOCAL07
    case 0xC250DA: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1358 STA BATTLERS_TABLE+battler::current_action,X
    case 0xC250DC: {
        Instruction step(cpu, 0x9D, 0x00A1B2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1359 LDA BATTLE_ITEM_USED
    case 0xC250DF: {
        Instruction step(cpu, 0xAD, 0x00AB7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    case 0xC250E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    // Overlapping static entry reached from 0xC250E2.
    case 0xC250E4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1361 BEQ @UNKNOWN96
    case 0xC250E5: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1362 SEP #PROC_FLAGS::ACCUM8
    case 0xC250E7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1363 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC250E9: {
        Instruction step(cpu, 0xAD, 0x00AB80u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1364 STA BATTLERS_TABLE+7,X
    case 0xC250EC: {
        Instruction step(cpu, 0x9D, 0x00A1B5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1365 LDA BATTLE_ITEM_USED
    case 0xC250EF: {
        Instruction step(cpu, 0xAD, 0x00AB7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1366 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC250F2: {
        Instruction step(cpu, 0x9D, 0x00A1B6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1367 BRA @UNKNOWN97
    case 0xC250F5: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1369 SEP #PROC_FLAGS::ACCUM8
    case 0xC250F7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1370 STZ BATTLERS_TABLE+7,X
    case 0xC250F9: {
        Instruction step(cpu, 0x9E, 0x00A1B5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1371 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC250FC: {
        Instruction step(cpu, 0xAD, 0x00AB80u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1372 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC250FF: {
        Instruction step(cpu, 0x9D, 0x00A1B6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1374 REP #PROC_FLAGS::ACCUM8
    case 0xC25102: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1375 LDA @LOCAL05
    case 0xC25104: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    case 0xC25106: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25106.
    case 0xC25108: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1377 JSL MULT168
    case 0xC25109: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1379 TAX
    case 0xC2510D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1380 STX @LOCAL0A
    case 0xC2510E: {
        Instruction step(cpu, 0x86, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1381 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC25110: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x00AB83u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1381 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC25110.
    case 0xC25112: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1382 STA @LOCAL07
    case 0xC25113: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1383 TAX
    case 0xC25115: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1390 SEP #PROC_FLAGS::ACCUM8
    case 0xC25116: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1391 LDA __BSS_START__,X
    case 0xC25118: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1393 LDX @LOCAL0A
    case 0xC2511B: {
        Instruction step(cpu, 0xA6, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1397 STA BATTLERS_TABLE + battler::action_targetting,X
    case 0xC2511D: {
        Instruction step(cpu, 0x9D, 0x00A1B7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1404 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC25120: {
        Instruction step(cpu, 0xAD, 0x00AB84u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1405 STA BATTLERS_TABLE + battler::current_target,X
    case 0xC25123: {
        Instruction step(cpu, 0x9D, 0x00A1B8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1407 REP #PROC_FLAGS::ACCUM8
    case 0xC25126: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1408 LDA @LOCAL07
    case 0xC25128: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1409 TAX
    case 0xC2512A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1414 LDA __BSS_START__,X
    case 0xC2512B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    case 0xC2512E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    // Overlapping static entry reached from 0xC2512E.
    case 0xC25130: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1416 CMP #1
    case 0xC25131: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1416 CMP #1
    // Overlapping static entry reached from 0xC25131.
    case 0xC25133: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1417 BNE @UNKNOWN101
    case 0xC25134: {
        Instruction step(cpu, 0xD0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1418 LDA #0
    case 0xC25136: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1418 LDA #0
    // Overlapping static entry reached from 0xC25136.
    case 0xC25138: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1420 STA @LOCAL0A
    case 0xC25139: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1424 BRA @UNKNOWN100
    case 0xC2513B: {
        Instruction step(cpu, 0x80, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    case 0xC2513D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2513D.
    case 0xC2513F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1427 JSL MULT168
    case 0xC25140: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1428 TAX
    case 0xC25144: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1429 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25145: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    case 0xC25148: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    // Overlapping static entry reached from 0xC25148.
    case 0xC2514A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1431 BEQ @UNKNOWN99
    case 0xC2514B: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1432 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2514D: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    case 0xC25150: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    // Overlapping static entry reached from 0xC25150.
    case 0xC25152: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1434 BNE @UNKNOWN99
    case 0xC25153: {
        Instruction step(cpu, 0xD0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1435 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC25155: {
        Instruction step(cpu, 0xAD, 0x00AB84u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    case 0xC25158: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    // Overlapping static entry reached from 0xC25158.
    case 0xC2515A: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1437 CMP BATTLERS_TABLE+battler::id,X
    case 0xC2515B: {
        Instruction step(cpu, 0xDD, 0x00A1AEu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1438 BNE @UNKNOWN99
    case 0xC2515E: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1439 LDA @LOCAL05
    case 0xC25160: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    case 0xC25162: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25162.
    case 0xC25164: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1441 JSL MULT168
    case 0xC25165: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1442 TAX
    case 0xC25169: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1444 LDA @LOCAL0A
    case 0xC2516A: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1448 SEP #PROC_FLAGS::ACCUM8
    case 0xC2516C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1449 INC
    case 0xC2516E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1450 STA BATTLERS_TABLE+battler::current_target,X
    case 0xC2516F: {
        Instruction step(cpu, 0x9D, 0x00A1B8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1451 BRA @UNKNOWN101
    case 0xC25172: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1454 LDA @LOCAL0A
    case 0xC25174: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1455 INC
    case 0xC25176: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1456 STA @LOCAL0A
    case 0xC25177: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1464 CMP #6
    case 0xC25179: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1464 CMP #6
    // Overlapping static entry reached from 0xC25179.
    case 0xC2517B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1465 BCC @UNKNOWN98
    case 0xC2517C: {
        Instruction step(cpu, 0x90, 0x0000BFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1467 REP #PROC_FLAGS::ACCUM8
    case 0xC2517E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1468 LDA @LOCAL05
    case 0xC25180: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    case 0xC25182: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25182.
    case 0xC25184: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1470 JSL MULT168
    case 0xC25185: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1471 TAX
    case 0xC25189: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1472 LDA BATTLERS_TABLE+battler::current_action,X
    case 0xC2518A: {
        Instruction step(cpu, 0xBD, 0x00A1B2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    case 0xC2518D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC2518D.
    case 0xC2518F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1474 BNE @UNKNOWN102
    case 0xC25190: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1475 SEP #PROC_FLAGS::ACCUM8
    case 0xC25192: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1476 LDA #1
    case 0xC25194: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    case 0xC25196: {
        Instruction step(cpu, 0x9D, 0x00A1D2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    // Overlapping static entry reached from 0xC25194.
    case 0xC25197: {
        Instruction step(cpu, 0xD2, 0x0000A1u, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1478 BRA @UNKNOWN105
    case 0xC25199: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1480 SEP #PROC_FLAGS::ACCUM8
    case 0xC2519B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1481 STZ BATTLERS_TABLE+battler::guarding,X
    case 0xC2519D: {
        Instruction step(cpu, 0x9E, 0x00A1D2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1482 BRA @UNKNOWN105
    case 0xC251A0: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1484 INC @LOCAL05
    case 0xC251A2: {
        Instruction step(cpu, 0xE6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1487 LDA @LOCAL05
    case 0xC251A4: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    case 0xC251A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC251A6.
    case 0xC251A8: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC251A9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC251AB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC251AD: {
        Instruction step(cpu, 0x4C, 0x0050B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1491 REP #PROC_FLAGS::ACCUM8
    case 0xC251B0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1492 INC @VIRTUAL02
    case 0xC251B2: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1494 LDA @VIRTUAL02
    case 0xC251B4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1495 CMP #6
    case 0xC251B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1495 CMP #6
    // Overlapping static entry reached from 0xC251B6.
    case 0xC251B8: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC251B9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC251BB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC251BD: {
        Instruction step(cpu, 0x4C, 0x004F82u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC251C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC251C0.
    case 0xC251C2: {
        Instruction step(cpu, 0xA1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    case 0xC251C3: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    // Overlapping static entry reached from 0xC251C2.
    case 0xC251C4: {
        Instruction step(cpu, 0x19, 0x0000A0u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1502 LDY #0
    case 0xC251C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1502 LDY #0
    // Overlapping static entry reached from 0xC251C5.
    case 0xC251C7: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1504 STY @LOCAL05
    case 0xC251C8: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1508 JMP @UNKNOWN132
    case 0xC251CA: {
        Instruction step(cpu, 0x4C, 0x005403u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1511 LDY #battler::consciousness
    case 0xC251CD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1511 LDY #battler::consciousness
    // Overlapping static entry reached from 0xC251CD.
    case 0xC251CF: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1512 LDA (@LOCAL04),Y
    case 0xC251D0: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1513 AND #$00FF
    case 0xC251D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1513 AND #$00FF
    // Overlapping static entry reached from 0xC251D2.
    case 0xC251D4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1514 BEQ @UNKNOWN109
    case 0xC251D5: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1515 LDY #battler::ally_or_enemy
    case 0xC251D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1515 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC251D7.
    case 0xC251D9: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1516 LDA (@LOCAL04),Y
    case 0xC251DA: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    case 0xC251DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    // Overlapping static entry reached from 0xC251DC.
    case 0xC251DE: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1526 CMP #1
    case 0xC251DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1526 CMP #1
    // Overlapping static entry reached from 0xC251DF.
    case 0xC251E1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1527 BEQ @UNKNOWN111
    case 0xC251E2: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1530 LDY #battler::npc_id
    case 0xC251E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1530 LDY #battler::npc_id
    // Overlapping static entry reached from 0xC251E4.
    case 0xC251E6: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1531 LDA (@LOCAL04),Y
    case 0xC251E7: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1532 AND #$00FF
    case 0xC251E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1532 AND #$00FF
    // Overlapping static entry reached from 0xC251E9.
    case 0xC251EB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1533 BNE @UNKNOWN111
    case 0xC251EC: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1534 LDA (@LOCAL04)
    case 0xC251EE: {
        Instruction step(cpu, 0xB2, 0x000019u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    case 0xC251F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC251F0.
    case 0xC251F2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC251F3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC251F5: {
        Instruction step(cpu, 0x4C, 0x0053F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1545 LDA MIRROR_ENEMY
    case 0xC251F8: {
        Instruction step(cpu, 0xAD, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC251FB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC251FD: {
        Instruction step(cpu, 0x4C, 0x0053F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1549 LDA @LOCAL09
    case 0xC25200: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1553 CMP #1
    case 0xC25202: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1553 CMP #1
    // Overlapping static entry reached from 0xC25202.
    case 0xC25204: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1554 BEQ @UNKNOWN112
    case 0xC25205: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1556 LDA @LOCAL09
    case 0xC25207: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1560 CMP #4
    case 0xC25209: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1560 CMP #4
    // Overlapping static entry reached from 0xC25209.
    case 0xC2520B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1561 BNE @UNKNOWN113
    case 0xC2520C: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1564 LDY #battler::ally_or_enemy
    case 0xC2520E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1564 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2520E.
    case 0xC25210: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1565 LDA (@LOCAL04),Y
    case 0xC25211: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1566 AND #$00FF
    case 0xC25213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1566 AND #$00FF
    // Overlapping static entry reached from 0xC25213.
    case 0xC25215: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1567 CMP #1
    case 0xC25216: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1567 CMP #1
    // Overlapping static entry reached from 0xC25216.
    case 0xC25218: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1568 BNE @UNKNOWN113
    case 0xC25219: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1569 LDX @LOCAL04
    case 0xC2521B: {
        Instruction step(cpu, 0xA6, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1578 STZ a:battler::current_action,X
    case 0xC2521D: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1579 JMP @UNKNOWN131
    case 0xC25220: {
        Instruction step(cpu, 0x4C, 0x0053F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1582 LDA @LOCAL09
    case 0xC25223: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1583 CMP #$0002
    case 0xC25225: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1583 CMP #$0002
    // Overlapping static entry reached from 0xC25225.
    case 0xC25227: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1584 BNE @UNKNOWN114
    case 0xC25228: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1585 LDY #battler::ally_or_enemy
    case 0xC2522A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1585 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2522A.
    case 0xC2522C: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1586 LDA (@LOCAL04),Y
    case 0xC2522D: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1587 AND #$00FF
    case 0xC2522F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1587 AND #$00FF
    // Overlapping static entry reached from 0xC2522F.
    case 0xC25231: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1588 BNE @UNKNOWN114
    case 0xC25232: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1589 LDX @LOCAL04
    case 0xC25234: {
        Instruction step(cpu, 0xA6, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1600 STZ a:battler::current_action,X
    case 0xC25236: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1601 JMP @UNKNOWN131
    case 0xC25239: {
        Instruction step(cpu, 0x4C, 0x0053F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1604 LDY #battler::ally_or_enemy
    case 0xC2523C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1604 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2523C.
    case 0xC2523E: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1605 LDA (@LOCAL04),Y
    case 0xC2523F: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1606 AND #$00FF
    case 0xC25241: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1606 AND #$00FF
    // Overlapping static entry reached from 0xC25241.
    case 0xC25243: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1607 BNE @UNKNOWN115
    case 0xC25244: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1608 LDA (@LOCAL04)
    case 0xC25246: {
        Instruction step(cpu, 0xB2, 0x000019u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    case 0xC25248: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25248.
    case 0xC2524A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1618 BNE @UNKNOWN115
    case 0xC2524B: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2524D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2524D.
    case 0xC2524F: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25250: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2524F.
    case 0xC25251: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25252: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25251.
    case 0xC25253: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25252.
    case 0xC25254: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25255: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1620 LDA MIRROR_ENEMY
    case 0xC25257: {
        Instruction step(cpu, 0xAD, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    case 0xC2525A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2525A.
    case 0xC2525C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1622 JSL MULT168
    case 0xC2525D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1623 CLC
    case 0xC25261: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1624 ADC @VIRTUAL06
    case 0xC25262: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1625 STA @VIRTUAL06
    case 0xC25264: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1626 BRA @UNKNOWN116
    case 0xC25266: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25268: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25268.
    case 0xC2526A: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2526B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2526A.
    case 0xC2526C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2526D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2526C.
    case 0xC2526E: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2526D.
    case 0xC2526F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25270: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1630 LDA (@LOCAL04)
    case 0xC25272: {
        Instruction step(cpu, 0xB2, 0x000019u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    case 0xC25274: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC25274.
    case 0xC25276: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1636 JSL MULT168
    case 0xC25277: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1637 CLC
    case 0xC2527B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1638 ADC @VIRTUAL06
    case 0xC2527C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1639 STA @VIRTUAL06
    case 0xC2527E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1641 SEP #PROC_FLAGS::ACCUM8
    case 0xC25280: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    case 0xC25282: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000034u : 0x000034u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    // Overlapping static entry reached from 0xC25282.
    case 0xC25284: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1643 LDA [@VIRTUAL06],Y
    case 0xC25285: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1644 REP #PROC_FLAGS::ACCUM8
    case 0xC25287: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    case 0xC25289: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    // Overlapping static entry reached from 0xC25289.
    case 0xC2528B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1646 BEQ @ACTION_PATTERN_1
    case 0xC2528C: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1647 CMP #1
    case 0xC2528E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1647 CMP #1
    // Overlapping static entry reached from 0xC2528E.
    case 0xC25290: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1648 BEQ @ACTION_PATTERN_2
    case 0xC25291: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1649 CMP #2
    case 0xC25293: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1649 CMP #2
    // Overlapping static entry reached from 0xC25293.
    case 0xC25295: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1650 BEQ @ACTION_PATTERN_3
    case 0xC25296: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1651 CMP #3
    case 0xC25298: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1651 CMP #3
    // Overlapping static entry reached from 0xC25298.
    case 0xC2529A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1652 BEQ @ACTION_PATTERN_4
    case 0xC2529B: {
        Instruction step(cpu, 0xF0, 0x000072u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1653 JMP @UNKNOWN125
    case 0xC2529D: {
        Instruction step(cpu, 0x4C, 0x005342u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1655 JSL RAND
    case 0xC252A0: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    case 0xC252A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    // Overlapping static entry reached from 0xC252A4.
    case 0xC252A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1657 STA @VIRTUAL04
    case 0xC252A7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1658 STA @LOCAL08
    case 0xC252A9: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1659 JMP @UNKNOWN125
    case 0xC252AB: {
        Instruction step(cpu, 0x4C, 0x005342u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1661 JSL RAND
    case 0xC252AE: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    case 0xC252B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    // Overlapping static entry reached from 0xC252B2.
    case 0xC252B4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1663 BEQ @ACTION_PATTERN_2_4TH
    case 0xC252B5: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1664 CMP #1
    case 0xC252B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1664 CMP #1
    // Overlapping static entry reached from 0xC252B7.
    case 0xC252B9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1665 BEQ @ACTION_PATTERN_2_3RD
    case 0xC252BA: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1666 CMP #2
    case 0xC252BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1666 CMP #2
    // Overlapping static entry reached from 0xC252BC.
    case 0xC252BE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1667 BEQ @ACTION_PATTERN_2_2ND
    case 0xC252BF: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1668 CMP #3
    case 0xC252C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1668 CMP #3
    // Overlapping static entry reached from 0xC252C1.
    case 0xC252C3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1669 BEQ @ACTION_PATTERN_2_2ND
    case 0xC252C4: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1670 BRA @ACTION_PATTERN_2_1ST
    case 0xC252C6: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1672 LDA #3
    case 0xC252C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1672 LDA #3
    // Overlapping static entry reached from 0xC252C8.
    case 0xC252CA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1673 STA @VIRTUAL04
    case 0xC252CB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1674 STA @LOCAL08
    case 0xC252CD: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1675 BRA @UNKNOWN125
    case 0xC252CF: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1677 LDA #2
    case 0xC252D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1677 LDA #2
    // Overlapping static entry reached from 0xC252D1.
    case 0xC252D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1678 STA @VIRTUAL04
    case 0xC252D4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1679 STA @LOCAL08
    case 0xC252D6: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1680 BRA @UNKNOWN125
    case 0xC252D8: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1682 LDA #1
    case 0xC252DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1682 LDA #1
    // Overlapping static entry reached from 0xC252DA.
    case 0xC252DC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1683 STA @VIRTUAL04
    case 0xC252DD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1684 STA @LOCAL08
    case 0xC252DF: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1685 BRA @UNKNOWN125
    case 0xC252E1: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1687 LDA #0
    case 0xC252E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1687 LDA #0
    // Overlapping static entry reached from 0xC252E3.
    case 0xC252E5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1688 STA @VIRTUAL04
    case 0xC252E6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1689 STA @LOCAL08
    case 0xC252E8: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1690 BRA @UNKNOWN125
    case 0xC252EA: {
        Instruction step(cpu, 0x80, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1693 LDA @LOCAL04
    case 0xC252EC: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1697 CLC
    case 0xC252EE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    case 0xC252EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC252EF.
    case 0xC252F1: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1699 TAX
    case 0xC252F2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1700 SEP #PROC_FLAGS::ACCUM8
    case 0xC252F3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1701 LDA __BSS_START__,X
    case 0xC252F5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1702 STA @LOCAL02
    case 0xC252F8: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1703 REP #PROC_FLAGS::ACCUM8
    case 0xC252FA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    case 0xC252FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    // Overlapping static entry reached from 0xC252FC.
    case 0xC252FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1705 STA @VIRTUAL04
    case 0xC252FF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1706 STA @LOCAL08
    case 0xC25301: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1707 SEP #PROC_FLAGS::ACCUM8
    case 0xC25303: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1708 LDA @LOCAL02
    case 0xC25305: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1709 INC
    case 0xC25307: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1710 AND #$0003
    case 0xC25308: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x009D03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    case 0xC2530A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC25308.
    case 0xC2530B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1712 BRA @UNKNOWN125
    case 0xC2530D: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1716 LDA @LOCAL04
    case 0xC2530F: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1720 CLC
    case 0xC25311: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    case 0xC25312: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC25312.
    case 0xC25314: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1722 TAX
    case 0xC25315: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1723 STX @LOCAL10
    case 0xC25316: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1724 LDA __BSS_START__,X
    case 0xC25318: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    case 0xC2531B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    // Overlapping static entry reached from 0xC2531B.
    case 0xC2531D: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1726 ASL
    case 0xC2531E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1728 STA @LOCAL0A
    case 0xC2531F: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1732 JSL RAND
    case 0xC25321: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1734 STA @VIRTUAL02
    case 0xC25325: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    case 0xC25327: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    // Overlapping static entry reached from 0xC25327.
    case 0xC25329: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1739 STA @VIRTUAL02
    case 0xC2532A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1741 LDA @LOCAL0A
    case 0xC2532C: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1745 CLC
    case 0xC2532E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1746 ADC @VIRTUAL02
    case 0xC2532F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1747 STA @VIRTUAL04
    case 0xC25331: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1748 STA @LOCAL08
    case 0xC25333: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1749 LDX @LOCAL10
    case 0xC25335: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1750 SEP #PROC_FLAGS::ACCUM8
    case 0xC25337: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1751 LDA __BSS_START__,X
    case 0xC25339: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1752 INC
    case 0xC2533C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1753 AND #$0001
    case 0xC2533D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    case 0xC2533F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2533D.
    case 0xC25340: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1756 REP #PROC_FLAGS::ACCUM8
    case 0xC25342: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1757 LDA @LOCAL04
    case 0xC25344: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1761 INC
    case 0xC25346: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1762 INC
    case 0xC25347: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1763 INC
    case 0xC25348: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1764 INC
    case 0xC25349: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1766 STA @LOCAL0A
    case 0xC2534A: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1770 TAX
    case 0xC2534C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1771 LDA @LOCAL08
    case 0xC2534D: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1772 STA @VIRTUAL04
    case 0xC2534F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1773 ASL
    case 0xC25351: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1774 CLC
    case 0xC25352: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    case 0xC25353: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000035u : 0x000035u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    // Overlapping static entry reached from 0xC25353.
    case 0xC25355: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25356: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25358: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2535A: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2535C: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1777 CLC
    case 0xC2535E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1778 ADC @VIRTUAL0A
    case 0xC2535F: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1779 STA @VIRTUAL0A
    case 0xC25361: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1780 LDA [@VIRTUAL0A]
    case 0xC25363: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1781 STA __BSS_START__,X
    case 0xC25365: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1783 LDA @LOCAL04
    case 0xC25368: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1787 CLC
    case 0xC2536A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1788 ADC #8
    case 0xC2536B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1788 ADC #8
    // Overlapping static entry reached from 0xC2536B.
    case 0xC2536D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1789 TAX
    case 0xC2536E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1790 STX @LOCAL10
    case 0xC2536F: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1791 LDA @VIRTUAL04
    case 0xC25371: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1792 CLC
    case 0xC25373: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    case 0xC25374: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    // Overlapping static entry reached from 0xC25374.
    case 0xC25376: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1794 CLC
    case 0xC25377: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1795 ADC @VIRTUAL06
    case 0xC25378: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1796 STA @VIRTUAL06
    case 0xC2537A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1797 SEP #PROC_FLAGS::ACCUM8
    case 0xC2537C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1798 LDA [@VIRTUAL06]
    case 0xC2537E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1799 STA @VIRTUAL00
    case 0xC25380: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1800 STA __BSS_START__,X
    case 0xC25382: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1801 REP #PROC_FLAGS::ACCUM8
    case 0xC25385: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1803 LDA @LOCAL0A
    case 0xC25387: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1807 TAX
    case 0xC25389: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1808 LDA __BSS_START__,X
    case 0xC2538A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    case 0xC2538D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F5u : 0x0000F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    // Overlapping static entry reached from 0xC2538D.
    case 0xC2538F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1810 BNE @UNKNOWN127
    case 0xC25390: {
        Instruction step(cpu, 0xD0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1812 LDY #battler::ally_or_enemy
    case 0xC25392: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1812 LDY #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC25392.
    case 0xC25394: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1813 LDA (@LOCAL04),Y
    case 0xC25395: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    case 0xC25397: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    // Overlapping static entry reached from 0xC25397.
    case 0xC25399: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1819 BNE @UNKNOWN126
    case 0xC2539A: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1821 LDA (@LOCAL04)
    case 0xC2539C: {
        Instruction step(cpu, 0xB2, 0x000019u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    case 0xC2539E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2539E.
    case 0xC253A0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1827 BNE @UNKNOWN126
    case 0xC253A1: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1828 LDA @VIRTUAL00
    case 0xC253A3: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    case 0xC253A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    // Overlapping static entry reached from 0xC253A5.
    case 0xC253A7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1830 STA MIRROR_ENEMY
    case 0xC253A8: {
        Instruction step(cpu, 0x8D, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1831 JMP @UNKNOWN114
    case 0xC253AB: {
        Instruction step(cpu, 0x4C, 0x00523Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1834 LDY #battler::current_action_argument
    case 0xC253AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1834 LDY #battler::current_action_argument
    // Overlapping static entry reached from 0xC253AE.
    case 0xC253B0: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1835 LDA (@LOCAL04),Y
    case 0xC253B1: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    case 0xC253B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    // Overlapping static entry reached from 0xC253B3.
    case 0xC253B5: {
        Instruction step(cpu, 0x00, 0x000092u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1842 STA (@LOCAL04)
    case 0xC253B6: {
        Instruction step(cpu, 0x92, 0x000019u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1847 JMP @UNKNOWN114
    case 0xC253B8: {
        Instruction step(cpu, 0x4C, 0x00523Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    case 0xC253BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC253BB.
    case 0xC253BD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1850 BNE @UNKNOWN128
    case 0xC253BE: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1851 JSL SELECT_STEALABLE_ITEM
    case 0xC253C0: {
        Instruction step(cpu, 0x22, 0xC241D3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1852 SEP #PROC_FLAGS::ACCUM8
    case 0xC253C4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1853 LDX @LOCAL10
    case 0xC253C6: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1854 STA __BSS_START__,X
    case 0xC253C8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1856 LDX @LOCAL04
    case 0xC253CB: {
        Instruction step(cpu, 0xA6, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1860 REP #PROC_FLAGS::ACCUM8
    case 0xC253CD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1861 STZ a:battler::initiative,X
    case 0xC253CF: {
        Instruction step(cpu, 0x9E, 0x000046u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1864 LDY #battler::current_action
    case 0xC253D2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1864 LDY #battler::current_action
    // Overlapping static entry reached from 0xC253D2.
    case 0xC253D4: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1865 LDA (@LOCAL04),Y
    case 0xC253D5: {
        Instruction step(cpu, 0xB1, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    case 0xC253D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000067u : 0x000067u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    // Overlapping static entry reached from 0xC253D7.
    case 0xC253D9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1871 BNE @NOT_DEFENDING
    case 0xC253DA: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1872 SEP #PROC_FLAGS::ACCUM8
    case 0xC253DC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1873 LDA #1
    case 0xC253DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1875 LDY #battler::guarding
    case 0xC253E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1875 LDY #battler::guarding
    // Overlapping static entry reached from 0xC253DE.
    case 0xC253E1: {
        Instruction step(cpu, 0x24, 0x000000u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1875 LDY #battler::guarding
    // Overlapping static entry reached from 0xC253E0.
    case 0xC253E2: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1876 STA (@LOCAL04),Y
    case 0xC253E3: {
        Instruction step(cpu, 0x91, 0x000019u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1881 BRA @UNKNOWN130
    case 0xC253E5: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1884 LDX @LOCAL04
    case 0xC253E7: {
        Instruction step(cpu, 0xA6, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1888 SEP #PROC_FLAGS::ACCUM8
    case 0xC253E9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1889 STZ a:battler::guarding,X
    case 0xC253EB: {
        Instruction step(cpu, 0x9E, 0x000024u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1891 REP #PROC_FLAGS::ACCUM8
    case 0xC253EE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1893 LDA @LOCAL04
    case 0xC253F0: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1897 JSL CHOOSE_TARGET
    case 0xC253F2: {
        Instruction step(cpu, 0x22, 0xC24344u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1900 LDA @LOCAL04
    case 0xC253F6: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1904 CLC
    case 0xC253F8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    case 0xC253F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC253F9.
    case 0xC253FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1909 STA @LOCAL04
    case 0xC253FC: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1911 LDY @LOCAL05
    case 0xC253FE: {
        Instruction step(cpu, 0xA4, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1912 INY
    case 0xC25400: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1913 STY @LOCAL05
    case 0xC25401: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    case 0xC25403: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25403.
    case 0xC25405: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC25406: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC25408: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC2540A: {
        Instruction step(cpu, 0x4C, 0x0051CDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2540D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2540D.
    case 0xC2540F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC25410: {
        Instruction step(cpu, 0x22, 0xC1DB24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1924 LDA @LOCAL09
    case 0xC25414: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC25416: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC25416.
    case 0xC25418: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1929 BNE @UNKNOWN134
    case 0xC25419: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC2541B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x00472Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC2541B.
    case 0xC2541D: {
        Instruction step(cpu, 0x47, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC2541E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC2541D.
    case 0xC2541F: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25420: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC25420.
    case 0xC25422: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25423: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25425: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1933 LDA @LOCAL0C
    case 0xC25429: {
        Instruction step(cpu, 0xA5, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2542B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2542D: {
        Instruction step(cpu, 0x4C, 0x005533u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC25430: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25430.
    case 0xC25432: {
        Instruction step(cpu, 0xA1, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1940 STY @LOCAL0C
    case 0xC25433: {
        Instruction step(cpu, 0x84, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1940 STY @LOCAL0C
    // Overlapping static entry reached from 0xC25432.
    case 0xC25434: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000064u : 0x001B64u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    case 0xC25435: {
        Instruction step(cpu, 0x64, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    // Overlapping static entry reached from 0xC25434.
    case 0xC25436: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1945 LDA #0
    case 0xC25437: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1945 LDA #0
    // Overlapping static entry reached from 0xC25437.
    case 0xC25439: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1946 STA @VIRTUAL04
    case 0xC2543A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1947 STA @LOCAL08
    case 0xC2543C: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1948 STA @VIRTUAL02
    case 0xC2543E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1949 JMP @UNKNOWN140
    case 0xC25440: {
        Instruction step(cpu, 0x4C, 0x0054CBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1951 LDA a:battler::consciousness,Y
    case 0xC25443: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    case 0xC25446: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    // Overlapping static entry reached from 0xC25446.
    case 0xC25448: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1953 BEQ @UNKNOWN139
    case 0xC25449: {
        Instruction step(cpu, 0xF0, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1954 LDA a:battler::npc_id,Y
    case 0xC2544B: {
        Instruction step(cpu, 0xB9, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    case 0xC2544E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    // Overlapping static entry reached from 0xC2544E.
    case 0xC25450: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1956 BNE @UNKNOWN139
    case 0xC25451: {
        Instruction step(cpu, 0xD0, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1957 LDA a:battler::ally_or_enemy,Y
    case 0xC25453: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    case 0xC25456: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    // Overlapping static entry reached from 0xC25456.
    case 0xC25458: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1959 CMP #1
    case 0xC25459: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1959 CMP #1
    // Overlapping static entry reached from 0xC25459.
    case 0xC2545B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1960 BNE @UNKNOWN138
    case 0xC2545C: {
        Instruction step(cpu, 0xD0, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1961 LDA a:battler::id,Y
    case 0xC2545E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    case 0xC25461: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC25461.
    case 0xC25463: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1963 JSL MULT168
    case 0xC25464: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1964 CLC
    case 0xC25468: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    case 0xC25469: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000045u : 0x000045u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC25469.
    case 0xC2546B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1966 TAX
    case 0xC2546C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1967 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2546D: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    case 0xC25471: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    // Overlapping static entry reached from 0xC25471.
    case 0xC25473: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25474: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25476: {
        Instruction step(cpu, 0x4C, 0x005523u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1971 LDY @LOCAL0C
    case 0xC25479: {
        Instruction step(cpu, 0xA4, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1975 LDA a:battler::afflictions,Y
    case 0xC2547B: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    case 0xC2547E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    // Overlapping static entry reached from 0xC2547E.
    case 0xC25480: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1977 TAX
    case 0xC25481: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1978 CPX #1
    case 0xC25482: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1978 CPX #1
    // Overlapping static entry reached from 0xC25482.
    case 0xC25484: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1979 BEQ @UNKNOWN139
    case 0xC25485: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1980 CPX #2
    case 0xC25487: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1980 CPX #2
    // Overlapping static entry reached from 0xC25487.
    case 0xC25489: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1981 BEQ @UNKNOWN139
    case 0xC2548A: {
        Instruction step(cpu, 0xF0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1982 CPX #3
    case 0xC2548C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1982 CPX #3
    // Overlapping static entry reached from 0xC2548C.
    case 0xC2548E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1983 BEQ @UNKNOWN139
    case 0xC2548F: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1984 LDA a:battler::afflictions+2,Y
    case 0xC25491: {
        Instruction step(cpu, 0xB9, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    case 0xC25494: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    // Overlapping static entry reached from 0xC25494.
    case 0xC25496: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1986 TAX
    case 0xC25497: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1987 CPX #1
    case 0xC25498: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1987 CPX #1
    // Overlapping static entry reached from 0xC25498.
    case 0xC2549A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1988 BEQ @UNKNOWN139
    case 0xC2549B: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1989 CPX #3
    case 0xC2549D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1989 CPX #3
    // Overlapping static entry reached from 0xC2549D.
    case 0xC2549F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1990 BEQ @UNKNOWN139
    case 0xC254A0: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1991 CPX #4
    case 0xC254A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1991 CPX #4
    // Overlapping static entry reached from 0xC254A2.
    case 0xC254A4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1992 BEQ @UNKNOWN139
    case 0xC254A5: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1993 LDA a:battler::speed,Y
    case 0xC254A7: {
        Instruction step(cpu, 0xB9, 0x00002Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1994 CMP @VIRTUAL04
    case 0xC254AA: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC254AC: {
        Instruction step(cpu, 0x90, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC254AE: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1996 STA @VIRTUAL04
    case 0xC254B0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1997 STA @LOCAL08
    case 0xC254B2: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1998 BRA @UNKNOWN139
    case 0xC254B4: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2000 LDA a:battler::speed,Y
    case 0xC254B6: {
        Instruction step(cpu, 0xB9, 0x00002Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2001 CMP @LOCAL05
    case 0xC254B9: {
        Instruction step(cpu, 0xC5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC254BB: {
        Instruction step(cpu, 0x90, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC254BD: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2003 STA @LOCAL05
    case 0xC254BF: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2005 TYA
    case 0xC254C1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2006 CLC
    case 0xC254C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    case 0xC254C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC254C3.
    case 0xC254C5: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2008 TAY
    case 0xC254C6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2010 STY @LOCAL0C
    case 0xC254C7: {
        Instruction step(cpu, 0x84, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2014 INC @VIRTUAL02
    case 0xC254C9: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2016 LDA @VIRTUAL02
    case 0xC254CB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    case 0xC254CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC254CD.
    case 0xC254CF: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC254D0: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC254D2: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC254D4: {
        Instruction step(cpu, 0x4C, 0x005443u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2019 LDA @VIRTUAL04
    case 0xC254D7: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2020 BEQ @UNKNOWN142
    case 0xC254D9: {
        Instruction step(cpu, 0xF0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2022 LDA @LOCAL09
    case 0xC254DB: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2026 CMP #4
    case 0xC254DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2026 CMP #4
    // Overlapping static entry reached from 0xC254DD.
    case 0xC254DF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2027 BEQ @UNKNOWN142
    case 0xC254E0: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2029 LDA @LOCAL0B
    case 0xC254E2: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254E8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC254EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2034 CLC
    case 0xC254EB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2035 ADC @LOCAL05
    case 0xC254EC: {
        Instruction step(cpu, 0x65, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2036 TAX
    case 0xC254EE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2038 STX @LOCAL0C
    case 0xC254EF: {
        Instruction step(cpu, 0x86, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2042 LDA @LOCAL08
    case 0xC254F1: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2043 STA @VIRTUAL04
    case 0xC254F3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2044 TXA
    case 0xC254F5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2045 CMP @VIRTUAL04
    case 0xC254F6: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2046 BCC @UNKNOWN143
    case 0xC254F8: {
        Instruction step(cpu, 0x90, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2047 LDA #100
    case 0xC254FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2047 LDA #100
    // Overlapping static entry reached from 0xC254FA.
    case 0xC254FC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2048 JSR RAND_LIMIT
    case 0xC254FD: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2050 STA @LOCAL0A
    case 0xC25500: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2051 LDX @LOCAL0C
    case 0xC25502: {
        Instruction step(cpu, 0xA6, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2056 TXA
    case 0xC25504: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2057 SEC
    case 0xC25505: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2058 SBC @VIRTUAL04
    case 0xC25506: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2059 STA @VIRTUAL02
    case 0xC25508: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2061 LDA @LOCAL0A
    case 0xC2550A: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2065 CMP @VIRTUAL02
    case 0xC2550C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2066 BCS @UNKNOWN143
    case 0xC2550E: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25510: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC25510.
    case 0xC25512: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25513: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25515: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC25515.
    case 0xC25517: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC25518: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC2551A: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2069 STZ @LOCAL03
    case 0xC2551E: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2070 JMP @UNKNOWN237
    case 0xC25520: {
        Instruction step(cpu, 0x4C, 0x005FBFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2073 STZ @LOCAL0C
    case 0xC25523: {
        Instruction step(cpu, 0x64, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25525: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DDu : 0x0000DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC25525.
    case 0xC25527: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25528: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2552A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC2552A.
    case 0xC2552C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2552D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2552F: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2080 STZ @LOCAL09
    case 0xC25533: {
        Instruction step(cpu, 0x64, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2084 JMP @UNKNOWN234
    case 0xC25535: {
        Instruction step(cpu, 0x4C, 0x005FADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2086 JSL CHECK_DEAD_PLAYERS
    case 0xC25538: {
        Instruction step(cpu, 0x22, 0xC2BAC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2087 LDA #0
    case 0xC2553C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2087 LDA #0
    // Overlapping static entry reached from 0xC2553C.
    case 0xC2553E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2088 JSL COUNT_CHARS
    case 0xC2553F: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2089 CMP #0
    case 0xC25543: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2089 CMP #0
    // Overlapping static entry reached from 0xC25543.
    case 0xC25545: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25546: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25548: {
        Instruction step(cpu, 0x4C, 0x005E23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2091 LDA #1
    case 0xC2554B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2091 LDA #1
    // Overlapping static entry reached from 0xC2554B.
    case 0xC2554D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2092 JSL COUNT_CHARS
    case 0xC2554E: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2093 CMP #0
    case 0xC25552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2093 CMP #0
    // Overlapping static entry reached from 0xC25552.
    case 0xC25554: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25555: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25557: {
        Instruction step(cpu, 0x4C, 0x005E23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    case 0xC2555A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    // Overlapping static entry reached from 0xC2555A.
    case 0xC2555C: {
        Instruction step(cpu, 0xFF, 0x850485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2096 STA @VIRTUAL04
    case 0xC2555D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    case 0xC2555F: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    // Overlapping static entry reached from 0xC2555C.
    case 0xC25560: {
        Instruction step(cpu, 0x21, 0x0000A0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2099 LDY #$0000
    case 0xC25561: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2099 LDY #$0000
    // Overlapping static entry reached from 0xC25560.
    case 0xC25562: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2099 LDY #$0000
    // Overlapping static entry reached from 0xC25561.
    case 0xC25563: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2100 STY @LOCAL05
    case 0xC25564: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2101 TYA
    case 0xC25566: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2106 STA @LOCAL10
    case 0xC25567: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2107 BRA @UNKNOWN150
    case 0xC25569: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    case 0xC2556B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2556B.
    case 0xC2556D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2110 JSL MULT168
    case 0xC2556E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2112 TAX
    case 0xC25572: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2113 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25573: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2114 AND #$00FF
    case 0xC25576: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2114 AND #$00FF
    // Overlapping static entry reached from 0xC25576.
    case 0xC25578: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2115 BEQ @UNKNOWN149
    case 0xC25579: {
        Instruction step(cpu, 0xF0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2116 LDA BATTLERS_TABLE+13,X
    case 0xC2557B: {
        Instruction step(cpu, 0xBD, 0x00A1BBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2117 AND #$00FF
    case 0xC2557E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2117 AND #$00FF
    // Overlapping static entry reached from 0xC2557E.
    case 0xC25580: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2118 BNE @UNKNOWN149
    case 0xC25581: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2119 LDA BATTLERS_TABLE+70,X
    case 0xC25583: {
        Instruction step(cpu, 0xBD, 0x00A1F4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2120 TAX
    case 0xC25586: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2121 LDY @LOCAL05
    case 0xC25587: {
        Instruction step(cpu, 0xA4, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2122 STY @VIRTUAL02
    case 0xC25589: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2123 TXA
    case 0xC2558B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2137 CMP @VIRTUAL02
    case 0xC2558C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2138 BCC @UNKNOWN149
    case 0xC2558E: {
        Instruction step(cpu, 0x90, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2139 LDA @LOCAL10
    case 0xC25590: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2140 STA @VIRTUAL04
    case 0xC25592: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2141 STA @LOCAL08
    case 0xC25594: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2143 TXY
    case 0xC25596: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2144 STY @LOCAL05
    case 0xC25597: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2149 LDA @LOCAL10
    case 0xC25599: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2150 INC
    case 0xC2559B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2151 STA @LOCAL10
    case 0xC2559C: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    case 0xC2559E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2559E.
    case 0xC255A0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2154 BCC @UNKNOWN148
    case 0xC255A1: {
        Instruction step(cpu, 0x90, 0x0000C8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2155 LDA @VIRTUAL04
    case 0xC255A3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    case 0xC255A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    // Overlapping static entry reached from 0xC255A5.
    case 0xC255A7: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC255A8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC255AA: {
        Instruction step(cpu, 0x4C, 0x005FB4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    // Overlapping static entry reached from 0xC255A7.
    case 0xC255AB: {
        Instruction step(cpu, 0xB4, 0x00005Fu, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2158 JSL REDIRECT_C10FA3
    case 0xC255AD: {
        Instruction step(cpu, 0x22, 0xC1DB30u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2159 LDA @VIRTUAL04
    case 0xC255B1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    case 0xC255B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC255B3.
    case 0xC255B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2161 JSL MULT168
    case 0xC255B6: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2162 CLC
    case 0xC255BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC255BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC255BB.
    case 0xC255BD: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2164 TAX
    case 0xC255BE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2165 STX CURRENT_ATTACKER
    case 0xC255BF: {
        Instruction step(cpu, 0x8E, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2166 SEP #PROC_FLAGS::ACCUM8
    case 0xC255C2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2167 LDA #1
    case 0xC255C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    case 0xC255C6: {
        Instruction step(cpu, 0x9D, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    // Overlapping static entry reached from 0xC255C4.
    case 0xC255C7: {
        Instruction step(cpu, 0x0D, 0x00AE00u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    case 0xC255C9: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC255C7.
    case 0xC255CA: {
        Instruction step(cpu, 0x72, 0x0000ABu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2170 REP #PROC_FLAGS::ACCUM8
    case 0xC255CC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2171 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC255CE: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    case 0xC255D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    // Overlapping static entry reached from 0xC255D1.
    case 0xC255D3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2173 TAX
    case 0xC255D4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    case 0xC255D5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC255D5.
    case 0xC255D7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC255D8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC255DA: {
        Instruction step(cpu, 0x4C, 0x005FADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    case 0xC255DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC255DD.
    case 0xC255DF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC255E0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC255E2: {
        Instruction step(cpu, 0x4C, 0x005FADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    case 0xC255E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC255E5.
    case 0xC255E7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2179 BEQ @UNKNOWN154
    case 0xC255E8: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2180 LDX CURRENT_ATTACKER
    case 0xC255EA: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2181 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC255ED: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    case 0xC255F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    // Overlapping static entry reached from 0xC255F0.
    case 0xC255F2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    case 0xC255F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC255F3.
    case 0xC255F5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC255F6: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC255F8: {
        Instruction step(cpu, 0x4C, 0x00568Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2186 LDX CURRENT_ATTACKER
    case 0xC255FB: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2187 INX
    case 0xC255FE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2188 INX
    case 0xC255FF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2189 INX
    case 0xC25600: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2190 INX
    case 0xC25601: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2192 STX @LOCAL0A
    case 0xC25602: {
        Instruction step(cpu, 0x86, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2196 LDA __BSS_START__,X
    case 0xC25604: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2197 STA @LOCAL10
    case 0xC25607: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25609: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2560F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2199 TAX
    case 0xC25610: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2200 INX
    case 0xC25611: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2201 INX
    case 0xC25612: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2202 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25613: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    case 0xC25617: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    // Overlapping static entry reached from 0xC25617.
    case 0xC25619: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    case 0xC2561A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC2561A.
    case 0xC2561C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2205 BEQ @UNKNOWN157
    case 0xC2561D: {
        Instruction step(cpu, 0xF0, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2206 LDA @LOCAL10
    case 0xC2561F: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    case 0xC25621: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC25621.
    case 0xC25623: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2208 BEQ @UNKNOWN157
    case 0xC25624: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC25626: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000123u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC25626.
    case 0xC25628: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    case 0xC25629: {
        Instruction step(cpu, 0xF0, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25628.
    case 0xC2562A: {
        Instruction step(cpu, 0x5F, 0x0124C9u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC2562B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000024u : 0x000124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC2562B.
    case 0xC2562D: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    case 0xC2562E: {
        Instruction step(cpu, 0xF0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2562D.
    case 0xC2562F: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC25630: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000025u : 0x000125u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC25630.
    case 0xC25632: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    case 0xC25633: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25632.
    case 0xC25634: {
        Instruction step(cpu, 0x55, 0x0000C9u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC25635: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000026u : 0x000126u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC25634.
    case 0xC25636: {
        Instruction step(cpu, 0x26, 0x000001u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC25635.
    case 0xC25637: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    case 0xC25638: {
        Instruction step(cpu, 0xF0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25637.
    case 0xC25639: {
        Instruction step(cpu, 0x50, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC2563A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000027u : 0x000127u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC25639.
    case 0xC2563B: {
        Instruction step(cpu, 0x27, 0x000001u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC2563A.
    case 0xC2563C: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    case 0xC2563D: {
        Instruction step(cpu, 0xF0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2563C.
    case 0xC2563E: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC2563F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000028u : 0x000128u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC2563F.
    case 0xC25641: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    case 0xC25642: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25641.
    case 0xC25643: {
        Instruction step(cpu, 0x46, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC25644: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000029u : 0x000129u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC25643.
    case 0xC25645: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x00F001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC25644.
    case 0xC25646: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    case 0xC25647: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25646.
    case 0xC25648: {
        Instruction step(cpu, 0x41, 0x0000C9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC25649: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Au : 0x00012Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25648.
    case 0xC2564A: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25649.
    case 0xC2564B: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    case 0xC2564C: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2564B.
    case 0xC2564D: {
        Instruction step(cpu, 0x3C, 0x002BC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC2564E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Bu : 0x00012Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC2564E.
    case 0xC25650: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    case 0xC25651: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25650.
    case 0xC25652: {
        Instruction step(cpu, 0x37, 0x0000C9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    case 0xC25653: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC25652.
    case 0xC25654: {
        Instruction step(cpu, 0x06, 0x000000u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC25653.
    case 0xC25655: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2228 BEQ @UNKNOWN157
    case 0xC25656: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    case 0xC25658: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000118u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC25658.
    case 0xC2565A: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    case 0xC2565B: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2565A.
    case 0xC2565C: {
        Instruction step(cpu, 0x2D, 0x0000C9u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    case 0xC2565D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC2565D.
    case 0xC2565F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2232 BEQ @UNKNOWN157
    case 0xC25660: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2233 LDX CURRENT_ATTACKER
    case 0xC25662: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2234 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25665: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    case 0xC25668: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    // Overlapping static entry reached from 0xC25668.
    case 0xC2566A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    case 0xC2566B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC2566B.
    case 0xC2566D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2237 BNE @UNKNOWN155
    case 0xC2566E: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    case 0xC25670: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FCu : 0x0000FCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    // Overlapping static entry reached from 0xC25670.
    case 0xC25672: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2240 LDX @LOCAL0A
    case 0xC25673: {
        Instruction step(cpu, 0xA6, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2244 STA __BSS_START__,X ;battler::current_action
    case 0xC25675: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2245 BRA @UNKNOWN156
    case 0xC25678: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    case 0xC2567A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x0000FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    // Overlapping static entry reached from 0xC2567A.
    case 0xC2567C: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2249 LDX @LOCAL0A
    case 0xC2567D: {
        Instruction step(cpu, 0xA6, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2253 STA __BSS_START__,X ;battler::current_action
    case 0xC2567F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2255 LDX CURRENT_ATTACKER
    case 0xC25682: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2256 SEP #PROC_FLAGS::ACCUM8
    case 0xC25685: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2257 STZ a:battler::action_item_slot,X
    case 0xC25687: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2259 LDX CURRENT_ATTACKER
    case 0xC2568A: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2260 REP #PROC_FLAGS::ACCUM8
    case 0xC2568D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2261 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC2568F: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    case 0xC25692: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    // Overlapping static entry reached from 0xC25692.
    case 0xC25694: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    case 0xC25695: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25695.
    case 0xC25697: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2264 BNE @UNKNOWN158
    case 0xC25698: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2265 LDX CURRENT_ATTACKER
    case 0xC2569A: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2266 INX
    case 0xC2569D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2267 INX
    case 0xC2569E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2268 INX
    case 0xC2569F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2269 INX
    case 0xC256A0: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2270 LDA __BSS_START__,X ;battler::current_action
    case 0xC256A1: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2271 BEQ @UNKNOWN158
    case 0xC256A4: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    case 0xC256A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0000FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    // Overlapping static entry reached from 0xC256A6.
    case 0xC256A8: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2273 STA __BSS_START__,X ;battler::current_action
    case 0xC256A9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2274 LDX CURRENT_ATTACKER
    case 0xC256AC: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2275 SEP #PROC_FLAGS::ACCUM8
    case 0xC256AF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2276 STZ a:battler::action_item_slot,X
    case 0xC256B1: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2278 LDX CURRENT_ATTACKER
    case 0xC256B4: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2279 REP #PROC_FLAGS::ACCUM8
    case 0xC256B7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2280 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC256B9: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    case 0xC256BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    // Overlapping static entry reached from 0xC256BC.
    case 0xC256BE: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    case 0xC256BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC256BF.
    case 0xC256C1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2283 BNE @UNKNOWN159
    case 0xC256C2: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2284 LDX CURRENT_ATTACKER
    case 0xC256C4: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2285 INX
    case 0xC256C7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2286 INX
    case 0xC256C8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2287 INX
    case 0xC256C9: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2288 INX
    case 0xC256CA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2289 LDA __BSS_START__,X ;battler::current_action
    case 0xC256CB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2290 BEQ @UNKNOWN159
    case 0xC256CE: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    case 0xC256D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    // Overlapping static entry reached from 0xC256D0.
    case 0xC256D2: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2292 STA __BSS_START__,X ;battler::current_action
    case 0xC256D3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2293 LDX CURRENT_ATTACKER
    case 0xC256D6: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2294 SEP #PROC_FLAGS::ACCUM8
    case 0xC256D9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2295 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC256DB: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2296 LDX CURRENT_ATTACKER
    case 0xC256DE: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2297 STZ a:battler::action_item_slot,X
    case 0xC256E1: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2299 LDX CURRENT_ATTACKER
    case 0xC256E4: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2300 REP #PROC_FLAGS::ACCUM8
    case 0xC256E7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2301 LDA a:battler::afflictions+STATUS_GROUP::CONCENTRATION,X
    case 0xC256E9: {
        Instruction step(cpu, 0xBD, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    case 0xC256EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    // Overlapping static entry reached from 0xC256EC.
    case 0xC256EE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2303 BEQ @UNKNOWN160
    case 0xC256EF: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2304 LDX CURRENT_ATTACKER
    case 0xC256F1: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2305 INX
    case 0xC256F4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2306 INX
    case 0xC256F5: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2307 INX
    case 0xC256F6: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2308 INX
    case 0xC256F7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2310 STX @LOCAL0A
    case 0xC256F8: {
        Instruction step(cpu, 0x86, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2314 LDA __BSS_START__,X ;battler::current_action
    case 0xC256FA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2315 STA @LOCAL10
    case 0xC256FD: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256FF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25701: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25702: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25704: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25705: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2317 TAX
    case 0xC25706: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2318 INX
    case 0xC25707: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2319 INX
    case 0xC25708: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2320 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25709: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    case 0xC2570D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    // Overlapping static entry reached from 0xC2570D.
    case 0xC2570F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    case 0xC25710: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC25710.
    case 0xC25712: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2323 BNE @UNKNOWN160
    case 0xC25713: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2324 LDA @LOCAL10
    case 0xC25715: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2325 BEQ @UNKNOWN160
    case 0xC25717: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    case 0xC25719: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    // Overlapping static entry reached from 0xC25719.
    case 0xC2571B: {
        Instruction step(cpu, 0x01, 0x0000A6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2328 LDX @LOCAL0A
    case 0xC2571C: {
        Instruction step(cpu, 0xA6, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2328 LDX @LOCAL0A
    // Overlapping static entry reached from 0xC2571B.
    case 0xC2571D: {
        Instruction step(cpu, 0x25, 0x00009Du, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2332 STA __BSS_START__,X ;battler::current_action
    case 0xC2571E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2332 STA __BSS_START__,X ;battler::current_action
    // Overlapping static entry reached from 0xC2571D.
    case 0xC2571F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2334 LDX CURRENT_ATTACKER
    case 0xC25721: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2335 LDA a:battler::afflictions+STATUS_GROUP::HOMESICKNESS,X
    case 0xC25724: {
        Instruction step(cpu, 0xBD, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    case 0xC25727: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    // Overlapping static entry reached from 0xC25727.
    case 0xC25729: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    case 0xC2572A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    // Overlapping static entry reached from 0xC2572A.
    case 0xC2572C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2338 BNE @UNKNOWN161
    case 0xC2572D: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2339 LDX CURRENT_ATTACKER
    case 0xC2572F: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2340 LDA a:battler::current_action,X
    case 0xC25732: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2341 BEQ @UNKNOWN161
    case 0xC25735: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2342 JSL RAND
    case 0xC25737: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    case 0xC2573B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    // Overlapping static entry reached from 0xC2573B.
    case 0xC2573D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2344 BNE @UNKNOWN161
    case 0xC2573E: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    case 0xC25740: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FBu : 0x0000FBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    // Overlapping static entry reached from 0xC25740.
    case 0xC25742: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2346 LDX CURRENT_ATTACKER
    case 0xC25743: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2347 STA a:battler::current_action,X
    case 0xC25746: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2348 LDX CURRENT_ATTACKER
    case 0xC25749: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2349 SEP #PROC_FLAGS::ACCUM8
    case 0xC2574C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2350 STZ a:battler::action_item_slot,X
    case 0xC2574E: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2352 REP #PROC_FLAGS::ACCUM8
    case 0xC25751: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25753: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25753.
    case 0xC25755: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25756: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25758: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25758.
    case 0xC2575A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC2575B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2354 LDX CURRENT_ATTACKER
    case 0xC2575D: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2355 LDA a:battler::current_action,X
    case 0xC25760: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25763: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25765: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25766: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25768: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25769: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2358 STA @LOCAL0A
    case 0xC2576A: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2576C: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2576E: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25770: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25772: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2363 CLC
    case 0xC25774: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2364 ADC @VIRTUAL0A
    case 0xC25775: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2365 STA @VIRTUAL0A
    case 0xC25777: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2366 LDA [@VIRTUAL0A]
    case 0xC25779: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    case 0xC2577B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    // Overlapping static entry reached from 0xC2577B.
    case 0xC2577D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2368 CMP #1
    case 0xC2577E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2368 CMP #1
    // Overlapping static entry reached from 0xC2577E.
    case 0xC25780: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2369 BNE @UNKNOWN163
    case 0xC25781: {
        Instruction step(cpu, 0xD0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2371 LDA @LOCAL0A
    case 0xC25783: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2375 INC
    case 0xC25785: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2376 CLC
    case 0xC25786: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2377 ADC @VIRTUAL06
    case 0xC25787: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2378 STA @VIRTUAL06
    case 0xC25789: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2379 LDA [@VIRTUAL06]
    case 0xC2578B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    case 0xC2578D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    // Overlapping static entry reached from 0xC2578D.
    case 0xC2578F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2381 BNE @UNKNOWN163
    case 0xC25790: {
        Instruction step(cpu, 0xD0, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2382 LDX CURRENT_ATTACKER
    case 0xC25792: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2383 LDA a:battler::ally_or_enemy,X
    case 0xC25795: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    case 0xC25798: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    // Overlapping static entry reached from 0xC25798.
    case 0xC2579A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2385 BNE @UNKNOWN162
    case 0xC2579B: {
        Instruction step(cpu, 0xD0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2386 SEP #PROC_FLAGS::ACCUM8
    case 0xC2579D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2387 LDA #1
    case 0xC2579F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    case 0xC257A1: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2579F.
    case 0xC257A2: {
        Instruction step(cpu, 0x72, 0x0000ABu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2389 STA a:battler::action_targetting,X
    case 0xC257A4: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    case 0xC257A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC257A7.
    case 0xC257A9: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2391 REP #PROC_FLAGS::ACCUM8
    case 0xC257AA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2392 LDA CURRENT_ATTACKER
    case 0xC257AC: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2393 SEC
    case 0xC257AF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC257B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC257B0.
    case 0xC257B2: {
        Instruction step(cpu, 0xA1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC257B3: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC257B2.
    case 0xC257B4: {
        Instruction step(cpu, 0x3D, 0x00C091u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2396 SEP #PROC_FLAGS::ACCUM8
    case 0xC257B7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2397 INC
    case 0xC257B9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2398 LDX CURRENT_ATTACKER
    case 0xC257BA: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2399 STA a:battler::current_target,X
    case 0xC257BD: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2400 BRA @UNKNOWN163
    case 0xC257C0: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2402 SEP #PROC_FLAGS::ACCUM8
    case 0xC257C2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2403 LDA #17
    case 0xC257C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x00AE11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    case 0xC257C6: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC257C4.
    case 0xC257C7: {
        Instruction step(cpu, 0x72, 0x0000ABu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2405 STA a:battler::action_targetting,X
    case 0xC257C9: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    case 0xC257CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC257CC.
    case 0xC257CE: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2407 REP #PROC_FLAGS::ACCUM8
    case 0xC257CF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2408 LDA CURRENT_ATTACKER
    case 0xC257D1: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2409 SEC
    case 0xC257D4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC257D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC257D5.
    case 0xC257D7: {
        Instruction step(cpu, 0xA1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC257D8: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC257D7.
    case 0xC257D9: {
        Instruction step(cpu, 0x3D, 0x00C091u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2412 TAX
    case 0xC257DC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2413 LDA CURRENT_ATTACKER
    case 0xC257DD: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2414 JSL UNKNOWN_C4A228
    case 0xC257E0: {
        Instruction step(cpu, 0x22, 0xC47695u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2416 LDX #0
    case 0xC257E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2416 LDX #0
    // Overlapping static entry reached from 0xC257E4.
    case 0xC257E6: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2418 STX @LOCAL10
    case 0xC257E7: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2422 REP #PROC_FLAGS::ACCUM8
    case 0xC257E9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2423 LDA CURRENT_ATTACKER
    case 0xC257EB: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2424 STA CURRENT_TARGET
    case 0xC257EE: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2425 TXA
    case 0xC257F1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2426 JSL FIX_ATTACKER_NAME
    case 0xC257F2: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2427 JSL FIX_TARGET_NAME
    case 0xC257F6: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2428 LDX CURRENT_ATTACKER
    case 0xC257FA: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2429 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC257FD: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    case 0xC25800: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    // Overlapping static entry reached from 0xC25800.
    case 0xC25802: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    case 0xC25803: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC25803.
    case 0xC25805: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2432 BEQ @UNKNOWN164
    case 0xC25806: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    case 0xC25808: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC25808.
    case 0xC2580A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2434 BEQ @UNKNOWN165
    case 0xC2580B: {
        Instruction step(cpu, 0xF0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    case 0xC2580D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC2580D.
    case 0xC2580F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2436 BEQ @UNKNOWN166
    case 0xC25810: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    case 0xC25812: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC25812.
    case 0xC25814: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2438 BEQ @UNKNOWN167
    case 0xC25815: {
        Instruction step(cpu, 0xF0, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2439 JMP @UNKNOWN168
    case 0xC25817: {
        Instruction step(cpu, 0x4C, 0x0058B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2441 LDA #20
    case 0xC2581A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2441 LDA #20
    // Overlapping static entry reached from 0xC2581A.
    case 0xC2581C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2442 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2581D: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2443 TAX
    case 0xC25820: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2445 STX @LOCAL10
    case 0xC25821: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25823: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x002EACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25823.
    case 0xC25825: {
        Instruction step(cpu, 0x2E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25826: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25828: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25828.
    case 0xC2582A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC2582B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2450 TXA
    case 0xC2582D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC2582E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC25830: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25832: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25834: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25836: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25838: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2453 JSL DISPLAY_TEXT_WAIT
    case 0xC2583A: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2454 BRA @UNKNOWN168
    case 0xC2583E: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2456 LDA #20
    case 0xC25840: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2456 LDA #20
    // Overlapping static entry reached from 0xC25840.
    case 0xC25842: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2457 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC25843: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2458 TAX
    case 0xC25846: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2460 STX @LOCAL10
    case 0xC25847: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25849: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C6u : 0x002EC6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25849.
    case 0xC2584B: {
        Instruction step(cpu, 0x2E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC2584C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC2584E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2584E.
    case 0xC25850: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25851: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2465 TXA
    case 0xC25853: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC25854: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC25856: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25858: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2585A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2585C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2585E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2468 JSL DISPLAY_TEXT_WAIT
    case 0xC25860: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2469 BRA @UNKNOWN168
    case 0xC25864: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2471 LDA #4
    case 0xC25866: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2471 LDA #4
    // Overlapping static entry reached from 0xC25866.
    case 0xC25868: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2472 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC25869: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2473 TAX
    case 0xC2586C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2475 STX @LOCAL10
    case 0xC2586D: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2586F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DBu : 0x002EDBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2586F.
    case 0xC25871: {
        Instruction step(cpu, 0x2E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25872: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25874: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25874.
    case 0xC25876: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25877: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2480 TXA
    case 0xC25879: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC2587A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC2587C: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2587E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25880: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25882: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25884: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2483 JSL DISPLAY_TEXT_WAIT
    case 0xC25886: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2484 BRA @UNKNOWN168
    case 0xC2588A: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2486 LDA #4
    case 0xC2588C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2486 LDA #4
    // Overlapping static entry reached from 0xC2588C.
    case 0xC2588E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2487 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2588F: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2488 TAX
    case 0xC25892: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2490 STX @LOCAL10
    case 0xC25893: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25895: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x002EF5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25895.
    case 0xC25897: {
        Instruction step(cpu, 0x2E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25898: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC2589A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2589A.
    case 0xC2589C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC2589D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2495 TXA
    case 0xC2589F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC258A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC258A2: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258A4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258A6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258A8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC258AA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2498 JSL DISPLAY_TEXT_WAIT
    case 0xC258AC: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2501 LDX @LOCAL10
    case 0xC258B0: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2505 LDA CURRENT_ATTACKER
    case 0xC258B2: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2506 JSL LOSE_HP_STATUS
    case 0xC258B5: {
        Instruction step(cpu, 0x22, 0xC2BC91u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2507 LDX CURRENT_ATTACKER
    case 0xC258B9: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2508 LDA a:battler::hp,X
    case 0xC258BC: {
        Instruction step(cpu, 0xBD, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2509 BNE @UNKNOWN171
    case 0xC258BF: {
        Instruction step(cpu, 0xD0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2510 LDA CURRENT_ATTACKER
    case 0xC258C1: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2511 JSL KO_TARGET
    case 0xC258C4: {
        Instruction step(cpu, 0x22, 0xC27491u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2512 LDA #0
    case 0xC258C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2512 LDA #0
    // Overlapping static entry reached from 0xC258C8.
    case 0xC258CA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2513 JSL COUNT_CHARS
    case 0xC258CB: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2514 CMP #0
    case 0xC258CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2514 CMP #0
    // Overlapping static entry reached from 0xC258CF.
    case 0xC258D1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC258D2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC258D4: {
        Instruction step(cpu, 0x4C, 0x005E23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2516 LDA #1
    case 0xC258D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2516 LDA #1
    // Overlapping static entry reached from 0xC258D7.
    case 0xC258D9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2517 JSL COUNT_CHARS
    case 0xC258DA: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2518 CMP #0
    case 0xC258DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2518 CMP #0
    // Overlapping static entry reached from 0xC258DE.
    case 0xC258E0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC258E1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC258E3: {
        Instruction step(cpu, 0x4C, 0x005FADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2520 JMP @UNKNOWN225
    case 0xC258E6: {
        Instruction step(cpu, 0x4C, 0x005E23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2522 LDX CURRENT_ATTACKER
    case 0xC258E9: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2523 LDA a:battler::ally_or_enemy,X
    case 0xC258EC: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    case 0xC258EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    // Overlapping static entry reached from 0xC258EF.
    case 0xC258F1: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2525 CMP #1
    case 0xC258F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2525 CMP #1
    // Overlapping static entry reached from 0xC258F2.
    case 0xC258F4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2526 BNE @UNKNOWN172
    case 0xC258F5: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2527 LDA CURRENT_ATTACKER
    case 0xC258F7: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2528 JSL CHOOSE_TARGET
    case 0xC258FA: {
        Instruction step(cpu, 0x22, 0xC24344u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2529 LDX CURRENT_ATTACKER
    case 0xC258FE: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2530 LDA a:battler::current_action,X
    case 0xC25901: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    case 0xC25904: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC25904.
    case 0xC25906: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2532 BNE @UNKNOWN172
    case 0xC25907: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2533 JSL SELECT_STEALABLE_ITEM
    case 0xC25909: {
        Instruction step(cpu, 0x22, 0xC241D3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2534 SEP #PROC_FLAGS::ACCUM8
    case 0xC2590D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2535 LDX CURRENT_ATTACKER
    case 0xC2590F: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2536 STA a:battler::current_action_argument,X
    case 0xC25912: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2538 REP #PROC_FLAGS::ACCUM8
    case 0xC25915: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2539 LDA CURRENT_ATTACKER
    case 0xC25917: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2540 JSL UNKNOWN_C24703
    case 0xC2591A: {
        Instruction step(cpu, 0x22, 0xC245D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2541 LDX CURRENT_ATTACKER
    case 0xC2591E: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2542 LDA a:battler::ally_or_enemy,X
    case 0xC25921: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    case 0xC25924: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    // Overlapping static entry reached from 0xC25924.
    case 0xC25926: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2544 BNE @UNKNOWN174
    case 0xC25927: {
        Instruction step(cpu, 0xD0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2545 LDX CURRENT_ATTACKER
    case 0xC25929: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2546 LDA a:battler::current_action,X
    case 0xC2592C: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2592F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25931: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25932: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25934: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25935: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2548 TAX
    case 0xC25936: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2549 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25937: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    case 0xC2593B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    // Overlapping static entry reached from 0xC2593B.
    case 0xC2593D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2551 BNE @UNKNOWN174
    case 0xC2593E: {
        Instruction step(cpu, 0xD0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2552 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25940: {
        Instruction step(cpu, 0x22, 0xC24023u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25944: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25944.
    case 0xC25946: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25947: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25949: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25949.
    case 0xC2594B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2594C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2594E: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25951: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25953: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25956: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2555 CMP @VIRTUAL0A+2
    case 0xC25958: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2556 BNE @UNKNOWN173
    case 0xC2595A: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2557 LDA @VIRTUAL06
    case 0xC2595C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2558 CMP @VIRTUAL0A
    case 0xC2595E: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2560 BNE @UNKNOWN174
    case 0xC25960: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2561 LDA CURRENT_ATTACKER
    case 0xC25962: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2562 JSL CHOOSE_TARGET
    case 0xC25965: {
        Instruction step(cpu, 0x22, 0xC24344u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2563 LDA CURRENT_ATTACKER
    case 0xC25969: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2564 JSL UNKNOWN_C24703
    case 0xC2596C: {
        Instruction step(cpu, 0x22, 0xC245D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2565 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25970: {
        Instruction step(cpu, 0x22, 0xC24023u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2567 LDY #0
    case 0xC25974: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2567 LDY #0
    // Overlapping static entry reached from 0xC25974.
    case 0xC25976: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2568 STY @LOCAL10
    case 0xC25977: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2569 LDX CURRENT_ATTACKER
    case 0xC25979: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2570 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2597C: {
        Instruction step(cpu, 0xBD, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    case 0xC2597F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    // Overlapping static entry reached from 0xC2597F.
    case 0xC25981: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25982.
    case 0xC25984: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2573 BNE @UNKNOWN175
    case 0xC25985: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2574 LDA #100
    case 0xC25987: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2574 LDA #100
    // Overlapping static entry reached from 0xC25987.
    case 0xC25989: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2575 JSR RAND_LIMIT
    case 0xC2598A: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    case 0xC2598D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    // Overlapping static entry reached from 0xC2598D.
    case 0xC2598F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2577 BCC @UNKNOWN176
    case 0xC25990: {
        Instruction step(cpu, 0x90, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2579 LDX CURRENT_ATTACKER
    case 0xC25992: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2580 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25995: {
        Instruction step(cpu, 0xBD, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    case 0xC25998: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    // Overlapping static entry reached from 0xC25998.
    case 0xC2599A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    case 0xC2599B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC2599B.
    case 0xC2599D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2583 BNE @UNKNOWN179
    case 0xC2599E: {
        Instruction step(cpu, 0xD0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2585 LDX CURRENT_ATTACKER
    case 0xC259A0: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2586 LDA a:battler::current_action,X
    case 0xC259A3: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259A6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259A9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC259AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2588 TAX
    case 0xC259AD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2589 INX
    case 0xC259AE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2590 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC259AF: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    case 0xC259B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    // Overlapping static entry reached from 0xC259B3.
    case 0xC259B5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2592 BEQ @UNKNOWN179
    case 0xC259B6: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2593 LDY #1
    case 0xC259B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2593 LDY #1
    // Overlapping static entry reached from 0xC259B8.
    case 0xC259BA: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2594 STY @LOCAL10
    case 0xC259BB: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2596 JSR FEELING_STRANGE_RETARGETTING
    case 0xC259BD: {
        Instruction step(cpu, 0x20, 0x003EBDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2597 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC259C0: {
        Instruction step(cpu, 0x22, 0xC24023u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC259C4.
    case 0xC259C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259C7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC259C9.
    case 0xC259CB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC259CC: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259CE: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259D1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259D3: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC259D6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2600 CMP @VIRTUAL0A+2
    case 0xC259D8: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2601 BNE @UNKNOWN178
    case 0xC259DA: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2602 LDA @VIRTUAL06
    case 0xC259DC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2603 CMP @VIRTUAL0A
    case 0xC259DE: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2605 BEQ @UNKNOWN177
    case 0xC259E0: {
        Instruction step(cpu, 0xF0, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2607 LDX CURRENT_ATTACKER
    case 0xC259E2: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2608 LDA a:battler::current_action,X
    case 0xC259E5: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    case 0xC259E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC259E8.
    case 0xC259EA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2610 BNE @UNKNOWN180
    case 0xC259EB: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2611 LDX CURRENT_ATTACKER
    case 0xC259ED: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2612 LDA a:battler::current_action_argument,X
    case 0xC259F0: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    case 0xC259F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    // Overlapping static entry reached from 0xC259F3.
    case 0xC259F5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2614 JSL UNKNOWN_C24348
    case 0xC259F6: {
        Instruction step(cpu, 0x22, 0xC24205u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2615 CMP #0
    case 0xC259FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2615 CMP #0
    // Overlapping static entry reached from 0xC259FA.
    case 0xC259FC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2616 BNE @UNKNOWN180
    case 0xC259FD: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2617 LDX CURRENT_ATTACKER
    case 0xC259FF: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2618 SEP #PROC_FLAGS::ACCUM8
    case 0xC25A02: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2619 STZ a:battler::current_action_argument,X
    case 0xC25A04: {
        Instruction step(cpu, 0x9E, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2621 REP #PROC_FLAGS::ACCUM8
    case 0xC25A07: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2622 LDA #0
    case 0xC25A09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2622 LDA #0
    // Overlapping static entry reached from 0xC25A09.
    case 0xC25A0B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2623 JSL FIX_ATTACKER_NAME
    case 0xC25A0C: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2624 LDX CURRENT_ATTACKER
    case 0xC25A10: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2625 SEP #PROC_FLAGS::ACCUM8
    case 0xC25A13: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2626 LDA a:battler::current_action_argument,X
    case 0xC25A15: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2627 JSL REDIRECT_C1ACF8
    case 0xC25A18: {
        Instruction step(cpu, 0x22, 0xC1DB59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2628 JSL UNKNOWN_C23E32
    case 0xC25A1C: {
        Instruction step(cpu, 0x22, 0xC23D07u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2630 LDX CURRENT_ATTACKER
    case 0xC25A20: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2631 LDA a:battler::ally_or_enemy,X
    case 0xC25A23: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    case 0xC25A26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    // Overlapping static entry reached from 0xC25A26.
    case 0xC25A28: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2633 BNE @UNKNOWN185
    case 0xC25A29: {
        Instruction step(cpu, 0xD0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2634 LDX CURRENT_ATTACKER
    case 0xC25A2B: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2635 LDA a:battler::id,X
    case 0xC25A2E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    case 0xC25A31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC25A31.
    case 0xC25A33: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25A34: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25A36: {
        Instruction step(cpu, 0xB0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2639 LDA #$0000
    case 0xC25A38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2639 LDA #$0000
    // Overlapping static entry reached from 0xC25A38.
    case 0xC25A3A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2640 STA @LOCAL0A
    case 0xC25A3B: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2645 BRA @UNKNOWN184
    case 0xC25A3D: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2647 LDX CURRENT_ATTACKER
    case 0xC25A3F: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2648 LDA a:battler::id,X
    case 0xC25A42: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2649 STA @VIRTUAL02
    case 0xC25A45: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2651 LDA @LOCAL0A
    case 0xC25A47: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2652 CLC
    case 0xC25A49: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2653 ADC #.LOWORD(GAME_STATE)
    case 0xC25A4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2653 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC25A4A.
    case 0xC25A4C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2654 TAX
    case 0xC25A4D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2655 LDA a:game_state::party_members,X
    case 0xC25A4E: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    case 0xC25A51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    // Overlapping static entry reached from 0xC25A51.
    case 0xC25A53: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2661 CMP @VIRTUAL02
    case 0xC25A54: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2662 BNE @UNKNOWN183
    case 0xC25A56: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2664 LDA @LOCAL0A
    case 0xC25A58: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2668 JSL REDIRECT_C43573
    case 0xC25A5A: {
        Instruction step(cpu, 0x22, 0xC1DBA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2669 BRA @UNKNOWN185
    case 0xC25A5E: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2672 LDA @LOCAL0A
    case 0xC25A60: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2673 INC
    case 0xC25A62: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2674 STA @LOCAL0A
    case 0xC25A63: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2681 CMP #$0006
    case 0xC25A65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2681 CMP #$0006
    // Overlapping static entry reached from 0xC25A65.
    case 0xC25A67: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2685 BCC @UNKNOWN182
    case 0xC25A68: {
        Instruction step(cpu, 0x90, 0x0000D5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2688 LDX CURRENT_ATTACKER
    case 0xC25A6A: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2689 LDA a:battler::current_action,X
    case 0xC25A6D: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A70: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A72: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A73: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A75: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A76: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2691 TAX
    case 0xC25A77: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2692 INX
    case 0xC25A78: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2693 INX
    case 0xC25A79: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2694 INX
    case 0xC25A7A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2695 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25A7B: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    case 0xC25A7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    // Overlapping static entry reached from 0xC25A7F.
    case 0xC25A81: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2697 BEQ @UNKNOWN187
    case 0xC25A82: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    case 0xC25A84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    // Overlapping static entry reached from 0xC25A84.
    case 0xC25A86: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2699 LDX CURRENT_ATTACKER
    case 0xC25A87: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2700 CMP a:battler::pp_target,X
    case 0xC25A8A: {
        Instruction step(cpu, 0xDD, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25A8D: {
        Instruction step(cpu, 0x90, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25A8F: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F2u : 0x0038F2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25A91.
    case 0xC25A93: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A94: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25A96.
    case 0xC25A98: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A99: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25A9B: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2703 JMP @UNKNOWN215
    case 0xC25A9F: {
        Instruction step(cpu, 0x4C, 0x005CD5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2705 TAX
    case 0xC25AA2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2706 LDA CURRENT_ATTACKER
    case 0xC25AA3: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2707 JSL UNKNOWN_C2BCB9
    case 0xC25AA6: {
        Instruction step(cpu, 0x22, 0xC2BC64u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2709 LDX CURRENT_ATTACKER
    case 0xC25AAA: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2710 LDA a:battler::ally_or_enemy,X
    case 0xC25AAD: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    case 0xC25AB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    // Overlapping static entry reached from 0xC25AB0.
    case 0xC25AB2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2712 CMP #1
    case 0xC25AB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2712 CMP #1
    // Overlapping static entry reached from 0xC25AB3.
    case 0xC25AB5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2713 BNE @UNKNOWN194
    case 0xC25AB6: {
        Instruction step(cpu, 0xD0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2714 LDX CURRENT_ATTACKER
    case 0xC25AB8: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2715 LDA a:battler::current_action,X
    case 0xC25ABB: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2716 BEQ @UNKNOWN194
    case 0xC25ABE: {
        Instruction step(cpu, 0xF0, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25AC6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2718 TAX
    case 0xC25AC7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2719 INX
    case 0xC25AC8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2720 INX
    case 0xC25AC9: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2721 LDA f:BATTLE_ACTION_TABLE,X ;battle_action::type
    case 0xC25ACA: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    case 0xC25ACE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    // Overlapping static entry reached from 0xC25ACE.
    case 0xC25AD0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    case 0xC25AD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC25AD1.
    case 0xC25AD3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2724 BEQ @UNKNOWN188
    case 0xC25AD4: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    case 0xC25AD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    // Overlapping static entry reached from 0xC25AD6.
    case 0xC25AD8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2726 BEQ @UNKNOWN188
    case 0xC25AD9: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    case 0xC25ADB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC25ADB.
    case 0xC25ADD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2728 BEQ @UNKNOWN189
    case 0xC25ADE: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    case 0xC25AE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    // Overlapping static entry reached from 0xC25AE0.
    case 0xC25AE2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2730 BEQ @UNKNOWN190
    case 0xC25AE3: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2731 BRA @UNKNOWN191
    case 0xC25AE5: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2733 LDA #1
    case 0xC25AE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2733 LDA #1
    // Overlapping static entry reached from 0xC25AE7.
    case 0xC25AE9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2734 JSL UNKNOWN_C2FEF9
    case 0xC25AEA: {
        Instruction step(cpu, 0x22, 0xC2FE12u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2735 BRA @UNKNOWN191
    case 0xC25AEE: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2737 LDA #2
    case 0xC25AF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2737 LDA #2
    // Overlapping static entry reached from 0xC25AF0.
    case 0xC25AF2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2738 JSL UNKNOWN_C2FEF9
    case 0xC25AF3: {
        Instruction step(cpu, 0x22, 0xC2FE12u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2739 BRA @UNKNOWN191
    case 0xC25AF7: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2741 LDA #3
    case 0xC25AF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2741 LDA #3
    // Overlapping static entry reached from 0xC25AF9.
    case 0xC25AFB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2742 JSL UNKNOWN_C2FEF9
    case 0xC25AFC: {
        Instruction step(cpu, 0x22, 0xC2FE12u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2744 SEP #PROC_FLAGS::ACCUM8
    case 0xC25B00: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2745 LDA #12
    case 0xC25B02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00AE0Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    case 0xC25B04: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25B02.
    case 0xC25B05: {
        Instruction step(cpu, 0x72, 0x0000ABu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2747 STA a:battler::unknown73,X
    case 0xC25B07: {
        Instruction step(cpu, 0x9D, 0x000049u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2748 LDX #0
    case 0xC25B0A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2748 LDX #0
    // Overlapping static entry reached from 0xC25B0A.
    case 0xC25B0C: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2749 STX @LOCAL07
    case 0xC25B0D: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2750 BRA @UNKNOWN193
    case 0xC25B0F: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2752 JSL WINDOW_TICK
    case 0xC25B11: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2753 LDX @LOCAL07
    case 0xC25B15: {
        Instruction step(cpu, 0xA6, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2754 INX
    case 0xC25B17: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2755 STX @LOCAL07
    case 0xC25B18: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2757 CPX #12
    case 0xC25B1A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2757 CPX #12
    // Overlapping static entry reached from 0xC25B1A.
    case 0xC25B1C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2758 BCC @UNKNOWN192
    case 0xC25B1D: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2760 LDY @LOCAL10
    case 0xC25B1F: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2761 BEQ @UNKNOWN196
    case 0xC25B21: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2762 LDX CURRENT_ATTACKER
    case 0xC25B23: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2763 REP #PROC_FLAGS::ACCUM8
    case 0xC25B26: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2764 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25B28: {
        Instruction step(cpu, 0xBD, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    case 0xC25B2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    // Overlapping static entry reached from 0xC25B2B.
    case 0xC25B2D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    case 0xC25B2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC25B2E.
    case 0xC25B30: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2767 BNE @UNKNOWN195
    case 0xC25B31: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25B33.
    case 0xC25B35: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B36: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25B38.
    case 0xC25B3A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B3B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25B3D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2770 LDX CURRENT_ATTACKER
    case 0xC25B41: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2771 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC25B44: {
        Instruction step(cpu, 0xBD, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    case 0xC25B47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    // Overlapping static entry reached from 0xC25B47.
    case 0xC25B49: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25B4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25B4A.
    case 0xC25B4C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2774 BNE @UNKNOWN196
    case 0xC25B4D: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000036u : 0x000036u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25B4F.
    case 0xC25B51: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B52: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25B54.
    case 0xC25B56: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B57: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25B59: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2777 REP #PROC_FLAGS::ACCUM8
    case 0xC25B5D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25B5F.
    case 0xC25B61: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B62: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25B64.
    case 0xC25B66: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25B67: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2779 LDX CURRENT_ATTACKER
    case 0xC25B69: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2780 LDA a:battler::current_action,X
    case 0xC25B6C: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B6F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B71: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B72: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B74: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B75: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2782 INC
    case 0xC25B76: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2783 INC
    case 0xC25B77: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2784 INC
    case 0xC25B78: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2785 INC
    case 0xC25B79: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2786 CLC
    case 0xC25B7A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2787 ADC @VIRTUAL0A
    case 0xC25B7B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2788 STA @VIRTUAL0A
    case 0xC25B7D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B7F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25B7F.
    case 0xC25B81: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B82: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B84: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B85: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B87: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25B89: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B8B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B8D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B8F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25B91: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2791 JSL UNKNOWN_C1DD9F
    case 0xC25B93: {
        Instruction step(cpu, 0x22, 0xC1DB7Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2792 LDX CURRENT_ATTACKER
    case 0xC25B97: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2793 LDA a:battler::current_action,X
    case 0xC25B9A: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25B9D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25B9F: {
        Instruction step(cpu, 0x4C, 0x005CD5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2795 BRA @UNKNOWN199
    case 0xC25BA2: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2797 JSL WINDOW_TICK
    case 0xC25BA4: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2799 JSL UNKNOWN_C2EACF
    case 0xC25BA8: {
        Instruction step(cpu, 0x22, 0xC2E9E8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2800 CMP #0
    case 0xC25BAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2800 CMP #0
    // Overlapping static entry reached from 0xC25BAC.
    case 0xC25BAE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2801 BNE @UNKNOWN198
    case 0xC25BAF: {
        Instruction step(cpu, 0xD0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2802 LDY #0
    case 0xC25BB1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2802 LDY #0
    // Overlapping static entry reached from 0xC25BB1.
    case 0xC25BB3: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2803 STY @LOCAL05
    case 0xC25BB4: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2804 JMP @UNKNOWN214
    case 0xC25BB6: {
        Instruction step(cpu, 0x4C, 0x005CCBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2806 TYA
    case 0xC25BB9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2807 JSL IS_CHAR_TARGETTED
    case 0xC25BBA: {
        Instruction step(cpu, 0x22, 0xC26F68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2808 CMP #0
    case 0xC25BBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2808 CMP #0
    // Overlapping static entry reached from 0xC25BBE.
    case 0xC25BC0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25BC1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25BC3: {
        Instruction step(cpu, 0x4C, 0x005CC6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2810 LDY @LOCAL05
    case 0xC25BC6: {
        Instruction step(cpu, 0xA4, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2811 TYA
    case 0xC25BC8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    case 0xC25BC9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25BC9.
    case 0xC25BCB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2813 JSL MULT168
    case 0xC25BCC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2814 CLC
    case 0xC25BD0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC25BD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25BD1.
    case 0xC25BD3: {
        Instruction step(cpu, 0xA1, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2816 STA CURRENT_TARGET
    case 0xC25BD4: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2816 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC25BD3.
    case 0xC25BD5: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2817 JSL FIX_TARGET_NAME
    case 0xC25BD7: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2818 LDX CURRENT_TARGET
    case 0xC25BDB: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2819 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25BDE: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    case 0xC25BE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    // Overlapping static entry reached from 0xC25BE1.
    case 0xC25BE3: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    case 0xC25BE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC25BE4.
    case 0xC25BE6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2822 BNE @UNKNOWN204
    case 0xC25BE7: {
        Instruction step(cpu, 0xD0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2824 LDX #$0000
    case 0xC25BE9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2824 LDX #$0000
    // Overlapping static entry reached from 0xC25BE9.
    case 0xC25BEB: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2825 STX @LOCAL10
    case 0xC25BEC: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2830 BRA @UNKNOWN203
    case 0xC25BEE: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2835 LDX CURRENT_ATTACKER
    case 0xC25BF0: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2836 CMP a:battler::current_action,X
    case 0xC25BF3: {
        Instruction step(cpu, 0xDD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2837 BEQ @UNKNOWN204
    case 0xC25BF6: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2839 LDX @LOCAL10
    case 0xC25BF8: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2840 INX
    case 0xC25BFA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2841 STX @LOCAL10
    case 0xC25BFB: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2849 TXA
    case 0xC25BFD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2850 ASL
    case 0xC25BFE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2851 TAX
    case 0xC25BFF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2852 LDA f:DEAD_TARGETTABLE_ACTIONS,X
    case 0xC25C00: {
        Instruction step(cpu, 0xBF, 0xC474F0u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2859 BNE @UNKNOWN202
    case 0xC25C04: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Au : 0x002E3Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25C06.
    case 0xC25C08: {
        Instruction step(cpu, 0x2E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C09: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25C0B.
    case 0xC25C0D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C0E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25C10: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2861 JMP @UNKNOWN213
    case 0xC25C14: {
        Instruction step(cpu, 0x4C, 0x005CC6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C17.
    case 0xC25C19: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C1A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C1C.
    case 0xC25C1E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C1F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2864 LDX CURRENT_ATTACKER
    case 0xC25C21: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2865 LDA a:battler::current_action,X
    case 0xC25C24: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C27: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C29: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C2A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C2C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C2D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2867 CLC
    case 0xC25C2E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2868 ADC #8
    case 0xC25C2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2868 ADC #8
    // Overlapping static entry reached from 0xC25C2F.
    case 0xC25C31: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2869 CLC
    case 0xC25C32: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2870 ADC @VIRTUAL0A
    case 0xC25C33: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2871 STA @VIRTUAL0A
    case 0xC25C35: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25C37.
    case 0xC25C39: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3A: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3D: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C3F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C41: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C43.
    case 0xC25C45: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C46: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C48.
    case 0xC25C4A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25C4B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C4D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C4F: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C51: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C53: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25C55: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2875 BEQ @UNKNOWN213
    case 0xC25C57: {
        Instruction step(cpu, 0xF0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2876 PHA
    case 0xC25C59: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C5A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C5C: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C5F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25C61: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2878 PLA
    case 0xC25C64: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2879 JSL UNKNOWN_C09279
    case 0xC25C65: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2880 JSL CHECK_DEAD_PLAYERS
    case 0xC25C69: {
        Instruction step(cpu, 0x22, 0xC2BAC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2881 SEP #PROC_FLAGS::ACCUM8
    case 0xC25C6D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2882 LDA #1
    case 0xC25C6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    case 0xC25C71: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC25C6F.
    case 0xC25C72: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC25C72.
    case 0xC25C73: {
        Instruction step(cpu, 0x99, 0x0020C2u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2884 REP #PROC_FLAGS::ACCUM8
    case 0xC25C74: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2885 LDA #0
    case 0xC25C76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2885 LDA #0
    // Overlapping static entry reached from 0xC25C76.
    case 0xC25C78: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2886 JSL COUNT_CHARS
    case 0xC25C79: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2887 CMP #0
    case 0xC25C7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2887 CMP #0
    // Overlapping static entry reached from 0xC25C7D.
    case 0xC25C7F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2888 BEQ @UNKNOWN206
    case 0xC25C80: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2889 LDA #1
    case 0xC25C82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2889 LDA #1
    // Overlapping static entry reached from 0xC25C82.
    case 0xC25C84: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2890 JSL COUNT_CHARS
    case 0xC25C85: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2891 CMP #0
    case 0xC25C89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2891 CMP #0
    // Overlapping static entry reached from 0xC25C89.
    case 0xC25C8B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2892 BNE @UNKNOWN207
    case 0xC25C8C: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2894 JSL UNKNOWN_C2437E
    case 0xC25C8E: {
        Instruction step(cpu, 0x22, 0xC2423Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2895 JMP @UNKNOWN225
    case 0xC25C92: {
        Instruction step(cpu, 0x4C, 0x005E23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2897 LDA SPECIAL_DEFEAT
    case 0xC25C95: {
        Instruction step(cpu, 0xAD, 0x00ABE3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2898 CMP #3
    case 0xC25C98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2898 CMP #3
    // Overlapping static entry reached from 0xC25C98.
    case 0xC25C9A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2899 BEQ @UNKNOWN208
    case 0xC25C9B: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2900 CMP #2
    case 0xC25C9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2900 CMP #2
    // Overlapping static entry reached from 0xC25C9D.
    case 0xC25C9F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2901 BEQ @UNKNOWN209
    case 0xC25CA0: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2902 CMP #1
    case 0xC25CA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2902 CMP #1
    // Overlapping static entry reached from 0xC25CA2.
    case 0xC25CA4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2903 BEQ @UNKNOWN210
    case 0xC25CA5: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2904 BRA @UNKNOWN212
    case 0xC25CA7: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2906 STZ @LOCAL03
    case 0xC25CA9: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2907 JMP @UNKNOWN237
    case 0xC25CAB: {
        Instruction step(cpu, 0x4C, 0x005FBFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2909 JSL UNKNOWN_C2437E
    case 0xC25CAE: {
        Instruction step(cpu, 0x22, 0xC2423Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2910 JMP @ENEMIES_ARE_DEAD
    case 0xC25CB2: {
        Instruction step(cpu, 0x4C, 0x005E5Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2912 LDA #2
    case 0xC25CB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2912 LDA #2
    // Overlapping static entry reached from 0xC25CB5.
    case 0xC25CB7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2913 STA @LOCAL03
    case 0xC25CB8: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2914 JMP @UNKNOWN237
    case 0xC25CBA: {
        Instruction step(cpu, 0x4C, 0x005FBFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2916 JSL WINDOW_TICK
    case 0xC25CBD: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2918 LDA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC25CC1: {
        Instruction step(cpu, 0xAD, 0x00AF65u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2919 BNE @UNKNOWN211
    case 0xC25CC4: {
        Instruction step(cpu, 0xD0, 0x0000F7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2921 LDY @LOCAL05
    case 0xC25CC6: {
        Instruction step(cpu, 0xA4, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2922 INY
    case 0xC25CC8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2923 STY @LOCAL05
    case 0xC25CC9: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    case 0xC25CCB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25CCB.
    case 0xC25CCD: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25CCE: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25CD0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25CD2: {
        Instruction step(cpu, 0x4C, 0x005BB9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2928 LDX CURRENT_ATTACKER
    case 0xC25CD5: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2929 LDA a:battler::ally_or_enemy,X
    case 0xC25CD8: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    case 0xC25CDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    // Overlapping static entry reached from 0xC25CDB.
    case 0xC25CDD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2931 BNE @UNKNOWN217
    case 0xC25CDE: {
        Instruction step(cpu, 0xD0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2932 JSL UNKNOWN_C2437E
    case 0xC25CE0: {
        Instruction step(cpu, 0x22, 0xC2423Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2933 LDA MIRROR_ENEMY
    case 0xC25CE4: {
        Instruction step(cpu, 0xAD, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2934 BEQ @UNKNOWN216
    case 0xC25CE7: {
        Instruction step(cpu, 0xF0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2935 LDX CURRENT_ATTACKER
    case 0xC25CE9: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2936 LDA a:battler::id,X
    case 0xC25CEC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    case 0xC25CEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25CEF.
    case 0xC25CF1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2938 BNE @UNKNOWN216
    case 0xC25CF2: {
        Instruction step(cpu, 0xD0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2939 LDX MIRROR_TURN_TIMER
    case 0xC25CF4: {
        Instruction step(cpu, 0xAE, 0x00AC37u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2940 DEX
    case 0xC25CF7: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2941 STX MIRROR_TURN_TIMER
    case 0xC25CF8: {
        Instruction step(cpu, 0x8E, 0x00AC37u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2942 BNE @UNKNOWN216
    case 0xC25CFB: {
        Instruction step(cpu, 0xD0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2943 STZ MIRROR_ENEMY
    case 0xC25CFD: {
        Instruction step(cpu, 0x9C, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2944 LDA CURRENT_ATTACKER
    case 0xC25D00: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D03: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D05: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D06: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D08: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D09: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25D0B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2946 REP #PROC_FLAGS::ACCUM8
    case 0xC25D0D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D0F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D11: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D13: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25D15: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x00ABE9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC25D17.
    case 0xC25D19: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1C: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D1F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D20: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25D22: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2949 REP #PROC_FLAGS::ACCUM8
    case 0xC25D24: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D26: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D28: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D2A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25D2C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2951 JSL COPY_MIRROR_DATA
    case 0xC25D2E: {
        Instruction step(cpu, 0x22, 0xC2AED3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x003611u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25D32.
    case 0xC25D34: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D35: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25D34.
    case 0xC25D36: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25D37.
    case 0xC25D39: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D3A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25D3C: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2954 JSL REDIRECT_C3E6F8
    case 0xC25D40: {
        Instruction step(cpu, 0x22, 0xC1DBAFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2956 JSL CHECK_DEAD_PLAYERS
    case 0xC25D44: {
        Instruction step(cpu, 0x22, 0xC2BAC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2957 LDA CURRENT_ATTACKER
    case 0xC25D48: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2958 STA CURRENT_TARGET
    case 0xC25D4B: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2959 JSL FIX_TARGET_NAME
    case 0xC25D4E: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2960 LDX CURRENT_ATTACKER
    case 0xC25D52: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2961 LDA a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25D55: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    case 0xC25D58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    // Overlapping static entry reached from 0xC25D58.
    case 0xC25D5A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    case 0xC25D5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25D5B.
    case 0xC25D5D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2964 BEQ @UNKNOWN218
    case 0xC25D5E: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    case 0xC25D60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC25D60.
    case 0xC25D62: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2966 BEQ @UNKNOWN219
    case 0xC25D63: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    case 0xC25D65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC25D65.
    case 0xC25D67: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2968 BEQ @UNKNOWN220
    case 0xC25D68: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2969 BRA @UNKNOWN221
    case 0xC25D6A: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2971 JSL RAND
    case 0xC25D6C: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    case 0xC25D70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    // Overlapping static entry reached from 0xC25D70.
    case 0xC25D72: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2973 BNE @UNKNOWN221
    case 0xC25D73: {
        Instruction step(cpu, 0xD0, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Eu : 0x00342Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25D75.
    case 0xC25D77: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D78: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25D77.
    case 0xC25D79: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25D7A.
    case 0xC25D7C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D7D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25D7F: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2975 LDX CURRENT_ATTACKER
    case 0xC25D83: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2976 SEP #PROC_FLAGS::ACCUM8
    case 0xC25D86: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2977 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25D88: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2978 BRA @UNKNOWN221
    case 0xC25D8B: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2981 LDA #100
    case 0xC25D8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2981 LDA #100
    // Overlapping static entry reached from 0xC25D8D.
    case 0xC25D8F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2982 JSR RAND_LIMIT
    case 0xC25D90: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    case 0xC25D93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000055u : 0x000055u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    // Overlapping static entry reached from 0xC25D93.
    case 0xC25D95: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2984 BCS @UNKNOWN221
    case 0xC25D96: {
        Instruction step(cpu, 0xB0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25D98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x0033D1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25D98.
    case 0xC25D9A: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25D9B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25D9A.
    case 0xC25D9C: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25D9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25D9D.
    case 0xC25D9F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25DA0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25DA2: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2986 LDX CURRENT_ATTACKER
    case 0xC25DA6: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2987 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DA9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2988 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25DAB: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2989 BRA @UNKNOWN221
    case 0xC25DAE: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x0033E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25DB0.
    case 0xC25DB2: {
        Instruction step(cpu, 0x33, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25DB2.
    case 0xC25DB4: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25DB5.
    case 0xC25DB7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DB8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25DBA: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2993 LDX CURRENT_ATTACKER
    case 0xC25DBE: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2994 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DC1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2995 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25DC3: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2997 REP #PROC_FLAGS::ACCUM8
    case 0xC25DC6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2998 LDA CURRENT_ATTACKER
    case 0xC25DC8: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2999 CLC
    case 0xC25DCB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    case 0xC25DCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    // Overlapping static entry reached from 0xC25DCC.
    case 0xC25DCE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3001 TAX
    case 0xC25DCF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3002 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DD0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3003 LDA __BSS_START__,X
    case 0xC25DD2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3004 STA @LOCAL02
    case 0xC25DD5: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3005 REP #PROC_FLAGS::ACCUM8
    case 0xC25DD7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    case 0xC25DD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    // Overlapping static entry reached from 0xC25DD9.
    case 0xC25DDB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3007 BEQ @UNKNOWN222
    case 0xC25DDC: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3008 SEP #PROC_FLAGS::ACCUM8
    case 0xC25DDE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3009 LDA @LOCAL02
    case 0xC25DE0: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3010 DEC
    case 0xC25DE2: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3011 STA __BSS_START__,X
    case 0xC25DE3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3012 REP #PROC_FLAGS::ACCUM8
    case 0xC25DE6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    case 0xC25DE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    // Overlapping static entry reached from 0xC25DE8.
    case 0xC25DEA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3014 BNE @UNKNOWN222
    case 0xC25DEB: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x003440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25DED.
    case 0xC25DEF: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25DEF.
    case 0xC25DF1: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25DF2.
    case 0xC25DF4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25DF7: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC25DFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25DFB.
    case 0xC25DFD: {
        Instruction step(cpu, 0xA1, 0x0000A2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3018 LDX #0
    case 0xC25DFE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3018 LDX #0
    // Overlapping static entry reached from 0xC25DFD.
    case 0xC25DFF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3018 LDX #0
    // Overlapping static entry reached from 0xC25DFE.
    case 0xC25E00: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3019 STX @LOCAL10
    case 0xC25E01: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3020 BRA @UNKNOWN224
    case 0xC25E03: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3022 TAX
    case 0xC25E05: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3023 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E06: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3024 STZ a:battler::use_alt_spritemap,X
    case 0xC25E08: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3025 CLC
    case 0xC25E0B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3026 REP #PROC_FLAGS::ACCUM8
    case 0xC25E0C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    case 0xC25E0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25E0E.
    case 0xC25E10: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3028 LDX @LOCAL10
    case 0xC25E11: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3029 INX
    case 0xC25E13: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3030 STX @LOCAL10
    case 0xC25E14: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    case 0xC25E16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25E16.
    case 0xC25E18: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3033 BCC @UNKNOWN223
    case 0xC25E19: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3034 JSL CHECK_DEAD_PLAYERS
    case 0xC25E1B: {
        Instruction step(cpu, 0x22, 0xC2BAC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3035 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC25E1F: {
        Instruction step(cpu, 0x22, 0xC1DB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3037 LDA #0
    case 0xC25E23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3037 LDA #0
    // Overlapping static entry reached from 0xC25E23.
    case 0xC25E25: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3038 JSL COUNT_CHARS
    case 0xC25E26: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3039 CMP #0
    case 0xC25E2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3039 CMP #0
    // Overlapping static entry reached from 0xC25E2A.
    case 0xC25E2C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3040 BNE @ALLIES_ARE_ALIVE
    case 0xC25E2D: {
        Instruction step(cpu, 0xD0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3041 LDA #1
    case 0xC25E2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3041 LDA #1
    // Overlapping static entry reached from 0xC25E2F.
    case 0xC25E31: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3042 STA @LOCAL03
    case 0xC25E32: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3043 JSL RESET_HPPP_ROLLING
    case 0xC25E34: {
        Instruction step(cpu, 0x22, 0xC20E2Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0047C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25E38.
    case 0xC25E3A: {
        Instruction step(cpu, 0x47, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E3B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25E3A.
    case 0xC25E3C: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25E3D.
    case 0xC25E3F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E40: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25E42: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3045 LDA #1
    case 0xC25E46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3045 LDA #1
    // Overlapping static entry reached from 0xC25E46.
    case 0xC25E48: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3047 STA @LOCAL06
    case 0xC25E49: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3052 LDA #1
    case 0xC25E4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3052 LDA #1
    // Overlapping static entry reached from 0xC25E4B.
    case 0xC25E4D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3053 JSL COUNT_CHARS
    case 0xC25E4E: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3054 CMP #0
    case 0xC25E52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3054 CMP #0
    // Overlapping static entry reached from 0xC25E52.
    case 0xC25E54: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25E55: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25E57: {
        Instruction step(cpu, 0x4C, 0x005FADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3057 STZ @LOCAL03
    case 0xC25E5A: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3058 JSL RESET_HPPP_ROLLING
    case 0xC25E5C: {
        Instruction step(cpu, 0x22, 0xC20E2Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3059 LDA #1
    case 0xC25E60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3059 LDA #1
    // Overlapping static entry reached from 0xC25E60.
    case 0xC25E62: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3060 STA LETTERBOX_EFFECT_ENDING
    case 0xC25E63: {
        Instruction step(cpu, 0x8D, 0x00AF8Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3061 STA ENABLE_BACKGROUND_DARKENING
    case 0xC25E66: {
        Instruction step(cpu, 0x8D, 0x00AFA5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC25E69: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Au : 0x009B6Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC25E69.
    case 0xC25E6B: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3064 STY @LOCAL0A
    case 0xC25E6C: {
        Instruction step(cpu, 0x84, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3068 LDA BATTLE_MONEY_SCRATCH
    case 0xC25E6E: {
        Instruction step(cpu, 0xAD, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25E71: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25E73: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E75: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E77: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E79: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25E7B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3071 JSL DEPOSIT_INTO_ATM
    case 0xC25E7D: {
        Instruction step(cpu, 0x22, 0xC226E9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E81: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E83: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E85: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25E87: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3074 LDY @LOCAL0A
    case 0xC25E89: {
        Instruction step(cpu, 0xA4, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E8B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E8E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E90: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25E93: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3079 CLC
    case 0xC25E95: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E96: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E98: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E9A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E9C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25E9E: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EA0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA4: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25EA9: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3082 LDA #0
    case 0xC25EAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3082 LDA #0
    // Overlapping static entry reached from 0xC25EAC.
    case 0xC25EAE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3083 JSL COUNT_CHARS
    case 0xC25EAF: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3084 DEC
    case 0xC25EB3: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25EB4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25EB6: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EB8: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EBB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EBD: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25EC0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3087 CLC
    case 0xC25EC2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC5: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25EC9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25ECB: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25ECD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ECF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ED1: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ED4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25ED6: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3090 LDA #0
    case 0xC25ED9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3090 LDA #0
    // Overlapping static entry reached from 0xC25ED9.
    case 0xC25EDB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3091 JSL COUNT_CHARS
    case 0xC25EDC: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25EE0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25EE2: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3093 JSL DIVISION32
    case 0xC25EE4: {
        Instruction step(cpu, 0x22, 0xC090E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EE8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EEA: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25EEF: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3095 LDA CURRENT_BATTLE_GROUP
    case 0xC25EF2: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    case 0xC25EF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    // Overlapping static entry reached from 0xC25EF5.
    case 0xC25EF7: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    case 0xC25EF8: {
        Instruction step(cpu, 0x90, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    // Overlapping static entry reached from 0xC25EF7.
    case 0xC25EF9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25EFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x004780u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25EFA.
    case 0xC25EFC: {
        Instruction step(cpu, 0x47, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25EFD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25EFC.
    case 0xC25EFE: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25EFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25EFF.
    case 0xC25F01: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25F02: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F04: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F06: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F08: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F0A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3100 JSL DISPLAY_TEXT_WAIT
    case 0xC25F0C: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3101 BRA @SKIP_NOT_BOSS_BATTLE
    case 0xC25F10: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Eu : 0x00473Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25F12.
    case 0xC25F14: {
        Instruction step(cpu, 0x47, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F15: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25F14.
    case 0xC25F16: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25F17.
    case 0xC25F19: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25F1A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F1C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F1E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F20: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25F22: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3105 JSL DISPLAY_TEXT_WAIT
    case 0xC25F24: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3107 LDA ITEM_DROPPED
    case 0xC25F28: {
        Instruction step(cpu, 0xAD, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3108 BEQ @UNKNOWN230
    case 0xC25F2B: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3109 SEP #PROC_FLAGS::ACCUM8
    case 0xC25F2D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3110 LDA ITEM_DROPPED
    case 0xC25F2F: {
        Instruction step(cpu, 0xAD, 0x00ABE5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3111 JSL REDIRECT_C1ACF8
    case 0xC25F32: {
        Instruction step(cpu, 0x22, 0xC1DB59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x004917u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC25F36.
    case 0xC25F38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F39: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC25F38.
    case 0xC25F3A: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC25F3B.
    case 0xC25F3D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F3E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC25F40: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC25F44: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25F44.
    case 0xC25F46: {
        Instruction step(cpu, 0xA1, 0x000084u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3116 STY @LOCAL10
    case 0xC25F47: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3116 STY @LOCAL10
    // Overlapping static entry reached from 0xC25F46.
    case 0xC25F48: {
        Instruction step(cpu, 0x31, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3117 LDA #0
    case 0xC25F49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC25F48.
    case 0xC25F4A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC25F49.
    case 0xC25F4B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3118 STA @VIRTUAL02
    case 0xC25F4C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3119 BRA @UNKNOWN233
    case 0xC25F4E: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3121 LDA a:battler::consciousness,Y
    case 0xC25F50: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    case 0xC25F53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    // Overlapping static entry reached from 0xC25F53.
    case 0xC25F55: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3123 BEQ @UNKNOWN232
    case 0xC25F56: {
        Instruction step(cpu, 0xF0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3124 LDA a:battler::ally_or_enemy,Y
    case 0xC25F58: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    case 0xC25F5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    // Overlapping static entry reached from 0xC25F5B.
    case 0xC25F5D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3126 BNE @UNKNOWN232
    case 0xC25F5E: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3127 LDA a:battler::npc_id,Y
    case 0xC25F60: {
        Instruction step(cpu, 0xB9, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    case 0xC25F63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    // Overlapping static entry reached from 0xC25F63.
    case 0xC25F65: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3129 BNE @UNKNOWN232
    case 0xC25F66: {
        Instruction step(cpu, 0xD0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3130 LDA a:battler::afflictions,Y
    case 0xC25F68: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    case 0xC25F6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    // Overlapping static entry reached from 0xC25F6B.
    case 0xC25F6D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3132 TAX
    case 0xC25F6E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    case 0xC25F6F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC25F6F.
    case 0xC25F71: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3134 BEQ @UNKNOWN232
    case 0xC25F72: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    case 0xC25F74: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC25F74.
    case 0xC25F76: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3136 BEQ @UNKNOWN232
    case 0xC25F77: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F79: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F7C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F7E: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F81: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F83: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F87: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F89: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3139 LDX #1
    case 0xC25F8B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3139 LDX #1
    // Overlapping static entry reached from 0xC25F8B.
    case 0xC25F8D: {
        Instruction step(cpu, 0x00, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3140 LDA a:battler::id,Y
    case 0xC25F8E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3141 JSL GAIN_EXP
    case 0xC25F91: {
        Instruction step(cpu, 0x22, 0xC1D7E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3143 LDY @LOCAL10
    case 0xC25F95: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3144 TYA
    case 0xC25F97: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3145 CLC
    case 0xC25F98: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    case 0xC25F99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25F99.
    case 0xC25F9B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3147 TAY
    case 0xC25F9C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3148 STY @LOCAL10
    case 0xC25F9D: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3149 INC @VIRTUAL02
    case 0xC25F9F: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3151 LDA @VIRTUAL02
    case 0xC25FA1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    case 0xC25FA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25FA3.
    case 0xC25FA5: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3153 BCC @UNKNOWN231
    case 0xC25FA6: {
        Instruction step(cpu, 0x90, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3154 LDA #1
    case 0xC25FA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3154 LDA #1
    // Overlapping static entry reached from 0xC25FA8.
    case 0xC25FAA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3156 STA @LOCAL06
    case 0xC25FAB: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3162 LDA @LOCAL06
    case 0xC25FAD: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC25FAF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC25FB1: {
        Instruction step(cpu, 0x4C, 0x005538u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3168 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC25FB4: {
        Instruction step(cpu, 0x22, 0xC1DB36u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3171 LDA @LOCAL06
    case 0xC25FB8: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC25FBA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC25FBC: {
        Instruction step(cpu, 0x4C, 0x004F02u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3177 JSL RESET_HPPP_ROLLING
    case 0xC25FBF: {
        Instruction step(cpu, 0x22, 0xC20E2Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3179 JSL WINDOW_TICK
    case 0xC25FC3: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3180 JSL UNKNOWN_C2108C
    case 0xC25FC7: {
        Instruction step(cpu, 0x22, 0xC20F28u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3181 CMP #0
    case 0xC25FCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3181 CMP #0
    // Overlapping static entry reached from 0xC25FCB.
    case 0xC25FCD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3182 BEQ @UNKNOWN238
    case 0xC25FCE: {
        Instruction step(cpu, 0xF0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3183 LDA MIRROR_ENEMY
    case 0xC25FD0: {
        Instruction step(cpu, 0xAD, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC25FD3: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC25FD5: {
        Instruction step(cpu, 0x4C, 0x006071u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC25FD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25FD8.
    case 0xC25FDA: {
        Instruction step(cpu, 0xA1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3187 STA @LOCAL0B
    case 0xC25FDB: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3187 STA @LOCAL0B
    // Overlapping static entry reached from 0xC25FDA.
    case 0xC25FDC: {
        Instruction step(cpu, 0x27, 0x0000A2u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3188 LDX #0
    case 0xC25FDD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3188 LDX #0
    // Overlapping static entry reached from 0xC25FDC.
    case 0xC25FDE: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3188 LDX #0
    // Overlapping static entry reached from 0xC25FDD.
    case 0xC25FDF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3189 STX @LOCAL0C
    case 0xC25FE0: {
        Instruction step(cpu, 0x86, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3195 JMP @UNKNOWN242
    case 0xC25FE2: {
        Instruction step(cpu, 0x4C, 0x006067u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3197 TAX
    case 0xC25FE5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3198 LDA a:battler::consciousness,X
    case 0xC25FE6: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    case 0xC25FE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    // Overlapping static entry reached from 0xC25FE9.
    case 0xC25FEB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3200 BEQ @UNKNOWN241
    case 0xC25FEC: {
        Instruction step(cpu, 0xF0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3202 LDA @LOCAL0B
    case 0xC25FEE: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3206 TAX
    case 0xC25FF0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3207 LDA a:battler::ally_or_enemy,X
    case 0xC25FF1: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    case 0xC25FF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    // Overlapping static entry reached from 0xC25FF4.
    case 0xC25FF6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3209 BNE @UNKNOWN241
    case 0xC25FF7: {
        Instruction step(cpu, 0xD0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3211 LDA @LOCAL0B
    case 0xC25FF9: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3215 TAX
    case 0xC25FFB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3216 LDA a:battler::id,X
    case 0xC25FFC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    case 0xC25FFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25FFF.
    case 0xC26001: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3218 BNE @UNKNOWN241
    case 0xC26002: {
        Instruction step(cpu, 0xD0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3219 STZ MIRROR_ENEMY
    case 0xC26004: {
        Instruction step(cpu, 0x9C, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3221 LDA @LOCAL0B
    case 0xC26007: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3225 CLC
    case 0xC26009: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    case 0xC2600A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    // Overlapping static entry reached from 0xC2600A.
    case 0xC2600C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3227 TAX
    case 0xC2600D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3229 STX @LOCAL0C
    case 0xC2600E: {
        Instruction step(cpu, 0x86, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3233 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC26010: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    case 0xC26013: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    // Overlapping static entry reached from 0xC26013.
    case 0xC26015: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3235 STA @VIRTUAL04
    case 0xC26016: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3236 STA @LOCAL08
    case 0xC26018: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3238 LDA @LOCAL0B
    case 0xC2601A: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2601C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2601E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2601F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC26021: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC26022: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC26024: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3243 REP #PROC_FLAGS::ACCUM8
    case 0xC26026: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26028: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2602A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC20C17.
    case 0xC2602B: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2602C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2602E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26030: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x00ABE9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC26030.
    case 0xC26032: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26033: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26035: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26036: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26038: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26039: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2603B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3246 REP #PROC_FLAGS::ACCUM8
    case 0xC2603D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2603F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26041: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26043: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26045: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3248 JSL COPY_MIRROR_DATA
    case 0xC26047: {
        Instruction step(cpu, 0x22, 0xC2AED3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3249 LDA @VIRTUAL04
    case 0xC2604B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3250 SEP #PROC_FLAGS::ACCUM8
    case 0xC2604D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3252 LDX @LOCAL0C
    case 0xC2604F: {
        Instruction step(cpu, 0xA6, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3256 STA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC26051: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3257 JSL CHECK_DEAD_PLAYERS
    case 0xC26054: {
        Instruction step(cpu, 0x22, 0xC2BAC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3258 BRA @UNKNOWN243
    case 0xC26058: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3262 LDA @LOCAL0B
    case 0xC2605A: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3266 CLC
    case 0xC2605C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    case 0xC2605D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2605D.
    case 0xC2605F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3269 STA @LOCAL0B
    case 0xC26060: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3270 LDX @LOCAL0C
    case 0xC26062: {
        Instruction step(cpu, 0xA6, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3271 INX
    case 0xC26064: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3272 STX @LOCAL0C
    case 0xC26065: {
        Instruction step(cpu, 0x86, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    case 0xC26067: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26067.
    case 0xC26069: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2606A: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2606C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2606E: {
        Instruction step(cpu, 0x4C, 0x005FE5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3283 JSL RESET_POST_BATTLE_STATS
    case 0xC26071: {
        Instruction step(cpu, 0x22, 0xC2BC07u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3284 SEP #PROC_FLAGS::ACCUM8
    case 0xC26075: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3285 STZ GAME_STATE+game_state::auto_fight_enable
    case 0xC26077: {
        Instruction step(cpu, 0x9C, 0x009B62u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3286 REP #PROC_FLAGS::ACCUM8
    case 0xC2607A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3287 STZ BATTLE_MODE_FLAG
    case 0xC2607C: {
        Instruction step(cpu, 0x9C, 0x00993Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3288 LDA BATTLE_MODE
    case 0xC2607F: {
        Instruction step(cpu, 0xAD, 0x005148u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26082: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26084: {
        Instruction step(cpu, 0x4C, 0x0047B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3290 LDX #1
    case 0xC26087: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3290 LDX #1
    // Overlapping static entry reached from 0xC26087.
    case 0xC26089: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3291 TXA
    case 0xC2608A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3292 JSL FADE_OUT
    case 0xC2608B: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3293 BRA @UNKNOWN246
    case 0xC2608F: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3295 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC26091: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3296 JSL UNKNOWN_C2DB3F
    case 0xC26095: {
        Instruction step(cpu, 0x22, 0xC2DAB4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3298 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC26099: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    case 0xC2609C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    // Overlapping static entry reached from 0xC2609C.
    case 0xC2609E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3300 BNE @UNKNOWN245
    case 0xC2609F: {
        Instruction step(cpu, 0xD0, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3301 JSL UNKNOWN_C20293
    case 0xC260A1: {
        Instruction step(cpu, 0x22, 0xC2022Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3302 JSL UNKNOWN_C08726
    case 0xC260A5: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3303 JSL UNKNOWN_C1DD5F
    case 0xC260A9: {
        Instruction step(cpu, 0x22, 0xC1DB3Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3304 JSL UNKNOWN_C2E0E7
    case 0xC260AD: {
        Instruction step(cpu, 0x22, 0xC2E03Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3305 LDA @LOCAL03
    case 0xC260B1: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC260B3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC260B4: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
