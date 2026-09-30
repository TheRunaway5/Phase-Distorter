// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/main_battle_routine.asm
bool resume_battle_main_battle_routine(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/main_battle_routine.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24821: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24823: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24824: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24825: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x00FFC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC24825.
    case 0xC24827: {
        Instruction step(cpu, 0xFF, 0xC2AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24828: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    case 0xC24829: {
        Instruction step(cpu, 0xAD, 0x004DC2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC24827.
    case 0xC2482B: {
        Instruction step(cpu, 0x4D, 0x005ED0u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:27 BNE @UNKNOWN0
    case 0xC2482C: {
        Instruction step(cpu, 0xD0, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:28 LDA #1
    case 0xC2482E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:28 LDA #1
    // Overlapping static entry reached from 0xC2482E.
    case 0xC24830: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:29 STA @LOCAL12
    case 0xC24831: {
        Instruction step(cpu, 0x85, 0x000035u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:30 STA @LOCAL11
    case 0xC24833: {
        Instruction step(cpu, 0x85, 0x000033u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC24835: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:32 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24837: {
        Instruction step(cpu, 0x8D, 0x0098A4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:39 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC2483A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:39 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC2483A.
    case 0xC2483C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:40 STY @LOCAL10
    case 0xC2483D: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    case 0xC2483F: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:43 LDX #6
    case 0xC24841: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:43 LDX #6
    // Overlapping static entry reached from 0xC24841.
    case 0xC24843: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC24844: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:48 TYA
    case 0xC24846: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:50 JSL MEMSET16
    case 0xC24847: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:55 LDA #.LOWORD(GAME_STATE) + game_state::unknown96
    case 0xC2484B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Bu : 0x00988Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:55 LDA #.LOWORD(GAME_STATE) + game_state::unknown96
    // Overlapping static entry reached from 0xC2484B.
    case 0xC2484D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:56 STA @VIRTUAL02
    case 0xC2484E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC24850: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    case 0xC24852: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:60 LDX #6
    case 0xC24854: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:60 LDX #6
    // Overlapping static entry reached from 0xC24854.
    case 0xC24856: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC24857: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:65 LDA @VIRTUAL02
    case 0xC24859: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:67 JSL MEMSET16
    case 0xC2485B: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC2485F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:69 LDA #1
    case 0xC24861: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A401u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:76 LDY @LOCAL10
    case 0xC24863: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:76 LDY @LOCAL10
    // Overlapping static entry reached from 0xC24861.
    case 0xC24864: {
        Instruction step(cpu, 0x31, 0x000099u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:77 STA __BSS_START__,Y
    case 0xC24865: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:77 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC24864.
    case 0xC24866: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:78 LDX @VIRTUAL02
    case 0xC24868: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:79 STA __BSS_START__,X
    case 0xC2486A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC2486D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:82 LDA #1
    case 0xC2486F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:82 LDA #1
    // Overlapping static entry reached from 0xC2486F.
    case 0xC24871: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:83 STA ENEMIES_IN_BATTLE
    case 0xC24872: {
        Instruction step(cpu, 0x8D, 0x009F8Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:84 STA CURRENT_BATTLE_GROUP
    case 0xC24875: {
        Instruction step(cpu, 0x8D, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24878: {
        Instruction step(cpu, 0xAF, 0xD0C615u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC2487C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC2487E: {
        Instruction step(cpu, 0xAF, 0xD0C617u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24882: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:86 LDY #1
    case 0xC24884: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:86 LDY #1
    // Overlapping static entry reached from 0xC24884.
    case 0xC24886: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:87 LDA [@VIRTUAL06],Y
    case 0xC24887: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:88 STA ENEMIES_IN_BATTLE_IDS
    case 0xC24889: {
        Instruction step(cpu, 0x8D, 0x009F8Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:90 STZ GIYGAS_PHASE
    case 0xC2488C: {
        Instruction step(cpu, 0x9C, 0x00A97Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:91 LDA CURRENT_BATTLE_GROUP
    case 0xC2488F: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    case 0xC24892: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DBu : 0x0001DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    // Overlapping static entry reached from 0xC24892.
    case 0xC24894: {
        Instruction step(cpu, 0x01, 0x0000D0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    case 0xC24895: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC24894.
    case 0xC24896: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    case 0xC24897: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC24896.
    case 0xC24898: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC24897.
    case 0xC24899: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:95 STA GIYGAS_PHASE
    case 0xC2489A: {
        Instruction step(cpu, 0x8D, 0x00A97Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2489D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00D89Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2489D.
    case 0xC2489F: {
        Instruction step(cpu, 0xD8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC248A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC248A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x0000CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC248A2.
    case 0xC248A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC248A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:98 LDA CURRENT_BATTLE_GROUP
    case 0xC248A7: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:99 ASL
    case 0xC248AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:100 ASL
    case 0xC248AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:101 STA @LOCAL0F
    case 0xC248AC: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248AE: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248B0: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248B2: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248B4: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:103 CLC
    case 0xC248B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:104 ADC @VIRTUAL0A
    case 0xC248B7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:105 STA @VIRTUAL0A
    case 0xC248B9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:106 LDA [@VIRTUAL0A]
    case 0xC248BB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:107 STA @LOCAL0E
    case 0xC248BD: {
        Instruction step(cpu, 0x85, 0x00002Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:108 LDA @LOCAL0F
    case 0xC248BF: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:109 INC
    case 0xC248C1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:110 INC
    case 0xC248C2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:111 CLC
    case 0xC248C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:112 ADC @VIRTUAL06
    case 0xC248C4: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:113 STA @VIRTUAL06
    case 0xC248C6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:114 LDA [@VIRTUAL06]
    case 0xC248C8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:118 STA @LOCAL0D
    case 0xC248CA: {
        Instruction step(cpu, 0x85, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:120 LDA CURRENT_BATTLE_GROUP
    case 0xC248CC: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:121 ASL
    case 0xC248CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:122 ASL
    case 0xC248D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:123 ASL
    case 0xC248D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:124 CLC
    case 0xC248D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC248D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC248D3.
    case 0xC248D5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:126 TAX
    case 0xC248D6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:127 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC248D7: {
        Instruction step(cpu, 0xBF, 0xD0C60Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    case 0xC248DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC248DB.
    case 0xC248DD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:132 STA @LOCAL0C
    case 0xC248DE: {
        Instruction step(cpu, 0x85, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC248E0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:138 STZ MIRROR_ENEMY
    case 0xC248E2: {
        Instruction step(cpu, 0x9C, 0x00AA12u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:146 STZ @LOCAL0B
    case 0xC248E5: {
        Instruction step(cpu, 0x64, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC248E7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:148 LDA #0
    case 0xC248E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:149 STA BATTLE_ITEM_USED
    case 0xC248EB: {
        Instruction step(cpu, 0x8D, 0x00A97Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:149 STA BATTLE_ITEM_USED
    // Overlapping static entry reached from 0xC248E9.
    case 0xC248EC: {
        Instruction step(cpu, 0x7C, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC248EE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:151 STZ @LOCAL0A
    case 0xC248F0: {
        Instruction step(cpu, 0x64, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:153 STZ BATTLE_MONEY_SCRATCH
    case 0xC248F2: {
        Instruction step(cpu, 0x9C, 0x00A978u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC248F5.
    case 0xC248F7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248F8: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC248FB.
    case 0xC248FD: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248FE: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:155 JSL UNKNOWN_C08726
    case 0xC24901: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:156 JSL UNKNOWN_C2E0E7
    case 0xC24905: {
        Instruction step(cpu, 0x22, 0xC2E0E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:157 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC24909: {
        Instruction step(cpu, 0x22, 0xC2C8C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:158 JSL LOAD_WINDOW_GFX
    case 0xC2490D: {
        Instruction step(cpu, 0x22, 0xC47C3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:164 LDA #1
    case 0xC24911: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:164 LDA #1
    // Overlapping static entry reached from 0xC24911.
    case 0xC24913: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:165 JSL UNKNOWN_C44963
    case 0xC24914: {
        Instruction step(cpu, 0x22, 0xC44963u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:166 LDY @LOCAL0C
    case 0xC24918: {
        Instruction step(cpu, 0xA4, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:167 LDX @LOCAL0D
    case 0xC2491A: {
        Instruction step(cpu, 0xA6, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:169 LDA @LOCAL0E
    case 0xC2491C: {
        Instruction step(cpu, 0xA5, 0x00002Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:170 JSL LOAD_BATTLE_BG
    case 0xC2491E: {
        Instruction step(cpu, 0x22, 0xC2D121u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:171 JSL UNKNOWN_C2EEE7
    case 0xC24922: {
        Instruction step(cpu, 0x22, 0xC2EEE7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:172 LDY #0
    case 0xC24926: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:172 LDY #0
    // Overlapping static entry reached from 0xC24926.
    case 0xC24928: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:176 STY @LOCAL10
    case 0xC24929: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:178 BRA @UNKNOWN4
    case 0xC2492B: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:180 SEP #PROC_FLAGS::ACCUM8
    case 0xC2492D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    case 0xC2492F: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    case 0xC24931: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24931.
    case 0xC24933: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:183 REP #PROC_FLAGS::ACCUM8
    case 0xC24934: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:184 TYA
    case 0xC24936: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:185 TXY
    case 0xC24937: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:186 JSL MULT168
    case 0xC24938: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:187 CLC
    case 0xC2493C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2493D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2493D.
    case 0xC2493F: {
        Instruction step(cpu, 0x9F, 0x8EFC22u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    case 0xC24940: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    // Overlapping static entry reached from 0xC2493F.
    case 0xC24943: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x0031A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:195 LDY @LOCAL10
    case 0xC24944: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:195 LDY @LOCAL10
    // Overlapping static entry reached from 0xC24943.
    case 0xC24945: {
        Instruction step(cpu, 0x31, 0x0000C8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:196 INY
    case 0xC24946: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:197 STY @LOCAL10
    case 0xC24947: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    case 0xC24949: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24949.
    case 0xC2494B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:201 BCC @UNKNOWN3
    case 0xC2494C: {
        Instruction step(cpu, 0x90, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:202 STZ HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2494E: {
        Instruction step(cpu, 0x9C, 0x00AA0Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:203 LDY #0
    case 0xC24951: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:203 LDY #0
    // Overlapping static entry reached from 0xC24951.
    case 0xC24953: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:204 STY @LOCAL09
    case 0xC24954: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:205 STZ @LOCAL10
    case 0xC24956: {
        Instruction step(cpu, 0x64, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:206 JMP @UNKNOWN9
    case 0xC24958: {
        Instruction step(cpu, 0x4C, 0x0049F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:215 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC2495B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:215 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC2495B.
    case 0xC2495D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:216 LDA (@LOCAL10),Y
    case 0xC2495E: {
        Instruction step(cpu, 0xB1, 0x000031u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    case 0xC24960: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC24960.
    case 0xC24962: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:219 STA @VIRTUAL04
    case 0xC24963: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:220 STA @LOCAL08
    case 0xC24965: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:221 LDA @VIRTUAL04
    case 0xC24967: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:222 BEQ @UNKNOWN7
    case 0xC24969: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:223 LDA @VIRTUAL04
    case 0xC2496B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:224 CMP #4
    case 0xC2496D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:224 CMP #4
    // Overlapping static entry reached from 0xC2496D.
    case 0xC2496F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC24970: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC24972: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:226 LDA @LOCAL10
    case 0xC24974: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    case 0xC24976: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24976.
    case 0xC24978: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:228 JSL MULT168
    case 0xC24979: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:229 CLC
    case 0xC2497D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2497E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2497E.
    case 0xC24980: {
        Instruction step(cpu, 0x9F, 0x04A5AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:231 TAX
    case 0xC24981: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:232 LDA @VIRTUAL04
    case 0xC24982: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:233 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC24984: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:234 BRA @UNKNOWN8
    case 0xC24988: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:236 LDA @VIRTUAL04
    case 0xC2498A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:237 CMP #5
    case 0xC2498C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:237 CMP #5
    // Overlapping static entry reached from 0xC2498C.
    case 0xC2498E: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:238 BCC @UNKNOWN8
    case 0xC2498F: {
        Instruction step(cpu, 0x90, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:239 LDA @LOCAL10
    case 0xC24991: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    case 0xC24993: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24993.
    case 0xC24995: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:241 JSL MULT168
    case 0xC24996: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:242 STA @VIRTUAL02
    case 0xC2499A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:243 CLC
    case 0xC2499C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2499D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2499D.
    case 0xC2499F: {
        Instruction step(cpu, 0x9F, 0x1F86AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:245 TAX
    case 0xC249A0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:246 STX @LOCAL07
    case 0xC249A1: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:247 LDA @VIRTUAL04
    case 0xC249A3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:248 ASL
    case 0xC249A5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:249 TAX
    case 0xC249A6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:250 INX
    case 0xC249A7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:251 LDA f:NPC_AI_TABLE,X
    case 0xC249A8: {
        Instruction step(cpu, 0xBF, 0xD58F23u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    case 0xC249AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC249AC.
    case 0xC249AE: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:253 LDX @LOCAL07
    case 0xC249AF: {
        Instruction step(cpu, 0xA6, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:254 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC249B1: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:255 LDX @VIRTUAL02
    case 0xC249B5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:256 SEP #PROC_FLAGS::ACCUM8
    case 0xC249B7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:257 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC249B9: {
        Instruction step(cpu, 0x9E, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:258 REP #PROC_FLAGS::ACCUM8
    case 0xC249BC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:259 LDA @VIRTUAL04
    case 0xC249BE: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC249C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:261 LDX @VIRTUAL02
    case 0xC249C2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:262 STA BATTLERS_TABLE+battler::npc_id,X
    case 0xC249C4: {
        Instruction step(cpu, 0x9D, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:263 LDY @LOCAL09
    case 0xC249C7: {
        Instruction step(cpu, 0xA4, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC249C9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:265 TYA
    case 0xC249CB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC249CC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:267 LDX @VIRTUAL02
    case 0xC249CE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:268 STA BATTLERS_TABLE+16,X
    case 0xC249D0: {
        Instruction step(cpu, 0x9D, 0x009FBCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC249D3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:270 TYA
    case 0xC249D5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:271 ASL
    case 0xC249D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:278 TAX
    case 0xC249D7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:279 LDA GAME_STATE+game_state::party_npc_1_hp,X
    case 0xC249D8: {
        Instruction step(cpu, 0xBD, 0x00983Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:281 LDX @VIRTUAL02
    case 0xC249DB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:282 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC249DD: {
        Instruction step(cpu, 0x9D, 0x009FBFu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:283 LDX @VIRTUAL02
    case 0xC249E0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:284 STA BATTLERS_TABLE+battler::hp,X
    case 0xC249E2: {
        Instruction step(cpu, 0x9D, 0x009FBDu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:285 INY
    case 0xC249E5: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:286 STY @LOCAL09
    case 0xC249E6: {
        Instruction step(cpu, 0x84, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:287 LDX @VIRTUAL02
    case 0xC249E8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:288 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC249EA: {
        Instruction step(cpu, 0x9E, 0x009FC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:289 LDX @VIRTUAL02
    case 0xC249ED: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:290 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC249EF: {
        Instruction step(cpu, 0x9E, 0x009FC3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:292 INC @LOCAL10
    case 0xC249F2: {
        Instruction step(cpu, 0xE6, 0x000031u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:294 LDA @LOCAL10
    case 0xC249F4: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:295 CMP #6
    case 0xC249F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:295 CMP #6
    // Overlapping static entry reached from 0xC249F6.
    case 0xC249F8: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC249F9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC249FB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC249FD: {
        Instruction step(cpu, 0x4C, 0x00495Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:297 JSL UNKNOWN_C2F0D1
    case 0xC24A00: {
        Instruction step(cpu, 0x22, 0xC2F0D1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:298 LDY #0
    case 0xC24A04: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:298 LDY #0
    // Overlapping static entry reached from 0xC24A04.
    case 0xC24A06: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:299 STY @LOCAL10
    case 0xC24A07: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:300 BRA @UNKNOWN12
    case 0xC24A09: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:302 TYA
    case 0xC24A0B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    case 0xC24A0C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24A0C.
    case 0xC24A0E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:304 JSL MULT168
    case 0xC24A0F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:305 CLC
    case 0xC24A13: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC24A14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC24A14.
    case 0xC24A16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000AAu : 0x0086AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:307 TAX
    case 0xC24A17: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:308 STX @LOCAL07
    case 0xC24A18: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:308 STX @LOCAL07
    // Overlapping static entry reached from 0xC24A16.
    case 0xC24A19: {
        Instruction step(cpu, 0x1F, 0x9831A4u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:309 LDY @LOCAL10
    case 0xC24A1A: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:310 TYA
    case 0xC24A1C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:311 ASL
    case 0xC24A1D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:312 TAX
    case 0xC24A1E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:313 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC24A1F: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:314 LDX @LOCAL07
    case 0xC24A22: {
        Instruction step(cpu, 0xA6, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:315 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24A24: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:316 LDY @LOCAL10
    case 0xC24A28: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:317 INY
    case 0xC24A2A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:318 STY @LOCAL10
    case 0xC24A2B: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:320 CPY ENEMIES_IN_BATTLE
    case 0xC24A2D: {
        Instruction step(cpu, 0xCC, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:321 BCC @UNKNOWN11
    case 0xC24A30: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:322 JSL UNKNOWN_C2F121
    case 0xC24A32: {
        Instruction step(cpu, 0x22, 0xC2F121u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:323 JSL UNKNOWN_C2F8F9
    case 0xC24A36: {
        Instruction step(cpu, 0x22, 0xC2F8F9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:324 JSL UNKNOWN_C47F87
    case 0xC24A3A: {
        Instruction step(cpu, 0x22, 0xC47F87u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:325 LDA #24
    case 0xC24A3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:325 LDA #24
    // Overlapping static entry reached from 0xC24A3E.
    case 0xC24A40: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:326 JSL UNKNOWN_C0856B
    case 0xC24A41: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:327 LDA #1
    case 0xC24A45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:327 LDA #1
    // Overlapping static entry reached from 0xC24A45.
    case 0xC24A47: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:328 STA BATTLE_MODE_FLAG
    case 0xC24A48: {
        Instruction step(cpu, 0x8D, 0x009643u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:329 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24A4B: {
        Instruction step(cpu, 0xAD, 0x009F8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    case 0xC24A4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24A4E.
    case 0xC24A50: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:331 JSL MULT168
    case 0xC24A51: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:332 CLC
    case 0xC24A55: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    case 0xC24A56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24A56.
    case 0xC24A58: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:334 TAX
    case 0xC24A59: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:335 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24A5A: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    case 0xC24A5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC24A5E.
    case 0xC24A60: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:337 JSL CHANGE_MUSIC
    case 0xC24A61: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:338 JSL UNKNOWN_C08744
    case 0xC24A65: {
        Instruction step(cpu, 0x22, 0xC08744u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:339 LDX #1
    case 0xC24A69: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:339 LDX #1
    // Overlapping static entry reached from 0xC24A69.
    case 0xC24A6B: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:340 TXA
    case 0xC24A6C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:341 JSL FADE_IN
    case 0xC24A6D: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:342 LDA BATTLE_MODE
    case 0xC24A71: {
        Instruction step(cpu, 0xAD, 0x004DC2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24A74: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24A76: {
        Instruction step(cpu, 0x4C, 0x004CEFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:344 LDA @LOCAL12
    case 0xC24A79: {
        Instruction step(cpu, 0xA5, 0x000035u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:345 JSL UNKNOWN_C1DCCB
    case 0xC24A7B: {
        Instruction step(cpu, 0x22, 0xC1DCCBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:346 LDA #0
    case 0xC24A7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:346 LDA #0
    // Overlapping static entry reached from 0xC24A7F.
    case 0xC24A81: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:347 STA @VIRTUAL02
    case 0xC24A82: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:348 TAY
    case 0xC24A84: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:349 STY @LOCAL10
    case 0xC24A85: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:350 JMP @UNKNOWN19
    case 0xC24A87: {
        Instruction step(cpu, 0x4C, 0x004B4Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC24A8A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:360 LDA GAME_STATE + game_state::party_members,Y
    case 0xC24A8C: {
        Instruction step(cpu, 0xB9, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    case 0xC24A8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    // Overlapping static entry reached from 0xC24A8F.
    case 0xC24A91: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:363 STA @VIRTUAL04
    case 0xC24A92: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:364 STA @LOCAL08
    case 0xC24A94: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:365 LDA @VIRTUAL04
    case 0xC24A96: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:366 BEQ @UNKNOWN16
    case 0xC24A98: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:367 LDA @VIRTUAL04
    case 0xC24A9A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:368 CMP #4
    case 0xC24A9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:368 CMP #4
    // Overlapping static entry reached from 0xC24A9C.
    case 0xC24A9E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24A9F: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24AA1: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:370 TYA
    case 0xC24AA3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    case 0xC24AA4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24AA4.
    case 0xC24AA6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:372 JSL MULT168
    case 0xC24AA7: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:373 CLC
    case 0xC24AAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24AAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24AAC.
    case 0xC24AAE: {
        Instruction step(cpu, 0x9F, 0x04A5AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:375 TAX
    case 0xC24AAF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:376 LDA @VIRTUAL04
    case 0xC24AB0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:377 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC24AB2: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:378 JMP @UNKNOWN18
    case 0xC24AB6: {
        Instruction step(cpu, 0x4C, 0x004B45u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:380 LDA @VIRTUAL04
    case 0xC24AB9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:381 CMP #5
    case 0xC24ABB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:381 CMP #5
    // Overlapping static entry reached from 0xC24ABB.
    case 0xC24ABD: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC24ABE: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC24AC0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC24AC2: {
        Instruction step(cpu, 0x4C, 0x004B45u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24AC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x008F23u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24AC5.
    case 0xC24AC7: {
        Instruction step(cpu, 0x8F, 0xA90685u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24AC8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24ACA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24AC7.
    case 0xC24ACB: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24ACA.
    case 0xC24ACC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24ACD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:384 LDA @VIRTUAL04
    case 0xC24ACF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:385 ASL
    case 0xC24AD1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:389 STA @LOCAL06
    case 0xC24AD2: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24AD4: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24AD6: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24AD8: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24ADA: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:392 CLC
    case 0xC24ADC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:393 ADC @VIRTUAL0A
    case 0xC24ADD: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:394 STA @VIRTUAL0A
    case 0xC24ADF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:395 LDA [@VIRTUAL0A]
    case 0xC24AE1: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    case 0xC24AE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC24AE3.
    case 0xC24AE5: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:397 AND #$0001
    case 0xC24AE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:397 AND #$0001
    // Overlapping static entry reached from 0xC24AE6.
    case 0xC24AE8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:398 BEQ @UNKNOWN18
    case 0xC24AE9: {
        Instruction step(cpu, 0xF0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:399 TYA
    case 0xC24AEB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    case 0xC24AEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24AEC.
    case 0xC24AEE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:401 JSL MULT168
    case 0xC24AEF: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:405 STA @LOCAL09
    case 0xC24AF3: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:407 CLC
    case 0xC24AF5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24AF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24AF6.
    case 0xC24AF8: {
        Instruction step(cpu, 0x9F, 0x1DA5AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:409 TAX
    case 0xC24AF9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:413 LDA @LOCAL06
    case 0xC24AFA: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:415 INC
    case 0xC24AFC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:416 CLC
    case 0xC24AFD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:417 ADC @VIRTUAL06
    case 0xC24AFE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:418 STA @VIRTUAL06
    case 0xC24B00: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:419 LDA [@VIRTUAL06]
    case 0xC24B02: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    case 0xC24B04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    // Overlapping static entry reached from 0xC24B04.
    case 0xC24B06: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:421 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24B07: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:422 LDA @VIRTUAL02
    case 0xC24B0B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:423 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B0D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC24B0F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BCu : 0x009FBCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC24B0F.
    case 0xC24B11: {
        Instruction step(cpu, 0x9F, 0xC22391u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:428 STA (@LOCAL09),Y
    case 0xC24B12: {
        Instruction step(cpu, 0x91, 0x000023u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:430 REP #PROC_FLAGS::ACCUM8
    case 0xC24B14: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:430 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24B11.
    case 0xC24B15: {
        Instruction step(cpu, 0x20, 0x0002A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:431 LDA @VIRTUAL02
    case 0xC24B16: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:432 ASL
    case 0xC24B18: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:449 TAX
    case 0xC24B19: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:450 LDA GAME_STATE+game_state::party_npc_1_hp,X
    case 0xC24B1A: {
        Instruction step(cpu, 0xBD, 0x00983Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:451 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    case 0xC24B1D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BFu : 0x009FBFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:451 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    // Overlapping static entry reached from 0xC24B1D.
    case 0xC24B1F: {
        Instruction step(cpu, 0x9F, 0xA02391u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:452 STA (@LOCAL09),Y
    case 0xC24B20: {
        Instruction step(cpu, 0x91, 0x000023u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:453 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    case 0xC24B22: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BDu : 0x009FBDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:453 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    // Overlapping static entry reached from 0xC24B1F.
    case 0xC24B23: {
        Instruction step(cpu, 0xBD, 0x00919Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:453 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    // Overlapping static entry reached from 0xC24B22.
    case 0xC24B24: {
        Instruction step(cpu, 0x9F, 0xE62391u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:454 STA (@LOCAL09),Y
    case 0xC24B25: {
        Instruction step(cpu, 0x91, 0x000023u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:454 STA (@LOCAL09),Y
    // Overlapping static entry reached from 0xC24B23.
    case 0xC24B26: {
        Instruction step(cpu, 0x23, 0x0000E6u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:455 INC @VIRTUAL02
    case 0xC24B27: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:455 INC @VIRTUAL02
    // Overlapping static entry reached from 0xC24B24.
    case 0xC24B28: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:456 LDX @LOCAL09
    case 0xC24B29: {
        Instruction step(cpu, 0xA6, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:457 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC24B2B: {
        Instruction step(cpu, 0x9E, 0x009FC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:458 LDX @LOCAL09
    case 0xC24B2E: {
        Instruction step(cpu, 0xA6, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:459 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC24B30: {
        Instruction step(cpu, 0x9E, 0x009FC3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:460 LDX @LOCAL09
    case 0xC24B33: {
        Instruction step(cpu, 0xA6, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:462 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B35: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:463 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC24B37: {
        Instruction step(cpu, 0x9E, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:464 REP #PROC_FLAGS::ACCUM8
    case 0xC24B3A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:465 LDA @VIRTUAL04
    case 0xC24B3C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:466 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B3E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    case 0xC24B40: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000BBu : 0x009FBBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    // Overlapping static entry reached from 0xC24B40.
    case 0xC24B42: {
        Instruction step(cpu, 0x9F, 0xA42391u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:471 STA (@LOCAL09),Y
    case 0xC24B43: {
        Instruction step(cpu, 0x91, 0x000023u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:474 LDY @LOCAL10
    case 0xC24B45: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:474 LDY @LOCAL10
    // Overlapping static entry reached from 0xC24B42.
    case 0xC24B46: {
        Instruction step(cpu, 0x31, 0x0000C8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:475 INY
    case 0xC24B47: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:476 STY @LOCAL10
    case 0xC24B48: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:478 CPY #6
    case 0xC24B4A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:478 CPY #6
    // Overlapping static entry reached from 0xC24B4A.
    case 0xC24B4C: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24B4D: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24B4F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24B51: {
        Instruction step(cpu, 0x4C, 0x004A8Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:480 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24B54: {
        Instruction step(cpu, 0x22, 0xC1DD3Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    case 0xC24B58: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC24B69.
    case 0xC24B5B: {
        Instruction step(cpu, 0xC1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC24B5C: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC24B5B.
    case 0xC24B5D: {
        Instruction step(cpu, 0x56, 0x000087u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC24B5D.
    case 0xC24B5F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x003F22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    case 0xC24B60: {
        Instruction step(cpu, 0x22, 0xC2DB3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    // Overlapping static entry reached from 0xC24B5F.
    case 0xC24B61: {
        Instruction step(cpu, 0x3F, 0xADC2DBu, 4u, AddressMode::LongIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    // Overlapping static entry reached from 0xC24B5F.
    case 0xC24B62: {
        Instruction step(cpu, 0xDB, 0x000000u, 1u, AddressMode::Implied);
        step.stop();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:486 LDA PAD_PRESS
    case 0xC24B64: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:486 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC24B61.
    case 0xC24B65: {
        Instruction step(cpu, 0x6D, 0x002900u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    case 0xC24B67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC24B65.
    case 0xC24B68: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC24B67.
    case 0xC24B69: {
        Instruction step(cpu, 0x10, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24B6A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24B69.
    case 0xC24B6B: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24B6C: {
        Instruction step(cpu, 0x4C, 0x004CD5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24B6B.
    case 0xC24B6D: {
        Instruction step(cpu, 0xD5, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:489 LDA PAD_PRESS
    case 0xC24B6F: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    case 0xC24B72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC24B72.
    case 0xC24B74: {
        Instruction step(cpu, 0x20, 0x004EF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:491 BEQ @UNKNOWN23
    case 0xC24B75: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:492 LDA CURRENT_BATTLE_GROUP
    case 0xC24B77: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:493 JSL ENEMY_SELECT_MODE
    case 0xC24B7A: {
        Instruction step(cpu, 0x22, 0xC1E1A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:494 STA @LOCAL10
    case 0xC24B7E: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:495 STA CURRENT_BATTLE_GROUP
    case 0xC24B80: {
        Instruction step(cpu, 0x8D, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00D89Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24B83.
    case 0xC24B85: {
        Instruction step(cpu, 0xD8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B86: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x0000CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24B88.
    case 0xC24B8A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B8B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:497 LDA @LOCAL10
    case 0xC24B8D: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:498 ASL
    case 0xC24B8F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:499 ASL
    case 0xC24B90: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:500 TAX
    case 0xC24B91: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B92: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B94: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B96: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B98: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:502 CLC
    case 0xC24B9A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:503 ADC @VIRTUAL0A
    case 0xC24B9B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:504 STA @VIRTUAL0A
    case 0xC24B9D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:505 LDA [@VIRTUAL0A]
    case 0xC24B9F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:506 STA @LOCAL0E
    case 0xC24BA1: {
        Instruction step(cpu, 0x85, 0x00002Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:507 TXA
    case 0xC24BA3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:508 INC
    case 0xC24BA4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:509 INC
    case 0xC24BA5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:510 CLC
    case 0xC24BA6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:511 ADC @VIRTUAL06
    case 0xC24BA7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:512 STA @VIRTUAL06
    case 0xC24BA9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:513 LDA [@VIRTUAL06]
    case 0xC24BAB: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:517 STA @LOCAL0D
    case 0xC24BAD: {
        Instruction step(cpu, 0x85, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:519 LDA @LOCAL10
    case 0xC24BAF: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:520 ASL
    case 0xC24BB1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:521 ASL
    case 0xC24BB2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:522 ASL
    case 0xC24BB3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:523 CLC
    case 0xC24BB4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC24BB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC24BB5.
    case 0xC24BB7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:525 TAX
    case 0xC24BB8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:526 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC24BB9: {
        Instruction step(cpu, 0xBF, 0xD0C60Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    case 0xC24BBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC24BBD.
    case 0xC24BBF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:531 STA @LOCAL0C
    case 0xC24BC0: {
        Instruction step(cpu, 0x85, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:533 JMP @UNKNOWN32
    case 0xC24BC2: {
        Instruction step(cpu, 0x4C, 0x004C78u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:535 LDA PAD_HELD
    case 0xC24BC5: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    case 0xC24BC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC24BC8.
    case 0xC24BCA: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    case 0xC24BCB: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xC24BCA.
    case 0xC24BCC: {
        Instruction step(cpu, 0x0C, 0x0033A5u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:538 LDA @LOCAL11
    case 0xC24BCD: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:539 CMP #15
    case 0xC24BCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:539 CMP #15
    // Overlapping static entry reached from 0xC24BCF.
    case 0xC24BD1: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:540 BCS @UNKNOWN25
    case 0xC24BD2: {
        Instruction step(cpu, 0xB0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:541 INC @LOCAL11
    case 0xC24BD4: {
        Instruction step(cpu, 0xE6, 0x000033u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:542 JMP @UNKNOWN32
    case 0xC24BD6: {
        Instruction step(cpu, 0x4C, 0x004C78u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:544 LDA PAD_HELD
    case 0xC24BD9: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    case 0xC24BDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC24BDC.
    case 0xC24BDE: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:546 BEQ @UNKNOWN25
    case 0xC24BDF: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:547 LDA @LOCAL11
    case 0xC24BE1: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:548 CMP #1
    case 0xC24BE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:548 CMP #1
    // Overlapping static entry reached from 0xC24BE3.
    case 0xC24BE5: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24BE6: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24BE8: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:550 DEC @LOCAL11
    case 0xC24BEA: {
        Instruction step(cpu, 0xC6, 0x000033u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:551 JMP @UNKNOWN32
    case 0xC24BEC: {
        Instruction step(cpu, 0x4C, 0x004C78u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:553 LDA PAD_HELD
    case 0xC24BEF: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    case 0xC24BF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC24BF2.
    case 0xC24BF4: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    case 0xC24BF5: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    // Overlapping static entry reached from 0xC24BF4.
    case 0xC24BF6: {
        Instruction step(cpu, 0x0D, 0x0035A5u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:556 LDA @LOCAL12
    case 0xC24BF7: {
        Instruction step(cpu, 0xA5, 0x000035u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:557 CMP #1
    case 0xC24BF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:557 CMP #1
    // Overlapping static entry reached from 0xC24BF9.
    case 0xC24BFB: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24BFC: {
        Instruction step(cpu, 0x90, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24BFE: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:559 DEC @LOCAL12
    case 0xC24C00: {
        Instruction step(cpu, 0xC6, 0x000035u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:560 BRA @UNKNOWN32
    case 0xC24C02: {
        Instruction step(cpu, 0x80, 0x000074u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:562 LDA PAD_HELD
    case 0xC24C04: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    case 0xC24C07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    // Overlapping static entry reached from 0xC24C07.
    case 0xC24C09: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:564 BEQ @UNKNOWN27
    case 0xC24C0A: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:565 LDA @LOCAL12
    case 0xC24C0C: {
        Instruction step(cpu, 0xA5, 0x000035u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    case 0xC24C0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000063u : 0x000063u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    // Overlapping static entry reached from 0xC24C0E.
    case 0xC24C10: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:567 BCS @UNKNOWN27
    case 0xC24C11: {
        Instruction step(cpu, 0xB0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:568 INC @LOCAL12
    case 0xC24C13: {
        Instruction step(cpu, 0xE6, 0x000035u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:569 BRA @UNKNOWN32
    case 0xC24C15: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:571 LDA PAD_PRESS
    case 0xC24C17: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    case 0xC24C1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24C49.
    case 0xC24C1B: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24C1A.
    case 0xC24C1C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:573 BEQ @UNKNOWN28
    case 0xC24C1D: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:574 LDA HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC24C1F: {
        Instruction step(cpu, 0xAD, 0x00AA0Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:575 STA @LOCAL12
    case 0xC24C22: {
        Instruction step(cpu, 0x85, 0x000035u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:576 BRA @UNKNOWN32
    case 0xC24C24: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:578 LDA PAD_PRESS
    case 0xC24C26: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    case 0xC24C29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC24C29.
    case 0xC24C2B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:580 BEQ @UNKNOWN29
    case 0xC24C2C: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:581 LDA DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C2E: {
        Instruction step(cpu, 0xAD, 0x00AA70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:582 JSL SHOW_PSI_ANIMATION
    case 0xC24C31: {
        Instruction step(cpu, 0x22, 0xC2E116u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:583 LDX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C35: {
        Instruction step(cpu, 0xAE, 0x00AA70u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:584 INX
    case 0xC24C38: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:585 STX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C39: {
        Instruction step(cpu, 0x8E, 0x00AA70u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:586 CPX #34
    case 0xC24C3C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:586 CPX #34
    // Overlapping static entry reached from 0xC24C3C.
    case 0xC24C3E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:587 BNE @UNKNOWN29
    case 0xC24C3F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:588 STZ DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C41: {
        Instruction step(cpu, 0x9C, 0x00AA70u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:590 LDA PAD_PRESS
    case 0xC24C44: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    case 0xC24C47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC24C47.
    case 0xC24C49: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24C4A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24C4C: {
        Instruction step(cpu, 0x4C, 0x004B5Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:593 LDX DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24C4F: {
        Instruction step(cpu, 0xAE, 0x00AA74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:594 LDA DEBUGGING_CURRENT_SWIRL
    case 0xC24C52: {
        Instruction step(cpu, 0xAD, 0x00AA72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:595 JSL UNKNOWN_C4A67E
    case 0xC24C55: {
        Instruction step(cpu, 0x22, 0xC4A67Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:596 LDX DEBUGGING_CURRENT_SWIRL
    case 0xC24C59: {
        Instruction step(cpu, 0xAE, 0x00AA72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:597 INX
    case 0xC24C5C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:598 STX DEBUGGING_CURRENT_SWIRL
    case 0xC24C5D: {
        Instruction step(cpu, 0x8E, 0x00AA72u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:599 CPX #8
    case 0xC24C60: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:599 CPX #8
    // Overlapping static entry reached from 0xC24C60.
    case 0xC24C62: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24C63: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24C65: {
        Instruction step(cpu, 0x4C, 0x004B5Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:601 STZ DEBUGGING_CURRENT_SWIRL
    case 0xC24C68: {
        Instruction step(cpu, 0x9C, 0x00AA72u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:602 LDA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24C6B: {
        Instruction step(cpu, 0xAD, 0x00AA74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:603 INC
    case 0xC24C6E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:604 AND #$0003
    case 0xC24C6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:604 AND #$0003
    // Overlapping static entry reached from 0xC24C6F.
    case 0xC24C71: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:605 STA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24C72: {
        Instruction step(cpu, 0x8D, 0x00AA74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:606 JMP @UNKNOWN21
    case 0xC24C75: {
        Instruction step(cpu, 0x4C, 0x004B5Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:612 LDX #0
    case 0xC24C78: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:612 LDX #0
    // Overlapping static entry reached from 0xC24C78.
    case 0xC24C7A: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:614 LDA @LOCAL11
    case 0xC24C7B: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:615 AND #$0001
    case 0xC24C7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:615 AND #$0001
    // Overlapping static entry reached from 0xC24C7D.
    case 0xC24C7F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:616 BEQ @UNKNOWN33
    case 0xC24C80: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:617 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C82: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:618 LDA #1
    case 0xC24C84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    case 0xC24C86: {
        Instruction step(cpu, 0x8D, 0x00986Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC24C84.
    case 0xC24C87: {
        Instruction step(cpu, 0x6F, 0x01A298u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:625 LDX #1
    case 0xC24C89: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:625 LDX #1
    // Overlapping static entry reached from 0xC24C89.
    case 0xC24C8B: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:644 REP #PROC_FLAGS::ACCUM8
    case 0xC24C8C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:645 LDA @LOCAL11
    case 0xC24C8E: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:646 AND #$0002
    case 0xC24C90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:646 AND #$0002
    // Overlapping static entry reached from 0xC24C90.
    case 0xC24C92: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:647 BEQ @UNKNOWN34
    case 0xC24C93: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:648 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C95: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:649 LDA #2
    case 0xC24C97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x009D02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:650 STA GAME_STATE + game_state::party_members,X
    case 0xC24C99: {
        Instruction step(cpu, 0x9D, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:650 STA GAME_STATE + game_state::party_members,X
    // Overlapping static entry reached from 0xC24C97.
    case 0xC24C9A: {
        Instruction step(cpu, 0x6F, 0xC2E898u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:651 INX
    case 0xC24C9C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:670 REP #PROC_FLAGS::ACCUM8
    case 0xC24C9D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:670 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24C9A.
    case 0xC24C9E: {
        Instruction step(cpu, 0x20, 0x0033A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:671 LDA @LOCAL11
    case 0xC24C9F: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:672 AND #$0004
    case 0xC24CA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:672 AND #$0004
    // Overlapping static entry reached from 0xC24CA1.
    case 0xC24CA3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:673 BEQ @UNKNOWN35
    case 0xC24CA4: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:674 SEP #PROC_FLAGS::ACCUM8
    case 0xC24CA6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:675 LDA #3
    case 0xC24CA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x009D03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:676 STA GAME_STATE + game_state::party_members,X
    case 0xC24CAA: {
        Instruction step(cpu, 0x9D, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:676 STA GAME_STATE + game_state::party_members,X
    // Overlapping static entry reached from 0xC24CA8.
    case 0xC24CAB: {
        Instruction step(cpu, 0x6F, 0xC2E898u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:677 INX
    case 0xC24CAD: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:696 REP #PROC_FLAGS::ACCUM8
    case 0xC24CAE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:696 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24CAB.
    case 0xC24CAF: {
        Instruction step(cpu, 0x20, 0x0033A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:697 LDA @LOCAL11
    case 0xC24CB0: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:698 AND #$0008
    case 0xC24CB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:698 AND #$0008
    // Overlapping static entry reached from 0xC24CB2.
    case 0xC24CB4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:699 BEQ @UNKNOWN36
    case 0xC24CB5: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:700 SEP #PROC_FLAGS::ACCUM8
    case 0xC24CB7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:701 LDA #4
    case 0xC24CB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x009D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:702 STA GAME_STATE + game_state::party_members,X
    case 0xC24CBB: {
        Instruction step(cpu, 0x9D, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:702 STA GAME_STATE + game_state::party_members,X
    // Overlapping static entry reached from 0xC24CB9.
    case 0xC24CBC: {
        Instruction step(cpu, 0x6F, 0xC2E898u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:703 INX
    case 0xC24CBE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:709 REP #PROC_FLAGS::ACCUM8
    case 0xC24CBF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:709 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24CBC.
    case 0xC24CC0: {
        Instruction step(cpu, 0x20, 0x00E28Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:710 TXA
    case 0xC24CC1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:712 SEP #PROC_FLAGS::ACCUM8
    case 0xC24CC2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:712 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24CC0.
    case 0xC24CC3: {
        Instruction step(cpu, 0x20, 0x00A48Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:713 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24CC4: {
        Instruction step(cpu, 0x8D, 0x0098A4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:713 STA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC24CC3.
    case 0xC24CC6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:714 BRA @UNKNOWN38
    case 0xC24CC7: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:728 STZ GAME_STATE + game_state::party_members,X
    case 0xC24CC9: {
        Instruction step(cpu, 0x9E, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:729 INX
    case 0xC24CCC: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:737 CPX #6
    case 0xC24CCD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:737 CPX #6
    // Overlapping static entry reached from 0xC24CCD.
    case 0xC24CCF: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:739 BCC @UNKNOWN37
    case 0xC24CD0: {
        Instruction step(cpu, 0x90, 0x0000F7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:740 JMP @UNKNOWN2
    case 0xC24CD2: {
        Instruction step(cpu, 0x4C, 0x0048E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:742 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24CD5: {
        Instruction step(cpu, 0xAD, 0x009F8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    case 0xC24CD8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24CD8.
    case 0xC24CDA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:744 JSL MULT168
    case 0xC24CDB: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:746 CLC
    case 0xC24CDF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    case 0xC24CE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24CE0.
    case 0xC24CE2: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:748 TAX
    case 0xC24CE3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:749 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24CE4: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    case 0xC24CE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    // Overlapping static entry reached from 0xC24CE8.
    case 0xC24CEA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:751 JSL CHANGE_MUSIC
    case 0xC24CEB: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    case 0xC24CEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    // Overlapping static entry reached from 0xC24CEF.
    case 0xC24CF1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:754 JSL GET_EVENT_FLAG
    case 0xC24CF2: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:755 CMP #0
    case 0xC24CF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:755 CMP #0
    // Overlapping static entry reached from 0xC24CF6.
    case 0xC24CF8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:756 BEQ @UNKNOWN41
    case 0xC24CF9: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24CFB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x00A180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24CFB.
    case 0xC24CFD: {
        Instruction step(cpu, 0xA1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24CFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0000D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24CFD.
    case 0xC24CFF: {
        Instruction step(cpu, 0xD7, 0x000000u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24CFE.
    case 0xC24D00: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:759 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24D01: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:760 SEP #PROC_FLAGS::ACCUM8
    case 0xC24D05: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:761 LDA #1
    case 0xC24D07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    case 0xC24D09: {
        Instruction step(cpu, 0x8D, 0x00A190u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    // Overlapping static entry reached from 0xC24D07.
    case 0xC24D0A: {
        Instruction step(cpu, 0x90, 0x0000A1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:763 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::ally_or_enemy
    case 0xC24D0C: {
        Instruction step(cpu, 0x9C, 0x00A18Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:764 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24D0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x008DD7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24D11: {
        Instruction step(cpu, 0x8D, 0x00A18Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24D0F.
    case 0xC24D12: {
        Instruction step(cpu, 0x8F, 0x00A2A1u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:772 LDX #0
    case 0xC24D14: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:772 LDX #0
    // Overlapping static entry reached from 0xC24D14.
    case 0xC24D16: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:773 STX @LOCAL07
    case 0xC24D17: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:775 BRA @UNKNOWN45
    case 0xC24D19: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:783 REP #PROC_FLAGS::ACCUM8
    case 0xC24D1B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:784 LDA GAME_STATE + game_state::party_members,X
    case 0xC24D1D: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    case 0xC24D20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    // Overlapping static entry reached from 0xC24D20.
    case 0xC24D22: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:787 STA @VIRTUAL04
    case 0xC24D23: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:788 STA @LOCAL08
    case 0xC24D25: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:789 LDA @VIRTUAL04
    case 0xC24D27: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:790 BEQ @UNKNOWN44
    case 0xC24D29: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:791 LDA @VIRTUAL04
    case 0xC24D2B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:792 CMP #4
    case 0xC24D2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:792 CMP #4
    // Overlapping static entry reached from 0xC24D2D.
    case 0xC24D2F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24D30: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24D32: {
        Instruction step(cpu, 0xB0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:794 LDA @VIRTUAL04
    case 0xC24D34: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:795 DEC
    case 0xC24D36: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    case 0xC24D37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24D37.
    case 0xC24D39: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:797 JSL MULT168
    case 0xC24D3A: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:798 CLC
    case 0xC24D3E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC24D3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x0099DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC24D3F.
    case 0xC24D41: {
        Instruction step(cpu, 0x99, 0x00BDAAu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:800 TAX
    case 0xC24D42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC24D43: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC24D41.
    case 0xC24D44: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    case 0xC24D46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    // Overlapping static entry reached from 0xC24D46.
    case 0xC24D48: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    case 0xC24D49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC24D49.
    case 0xC24D4B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:804 BNE @UNKNOWN44
    case 0xC24D4C: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24D4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x00A180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24D4E.
    case 0xC24D50: {
        Instruction step(cpu, 0xA1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24D51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24D50.
    case 0xC24D52: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24D51.
    case 0xC24D53: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:807 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24D54: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:808 SEP #PROC_FLAGS::ACCUM8
    case 0xC24D58: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:809 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24D5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24D5C: {
        Instruction step(cpu, 0x8D, 0x00A18Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24D5A.
    case 0xC24D5D: {
        Instruction step(cpu, 0x8F, 0x0A80A1u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:811 BRA @UNKNOWN46
    case 0xC24D5F: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:818 LDX @LOCAL07
    case 0xC24D61: {
        Instruction step(cpu, 0xA6, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:819 INX
    case 0xC24D63: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:820 STX @LOCAL07
    case 0xC24D64: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:827 CPX #TOTAL_PARTY_COUNT
    case 0xC24D66: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:827 CPX #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC24D66.
    case 0xC24D68: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:829 BCC @UNKNOWN42
    case 0xC24D69: {
        Instruction step(cpu, 0x90, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:831 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24D6B: {
        Instruction step(cpu, 0x22, 0xC1DD3Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:832 LDA ENEMIES_IN_BATTLE
    case 0xC24D6F: {
        Instruction step(cpu, 0xAD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:833 JSR RAND_LIMIT
    case 0xC24D72: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:835 ASL
    case 0xC24D75: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:836 TAX
    case 0xC24D76: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:837 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC24D77: {
        Instruction step(cpu, 0xBD, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:841 STA @LOCAL0F
    case 0xC24D7A: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D7C.
    case 0xC24D7E: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D7F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D7E.
    case 0xC24D80: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D80.
    case 0xC24D82: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D81.
    case 0xC24D83: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D84: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:847 LDA @LOCAL0F
    case 0xC24D86: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    case 0xC24D88: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24D88.
    case 0xC24D8A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:850 JSL MULT168
    case 0xC24D8B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:855 STA @LOCAL0F
    case 0xC24D8F: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:857 CLC
    case 0xC24D91: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    case 0xC24D92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000058u : 0x000058u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC24D92.
    case 0xC24D94: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D95: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D97: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D99: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D9B: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:860 CLC
    case 0xC24D9D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:861 ADC @VIRTUAL0A
    case 0xC24D9E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:862 STA @VIRTUAL0A
    case 0xC24DA0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:863 LDA [@VIRTUAL0A]
    case 0xC24DA2: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    case 0xC24DA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    // Overlapping static entry reached from 0xC24DA4.
    case 0xC24DA6: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:865 STA ITEM_DROPPED
    case 0xC24DA7: {
        Instruction step(cpu, 0x8D, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:865 STA ITEM_DROPPED
    // Overlapping static entry reached from 0xC2E34E.
    case 0xC24DA9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:869 LDA @LOCAL0F
    case 0xC24DAA: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:871 CLC
    case 0xC24DAC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    case 0xC24DAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000057u : 0x000057u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC24DAD.
    case 0xC24DAF: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:873 CLC
    case 0xC24DB0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:874 ADC @VIRTUAL06
    case 0xC24DB1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:875 STA @VIRTUAL06
    case 0xC24DB3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:876 LDA [@VIRTUAL06]
    case 0xC24DB5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    case 0xC24DB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    // Overlapping static entry reached from 0xC24DB7.
    case 0xC24DB9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:878 BEQ @RARITY_ZERO
    case 0xC24DBA: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:879 CMP #1
    case 0xC24DBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:879 CMP #1
    // Overlapping static entry reached from 0xC24DBC.
    case 0xC24DBE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:880 BEQ @RARITY_ONE
    case 0xC24DBF: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:881 CMP #2
    case 0xC24DC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:881 CMP #2
    // Overlapping static entry reached from 0xC24DC1.
    case 0xC24DC3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:882 BEQ @RARITY_TWO
    case 0xC24DC4: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:883 CMP #3
    case 0xC24DC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:883 CMP #3
    // Overlapping static entry reached from 0xC24DC6.
    case 0xC24DC8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:884 BEQ @RARITY_THREE
    case 0xC24DC9: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:885 CMP #4
    case 0xC24DCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:885 CMP #4
    // Overlapping static entry reached from 0xC24DCB.
    case 0xC24DCD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:886 BEQ @RARITY_FOUR
    case 0xC24DCE: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:887 CMP #5
    case 0xC24DD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:887 CMP #5
    // Overlapping static entry reached from 0xC24DD0.
    case 0xC24DD2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:888 BEQ @RARITY_FIVE
    case 0xC24DD3: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:889 CMP #6
    case 0xC24DD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:889 CMP #6
    // Overlapping static entry reached from 0xC24DD5.
    case 0xC24DD7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:890 BEQ @RARITY_SIX
    case 0xC24DD8: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:891 BRA @RARITY_SEVEN
    case 0xC24DDA: {
        Instruction step(cpu, 0x80, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:893 JSL RAND
    case 0xC24DDC: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    case 0xC24DE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    // Overlapping static entry reached from 0xC24DE0.
    case 0xC24DE2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:895 BEQ @RARITY_SEVEN
    case 0xC24DE3: {
        Instruction step(cpu, 0xF0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:896 STZ ITEM_DROPPED
    case 0xC24DE5: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:897 BRA @RARITY_SEVEN
    case 0xC24DE8: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:899 JSL RAND
    case 0xC24DEA: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    case 0xC24DEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    // Overlapping static entry reached from 0xC24DEE.
    case 0xC24DF0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:901 BEQ @RARITY_SEVEN
    case 0xC24DF1: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:902 STZ ITEM_DROPPED
    case 0xC24DF3: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:903 BRA @RARITY_SEVEN
    case 0xC24DF6: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:905 JSL RAND
    case 0xC24DF8: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    case 0xC24DFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    // Overlapping static entry reached from 0xC24DFC.
    case 0xC24DFE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:907 BEQ @RARITY_SEVEN
    case 0xC24DFF: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:908 STZ ITEM_DROPPED
    case 0xC24E01: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:909 BRA @RARITY_SEVEN
    case 0xC24E04: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:911 JSL RAND
    case 0xC24E06: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    case 0xC24E0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    // Overlapping static entry reached from 0xC24E0A.
    case 0xC24E0C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:913 BEQ @RARITY_SEVEN
    case 0xC24E0D: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:914 STZ ITEM_DROPPED
    case 0xC24E0F: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:915 BRA @RARITY_SEVEN
    case 0xC24E12: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:917 JSL RAND
    case 0xC24E14: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    case 0xC24E18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    // Overlapping static entry reached from 0xC24E18.
    case 0xC24E1A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:919 BEQ @RARITY_SEVEN
    case 0xC24E1B: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:920 STZ ITEM_DROPPED
    case 0xC24E1D: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:921 BRA @RARITY_SEVEN
    case 0xC24E20: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:923 JSL RAND
    case 0xC24E22: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    case 0xC24E26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    // Overlapping static entry reached from 0xC24E26.
    case 0xC24E28: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:925 BEQ @RARITY_SEVEN
    case 0xC24E29: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:926 STZ ITEM_DROPPED
    case 0xC24E2B: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:927 BRA @RARITY_SEVEN
    case 0xC24E2E: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:929 JSL RAND
    case 0xC24E30: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    case 0xC24E34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    // Overlapping static entry reached from 0xC24E34.
    case 0xC24E36: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:931 BEQ @RARITY_SEVEN
    case 0xC24E37: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:932 STZ ITEM_DROPPED
    case 0xC24E39: {
        Instruction step(cpu, 0x9C, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:934 LDA ITEM_DROPPED
    case 0xC24E3C: {
        Instruction step(cpu, 0xAD, 0x00AA10u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24E3F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24E41: {
        Instruction step(cpu, 0x4C, 0x004ECDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:936 LDX #0
    case 0xC24E44: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:936 LDX #0
    // Overlapping static entry reached from 0xC24E44.
    case 0xC24E46: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:937 STX @LOCAL10
    case 0xC24E47: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:938 BRA @CONSOLATION_OUTER_LOOP_ENTRY
    case 0xC24E49: {
        Instruction step(cpu, 0x80, 0x000078u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:940 LDY #8
    case 0xC24E4B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:940 LDY #8
    // Overlapping static entry reached from 0xC24E4B.
    case 0xC24E4D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:944 STY @LOCAL0F
    case 0xC24E4E: {
        Instruction step(cpu, 0x84, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:946 BRA @CONSOLATION_INNER_LOOP_ENTRY
    case 0xC24E50: {
        Instruction step(cpu, 0x80, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:948 TYA
    case 0xC24E52: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    case 0xC24E53: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E53.
    case 0xC24E55: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:950 JSL MULT168
    case 0xC24E56: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:952 STA @LOCAL09
    case 0xC24E5A: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:953 TAX
    case 0xC24E5C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:954 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC24E5D: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    case 0xC24E60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    // Overlapping static entry reached from 0xC24E60.
    case 0xC24E62: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:956 BEQ @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24E63: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x003109u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E65.
    case 0xC24E67: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E68: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E67.
    case 0xC24E69: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0000C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E69.
    case 0xC24E6B: {
        Instruction step(cpu, 0xC2, 0x000000u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E6A.
    case 0xC24E6C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E6D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:958 LDX @LOCAL10
    case 0xC24E6F: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:959 TXA
    case 0xC24E71: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E72: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E74: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E75: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E76: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E77: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:961 STA @VIRTUAL02
    case 0xC24E79: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:962 LDA @LOCAL09
    case 0xC24E7B: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:963 TAX
    case 0xC24E7D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:964 LDA @VIRTUAL02
    case 0xC24E7E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E80: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E82: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E84: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E86: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:966 CLC
    case 0xC24E88: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:967 ADC @VIRTUAL0A
    case 0xC24E89: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:968 STA @VIRTUAL0A
    case 0xC24E8B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:969 LDA [@VIRTUAL0A]
    case 0xC24E8D: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    case 0xC24E8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    // Overlapping static entry reached from 0xC24E8F.
    case 0xC24E91: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:971 CMP BATTLERS_TABLE + battler::id,X
    case 0xC24E92: {
        Instruction step(cpu, 0xDD, 0x009FACu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:972 BNE @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24E95: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:973 LDA #7
    case 0xC24E97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:973 LDA #7
    // Overlapping static entry reached from 0xC24E97.
    case 0xC24E99: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:974 JSR RAND_LIMIT
    case 0xC24E9A: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:975 PHA
    case 0xC24E9D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:976 LDA @VIRTUAL02
    case 0xC24E9E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:977 PLY
    case 0xC24EA0: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:978 STY @VIRTUAL02
    case 0xC24EA1: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:979 CLC
    case 0xC24EA3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:980 ADC @VIRTUAL02
    case 0xC24EA4: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:980 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC24EFA.
    case 0xC24EA5: {
        Instruction step(cpu, 0x02, 0x00001Au, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:981 INC
    case 0xC24EA6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:982 CLC
    case 0xC24EA7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:983 ADC @VIRTUAL06
    case 0xC24EA8: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:984 STA @VIRTUAL06
    case 0xC24EAA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:985 LDA [@VIRTUAL06]
    case 0xC24EAC: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    case 0xC24EAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    // Overlapping static entry reached from 0xC24EAE.
    case 0xC24EB0: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:987 STA ITEM_DROPPED
    case 0xC24EB1: {
        Instruction step(cpu, 0x8D, 0x00AA10u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:994 LDY @LOCAL0F
    case 0xC24EB4: {
        Instruction step(cpu, 0xA4, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:995 INY
    case 0xC24EB6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:996 STY @LOCAL0F
    case 0xC24EB7: {
        Instruction step(cpu, 0x84, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    case 0xC24EB9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24EB9.
    case 0xC24EBB: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1000 BCC @CONSOLATION_INNER_LOOP_BEGIN
    case 0xC24EBC: {
        Instruction step(cpu, 0x90, 0x000094u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1001 LDX @LOCAL10
    case 0xC24EBE: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1002 INX
    case 0xC24EC0: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1003 STX @LOCAL10
    case 0xC24EC1: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1005 CPX #2
    case 0xC24EC3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1005 CPX #2
    // Overlapping static entry reached from 0xC24EC3.
    case 0xC24EC5: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24EC6: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24EC8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24ECA: {
        Instruction step(cpu, 0x4C, 0x004E4Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1011 STZ @LOCAL06
    case 0xC24ECD: {
        Instruction step(cpu, 0x64, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1013 LDA BATTLE_INITIATIVE
    case 0xC24ECF: {
        Instruction step(cpu, 0xAD, 0x004DBCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1014 BEQ @UNKNOWN64
    case 0xC24ED2: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1015 CMP #1
    case 0xC24ED4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1015 CMP #1
    // Overlapping static entry reached from 0xC24ED4.
    case 0xC24ED6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1016 BEQ @UNKNOWN62
    case 0xC24ED7: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1017 CMP #2
    case 0xC24ED9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1017 CMP #2
    // Overlapping static entry reached from 0xC24ED9.
    case 0xC24EDB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1018 BEQ @UNKNOWN63
    case 0xC24EDC: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1019 BRA @UNKNOWN64
    case 0xC24EDE: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    case 0xC24EE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24EE0.
    case 0xC24EE2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1025 STA @LOCAL06
    case 0xC24EE3: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1027 BRA @UNKNOWN64
    case 0xC24EE5: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    case 0xC24EE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC24EE7.
    case 0xC24EE9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1033 STA @LOCAL06
    case 0xC24EEA: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1036 STZ BATTLE_INITIATIVE
    case 0xC24EEC: {
        Instruction step(cpu, 0x9C, 0x004DBCu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24EEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24B74.
    case 0xC24EF0: {
        Instruction step(cpu, 0x0E, 0x002200u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24EEF.
    case 0xC24EF1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24EF2: {
        Instruction step(cpu, 0x22, 0xC1DD47u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24EF0.
    case 0xC24EF3: {
        Instruction step(cpu, 0x47, 0x0000DDu, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24EF3.
    case 0xC24EF5: {
        Instruction step(cpu, 0xC1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24EF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24EF5.
    case 0xC24EF7: {
        Instruction step(cpu, 0x1C, 0x008DA2u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24EF6.
    case 0xC24EF8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00008Du : 0x00708Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    case 0xC24EF9: {
        Instruction step(cpu, 0x8D, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24EF8.
    case 0xC24EFA: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24EF8.
    case 0xC24EFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x0001A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1041 LDA #1
    case 0xC24EFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1041 LDA #1
    // Overlapping static entry reached from 0xC24EFB.
    case 0xC24EFD: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1041 LDA #1
    // Overlapping static entry reached from 0xC24EFC.
    case 0xC24EFE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1042 JSL FIX_ATTACKER_NAME
    case 0xC24EFF: {
        Instruction step(cpu, 0x22, 0xC23BCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24F03.
    case 0xC24F05: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F06: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24F05.
    case 0xC24F07: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24F08.
    case 0xC24F0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F0B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1044 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24F0D: {
        Instruction step(cpu, 0xAD, 0x009F8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    case 0xC24F10: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24F10.
    case 0xC24F12: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1046 JSL MULT168
    case 0xC24F13: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1047 CLC
    case 0xC24F17: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    case 0xC24F18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    // Overlapping static entry reached from 0xC24F18.
    case 0xC24F1A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1049 CLC
    case 0xC24F1B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1050 ADC @VIRTUAL0A
    case 0xC24F1C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1051 STA @VIRTUAL0A
    case 0xC24F1E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F20: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC24F20.
    case 0xC24F22: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F23: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F25: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F26: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F28: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F2A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F2C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F2E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F30: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F32: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1054 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC24F34: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1058 LDA @LOCAL06
    case 0xC24F38: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    case 0xC24F3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24F3A.
    case 0xC24F3C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1061 BNE @UNKNOWN65
    case 0xC24F3D: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D8u : 0x0078D8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24F3F.
    case 0xC24F41: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F42: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24F44.
    case 0xC24F46: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F47: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F49: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1064 LDA #0
    case 0xC24F4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1064 LDA #0
    // Overlapping static entry reached from 0xC24F4D.
    case 0xC24F4F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1065 STA @LOCAL10
    case 0xC24F50: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1066 BRA @UNKNOWN70
    case 0xC24F52: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    case 0xC24F54: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24F54.
    case 0xC24F56: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1069 JSL MULT168
    case 0xC24F57: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1070 CLC
    case 0xC24F5B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24F5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24F5C.
    case 0xC24F5E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00008Du : 0x00728Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    case 0xC24F5F: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC24F5E.
    case 0xC24F60: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC24F5E.
    case 0xC24F61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x000522u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    case 0xC24F62: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC24F61.
    case 0xC24F63: {
        Instruction step(cpu, 0x05, 0x00003Du, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC24F61.
    case 0xC24F64: {
        Instruction step(cpu, 0x3D, 0x00AEC2u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC24F63.
    case 0xC24F65: {
        Instruction step(cpu, 0xC2, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1074 LDX CURRENT_TARGET
    case 0xC24F66: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1074 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC24F64.
    case 0xC24F67: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1075 LDA a:battler::afflictions+2,X
    case 0xC24F69: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    case 0xC24F6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    // Overlapping static entry reached from 0xC24F6C.
    case 0xC24F6E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    case 0xC24F6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC24F6F.
    case 0xC24F71: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1078 BNE @UNKNOWN67
    case 0xC24F72: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Fu : 0x00843Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24F74.
    case 0xC24F76: {
        Instruction step(cpu, 0x84, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F77: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24F76.
    case 0xC24F78: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24F79.
    case 0xC24F7B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F7C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F7E: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1081 LDX CURRENT_TARGET
    case 0xC24F82: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1082 LDA a:battler::afflictions+4,X
    case 0xC24F85: {
        Instruction step(cpu, 0xBD, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    case 0xC24F88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    // Overlapping static entry reached from 0xC24F88.
    case 0xC24F8A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1084 BEQ @UNKNOWN68
    case 0xC24F8B: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000044u : 0x008444u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24F8D.
    case 0xC24F8F: {
        Instruction step(cpu, 0x84, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F90: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24F8F.
    case 0xC24F91: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24F92.
    case 0xC24F94: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F95: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F97: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1087 LDX CURRENT_TARGET
    case 0xC24F9B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1088 LDA a:battler::afflictions+3,X
    case 0xC24F9E: {
        Instruction step(cpu, 0xBD, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    case 0xC24FA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    // Overlapping static entry reached from 0xC24FA1.
    case 0xC24FA3: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    case 0xC24FA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC24FA4.
    case 0xC24FA6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1091 BNE @UNKNOWN69
    case 0xC24FA7: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000045u : 0x008445u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24FA9.
    case 0xC24FAB: {
        Instruction step(cpu, 0x84, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FAC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24FAB.
    case 0xC24FAD: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24FAE.
    case 0xC24FB0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FB1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FB3: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1094 LDA @LOCAL10
    case 0xC24FB7: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1095 INC
    case 0xC24FB9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1096 STA @LOCAL10
    case 0xC24FBA: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1098 CMP ENEMIES_IN_BATTLE
    case 0xC24FBC: {
        Instruction step(cpu, 0xCD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1099 BCC @UNKNOWN66
    case 0xC24FBF: {
        Instruction step(cpu, 0x90, 0x000093u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC24FC1: {
        Instruction step(cpu, 0x22, 0xC1DD59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1105 STZ @LOCAL09
    case 0xC24FC5: {
        Instruction step(cpu, 0x64, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1106 LDA @LOCAL09
    case 0xC24FC7: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1108 STA SPECIAL_DEFEAT
    case 0xC24FC9: {
        Instruction step(cpu, 0x8D, 0x00AA0Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1109 JMP @UNKNOWN236
    case 0xC24FCC: {
        Instruction step(cpu, 0x4C, 0x00608Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1114 INC @LOCAL0A
    case 0xC24FCF: {
        Instruction step(cpu, 0xE6, 0x000025u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1116 JSL UNKNOWN_C2F917
    case 0xC24FD1: {
        Instruction step(cpu, 0x22, 0xC2F917u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC24FD5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24FD5.
    case 0xC24FD7: {
        Instruction step(cpu, 0x9F, 0xA23184u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1118 STY @LOCAL10
    case 0xC24FD8: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1119 LDX #0
    case 0xC24FDA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24FD7.
    case 0xC24FDB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24FDA.
    case 0xC24FDC: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1120 STX @LOCAL05
    case 0xC24FDD: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1121 BRA @UNKNOWN74
    case 0xC24FDF: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1123 TYX
    case 0xC24FE1: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1124 SEP #PROC_FLAGS::ACCUM8
    case 0xC24FE2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1125 STZ a:battler::has_taken_turn,X
    case 0xC24FE4: {
        Instruction step(cpu, 0x9E, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1126 REP #PROC_FLAGS::ACCUM8
    case 0xC24FE7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1127 LDA a:battler::consciousness,Y
    case 0xC24FE9: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    case 0xC24FEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    // Overlapping static entry reached from 0xC24FEC.
    case 0xC24FEE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1129 BEQ @UNKNOWN73
    case 0xC24FEF: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1130 TYA
    case 0xC24FF1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1131 CLC
    case 0xC24FF2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    case 0xC24FF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000046u : 0x000046u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    // Overlapping static entry reached from 0xC24FF3.
    case 0xC24FF5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1133 STA @VIRTUAL02
    case 0xC24FF6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1134 LDA a:battler::speed,Y
    case 0xC24FF8: {
        Instruction step(cpu, 0xB9, 0x00002Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1135 JSR FIFTY_PERCENT_VARIANCE
    case 0xC24FFB: {
        Instruction step(cpu, 0x20, 0x006A44u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1136 LDX @VIRTUAL02
    case 0xC24FFE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1137 STA __BSS_START__,X
    case 0xC25000: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1138 CMP #0
    case 0xC25003: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1138 CMP #0
    // Overlapping static entry reached from 0xC25003.
    case 0xC25005: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1139 BNE @UNKNOWN73
    case 0xC25006: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1140 LDA #1
    case 0xC25008: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1140 LDA #1
    // Overlapping static entry reached from 0xC25008.
    case 0xC2500A: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1141 LDX @VIRTUAL02
    case 0xC2500B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1142 STA __BSS_START__,X
    case 0xC2500D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1144 LDY @LOCAL10
    case 0xC25010: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1145 TYA
    case 0xC25012: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1146 CLC
    case 0xC25013: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    case 0xC25014: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25014.
    case 0xC25016: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1148 TAY
    case 0xC25017: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1149 STY @LOCAL10
    case 0xC25018: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1150 LDX @LOCAL05
    case 0xC2501A: {
        Instruction step(cpu, 0xA6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1151 INX
    case 0xC2501C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1152 STX @LOCAL05
    case 0xC2501D: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    case 0xC2501F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2501F.
    case 0xC25021: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1155 BCC @UNKNOWN72
    case 0xC25022: {
        Instruction step(cpu, 0x90, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1156 LDA #0
    case 0xC25024: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1156 LDA #0
    // Overlapping static entry reached from 0xC25024.
    case 0xC25026: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1157 STA @LOCAL10
    case 0xC25027: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1158 BRA @UNKNOWN76
    case 0xC25029: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    case 0xC2502B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2502B.
    case 0xC2502D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1161 JSL MULT168
    case 0xC2502E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1162 TAX
    case 0xC25032: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1163 SEP #PROC_FLAGS::ACCUM8
    case 0xC25033: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1164 STZ PARTY_CHARACTERS + char_struct::unknown94,X
    case 0xC25035: {
        Instruction step(cpu, 0x9E, 0x009A2Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1165 REP #PROC_FLAGS::ACCUM8
    case 0xC25038: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1166 LDA @LOCAL10
    case 0xC2503A: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1167 INC
    case 0xC2503C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1168 STA @LOCAL10
    case 0xC2503D: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1170 CMP #4
    case 0xC2503F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1170 CMP #4
    // Overlapping static entry reached from 0xC2503F.
    case 0xC25041: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1171 BCC @UNKNOWN75
    case 0xC25042: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1172 LDY #0
    case 0xC25044: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1172 LDY #0
    // Overlapping static entry reached from 0xC25044.
    case 0xC25046: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1173 STY @LOCAL04
    case 0xC25047: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1174 TYA
    case 0xC25049: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1175 STA @VIRTUAL02
    case 0xC2504A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1176 JMP @UNKNOWN106
    case 0xC2504C: {
        Instruction step(cpu, 0x4C, 0x005280u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1178 JSL CHECK_DEAD_PLAYERS
    case 0xC2504F: {
        Instruction step(cpu, 0x22, 0xC2BB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1179 LDA #0
    case 0xC25053: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1179 LDA #0
    // Overlapping static entry reached from 0xC25053.
    case 0xC25055: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1180 JSL COUNT_CHARS
    case 0xC25056: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1181 CMP #0
    case 0xC2505A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1181 CMP #0
    // Overlapping static entry reached from 0xC2505A.
    case 0xC2505C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1182 BNE @UNKNOWN78
    case 0xC2505D: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2505F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2505F.
    case 0xC25061: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC25062: {
        Instruction step(cpu, 0x22, 0xC1DD47u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1184 JMP @UNKNOWN225
    case 0xC25066: {
        Instruction step(cpu, 0x4C, 0x005EF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1193 LDX @VIRTUAL02
    case 0xC25069: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1194 LDA GAME_STATE + game_state::party_members,X
    case 0xC2506B: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    case 0xC2506E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    // Overlapping static entry reached from 0xC2506E.
    case 0xC25070: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1197 STA @VIRTUAL04
    case 0xC25071: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1198 STA @LOCAL08
    case 0xC25073: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1199 LDA @VIRTUAL04
    case 0xC25075: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC25077: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC25079: {
        Instruction step(cpu, 0x4C, 0x00527Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1201 LDA @VIRTUAL04
    case 0xC2507C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1202 CMP #4
    case 0xC2507E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1202 CMP #4
    // Overlapping static entry reached from 0xC2507E.
    case 0xC25080: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC25081: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC25083: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC25085: {
        Instruction step(cpu, 0x4C, 0x00527Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1207 LDA @LOCAL06
    case 0xC25088: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1209 CMP #2
    case 0xC2508A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1209 CMP #2
    // Overlapping static entry reached from 0xC2508A.
    case 0xC2508C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1210 BEQ @UNKNOWN82
    case 0xC2508D: {
        Instruction step(cpu, 0xF0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1214 LDA @LOCAL06
    case 0xC2508F: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1216 CMP #3
    case 0xC25091: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1216 CMP #3
    // Overlapping static entry reached from 0xC25091.
    case 0xC25093: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1217 BEQ @UNKNOWN82
    case 0xC25094: {
        Instruction step(cpu, 0xF0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1221 LDA @LOCAL06
    case 0xC25096: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1223 CMP #4
    case 0xC25098: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1223 CMP #4
    // Overlapping static entry reached from 0xC25098.
    case 0xC2509A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1224 BEQ @UNKNOWN82
    case 0xC2509B: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1225 LDA @VIRTUAL04
    case 0xC2509D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1226 CMP #4
    case 0xC2509F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1226 CMP #4
    // Overlapping static entry reached from 0xC2509F.
    case 0xC250A1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1227 BNE @UNKNOWN81
    case 0xC250A2: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1228 LDA MIRROR_ENEMY
    case 0xC250A4: {
        Instruction step(cpu, 0xAD, 0x00AA12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1229 BNE @UNKNOWN82
    case 0xC250A7: {
        Instruction step(cpu, 0xD0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1231 LDA @VIRTUAL04
    case 0xC250A9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1232 DEC
    case 0xC250AB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    case 0xC250AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC250AC.
    case 0xC250AE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1234 JSL MULT168
    case 0xC250AF: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1235 CLC
    case 0xC250B3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC250B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x0099DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC250B4.
    case 0xC250B6: {
        Instruction step(cpu, 0x99, 0x00BDAAu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1237 TAX
    case 0xC250B7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC250B8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC250B6.
    case 0xC250B9: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    case 0xC250BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    // Overlapping static entry reached from 0xC250BB.
    case 0xC250BD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    case 0xC250BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC250BE.
    case 0xC250C0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1241 BEQ @UNKNOWN82
    case 0xC250C1: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    case 0xC250C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC250C3.
    case 0xC250C5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1243 BEQ @UNKNOWN82
    case 0xC250C6: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1244 LDA a:STATUS_GROUP::TEMPORARY,X
    case 0xC250C8: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    case 0xC250CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    // Overlapping static entry reached from 0xC250CB.
    case 0xC250CD: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1246 TAX
    case 0xC250CE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    case 0xC250CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC250CF.
    case 0xC250D1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1248 BEQ @UNKNOWN82
    case 0xC250D2: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    case 0xC250D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC250D4.
    case 0xC250D6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1250 BNE @UNKNOWN83
    case 0xC250D7: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC250D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC250D9.
    case 0xC250DB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1253 STA @LOCAL07
    case 0xC250DC: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1254 SEP #PROC_FLAGS::ACCUM8
    case 0xC250DE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1255 STZ BATTLE_ITEM_USED
    case 0xC250E0: {
        Instruction step(cpu, 0x9C, 0x00A97Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1256 JMP @UNKNOWN91
    case 0xC250E3: {
        Instruction step(cpu, 0x4C, 0x005171u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1258 LDA @VIRTUAL02
    case 0xC250E6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1259 JSL REDIRECT_C43573
    case 0xC250E8: {
        Instruction step(cpu, 0x22, 0xC1DDCCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1260 LDY @LOCAL04
    case 0xC250EC: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1261 TYX
    case 0xC250EE: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1262 LDA @VIRTUAL04
    case 0xC250EF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1263 JSL BATTLE_SELECTION_MENU
    case 0xC250F1: {
        Instruction step(cpu, 0x22, 0xC2311Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1265 STA @LOCAL07
    case 0xC250F5: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1266 JSL REDIRECT_C3E6F8
    case 0xC250F7: {
        Instruction step(cpu, 0x22, 0xC1DDD3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1267 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC250FB: {
        Instruction step(cpu, 0x22, 0xC1DD59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1268 LDA BATTLE_MODE
    case 0xC250FF: {
        Instruction step(cpu, 0xAD, 0x004DC2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1269 BEQ @UNKNOWN84
    case 0xC25102: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1270 LDA @LOCAL07
    case 0xC25104: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    case 0xC25106: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    // Overlapping static entry reached from 0xC25106.
    case 0xC25108: {
        Instruction step(cpu, 0xFF, 0x6405D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1272 BNE @UNKNOWN84
    case 0xC25109: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    case 0xC2510B: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    // Overlapping static entry reached from 0xC25108.
    case 0xC2510C: {
        Instruction step(cpu, 0x17, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    case 0xC2510D: {
        Instruction step(cpu, 0x4C, 0x006093u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    // Overlapping static entry reached from 0xC2510C.
    case 0xC2510E: {
        Instruction step(cpu, 0x93, 0x000060u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1276 LDA @LOCAL07
    case 0xC25110: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    case 0xC25112: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000117u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC25112.
    case 0xC25114: {
        Instruction step(cpu, 0x01, 0x0000D0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    case 0xC25115: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    // Overlapping static entry reached from 0xC25114.
    case 0xC25116: {
        Instruction step(cpu, 0x1D, 0x0001A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC25117: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC25117.
    case 0xC25119: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1280 STA @LOCAL07
    case 0xC2511A: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1284 LDA @LOCAL06
    case 0xC2511C: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1286 CMP #1
    case 0xC2511E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1286 CMP #1
    // Overlapping static entry reached from 0xC2511E.
    case 0xC25120: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1287 BNE @UNKNOWN85
    case 0xC25121: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1288 LDA #4
    case 0xC25123: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1288 LDA #4
    // Overlapping static entry reached from 0xC25123.
    case 0xC25125: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1292 STA @LOCAL06
    case 0xC25126: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1294 BRA @UNKNOWN86
    case 0xC25128: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1296 LDA #3
    case 0xC2512A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1296 LDA #3
    // Overlapping static entry reached from 0xC2512A.
    case 0xC2512C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1300 STA @LOCAL06
    case 0xC2512D: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1303 LDA #1
    case 0xC2512F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1303 LDA #1
    // Overlapping static entry reached from 0xC2512F.
    case 0xC25131: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1307 STA @LOCAL0B
    case 0xC25132: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1310 LDA @LOCAL07
    case 0xC25134: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    case 0xC25136: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    // Overlapping static entry reached from 0xC25136.
    case 0xC25138: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC25139: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC2513B: {
        Instruction step(cpu, 0x4C, 0x0048E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC25138.
    case 0xC2513C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000048u : 0x00C948u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1313 CMP #0
    case 0xC2513E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1313 CMP #0
    // Overlapping static entry reached from 0xC2513C.
    case 0xC2513F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1313 CMP #0
    // Overlapping static entry reached from 0xC2513E.
    case 0xC25140: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1314 BNE @UNKNOWN90
    case 0xC25141: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1315 LDY @LOCAL04
    case 0xC25143: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC25145: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC25147: {
        Instruction step(cpu, 0x4C, 0x00504Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1317 DEY
    case 0xC2514A: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1318 STY @LOCAL04
    case 0xC2514B: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1319 TYA
    case 0xC2514D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1320 ASL
    case 0xC2514E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1321 TAX
    case 0xC2514F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1322 LDA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC25150: {
        Instruction step(cpu, 0xBD, 0x00AA64u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1323 STA @VIRTUAL02
    case 0xC25153: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1324 JMP @UNKNOWN77
    case 0xC25155: {
        Instruction step(cpu, 0x4C, 0x00504Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1326 LDY @LOCAL04
    case 0xC25158: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1327 TYA
    case 0xC2515A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1328 ASL
    case 0xC2515B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1329 TAX
    case 0xC2515C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1330 LDA @VIRTUAL02
    case 0xC2515D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1331 STA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC2515F: {
        Instruction step(cpu, 0x9D, 0x00AA64u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1332 INY
    case 0xC25162: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1333 STY @LOCAL04
    case 0xC25163: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1334 LDA @LOCAL07
    case 0xC25165: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1335 CMP #1
    case 0xC25167: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1335 CMP #1
    // Overlapping static entry reached from 0xC25167.
    case 0xC25169: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1336 BNE @UNKNOWN91
    case 0xC2516A: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1337 LDA #0
    case 0xC2516C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1337 LDA #0
    // Overlapping static entry reached from 0xC2516C.
    case 0xC2516E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1338 STA @LOCAL07
    case 0xC2516F: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1340 REP #PROC_FLAGS::ACCUM8
    case 0xC25171: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1341 STZ @LOCAL05
    case 0xC25173: {
        Instruction step(cpu, 0x64, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1342 JMP @UNKNOWN104
    case 0xC25175: {
        Instruction step(cpu, 0x4C, 0x005270u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1344 LDA @LOCAL05
    case 0xC25178: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    case 0xC2517A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2517A.
    case 0xC2517C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1346 JSL MULT168
    case 0xC2517D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1347 TAX
    case 0xC25181: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1348 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25182: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    case 0xC25185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    // Overlapping static entry reached from 0xC25185.
    case 0xC25187: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC25188: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC2518A: {
        Instruction step(cpu, 0x4C, 0x00526Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1351 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2518D: {
        Instruction step(cpu, 0xBD, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    case 0xC25190: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    // Overlapping static entry reached from 0xC25190.
    case 0xC25192: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC25193: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC25195: {
        Instruction step(cpu, 0x4C, 0x00526Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1354 LDA @VIRTUAL04
    case 0xC25198: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1355 CMP BATTLERS_TABLE + battler::id,X
    case 0xC2519A: {
        Instruction step(cpu, 0xDD, 0x009FACu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC2519D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC2519F: {
        Instruction step(cpu, 0x4C, 0x00526Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1357 LDA @LOCAL07
    case 0xC251A2: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1358 STA BATTLERS_TABLE+battler::current_action,X
    case 0xC251A4: {
        Instruction step(cpu, 0x9D, 0x009FB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1359 LDA BATTLE_ITEM_USED
    case 0xC251A7: {
        Instruction step(cpu, 0xAD, 0x00A97Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    case 0xC251AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    // Overlapping static entry reached from 0xC251AA.
    case 0xC251AC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1361 BEQ @UNKNOWN96
    case 0xC251AD: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1362 SEP #PROC_FLAGS::ACCUM8
    case 0xC251AF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1363 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC251B1: {
        Instruction step(cpu, 0xAD, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1364 STA BATTLERS_TABLE+7,X
    case 0xC251B4: {
        Instruction step(cpu, 0x9D, 0x009FB3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1365 LDA BATTLE_ITEM_USED
    case 0xC251B7: {
        Instruction step(cpu, 0xAD, 0x00A97Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1366 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC251BA: {
        Instruction step(cpu, 0x9D, 0x009FB4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1367 BRA @UNKNOWN97
    case 0xC251BD: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1369 SEP #PROC_FLAGS::ACCUM8
    case 0xC251BF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1370 STZ BATTLERS_TABLE+7,X
    case 0xC251C1: {
        Instruction step(cpu, 0x9E, 0x009FB3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1371 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC251C4: {
        Instruction step(cpu, 0xAD, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1372 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC251C7: {
        Instruction step(cpu, 0x9D, 0x009FB4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1374 REP #PROC_FLAGS::ACCUM8
    case 0xC251CA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1375 LDA @LOCAL05
    case 0xC251CC: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    case 0xC251CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC251CE.
    case 0xC251D0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1377 JSL MULT168
    case 0xC251D1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1385 STA @LOCAL07
    case 0xC251D5: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1386 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC251D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000081u : 0x00A981u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1386 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC251D7.
    case 0xC251D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x002F86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1387 STX @LOCAL0F
    case 0xC251DA: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1387 STX @LOCAL0F
    // Overlapping static entry reached from 0xC251D9.
    case 0xC251DB: {
        Instruction step(cpu, 0x2F, 0x20E248u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1388 PHA
    case 0xC251DC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1390 SEP #PROC_FLAGS::ACCUM8
    case 0xC251DD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1391 LDA __BSS_START__,X
    case 0xC251DF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1395 PLX
    case 0xC251E2: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1397 STA BATTLERS_TABLE + battler::action_targetting,X
    case 0xC251E3: {
        Instruction step(cpu, 0x9D, 0x009FB5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1399 REP #PROC_FLAGS::ACCUM8
    case 0xC251E6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1400 LDA @LOCAL07
    case 0xC251E8: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1401 TAX
    case 0xC251EA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1402 SEP #PROC_FLAGS::ACCUM8
    case 0xC251EB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1404 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC251ED: {
        Instruction step(cpu, 0xAD, 0x00A982u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1405 STA BATTLERS_TABLE + battler::current_target,X
    case 0xC251F0: {
        Instruction step(cpu, 0x9D, 0x009FB6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1411 LDX @LOCAL0F
    case 0xC251F3: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1412 REP #PROC_FLAGS::ACCUM8
    case 0xC251F5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1414 LDA __BSS_START__,X
    case 0xC251F7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    case 0xC251FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    // Overlapping static entry reached from 0xC251FA.
    case 0xC251FC: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1416 CMP #1
    case 0xC251FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1416 CMP #1
    // Overlapping static entry reached from 0xC251FD.
    case 0xC251FF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1417 BNE @UNKNOWN101
    case 0xC25200: {
        Instruction step(cpu, 0xD0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1418 LDA #0
    case 0xC25202: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1418 LDA #0
    // Overlapping static entry reached from 0xC25202.
    case 0xC25204: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1422 STA @LOCAL0F
    case 0xC25205: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1424 BRA @UNKNOWN100
    case 0xC25207: {
        Instruction step(cpu, 0x80, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    case 0xC25209: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25209.
    case 0xC2520B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1427 JSL MULT168
    case 0xC2520C: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1428 TAX
    case 0xC25210: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1429 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25211: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    case 0xC25214: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    // Overlapping static entry reached from 0xC25214.
    case 0xC25216: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1431 BEQ @UNKNOWN99
    case 0xC25217: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1432 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC25219: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    case 0xC2521C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    // Overlapping static entry reached from 0xC2521C.
    case 0xC2521E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1434 BNE @UNKNOWN99
    case 0xC2521F: {
        Instruction step(cpu, 0xD0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1435 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC25221: {
        Instruction step(cpu, 0xAD, 0x00A982u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    case 0xC25224: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    // Overlapping static entry reached from 0xC25224.
    case 0xC25226: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1437 CMP BATTLERS_TABLE+battler::id,X
    case 0xC25227: {
        Instruction step(cpu, 0xDD, 0x009FACu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1438 BNE @UNKNOWN99
    case 0xC2522A: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1439 LDA @LOCAL05
    case 0xC2522C: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    case 0xC2522E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2522E.
    case 0xC25230: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1441 JSL MULT168
    case 0xC25231: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1442 TAX
    case 0xC25235: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1446 LDA @LOCAL0F
    case 0xC25236: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1448 SEP #PROC_FLAGS::ACCUM8
    case 0xC25238: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1449 INC
    case 0xC2523A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1450 STA BATTLERS_TABLE+battler::current_target,X
    case 0xC2523B: {
        Instruction step(cpu, 0x9D, 0x009FB6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1451 BRA @UNKNOWN101
    case 0xC2523E: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1458 LDA @LOCAL0F
    case 0xC25240: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1459 INC
    case 0xC25242: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1460 STA @LOCAL0F
    case 0xC25243: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1464 CMP #6
    case 0xC25245: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1464 CMP #6
    // Overlapping static entry reached from 0xC25245.
    case 0xC25247: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1465 BCC @UNKNOWN98
    case 0xC25248: {
        Instruction step(cpu, 0x90, 0x0000BFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1467 REP #PROC_FLAGS::ACCUM8
    case 0xC2524A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1468 LDA @LOCAL05
    case 0xC2524C: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    case 0xC2524E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2524E.
    case 0xC25250: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1470 JSL MULT168
    case 0xC25251: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1471 TAX
    case 0xC25255: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1472 LDA BATTLERS_TABLE+battler::current_action,X
    case 0xC25256: {
        Instruction step(cpu, 0xBD, 0x009FB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    case 0xC25259: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC25259.
    case 0xC2525B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1474 BNE @UNKNOWN102
    case 0xC2525C: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1475 SEP #PROC_FLAGS::ACCUM8
    case 0xC2525E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1476 LDA #1
    case 0xC25260: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    case 0xC25262: {
        Instruction step(cpu, 0x9D, 0x009FD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    // Overlapping static entry reached from 0xC25260.
    case 0xC25263: {
        Instruction step(cpu, 0xD0, 0x00009Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1478 BRA @UNKNOWN105
    case 0xC25265: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1480 SEP #PROC_FLAGS::ACCUM8
    case 0xC25267: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1481 STZ BATTLERS_TABLE+battler::guarding,X
    case 0xC25269: {
        Instruction step(cpu, 0x9E, 0x009FD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1482 BRA @UNKNOWN105
    case 0xC2526C: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1484 INC @LOCAL05
    case 0xC2526E: {
        Instruction step(cpu, 0xE6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1487 LDA @LOCAL05
    case 0xC25270: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    case 0xC25272: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25272.
    case 0xC25274: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC25275: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC25277: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC25279: {
        Instruction step(cpu, 0x4C, 0x005178u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1491 REP #PROC_FLAGS::ACCUM8
    case 0xC2527C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1492 INC @VIRTUAL02
    case 0xC2527E: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1494 LDA @VIRTUAL02
    case 0xC25280: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1495 CMP #6
    case 0xC25282: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1495 CMP #6
    // Overlapping static entry reached from 0xC25282.
    case 0xC25284: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC25285: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC25287: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC25289: {
        Instruction step(cpu, 0x4C, 0x00504Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC2528C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2528C.
    case 0xC2528E: {
        Instruction step(cpu, 0x9F, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1499 STA @VIRTUAL02
    case 0xC2528F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    case 0xC25291: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    // Overlapping static entry reached from 0xC2528E.
    case 0xC25292: {
        Instruction step(cpu, 0x19, 0x0000A0u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1502 LDY #0
    case 0xC25293: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1502 LDY #0
    // Overlapping static entry reached from 0xC25293.
    case 0xC25295: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1506 STY @LOCAL07
    case 0xC25296: {
        Instruction step(cpu, 0x84, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1508 JMP @UNKNOWN132
    case 0xC25298: {
        Instruction step(cpu, 0x4C, 0x0054E4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1518 LDX @VIRTUAL02
    case 0xC2529B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1519 LDA a:battler::consciousness,X
    case 0xC2529D: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1520 AND #$00FF
    case 0xC252A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1520 AND #$00FF
    // Overlapping static entry reached from 0xC252A0.
    case 0xC252A2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1521 BEQ @UNKNOWN109
    case 0xC252A3: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1522 LDX @VIRTUAL02
    case 0xC252A5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1523 LDA a:battler::ally_or_enemy,X
    case 0xC252A7: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    case 0xC252AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    // Overlapping static entry reached from 0xC252AA.
    case 0xC252AC: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1526 CMP #1
    case 0xC252AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1526 CMP #1
    // Overlapping static entry reached from 0xC252AD.
    case 0xC252AF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1527 BEQ @UNKNOWN111
    case 0xC252B0: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1536 LDX @VIRTUAL02
    case 0xC252B2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1537 LDA a:battler::npc_id,X
    case 0xC252B4: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1538 AND #$00FF
    case 0xC252B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1538 AND #$00FF
    // Overlapping static entry reached from 0xC252B7.
    case 0xC252B9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1539 BNE @UNKNOWN111
    case 0xC252BA: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1540 LDX @VIRTUAL02
    case 0xC252BC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1541 LDA a:battler::id,X
    case 0xC252BE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    case 0xC252C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC252C1.
    case 0xC252C3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC252C4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC252C6: {
        Instruction step(cpu, 0x4C, 0x0054D5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1545 LDA MIRROR_ENEMY
    case 0xC252C9: {
        Instruction step(cpu, 0xAD, 0x00AA12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC252CC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC252CE: {
        Instruction step(cpu, 0x4C, 0x0054D5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1551 LDA @LOCAL06
    case 0xC252D1: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1553 CMP #1
    case 0xC252D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1553 CMP #1
    // Overlapping static entry reached from 0xC252D3.
    case 0xC252D5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1554 BEQ @UNKNOWN112
    case 0xC252D6: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1558 LDA @LOCAL06
    case 0xC252D8: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1560 CMP #4
    case 0xC252DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1560 CMP #4
    // Overlapping static entry reached from 0xC252DA.
    case 0xC252DC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1561 BNE @UNKNOWN113
    case 0xC252DD: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1571 LDX @VIRTUAL02
    case 0xC252DF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1572 LDA a:battler::ally_or_enemy,X
    case 0xC252E1: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1573 AND #$00FF
    case 0xC252E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1573 AND #$00FF
    // Overlapping static entry reached from 0xC252E4.
    case 0xC252E6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1574 CMP #1
    case 0xC252E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1574 CMP #1
    // Overlapping static entry reached from 0xC252E7.
    case 0xC252E9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1575 BNE @UNKNOWN113
    case 0xC252EA: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1576 LDX @VIRTUAL02
    case 0xC252EC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1578 STZ a:battler::current_action,X
    case 0xC252EE: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1579 JMP @UNKNOWN131
    case 0xC252F1: {
        Instruction step(cpu, 0x4C, 0x0054D5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1591 LDA @LOCAL06
    case 0xC252F4: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1592 CMP #2
    case 0xC252F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1592 CMP #2
    // Overlapping static entry reached from 0xC252F6.
    case 0xC252F8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1593 BNE @UNKNOWN114
    case 0xC252F9: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1594 LDX @VIRTUAL02
    case 0xC252FB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1595 LDA a:battler::ally_or_enemy,X
    case 0xC252FD: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1596 AND #$00FF
    case 0xC25300: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1596 AND #$00FF
    // Overlapping static entry reached from 0xC25300.
    case 0xC25302: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1597 BNE @UNKNOWN114
    case 0xC25303: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1598 LDX @VIRTUAL02
    case 0xC25305: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1600 STZ a:battler::current_action,X
    case 0xC25307: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1601 JMP @UNKNOWN131
    case 0xC2530A: {
        Instruction step(cpu, 0x4C, 0x0054D5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1610 LDX @VIRTUAL02
    case 0xC2530D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1611 LDA a:battler::ally_or_enemy,X
    case 0xC2530F: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1612 AND #$00FF
    case 0xC25312: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1612 AND #$00FF
    // Overlapping static entry reached from 0xC25312.
    case 0xC25314: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1613 BNE @UNKNOWN115
    case 0xC25315: {
        Instruction step(cpu, 0xD0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1614 LDX @VIRTUAL02
    case 0xC25317: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1615 LDA a:battler::id,X
    case 0xC25319: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    case 0xC2531C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2531C.
    case 0xC2531E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1618 BNE @UNKNOWN115
    case 0xC2531F: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25321: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25321.
    case 0xC25323: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25324: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25323.
    case 0xC25325: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25326: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25325.
    case 0xC25327: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25326.
    case 0xC25328: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25329: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1620 LDA MIRROR_ENEMY
    case 0xC2532B: {
        Instruction step(cpu, 0xAD, 0x00AA12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    case 0xC2532E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2532E.
    case 0xC25330: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1622 JSL MULT168
    case 0xC25331: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1623 CLC
    case 0xC25335: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1624 ADC @VIRTUAL06
    case 0xC25336: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1625 STA @VIRTUAL06
    case 0xC25338: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1626 BRA @UNKNOWN116
    case 0xC2533A: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2533C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2533C.
    case 0xC2533E: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2533F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2533E.
    case 0xC25340: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25341: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25340.
    case 0xC25342: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25341.
    case 0xC25343: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25344: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1632 LDX @VIRTUAL02
    case 0xC25346: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1633 LDA a:battler::id,X
    case 0xC25348: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    case 0xC2534B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2534B.
    case 0xC2534D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1636 JSL MULT168
    case 0xC2534E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1637 CLC
    case 0xC25352: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1638 ADC @VIRTUAL06
    case 0xC25353: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1639 STA @VIRTUAL06
    case 0xC25355: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1641 SEP #PROC_FLAGS::ACCUM8
    case 0xC25357: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    case 0xC25359: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000045u : 0x000045u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    // Overlapping static entry reached from 0xC25359.
    case 0xC2535B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1643 LDA [@VIRTUAL06],Y
    case 0xC2535C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1644 REP #PROC_FLAGS::ACCUM8
    case 0xC2535E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    case 0xC25360: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    // Overlapping static entry reached from 0xC25360.
    case 0xC25362: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1646 BEQ @ACTION_PATTERN_1
    case 0xC25363: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1647 CMP #1
    case 0xC25365: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1647 CMP #1
    // Overlapping static entry reached from 0xC25365.
    case 0xC25367: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1648 BEQ @ACTION_PATTERN_2
    case 0xC25368: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1649 CMP #2
    case 0xC2536A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1649 CMP #2
    // Overlapping static entry reached from 0xC2536A.
    case 0xC2536C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1650 BEQ @ACTION_PATTERN_3
    case 0xC2536D: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1651 CMP #3
    case 0xC2536F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1651 CMP #3
    // Overlapping static entry reached from 0xC2536F.
    case 0xC25371: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1652 BEQ @ACTION_PATTERN_4
    case 0xC25372: {
        Instruction step(cpu, 0xF0, 0x000072u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1653 JMP @UNKNOWN125
    case 0xC25374: {
        Instruction step(cpu, 0x4C, 0x005419u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1655 JSL RAND
    case 0xC25377: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    case 0xC2537B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    // Overlapping static entry reached from 0xC2537B.
    case 0xC2537D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1657 STA @VIRTUAL04
    case 0xC2537E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1658 STA @LOCAL08
    case 0xC25380: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1659 JMP @UNKNOWN125
    case 0xC25382: {
        Instruction step(cpu, 0x4C, 0x005419u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1661 JSL RAND
    case 0xC25385: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    case 0xC25389: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    // Overlapping static entry reached from 0xC25389.
    case 0xC2538B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1663 BEQ @ACTION_PATTERN_2_4TH
    case 0xC2538C: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1664 CMP #1
    case 0xC2538E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1664 CMP #1
    // Overlapping static entry reached from 0xC2538E.
    case 0xC25390: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1665 BEQ @ACTION_PATTERN_2_3RD
    case 0xC25391: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1666 CMP #2
    case 0xC25393: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1666 CMP #2
    // Overlapping static entry reached from 0xC25393.
    case 0xC25395: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1667 BEQ @ACTION_PATTERN_2_2ND
    case 0xC25396: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1668 CMP #3
    case 0xC25398: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1668 CMP #3
    // Overlapping static entry reached from 0xC25398.
    case 0xC2539A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1669 BEQ @ACTION_PATTERN_2_2ND
    case 0xC2539B: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1670 BRA @ACTION_PATTERN_2_1ST
    case 0xC2539D: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1672 LDA #3
    case 0xC2539F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1672 LDA #3
    // Overlapping static entry reached from 0xC2539F.
    case 0xC253A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1673 STA @VIRTUAL04
    case 0xC253A2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1674 STA @LOCAL08
    case 0xC253A4: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1675 BRA @UNKNOWN125
    case 0xC253A6: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1677 LDA #2
    case 0xC253A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1677 LDA #2
    // Overlapping static entry reached from 0xC253A8.
    case 0xC253AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1678 STA @VIRTUAL04
    case 0xC253AB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1679 STA @LOCAL08
    case 0xC253AD: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1680 BRA @UNKNOWN125
    case 0xC253AF: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1682 LDA #1
    case 0xC253B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1682 LDA #1
    // Overlapping static entry reached from 0xC253B1.
    case 0xC253B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1683 STA @VIRTUAL04
    case 0xC253B4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1684 STA @LOCAL08
    case 0xC253B6: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1685 BRA @UNKNOWN125
    case 0xC253B8: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1687 LDA #0
    case 0xC253BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1687 LDA #0
    // Overlapping static entry reached from 0xC253BA.
    case 0xC253BC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1688 STA @VIRTUAL04
    case 0xC253BD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1689 STA @LOCAL08
    case 0xC253BF: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1690 BRA @UNKNOWN125
    case 0xC253C1: {
        Instruction step(cpu, 0x80, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1695 LDA @VIRTUAL02
    case 0xC253C3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1697 CLC
    case 0xC253C5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    case 0xC253C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC253C6.
    case 0xC253C8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1699 TAX
    case 0xC253C9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1700 SEP #PROC_FLAGS::ACCUM8
    case 0xC253CA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1701 LDA __BSS_START__,X
    case 0xC253CC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1702 STA @LOCAL02
    case 0xC253CF: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1703 REP #PROC_FLAGS::ACCUM8
    case 0xC253D1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    case 0xC253D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    // Overlapping static entry reached from 0xC253D3.
    case 0xC253D5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1705 STA @VIRTUAL04
    case 0xC253D6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1706 STA @LOCAL08
    case 0xC253D8: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1707 SEP #PROC_FLAGS::ACCUM8
    case 0xC253DA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1708 LDA @LOCAL02
    case 0xC253DC: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1709 INC
    case 0xC253DE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1710 AND #$0003
    case 0xC253DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x009D03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    case 0xC253E1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC253DF.
    case 0xC253E2: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1712 BRA @UNKNOWN125
    case 0xC253E4: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1718 LDA @VIRTUAL02
    case 0xC253E6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1720 CLC
    case 0xC253E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    case 0xC253E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC253E9.
    case 0xC253EB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1722 TAX
    case 0xC253EC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1723 STX @LOCAL10
    case 0xC253ED: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1724 LDA __BSS_START__,X
    case 0xC253EF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    case 0xC253F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    // Overlapping static entry reached from 0xC253F2.
    case 0xC253F4: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1726 ASL
    case 0xC253F5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1730 STA @LOCAL0F
    case 0xC253F6: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1732 JSL RAND
    case 0xC253F8: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1736 STA @VIRTUAL04
    case 0xC253FC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    case 0xC253FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    // Overlapping static entry reached from 0xC253FE.
    case 0xC25400: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1739 STA @VIRTUAL02
    case 0xC25401: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1743 LDA @LOCAL0F
    case 0xC25403: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1745 CLC
    case 0xC25405: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1746 ADC @VIRTUAL02
    case 0xC25406: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1747 STA @VIRTUAL04
    case 0xC25408: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1748 STA @LOCAL08
    case 0xC2540A: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1749 LDX @LOCAL10
    case 0xC2540C: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1750 SEP #PROC_FLAGS::ACCUM8
    case 0xC2540E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1751 LDA __BSS_START__,X
    case 0xC25410: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1752 INC
    case 0xC25413: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1753 AND #$0001
    case 0xC25414: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    case 0xC25416: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC25414.
    case 0xC25417: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1756 REP #PROC_FLAGS::ACCUM8
    case 0xC25419: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1757 LDA @LOCAL04
    case 0xC2541B: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1759 STA @VIRTUAL02
    case 0xC2541D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1761 INC
    case 0xC2541F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1762 INC
    case 0xC25420: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1763 INC
    case 0xC25421: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1764 INC
    case 0xC25422: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1768 STA @LOCAL0F
    case 0xC25423: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1770 TAX
    case 0xC25425: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1771 LDA @LOCAL08
    case 0xC25426: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1772 STA @VIRTUAL04
    case 0xC25428: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1773 ASL
    case 0xC2542A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1774 CLC
    case 0xC2542B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    case 0xC2542C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000046u : 0x000046u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    // Overlapping static entry reached from 0xC2542C.
    case 0xC2542E: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2542F: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25431: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25433: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25435: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1777 CLC
    case 0xC25437: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1778 ADC @VIRTUAL0A
    case 0xC25438: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1779 STA @VIRTUAL0A
    case 0xC2543A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1780 LDA [@VIRTUAL0A]
    case 0xC2543C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1781 STA __BSS_START__,X
    case 0xC2543E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1785 LDA @VIRTUAL02
    case 0xC25441: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1787 CLC
    case 0xC25443: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1788 ADC #8
    case 0xC25444: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1788 ADC #8
    // Overlapping static entry reached from 0xC25444.
    case 0xC25446: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1789 TAX
    case 0xC25447: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1790 STX @LOCAL10
    case 0xC25448: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1791 LDA @VIRTUAL04
    case 0xC2544A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1792 CLC
    case 0xC2544C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    case 0xC2544D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    // Overlapping static entry reached from 0xC2544D.
    case 0xC2544F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1794 CLC
    case 0xC25450: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1795 ADC @VIRTUAL06
    case 0xC25451: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1796 STA @VIRTUAL06
    case 0xC25453: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1797 SEP #PROC_FLAGS::ACCUM8
    case 0xC25455: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1798 LDA [@VIRTUAL06]
    case 0xC25457: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1799 STA @VIRTUAL00
    case 0xC25459: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1800 STA __BSS_START__,X
    case 0xC2545B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1801 REP #PROC_FLAGS::ACCUM8
    case 0xC2545E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1805 LDA @LOCAL0F
    case 0xC25460: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1807 TAX
    case 0xC25462: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1808 LDA __BSS_START__,X
    case 0xC25463: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    case 0xC25466: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000F5u : 0x0000F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    // Overlapping static entry reached from 0xC25466.
    case 0xC25468: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1810 BNE @UNKNOWN127
    case 0xC25469: {
        Instruction step(cpu, 0xD0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1815 LDX @VIRTUAL02
    case 0xC2546B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1816 LDA a:battler::ally_or_enemy,X
    case 0xC2546D: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    case 0xC25470: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    // Overlapping static entry reached from 0xC25470.
    case 0xC25472: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1819 BNE @UNKNOWN126
    case 0xC25473: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1823 LDX @VIRTUAL02
    case 0xC25475: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1824 LDA a:battler::id,X
    case 0xC25477: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    case 0xC2547A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2547A.
    case 0xC2547C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1827 BNE @UNKNOWN126
    case 0xC2547D: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1828 LDA @VIRTUAL00
    case 0xC2547F: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    case 0xC25481: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    // Overlapping static entry reached from 0xC25481.
    case 0xC25483: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1830 STA MIRROR_ENEMY
    case 0xC25484: {
        Instruction step(cpu, 0x8D, 0x00AA12u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1831 JMP @UNKNOWN114
    case 0xC25487: {
        Instruction step(cpu, 0x4C, 0x00530Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1837 LDX @VIRTUAL02
    case 0xC2548A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1838 LDA a:battler::current_action_argument,X
    case 0xC2548C: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    case 0xC2548F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    // Overlapping static entry reached from 0xC2548F.
    case 0xC25491: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1844 LDX @VIRTUAL02
    case 0xC25492: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1845 STA a:battler::id,X
    case 0xC25494: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1847 JMP @UNKNOWN114
    case 0xC25497: {
        Instruction step(cpu, 0x4C, 0x00530Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    case 0xC2549A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC2549A.
    case 0xC2549C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1850 BNE @UNKNOWN128
    case 0xC2549D: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1851 JSL SELECT_STEALABLE_ITEM
    case 0xC2549F: {
        Instruction step(cpu, 0x22, 0xC24316u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1852 SEP #PROC_FLAGS::ACCUM8
    case 0xC254A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1853 LDX @LOCAL10
    case 0xC254A5: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1854 STA __BSS_START__,X
    case 0xC254A7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1858 LDX @VIRTUAL02
    case 0xC254AA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1860 REP #PROC_FLAGS::ACCUM8
    case 0xC254AC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1861 STZ a:battler::initiative,X
    case 0xC254AE: {
        Instruction step(cpu, 0x9E, 0x000046u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1867 LDX @VIRTUAL02
    case 0xC254B1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1868 LDA a:battler::current_action,X
    case 0xC254B3: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    case 0xC254B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000067u : 0x000067u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    // Overlapping static entry reached from 0xC254B6.
    case 0xC254B8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1871 BNE @NOT_DEFENDING
    case 0xC254B9: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1872 SEP #PROC_FLAGS::ACCUM8
    case 0xC254BB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1873 LDA #1
    case 0xC254BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1878 LDX @VIRTUAL02
    case 0xC254BF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1878 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC254BD.
    case 0xC254C0: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1879 STA a:battler::guarding,X
    case 0xC254C1: {
        Instruction step(cpu, 0x9D, 0x000024u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1881 BRA @UNKNOWN130
    case 0xC254C4: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1886 LDX @VIRTUAL02
    case 0xC254C6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1888 SEP #PROC_FLAGS::ACCUM8
    case 0xC254C8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1889 STZ a:battler::guarding,X
    case 0xC254CA: {
        Instruction step(cpu, 0x9E, 0x000024u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1891 REP #PROC_FLAGS::ACCUM8
    case 0xC254CD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1895 LDA @VIRTUAL02
    case 0xC254CF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1897 JSL CHOOSE_TARGET
    case 0xC254D1: {
        Instruction step(cpu, 0x22, 0xC24477u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1902 LDA @VIRTUAL02
    case 0xC254D5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1904 CLC
    case 0xC254D7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    case 0xC254D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC254D8.
    case 0xC254DA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1907 STA @VIRTUAL02
    case 0xC254DB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1909 STA @LOCAL04
    case 0xC254DD: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1915 LDY @LOCAL07
    case 0xC254DF: {
        Instruction step(cpu, 0xA4, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1916 INY
    case 0xC254E1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1917 STY @LOCAL07
    case 0xC254E2: {
        Instruction step(cpu, 0x84, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    case 0xC254E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC254E4.
    case 0xC254E6: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC254E7: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC254E9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC254EB: {
        Instruction step(cpu, 0x4C, 0x00529Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC254EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC254EE.
    case 0xC254F0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC254F1: {
        Instruction step(cpu, 0x22, 0xC1DD47u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1926 LDA @LOCAL06
    case 0xC254F5: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC254F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC254F7.
    case 0xC254F9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1929 BNE @UNKNOWN134
    case 0xC254FA: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC254FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F7u : 0x0078F7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC254FC.
    case 0xC254FE: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC254FF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25501: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC25501.
    case 0xC25503: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25504: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25506: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1935 LDA @LOCAL0B
    case 0xC2550A: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2550C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2550E: {
        Instruction step(cpu, 0x4C, 0x005614u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC25511: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25511.
    case 0xC25513: {
        Instruction step(cpu, 0x9F, 0x642F84u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1942 STY @LOCAL0F
    case 0xC25514: {
        Instruction step(cpu, 0x84, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    case 0xC25516: {
        Instruction step(cpu, 0x64, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    // Overlapping static entry reached from 0xC25513.
    case 0xC25517: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1945 LDA #0
    case 0xC25518: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1945 LDA #0
    // Overlapping static entry reached from 0xC25518.
    case 0xC2551A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1946 STA @VIRTUAL04
    case 0xC2551B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1947 STA @LOCAL08
    case 0xC2551D: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1948 STA @VIRTUAL02
    case 0xC2551F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1949 JMP @UNKNOWN140
    case 0xC25521: {
        Instruction step(cpu, 0x4C, 0x0055ACu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1951 LDA a:battler::consciousness,Y
    case 0xC25524: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    case 0xC25527: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    // Overlapping static entry reached from 0xC25527.
    case 0xC25529: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1953 BEQ @UNKNOWN139
    case 0xC2552A: {
        Instruction step(cpu, 0xF0, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1954 LDA a:battler::npc_id,Y
    case 0xC2552C: {
        Instruction step(cpu, 0xB9, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    case 0xC2552F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    // Overlapping static entry reached from 0xC2552F.
    case 0xC25531: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1956 BNE @UNKNOWN139
    case 0xC25532: {
        Instruction step(cpu, 0xD0, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1957 LDA a:battler::ally_or_enemy,Y
    case 0xC25534: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    case 0xC25537: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    // Overlapping static entry reached from 0xC25537.
    case 0xC25539: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1959 CMP #1
    case 0xC2553A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1959 CMP #1
    // Overlapping static entry reached from 0xC2553A.
    case 0xC2553C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1960 BNE @UNKNOWN138
    case 0xC2553D: {
        Instruction step(cpu, 0xD0, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1961 LDA a:battler::id,Y
    case 0xC2553F: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    case 0xC25542: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC25542.
    case 0xC25544: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1963 JSL MULT168
    case 0xC25545: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1964 CLC
    case 0xC25549: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    case 0xC2554A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000056u : 0x000056u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC2554A.
    case 0xC2554C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1966 TAX
    case 0xC2554D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1967 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2554E: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    case 0xC25552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    // Overlapping static entry reached from 0xC25552.
    case 0xC25554: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25555: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25557: {
        Instruction step(cpu, 0x4C, 0x005604u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1973 LDY @LOCAL0F
    case 0xC2555A: {
        Instruction step(cpu, 0xA4, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1975 LDA a:battler::afflictions,Y
    case 0xC2555C: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    case 0xC2555F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    // Overlapping static entry reached from 0xC2555F.
    case 0xC25561: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1977 TAX
    case 0xC25562: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1978 CPX #1
    case 0xC25563: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1978 CPX #1
    // Overlapping static entry reached from 0xC25563.
    case 0xC25565: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1979 BEQ @UNKNOWN139
    case 0xC25566: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1980 CPX #2
    case 0xC25568: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1980 CPX #2
    // Overlapping static entry reached from 0xC25568.
    case 0xC2556A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1981 BEQ @UNKNOWN139
    case 0xC2556B: {
        Instruction step(cpu, 0xF0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1982 CPX #3
    case 0xC2556D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1982 CPX #3
    // Overlapping static entry reached from 0xC2556D.
    case 0xC2556F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1983 BEQ @UNKNOWN139
    case 0xC25570: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1984 LDA a:battler::afflictions+2,Y
    case 0xC25572: {
        Instruction step(cpu, 0xB9, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    case 0xC25575: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    // Overlapping static entry reached from 0xC25575.
    case 0xC25577: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1986 TAX
    case 0xC25578: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1987 CPX #1
    case 0xC25579: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1987 CPX #1
    // Overlapping static entry reached from 0xC25579.
    case 0xC2557B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1988 BEQ @UNKNOWN139
    case 0xC2557C: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1989 CPX #3
    case 0xC2557E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1989 CPX #3
    // Overlapping static entry reached from 0xC2557E.
    case 0xC25580: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1990 BEQ @UNKNOWN139
    case 0xC25581: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1991 CPX #4
    case 0xC25583: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1991 CPX #4
    // Overlapping static entry reached from 0xC25583.
    case 0xC25585: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1992 BEQ @UNKNOWN139
    case 0xC25586: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1993 LDA a:battler::speed,Y
    case 0xC25588: {
        Instruction step(cpu, 0xB9, 0x00002Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1994 CMP @VIRTUAL04
    case 0xC2558B: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC2558D: {
        Instruction step(cpu, 0x90, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC2558F: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1996 STA @VIRTUAL04
    case 0xC25591: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1997 STA @LOCAL08
    case 0xC25593: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:1998 BRA @UNKNOWN139
    case 0xC25595: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2000 LDA a:battler::speed,Y
    case 0xC25597: {
        Instruction step(cpu, 0xB9, 0x00002Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2001 CMP @LOCAL05
    case 0xC2559A: {
        Instruction step(cpu, 0xC5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC2559C: {
        Instruction step(cpu, 0x90, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC2559E: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2003 STA @LOCAL05
    case 0xC255A0: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2005 TYA
    case 0xC255A2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2006 CLC
    case 0xC255A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    case 0xC255A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC255A4.
    case 0xC255A6: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2008 TAY
    case 0xC255A7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2012 STY @LOCAL0F
    case 0xC255A8: {
        Instruction step(cpu, 0x84, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2014 INC @VIRTUAL02
    case 0xC255AA: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2016 LDA @VIRTUAL02
    case 0xC255AC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    case 0xC255AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC255AE.
    case 0xC255B0: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC255B1: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC255B3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC255B5: {
        Instruction step(cpu, 0x4C, 0x005524u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2019 LDA @VIRTUAL04
    case 0xC255B8: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2020 BEQ @UNKNOWN142
    case 0xC255BA: {
        Instruction step(cpu, 0xF0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2024 LDA @LOCAL06
    case 0xC255BC: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2026 CMP #4
    case 0xC255BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2026 CMP #4
    // Overlapping static entry reached from 0xC255BE.
    case 0xC255C0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2027 BEQ @UNKNOWN142
    case 0xC255C1: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2031 LDA @LOCAL0A
    case 0xC255C3: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2034 CLC
    case 0xC255CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2035 ADC @LOCAL05
    case 0xC255CD: {
        Instruction step(cpu, 0x65, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2036 TAX
    case 0xC255CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2040 STX @LOCAL0F
    case 0xC255D0: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2042 LDA @LOCAL08
    case 0xC255D2: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2043 STA @VIRTUAL04
    case 0xC255D4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2044 TXA
    case 0xC255D6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2045 CMP @VIRTUAL04
    case 0xC255D7: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2046 BCC @UNKNOWN143
    case 0xC255D9: {
        Instruction step(cpu, 0x90, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2047 LDA #100
    case 0xC255DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2047 LDA #100
    // Overlapping static entry reached from 0xC255DB.
    case 0xC255DD: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2048 JSR RAND_LIMIT
    case 0xC255DE: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2053 STA @LOCAL0B
    case 0xC255E1: {
        Instruction step(cpu, 0x85, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2054 LDX @LOCAL0F
    case 0xC255E3: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2056 TXA
    case 0xC255E5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2057 SEC
    case 0xC255E6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2058 SBC @VIRTUAL04
    case 0xC255E7: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2059 STA @VIRTUAL02
    case 0xC255E9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2063 LDA @LOCAL0B
    case 0xC255EB: {
        Instruction step(cpu, 0xA5, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2065 CMP @VIRTUAL02
    case 0xC255ED: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2066 BCS @UNKNOWN143
    case 0xC255EF: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x0084F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC255F1.
    case 0xC255F3: {
        Instruction step(cpu, 0x84, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC255F3.
    case 0xC255F5: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC255F6.
    case 0xC255F8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255FB: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2069 STZ @LOCAL03
    case 0xC255FF: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2070 JMP @UNKNOWN237
    case 0xC25601: {
        Instruction step(cpu, 0x4C, 0x006093u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2075 STZ @LOCAL0B
    case 0xC25604: {
        Instruction step(cpu, 0x64, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25606: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008511u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC25606.
    case 0xC25608: {
        Instruction step(cpu, 0x85, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25609: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC25608.
    case 0xC2560A: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2560B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC2560B.
    case 0xC2560D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2560E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25610: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2082 STZ @LOCAL06
    case 0xC25614: {
        Instruction step(cpu, 0x64, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2084 JMP @UNKNOWN234
    case 0xC25616: {
        Instruction step(cpu, 0x4C, 0x006081u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2086 JSL CHECK_DEAD_PLAYERS
    case 0xC25619: {
        Instruction step(cpu, 0x22, 0xC2BB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2087 LDA #0
    case 0xC2561D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2087 LDA #0
    // Overlapping static entry reached from 0xC2561D.
    case 0xC2561F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2088 JSL COUNT_CHARS
    case 0xC25620: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2089 CMP #0
    case 0xC25624: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2089 CMP #0
    // Overlapping static entry reached from 0xC25624.
    case 0xC25626: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25627: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25629: {
        Instruction step(cpu, 0x4C, 0x005EF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2091 LDA #1
    case 0xC2562C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2091 LDA #1
    // Overlapping static entry reached from 0xC2562C.
    case 0xC2562E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2092 JSL COUNT_CHARS
    case 0xC2562F: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2093 CMP #0
    case 0xC25633: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2093 CMP #0
    // Overlapping static entry reached from 0xC25633.
    case 0xC25635: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25636: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25638: {
        Instruction step(cpu, 0x4C, 0x005EF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    case 0xC2563B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    // Overlapping static entry reached from 0xC2563B.
    case 0xC2563D: {
        Instruction step(cpu, 0xFF, 0x850485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2096 STA @VIRTUAL04
    case 0xC2563E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    case 0xC25640: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    // Overlapping static entry reached from 0xC2563D.
    case 0xC25641: {
        Instruction step(cpu, 0x21, 0x0000A2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2103 LDX #0
    case 0xC25642: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2103 LDX #0
    // Overlapping static entry reached from 0xC25641.
    case 0xC25643: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2103 LDX #0
    // Overlapping static entry reached from 0xC25642.
    case 0xC25644: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2104 TXA
    case 0xC25645: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2106 STA @LOCAL10
    case 0xC25646: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2107 BRA @UNKNOWN150
    case 0xC25648: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    case 0xC2564A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2564A.
    case 0xC2564C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2110 JSL MULT168
    case 0xC2564D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2110 JSL MULT168
    // Overlapping static entry reached from 0xC256A5.
    case 0xC25650: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A8u : 0x00B9A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2125 TAY
    case 0xC25651: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2126 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC25652: {
        Instruction step(cpu, 0xB9, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2126 LDA BATTLERS_TABLE+battler::consciousness,Y
    // Overlapping static entry reached from 0xC25650.
    case 0xC25653: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2126 LDA BATTLERS_TABLE+battler::consciousness,Y
    // Overlapping static entry reached from 0xC25653.
    case 0xC25654: {
        Instruction step(cpu, 0x9F, 0x00FF29u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2127 AND #$00FF
    case 0xC25655: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2127 AND #$00FF
    // Overlapping static entry reached from 0xC25655.
    case 0xC25657: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2128 BEQ @UNKNOWN149
    case 0xC25658: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2129 LDA BATTLERS_TABLE+13,Y
    case 0xC2565A: {
        Instruction step(cpu, 0xB9, 0x009FB9u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2130 AND #$00FF
    case 0xC2565D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2130 AND #$00FF
    // Overlapping static entry reached from 0xC2565D.
    case 0xC2565F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2131 BNE @UNKNOWN149
    case 0xC25660: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2132 LDA BATTLERS_TABLE+70,Y
    case 0xC25662: {
        Instruction step(cpu, 0xB9, 0x009FF2u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2133 TAY
    case 0xC25665: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2134 STX @VIRTUAL02
    case 0xC25666: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2135 TYA
    case 0xC25668: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2137 CMP @VIRTUAL02
    case 0xC25669: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2138 BCC @UNKNOWN149
    case 0xC2566B: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2139 LDA @LOCAL10
    case 0xC2566D: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2140 STA @VIRTUAL04
    case 0xC2566F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2141 STA @LOCAL08
    case 0xC25671: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2146 TYX
    case 0xC25673: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2149 LDA @LOCAL10
    case 0xC25674: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2150 INC
    case 0xC25676: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2151 STA @LOCAL10
    case 0xC25677: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    case 0xC25679: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25679.
    case 0xC2567B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2154 BCC @UNKNOWN148
    case 0xC2567C: {
        Instruction step(cpu, 0x90, 0x0000CCu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2155 LDA @VIRTUAL04
    case 0xC2567E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    case 0xC25680: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    // Overlapping static entry reached from 0xC25680.
    case 0xC25682: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC25683: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC25685: {
        Instruction step(cpu, 0x4C, 0x006088u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    // Overlapping static entry reached from 0xC25682.
    case 0xC25686: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    // Overlapping static entry reached from 0xC25686.
    case 0xC25687: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2158 JSL REDIRECT_C10FA3
    case 0xC25688: {
        Instruction step(cpu, 0x22, 0xC1DD53u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2159 LDA @VIRTUAL04
    case 0xC2568C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    case 0xC2568E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2568E.
    case 0xC25690: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2161 JSL MULT168
    case 0xC25691: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2162 CLC
    case 0xC25695: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC25696: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25696.
    case 0xC25698: {
        Instruction step(cpu, 0x9F, 0x708EAAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2164 TAX
    case 0xC25699: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2165 STX CURRENT_ATTACKER
    case 0xC2569A: {
        Instruction step(cpu, 0x8E, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2165 STX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25698.
    case 0xC2569C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2166 SEP #PROC_FLAGS::ACCUM8
    case 0xC2569D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2166 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2569C.
    case 0xC2569E: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2167 LDA #1
    case 0xC2569F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    case 0xC256A1: {
        Instruction step(cpu, 0x9D, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    // Overlapping static entry reached from 0xC2569F.
    case 0xC256A2: {
        Instruction step(cpu, 0x0D, 0x00AE00u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    case 0xC256A4: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC256A2.
    case 0xC256A5: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2170 REP #PROC_FLAGS::ACCUM8
    case 0xC256A7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2171 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC256A9: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    case 0xC256AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    // Overlapping static entry reached from 0xC256AC.
    case 0xC256AE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2173 TAX
    case 0xC256AF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    case 0xC256B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC256B0.
    case 0xC256B2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC256B3: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC256B5: {
        Instruction step(cpu, 0x4C, 0x006081u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    case 0xC256B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC256B8.
    case 0xC256BA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC256BB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC256BD: {
        Instruction step(cpu, 0x4C, 0x006081u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    case 0xC256C0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC256C0.
    case 0xC256C2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2179 BEQ @UNKNOWN154
    case 0xC256C3: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2180 LDX CURRENT_ATTACKER
    case 0xC256C5: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2181 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC256C8: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    case 0xC256CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    // Overlapping static entry reached from 0xC256CB.
    case 0xC256CD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    case 0xC256CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC256CE.
    case 0xC256D0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC256D1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC256D3: {
        Instruction step(cpu, 0x4C, 0x005765u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2186 LDX CURRENT_ATTACKER
    case 0xC256D6: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2187 INX
    case 0xC256D9: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2188 INX
    case 0xC256DA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2189 INX
    case 0xC256DB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2190 INX
    case 0xC256DC: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2194 STX @LOCAL0F
    case 0xC256DD: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2196 LDA __BSS_START__,X
    case 0xC256DF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2197 STA @LOCAL10
    case 0xC256E2: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2199 TAX
    case 0xC256EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2200 INX
    case 0xC256EC: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2201 INX
    case 0xC256ED: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2202 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC256EE: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    case 0xC256F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    // Overlapping static entry reached from 0xC256F2.
    case 0xC256F4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    case 0xC256F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC256F5.
    case 0xC256F7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2205 BEQ @UNKNOWN157
    case 0xC256F8: {
        Instruction step(cpu, 0xF0, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2206 LDA @LOCAL10
    case 0xC256FA: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    case 0xC256FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC256FC.
    case 0xC256FE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2208 BEQ @UNKNOWN157
    case 0xC256FF: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC25701: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000123u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC25701.
    case 0xC25703: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    case 0xC25704: {
        Instruction step(cpu, 0xF0, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25703.
    case 0xC25705: {
        Instruction step(cpu, 0x5F, 0x0124C9u, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC25706: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000024u : 0x000124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC25706.
    case 0xC25708: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    case 0xC25709: {
        Instruction step(cpu, 0xF0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25708.
    case 0xC2570A: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC2570B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000025u : 0x000125u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC2570B.
    case 0xC2570D: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    case 0xC2570E: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2570D.
    case 0xC2570F: {
        Instruction step(cpu, 0x55, 0x0000C9u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC25710: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000026u : 0x000126u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC2570F.
    case 0xC25711: {
        Instruction step(cpu, 0x26, 0x000001u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC25710.
    case 0xC25712: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    case 0xC25713: {
        Instruction step(cpu, 0xF0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25712.
    case 0xC25714: {
        Instruction step(cpu, 0x50, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC25715: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000027u : 0x000127u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC25714.
    case 0xC25716: {
        Instruction step(cpu, 0x27, 0x000001u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC25715.
    case 0xC25717: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    case 0xC25718: {
        Instruction step(cpu, 0xF0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25717.
    case 0xC25719: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC2571A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000028u : 0x000128u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC2571A.
    case 0xC2571C: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    case 0xC2571D: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2571C.
    case 0xC2571E: {
        Instruction step(cpu, 0x46, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC2571F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000029u : 0x000129u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC2571E.
    case 0xC25720: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x00F001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC2571F.
    case 0xC25721: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    case 0xC25722: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25721.
    case 0xC25723: {
        Instruction step(cpu, 0x41, 0x0000C9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC25724: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Au : 0x00012Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25723.
    case 0xC25725: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25724.
    case 0xC25726: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    case 0xC25727: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25726.
    case 0xC25728: {
        Instruction step(cpu, 0x3C, 0x002BC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC25729: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Bu : 0x00012Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC25729.
    case 0xC2572B: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    case 0xC2572C: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2572B.
    case 0xC2572D: {
        Instruction step(cpu, 0x37, 0x0000C9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    case 0xC2572E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC2572D.
    case 0xC2572F: {
        Instruction step(cpu, 0x06, 0x000000u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC2572E.
    case 0xC25730: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2228 BEQ @UNKNOWN157
    case 0xC25731: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    case 0xC25733: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000118u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC25733.
    case 0xC25735: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    case 0xC25736: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25735.
    case 0xC25737: {
        Instruction step(cpu, 0x2D, 0x0000C9u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    case 0xC25738: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC25738.
    case 0xC2573A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2232 BEQ @UNKNOWN157
    case 0xC2573B: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2233 LDX CURRENT_ATTACKER
    case 0xC2573D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2234 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25740: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    case 0xC25743: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    // Overlapping static entry reached from 0xC25743.
    case 0xC25745: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    case 0xC25746: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC25746.
    case 0xC25748: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2237 BNE @UNKNOWN155
    case 0xC25749: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    case 0xC2574B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FCu : 0x0000FCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    // Overlapping static entry reached from 0xC2574B.
    case 0xC2574D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2242 LDX @LOCAL0F
    case 0xC2574E: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2244 STA __BSS_START__,X ;battler::current_action
    case 0xC25750: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2245 BRA @UNKNOWN156
    case 0xC25753: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    case 0xC25755: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x0000FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    // Overlapping static entry reached from 0xC25755.
    case 0xC25757: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2251 LDX @LOCAL0F
    case 0xC25758: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2253 STA __BSS_START__,X ;battler::current_action
    case 0xC2575A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2255 LDX CURRENT_ATTACKER
    case 0xC2575D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2256 SEP #PROC_FLAGS::ACCUM8
    case 0xC25760: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2257 STZ a:battler::action_item_slot,X
    case 0xC25762: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2259 LDX CURRENT_ATTACKER
    case 0xC25765: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2260 REP #PROC_FLAGS::ACCUM8
    case 0xC25768: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2261 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC2576A: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    case 0xC2576D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    // Overlapping static entry reached from 0xC2576D.
    case 0xC2576F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    case 0xC25770: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25770.
    case 0xC25772: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2264 BNE @UNKNOWN158
    case 0xC25773: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2265 LDX CURRENT_ATTACKER
    case 0xC25775: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2266 INX
    case 0xC25778: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2267 INX
    case 0xC25779: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2268 INX
    case 0xC2577A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2269 INX
    case 0xC2577B: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2270 LDA __BSS_START__,X ;battler::current_action
    case 0xC2577C: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2271 BEQ @UNKNOWN158
    case 0xC2577F: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    case 0xC25781: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0000FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    // Overlapping static entry reached from 0xC25781.
    case 0xC25783: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2273 STA __BSS_START__,X ;battler::current_action
    case 0xC25784: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2274 LDX CURRENT_ATTACKER
    case 0xC25787: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2275 SEP #PROC_FLAGS::ACCUM8
    case 0xC2578A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2276 STZ a:battler::action_item_slot,X
    case 0xC2578C: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2278 LDX CURRENT_ATTACKER
    case 0xC2578F: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2279 REP #PROC_FLAGS::ACCUM8
    case 0xC25792: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2280 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC25794: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    case 0xC25797: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    // Overlapping static entry reached from 0xC25797.
    case 0xC25799: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    case 0xC2579A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2579A.
    case 0xC2579C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2283 BNE @UNKNOWN159
    case 0xC2579D: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2284 LDX CURRENT_ATTACKER
    case 0xC2579F: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2285 INX
    case 0xC257A2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2286 INX
    case 0xC257A3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2287 INX
    case 0xC257A4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2288 INX
    case 0xC257A5: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2289 LDA __BSS_START__,X ;battler::current_action
    case 0xC257A6: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2290 BEQ @UNKNOWN159
    case 0xC257A9: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    case 0xC257AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    // Overlapping static entry reached from 0xC257AB.
    case 0xC257AD: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2292 STA __BSS_START__,X ;battler::current_action
    case 0xC257AE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2293 LDX CURRENT_ATTACKER
    case 0xC257B1: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2294 SEP #PROC_FLAGS::ACCUM8
    case 0xC257B4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2295 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC257B6: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2296 LDX CURRENT_ATTACKER
    case 0xC257B9: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2297 STZ a:battler::action_item_slot,X
    case 0xC257BC: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2299 LDX CURRENT_ATTACKER
    case 0xC257BF: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2300 REP #PROC_FLAGS::ACCUM8
    case 0xC257C2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2301 LDA a:battler::afflictions+STATUS_GROUP::CONCENTRATION,X
    case 0xC257C4: {
        Instruction step(cpu, 0xBD, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    case 0xC257C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    // Overlapping static entry reached from 0xC257C7.
    case 0xC257C9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2303 BEQ @UNKNOWN160
    case 0xC257CA: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2304 LDX CURRENT_ATTACKER
    case 0xC257CC: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2305 INX
    case 0xC257CF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2306 INX
    case 0xC257D0: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2307 INX
    case 0xC257D1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2308 INX
    case 0xC257D2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2312 STX @LOCAL0F
    case 0xC257D3: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2314 LDA __BSS_START__,X ;battler::current_action
    case 0xC257D5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2315 STA @LOCAL10
    case 0xC257D8: {
        Instruction step(cpu, 0x85, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2317 TAX
    case 0xC257E1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2318 INX
    case 0xC257E2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2319 INX
    case 0xC257E3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2320 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC257E4: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    case 0xC257E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    // Overlapping static entry reached from 0xC257E8.
    case 0xC257EA: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    case 0xC257EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC257EB.
    case 0xC257ED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2323 BNE @UNKNOWN160
    case 0xC257EE: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2324 LDA @LOCAL10
    case 0xC257F0: {
        Instruction step(cpu, 0xA5, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2325 BEQ @UNKNOWN160
    case 0xC257F2: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    case 0xC257F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    // Overlapping static entry reached from 0xC257F4.
    case 0xC257F6: {
        Instruction step(cpu, 0x01, 0x0000A6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2330 LDX @LOCAL0F
    case 0xC257F7: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2330 LDX @LOCAL0F
    // Overlapping static entry reached from 0xC257F6.
    case 0xC257F8: {
        Instruction step(cpu, 0x2F, 0x00009Du, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2332 STA __BSS_START__,X ;battler::current_action
    case 0xC257F9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2334 LDX CURRENT_ATTACKER
    case 0xC257FC: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2335 LDA a:battler::afflictions+STATUS_GROUP::HOMESICKNESS,X
    case 0xC257FF: {
        Instruction step(cpu, 0xBD, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    case 0xC25802: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    // Overlapping static entry reached from 0xC25802.
    case 0xC25804: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    case 0xC25805: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    // Overlapping static entry reached from 0xC25805.
    case 0xC25807: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2338 BNE @UNKNOWN161
    case 0xC25808: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2339 LDX CURRENT_ATTACKER
    case 0xC2580A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2340 LDA a:battler::current_action,X
    case 0xC2580D: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2341 BEQ @UNKNOWN161
    case 0xC25810: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2342 JSL RAND
    case 0xC25812: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    case 0xC25816: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    // Overlapping static entry reached from 0xC25816.
    case 0xC25818: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2344 BNE @UNKNOWN161
    case 0xC25819: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    case 0xC2581B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FBu : 0x0000FBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    // Overlapping static entry reached from 0xC2581B.
    case 0xC2581D: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2346 LDX CURRENT_ATTACKER
    case 0xC2581E: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2347 STA a:battler::current_action,X
    case 0xC25821: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2348 LDX CURRENT_ATTACKER
    case 0xC25824: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2349 SEP #PROC_FLAGS::ACCUM8
    case 0xC25827: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2349 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2587D.
    case 0xC25828: {
        Instruction step(cpu, 0x20, 0x00079Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2350 STZ a:battler::action_item_slot,X
    case 0xC25829: {
        Instruction step(cpu, 0x9E, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2350 STZ a:battler::action_item_slot,X
    // Overlapping static entry reached from 0xC25828.
    case 0xC2582B: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2352 REP #PROC_FLAGS::ACCUM8
    case 0xC2582C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC2582E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2582E.
    case 0xC25830: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25831: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25833: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25833.
    case 0xC25835: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25836: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2354 LDX CURRENT_ATTACKER
    case 0xC25838: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2355 LDA a:battler::current_action,X
    case 0xC2583B: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2583E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25840: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25841: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25843: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25844: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2360 STA @LOCAL0F
    case 0xC25845: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25847: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25849: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2584B: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2584D: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2363 CLC
    case 0xC2584F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2364 ADC @VIRTUAL0A
    case 0xC25850: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2365 STA @VIRTUAL0A
    case 0xC25852: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2366 LDA [@VIRTUAL0A]
    case 0xC25854: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    case 0xC25856: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    // Overlapping static entry reached from 0xC25856.
    case 0xC25858: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2368 CMP #1
    case 0xC25859: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2368 CMP #1
    // Overlapping static entry reached from 0xC25859.
    case 0xC2585B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2369 BNE @UNKNOWN163
    case 0xC2585C: {
        Instruction step(cpu, 0xD0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2373 LDA @LOCAL0F
    case 0xC2585E: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2375 INC
    case 0xC25860: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2376 CLC
    case 0xC25861: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2377 ADC @VIRTUAL06
    case 0xC25862: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2378 STA @VIRTUAL06
    case 0xC25864: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2379 LDA [@VIRTUAL06]
    case 0xC25866: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    case 0xC25868: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    // Overlapping static entry reached from 0xC25868.
    case 0xC2586A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2381 BNE @UNKNOWN163
    case 0xC2586B: {
        Instruction step(cpu, 0xD0, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2382 LDX CURRENT_ATTACKER
    case 0xC2586D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2383 LDA a:battler::ally_or_enemy,X
    case 0xC25870: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    case 0xC25873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    // Overlapping static entry reached from 0xC25873.
    case 0xC25875: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2385 BNE @UNKNOWN162
    case 0xC25876: {
        Instruction step(cpu, 0xD0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2386 SEP #PROC_FLAGS::ACCUM8
    case 0xC25878: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2387 LDA #1
    case 0xC2587A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    case 0xC2587C: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2587A.
    case 0xC2587D: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2389 STA a:battler::action_targetting,X
    case 0xC2587F: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    case 0xC25882: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25882.
    case 0xC25884: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2391 REP #PROC_FLAGS::ACCUM8
    case 0xC25885: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2392 LDA CURRENT_ATTACKER
    case 0xC25887: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2393 SEC
    case 0xC2588A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC2588B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2588B.
    case 0xC2588D: {
        Instruction step(cpu, 0x9F, 0x915B22u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2588E: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC2588D.
    case 0xC25891: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2396 SEP #PROC_FLAGS::ACCUM8
    case 0xC25892: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2396 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC25891.
    case 0xC25893: {
        Instruction step(cpu, 0x20, 0x00AE1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2397 INC
    case 0xC25894: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2398 LDX CURRENT_ATTACKER
    case 0xC25895: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2398 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25893.
    case 0xC25896: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2399 STA a:battler::current_target,X
    case 0xC25898: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2400 BRA @UNKNOWN163
    case 0xC2589B: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2402 SEP #PROC_FLAGS::ACCUM8
    case 0xC2589D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2403 LDA #17
    case 0xC2589F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x00AE11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    case 0xC258A1: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2589F.
    case 0xC258A2: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2405 STA a:battler::action_targetting,X
    case 0xC258A4: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    case 0xC258A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC258A7.
    case 0xC258A9: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2407 REP #PROC_FLAGS::ACCUM8
    case 0xC258AA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2408 LDA CURRENT_ATTACKER
    case 0xC258AC: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2409 SEC
    case 0xC258AF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC258B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC258B0.
    case 0xC258B2: {
        Instruction step(cpu, 0x9F, 0x915B22u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC258B3: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC258B2.
    case 0xC258B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000AAu : 0x00ADAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2412 TAX
    case 0xC258B7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2413 LDA CURRENT_ATTACKER
    case 0xC258B8: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2413 LDA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC258B6.
    case 0xC258B9: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2414 JSL UNKNOWN_C4A228
    case 0xC258BB: {
        Instruction step(cpu, 0x22, 0xC4A228u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2416 LDX #0
    case 0xC258BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2416 LDX #0
    // Overlapping static entry reached from 0xC258BF.
    case 0xC258C1: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2420 STX @LOCAL0F
    case 0xC258C2: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2422 REP #PROC_FLAGS::ACCUM8
    case 0xC258C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2423 LDA CURRENT_ATTACKER
    case 0xC258C6: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2424 STA CURRENT_TARGET
    case 0xC258C9: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2425 TXA
    case 0xC258CC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2426 JSL FIX_ATTACKER_NAME
    case 0xC258CD: {
        Instruction step(cpu, 0x22, 0xC23BCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2427 JSL FIX_TARGET_NAME
    case 0xC258D1: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2428 LDX CURRENT_ATTACKER
    case 0xC258D5: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2429 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC258D8: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    case 0xC258DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    // Overlapping static entry reached from 0xC258DB.
    case 0xC258DD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    case 0xC258DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC258DE.
    case 0xC258E0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2432 BEQ @UNKNOWN164
    case 0xC258E1: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    case 0xC258E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC258E3.
    case 0xC258E5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2434 BEQ @UNKNOWN165
    case 0xC258E6: {
        Instruction step(cpu, 0xF0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    case 0xC258E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC258E8.
    case 0xC258EA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2436 BEQ @UNKNOWN166
    case 0xC258EB: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    case 0xC258ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC258ED.
    case 0xC258EF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2438 BEQ @UNKNOWN167
    case 0xC258F0: {
        Instruction step(cpu, 0xF0, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2439 JMP @UNKNOWN168
    case 0xC258F2: {
        Instruction step(cpu, 0x4C, 0x00598Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2441 LDA #20
    case 0xC258F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2441 LDA #20
    // Overlapping static entry reached from 0xC258F5.
    case 0xC258F7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2442 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC258F8: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2443 TAX
    case 0xC258FB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2447 STX @LOCAL0F
    case 0xC258FC: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC258FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007768u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC258FE.
    case 0xC25900: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25901: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25900.
    case 0xC25902: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25903: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25903.
    case 0xC25905: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25906: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2450 TXA
    case 0xC25908: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC25909: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC2590B: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2590D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2590F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25911: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25913: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2453 JSL DISPLAY_TEXT_WAIT
    case 0xC25915: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2454 BRA @UNKNOWN168
    case 0xC25919: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2456 LDA #20
    case 0xC2591B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2456 LDA #20
    // Overlapping static entry reached from 0xC2591B.
    case 0xC2591D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2457 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2591E: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2458 TAX
    case 0xC25921: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2462 STX @LOCAL0F
    case 0xC25922: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25924: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000087u : 0x007787u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25924.
    case 0xC25926: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25927: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25926.
    case 0xC25928: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25929: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25929.
    case 0xC2592B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC2592C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2465 TXA
    case 0xC2592E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC2592F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC25931: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25933: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25935: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25937: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25939: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2468 JSL DISPLAY_TEXT_WAIT
    case 0xC2593B: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2469 BRA @UNKNOWN168
    case 0xC2593F: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2471 LDA #4
    case 0xC25941: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2471 LDA #4
    // Overlapping static entry reached from 0xC25941.
    case 0xC25943: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2472 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC25944: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2473 TAX
    case 0xC25947: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2477 STX @LOCAL0F
    case 0xC25948: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2594A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B1u : 0x0077B1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2594A.
    case 0xC2594C: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2594D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2594C.
    case 0xC2594E: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2594F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2594F.
    case 0xC25951: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25952: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2480 TXA
    case 0xC25954: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC25955: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC25957: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25959: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2595B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2595D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2595F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2483 JSL DISPLAY_TEXT_WAIT
    case 0xC25961: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2484 BRA @UNKNOWN168
    case 0xC25965: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2486 LDA #4
    case 0xC25967: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2486 LDA #4
    // Overlapping static entry reached from 0xC25967.
    case 0xC25969: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2487 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2596A: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2488 TAX
    case 0xC2596D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2492 STX @LOCAL0F
    case 0xC2596E: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25970: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DBu : 0x0077DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25970.
    case 0xC25972: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25973: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25972.
    case 0xC25974: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25975: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25975.
    case 0xC25977: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25978: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2495 TXA
    case 0xC2597A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC2597B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC2597D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2597F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25981: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25983: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25985: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2498 JSL DISPLAY_TEXT_WAIT
    case 0xC25987: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2503 LDX @LOCAL0F
    case 0xC2598B: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2505 LDA CURRENT_ATTACKER
    case 0xC2598D: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2506 JSL LOSE_HP_STATUS
    case 0xC25990: {
        Instruction step(cpu, 0x22, 0xC2BCE6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2507 LDX CURRENT_ATTACKER
    case 0xC25994: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2508 LDA a:battler::hp,X
    case 0xC25997: {
        Instruction step(cpu, 0xBD, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2509 BNE @UNKNOWN171
    case 0xC2599A: {
        Instruction step(cpu, 0xD0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2510 LDA CURRENT_ATTACKER
    case 0xC2599C: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2511 JSL KO_TARGET
    case 0xC2599F: {
        Instruction step(cpu, 0x22, 0xC27550u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2512 LDA #0
    case 0xC259A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2512 LDA #0
    // Overlapping static entry reached from 0xC259A3.
    case 0xC259A5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2513 JSL COUNT_CHARS
    case 0xC259A6: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2514 CMP #0
    case 0xC259AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2514 CMP #0
    // Overlapping static entry reached from 0xC259AA.
    case 0xC259AC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC259AD: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC259AF: {
        Instruction step(cpu, 0x4C, 0x005EF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2516 LDA #1
    case 0xC259B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2516 LDA #1
    // Overlapping static entry reached from 0xC259B2.
    case 0xC259B4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2517 JSL COUNT_CHARS
    case 0xC259B5: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2518 CMP #0
    case 0xC259B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2518 CMP #0
    // Overlapping static entry reached from 0xC259B9.
    case 0xC259BB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC259BC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC259BE: {
        Instruction step(cpu, 0x4C, 0x006081u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2520 JMP @UNKNOWN225
    case 0xC259C1: {
        Instruction step(cpu, 0x4C, 0x005EF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2522 LDX CURRENT_ATTACKER
    case 0xC259C4: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2523 LDA a:battler::ally_or_enemy,X
    case 0xC259C7: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    case 0xC259CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    // Overlapping static entry reached from 0xC259CA.
    case 0xC259CC: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2525 CMP #1
    case 0xC259CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2525 CMP #1
    // Overlapping static entry reached from 0xC259CD.
    case 0xC259CF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2526 BNE @UNKNOWN172
    case 0xC259D0: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2527 LDA CURRENT_ATTACKER
    case 0xC259D2: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2528 JSL CHOOSE_TARGET
    case 0xC259D5: {
        Instruction step(cpu, 0x22, 0xC24477u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2529 LDX CURRENT_ATTACKER
    case 0xC259D9: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2530 LDA a:battler::current_action,X
    case 0xC259DC: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    case 0xC259DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC259DF.
    case 0xC259E1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2532 BNE @UNKNOWN172
    case 0xC259E2: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2533 JSL SELECT_STEALABLE_ITEM
    case 0xC259E4: {
        Instruction step(cpu, 0x22, 0xC24316u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2534 SEP #PROC_FLAGS::ACCUM8
    case 0xC259E8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2535 LDX CURRENT_ATTACKER
    case 0xC259EA: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2536 STA a:battler::current_action_argument,X
    case 0xC259ED: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2538 REP #PROC_FLAGS::ACCUM8
    case 0xC259F0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2539 LDA CURRENT_ATTACKER
    case 0xC259F2: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2540 JSL UNKNOWN_C24703
    case 0xC259F5: {
        Instruction step(cpu, 0x22, 0xC24703u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2541 LDX CURRENT_ATTACKER
    case 0xC259F9: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2542 LDA a:battler::ally_or_enemy,X
    case 0xC259FC: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    case 0xC259FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    // Overlapping static entry reached from 0xC259FF.
    case 0xC25A01: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2544 BNE @UNKNOWN174
    case 0xC25A02: {
        Instruction step(cpu, 0xD0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2545 LDX CURRENT_ATTACKER
    case 0xC25A04: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2546 LDA a:battler::current_action,X
    case 0xC25A07: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A10: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2548 TAX
    case 0xC25A11: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2549 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25A12: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    case 0xC25A16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    // Overlapping static entry reached from 0xC25A16.
    case 0xC25A18: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2551 BNE @UNKNOWN174
    case 0xC25A19: {
        Instruction step(cpu, 0xD0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2552 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25A1B: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25A1F.
    case 0xC25A21: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A22: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25A24.
    case 0xC25A26: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A27: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A29: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A2C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A2E: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A31: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2555 CMP @VIRTUAL0A+2
    case 0xC25A33: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2556 BNE @UNKNOWN173
    case 0xC25A35: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2557 LDA @VIRTUAL06
    case 0xC25A37: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2558 CMP @VIRTUAL0A
    case 0xC25A39: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2560 BNE @UNKNOWN174
    case 0xC25A3B: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2561 LDA CURRENT_ATTACKER
    case 0xC25A3D: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2562 JSL CHOOSE_TARGET
    case 0xC25A40: {
        Instruction step(cpu, 0x22, 0xC24477u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2563 LDA CURRENT_ATTACKER
    case 0xC25A44: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2564 JSL UNKNOWN_C24703
    case 0xC25A47: {
        Instruction step(cpu, 0x22, 0xC24703u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2565 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25A4B: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2567 LDY #0
    case 0xC25A4F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2567 LDY #0
    // Overlapping static entry reached from 0xC25A4F.
    case 0xC25A51: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2568 STY @LOCAL10
    case 0xC25A52: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2569 LDX CURRENT_ATTACKER
    case 0xC25A54: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2570 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC25A57: {
        Instruction step(cpu, 0xBD, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    case 0xC25A5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    // Overlapping static entry reached from 0xC25A5A.
    case 0xC25A5C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25A5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25A5D.
    case 0xC25A5F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2573 BNE @UNKNOWN175
    case 0xC25A60: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2574 LDA #100
    case 0xC25A62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2574 LDA #100
    // Overlapping static entry reached from 0xC25A62.
    case 0xC25A64: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2575 JSR RAND_LIMIT
    case 0xC25A65: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    case 0xC25A68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    // Overlapping static entry reached from 0xC25A68.
    case 0xC25A6A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2577 BCC @UNKNOWN176
    case 0xC25A6B: {
        Instruction step(cpu, 0x90, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2579 LDX CURRENT_ATTACKER
    case 0xC25A6D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2580 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25A70: {
        Instruction step(cpu, 0xBD, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    case 0xC25A73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    // Overlapping static entry reached from 0xC25A73.
    case 0xC25A75: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    case 0xC25A76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC25A76.
    case 0xC25A78: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2583 BNE @UNKNOWN179
    case 0xC25A79: {
        Instruction step(cpu, 0xD0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2585 LDX CURRENT_ATTACKER
    case 0xC25A7B: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2586 LDA a:battler::current_action,X
    case 0xC25A7E: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A81: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A83: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A84: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A86: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A87: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2588 TAX
    case 0xC25A88: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2589 INX
    case 0xC25A89: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2590 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25A8A: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    case 0xC25A8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    // Overlapping static entry reached from 0xC25A8E.
    case 0xC25A90: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2592 BEQ @UNKNOWN179
    case 0xC25A91: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2593 LDY #1
    case 0xC25A93: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2593 LDY #1
    // Overlapping static entry reached from 0xC25A93.
    case 0xC25A95: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2594 STY @LOCAL10
    case 0xC25A96: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2596 JSR FEELING_STRANGE_RETARGETTING
    case 0xC25A98: {
        Instruction step(cpu, 0x20, 0x004009u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2597 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25A9B: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25A9F.
    case 0xC25AA1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25AA2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25AA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25AA4.
    case 0xC25AA6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25AA7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AA9: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AAC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AAE: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AB1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2600 CMP @VIRTUAL0A+2
    case 0xC25AB3: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2601 BNE @UNKNOWN178
    case 0xC25AB5: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2602 LDA @VIRTUAL06
    case 0xC25AB7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2603 CMP @VIRTUAL0A
    case 0xC25AB9: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2605 BEQ @UNKNOWN177
    case 0xC25ABB: {
        Instruction step(cpu, 0xF0, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2607 LDX CURRENT_ATTACKER
    case 0xC25ABD: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2608 LDA a:battler::current_action,X
    case 0xC25AC0: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    case 0xC25AC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC25AC3.
    case 0xC25AC5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2610 BNE @UNKNOWN180
    case 0xC25AC6: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2611 LDX CURRENT_ATTACKER
    case 0xC25AC8: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2612 LDA a:battler::current_action_argument,X
    case 0xC25ACB: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    case 0xC25ACE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    // Overlapping static entry reached from 0xC25ACE.
    case 0xC25AD0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2614 JSL UNKNOWN_C24348
    case 0xC25AD1: {
        Instruction step(cpu, 0x22, 0xC24348u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2615 CMP #0
    case 0xC25AD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2615 CMP #0
    // Overlapping static entry reached from 0xC25AD5.
    case 0xC25AD7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2616 BNE @UNKNOWN180
    case 0xC25AD8: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2617 LDX CURRENT_ATTACKER
    case 0xC25ADA: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2618 SEP #PROC_FLAGS::ACCUM8
    case 0xC25ADD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2619 STZ a:battler::current_action_argument,X
    case 0xC25ADF: {
        Instruction step(cpu, 0x9E, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2621 REP #PROC_FLAGS::ACCUM8
    case 0xC25AE2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2622 LDA #0
    case 0xC25AE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2622 LDA #0
    // Overlapping static entry reached from 0xC25AE4.
    case 0xC25AE6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2623 JSL FIX_ATTACKER_NAME
    case 0xC25AE7: {
        Instruction step(cpu, 0x22, 0xC23BCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2624 LDX CURRENT_ATTACKER
    case 0xC25AEB: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2625 SEP #PROC_FLAGS::ACCUM8
    case 0xC25AEE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2626 LDA a:battler::current_action_argument,X
    case 0xC25AF0: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2627 JSL REDIRECT_C1ACF8
    case 0xC25AF3: {
        Instruction step(cpu, 0x22, 0xC1DD7Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2628 JSL UNKNOWN_C23E32
    case 0xC25AF7: {
        Instruction step(cpu, 0x22, 0xC23E32u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2630 LDX CURRENT_ATTACKER
    case 0xC25AFB: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2631 LDA a:battler::ally_or_enemy,X
    case 0xC25AFE: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    case 0xC25B01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    // Overlapping static entry reached from 0xC25B01.
    case 0xC25B03: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2633 BNE @UNKNOWN185
    case 0xC25B04: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2634 LDX CURRENT_ATTACKER
    case 0xC25B06: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2635 LDA a:battler::id,X
    case 0xC25B09: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    case 0xC25B0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC25B0C.
    case 0xC25B0E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25B0F: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25B11: {
        Instruction step(cpu, 0xB0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2642 LDX #0
    case 0xC25B13: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2642 LDX #0
    // Overlapping static entry reached from 0xC25B13.
    case 0xC25B15: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2643 STX @LOCAL0F
    case 0xC25B16: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2645 BRA @UNKNOWN184
    case 0xC25B18: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2647 LDX CURRENT_ATTACKER
    case 0xC25B1A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2648 LDA a:battler::id,X
    case 0xC25B1D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2649 STA @VIRTUAL02
    case 0xC25B20: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2657 LDX @LOCAL0F
    case 0xC25B22: {
        Instruction step(cpu, 0xA6, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2658 LDA GAME_STATE + game_state::party_members,X
    case 0xC25B24: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    case 0xC25B27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    // Overlapping static entry reached from 0xC25B27.
    case 0xC25B29: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2661 CMP @VIRTUAL02
    case 0xC25B2A: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2662 BNE @UNKNOWN183
    case 0xC25B2C: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2666 TXA
    case 0xC25B2E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2668 JSL REDIRECT_C43573
    case 0xC25B2F: {
        Instruction step(cpu, 0x22, 0xC1DDCCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2669 BRA @UNKNOWN185
    case 0xC25B33: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2676 INX
    case 0xC25B35: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2677 STX @LOCAL0F
    case 0xC25B36: {
        Instruction step(cpu, 0x86, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2683 CPX #6
    case 0xC25B38: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2683 CPX #6
    // Overlapping static entry reached from 0xC25B38.
    case 0xC25B3A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2685 BCC @UNKNOWN182
    case 0xC25B3B: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2688 LDX CURRENT_ATTACKER
    case 0xC25B3D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2689 LDA a:battler::current_action,X
    case 0xC25B40: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B43: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B45: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B46: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B48: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B49: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2691 TAX
    case 0xC25B4A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2692 INX
    case 0xC25B4B: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2693 INX
    case 0xC25B4C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2694 INX
    case 0xC25B4D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2695 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25B4E: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    case 0xC25B52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    // Overlapping static entry reached from 0xC25B52.
    case 0xC25B54: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2697 BEQ @UNKNOWN187
    case 0xC25B55: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    case 0xC25B57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    // Overlapping static entry reached from 0xC25B57.
    case 0xC25B59: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2699 LDX CURRENT_ATTACKER
    case 0xC25B5A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2700 CMP a:battler::pp_target,X
    case 0xC25B5D: {
        Instruction step(cpu, 0xDD, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25B60: {
        Instruction step(cpu, 0x90, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25B62: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x00FAB8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25B64.
    case 0xC25B66: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B67: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25B69.
    case 0xC25B6B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B6C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B6E: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2703 JMP @UNKNOWN215
    case 0xC25B72: {
        Instruction step(cpu, 0x4C, 0x005DA9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2705 TAX
    case 0xC25B75: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2706 LDA CURRENT_ATTACKER
    case 0xC25B76: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2707 JSL UNKNOWN_C2BCB9
    case 0xC25B79: {
        Instruction step(cpu, 0x22, 0xC2BCB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2709 LDX CURRENT_ATTACKER
    case 0xC25B7D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2710 LDA a:battler::ally_or_enemy,X
    case 0xC25B80: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    case 0xC25B83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    // Overlapping static entry reached from 0xC25B83.
    case 0xC25B85: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2712 CMP #1
    case 0xC25B86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2712 CMP #1
    // Overlapping static entry reached from 0xC25B86.
    case 0xC25B88: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2713 BNE @UNKNOWN194
    case 0xC25B89: {
        Instruction step(cpu, 0xD0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2714 LDX CURRENT_ATTACKER
    case 0xC25B8B: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2715 LDA a:battler::current_action,X
    case 0xC25B8E: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2716 BEQ @UNKNOWN194
    case 0xC25B91: {
        Instruction step(cpu, 0xF0, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B93: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B95: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B96: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B98: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B99: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2718 TAX
    case 0xC25B9A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2719 INX
    case 0xC25B9B: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2720 INX
    case 0xC25B9C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2721 LDA f:BATTLE_ACTION_TABLE,X ;battle_action::type
    case 0xC25B9D: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    case 0xC25BA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    // Overlapping static entry reached from 0xC25BA1.
    case 0xC25BA3: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    case 0xC25BA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC25BA4.
    case 0xC25BA6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2724 BEQ @UNKNOWN188
    case 0xC25BA7: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    case 0xC25BA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    // Overlapping static entry reached from 0xC25BA9.
    case 0xC25BAB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2726 BEQ @UNKNOWN188
    case 0xC25BAC: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    case 0xC25BAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC25BAE.
    case 0xC25BB0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2728 BEQ @UNKNOWN189
    case 0xC25BB1: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    case 0xC25BB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    // Overlapping static entry reached from 0xC25BB3.
    case 0xC25BB5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2730 BEQ @UNKNOWN190
    case 0xC25BB6: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2731 BRA @UNKNOWN191
    case 0xC25BB8: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2733 LDA #1
    case 0xC25BBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2733 LDA #1
    // Overlapping static entry reached from 0xC25BBA.
    case 0xC25BBC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2734 JSL UNKNOWN_C2FEF9
    case 0xC25BBD: {
        Instruction step(cpu, 0x22, 0xC2FEF9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2735 BRA @UNKNOWN191
    case 0xC25BC1: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2737 LDA #2
    case 0xC25BC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2737 LDA #2
    // Overlapping static entry reached from 0xC25BC3.
    case 0xC25BC5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2738 JSL UNKNOWN_C2FEF9
    case 0xC25BC6: {
        Instruction step(cpu, 0x22, 0xC2FEF9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2739 BRA @UNKNOWN191
    case 0xC25BCA: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2741 LDA #3
    case 0xC25BCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2741 LDA #3
    // Overlapping static entry reached from 0xC25BCC.
    case 0xC25BCE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2742 JSL UNKNOWN_C2FEF9
    case 0xC25BCF: {
        Instruction step(cpu, 0x22, 0xC2FEF9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2744 SEP #PROC_FLAGS::ACCUM8
    case 0xC25BD3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2745 LDA #12
    case 0xC25BD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00AE0Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    case 0xC25BD7: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25BD5.
    case 0xC25BD8: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2747 STA a:battler::unknown73,X
    case 0xC25BDA: {
        Instruction step(cpu, 0x9D, 0x000049u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2748 LDX #0
    case 0xC25BDD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2748 LDX #0
    // Overlapping static entry reached from 0xC25BDD.
    case 0xC25BDF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2749 STX @LOCAL07
    case 0xC25BE0: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2750 BRA @UNKNOWN193
    case 0xC25BE2: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2752 JSL WINDOW_TICK
    case 0xC25BE4: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2753 LDX @LOCAL07
    case 0xC25BE8: {
        Instruction step(cpu, 0xA6, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2754 INX
    case 0xC25BEA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2755 STX @LOCAL07
    case 0xC25BEB: {
        Instruction step(cpu, 0x86, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2757 CPX #12
    case 0xC25BED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2757 CPX #12
    // Overlapping static entry reached from 0xC25BED.
    case 0xC25BEF: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2758 BCC @UNKNOWN192
    case 0xC25BF0: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2760 LDY @LOCAL10
    case 0xC25BF2: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2761 BEQ @UNKNOWN196
    case 0xC25BF4: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2762 LDX CURRENT_ATTACKER
    case 0xC25BF6: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2763 REP #PROC_FLAGS::ACCUM8
    case 0xC25BF9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2764 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25BFB: {
        Instruction step(cpu, 0xBD, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    case 0xC25BFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    // Overlapping static entry reached from 0xC25BFE.
    case 0xC25C00: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    case 0xC25C01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC25C01.
    case 0xC25C03: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2767 BNE @UNKNOWN195
    case 0xC25C04: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Du : 0x00845Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25C06.
    case 0xC25C08: {
        Instruction step(cpu, 0x84, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C09: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25C08.
    case 0xC25C0A: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25C0B.
    case 0xC25C0D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C0E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C10: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2770 LDX CURRENT_ATTACKER
    case 0xC25C14: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2771 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC25C17: {
        Instruction step(cpu, 0xBD, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    case 0xC25C1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    // Overlapping static entry reached from 0xC25C1A.
    case 0xC25C1C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25C1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25C1D.
    case 0xC25C1F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2774 BNE @UNKNOWN196
    case 0xC25C20: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000077u : 0x008477u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25C22.
    case 0xC25C24: {
        Instruction step(cpu, 0x84, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C25: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25C24.
    case 0xC25C26: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25C27.
    case 0xC25C29: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C2A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C2C: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2777 REP #PROC_FLAGS::ACCUM8
    case 0xC25C30: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C32.
    case 0xC25C34: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C35: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C37.
    case 0xC25C39: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C3A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2779 LDX CURRENT_ATTACKER
    case 0xC25C3C: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2780 LDA a:battler::current_action,X
    case 0xC25C3F: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C42: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C44: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C45: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C47: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C48: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2782 INC
    case 0xC25C49: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2783 INC
    case 0xC25C4A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2784 INC
    case 0xC25C4B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2785 INC
    case 0xC25C4C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2786 CLC
    case 0xC25C4D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2787 ADC @VIRTUAL0A
    case 0xC25C4E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2788 STA @VIRTUAL0A
    case 0xC25C50: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C52: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25C52.
    case 0xC25C54: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C55: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C57: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C58: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C5A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C5C: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C5E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C60: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C62: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C64: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2791 JSL UNKNOWN_C1DD9F
    case 0xC25C66: {
        Instruction step(cpu, 0x22, 0xC1DD9Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2792 LDX CURRENT_ATTACKER
    case 0xC25C6A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2793 LDA a:battler::current_action,X
    case 0xC25C6D: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25C70: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25C72: {
        Instruction step(cpu, 0x4C, 0x005DA9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2795 BRA @UNKNOWN199
    case 0xC25C75: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2797 JSL WINDOW_TICK
    case 0xC25C77: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2799 JSL UNKNOWN_C2EACF
    case 0xC25C7B: {
        Instruction step(cpu, 0x22, 0xC2EACFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2800 CMP #0
    case 0xC25C7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2800 CMP #0
    // Overlapping static entry reached from 0xC25C7F.
    case 0xC25C81: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2801 BNE @UNKNOWN198
    case 0xC25C82: {
        Instruction step(cpu, 0xD0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2802 LDY #0
    case 0xC25C84: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2802 LDY #0
    // Overlapping static entry reached from 0xC25C84.
    case 0xC25C86: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2803 STY @LOCAL05
    case 0xC25C87: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2804 JMP @UNKNOWN214
    case 0xC25C89: {
        Instruction step(cpu, 0x4C, 0x005D9Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2806 TYA
    case 0xC25C8C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2807 JSL IS_CHAR_TARGETTED
    case 0xC25C8D: {
        Instruction step(cpu, 0x22, 0xC27029u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2808 CMP #0
    case 0xC25C91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2808 CMP #0
    // Overlapping static entry reached from 0xC25C91.
    case 0xC25C93: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25C94: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25C96: {
        Instruction step(cpu, 0x4C, 0x005D9Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2810 LDY @LOCAL05
    case 0xC25C99: {
        Instruction step(cpu, 0xA4, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2811 TYA
    case 0xC25C9B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    case 0xC25C9C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25C9C.
    case 0xC25C9E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2813 JSL MULT168
    case 0xC25C9F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2814 CLC
    case 0xC25CA3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC25CA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25CA4.
    case 0xC25CA6: {
        Instruction step(cpu, 0x9F, 0xA9728Du, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2816 STA CURRENT_TARGET
    case 0xC25CA7: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2817 JSL FIX_TARGET_NAME
    case 0xC25CAA: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2818 LDX CURRENT_TARGET
    case 0xC25CAE: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2819 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25CB1: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    case 0xC25CB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    // Overlapping static entry reached from 0xC25CB4.
    case 0xC25CB6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    case 0xC25CB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC25CB7.
    case 0xC25CB9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2822 BNE @UNKNOWN204
    case 0xC25CBA: {
        Instruction step(cpu, 0xD0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2827 LDA #0
    case 0xC25CBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2827 LDA #0
    // Overlapping static entry reached from 0xC25CBC.
    case 0xC25CBE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2828 STA @LOCAL0F
    case 0xC25CBF: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2830 BRA @UNKNOWN203
    case 0xC25CC1: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2833 TXA
    case 0xC25CC3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2835 LDX CURRENT_ATTACKER
    case 0xC25CC4: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2836 CMP a:battler::current_action,X
    case 0xC25CC7: {
        Instruction step(cpu, 0xDD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2837 BEQ @UNKNOWN204
    case 0xC25CCA: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2843 LDA @LOCAL0F
    case 0xC25CCC: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2844 INC
    case 0xC25CCE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2845 STA @LOCAL0F
    case 0xC25CCF: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2854 ASL
    case 0xC25CD1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2855 TAX
    case 0xC25CD2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2856 LDA f:DEAD_TARGETTABLE_ACTIONS,X
    case 0xC25CD3: {
        Instruction step(cpu, 0xBF, 0xC4A08Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2857 TAX
    case 0xC25CD7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2859 BNE @UNKNOWN202
    case 0xC25CD8: {
        Instruction step(cpu, 0xD0, 0x0000E9u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0076FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25CDA.
    case 0xC25CDC: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CDD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25CDC.
    case 0xC25CDE: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CDF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25CDF.
    case 0xC25CE1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CE2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CE4: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2861 JMP @UNKNOWN213
    case 0xC25CE8: {
        Instruction step(cpu, 0x4C, 0x005D9Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25CEB.
    case 0xC25CED: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CEE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25CF0.
    case 0xC25CF2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CF3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2864 LDX CURRENT_ATTACKER
    case 0xC25CF5: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2865 LDA a:battler::current_action,X
    case 0xC25CF8: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25CFB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25CFD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25CFE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25D00: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25D01: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2867 CLC
    case 0xC25D02: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2868 ADC #8
    case 0xC25D03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2868 ADC #8
    // Overlapping static entry reached from 0xC25D03.
    case 0xC25D05: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2869 CLC
    case 0xC25D06: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2870 ADC @VIRTUAL0A
    case 0xC25D07: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2871 STA @VIRTUAL0A
    case 0xC25D09: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D0B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25D0B.
    case 0xC25D0D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D0E: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D10: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D11: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D13: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D15: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25D17.
    case 0xC25D19: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D1A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25D1C.
    case 0xC25D1E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D1F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D21: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D23: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D25: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D27: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D29: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2875 BEQ @UNKNOWN213
    case 0xC25D2B: {
        Instruction step(cpu, 0xF0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2876 PHA
    case 0xC25D2D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D2E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D30: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D33: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D35: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2878 PLA
    case 0xC25D38: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2879 JSL UNKNOWN_C09279
    case 0xC25D39: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2880 JSL CHECK_DEAD_PLAYERS
    case 0xC25D3D: {
        Instruction step(cpu, 0x22, 0xC2BB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2881 SEP #PROC_FLAGS::ACCUM8
    case 0xC25D41: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2882 LDA #1
    case 0xC25D43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    case 0xC25D45: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC25D43.
    case 0xC25D46: {
        Instruction step(cpu, 0x23, 0x000096u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2884 REP #PROC_FLAGS::ACCUM8
    case 0xC25D48: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2885 LDA #0
    case 0xC25D4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2885 LDA #0
    // Overlapping static entry reached from 0xC25D4A.
    case 0xC25D4C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2886 JSL COUNT_CHARS
    case 0xC25D4D: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2887 CMP #0
    case 0xC25D51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2887 CMP #0
    // Overlapping static entry reached from 0xC25D51.
    case 0xC25D53: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2888 BEQ @UNKNOWN206
    case 0xC25D54: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2889 LDA #1
    case 0xC25D56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2889 LDA #1
    // Overlapping static entry reached from 0xC25D56.
    case 0xC25D58: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2890 JSL COUNT_CHARS
    case 0xC25D59: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2891 CMP #0
    case 0xC25D5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2891 CMP #0
    // Overlapping static entry reached from 0xC25D5D.
    case 0xC25D5F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2892 BNE @UNKNOWN207
    case 0xC25D60: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2894 JSL UNKNOWN_C2437E
    case 0xC25D62: {
        Instruction step(cpu, 0x22, 0xC2437Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2895 JMP @UNKNOWN225
    case 0xC25D66: {
        Instruction step(cpu, 0x4C, 0x005EF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2897 LDA SPECIAL_DEFEAT
    case 0xC25D69: {
        Instruction step(cpu, 0xAD, 0x00AA0Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2898 CMP #3
    case 0xC25D6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2898 CMP #3
    // Overlapping static entry reached from 0xC25D6C.
    case 0xC25D6E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2899 BEQ @UNKNOWN208
    case 0xC25D6F: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2900 CMP #2
    case 0xC25D71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2900 CMP #2
    // Overlapping static entry reached from 0xC25D71.
    case 0xC25D73: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2901 BEQ @UNKNOWN209
    case 0xC25D74: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2902 CMP #1
    case 0xC25D76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2902 CMP #1
    // Overlapping static entry reached from 0xC25D76.
    case 0xC25D78: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2903 BEQ @UNKNOWN210
    case 0xC25D79: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2904 BRA @UNKNOWN212
    case 0xC25D7B: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2906 STZ @LOCAL03
    case 0xC25D7D: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2907 JMP @UNKNOWN237
    case 0xC25D7F: {
        Instruction step(cpu, 0x4C, 0x006093u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2909 JSL UNKNOWN_C2437E
    case 0xC25D82: {
        Instruction step(cpu, 0x22, 0xC2437Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2910 JMP @ENEMIES_ARE_DEAD
    case 0xC25D86: {
        Instruction step(cpu, 0x4C, 0x005F2Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2912 LDA #2
    case 0xC25D89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2912 LDA #2
    // Overlapping static entry reached from 0xC25D89.
    case 0xC25D8B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2913 STA @LOCAL03
    case 0xC25D8C: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2914 JMP @UNKNOWN237
    case 0xC25D8E: {
        Instruction step(cpu, 0x4C, 0x006093u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2916 JSL WINDOW_TICK
    case 0xC25D91: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2918 LDA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC25D95: {
        Instruction step(cpu, 0xAD, 0x00AD90u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2919 BNE @UNKNOWN211
    case 0xC25D98: {
        Instruction step(cpu, 0xD0, 0x0000F7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2921 LDY @LOCAL05
    case 0xC25D9A: {
        Instruction step(cpu, 0xA4, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2922 INY
    case 0xC25D9C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2923 STY @LOCAL05
    case 0xC25D9D: {
        Instruction step(cpu, 0x84, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    case 0xC25D9F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25D9F.
    case 0xC25DA1: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25DA2: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25DA4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25DA6: {
        Instruction step(cpu, 0x4C, 0x005C8Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2928 LDX CURRENT_ATTACKER
    case 0xC25DA9: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2929 LDA a:battler::ally_or_enemy,X
    case 0xC25DAC: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    case 0xC25DAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    // Overlapping static entry reached from 0xC25DAF.
    case 0xC25DB1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2931 BNE @UNKNOWN217
    case 0xC25DB2: {
        Instruction step(cpu, 0xD0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2932 JSL UNKNOWN_C2437E
    case 0xC25DB4: {
        Instruction step(cpu, 0x22, 0xC2437Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2933 LDA MIRROR_ENEMY
    case 0xC25DB8: {
        Instruction step(cpu, 0xAD, 0x00AA12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2934 BEQ @UNKNOWN216
    case 0xC25DBB: {
        Instruction step(cpu, 0xF0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2935 LDX CURRENT_ATTACKER
    case 0xC25DBD: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2936 LDA a:battler::id,X
    case 0xC25DC0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    case 0xC25DC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25DC3.
    case 0xC25DC5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2938 BNE @UNKNOWN216
    case 0xC25DC6: {
        Instruction step(cpu, 0xD0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2939 LDX MIRROR_TURN_TIMER
    case 0xC25DC8: {
        Instruction step(cpu, 0xAE, 0x00AA62u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2940 DEX
    case 0xC25DCB: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2941 STX MIRROR_TURN_TIMER
    case 0xC25DCC: {
        Instruction step(cpu, 0x8E, 0x00AA62u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2942 BNE @UNKNOWN216
    case 0xC25DCF: {
        Instruction step(cpu, 0xD0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2943 STZ MIRROR_ENEMY
    case 0xC25DD1: {
        Instruction step(cpu, 0x9C, 0x00AA12u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2944 LDA CURRENT_ATTACKER
    case 0xC25DD4: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DD7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DD9: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDF: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2946 REP #PROC_FLAGS::ACCUM8
    case 0xC25DE1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x00AA14u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC25DEB.
    case 0xC25DED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DEE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF0: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2949 REP #PROC_FLAGS::ACCUM8
    case 0xC25DF8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25DFA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25DFC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25DFE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25E00: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2951 JSL COPY_MIRROR_DATA
    case 0xC25E02: {
        Instruction step(cpu, 0x22, 0xC2AF1Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000042u : 0x007142u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25E06.
    case 0xC25E08: {
        Instruction step(cpu, 0x71, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E09: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25E08.
    case 0xC25E0A: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25E0B.
    case 0xC25E0D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E0E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E10: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2954 JSL REDIRECT_C3E6F8
    case 0xC25E14: {
        Instruction step(cpu, 0x22, 0xC1DDD3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2956 JSL CHECK_DEAD_PLAYERS
    case 0xC25E18: {
        Instruction step(cpu, 0x22, 0xC2BB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2957 LDA CURRENT_ATTACKER
    case 0xC25E1C: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2958 STA CURRENT_TARGET
    case 0xC25E1F: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2959 JSL FIX_TARGET_NAME
    case 0xC25E22: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2960 LDX CURRENT_ATTACKER
    case 0xC25E26: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2961 LDA a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E29: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    case 0xC25E2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    // Overlapping static entry reached from 0xC25E2C.
    case 0xC25E2E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    case 0xC25E2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25E2F.
    case 0xC25E31: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2964 BEQ @UNKNOWN218
    case 0xC25E32: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    case 0xC25E34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC25E34.
    case 0xC25E36: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2966 BEQ @UNKNOWN219
    case 0xC25E37: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    case 0xC25E39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC25E39.
    case 0xC25E3B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2968 BEQ @UNKNOWN220
    case 0xC25E3C: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2969 BRA @UNKNOWN221
    case 0xC25E3E: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2971 JSL RAND
    case 0xC25E40: {
        Instruction step(cpu, 0x22, 0xC08E9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    case 0xC25E44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    // Overlapping static entry reached from 0xC25E44.
    case 0xC25E46: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2973 BNE @UNKNOWN221
    case 0xC25E47: {
        Instruction step(cpu, 0xD0, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x006F54u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25E49.
    case 0xC25E4B: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E4C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25E4B.
    case 0xC25E4F: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25E4E.
    case 0xC25E50: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E51: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E53: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2975 LDX CURRENT_ATTACKER
    case 0xC25E57: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2976 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E5A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2977 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E5C: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2978 BRA @UNKNOWN221
    case 0xC25E5F: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2981 LDA #100
    case 0xC25E61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2981 LDA #100
    // Overlapping static entry reached from 0xC25E61.
    case 0xC25E63: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2982 JSR RAND_LIMIT
    case 0xC25E64: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    case 0xC25E67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000055u : 0x000055u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    // Overlapping static entry reached from 0xC25E67.
    case 0xC25E69: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2984 BCS @UNKNOWN221
    case 0xC25E6A: {
        Instruction step(cpu, 0xB0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EDu : 0x006EEDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25E6C.
    case 0xC25E6E: {
        Instruction step(cpu, 0x6E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E6F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25E71.
    case 0xC25E73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E74: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E76: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2986 LDX CURRENT_ATTACKER
    case 0xC25E7A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2987 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E7D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2988 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E7F: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2989 BRA @UNKNOWN221
    case 0xC25E82: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x006F0Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25E84.
    case 0xC25E86: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E87: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25E86.
    case 0xC25E8A: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25E89.
    case 0xC25E8B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E8C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E8E: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2993 LDX CURRENT_ATTACKER
    case 0xC25E92: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2994 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E95: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2995 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E97: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2997 REP #PROC_FLAGS::ACCUM8
    case 0xC25E9A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2998 LDA CURRENT_ATTACKER
    case 0xC25E9C: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:2999 CLC
    case 0xC25E9F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    case 0xC25EA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    // Overlapping static entry reached from 0xC25EA0.
    case 0xC25EA2: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3001 TAX
    case 0xC25EA3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3002 SEP #PROC_FLAGS::ACCUM8
    case 0xC25EA4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3003 LDA __BSS_START__,X
    case 0xC25EA6: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3004 STA @LOCAL02
    case 0xC25EA9: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3005 REP #PROC_FLAGS::ACCUM8
    case 0xC25EAB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    case 0xC25EAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    // Overlapping static entry reached from 0xC25EAD.
    case 0xC25EAF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3007 BEQ @UNKNOWN222
    case 0xC25EB0: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3008 SEP #PROC_FLAGS::ACCUM8
    case 0xC25EB2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3009 LDA @LOCAL02
    case 0xC25EB4: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3010 DEC
    case 0xC25EB6: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3011 STA __BSS_START__,X
    case 0xC25EB7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3012 REP #PROC_FLAGS::ACCUM8
    case 0xC25EBA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    case 0xC25EBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    // Overlapping static entry reached from 0xC25EBC.
    case 0xC25EBE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3014 BNE @UNKNOWN222
    case 0xC25EBF: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x006F64u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25EC1.
    case 0xC25EC3: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25EC3.
    case 0xC25EC7: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25EC6.
    case 0xC25EC8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25ECB: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC25ECF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25ECF.
    case 0xC25ED1: {
        Instruction step(cpu, 0x9F, 0x0000A2u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3018 LDX #0
    case 0xC25ED2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3018 LDX #0
    // Overlapping static entry reached from 0xC25ED2.
    case 0xC25ED4: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3019 STX @LOCAL10
    case 0xC25ED5: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3020 BRA @UNKNOWN224
    case 0xC25ED7: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3022 TAX
    case 0xC25ED9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3023 SEP #PROC_FLAGS::ACCUM8
    case 0xC25EDA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3024 STZ a:battler::use_alt_spritemap,X
    case 0xC25EDC: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3025 CLC
    case 0xC25EDF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3026 REP #PROC_FLAGS::ACCUM8
    case 0xC25EE0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    case 0xC25EE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25EE2.
    case 0xC25EE4: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3028 LDX @LOCAL10
    case 0xC25EE5: {
        Instruction step(cpu, 0xA6, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3029 INX
    case 0xC25EE7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3030 STX @LOCAL10
    case 0xC25EE8: {
        Instruction step(cpu, 0x86, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    case 0xC25EEA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25EEA.
    case 0xC25EEC: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3033 BCC @UNKNOWN223
    case 0xC25EED: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3034 JSL CHECK_DEAD_PLAYERS
    case 0xC25EEF: {
        Instruction step(cpu, 0x22, 0xC2BB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3035 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC25EF3: {
        Instruction step(cpu, 0x22, 0xC1DD3Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3037 LDA #0
    case 0xC25EF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3037 LDA #0
    // Overlapping static entry reached from 0xC25EF7.
    case 0xC25EF9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3038 JSL COUNT_CHARS
    case 0xC25EFA: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3039 CMP #0
    case 0xC25EFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3039 CMP #0
    // Overlapping static entry reached from 0xC25EFE.
    case 0xC25F00: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3040 BNE @ALLIES_ARE_ALIVE
    case 0xC25F01: {
        Instruction step(cpu, 0xD0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3041 LDA #1
    case 0xC25F03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3041 LDA #1
    // Overlapping static entry reached from 0xC25F03.
    case 0xC25F05: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3042 STA @LOCAL03
    case 0xC25F06: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3043 JSL RESET_HPPP_ROLLING
    case 0xC25F08: {
        Instruction step(cpu, 0x22, 0xC20F9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Du : 0x007A4Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25F0C.
    case 0xC25F0E: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F0F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25F11.
    case 0xC25F13: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F14: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F16: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3045 LDA #1
    case 0xC25F1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3045 LDA #1
    // Overlapping static entry reached from 0xC25F1A.
    case 0xC25F1C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3049 STA @LOCAL09
    case 0xC25F1D: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3052 LDA #1
    case 0xC25F1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3052 LDA #1
    // Overlapping static entry reached from 0xC25F1F.
    case 0xC25F21: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3053 JSL COUNT_CHARS
    case 0xC25F22: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3054 CMP #0
    case 0xC25F26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3054 CMP #0
    // Overlapping static entry reached from 0xC25F26.
    case 0xC25F28: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25F29: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25F2B: {
        Instruction step(cpu, 0x4C, 0x006081u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3057 STZ @LOCAL03
    case 0xC25F2E: {
        Instruction step(cpu, 0x64, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3058 JSL RESET_HPPP_ROLLING
    case 0xC25F30: {
        Instruction step(cpu, 0x22, 0xC20F9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3059 LDA #1
    case 0xC25F34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3059 LDA #1
    // Overlapping static entry reached from 0xC25F34.
    case 0xC25F36: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3060 STA LETTERBOX_EFFECT_ENDING
    case 0xC25F37: {
        Instruction step(cpu, 0x8D, 0x00ADB6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3061 STA ENABLE_BACKGROUND_DARKENING
    case 0xC25F3A: {
        Instruction step(cpu, 0x8D, 0x00ADD0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC25F3D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000B9u : 0x0098B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC25F3D.
    case 0xC25F3F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3066 STY @LOCAL0F
    case 0xC25F40: {
        Instruction step(cpu, 0x84, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3068 LDA BATTLE_MONEY_SCRATCH
    case 0xC25F42: {
        Instruction step(cpu, 0xAD, 0x00A978u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25F45: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25F47: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F49: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F4B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F4D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F4F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3071 JSL DEPOSIT_INTO_ATM
    case 0xC25F51: {
        Instruction step(cpu, 0x22, 0xC2281Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F55: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F57: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F59: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F5B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3076 LDY @LOCAL0F
    case 0xC25F5D: {
        Instruction step(cpu, 0xA4, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F5F: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F62: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F64: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F67: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3079 CLC
    case 0xC25F69: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F6A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F6C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F6E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F70: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F72: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F74: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F76: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F78: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F7B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F7D: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3082 LDA #0
    case 0xC25F80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3082 LDA #0
    // Overlapping static entry reached from 0xC25F80.
    case 0xC25F82: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3083 JSL COUNT_CHARS
    case 0xC25F83: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3084 DEC
    case 0xC25F87: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25F88: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25F8A: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F8C: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F8F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F91: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F94: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3087 CLC
    case 0xC25F96: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F97: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F99: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F9B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F9D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F9F: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25FA1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FA3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FA5: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FA8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FAA: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3090 LDA #0
    case 0xC25FAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3090 LDA #0
    // Overlapping static entry reached from 0xC25FAD.
    case 0xC25FAF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3091 JSL COUNT_CHARS
    case 0xC25FB0: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25FB4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25FB6: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3093 JSL DIVISION32
    case 0xC25FB8: {
        Instruction step(cpu, 0x22, 0xC090FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FBC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FBE: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FC1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FC3: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3095 LDA CURRENT_BATTLE_GROUP
    case 0xC25FC6: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    case 0xC25FC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    // Overlapping static entry reached from 0xC25FC9.
    case 0xC25FCB: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    case 0xC25FCC: {
        Instruction step(cpu, 0x90, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    // Overlapping static entry reached from 0xC25FCB.
    case 0xC25FCD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x007A14u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25FCE.
    case 0xC25FD0: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FD1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25FD3.
    case 0xC25FD5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FD6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FD8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FDA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FDC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FDE: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3100 JSL DISPLAY_TEXT_WAIT
    case 0xC25FE0: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3101 BRA @SKIP_NOT_BOSS_BATTLE
    case 0xC25FE4: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0079D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25FE6.
    case 0xC25FE8: {
        Instruction step(cpu, 0x79, 0x000E85u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FE9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25FEB.
    case 0xC25FED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FEE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF2: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF6: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3105 JSL DISPLAY_TEXT_WAIT
    case 0xC25FF8: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3107 LDA ITEM_DROPPED
    case 0xC25FFC: {
        Instruction step(cpu, 0xAD, 0x00AA10u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3108 BEQ @UNKNOWN230
    case 0xC25FFF: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3109 SEP #PROC_FLAGS::ACCUM8
    case 0xC26001: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3110 LDA ITEM_DROPPED
    case 0xC26003: {
        Instruction step(cpu, 0xAD, 0x00AA10u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3111 JSL REDIRECT_C1ACF8
    case 0xC26006: {
        Instruction step(cpu, 0x22, 0xC1DD7Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2600A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x007BDFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC2600A.
    case 0xC2600C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2600D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2600F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC2600F.
    case 0xC26011: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26012: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26014: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC26018: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26018.
    case 0xC2601A: {
        Instruction step(cpu, 0x9F, 0xA93184u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3116 STY @LOCAL10
    case 0xC2601B: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3117 LDA #0
    case 0xC2601D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC2601A.
    case 0xC2601E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC2601D.
    case 0xC2601F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3118 STA @VIRTUAL02
    case 0xC26020: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3119 BRA @UNKNOWN233
    case 0xC26022: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3121 LDA a:battler::consciousness,Y
    case 0xC26024: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    case 0xC26027: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    // Overlapping static entry reached from 0xC26027.
    case 0xC26029: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3123 BEQ @UNKNOWN232
    case 0xC2602A: {
        Instruction step(cpu, 0xF0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3123 BEQ @UNKNOWN232
    // Overlapping static entry reached from 0xC20D86.
    case 0xC2602B: {
        Instruction step(cpu, 0x3D, 0x000EB9u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3124 LDA a:battler::ally_or_enemy,Y
    case 0xC2602C: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3124 LDA a:battler::ally_or_enemy,Y
    // Overlapping static entry reached from 0xC2602B.
    case 0xC2602E: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    case 0xC2602F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    // Overlapping static entry reached from 0xC2602F.
    case 0xC26031: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3126 BNE @UNKNOWN232
    case 0xC26032: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3127 LDA a:battler::npc_id,Y
    case 0xC26034: {
        Instruction step(cpu, 0xB9, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    case 0xC26037: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    // Overlapping static entry reached from 0xC26037.
    case 0xC26039: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3129 BNE @UNKNOWN232
    case 0xC2603A: {
        Instruction step(cpu, 0xD0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3130 LDA a:battler::afflictions,Y
    case 0xC2603C: {
        Instruction step(cpu, 0xB9, 0x00001Du, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    case 0xC2603F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    // Overlapping static entry reached from 0xC2603F.
    case 0xC26041: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3132 TAX
    case 0xC26042: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    case 0xC26043: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC26043.
    case 0xC26045: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3134 BEQ @UNKNOWN232
    case 0xC26046: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    case 0xC26048: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC26048.
    case 0xC2604A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3136 BEQ @UNKNOWN232
    case 0xC2604B: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2604D: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26050: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26052: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26055: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26057: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26059: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2605B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2605D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3139 LDX #1
    case 0xC2605F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3139 LDX #1
    // Overlapping static entry reached from 0xC2605F.
    case 0xC26061: {
        Instruction step(cpu, 0x00, 0x0000B9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3140 LDA a:battler::id,Y
    case 0xC26062: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3141 JSL GAIN_EXP
    case 0xC26065: {
        Instruction step(cpu, 0x22, 0xC1D9E9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3143 LDY @LOCAL10
    case 0xC26069: {
        Instruction step(cpu, 0xA4, 0x000031u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3144 TYA
    case 0xC2606B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3145 CLC
    case 0xC2606C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    case 0xC2606D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2606D.
    case 0xC2606F: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3147 TAY
    case 0xC26070: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3148 STY @LOCAL10
    case 0xC26071: {
        Instruction step(cpu, 0x84, 0x000031u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3149 INC @VIRTUAL02
    case 0xC26073: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3151 LDA @VIRTUAL02
    case 0xC26075: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    case 0xC26077: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26077.
    case 0xC26079: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3153 BCC @UNKNOWN231
    case 0xC2607A: {
        Instruction step(cpu, 0x90, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3154 LDA #1
    case 0xC2607C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3154 LDA #1
    // Overlapping static entry reached from 0xC2607C.
    case 0xC2607E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3158 STA @LOCAL09
    case 0xC2607F: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3164 LDA @LOCAL09
    case 0xC26081: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC26083: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC26085: {
        Instruction step(cpu, 0x4C, 0x005619u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3168 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC26088: {
        Instruction step(cpu, 0x22, 0xC1DD59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3173 LDA @LOCAL09
    case 0xC2608C: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC2608E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC26090: {
        Instruction step(cpu, 0x4C, 0x004FCFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3177 JSL RESET_HPPP_ROLLING
    case 0xC26093: {
        Instruction step(cpu, 0x22, 0xC20F9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3179 JSL WINDOW_TICK
    case 0xC26097: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3180 JSL UNKNOWN_C2108C
    case 0xC2609B: {
        Instruction step(cpu, 0x22, 0xC2108Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3181 CMP #0
    case 0xC2609F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3181 CMP #0
    // Overlapping static entry reached from 0xC2609F.
    case 0xC260A1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3182 BEQ @UNKNOWN238
    case 0xC260A2: {
        Instruction step(cpu, 0xF0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3183 LDA MIRROR_ENEMY
    case 0xC260A4: {
        Instruction step(cpu, 0xAD, 0x00AA12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC260A7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC260A9: {
        Instruction step(cpu, 0x4C, 0x006145u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC260AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC260AC.
    case 0xC260AE: {
        Instruction step(cpu, 0x9F, 0xA22F85u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3191 STA @LOCAL0F
    case 0xC260AF: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3192 LDX #0
    case 0xC260B1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3192 LDX #0
    // Overlapping static entry reached from 0xC260AE.
    case 0xC260B2: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3192 LDX #0
    // Overlapping static entry reached from 0xC260B1.
    case 0xC260B3: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3193 STX @LOCAL0A
    case 0xC260B4: {
        Instruction step(cpu, 0x86, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3195 JMP @UNKNOWN242
    case 0xC260B6: {
        Instruction step(cpu, 0x4C, 0x00613Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3197 TAX
    case 0xC260B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3198 LDA a:battler::consciousness,X
    case 0xC260BA: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    case 0xC260BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    // Overlapping static entry reached from 0xC260BD.
    case 0xC260BF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3200 BEQ @UNKNOWN241
    case 0xC260C0: {
        Instruction step(cpu, 0xF0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3204 LDA @LOCAL0F
    case 0xC260C2: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3206 TAX
    case 0xC260C4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3207 LDA a:battler::ally_or_enemy,X
    case 0xC260C5: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    case 0xC260C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    // Overlapping static entry reached from 0xC260C8.
    case 0xC260CA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3209 BNE @UNKNOWN241
    case 0xC260CB: {
        Instruction step(cpu, 0xD0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3213 LDA @LOCAL0F
    case 0xC260CD: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3215 TAX
    case 0xC260CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3216 LDA a:battler::id,X
    case 0xC260D0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    case 0xC260D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC260D3.
    case 0xC260D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3218 BNE @UNKNOWN241
    case 0xC260D6: {
        Instruction step(cpu, 0xD0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3219 STZ MIRROR_ENEMY
    case 0xC260D8: {
        Instruction step(cpu, 0x9C, 0x00AA12u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3223 LDA @LOCAL0F
    case 0xC260DB: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3225 CLC
    case 0xC260DD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    case 0xC260DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    // Overlapping static entry reached from 0xC260DE.
    case 0xC260E0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3227 TAX
    case 0xC260E1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3231 STX @LOCAL0A
    case 0xC260E2: {
        Instruction step(cpu, 0x86, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3233 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC260E4: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    case 0xC260E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    // Overlapping static entry reached from 0xC260E7.
    case 0xC260E9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3235 STA @VIRTUAL04
    case 0xC260EA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3236 STA @LOCAL08
    case 0xC260EC: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3240 LDA @LOCAL0F
    case 0xC260EE: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F2: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F8: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3243 REP #PROC_FLAGS::ACCUM8
    case 0xC260FA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC260FC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC260FE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26100: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26102: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26104: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x00AA14u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC26104.
    case 0xC26106: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26107: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26109: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3246 REP #PROC_FLAGS::ACCUM8
    case 0xC26111: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26113: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26115: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26117: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26119: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3248 JSL COPY_MIRROR_DATA
    case 0xC2611B: {
        Instruction step(cpu, 0x22, 0xC2AF1Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3249 LDA @VIRTUAL04
    case 0xC2611F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3250 SEP #PROC_FLAGS::ACCUM8
    case 0xC26121: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3254 LDX @LOCAL0A
    case 0xC26123: {
        Instruction step(cpu, 0xA6, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3256 STA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC26125: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3257 JSL CHECK_DEAD_PLAYERS
    case 0xC26128: {
        Instruction step(cpu, 0x22, 0xC2BB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3258 BRA @UNKNOWN243
    case 0xC2612C: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3264 LDA @LOCAL0F
    case 0xC2612E: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3266 CLC
    case 0xC26130: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    case 0xC26131: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26131.
    case 0xC26133: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3274 STA @LOCAL0F
    case 0xC26134: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3275 LDX @LOCAL0A
    case 0xC26136: {
        Instruction step(cpu, 0xA6, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3276 INX
    case 0xC26138: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3277 STX @LOCAL0A
    case 0xC26139: {
        Instruction step(cpu, 0x86, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    case 0xC2613B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2613B.
    case 0xC2613D: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2613E: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC26140: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC26142: {
        Instruction step(cpu, 0x4C, 0x0060B9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3283 JSL RESET_POST_BATTLE_STATS
    case 0xC26145: {
        Instruction step(cpu, 0x22, 0xC2BC5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3284 SEP #PROC_FLAGS::ACCUM8
    case 0xC26149: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3285 STZ GAME_STATE+game_state::auto_fight_enable
    case 0xC2614B: {
        Instruction step(cpu, 0x9C, 0x0098B1u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3286 REP #PROC_FLAGS::ACCUM8
    case 0xC2614E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3287 STZ BATTLE_MODE_FLAG
    case 0xC26150: {
        Instruction step(cpu, 0x9C, 0x009643u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3288 LDA BATTLE_MODE
    case 0xC26153: {
        Instruction step(cpu, 0xAD, 0x004DC2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26156: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26158: {
        Instruction step(cpu, 0x4C, 0x0048E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3290 LDX #1
    case 0xC2615B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3290 LDX #1
    // Overlapping static entry reached from 0xC2615B.
    case 0xC2615D: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3291 TXA
    case 0xC2615E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3292 JSL FADE_OUT
    case 0xC2615F: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3293 BRA @UNKNOWN246
    case 0xC26163: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3295 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC26165: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3296 JSL UNKNOWN_C2DB3F
    case 0xC26169: {
        Instruction step(cpu, 0x22, 0xC2DB3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3298 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC2616D: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    case 0xC26170: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    // Overlapping static entry reached from 0xC26170.
    case 0xC26172: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3300 BNE @UNKNOWN245
    case 0xC26173: {
        Instruction step(cpu, 0xD0, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3301 JSL UNKNOWN_C20293
    case 0xC26175: {
        Instruction step(cpu, 0x22, 0xC20293u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3302 JSL UNKNOWN_C08726
    case 0xC26179: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3303 JSL UNKNOWN_C1DD5F
    case 0xC2617D: {
        Instruction step(cpu, 0x22, 0xC1DD5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3304 JSL UNKNOWN_C2E0E7
    case 0xC26181: {
        Instruction step(cpu, 0x22, 0xC2E0E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/main_battle_routine.asm:3305 LDA @LOCAL03
    case 0xC26185: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC26187: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC26188: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
