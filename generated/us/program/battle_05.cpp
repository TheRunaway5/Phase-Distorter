// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/battle/main_battle_routine.asm (source_named).
bool execute_battle_main_battle_routine_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/main_battle_routine.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24821: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24823: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24824: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24825: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x00FFC9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC24825.
    case 0xC24827: cpu.execute_instruction<0xFF>(0xC2AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/main_battle_routine.asm:25 END_STACK_VARS
    case 0xC24828: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    case 0xC24829: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/battle/main_battle_routine.asm:26 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC24827.
    case 0xC2482B: cpu.execute_instruction<0x4D>(0x005ED0, 3); return true;
    // src/battle/main_battle_routine.asm:27 BNE @UNKNOWN0
    case 0xC2482C: cpu.execute_instruction<0xD0>(0x00005E, 2); return true;
    // src/battle/main_battle_routine.asm:28 LDA #1
    case 0xC2482E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:28 LDA #1
    // Overlapping static entry reached from 0xC2482E.
    case 0xC24830: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:29 STA @LOCAL12
    case 0xC24831: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:30 STA @LOCAL11
    case 0xC24833: cpu.execute_instruction<0x85>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC24835: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:32 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24837: cpu.execute_instruction<0x8D>(0x0098A4, 3); return true;
    // src/battle/main_battle_routine.asm:39 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC2483A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:39 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC2483A.
    case 0xC2483C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:40 STY @LOCAL10
    case 0xC2483D: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/main_battle_routine.asm:42 STZ_BADOPT @LOCAL00
    case 0xC2483F: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:43 LDX #6
    case 0xC24841: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:43 LDX #6
    // Overlapping static entry reached from 0xC24841.
    case 0xC24843: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC24844: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:48 TYA
    case 0xC24846: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:50 JSL MEMSET16
    case 0xC24847: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/battle/main_battle_routine.asm:55 LDA #.LOWORD(GAME_STATE) + game_state::unknown96
    case 0xC2484B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008B, 2); else cpu.execute_instruction<0xA9>(0x00988B, 3); return true;
    // src/battle/main_battle_routine.asm:55 LDA #.LOWORD(GAME_STATE) + game_state::unknown96
    // Overlapping static entry reached from 0xC2484B.
    case 0xC2484D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:56 STA @VIRTUAL02
    case 0xC2484E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC24850: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/main_battle_routine.asm:59 STZ_BADOPT @LOCAL00
    case 0xC24852: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:60 LDX #6
    case 0xC24854: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:60 LDX #6
    // Overlapping static entry reached from 0xC24854.
    case 0xC24856: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC24857: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:65 LDA @VIRTUAL02
    case 0xC24859: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:67 JSL MEMSET16
    case 0xC2485B: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/battle/main_battle_routine.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC2485F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:69 LDA #1
    case 0xC24861: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A401, 3); return true;
    // src/battle/main_battle_routine.asm:76 LDY @LOCAL10
    case 0xC24863: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:76 LDY @LOCAL10
    // Overlapping static entry reached from 0xC24861.
    case 0xC24864: cpu.execute_instruction<0x31>(0x000099, 2); return true;
    // src/battle/main_battle_routine.asm:77 STA __BSS_START__,Y
    case 0xC24865: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:77 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC24864.
    case 0xC24866: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:78 LDX @VIRTUAL02
    case 0xC24868: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:79 STA __BSS_START__,X
    case 0xC2486A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC2486D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:82 LDA #1
    case 0xC2486F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:82 LDA #1
    // Overlapping static entry reached from 0xC2486F.
    case 0xC24871: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:83 STA ENEMIES_IN_BATTLE
    case 0xC24872: cpu.execute_instruction<0x8D>(0x009F8A, 3); return true;
    // src/battle/main_battle_routine.asm:84 STA CURRENT_BATTLE_GROUP
    case 0xC24875: cpu.execute_instruction<0x8D>(0x004A8C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24878: cpu.execute_instruction<0xAF>(0xD0C615, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC2487C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC2487E: cpu.execute_instruction<0xAF>(0xD0C617, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:85 MOVE_INT f:BTL_ENTRY_PTR_TABLE+.SIZEOF(battle_entry_ptr_entry)+battle_entry_ptr_entry::pointer, @VIRTUAL06
    case 0xC24882: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:86 LDY #1
    case 0xC24884: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:86 LDY #1
    // Overlapping static entry reached from 0xC24884.
    case 0xC24886: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/main_battle_routine.asm:87 LDA [@VIRTUAL06],Y
    case 0xC24887: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:88 STA ENEMIES_IN_BATTLE_IDS
    case 0xC24889: cpu.execute_instruction<0x8D>(0x009F8C, 3); return true;
    // src/battle/main_battle_routine.asm:90 STZ GIYGAS_PHASE
    case 0xC2488C: cpu.execute_instruction<0x9C>(0x00A97A, 3); return true;
    // src/battle/main_battle_routine.asm:91 LDA CURRENT_BATTLE_GROUP
    case 0xC2488F: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    case 0xC24892: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0001DB, 3); return true;
    // src/battle/main_battle_routine.asm:92 CMP #ENEMY_GROUP::UNKNOWN_475
    // Overlapping static entry reached from 0xC24892.
    case 0xC24894: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    case 0xC24895: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:93 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC24894.
    case 0xC24896: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    case 0xC24897: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC24896.
    case 0xC24898: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:94 LDA #GIYGAS_PHASES::BATTLE_STARTED
    // Overlapping static entry reached from 0xC24897.
    case 0xC24899: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:95 STA GIYGAS_PHASE
    case 0xC2489A: cpu.execute_instruction<0x8D>(0x00A97A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC2489D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00D89A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2489D.
    case 0xC2489F: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC248A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC248A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0000CB, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC248A2.
    case 0xC248A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:97 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC248A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:98 LDA CURRENT_BATTLE_GROUP
    case 0xC248A7: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/battle/main_battle_routine.asm:99 ASL
    case 0xC248AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:100 ASL
    case 0xC248AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:101 STA @LOCAL0F
    case 0xC248AC: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248AE: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248B0: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248B2: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:102 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC248B4: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:103 CLC
    case 0xC248B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:104 ADC @VIRTUAL0A
    case 0xC248B7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:105 STA @VIRTUAL0A
    case 0xC248B9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:106 LDA [@VIRTUAL0A]
    case 0xC248BB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:107 STA @LOCAL0E
    case 0xC248BD: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:108 LDA @LOCAL0F
    case 0xC248BF: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:109 INC
    case 0xC248C1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:110 INC
    case 0xC248C2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:111 CLC
    case 0xC248C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:112 ADC @VIRTUAL06
    case 0xC248C4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:113 STA @VIRTUAL06
    case 0xC248C6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:114 LDA [@VIRTUAL06]
    case 0xC248C8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:118 STA @LOCAL0D
    case 0xC248CA: cpu.execute_instruction<0x85>(0x00002B, 2); return true;
    // src/battle/main_battle_routine.asm:120 LDA CURRENT_BATTLE_GROUP
    case 0xC248CC: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/battle/main_battle_routine.asm:121 ASL
    case 0xC248CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:122 ASL
    case 0xC248D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:123 ASL
    case 0xC248D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:124 CLC
    case 0xC248D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC248D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:125 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC248D3.
    case 0xC248D5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:126 TAX
    case 0xC248D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:127 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC248D7: cpu.execute_instruction<0xBF>(0xD0C60D, 4); return true;
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    case 0xC248DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC248DB.
    case 0xC248DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:132 STA @LOCAL0C
    case 0xC248DE: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC248E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:138 STZ MIRROR_ENEMY
    case 0xC248E2: cpu.execute_instruction<0x9C>(0x00AA12, 3); return true;
    // src/battle/main_battle_routine.asm:146 STZ @LOCAL0B
    case 0xC248E5: cpu.execute_instruction<0x64>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC248E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:148 LDA #0
    case 0xC248E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/battle/main_battle_routine.asm:149 STA BATTLE_ITEM_USED
    case 0xC248EB: cpu.execute_instruction<0x8D>(0x00A97C, 3); return true;
    // src/battle/main_battle_routine.asm:149 STA BATTLE_ITEM_USED
    // Overlapping static entry reached from 0xC248E9.
    case 0xC248EC: cpu.execute_instruction<0x7C>(0x00C2A9, 3); return true;
    // src/battle/main_battle_routine.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC248EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:151 STZ @LOCAL0A
    case 0xC248F0: cpu.execute_instruction<0x64>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:153 STZ BATTLE_MONEY_SCRATCH
    case 0xC248F2: cpu.execute_instruction<0x9C>(0x00A978, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC248F5.
    case 0xC248F7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248F8: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC248FB.
    case 0xC248FD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:154 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC248FE: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // src/battle/main_battle_routine.asm:155 JSL UNKNOWN_C08726
    case 0xC24901: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/battle/main_battle_routine.asm:156 JSL UNKNOWN_C2E0E7
    case 0xC24905: cpu.execute_instruction<0x22>(0xC2E0E7, 4); return true;
    // src/battle/main_battle_routine.asm:157 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC24909: cpu.execute_instruction<0x22>(0xC2C8C8, 4); return true;
    // src/battle/main_battle_routine.asm:158 JSL LOAD_WINDOW_GFX
    case 0xC2490D: cpu.execute_instruction<0x22>(0xC47C3F, 4); return true;
    // src/battle/main_battle_routine.asm:164 LDA #1
    case 0xC24911: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:164 LDA #1
    // Overlapping static entry reached from 0xC24911.
    case 0xC24913: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:165 JSL UNKNOWN_C44963
    case 0xC24914: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // src/battle/main_battle_routine.asm:166 LDY @LOCAL0C
    case 0xC24918: cpu.execute_instruction<0xA4>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:167 LDX @LOCAL0D
    case 0xC2491A: cpu.execute_instruction<0xA6>(0x00002B, 2); return true;
    // src/battle/main_battle_routine.asm:169 LDA @LOCAL0E
    case 0xC2491C: cpu.execute_instruction<0xA5>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:170 JSL LOAD_BATTLE_BG
    case 0xC2491E: cpu.execute_instruction<0x22>(0xC2D121, 4); return true;
    // src/battle/main_battle_routine.asm:171 JSL UNKNOWN_C2EEE7
    case 0xC24922: cpu.execute_instruction<0x22>(0xC2EEE7, 4); return true;
    // src/battle/main_battle_routine.asm:172 LDY #0
    case 0xC24926: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:172 LDY #0
    // Overlapping static entry reached from 0xC24926.
    case 0xC24928: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:176 STY @LOCAL10
    case 0xC24929: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:178 BRA @UNKNOWN4
    case 0xC2492B: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/battle/main_battle_routine.asm:180 SEP #PROC_FLAGS::ACCUM8
    case 0xC2492D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/main_battle_routine.asm:181 STZ_BADOPT @LOCAL00
    case 0xC2492F: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    case 0xC24931: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:182 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24931.
    case 0xC24933: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:183 REP #PROC_FLAGS::ACCUM8
    case 0xC24934: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:184 TYA
    case 0xC24936: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:185 TXY
    case 0xC24937: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:186 JSL MULT168
    case 0xC24938: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:187 CLC
    case 0xC2493C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2493D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:188 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2493D.
    case 0xC2493F: cpu.execute_instruction<0x9F>(0x8EFC22, 4); return true;
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    case 0xC24940: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/battle/main_battle_routine.asm:189 JSL MEMSET16
    // Overlapping static entry reached from 0xC2493F.
    case 0xC24943: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0031A4, 3); return true;
    // src/battle/main_battle_routine.asm:195 LDY @LOCAL10
    case 0xC24944: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:195 LDY @LOCAL10
    // Overlapping static entry reached from 0xC24943.
    case 0xC24945: cpu.execute_instruction<0x31>(0x0000C8, 2); return true;
    // src/battle/main_battle_routine.asm:196 INY
    case 0xC24946: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:197 STY @LOCAL10
    case 0xC24947: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    case 0xC24949: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:200 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24949.
    case 0xC2494B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:201 BCC @UNKNOWN3
    case 0xC2494C: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/battle/main_battle_routine.asm:202 STZ HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2494E: cpu.execute_instruction<0x9C>(0x00AA0C, 3); return true;
    // src/battle/main_battle_routine.asm:203 LDY #0
    case 0xC24951: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:203 LDY #0
    // Overlapping static entry reached from 0xC24951.
    case 0xC24953: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:204 STY @LOCAL09
    case 0xC24954: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:205 STZ @LOCAL10
    case 0xC24956: cpu.execute_instruction<0x64>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:206 JMP @UNKNOWN9
    case 0xC24958: cpu.execute_instruction<0x4C>(0x0049F4, 3); return true;
    // src/battle/main_battle_routine.asm:215 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC2495B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:215 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC2495B.
    case 0xC2495D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:216 LDA (@LOCAL10),Y
    case 0xC2495E: cpu.execute_instruction<0xB1>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    case 0xC24960: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC24960.
    case 0xC24962: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:219 STA @VIRTUAL04
    case 0xC24963: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:220 STA @LOCAL08
    case 0xC24965: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:221 LDA @VIRTUAL04
    case 0xC24967: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:222 BEQ @UNKNOWN7
    case 0xC24969: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:223 LDA @VIRTUAL04
    case 0xC2496B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:224 CMP #4
    case 0xC2496D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:224 CMP #4
    // Overlapping static entry reached from 0xC2496D.
    case 0xC2496F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC24970: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:225 BGT @UNKNOWN7
    case 0xC24972: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:226 LDA @LOCAL10
    case 0xC24974: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    case 0xC24976: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:227 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24976.
    case 0xC24978: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:228 JSL MULT168
    case 0xC24979: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:229 CLC
    case 0xC2497D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2497E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:230 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2497E.
    case 0xC24980: cpu.execute_instruction<0x9F>(0x04A5AA, 4); return true;
    // src/battle/main_battle_routine.asm:231 TAX
    case 0xC24981: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:232 LDA @VIRTUAL04
    case 0xC24982: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:233 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC24984: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // src/battle/main_battle_routine.asm:234 BRA @UNKNOWN8
    case 0xC24988: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/main_battle_routine.asm:236 LDA @VIRTUAL04
    case 0xC2498A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:237 CMP #5
    case 0xC2498C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:237 CMP #5
    // Overlapping static entry reached from 0xC2498C.
    case 0xC2498E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:238 BCC @UNKNOWN8
    case 0xC2498F: cpu.execute_instruction<0x90>(0x000061, 2); return true;
    // src/battle/main_battle_routine.asm:239 LDA @LOCAL10
    case 0xC24991: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    case 0xC24993: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:240 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24993.
    case 0xC24995: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:241 JSL MULT168
    case 0xC24996: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:242 STA @VIRTUAL02
    case 0xC2499A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:243 CLC
    case 0xC2499C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2499D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:244 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2499D.
    case 0xC2499F: cpu.execute_instruction<0x9F>(0x1F86AA, 4); return true;
    // src/battle/main_battle_routine.asm:245 TAX
    case 0xC249A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:246 STX @LOCAL07
    case 0xC249A1: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:247 LDA @VIRTUAL04
    case 0xC249A3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:248 ASL
    case 0xC249A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:249 TAX
    case 0xC249A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:250 INX
    case 0xC249A7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:251 LDA f:NPC_AI_TABLE,X
    case 0xC249A8: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    case 0xC249AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC249AC.
    case 0xC249AE: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:253 LDX @LOCAL07
    case 0xC249AF: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:254 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC249B1: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/main_battle_routine.asm:255 LDX @VIRTUAL02
    case 0xC249B5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:256 SEP #PROC_FLAGS::ACCUM8
    case 0xC249B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:257 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC249B9: cpu.execute_instruction<0x9E>(0x009FBA, 3); return true;
    // src/battle/main_battle_routine.asm:258 REP #PROC_FLAGS::ACCUM8
    case 0xC249BC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:259 LDA @VIRTUAL04
    case 0xC249BE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC249C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:261 LDX @VIRTUAL02
    case 0xC249C2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:262 STA BATTLERS_TABLE+battler::npc_id,X
    case 0xC249C4: cpu.execute_instruction<0x9D>(0x009FBB, 3); return true;
    // src/battle/main_battle_routine.asm:263 LDY @LOCAL09
    case 0xC249C7: cpu.execute_instruction<0xA4>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC249C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:265 TYA
    case 0xC249CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC249CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:267 LDX @VIRTUAL02
    case 0xC249CE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:268 STA BATTLERS_TABLE+16,X
    case 0xC249D0: cpu.execute_instruction<0x9D>(0x009FBC, 3); return true;
    // src/battle/main_battle_routine.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC249D3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:270 TYA
    case 0xC249D5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:271 ASL
    case 0xC249D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:278 TAX
    case 0xC249D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:279 LDA GAME_STATE+game_state::party_npc_1_hp,X
    case 0xC249D8: cpu.execute_instruction<0xBD>(0x00983C, 3); return true;
    // src/battle/main_battle_routine.asm:281 LDX @VIRTUAL02
    case 0xC249DB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:282 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC249DD: cpu.execute_instruction<0x9D>(0x009FBF, 3); return true;
    // src/battle/main_battle_routine.asm:283 LDX @VIRTUAL02
    case 0xC249E0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:284 STA BATTLERS_TABLE+battler::hp,X
    case 0xC249E2: cpu.execute_instruction<0x9D>(0x009FBD, 3); return true;
    // src/battle/main_battle_routine.asm:285 INY
    case 0xC249E5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:286 STY @LOCAL09
    case 0xC249E6: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:287 LDX @VIRTUAL02
    case 0xC249E8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:288 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC249EA: cpu.execute_instruction<0x9E>(0x009FC5, 3); return true;
    // src/battle/main_battle_routine.asm:289 LDX @VIRTUAL02
    case 0xC249ED: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:290 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC249EF: cpu.execute_instruction<0x9E>(0x009FC3, 3); return true;
    // src/battle/main_battle_routine.asm:292 INC @LOCAL10
    case 0xC249F2: cpu.execute_instruction<0xE6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:294 LDA @LOCAL10
    case 0xC249F4: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:295 CMP #6
    case 0xC249F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:295 CMP #6
    // Overlapping static entry reached from 0xC249F6.
    case 0xC249F8: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC249F9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC249FB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:296 BCCL @UNKNOWN5
    case 0xC249FD: cpu.execute_instruction<0x4C>(0x00495B, 3); return true;
    // src/battle/main_battle_routine.asm:297 JSL UNKNOWN_C2F0D1
    case 0xC24A00: cpu.execute_instruction<0x22>(0xC2F0D1, 4); return true;
    // src/battle/main_battle_routine.asm:298 LDY #0
    case 0xC24A04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:298 LDY #0
    // Overlapping static entry reached from 0xC24A04.
    case 0xC24A06: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:299 STY @LOCAL10
    case 0xC24A07: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:300 BRA @UNKNOWN12
    case 0xC24A09: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:302 TYA
    case 0xC24A0B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    case 0xC24A0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:303 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24A0C.
    case 0xC24A0E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:304 JSL MULT168
    case 0xC24A0F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:305 CLC
    case 0xC24A13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC24A14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00A21C, 3); return true;
    // src/battle/main_battle_routine.asm:306 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC24A14.
    case 0xC24A16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AA, 2); else cpu.execute_instruction<0xA2>(0x0086AA, 3); return true;
    // src/battle/main_battle_routine.asm:307 TAX
    case 0xC24A17: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:308 STX @LOCAL07
    case 0xC24A18: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:308 STX @LOCAL07
    // Overlapping static entry reached from 0xC24A16.
    case 0xC24A19: cpu.execute_instruction<0x1F>(0x9831A4, 4); return true;
    // src/battle/main_battle_routine.asm:309 LDY @LOCAL10
    case 0xC24A1A: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:310 TYA
    case 0xC24A1C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:311 ASL
    case 0xC24A1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:312 TAX
    case 0xC24A1E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:313 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC24A1F: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/main_battle_routine.asm:314 LDX @LOCAL07
    case 0xC24A22: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:315 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24A24: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/main_battle_routine.asm:316 LDY @LOCAL10
    case 0xC24A28: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:317 INY
    case 0xC24A2A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:318 STY @LOCAL10
    case 0xC24A2B: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:320 CPY ENEMIES_IN_BATTLE
    case 0xC24A2D: cpu.execute_instruction<0xCC>(0x009F8A, 3); return true;
    // src/battle/main_battle_routine.asm:321 BCC @UNKNOWN11
    case 0xC24A30: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/main_battle_routine.asm:322 JSL UNKNOWN_C2F121
    case 0xC24A32: cpu.execute_instruction<0x22>(0xC2F121, 4); return true;
    // src/battle/main_battle_routine.asm:323 JSL UNKNOWN_C2F8F9
    case 0xC24A36: cpu.execute_instruction<0x22>(0xC2F8F9, 4); return true;
    // src/battle/main_battle_routine.asm:324 JSL UNKNOWN_C47F87
    case 0xC24A3A: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/battle/main_battle_routine.asm:325 LDA #24
    case 0xC24A3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/battle/main_battle_routine.asm:325 LDA #24
    // Overlapping static entry reached from 0xC24A3E.
    case 0xC24A40: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:326 JSL UNKNOWN_C0856B
    case 0xC24A41: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/battle/main_battle_routine.asm:327 LDA #1
    case 0xC24A45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:327 LDA #1
    // Overlapping static entry reached from 0xC24A45.
    case 0xC24A47: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:328 STA BATTLE_MODE_FLAG
    case 0xC24A48: cpu.execute_instruction<0x8D>(0x009643, 3); return true;
    // src/battle/main_battle_routine.asm:329 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24A4B: cpu.execute_instruction<0xAD>(0x009F8C, 3); return true;
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    case 0xC24A4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:330 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24A4E.
    case 0xC24A50: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:331 JSL MULT168
    case 0xC24A51: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:332 CLC
    case 0xC24A55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    case 0xC24A56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/battle/main_battle_routine.asm:333 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24A56.
    case 0xC24A58: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:334 TAX
    case 0xC24A59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:335 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24A5A: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    case 0xC24A5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC24A5E.
    case 0xC24A60: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:337 JSL CHANGE_MUSIC
    case 0xC24A61: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/battle/main_battle_routine.asm:338 JSL UNKNOWN_C08744
    case 0xC24A65: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/battle/main_battle_routine.asm:339 LDX #1
    case 0xC24A69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:339 LDX #1
    // Overlapping static entry reached from 0xC24A69.
    case 0xC24A6B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/main_battle_routine.asm:340 TXA
    case 0xC24A6C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:341 JSL FADE_IN
    case 0xC24A6D: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/battle/main_battle_routine.asm:342 LDA BATTLE_MODE
    case 0xC24A71: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24A74: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:343 BNEL @UNKNOWN40
    case 0xC24A76: cpu.execute_instruction<0x4C>(0x004CEF, 3); return true;
    // src/battle/main_battle_routine.asm:344 LDA @LOCAL12
    case 0xC24A79: cpu.execute_instruction<0xA5>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:345 JSL UNKNOWN_C1DCCB
    case 0xC24A7B: cpu.execute_instruction<0x22>(0xC1DCCB, 4); return true;
    // src/battle/main_battle_routine.asm:346 LDA #0
    case 0xC24A7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:346 LDA #0
    // Overlapping static entry reached from 0xC24A7F.
    case 0xC24A81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:347 STA @VIRTUAL02
    case 0xC24A82: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:348 TAY
    case 0xC24A84: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:349 STY @LOCAL10
    case 0xC24A85: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:350 JMP @UNKNOWN19
    case 0xC24A87: cpu.execute_instruction<0x4C>(0x004B4A, 3); return true;
    // src/battle/main_battle_routine.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC24A8A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:360 LDA GAME_STATE + game_state::party_members,Y
    case 0xC24A8C: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    case 0xC24A8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:362 AND #$00FF
    // Overlapping static entry reached from 0xC24A8F.
    case 0xC24A91: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:363 STA @VIRTUAL04
    case 0xC24A92: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:364 STA @LOCAL08
    case 0xC24A94: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:365 LDA @VIRTUAL04
    case 0xC24A96: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:366 BEQ @UNKNOWN16
    case 0xC24A98: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:367 LDA @VIRTUAL04
    case 0xC24A9A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:368 CMP #4
    case 0xC24A9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:368 CMP #4
    // Overlapping static entry reached from 0xC24A9C.
    case 0xC24A9E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24A9F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:369 BGT @UNKNOWN16
    case 0xC24AA1: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:370 TYA
    case 0xC24AA3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    case 0xC24AA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:371 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24AA4.
    case 0xC24AA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:372 JSL MULT168
    case 0xC24AA7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:373 CLC
    case 0xC24AAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24AAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:374 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24AAC.
    case 0xC24AAE: cpu.execute_instruction<0x9F>(0x04A5AA, 4); return true;
    // src/battle/main_battle_routine.asm:375 TAX
    case 0xC24AAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:376 LDA @VIRTUAL04
    case 0xC24AB0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:377 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC24AB2: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // src/battle/main_battle_routine.asm:378 JMP @UNKNOWN18
    case 0xC24AB6: cpu.execute_instruction<0x4C>(0x004B45, 3); return true;
    // src/battle/main_battle_routine.asm:380 LDA @VIRTUAL04
    case 0xC24AB9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:381 CMP #5
    case 0xC24ABB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:381 CMP #5
    // Overlapping static entry reached from 0xC24ABB.
    case 0xC24ABD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC24ABE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC24AC0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:382 BCCL @UNKNOWN18
    case 0xC24AC2: cpu.execute_instruction<0x4C>(0x004B45, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24AC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x008F23, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24AC5.
    case 0xC24AC7: cpu.execute_instruction<0x8F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24AC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24ACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24AC7.
    case 0xC24ACB: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24ACA.
    case 0xC24ACC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:383 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC24ACD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:384 LDA @VIRTUAL04
    case 0xC24ACF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:385 ASL
    case 0xC24AD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:389 STA @LOCAL06
    case 0xC24AD2: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24AD4: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24AD6: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24AD8: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:391 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24ADA: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:392 CLC
    case 0xC24ADC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:393 ADC @VIRTUAL0A
    case 0xC24ADD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:394 STA @VIRTUAL0A
    case 0xC24ADF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:395 LDA [@VIRTUAL0A]
    case 0xC24AE1: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    case 0xC24AE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC24AE3.
    case 0xC24AE5: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:397 AND #$0001
    case 0xC24AE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:397 AND #$0001
    // Overlapping static entry reached from 0xC24AE6.
    case 0xC24AE8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:398 BEQ @UNKNOWN18
    case 0xC24AE9: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/battle/main_battle_routine.asm:399 TYA
    case 0xC24AEB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    case 0xC24AEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:400 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24AEC.
    case 0xC24AEE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:401 JSL MULT168
    case 0xC24AEF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:405 STA @LOCAL09
    case 0xC24AF3: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:407 CLC
    case 0xC24AF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC24AF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:408 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24AF6.
    case 0xC24AF8: cpu.execute_instruction<0x9F>(0x1DA5AA, 4); return true;
    // src/battle/main_battle_routine.asm:409 TAX
    case 0xC24AF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:413 LDA @LOCAL06
    case 0xC24AFA: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:415 INC
    case 0xC24AFC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:416 CLC
    case 0xC24AFD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:417 ADC @VIRTUAL06
    case 0xC24AFE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:418 STA @VIRTUAL06
    case 0xC24B00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:419 LDA [@VIRTUAL06]
    case 0xC24B02: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    case 0xC24B04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:420 AND #$00FF
    // Overlapping static entry reached from 0xC24B04.
    case 0xC24B06: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:421 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24B07: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/main_battle_routine.asm:422 LDA @VIRTUAL02
    case 0xC24B0B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:423 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B0D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC24B0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BC, 2); else cpu.execute_instruction<0xA0>(0x009FBC, 3); return true;
    // src/battle/main_battle_routine.asm:424 LDY #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC24B0F.
    case 0xC24B11: cpu.execute_instruction<0x9F>(0xC22391, 4); return true;
    // src/battle/main_battle_routine.asm:428 STA (@LOCAL09),Y
    case 0xC24B12: cpu.execute_instruction<0x91>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:430 REP #PROC_FLAGS::ACCUM8
    case 0xC24B14: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:430 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24B11.
    case 0xC24B15: cpu.execute_instruction<0x20>(0x0002A5, 3); return true;
    // src/battle/main_battle_routine.asm:431 LDA @VIRTUAL02
    case 0xC24B16: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:432 ASL
    case 0xC24B18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:449 TAX
    case 0xC24B19: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:450 LDA GAME_STATE+game_state::party_npc_1_hp,X
    case 0xC24B1A: cpu.execute_instruction<0xBD>(0x00983C, 3); return true;
    // src/battle/main_battle_routine.asm:451 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    case 0xC24B1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BF, 2); else cpu.execute_instruction<0xA0>(0x009FBF, 3); return true;
    // src/battle/main_battle_routine.asm:451 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp_target
    // Overlapping static entry reached from 0xC24B1D.
    case 0xC24B1F: cpu.execute_instruction<0x9F>(0xA02391, 4); return true;
    // src/battle/main_battle_routine.asm:452 STA (@LOCAL09),Y
    case 0xC24B20: cpu.execute_instruction<0x91>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:453 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    case 0xC24B22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BD, 2); else cpu.execute_instruction<0xA0>(0x009FBD, 3); return true;
    // src/battle/main_battle_routine.asm:453 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    // Overlapping static entry reached from 0xC24B1F.
    case 0xC24B23: cpu.execute_instruction<0xBD>(0x00919F, 3); return true;
    // src/battle/main_battle_routine.asm:453 LDY #.LOWORD(BATTLERS_TABLE) + battler::hp
    // Overlapping static entry reached from 0xC24B22.
    case 0xC24B24: cpu.execute_instruction<0x9F>(0xE62391, 4); return true;
    // src/battle/main_battle_routine.asm:454 STA (@LOCAL09),Y
    case 0xC24B25: cpu.execute_instruction<0x91>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:454 STA (@LOCAL09),Y
    // Overlapping static entry reached from 0xC24B23.
    case 0xC24B26: cpu.execute_instruction<0x23>(0x0000E6, 2); return true;
    // src/battle/main_battle_routine.asm:455 INC @VIRTUAL02
    case 0xC24B27: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:455 INC @VIRTUAL02
    // Overlapping static entry reached from 0xC24B24.
    case 0xC24B28: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:456 LDX @LOCAL09
    case 0xC24B29: cpu.execute_instruction<0xA6>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:457 STZ BATTLERS_TABLE+battler::pp_target,X
    case 0xC24B2B: cpu.execute_instruction<0x9E>(0x009FC5, 3); return true;
    // src/battle/main_battle_routine.asm:458 LDX @LOCAL09
    case 0xC24B2E: cpu.execute_instruction<0xA6>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:459 STZ BATTLERS_TABLE+battler::pp,X
    case 0xC24B30: cpu.execute_instruction<0x9E>(0x009FC3, 3); return true;
    // src/battle/main_battle_routine.asm:460 LDX @LOCAL09
    case 0xC24B33: cpu.execute_instruction<0xA6>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:462 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:463 STZ BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC24B37: cpu.execute_instruction<0x9E>(0x009FBA, 3); return true;
    // src/battle/main_battle_routine.asm:464 REP #PROC_FLAGS::ACCUM8
    case 0xC24B3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:465 LDA @VIRTUAL04
    case 0xC24B3C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:466 SEP #PROC_FLAGS::ACCUM8
    case 0xC24B3E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    case 0xC24B40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BB, 2); else cpu.execute_instruction<0xA0>(0x009FBB, 3); return true;
    // src/battle/main_battle_routine.asm:467 LDY #.LOWORD(BATTLERS_TABLE) + battler::npc_id
    // Overlapping static entry reached from 0xC24B40.
    case 0xC24B42: cpu.execute_instruction<0x9F>(0xA42391, 4); return true;
    // src/battle/main_battle_routine.asm:471 STA (@LOCAL09),Y
    case 0xC24B43: cpu.execute_instruction<0x91>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:474 LDY @LOCAL10
    case 0xC24B45: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:474 LDY @LOCAL10
    // Overlapping static entry reached from 0xC24B42.
    case 0xC24B46: cpu.execute_instruction<0x31>(0x0000C8, 2); return true;
    // src/battle/main_battle_routine.asm:475 INY
    case 0xC24B47: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:476 STY @LOCAL10
    case 0xC24B48: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:478 CPY #6
    case 0xC24B4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:478 CPY #6
    // Overlapping static entry reached from 0xC24B4A.
    case 0xC24B4C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24B4D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24B4F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:479 BCCL @UNKNOWN14
    case 0xC24B51: cpu.execute_instruction<0x4C>(0x004A8A, 3); return true;
    // src/battle/main_battle_routine.asm:480 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24B54: cpu.execute_instruction<0x22>(0xC1DD3B, 4); return true;
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    case 0xC24B58: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/main_battle_routine.asm:481 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC24B69.
    case 0xC24B5B: cpu.execute_instruction<0xC1>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC24B5C: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC24B5B.
    case 0xC24B5D: cpu.execute_instruction<0x56>(0x000087, 2); return true;
    // src/battle/main_battle_routine.asm:484 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC24B5D.
    case 0xC24B5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x003F22, 3); return true;
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    case 0xC24B60: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    // Overlapping static entry reached from 0xC24B5F.
    case 0xC24B61: cpu.execute_instruction<0x3F>(0xADC2DB, 4); return true;
    // src/battle/main_battle_routine.asm:485 JSL UNKNOWN_C2DB3F
    // Overlapping static entry reached from 0xC24B5F.
    case 0xC24B62: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:486 LDA PAD_PRESS
    case 0xC24B64: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:486 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC24B61.
    case 0xC24B65: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    case 0xC24B67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC24B65.
    case 0xC24B68: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:487 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC24B67.
    case 0xC24B69: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24B6A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24B69.
    case 0xC24B6B: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    case 0xC24B6C: cpu.execute_instruction<0x4C>(0x004CD5, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:488 BNEL @UNKNOWN39
    // Overlapping static entry reached from 0xC24B6B.
    case 0xC24B6D: cpu.execute_instruction<0xD5>(0x00004C, 2); return true;
    // src/battle/main_battle_routine.asm:489 LDA PAD_PRESS
    case 0xC24B6F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    case 0xC24B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/battle/main_battle_routine.asm:490 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC24B72.
    case 0xC24B74: cpu.execute_instruction<0x20>(0x004EF0, 3); return true;
    // src/battle/main_battle_routine.asm:491 BEQ @UNKNOWN23
    case 0xC24B75: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/battle/main_battle_routine.asm:492 LDA CURRENT_BATTLE_GROUP
    case 0xC24B77: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/battle/main_battle_routine.asm:493 JSL ENEMY_SELECT_MODE
    case 0xC24B7A: cpu.execute_instruction<0x22>(0xC1E1A5, 4); return true;
    // src/battle/main_battle_routine.asm:494 STA @LOCAL10
    case 0xC24B7E: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:495 STA CURRENT_BATTLE_GROUP
    case 0xC24B80: cpu.execute_instruction<0x8D>(0x004A8C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00D89A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24B83.
    case 0xC24B85: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0000CB, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24B88.
    case 0xC24B8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:496 LOADPTR BTL_ENTRY_BG_TABLE, @VIRTUAL06
    case 0xC24B8B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:497 LDA @LOCAL10
    case 0xC24B8D: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:498 ASL
    case 0xC24B8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:499 ASL
    case 0xC24B90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:500 TAX
    case 0xC24B91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B92: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B94: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B96: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:501 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24B98: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:502 CLC
    case 0xC24B9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:503 ADC @VIRTUAL0A
    case 0xC24B9B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:504 STA @VIRTUAL0A
    case 0xC24B9D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:505 LDA [@VIRTUAL0A]
    case 0xC24B9F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:506 STA @LOCAL0E
    case 0xC24BA1: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:507 TXA
    case 0xC24BA3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:508 INC
    case 0xC24BA4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:509 INC
    case 0xC24BA5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:510 CLC
    case 0xC24BA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:511 ADC @VIRTUAL06
    case 0xC24BA7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:512 STA @VIRTUAL06
    case 0xC24BA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:513 LDA [@VIRTUAL06]
    case 0xC24BAB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:517 STA @LOCAL0D
    case 0xC24BAD: cpu.execute_instruction<0x85>(0x00002B, 2); return true;
    // src/battle/main_battle_routine.asm:519 LDA @LOCAL10
    case 0xC24BAF: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:520 ASL
    case 0xC24BB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:521 ASL
    case 0xC24BB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:522 ASL
    case 0xC24BB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:523 CLC
    case 0xC24BB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    case 0xC24BB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:524 ADC #battle_entry_ptr_entry::letterbox_style
    // Overlapping static entry reached from 0xC24BB5.
    case 0xC24BB7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:525 TAX
    case 0xC24BB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:526 LDA f:BTL_ENTRY_PTR_TABLE,X
    case 0xC24BB9: cpu.execute_instruction<0xBF>(0xD0C60D, 4); return true;
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    case 0xC24BBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC24BBD.
    case 0xC24BBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:531 STA @LOCAL0C
    case 0xC24BC0: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:533 JMP @UNKNOWN32
    case 0xC24BC2: cpu.execute_instruction<0x4C>(0x004C78, 3); return true;
    // src/battle/main_battle_routine.asm:535 LDA PAD_HELD
    case 0xC24BC5: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    case 0xC24BC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/battle/main_battle_routine.asm:536 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC24BC8.
    case 0xC24BCA: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    case 0xC24BCB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:537 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xC24BCA.
    case 0xC24BCC: cpu.execute_instruction<0x0C>(0x0033A5, 3); return true;
    // src/battle/main_battle_routine.asm:538 LDA @LOCAL11
    case 0xC24BCD: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:539 CMP #15
    case 0xC24BCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:539 CMP #15
    // Overlapping static entry reached from 0xC24BCF.
    case 0xC24BD1: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/main_battle_routine.asm:540 BCS @UNKNOWN25
    case 0xC24BD2: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:541 INC @LOCAL11
    case 0xC24BD4: cpu.execute_instruction<0xE6>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:542 JMP @UNKNOWN32
    case 0xC24BD6: cpu.execute_instruction<0x4C>(0x004C78, 3); return true;
    // src/battle/main_battle_routine.asm:544 LDA PAD_HELD
    case 0xC24BD9: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    case 0xC24BDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/battle/main_battle_routine.asm:545 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC24BDC.
    case 0xC24BDE: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:546 BEQ @UNKNOWN25
    case 0xC24BDF: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:547 LDA @LOCAL11
    case 0xC24BE1: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:548 CMP #1
    case 0xC24BE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:548 CMP #1
    // Overlapping static entry reached from 0xC24BE3.
    case 0xC24BE5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24BE6: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:549 BLTEQ @UNKNOWN25
    case 0xC24BE8: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:550 DEC @LOCAL11
    case 0xC24BEA: cpu.execute_instruction<0xC6>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:551 JMP @UNKNOWN32
    case 0xC24BEC: cpu.execute_instruction<0x4C>(0x004C78, 3); return true;
    // src/battle/main_battle_routine.asm:553 LDA PAD_HELD
    case 0xC24BEF: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    case 0xC24BF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/battle/main_battle_routine.asm:554 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC24BF2.
    case 0xC24BF4: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    case 0xC24BF5: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/main_battle_routine.asm:555 BEQ @UNKNOWN26
    // Overlapping static entry reached from 0xC24BF4.
    case 0xC24BF6: cpu.execute_instruction<0x0D>(0x0035A5, 3); return true;
    // src/battle/main_battle_routine.asm:556 LDA @LOCAL12
    case 0xC24BF7: cpu.execute_instruction<0xA5>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:557 CMP #1
    case 0xC24BF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:557 CMP #1
    // Overlapping static entry reached from 0xC24BF9.
    case 0xC24BFB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24BFC: cpu.execute_instruction<0x90>(0x000019, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:558 BLTEQ @UNKNOWN27
    case 0xC24BFE: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:559 DEC @LOCAL12
    case 0xC24C00: cpu.execute_instruction<0xC6>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:560 BRA @UNKNOWN32
    case 0xC24C02: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/battle/main_battle_routine.asm:562 LDA PAD_HELD
    case 0xC24C04: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    case 0xC24C07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/battle/main_battle_routine.asm:563 AND #PAD::UP
    // Overlapping static entry reached from 0xC24C07.
    case 0xC24C09: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:564 BEQ @UNKNOWN27
    case 0xC24C0A: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:565 LDA @LOCAL12
    case 0xC24C0C: cpu.execute_instruction<0xA5>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    case 0xC24C0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000063, 2); else cpu.execute_instruction<0xC9>(0x000063, 3); return true;
    // src/battle/main_battle_routine.asm:566 CMP #MAX_LEVEL
    // Overlapping static entry reached from 0xC24C0E.
    case 0xC24C10: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/main_battle_routine.asm:567 BCS @UNKNOWN27
    case 0xC24C11: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:568 INC @LOCAL12
    case 0xC24C13: cpu.execute_instruction<0xE6>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:569 BRA @UNKNOWN32
    case 0xC24C15: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/battle/main_battle_routine.asm:571 LDA PAD_PRESS
    case 0xC24C17: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    case 0xC24C1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24C49.
    case 0xC24C1B: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:572 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC24C1A.
    case 0xC24C1C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:573 BEQ @UNKNOWN28
    case 0xC24C1D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:574 LDA HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC24C1F: cpu.execute_instruction<0xAD>(0x00AA0C, 3); return true;
    // src/battle/main_battle_routine.asm:575 STA @LOCAL12
    case 0xC24C22: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:576 BRA @UNKNOWN32
    case 0xC24C24: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/main_battle_routine.asm:578 LDA PAD_PRESS
    case 0xC24C26: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    case 0xC24C29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/battle/main_battle_routine.asm:579 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC24C29.
    case 0xC24C2B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:580 BEQ @UNKNOWN29
    case 0xC24C2C: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:581 LDA DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C2E: cpu.execute_instruction<0xAD>(0x00AA70, 3); return true;
    // src/battle/main_battle_routine.asm:582 JSL SHOW_PSI_ANIMATION
    case 0xC24C31: cpu.execute_instruction<0x22>(0xC2E116, 4); return true;
    // src/battle/main_battle_routine.asm:583 LDX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C35: cpu.execute_instruction<0xAE>(0x00AA70, 3); return true;
    // src/battle/main_battle_routine.asm:584 INX
    case 0xC24C38: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:585 STX DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C39: cpu.execute_instruction<0x8E>(0x00AA70, 3); return true;
    // src/battle/main_battle_routine.asm:586 CPX #34
    case 0xC24C3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000022, 2); else cpu.execute_instruction<0xE0>(0x000022, 3); return true;
    // src/battle/main_battle_routine.asm:586 CPX #34
    // Overlapping static entry reached from 0xC24C3C.
    case 0xC24C3E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:587 BNE @UNKNOWN29
    case 0xC24C3F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/battle/main_battle_routine.asm:588 STZ DEBUGGING_CURRENT_PSI_ANIMATION
    case 0xC24C41: cpu.execute_instruction<0x9C>(0x00AA70, 3); return true;
    // src/battle/main_battle_routine.asm:590 LDA PAD_PRESS
    case 0xC24C44: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    case 0xC24C47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/battle/main_battle_routine.asm:591 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC24C47.
    case 0xC24C49: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24C4A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:592 BEQL @UNKNOWN21
    case 0xC24C4C: cpu.execute_instruction<0x4C>(0x004B5C, 3); return true;
    // src/battle/main_battle_routine.asm:593 LDX DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24C4F: cpu.execute_instruction<0xAE>(0x00AA74, 3); return true;
    // src/battle/main_battle_routine.asm:594 LDA DEBUGGING_CURRENT_SWIRL
    case 0xC24C52: cpu.execute_instruction<0xAD>(0x00AA72, 3); return true;
    // src/battle/main_battle_routine.asm:595 JSL UNKNOWN_C4A67E
    case 0xC24C55: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // src/battle/main_battle_routine.asm:596 LDX DEBUGGING_CURRENT_SWIRL
    case 0xC24C59: cpu.execute_instruction<0xAE>(0x00AA72, 3); return true;
    // src/battle/main_battle_routine.asm:597 INX
    case 0xC24C5C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:598 STX DEBUGGING_CURRENT_SWIRL
    case 0xC24C5D: cpu.execute_instruction<0x8E>(0x00AA72, 3); return true;
    // src/battle/main_battle_routine.asm:599 CPX #8
    case 0xC24C60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:599 CPX #8
    // Overlapping static entry reached from 0xC24C60.
    case 0xC24C62: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24C63: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:600 BNEL @UNKNOWN21
    case 0xC24C65: cpu.execute_instruction<0x4C>(0x004B5C, 3); return true;
    // src/battle/main_battle_routine.asm:601 STZ DEBUGGING_CURRENT_SWIRL
    case 0xC24C68: cpu.execute_instruction<0x9C>(0x00AA72, 3); return true;
    // src/battle/main_battle_routine.asm:602 LDA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24C6B: cpu.execute_instruction<0xAD>(0x00AA74, 3); return true;
    // src/battle/main_battle_routine.asm:603 INC
    case 0xC24C6E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:604 AND #$0003
    case 0xC24C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:604 AND #$0003
    // Overlapping static entry reached from 0xC24C6F.
    case 0xC24C71: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:605 STA DEBUGGING_CURRENT_SWIRL_FLAGS
    case 0xC24C72: cpu.execute_instruction<0x8D>(0x00AA74, 3); return true;
    // src/battle/main_battle_routine.asm:606 JMP @UNKNOWN21
    case 0xC24C75: cpu.execute_instruction<0x4C>(0x004B5C, 3); return true;
    // src/battle/main_battle_routine.asm:612 LDX #0
    case 0xC24C78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:612 LDX #0
    // Overlapping static entry reached from 0xC24C78.
    case 0xC24C7A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/main_battle_routine.asm:614 LDA @LOCAL11
    case 0xC24C7B: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:615 AND #$0001
    case 0xC24C7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:615 AND #$0001
    // Overlapping static entry reached from 0xC24C7D.
    case 0xC24C7F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:616 BEQ @UNKNOWN33
    case 0xC24C80: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:617 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C82: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:618 LDA #1
    case 0xC24C84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    case 0xC24C86: cpu.execute_instruction<0x8D>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:619 STA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC24C84.
    case 0xC24C87: cpu.execute_instruction<0x6F>(0x01A298, 4); return true;
    // src/battle/main_battle_routine.asm:625 LDX #1
    case 0xC24C89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:625 LDX #1
    // Overlapping static entry reached from 0xC24C89.
    case 0xC24C8B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:644 REP #PROC_FLAGS::ACCUM8
    case 0xC24C8C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:645 LDA @LOCAL11
    case 0xC24C8E: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:646 AND #$0002
    case 0xC24C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:646 AND #$0002
    // Overlapping static entry reached from 0xC24C90.
    case 0xC24C92: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:647 BEQ @UNKNOWN34
    case 0xC24C93: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:648 SEP #PROC_FLAGS::ACCUM8
    case 0xC24C95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:649 LDA #2
    case 0xC24C97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x009D02, 3); return true;
    // src/battle/main_battle_routine.asm:650 STA GAME_STATE + game_state::party_members,X
    case 0xC24C99: cpu.execute_instruction<0x9D>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:650 STA GAME_STATE + game_state::party_members,X
    // Overlapping static entry reached from 0xC24C97.
    case 0xC24C9A: cpu.execute_instruction<0x6F>(0xC2E898, 4); return true;
    // src/battle/main_battle_routine.asm:651 INX
    case 0xC24C9C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:670 REP #PROC_FLAGS::ACCUM8
    case 0xC24C9D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:670 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24C9A.
    case 0xC24C9E: cpu.execute_instruction<0x20>(0x0033A5, 3); return true;
    // src/battle/main_battle_routine.asm:671 LDA @LOCAL11
    case 0xC24C9F: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:672 AND #$0004
    case 0xC24CA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:672 AND #$0004
    // Overlapping static entry reached from 0xC24CA1.
    case 0xC24CA3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:673 BEQ @UNKNOWN35
    case 0xC24CA4: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:674 SEP #PROC_FLAGS::ACCUM8
    case 0xC24CA6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:675 LDA #3
    case 0xC24CA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009D03, 3); return true;
    // src/battle/main_battle_routine.asm:676 STA GAME_STATE + game_state::party_members,X
    case 0xC24CAA: cpu.execute_instruction<0x9D>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:676 STA GAME_STATE + game_state::party_members,X
    // Overlapping static entry reached from 0xC24CA8.
    case 0xC24CAB: cpu.execute_instruction<0x6F>(0xC2E898, 4); return true;
    // src/battle/main_battle_routine.asm:677 INX
    case 0xC24CAD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:696 REP #PROC_FLAGS::ACCUM8
    case 0xC24CAE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:696 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24CAB.
    case 0xC24CAF: cpu.execute_instruction<0x20>(0x0033A5, 3); return true;
    // src/battle/main_battle_routine.asm:697 LDA @LOCAL11
    case 0xC24CB0: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:698 AND #$0008
    case 0xC24CB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:698 AND #$0008
    // Overlapping static entry reached from 0xC24CB2.
    case 0xC24CB4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:699 BEQ @UNKNOWN36
    case 0xC24CB5: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:700 SEP #PROC_FLAGS::ACCUM8
    case 0xC24CB7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:701 LDA #4
    case 0xC24CB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x009D04, 3); return true;
    // src/battle/main_battle_routine.asm:702 STA GAME_STATE + game_state::party_members,X
    case 0xC24CBB: cpu.execute_instruction<0x9D>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:702 STA GAME_STATE + game_state::party_members,X
    // Overlapping static entry reached from 0xC24CB9.
    case 0xC24CBC: cpu.execute_instruction<0x6F>(0xC2E898, 4); return true;
    // src/battle/main_battle_routine.asm:703 INX
    case 0xC24CBE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:709 REP #PROC_FLAGS::ACCUM8
    case 0xC24CBF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:709 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24CBC.
    case 0xC24CC0: cpu.execute_instruction<0x20>(0x00E28A, 3); return true;
    // src/battle/main_battle_routine.asm:710 TXA
    case 0xC24CC1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:712 SEP #PROC_FLAGS::ACCUM8
    case 0xC24CC2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:712 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC24CC0.
    case 0xC24CC3: cpu.execute_instruction<0x20>(0x00A48D, 3); return true;
    // src/battle/main_battle_routine.asm:713 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC24CC4: cpu.execute_instruction<0x8D>(0x0098A4, 3); return true;
    // src/battle/main_battle_routine.asm:713 STA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC24CC3.
    case 0xC24CC6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:714 BRA @UNKNOWN38
    case 0xC24CC7: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:728 STZ GAME_STATE + game_state::party_members,X
    case 0xC24CC9: cpu.execute_instruction<0x9E>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:729 INX
    case 0xC24CCC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:737 CPX #6
    case 0xC24CCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:737 CPX #6
    // Overlapping static entry reached from 0xC24CCD.
    case 0xC24CCF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:739 BCC @UNKNOWN37
    case 0xC24CD0: cpu.execute_instruction<0x90>(0x0000F7, 2); return true;
    // src/battle/main_battle_routine.asm:740 JMP @UNKNOWN2
    case 0xC24CD2: cpu.execute_instruction<0x4C>(0x0048E0, 3); return true;
    // src/battle/main_battle_routine.asm:742 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24CD5: cpu.execute_instruction<0xAD>(0x009F8C, 3); return true;
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    case 0xC24CD8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:743 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24CD8.
    case 0xC24CDA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:744 JSL MULT168
    case 0xC24CDB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:746 CLC
    case 0xC24CDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    case 0xC24CE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/battle/main_battle_routine.asm:747 ADC #enemy_data::music
    // Overlapping static entry reached from 0xC24CE0.
    case 0xC24CE2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:748 TAX
    case 0xC24CE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:749 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC24CE4: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    case 0xC24CE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:750 AND #$00FF
    // Overlapping static entry reached from 0xC24CE8.
    case 0xC24CEA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:751 JSL CHANGE_MUSIC
    case 0xC24CEB: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    case 0xC24CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/battle/main_battle_routine.asm:753 LDA #EVENT_FLAG::FLG_BUNBUN
    // Overlapping static entry reached from 0xC24CEF.
    case 0xC24CF1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:754 JSL GET_EVENT_FLAG
    case 0xC24CF2: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/battle/main_battle_routine.asm:755 CMP #0
    case 0xC24CF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:755 CMP #0
    // Overlapping static entry reached from 0xC24CF6.
    case 0xC24CF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:756 BEQ @UNKNOWN41
    case 0xC24CF9: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24CFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x00A180, 3); return true;
    // src/battle/main_battle_routine.asm:757 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24CFB.
    case 0xC24CFD: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24CFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0000D7, 3); return true;
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24CFD.
    case 0xC24CFF: cpu.execute_instruction<0xD7>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:758 LDA #ENEMY::BUZZ_BUZZ
    // Overlapping static entry reached from 0xC24CFE.
    case 0xC24D00: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:759 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24D01: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/main_battle_routine.asm:760 SEP #PROC_FLAGS::ACCUM8
    case 0xC24D05: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:761 LDA #1
    case 0xC24D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    case 0xC24D09: cpu.execute_instruction<0x8D>(0x00A190, 3); return true;
    // src/battle/main_battle_routine.asm:762 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+16
    // Overlapping static entry reached from 0xC24D07.
    case 0xC24D0A: cpu.execute_instruction<0x90>(0x0000A1, 2); return true;
    // src/battle/main_battle_routine.asm:763 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::ally_or_enemy
    case 0xC24D0C: cpu.execute_instruction<0x9C>(0x00A18E, 3); return true;
    // src/battle/main_battle_routine.asm:764 LDA #ENEMY::BUZZ_BUZZ
    case 0xC24D0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x008DD7, 3); return true;
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24D11: cpu.execute_instruction<0x8D>(0x00A18F, 3); return true;
    // src/battle/main_battle_routine.asm:765 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24D0F.
    case 0xC24D12: cpu.execute_instruction<0x8F>(0x00A2A1, 4); return true;
    // src/battle/main_battle_routine.asm:772 LDX #0
    case 0xC24D14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:772 LDX #0
    // Overlapping static entry reached from 0xC24D14.
    case 0xC24D16: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:773 STX @LOCAL07
    case 0xC24D17: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:775 BRA @UNKNOWN45
    case 0xC24D19: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/battle/main_battle_routine.asm:783 REP #PROC_FLAGS::ACCUM8
    case 0xC24D1B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:784 LDA GAME_STATE + game_state::party_members,X
    case 0xC24D1D: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    case 0xC24D20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:786 AND #$00FF
    // Overlapping static entry reached from 0xC24D20.
    case 0xC24D22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:787 STA @VIRTUAL04
    case 0xC24D23: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:788 STA @LOCAL08
    case 0xC24D25: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:789 LDA @VIRTUAL04
    case 0xC24D27: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:790 BEQ @UNKNOWN44
    case 0xC24D29: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/main_battle_routine.asm:791 LDA @VIRTUAL04
    case 0xC24D2B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:792 CMP #4
    case 0xC24D2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:792 CMP #4
    // Overlapping static entry reached from 0xC24D2D.
    case 0xC24D2F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24D30: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:793 BGT @UNKNOWN44
    case 0xC24D32: cpu.execute_instruction<0xB0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:794 LDA @VIRTUAL04
    case 0xC24D34: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:795 DEC
    case 0xC24D36: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    case 0xC24D37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/main_battle_routine.asm:796 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24D37.
    case 0xC24D39: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:797 JSL MULT168
    case 0xC24D3A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:798 CLC
    case 0xC24D3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC24D3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/battle/main_battle_routine.asm:799 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC24D3F.
    case 0xC24D41: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/battle/main_battle_routine.asm:800 TAX
    case 0xC24D42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC24D43: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:801 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC24D41.
    case 0xC24D44: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    case 0xC24D46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:802 AND #$00FF
    // Overlapping static entry reached from 0xC24D46.
    case 0xC24D48: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    case 0xC24D49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:803 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC24D49.
    case 0xC24D4B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:804 BNE @UNKNOWN44
    case 0xC24D4C: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC24D4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x00A180, 3); return true;
    // src/battle/main_battle_routine.asm:805 LDX #.LOWORD(BATTLERS_TABLE)+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24D4E.
    case 0xC24D50: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24D50.
    case 0xC24D52: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:806 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC24D51.
    case 0xC24D53: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:807 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC24D54: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/main_battle_routine.asm:808 SEP #PROC_FLAGS::ACCUM8
    case 0xC24D58: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:809 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC24D5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x008DD5, 3); return true;
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC24D5C: cpu.execute_instruction<0x8D>(0x00A18F, 3); return true;
    // src/battle/main_battle_routine.asm:810 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC24D5A.
    case 0xC24D5D: cpu.execute_instruction<0x8F>(0x0A80A1, 4); return true;
    // src/battle/main_battle_routine.asm:811 BRA @UNKNOWN46
    case 0xC24D5F: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:818 LDX @LOCAL07
    case 0xC24D61: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:819 INX
    case 0xC24D63: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:820 STX @LOCAL07
    case 0xC24D64: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:827 CPX #TOTAL_PARTY_COUNT
    case 0xC24D66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:827 CPX #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC24D66.
    case 0xC24D68: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:829 BCC @UNKNOWN42
    case 0xC24D69: cpu.execute_instruction<0x90>(0x0000B0, 2); return true;
    // src/battle/main_battle_routine.asm:831 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC24D6B: cpu.execute_instruction<0x22>(0xC1DD3B, 4); return true;
    // src/battle/main_battle_routine.asm:832 LDA ENEMIES_IN_BATTLE
    case 0xC24D6F: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/battle/main_battle_routine.asm:833 JSR RAND_LIMIT
    case 0xC24D72: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/main_battle_routine.asm:835 ASL
    case 0xC24D75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:836 TAX
    case 0xC24D76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:837 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC24D77: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/main_battle_routine.asm:841 STA @LOCAL0F
    case 0xC24D7A: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D7C.
    case 0xC24D7E: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D7F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D7E.
    case 0xC24D80: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D80.
    case 0xC24D82: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24D81.
    case 0xC24D83: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:843 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24D84: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:847 LDA @LOCAL0F
    case 0xC24D86: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    case 0xC24D88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:849 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24D88.
    case 0xC24D8A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:850 JSL MULT168
    case 0xC24D8B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:855 STA @LOCAL0F
    case 0xC24D8F: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:857 CLC
    case 0xC24D91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    case 0xC24D92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000058, 2); else cpu.execute_instruction<0x69>(0x000058, 3); return true;
    // src/battle/main_battle_routine.asm:858 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC24D92.
    case 0xC24D94: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D95: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D97: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D99: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:859 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC24D9B: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:860 CLC
    case 0xC24D9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:861 ADC @VIRTUAL0A
    case 0xC24D9E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:862 STA @VIRTUAL0A
    case 0xC24DA0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:863 LDA [@VIRTUAL0A]
    case 0xC24DA2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    case 0xC24DA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:864 AND #$00FF
    // Overlapping static entry reached from 0xC24DA4.
    case 0xC24DA6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:865 STA ITEM_DROPPED
    case 0xC24DA7: cpu.execute_instruction<0x8D>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:865 STA ITEM_DROPPED
    // Overlapping static entry reached from 0xC2E34E.
    case 0xC24DA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:869 LDA @LOCAL0F
    case 0xC24DAA: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:871 CLC
    case 0xC24DAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    case 0xC24DAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000057, 2); else cpu.execute_instruction<0x69>(0x000057, 3); return true;
    // src/battle/main_battle_routine.asm:872 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC24DAD.
    case 0xC24DAF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:873 CLC
    case 0xC24DB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:874 ADC @VIRTUAL06
    case 0xC24DB1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:875 STA @VIRTUAL06
    case 0xC24DB3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:876 LDA [@VIRTUAL06]
    case 0xC24DB5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    case 0xC24DB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:877 AND #$00FF
    // Overlapping static entry reached from 0xC24DB7.
    case 0xC24DB9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:878 BEQ @RARITY_ZERO
    case 0xC24DBA: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:879 CMP #1
    case 0xC24DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:879 CMP #1
    // Overlapping static entry reached from 0xC24DBC.
    case 0xC24DBE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:880 BEQ @RARITY_ONE
    case 0xC24DBF: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:881 CMP #2
    case 0xC24DC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:881 CMP #2
    // Overlapping static entry reached from 0xC24DC1.
    case 0xC24DC3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:882 BEQ @RARITY_TWO
    case 0xC24DC4: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/main_battle_routine.asm:883 CMP #3
    case 0xC24DC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:883 CMP #3
    // Overlapping static entry reached from 0xC24DC6.
    case 0xC24DC8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:884 BEQ @RARITY_THREE
    case 0xC24DC9: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/main_battle_routine.asm:885 CMP #4
    case 0xC24DCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:885 CMP #4
    // Overlapping static entry reached from 0xC24DCB.
    case 0xC24DCD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:886 BEQ @RARITY_FOUR
    case 0xC24DCE: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/battle/main_battle_routine.asm:887 CMP #5
    case 0xC24DD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:887 CMP #5
    // Overlapping static entry reached from 0xC24DD0.
    case 0xC24DD2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:888 BEQ @RARITY_FIVE
    case 0xC24DD3: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/battle/main_battle_routine.asm:889 CMP #6
    case 0xC24DD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:889 CMP #6
    // Overlapping static entry reached from 0xC24DD5.
    case 0xC24DD7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:890 BEQ @RARITY_SIX
    case 0xC24DD8: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/battle/main_battle_routine.asm:891 BRA @RARITY_SEVEN
    case 0xC24DDA: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/battle/main_battle_routine.asm:893 JSL RAND
    case 0xC24DDC: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    case 0xC24DE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/battle/main_battle_routine.asm:894 AND #$007F ;1/2
    // Overlapping static entry reached from 0xC24DE0.
    case 0xC24DE2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:895 BEQ @RARITY_SEVEN
    case 0xC24DE3: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/battle/main_battle_routine.asm:896 STZ ITEM_DROPPED
    case 0xC24DE5: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:897 BRA @RARITY_SEVEN
    case 0xC24DE8: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/main_battle_routine.asm:899 JSL RAND
    case 0xC24DEA: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    case 0xC24DEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/battle/main_battle_routine.asm:900 AND #$003F ;1/4
    // Overlapping static entry reached from 0xC24DEE.
    case 0xC24DF0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:901 BEQ @RARITY_SEVEN
    case 0xC24DF1: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/battle/main_battle_routine.asm:902 STZ ITEM_DROPPED
    case 0xC24DF3: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:903 BRA @RARITY_SEVEN
    case 0xC24DF6: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/battle/main_battle_routine.asm:905 JSL RAND
    case 0xC24DF8: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    case 0xC24DFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:906 AND #$001F ;1/8
    // Overlapping static entry reached from 0xC24DFC.
    case 0xC24DFE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:907 BEQ @RARITY_SEVEN
    case 0xC24DFF: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/main_battle_routine.asm:908 STZ ITEM_DROPPED
    case 0xC24E01: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:909 BRA @RARITY_SEVEN
    case 0xC24E04: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/battle/main_battle_routine.asm:911 JSL RAND
    case 0xC24E06: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    case 0xC24E0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:912 AND #$000F ;1/16
    // Overlapping static entry reached from 0xC24E0A.
    case 0xC24E0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:913 BEQ @RARITY_SEVEN
    case 0xC24E0D: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:914 STZ ITEM_DROPPED
    case 0xC24E0F: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:915 BRA @RARITY_SEVEN
    case 0xC24E12: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:917 JSL RAND
    case 0xC24E14: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    case 0xC24E18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:918 AND #$0007 ;1/32
    // Overlapping static entry reached from 0xC24E18.
    case 0xC24E1A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:919 BEQ @RARITY_SEVEN
    case 0xC24E1B: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:920 STZ ITEM_DROPPED
    case 0xC24E1D: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:921 BRA @RARITY_SEVEN
    case 0xC24E20: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:923 JSL RAND
    case 0xC24E22: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    case 0xC24E26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:924 AND #$0003 ;1/64
    // Overlapping static entry reached from 0xC24E26.
    case 0xC24E28: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:925 BEQ @RARITY_SEVEN
    case 0xC24E29: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:926 STZ ITEM_DROPPED
    case 0xC24E2B: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:927 BRA @RARITY_SEVEN
    case 0xC24E2E: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:929 JSL RAND
    case 0xC24E30: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    case 0xC24E34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:930 AND #$0001 ;1/128
    // Overlapping static entry reached from 0xC24E34.
    case 0xC24E36: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:931 BEQ @RARITY_SEVEN
    case 0xC24E37: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/main_battle_routine.asm:932 STZ ITEM_DROPPED
    case 0xC24E39: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:934 LDA ITEM_DROPPED
    case 0xC24E3C: cpu.execute_instruction<0xAD>(0x00AA10, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24E3F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:935 BNEL @END_ITEM_DROP
    case 0xC24E41: cpu.execute_instruction<0x4C>(0x004ECD, 3); return true;
    // src/battle/main_battle_routine.asm:936 LDX #0
    case 0xC24E44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:936 LDX #0
    // Overlapping static entry reached from 0xC24E44.
    case 0xC24E46: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:937 STX @LOCAL10
    case 0xC24E47: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:938 BRA @CONSOLATION_OUTER_LOOP_ENTRY
    case 0xC24E49: cpu.execute_instruction<0x80>(0x000078, 2); return true;
    // src/battle/main_battle_routine.asm:940 LDY #8
    case 0xC24E4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:940 LDY #8
    // Overlapping static entry reached from 0xC24E4B.
    case 0xC24E4D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:944 STY @LOCAL0F
    case 0xC24E4E: cpu.execute_instruction<0x84>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:946 BRA @CONSOLATION_INNER_LOOP_ENTRY
    case 0xC24E50: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // src/battle/main_battle_routine.asm:948 TYA
    case 0xC24E52: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    case 0xC24E53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:949 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24E53.
    case 0xC24E55: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:950 JSL MULT168
    case 0xC24E56: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:952 STA @LOCAL09
    case 0xC24E5A: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:953 TAX
    case 0xC24E5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:954 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC24E5D: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    case 0xC24E60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:955 AND #$00FF
    // Overlapping static entry reached from 0xC24E60.
    case 0xC24E62: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:956 BEQ @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24E63: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x003109, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E65.
    case 0xC24E67: cpu.execute_instruction<0x31>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E68: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E67.
    case 0xC24E69: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E69.
    case 0xC24E6B: cpu.execute_instruction<0xC2>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24E6A.
    case 0xC24E6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:957 LOADPTR CONSOLATION_ITEM_TABLE, @VIRTUAL06
    case 0xC24E6D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:958 LDX @LOCAL10
    case 0xC24E6F: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:959 TXA
    case 0xC24E71: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E72: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:960 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC24E77: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:961 STA @VIRTUAL02
    case 0xC24E79: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:962 LDA @LOCAL09
    case 0xC24E7B: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:963 TAX
    case 0xC24E7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:964 LDA @VIRTUAL02
    case 0xC24E7E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E80: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E82: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E84: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:965 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24E86: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:966 CLC
    case 0xC24E88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:967 ADC @VIRTUAL0A
    case 0xC24E89: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:968 STA @VIRTUAL0A
    case 0xC24E8B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:969 LDA [@VIRTUAL0A]
    case 0xC24E8D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    case 0xC24E8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:970 AND #$00FF
    // Overlapping static entry reached from 0xC24E8F.
    case 0xC24E91: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/main_battle_routine.asm:971 CMP BATTLERS_TABLE + battler::id,X
    case 0xC24E92: cpu.execute_instruction<0xDD>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:972 BNE @ENEMY_NOT_IN_CONSOLATION_TABLE
    case 0xC24E95: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:973 LDA #7
    case 0xC24E97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:973 LDA #7
    // Overlapping static entry reached from 0xC24E97.
    case 0xC24E99: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:974 JSR RAND_LIMIT
    case 0xC24E9A: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/main_battle_routine.asm:975 PHA
    case 0xC24E9D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:976 LDA @VIRTUAL02
    case 0xC24E9E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:977 PLY
    case 0xC24EA0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:978 STY @VIRTUAL02
    case 0xC24EA1: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:979 CLC
    case 0xC24EA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:980 ADC @VIRTUAL02
    case 0xC24EA4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:980 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC24EFA.
    case 0xC24EA5: cpu.execute_instruction<0x02>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:981 INC
    case 0xC24EA6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:982 CLC
    case 0xC24EA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:983 ADC @VIRTUAL06
    case 0xC24EA8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:984 STA @VIRTUAL06
    case 0xC24EAA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:985 LDA [@VIRTUAL06]
    case 0xC24EAC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    case 0xC24EAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:986 AND #$00FF
    // Overlapping static entry reached from 0xC24EAE.
    case 0xC24EB0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:987 STA ITEM_DROPPED
    case 0xC24EB1: cpu.execute_instruction<0x8D>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:994 LDY @LOCAL0F
    case 0xC24EB4: cpu.execute_instruction<0xA4>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:995 INY
    case 0xC24EB6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:996 STY @LOCAL0F
    case 0xC24EB7: cpu.execute_instruction<0x84>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    case 0xC24EB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:999 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24EB9.
    case 0xC24EBB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1000 BCC @CONSOLATION_INNER_LOOP_BEGIN
    case 0xC24EBC: cpu.execute_instruction<0x90>(0x000094, 2); return true;
    // src/battle/main_battle_routine.asm:1001 LDX @LOCAL10
    case 0xC24EBE: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1002 INX
    case 0xC24EC0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1003 STX @LOCAL10
    case 0xC24EC1: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1005 CPX #2
    case 0xC24EC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1005 CPX #2
    // Overlapping static entry reached from 0xC24EC3.
    case 0xC24EC5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24EC6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24EC8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1006 BCCL @CONSOLATION_OUTER_LOOP_BEGIN
    case 0xC24ECA: cpu.execute_instruction<0x4C>(0x004E4B, 3); return true;
    // src/battle/main_battle_routine.asm:1011 STZ @LOCAL06
    case 0xC24ECD: cpu.execute_instruction<0x64>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1013 LDA BATTLE_INITIATIVE
    case 0xC24ECF: cpu.execute_instruction<0xAD>(0x004DBC, 3); return true;
    // src/battle/main_battle_routine.asm:1014 BEQ @UNKNOWN64
    case 0xC24ED2: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:1015 CMP #1
    case 0xC24ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1015 CMP #1
    // Overlapping static entry reached from 0xC24ED4.
    case 0xC24ED6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1016 BEQ @UNKNOWN62
    case 0xC24ED7: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1017 CMP #2
    case 0xC24ED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1017 CMP #2
    // Overlapping static entry reached from 0xC24ED9.
    case 0xC24EDB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1018 BEQ @UNKNOWN63
    case 0xC24EDC: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:1019 BRA @UNKNOWN64
    case 0xC24EDE: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    case 0xC24EE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1021 LDA #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24EE0.
    case 0xC24EE2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1025 STA @LOCAL06
    case 0xC24EE3: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1027 BRA @UNKNOWN64
    case 0xC24EE5: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    case 0xC24EE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1029 LDA #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC24EE7.
    case 0xC24EE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1033 STA @LOCAL06
    case 0xC24EEA: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1036 STZ BATTLE_INITIATIVE
    case 0xC24EEC: cpu.execute_instruction<0x9C>(0x004DBC, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24B74.
    case 0xC24EF0: cpu.execute_instruction<0x0E>(0x002200, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24EEF.
    case 0xC24EF1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC24EF2: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24EF0.
    case 0xC24EF3: cpu.execute_instruction<0x47>(0x0000DD, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1037 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC24EF3.
    case 0xC24EF5: cpu.execute_instruction<0xC1>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00A21C, 3); return true;
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24EF5.
    case 0xC24EF7: cpu.execute_instruction<0x1C>(0x008DA2, 3); return true;
    // src/battle/main_battle_routine.asm:1039 LDA #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24EF6.
    case 0xC24EF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00008D, 2); else cpu.execute_instruction<0xA2>(0x00708D, 3); return true;
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    case 0xC24EF9: cpu.execute_instruction<0x8D>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24EF8.
    case 0xC24EFA: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:1040 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC24EF8.
    case 0xC24EFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x0001A9, 3); return true;
    // src/battle/main_battle_routine.asm:1041 LDA #1
    case 0xC24EFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1041 LDA #1
    // Overlapping static entry reached from 0xC24EFB.
    case 0xC24EFD: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1041 LDA #1
    // Overlapping static entry reached from 0xC24EFC.
    case 0xC24EFE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1042 JSL FIX_ATTACKER_NAME
    case 0xC24EFF: cpu.execute_instruction<0x22>(0xC23BCF, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24F03.
    case 0xC24F05: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F06: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24F05.
    case 0xC24F07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC24F08.
    case 0xC24F0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1043 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC24F0B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1044 LDA ENEMIES_IN_BATTLE_IDS
    case 0xC24F0D: cpu.execute_instruction<0xAD>(0x009F8C, 3); return true;
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    case 0xC24F10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:1045 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC24F10.
    case 0xC24F12: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1046 JSL MULT168
    case 0xC24F13: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1047 CLC
    case 0xC24F17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    case 0xC24F18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002D, 2); else cpu.execute_instruction<0x69>(0x00002D, 3); return true;
    // src/battle/main_battle_routine.asm:1048 ADC #enemy_data::encounter_text_ptr
    // Overlapping static entry reached from 0xC24F18.
    case 0xC24F1A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:1049 CLC
    case 0xC24F1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1050 ADC @VIRTUAL0A
    case 0xC24F1C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1051 STA @VIRTUAL0A
    case 0xC24F1E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC24F20.
    case 0xC24F22: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F23: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F25: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F26: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F28: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1052 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC24F2A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F2C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F2E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F30: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1053 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24F32: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:1054 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC24F34: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:1058 LDA @LOCAL06
    case 0xC24F38: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    case 0xC24F3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1060 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC24F3A.
    case 0xC24F3C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1061 BNE @UNKNOWN65
    case 0xC24F3D: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0078D8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24F3F.
    case 0xC24F41: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    // Overlapping static entry reached from 0xC24F44.
    case 0xC24F46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F47: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1062 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_PC
    case 0xC24F49: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:1064 LDA #0
    case 0xC24F4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1064 LDA #0
    // Overlapping static entry reached from 0xC24F4D.
    case 0xC24F4F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1065 STA @LOCAL10
    case 0xC24F50: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1066 BRA @UNKNOWN70
    case 0xC24F52: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    case 0xC24F54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1068 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24F54.
    case 0xC24F56: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1069 JSL MULT168
    case 0xC24F57: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1070 CLC
    case 0xC24F5B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    case 0xC24F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00A21C, 3); return true;
    // src/battle/main_battle_routine.asm:1071 ADC #.LOWORD(BATTLERS_TABLE)+8*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24F5C.
    case 0xC24F5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00008D, 2); else cpu.execute_instruction<0xA2>(0x00728D, 3); return true;
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    case 0xC24F5F: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC24F5E.
    case 0xC24F60: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:1072 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC24F5E.
    case 0xC24F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x000522, 3); return true;
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    case 0xC24F62: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC24F61.
    case 0xC24F63: cpu.execute_instruction<0x05>(0x00003D, 2); return true;
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC24F61.
    case 0xC24F64: cpu.execute_instruction<0x3D>(0x00AEC2, 3); return true;
    // src/battle/main_battle_routine.asm:1073 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC24F63.
    case 0xC24F65: cpu.execute_instruction<0xC2>(0x0000AE, 2); return true;
    // src/battle/main_battle_routine.asm:1074 LDX CURRENT_TARGET
    case 0xC24F66: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:1074 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC24F64.
    case 0xC24F67: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:1075 LDA a:battler::afflictions+2,X
    case 0xC24F69: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    case 0xC24F6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1076 AND #$00FF
    // Overlapping static entry reached from 0xC24F6C.
    case 0xC24F6E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    case 0xC24F6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1077 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC24F6F.
    case 0xC24F71: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1078 BNE @UNKNOWN67
    case 0xC24F72: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00843F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24F74.
    case 0xC24F76: cpu.execute_instruction<0x84>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F77: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24F76.
    case 0xC24F78: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    // Overlapping static entry reached from 0xC24F79.
    case 0xC24F7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F7C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1079 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_NEMURI
    case 0xC24F7E: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:1081 LDX CURRENT_TARGET
    case 0xC24F82: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:1082 LDA a:battler::afflictions+4,X
    case 0xC24F85: cpu.execute_instruction<0xBD>(0x000021, 3); return true;
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    case 0xC24F88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1083 AND #$00FF
    // Overlapping static entry reached from 0xC24F88.
    case 0xC24F8A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1084 BEQ @UNKNOWN68
    case 0xC24F8B: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x008444, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24F8D.
    case 0xC24F8F: cpu.execute_instruction<0x84>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24F8F.
    case 0xC24F91: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    // Overlapping static entry reached from 0xC24F92.
    case 0xC24F94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F95: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1085 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_FUUIN
    case 0xC24F97: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:1087 LDX CURRENT_TARGET
    case 0xC24F9B: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:1088 LDA a:battler::afflictions+3,X
    case 0xC24F9E: cpu.execute_instruction<0xBD>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    case 0xC24FA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1089 AND #$00FF
    // Overlapping static entry reached from 0xC24FA1.
    case 0xC24FA3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    case 0xC24FA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1090 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC24FA4.
    case 0xC24FA6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1091 BNE @UNKNOWN69
    case 0xC24FA7: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x008445, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24FA9.
    case 0xC24FAB: cpu.execute_instruction<0x84>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FAC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24FAB.
    case 0xC24FAD: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    // Overlapping static entry reached from 0xC24FAE.
    case 0xC24FB0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FB1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1092 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_AT_START_HEN
    case 0xC24FB3: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:1094 LDA @LOCAL10
    case 0xC24FB7: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1095 INC
    case 0xC24FB9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1096 STA @LOCAL10
    case 0xC24FBA: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1098 CMP ENEMIES_IN_BATTLE
    case 0xC24FBC: cpu.execute_instruction<0xCD>(0x009F8A, 3); return true;
    // src/battle/main_battle_routine.asm:1099 BCC @UNKNOWN66
    case 0xC24FBF: cpu.execute_instruction<0x90>(0x000093, 2); return true;
    // src/battle/main_battle_routine.asm:1100 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC24FC1: cpu.execute_instruction<0x22>(0xC1DD59, 4); return true;
    // src/battle/main_battle_routine.asm:1105 STZ @LOCAL09
    case 0xC24FC5: cpu.execute_instruction<0x64>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1106 LDA @LOCAL09
    case 0xC24FC7: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:1108 STA SPECIAL_DEFEAT
    case 0xC24FC9: cpu.execute_instruction<0x8D>(0x00AA0E, 3); return true;
    // src/battle/main_battle_routine.asm:1109 JMP @UNKNOWN236
    case 0xC24FCC: cpu.execute_instruction<0x4C>(0x00608C, 3); return true;
    // src/battle/main_battle_routine.asm:1114 INC @LOCAL0A
    case 0xC24FCF: cpu.execute_instruction<0xE6>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1116 JSL UNKNOWN_C2F917
    case 0xC24FD1: cpu.execute_instruction<0x22>(0xC2F917, 4); return true;
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC24FD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AC, 2); else cpu.execute_instruction<0xA0>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:1117 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24FD5.
    case 0xC24FD7: cpu.execute_instruction<0x9F>(0xA23184, 4); return true;
    // src/battle/main_battle_routine.asm:1118 STY @LOCAL10
    case 0xC24FD8: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1119 LDX #0
    case 0xC24FDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24FD7.
    case 0xC24FDB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1119 LDX #0
    // Overlapping static entry reached from 0xC24FDA.
    case 0xC24FDC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:1120 STX @LOCAL05
    case 0xC24FDD: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1121 BRA @UNKNOWN74
    case 0xC24FDF: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/battle/main_battle_routine.asm:1123 TYX
    case 0xC24FE1: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1124 SEP #PROC_FLAGS::ACCUM8
    case 0xC24FE2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1125 STZ a:battler::has_taken_turn,X
    case 0xC24FE4: cpu.execute_instruction<0x9E>(0x00000D, 3); return true;
    // src/battle/main_battle_routine.asm:1126 REP #PROC_FLAGS::ACCUM8
    case 0xC24FE7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1127 LDA a:battler::consciousness,Y
    case 0xC24FE9: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    case 0xC24FEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1128 AND #$00FF
    // Overlapping static entry reached from 0xC24FEC.
    case 0xC24FEE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1129 BEQ @UNKNOWN73
    case 0xC24FEF: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1130 TYA
    case 0xC24FF1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1131 CLC
    case 0xC24FF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    case 0xC24FF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/battle/main_battle_routine.asm:1132 ADC #battler::initiative
    // Overlapping static entry reached from 0xC24FF3.
    case 0xC24FF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1133 STA @VIRTUAL02
    case 0xC24FF6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1134 LDA a:battler::speed,Y
    case 0xC24FF8: cpu.execute_instruction<0xB9>(0x00002A, 3); return true;
    // src/battle/main_battle_routine.asm:1135 JSR FIFTY_PERCENT_VARIANCE
    case 0xC24FFB: cpu.execute_instruction<0x20>(0x006A44, 3); return true;
    // src/battle/main_battle_routine.asm:1136 LDX @VIRTUAL02
    case 0xC24FFE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1137 STA __BSS_START__,X
    case 0xC25000: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1138 CMP #0
    case 0xC25003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1138 CMP #0
    // Overlapping static entry reached from 0xC25003.
    case 0xC25005: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1139 BNE @UNKNOWN73
    case 0xC25006: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1140 LDA #1
    case 0xC25008: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1140 LDA #1
    // Overlapping static entry reached from 0xC25008.
    case 0xC2500A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:1141 LDX @VIRTUAL02
    case 0xC2500B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1142 STA __BSS_START__,X
    case 0xC2500D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1144 LDY @LOCAL10
    case 0xC25010: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1145 TYA
    case 0xC25012: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1146 CLC
    case 0xC25013: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    case 0xC25014: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1147 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25014.
    case 0xC25016: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:1148 TAY
    case 0xC25017: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1149 STY @LOCAL10
    case 0xC25018: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1150 LDX @LOCAL05
    case 0xC2501A: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1151 INX
    case 0xC2501C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1152 STX @LOCAL05
    case 0xC2501D: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    case 0xC2501F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1154 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2501F.
    case 0xC25021: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1155 BCC @UNKNOWN72
    case 0xC25022: cpu.execute_instruction<0x90>(0x0000BD, 2); return true;
    // src/battle/main_battle_routine.asm:1156 LDA #0
    case 0xC25024: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1156 LDA #0
    // Overlapping static entry reached from 0xC25024.
    case 0xC25026: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1157 STA @LOCAL10
    case 0xC25027: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1158 BRA @UNKNOWN76
    case 0xC25029: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    case 0xC2502B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/main_battle_routine.asm:1160 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2502B.
    case 0xC2502D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1161 JSL MULT168
    case 0xC2502E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1162 TAX
    case 0xC25032: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1163 SEP #PROC_FLAGS::ACCUM8
    case 0xC25033: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1164 STZ PARTY_CHARACTERS + char_struct::unknown94,X
    case 0xC25035: cpu.execute_instruction<0x9E>(0x009A2C, 3); return true;
    // src/battle/main_battle_routine.asm:1165 REP #PROC_FLAGS::ACCUM8
    case 0xC25038: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1166 LDA @LOCAL10
    case 0xC2503A: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1167 INC
    case 0xC2503C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1168 STA @LOCAL10
    case 0xC2503D: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1170 CMP #4
    case 0xC2503F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1170 CMP #4
    // Overlapping static entry reached from 0xC2503F.
    case 0xC25041: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1171 BCC @UNKNOWN75
    case 0xC25042: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/main_battle_routine.asm:1172 LDY #0
    case 0xC25044: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1172 LDY #0
    // Overlapping static entry reached from 0xC25044.
    case 0xC25046: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:1173 STY @LOCAL04
    case 0xC25047: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1174 TYA
    case 0xC25049: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1175 STA @VIRTUAL02
    case 0xC2504A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1176 JMP @UNKNOWN106
    case 0xC2504C: cpu.execute_instruction<0x4C>(0x005280, 3); return true;
    // src/battle/main_battle_routine.asm:1178 JSL CHECK_DEAD_PLAYERS
    case 0xC2504F: cpu.execute_instruction<0x22>(0xC2BB18, 4); return true;
    // src/battle/main_battle_routine.asm:1179 LDA #0
    case 0xC25053: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1179 LDA #0
    // Overlapping static entry reached from 0xC25053.
    case 0xC25055: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1180 JSL COUNT_CHARS
    case 0xC25056: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:1181 CMP #0
    case 0xC2505A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1181 CMP #0
    // Overlapping static entry reached from 0xC2505A.
    case 0xC2505C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1182 BNE @UNKNOWN78
    case 0xC2505D: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2505F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2505F.
    case 0xC25061: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1183 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC25062: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // src/battle/main_battle_routine.asm:1184 JMP @UNKNOWN225
    case 0xC25066: cpu.execute_instruction<0x4C>(0x005EF7, 3); return true;
    // src/battle/main_battle_routine.asm:1193 LDX @VIRTUAL02
    case 0xC25069: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1194 LDA GAME_STATE + game_state::party_members,X
    case 0xC2506B: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    case 0xC2506E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1196 AND #$00FF
    // Overlapping static entry reached from 0xC2506E.
    case 0xC25070: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1197 STA @VIRTUAL04
    case 0xC25071: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1198 STA @LOCAL08
    case 0xC25073: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1199 LDA @VIRTUAL04
    case 0xC25075: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC25077: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1200 BEQL @UNKNOWN105
    case 0xC25079: cpu.execute_instruction<0x4C>(0x00527C, 3); return true;
    // src/battle/main_battle_routine.asm:1201 LDA @VIRTUAL04
    case 0xC2507C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1202 CMP #4
    case 0xC2507E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1202 CMP #4
    // Overlapping static entry reached from 0xC2507E.
    case 0xC25080: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC25081: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC25083: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1203 BGTL @UNKNOWN105
    case 0xC25085: cpu.execute_instruction<0x4C>(0x00527C, 3); return true;
    // src/battle/main_battle_routine.asm:1207 LDA @LOCAL06
    case 0xC25088: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1209 CMP #2
    case 0xC2508A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1209 CMP #2
    // Overlapping static entry reached from 0xC2508A.
    case 0xC2508C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1210 BEQ @UNKNOWN82
    case 0xC2508D: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/battle/main_battle_routine.asm:1214 LDA @LOCAL06
    case 0xC2508F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1216 CMP #3
    case 0xC25091: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1216 CMP #3
    // Overlapping static entry reached from 0xC25091.
    case 0xC25093: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1217 BEQ @UNKNOWN82
    case 0xC25094: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/battle/main_battle_routine.asm:1221 LDA @LOCAL06
    case 0xC25096: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1223 CMP #4
    case 0xC25098: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1223 CMP #4
    // Overlapping static entry reached from 0xC25098.
    case 0xC2509A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1224 BEQ @UNKNOWN82
    case 0xC2509B: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/battle/main_battle_routine.asm:1225 LDA @VIRTUAL04
    case 0xC2509D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1226 CMP #4
    case 0xC2509F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1226 CMP #4
    // Overlapping static entry reached from 0xC2509F.
    case 0xC250A1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1227 BNE @UNKNOWN81
    case 0xC250A2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1228 LDA MIRROR_ENEMY
    case 0xC250A4: cpu.execute_instruction<0xAD>(0x00AA12, 3); return true;
    // src/battle/main_battle_routine.asm:1229 BNE @UNKNOWN82
    case 0xC250A7: cpu.execute_instruction<0xD0>(0x000030, 2); return true;
    // src/battle/main_battle_routine.asm:1231 LDA @VIRTUAL04
    case 0xC250A9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1232 DEC
    case 0xC250AB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    case 0xC250AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/main_battle_routine.asm:1233 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC250AC.
    case 0xC250AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1234 JSL MULT168
    case 0xC250AF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1235 CLC
    case 0xC250B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC250B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/battle/main_battle_routine.asm:1236 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC250B4.
    case 0xC250B6: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/battle/main_battle_routine.asm:1237 TAX
    case 0xC250B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC250B8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1238 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC250B6.
    case 0xC250B9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    case 0xC250BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1239 AND #$00FF
    // Overlapping static entry reached from 0xC250BB.
    case 0xC250BD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    case 0xC250BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1240 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC250BE.
    case 0xC250C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1241 BEQ @UNKNOWN82
    case 0xC250C1: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    case 0xC250C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1242 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC250C3.
    case 0xC250C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1243 BEQ @UNKNOWN82
    case 0xC250C6: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:1244 LDA a:STATUS_GROUP::TEMPORARY,X
    case 0xC250C8: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    case 0xC250CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1245 AND #$00FF
    // Overlapping static entry reached from 0xC250CB.
    case 0xC250CD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1246 TAX
    case 0xC250CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    case 0xC250CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1247 CPX #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC250CF.
    case 0xC250D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1248 BEQ @UNKNOWN82
    case 0xC250D2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    case 0xC250D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1249 CPX #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC250D4.
    case 0xC250D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1250 BNE @UNKNOWN83
    case 0xC250D7: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC250D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1252 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC250D9.
    case 0xC250DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1253 STA @LOCAL07
    case 0xC250DC: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1254 SEP #PROC_FLAGS::ACCUM8
    case 0xC250DE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1255 STZ BATTLE_ITEM_USED
    case 0xC250E0: cpu.execute_instruction<0x9C>(0x00A97C, 3); return true;
    // src/battle/main_battle_routine.asm:1256 JMP @UNKNOWN91
    case 0xC250E3: cpu.execute_instruction<0x4C>(0x005171, 3); return true;
    // src/battle/main_battle_routine.asm:1258 LDA @VIRTUAL02
    case 0xC250E6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1259 JSL REDIRECT_C43573
    case 0xC250E8: cpu.execute_instruction<0x22>(0xC1DDCC, 4); return true;
    // src/battle/main_battle_routine.asm:1260 LDY @LOCAL04
    case 0xC250EC: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1261 TYX
    case 0xC250EE: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1262 LDA @VIRTUAL04
    case 0xC250EF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1263 JSL BATTLE_SELECTION_MENU
    case 0xC250F1: cpu.execute_instruction<0x22>(0xC2311B, 4); return true;
    // src/battle/main_battle_routine.asm:1265 STA @LOCAL07
    case 0xC250F5: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1266 JSL REDIRECT_C3E6F8
    case 0xC250F7: cpu.execute_instruction<0x22>(0xC1DDD3, 4); return true;
    // src/battle/main_battle_routine.asm:1267 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC250FB: cpu.execute_instruction<0x22>(0xC1DD59, 4); return true;
    // src/battle/main_battle_routine.asm:1268 LDA BATTLE_MODE
    case 0xC250FF: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/battle/main_battle_routine.asm:1269 BEQ @UNKNOWN84
    case 0xC25102: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1270 LDA @LOCAL07
    case 0xC25104: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    case 0xC25106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:1271 CMP #$FFFF
    // Overlapping static entry reached from 0xC25106.
    case 0xC25108: cpu.execute_instruction<0xFF>(0x6405D0, 4); return true;
    // src/battle/main_battle_routine.asm:1272 BNE @UNKNOWN84
    case 0xC25109: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    case 0xC2510B: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:1273 STZ @LOCAL03
    // Overlapping static entry reached from 0xC25108.
    case 0xC2510C: cpu.execute_instruction<0x17>(0x00004C, 2); return true;
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    case 0xC2510D: cpu.execute_instruction<0x4C>(0x006093, 3); return true;
    // src/battle/main_battle_routine.asm:1274 JMP @UNKNOWN237
    // Overlapping static entry reached from 0xC2510C.
    case 0xC2510E: cpu.execute_instruction<0x93>(0x000060, 2); return true;
    // src/battle/main_battle_routine.asm:1276 LDA @LOCAL07
    case 0xC25110: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    case 0xC25112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000117, 3); return true;
    // src/battle/main_battle_routine.asm:1277 CMP #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC25112.
    case 0xC25114: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    case 0xC25115: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1278 BNE @UNKNOWN87
    // Overlapping static entry reached from 0xC25114.
    case 0xC25116: cpu.execute_instruction<0x1D>(0x0001A9, 3); return true;
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC25117: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1279 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC25117.
    case 0xC25119: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1280 STA @LOCAL07
    case 0xC2511A: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1284 LDA @LOCAL06
    case 0xC2511C: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1286 CMP #1
    case 0xC2511E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1286 CMP #1
    // Overlapping static entry reached from 0xC2511E.
    case 0xC25120: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1287 BNE @UNKNOWN85
    case 0xC25121: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1288 LDA #4
    case 0xC25123: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1288 LDA #4
    // Overlapping static entry reached from 0xC25123.
    case 0xC25125: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1292 STA @LOCAL06
    case 0xC25126: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1294 BRA @UNKNOWN86
    case 0xC25128: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1296 LDA #3
    case 0xC2512A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1296 LDA #3
    // Overlapping static entry reached from 0xC2512A.
    case 0xC2512C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1300 STA @LOCAL06
    case 0xC2512D: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1303 LDA #1
    case 0xC2512F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1303 LDA #1
    // Overlapping static entry reached from 0xC2512F.
    case 0xC25131: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1307 STA @LOCAL0B
    case 0xC25132: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:1310 LDA @LOCAL07
    case 0xC25134: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    case 0xC25136: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:1311 CMP #$FFFF
    // Overlapping static entry reached from 0xC25136.
    case 0xC25138: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC25139: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    case 0xC2513B: cpu.execute_instruction<0x4C>(0x0048E0, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1312 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC25138.
    case 0xC2513C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000048, 2); else cpu.execute_instruction<0xE0>(0x00C948, 3); return true;
    // src/battle/main_battle_routine.asm:1313 CMP #0
    case 0xC2513E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1313 CMP #0
    // Overlapping static entry reached from 0xC2513C.
    case 0xC2513F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1313 CMP #0
    // Overlapping static entry reached from 0xC2513E.
    case 0xC25140: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1314 BNE @UNKNOWN90
    case 0xC25141: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1315 LDY @LOCAL04
    case 0xC25143: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC25145: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1316 BEQL @UNKNOWN77
    case 0xC25147: cpu.execute_instruction<0x4C>(0x00504F, 3); return true;
    // src/battle/main_battle_routine.asm:1317 DEY
    case 0xC2514A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1318 STY @LOCAL04
    case 0xC2514B: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1319 TYA
    case 0xC2514D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1320 ASL
    case 0xC2514E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1321 TAX
    case 0xC2514F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1322 LDA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC25150: cpu.execute_instruction<0xBD>(0x00AA64, 3); return true;
    // src/battle/main_battle_routine.asm:1323 STA @VIRTUAL02
    case 0xC25153: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1324 JMP @UNKNOWN77
    case 0xC25155: cpu.execute_instruction<0x4C>(0x00504F, 3); return true;
    // src/battle/main_battle_routine.asm:1326 LDY @LOCAL04
    case 0xC25158: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1327 TYA
    case 0xC2515A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1328 ASL
    case 0xC2515B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1329 TAX
    case 0xC2515C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1330 LDA @VIRTUAL02
    case 0xC2515D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1331 STA PARTY_MEMBERS_WITH_SELECTED_ACTIONS,X
    case 0xC2515F: cpu.execute_instruction<0x9D>(0x00AA64, 3); return true;
    // src/battle/main_battle_routine.asm:1332 INY
    case 0xC25162: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1333 STY @LOCAL04
    case 0xC25163: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1334 LDA @LOCAL07
    case 0xC25165: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1335 CMP #1
    case 0xC25167: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1335 CMP #1
    // Overlapping static entry reached from 0xC25167.
    case 0xC25169: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1336 BNE @UNKNOWN91
    case 0xC2516A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/main_battle_routine.asm:1337 LDA #0
    case 0xC2516C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1337 LDA #0
    // Overlapping static entry reached from 0xC2516C.
    case 0xC2516E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1338 STA @LOCAL07
    case 0xC2516F: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1340 REP #PROC_FLAGS::ACCUM8
    case 0xC25171: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1341 STZ @LOCAL05
    case 0xC25173: cpu.execute_instruction<0x64>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1342 JMP @UNKNOWN104
    case 0xC25175: cpu.execute_instruction<0x4C>(0x005270, 3); return true;
    // src/battle/main_battle_routine.asm:1344 LDA @LOCAL05
    case 0xC25178: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    case 0xC2517A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1345 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2517A.
    case 0xC2517C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1346 JSL MULT168
    case 0xC2517D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1347 TAX
    case 0xC25181: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1348 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25182: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    case 0xC25185: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1349 AND #$00FF
    // Overlapping static entry reached from 0xC25185.
    case 0xC25187: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC25188: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1350 BEQL @UNKNOWN103
    case 0xC2518A: cpu.execute_instruction<0x4C>(0x00526E, 3); return true;
    // src/battle/main_battle_routine.asm:1351 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2518D: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    case 0xC25190: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1352 AND #$00FF
    // Overlapping static entry reached from 0xC25190.
    case 0xC25192: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC25193: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1353 BNEL @UNKNOWN103
    case 0xC25195: cpu.execute_instruction<0x4C>(0x00526E, 3); return true;
    // src/battle/main_battle_routine.asm:1354 LDA @VIRTUAL04
    case 0xC25198: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1355 CMP BATTLERS_TABLE + battler::id,X
    case 0xC2519A: cpu.execute_instruction<0xDD>(0x009FAC, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC2519D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1356 BNEL @UNKNOWN103
    case 0xC2519F: cpu.execute_instruction<0x4C>(0x00526E, 3); return true;
    // src/battle/main_battle_routine.asm:1357 LDA @LOCAL07
    case 0xC251A2: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1358 STA BATTLERS_TABLE+battler::current_action,X
    case 0xC251A4: cpu.execute_instruction<0x9D>(0x009FB0, 3); return true;
    // src/battle/main_battle_routine.asm:1359 LDA BATTLE_ITEM_USED
    case 0xC251A7: cpu.execute_instruction<0xAD>(0x00A97C, 3); return true;
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    case 0xC251AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1360 AND #$00FF
    // Overlapping static entry reached from 0xC251AA.
    case 0xC251AC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1361 BEQ @UNKNOWN96
    case 0xC251AD: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:1362 SEP #PROC_FLAGS::ACCUM8
    case 0xC251AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1363 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC251B1: cpu.execute_instruction<0xAD>(0x00A97E, 3); return true;
    // src/battle/main_battle_routine.asm:1364 STA BATTLERS_TABLE+7,X
    case 0xC251B4: cpu.execute_instruction<0x9D>(0x009FB3, 3); return true;
    // src/battle/main_battle_routine.asm:1365 LDA BATTLE_ITEM_USED
    case 0xC251B7: cpu.execute_instruction<0xAD>(0x00A97C, 3); return true;
    // src/battle/main_battle_routine.asm:1366 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC251BA: cpu.execute_instruction<0x9D>(0x009FB4, 3); return true;
    // src/battle/main_battle_routine.asm:1367 BRA @UNKNOWN97
    case 0xC251BD: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:1369 SEP #PROC_FLAGS::ACCUM8
    case 0xC251BF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1370 STZ BATTLERS_TABLE+7,X
    case 0xC251C1: cpu.execute_instruction<0x9E>(0x009FB3, 3); return true;
    // src/battle/main_battle_routine.asm:1371 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC251C4: cpu.execute_instruction<0xAD>(0x00A97E, 3); return true;
    // src/battle/main_battle_routine.asm:1372 STA BATTLERS_TABLE+battler::current_action_argument,X
    case 0xC251C7: cpu.execute_instruction<0x9D>(0x009FB4, 3); return true;
    // src/battle/main_battle_routine.asm:1374 REP #PROC_FLAGS::ACCUM8
    case 0xC251CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1375 LDA @LOCAL05
    case 0xC251CC: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    case 0xC251CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1376 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC251CE.
    case 0xC251D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1377 JSL MULT168
    case 0xC251D1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1385 STA @LOCAL07
    case 0xC251D5: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1386 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC251D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000081, 2); else cpu.execute_instruction<0xA2>(0x00A981, 3); return true;
    // src/battle/main_battle_routine.asm:1386 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC251D7.
    case 0xC251D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x002F86, 3); return true;
    // src/battle/main_battle_routine.asm:1387 STX @LOCAL0F
    case 0xC251DA: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1387 STX @LOCAL0F
    // Overlapping static entry reached from 0xC251D9.
    case 0xC251DB: cpu.execute_instruction<0x2F>(0x20E248, 4); return true;
    // src/battle/main_battle_routine.asm:1388 PHA
    case 0xC251DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1390 SEP #PROC_FLAGS::ACCUM8
    case 0xC251DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1391 LDA __BSS_START__,X
    case 0xC251DF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1395 PLX
    case 0xC251E2: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1397 STA BATTLERS_TABLE + battler::action_targetting,X
    case 0xC251E3: cpu.execute_instruction<0x9D>(0x009FB5, 3); return true;
    // src/battle/main_battle_routine.asm:1399 REP #PROC_FLAGS::ACCUM8
    case 0xC251E6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1400 LDA @LOCAL07
    case 0xC251E8: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1401 TAX
    case 0xC251EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1402 SEP #PROC_FLAGS::ACCUM8
    case 0xC251EB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1404 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC251ED: cpu.execute_instruction<0xAD>(0x00A982, 3); return true;
    // src/battle/main_battle_routine.asm:1405 STA BATTLERS_TABLE + battler::current_target,X
    case 0xC251F0: cpu.execute_instruction<0x9D>(0x009FB6, 3); return true;
    // src/battle/main_battle_routine.asm:1411 LDX @LOCAL0F
    case 0xC251F3: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1412 REP #PROC_FLAGS::ACCUM8
    case 0xC251F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1414 LDA __BSS_START__,X
    case 0xC251F7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    case 0xC251FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1415 AND #$00FF
    // Overlapping static entry reached from 0xC251FA.
    case 0xC251FC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1416 CMP #1
    case 0xC251FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1416 CMP #1
    // Overlapping static entry reached from 0xC251FD.
    case 0xC251FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1417 BNE @UNKNOWN101
    case 0xC25200: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/battle/main_battle_routine.asm:1418 LDA #0
    case 0xC25202: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1418 LDA #0
    // Overlapping static entry reached from 0xC25202.
    case 0xC25204: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1422 STA @LOCAL0F
    case 0xC25205: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1424 BRA @UNKNOWN100
    case 0xC25207: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    case 0xC25209: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1426 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25209.
    case 0xC2520B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1427 JSL MULT168
    case 0xC2520C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1428 TAX
    case 0xC25210: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1429 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC25211: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    case 0xC25214: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1430 AND #$00FF
    // Overlapping static entry reached from 0xC25214.
    case 0xC25216: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1431 BEQ @UNKNOWN99
    case 0xC25217: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:1432 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC25219: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    case 0xC2521C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1433 AND #$00FF
    // Overlapping static entry reached from 0xC2521C.
    case 0xC2521E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1434 BNE @UNKNOWN99
    case 0xC2521F: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1435 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC25221: cpu.execute_instruction<0xAD>(0x00A982, 3); return true;
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    case 0xC25224: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1436 AND #$00FF
    // Overlapping static entry reached from 0xC25224.
    case 0xC25226: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/main_battle_routine.asm:1437 CMP BATTLERS_TABLE+battler::id,X
    case 0xC25227: cpu.execute_instruction<0xDD>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:1438 BNE @UNKNOWN99
    case 0xC2522A: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:1439 LDA @LOCAL05
    case 0xC2522C: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    case 0xC2522E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1440 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2522E.
    case 0xC25230: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1441 JSL MULT168
    case 0xC25231: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1442 TAX
    case 0xC25235: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1446 LDA @LOCAL0F
    case 0xC25236: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1448 SEP #PROC_FLAGS::ACCUM8
    case 0xC25238: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1449 INC
    case 0xC2523A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1450 STA BATTLERS_TABLE+battler::current_target,X
    case 0xC2523B: cpu.execute_instruction<0x9D>(0x009FB6, 3); return true;
    // src/battle/main_battle_routine.asm:1451 BRA @UNKNOWN101
    case 0xC2523E: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1458 LDA @LOCAL0F
    case 0xC25240: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1459 INC
    case 0xC25242: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1460 STA @LOCAL0F
    case 0xC25243: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1464 CMP #6
    case 0xC25245: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1464 CMP #6
    // Overlapping static entry reached from 0xC25245.
    case 0xC25247: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:1465 BCC @UNKNOWN98
    case 0xC25248: cpu.execute_instruction<0x90>(0x0000BF, 2); return true;
    // src/battle/main_battle_routine.asm:1467 REP #PROC_FLAGS::ACCUM8
    case 0xC2524A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1468 LDA @LOCAL05
    case 0xC2524C: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    case 0xC2524E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1469 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2524E.
    case 0xC25250: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1470 JSL MULT168
    case 0xC25251: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1471 TAX
    case 0xC25255: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1472 LDA BATTLERS_TABLE+battler::current_action,X
    case 0xC25256: cpu.execute_instruction<0xBD>(0x009FB0, 3); return true;
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    case 0xC25259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:1473 CMP #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC25259.
    case 0xC2525B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1474 BNE @UNKNOWN102
    case 0xC2525C: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:1475 SEP #PROC_FLAGS::ACCUM8
    case 0xC2525E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1476 LDA #1
    case 0xC25260: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    case 0xC25262: cpu.execute_instruction<0x9D>(0x009FD0, 3); return true;
    // src/battle/main_battle_routine.asm:1477 STA BATTLERS_TABLE+battler::guarding,X
    // Overlapping static entry reached from 0xC25260.
    case 0xC25263: cpu.execute_instruction<0xD0>(0x00009F, 2); return true;
    // src/battle/main_battle_routine.asm:1478 BRA @UNKNOWN105
    case 0xC25265: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1480 SEP #PROC_FLAGS::ACCUM8
    case 0xC25267: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1481 STZ BATTLERS_TABLE+battler::guarding,X
    case 0xC25269: cpu.execute_instruction<0x9E>(0x009FD0, 3); return true;
    // src/battle/main_battle_routine.asm:1482 BRA @UNKNOWN105
    case 0xC2526C: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:1484 INC @LOCAL05
    case 0xC2526E: cpu.execute_instruction<0xE6>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1487 LDA @LOCAL05
    case 0xC25270: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    case 0xC25272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1488 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25272.
    case 0xC25274: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC25275: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC25277: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1489 BCCL @UNKNOWN92
    case 0xC25279: cpu.execute_instruction<0x4C>(0x005178, 3); return true;
    // src/battle/main_battle_routine.asm:1491 REP #PROC_FLAGS::ACCUM8
    case 0xC2527C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1492 INC @VIRTUAL02
    case 0xC2527E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1494 LDA @VIRTUAL02
    case 0xC25280: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1495 CMP #6
    case 0xC25282: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1495 CMP #6
    // Overlapping static entry reached from 0xC25282.
    case 0xC25284: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC25285: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC25287: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1496 BCCL @UNKNOWN77
    case 0xC25289: cpu.execute_instruction<0x4C>(0x00504F, 3); return true;
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC2528C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:1497 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2528C.
    case 0xC2528E: cpu.execute_instruction<0x9F>(0x850285, 4); return true;
    // src/battle/main_battle_routine.asm:1499 STA @VIRTUAL02
    case 0xC2528F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    case 0xC25291: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1501 STA @LOCAL04
    // Overlapping static entry reached from 0xC2528E.
    case 0xC25292: cpu.execute_instruction<0x19>(0x0000A0, 3); return true;
    // src/battle/main_battle_routine.asm:1502 LDY #0
    case 0xC25293: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1502 LDY #0
    // Overlapping static entry reached from 0xC25293.
    case 0xC25295: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:1506 STY @LOCAL07
    case 0xC25296: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1508 JMP @UNKNOWN132
    case 0xC25298: cpu.execute_instruction<0x4C>(0x0054E4, 3); return true;
    // src/battle/main_battle_routine.asm:1518 LDX @VIRTUAL02
    case 0xC2529B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1519 LDA a:battler::consciousness,X
    case 0xC2529D: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:1520 AND #$00FF
    case 0xC252A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1520 AND #$00FF
    // Overlapping static entry reached from 0xC252A0.
    case 0xC252A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1521 BEQ @UNKNOWN109
    case 0xC252A3: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/main_battle_routine.asm:1522 LDX @VIRTUAL02
    case 0xC252A5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1523 LDA a:battler::ally_or_enemy,X
    case 0xC252A7: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    case 0xC252AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1525 AND #$00FF
    // Overlapping static entry reached from 0xC252AA.
    case 0xC252AC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1526 CMP #1
    case 0xC252AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1526 CMP #1
    // Overlapping static entry reached from 0xC252AD.
    case 0xC252AF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1527 BEQ @UNKNOWN111
    case 0xC252B0: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1536 LDX @VIRTUAL02
    case 0xC252B2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1537 LDA a:battler::npc_id,X
    case 0xC252B4: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:1538 AND #$00FF
    case 0xC252B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1538 AND #$00FF
    // Overlapping static entry reached from 0xC252B7.
    case 0xC252B9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1539 BNE @UNKNOWN111
    case 0xC252BA: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1540 LDX @VIRTUAL02
    case 0xC252BC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1541 LDA a:battler::id,X
    case 0xC252BE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    case 0xC252C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1543 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC252C1.
    case 0xC252C3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC252C4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1544 BNEL @UNKNOWN131
    case 0xC252C6: cpu.execute_instruction<0x4C>(0x0054D5, 3); return true;
    // src/battle/main_battle_routine.asm:1545 LDA MIRROR_ENEMY
    case 0xC252C9: cpu.execute_instruction<0xAD>(0x00AA12, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC252CC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1546 BEQL @UNKNOWN131
    case 0xC252CE: cpu.execute_instruction<0x4C>(0x0054D5, 3); return true;
    // src/battle/main_battle_routine.asm:1551 LDA @LOCAL06
    case 0xC252D1: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1553 CMP #1
    case 0xC252D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1553 CMP #1
    // Overlapping static entry reached from 0xC252D3.
    case 0xC252D5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1554 BEQ @UNKNOWN112
    case 0xC252D6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1558 LDA @LOCAL06
    case 0xC252D8: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1560 CMP #4
    case 0xC252DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1560 CMP #4
    // Overlapping static entry reached from 0xC252DA.
    case 0xC252DC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1561 BNE @UNKNOWN113
    case 0xC252DD: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1571 LDX @VIRTUAL02
    case 0xC252DF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1572 LDA a:battler::ally_or_enemy,X
    case 0xC252E1: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1573 AND #$00FF
    case 0xC252E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1573 AND #$00FF
    // Overlapping static entry reached from 0xC252E4.
    case 0xC252E6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1574 CMP #1
    case 0xC252E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1574 CMP #1
    // Overlapping static entry reached from 0xC252E7.
    case 0xC252E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1575 BNE @UNKNOWN113
    case 0xC252EA: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1576 LDX @VIRTUAL02
    case 0xC252EC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1578 STZ a:battler::current_action,X
    case 0xC252EE: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1579 JMP @UNKNOWN131
    case 0xC252F1: cpu.execute_instruction<0x4C>(0x0054D5, 3); return true;
    // src/battle/main_battle_routine.asm:1591 LDA @LOCAL06
    case 0xC252F4: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1592 CMP #2
    case 0xC252F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1592 CMP #2
    // Overlapping static entry reached from 0xC252F6.
    case 0xC252F8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1593 BNE @UNKNOWN114
    case 0xC252F9: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1594 LDX @VIRTUAL02
    case 0xC252FB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1595 LDA a:battler::ally_or_enemy,X
    case 0xC252FD: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1596 AND #$00FF
    case 0xC25300: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1596 AND #$00FF
    // Overlapping static entry reached from 0xC25300.
    case 0xC25302: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1597 BNE @UNKNOWN114
    case 0xC25303: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1598 LDX @VIRTUAL02
    case 0xC25305: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1600 STZ a:battler::current_action,X
    case 0xC25307: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1601 JMP @UNKNOWN131
    case 0xC2530A: cpu.execute_instruction<0x4C>(0x0054D5, 3); return true;
    // src/battle/main_battle_routine.asm:1610 LDX @VIRTUAL02
    case 0xC2530D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1611 LDA a:battler::ally_or_enemy,X
    case 0xC2530F: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1612 AND #$00FF
    case 0xC25312: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1612 AND #$00FF
    // Overlapping static entry reached from 0xC25312.
    case 0xC25314: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1613 BNE @UNKNOWN115
    case 0xC25315: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:1614 LDX @VIRTUAL02
    case 0xC25317: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1615 LDA a:battler::id,X
    case 0xC25319: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    case 0xC2531C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1617 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2531C.
    case 0xC2531E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1618 BNE @UNKNOWN115
    case 0xC2531F: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25321: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25321.
    case 0xC25323: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25324: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25323.
    case 0xC25325: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25326: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25325.
    case 0xC25327: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25326.
    case 0xC25328: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1619 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25329: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1620 LDA MIRROR_ENEMY
    case 0xC2532B: cpu.execute_instruction<0xAD>(0x00AA12, 3); return true;
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    case 0xC2532E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:1621 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2532E.
    case 0xC25330: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1622 JSL MULT168
    case 0xC25331: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1623 CLC
    case 0xC25335: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1624 ADC @VIRTUAL06
    case 0xC25336: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1625 STA @VIRTUAL06
    case 0xC25338: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1626 BRA @UNKNOWN116
    case 0xC2533A: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2533C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2533C.
    case 0xC2533E: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2533F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2533E.
    case 0xC25340: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25341: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25340.
    case 0xC25342: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25341.
    case 0xC25343: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1628 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC25344: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:1632 LDX @VIRTUAL02
    case 0xC25346: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1633 LDA a:battler::id,X
    case 0xC25348: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    case 0xC2534B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:1635 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2534B.
    case 0xC2534D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1636 JSL MULT168
    case 0xC2534E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1637 CLC
    case 0xC25352: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1638 ADC @VIRTUAL06
    case 0xC25353: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1639 STA @VIRTUAL06
    case 0xC25355: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1641 SEP #PROC_FLAGS::ACCUM8
    case 0xC25357: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    case 0xC25359: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x000045, 3); return true;
    // src/battle/main_battle_routine.asm:1642 LDY #enemy_data::action_order
    // Overlapping static entry reached from 0xC25359.
    case 0xC2535B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/main_battle_routine.asm:1643 LDA [@VIRTUAL06],Y
    case 0xC2535C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1644 REP #PROC_FLAGS::ACCUM8
    case 0xC2535E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    case 0xC25360: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1645 AND #$00FF
    // Overlapping static entry reached from 0xC25360.
    case 0xC25362: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1646 BEQ @ACTION_PATTERN_1
    case 0xC25363: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1647 CMP #1
    case 0xC25365: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1647 CMP #1
    // Overlapping static entry reached from 0xC25365.
    case 0xC25367: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1648 BEQ @ACTION_PATTERN_2
    case 0xC25368: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1649 CMP #2
    case 0xC2536A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1649 CMP #2
    // Overlapping static entry reached from 0xC2536A.
    case 0xC2536C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1650 BEQ @ACTION_PATTERN_3
    case 0xC2536D: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/main_battle_routine.asm:1651 CMP #3
    case 0xC2536F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1651 CMP #3
    // Overlapping static entry reached from 0xC2536F.
    case 0xC25371: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1652 BEQ @ACTION_PATTERN_4
    case 0xC25372: cpu.execute_instruction<0xF0>(0x000072, 2); return true;
    // src/battle/main_battle_routine.asm:1653 JMP @UNKNOWN125
    case 0xC25374: cpu.execute_instruction<0x4C>(0x005419, 3); return true;
    // src/battle/main_battle_routine.asm:1655 JSL RAND
    case 0xC25377: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    case 0xC2537B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1656 AND #$0003
    // Overlapping static entry reached from 0xC2537B.
    case 0xC2537D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1657 STA @VIRTUAL04
    case 0xC2537E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1658 STA @LOCAL08
    case 0xC25380: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1659 JMP @UNKNOWN125
    case 0xC25382: cpu.execute_instruction<0x4C>(0x005419, 3); return true;
    // src/battle/main_battle_routine.asm:1661 JSL RAND
    case 0xC25385: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    case 0xC25389: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:1662 AND #$0007
    // Overlapping static entry reached from 0xC25389.
    case 0xC2538B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1663 BEQ @ACTION_PATTERN_2_4TH
    case 0xC2538C: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:1664 CMP #1
    case 0xC2538E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1664 CMP #1
    // Overlapping static entry reached from 0xC2538E.
    case 0xC25390: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1665 BEQ @ACTION_PATTERN_2_3RD
    case 0xC25391: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1666 CMP #2
    case 0xC25393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1666 CMP #2
    // Overlapping static entry reached from 0xC25393.
    case 0xC25395: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1667 BEQ @ACTION_PATTERN_2_2ND
    case 0xC25396: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1668 CMP #3
    case 0xC25398: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1668 CMP #3
    // Overlapping static entry reached from 0xC25398.
    case 0xC2539A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1669 BEQ @ACTION_PATTERN_2_2ND
    case 0xC2539B: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:1670 BRA @ACTION_PATTERN_2_1ST
    case 0xC2539D: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1672 LDA #3
    case 0xC2539F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1672 LDA #3
    // Overlapping static entry reached from 0xC2539F.
    case 0xC253A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1673 STA @VIRTUAL04
    case 0xC253A2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1674 STA @LOCAL08
    case 0xC253A4: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1675 BRA @UNKNOWN125
    case 0xC253A6: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/battle/main_battle_routine.asm:1677 LDA #2
    case 0xC253A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1677 LDA #2
    // Overlapping static entry reached from 0xC253A8.
    case 0xC253AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1678 STA @VIRTUAL04
    case 0xC253AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1679 STA @LOCAL08
    case 0xC253AD: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1680 BRA @UNKNOWN125
    case 0xC253AF: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/main_battle_routine.asm:1682 LDA #1
    case 0xC253B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1682 LDA #1
    // Overlapping static entry reached from 0xC253B1.
    case 0xC253B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1683 STA @VIRTUAL04
    case 0xC253B4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1684 STA @LOCAL08
    case 0xC253B6: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1685 BRA @UNKNOWN125
    case 0xC253B8: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/battle/main_battle_routine.asm:1687 LDA #0
    case 0xC253BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1687 LDA #0
    // Overlapping static entry reached from 0xC253BA.
    case 0xC253BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1688 STA @VIRTUAL04
    case 0xC253BD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1689 STA @LOCAL08
    case 0xC253BF: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1690 BRA @UNKNOWN125
    case 0xC253C1: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/battle/main_battle_routine.asm:1695 LDA @VIRTUAL02
    case 0xC253C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1697 CLC
    case 0xC253C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    case 0xC253C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1698 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC253C6.
    case 0xC253C8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1699 TAX
    case 0xC253C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1700 SEP #PROC_FLAGS::ACCUM8
    case 0xC253CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1701 LDA __BSS_START__,X
    case 0xC253CC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1702 STA @LOCAL02
    case 0xC253CF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:1703 REP #PROC_FLAGS::ACCUM8
    case 0xC253D1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    case 0xC253D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1704 AND #$00FF
    // Overlapping static entry reached from 0xC253D3.
    case 0xC253D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1705 STA @VIRTUAL04
    case 0xC253D6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1706 STA @LOCAL08
    case 0xC253D8: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1707 SEP #PROC_FLAGS::ACCUM8
    case 0xC253DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1708 LDA @LOCAL02
    case 0xC253DC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:1709 INC
    case 0xC253DE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1710 AND #$0003
    case 0xC253DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x009D03, 3); return true;
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    case 0xC253E1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1711 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC253DF.
    case 0xC253E2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1712 BRA @UNKNOWN125
    case 0xC253E4: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:1718 LDA @VIRTUAL02
    case 0xC253E6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1720 CLC
    case 0xC253E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    case 0xC253E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:1721 ADC #battler::action_order_var
    // Overlapping static entry reached from 0xC253E9.
    case 0xC253EB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1722 TAX
    case 0xC253EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1723 STX @LOCAL10
    case 0xC253ED: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1724 LDA __BSS_START__,X
    case 0xC253EF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    case 0xC253F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1725 AND #$00FF
    // Overlapping static entry reached from 0xC253F2.
    case 0xC253F4: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1726 ASL
    case 0xC253F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1730 STA @LOCAL0F
    case 0xC253F6: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1732 JSL RAND
    case 0xC253F8: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:1736 STA @VIRTUAL04
    case 0xC253FC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    case 0xC253FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1738 AND #$0001
    // Overlapping static entry reached from 0xC253FE.
    case 0xC25400: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1739 STA @VIRTUAL02
    case 0xC25401: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1743 LDA @LOCAL0F
    case 0xC25403: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1745 CLC
    case 0xC25405: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1746 ADC @VIRTUAL02
    case 0xC25406: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1747 STA @VIRTUAL04
    case 0xC25408: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1748 STA @LOCAL08
    case 0xC2540A: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1749 LDX @LOCAL10
    case 0xC2540C: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1750 SEP #PROC_FLAGS::ACCUM8
    case 0xC2540E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1751 LDA __BSS_START__,X
    case 0xC25410: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1752 INC
    case 0xC25413: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1753 AND #$0001
    case 0xC25414: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x009D01, 3); return true;
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    case 0xC25416: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1754 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC25414.
    case 0xC25417: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1756 REP #PROC_FLAGS::ACCUM8
    case 0xC25419: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1757 LDA @LOCAL04
    case 0xC2541B: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1759 STA @VIRTUAL02
    case 0xC2541D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1761 INC
    case 0xC2541F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1762 INC
    case 0xC25420: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1763 INC
    case 0xC25421: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1764 INC
    case 0xC25422: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1768 STA @LOCAL0F
    case 0xC25423: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1770 TAX
    case 0xC25425: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1771 LDA @LOCAL08
    case 0xC25426: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1772 STA @VIRTUAL04
    case 0xC25428: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1773 ASL
    case 0xC2542A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1774 CLC
    case 0xC2542B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    case 0xC2542C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/battle/main_battle_routine.asm:1775 ADC #enemy_data::actions
    // Overlapping static entry reached from 0xC2542C.
    case 0xC2542E: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2542F: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25431: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25433: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:1776 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC25435: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:1777 CLC
    case 0xC25437: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1778 ADC @VIRTUAL0A
    case 0xC25438: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1779 STA @VIRTUAL0A
    case 0xC2543A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1780 LDA [@VIRTUAL0A]
    case 0xC2543C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:1781 STA __BSS_START__,X
    case 0xC2543E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1785 LDA @VIRTUAL02
    case 0xC25441: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1787 CLC
    case 0xC25443: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1788 ADC #8
    case 0xC25444: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:1788 ADC #8
    // Overlapping static entry reached from 0xC25444.
    case 0xC25446: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1789 TAX
    case 0xC25447: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1790 STX @LOCAL10
    case 0xC25448: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1791 LDA @VIRTUAL04
    case 0xC2544A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1792 CLC
    case 0xC2544C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    case 0xC2544D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x000050, 3); return true;
    // src/battle/main_battle_routine.asm:1793 ADC #enemy_data::action_args
    // Overlapping static entry reached from 0xC2544D.
    case 0xC2544F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:1794 CLC
    case 0xC25450: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1795 ADC @VIRTUAL06
    case 0xC25451: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1796 STA @VIRTUAL06
    case 0xC25453: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1797 SEP #PROC_FLAGS::ACCUM8
    case 0xC25455: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1798 LDA [@VIRTUAL06]
    case 0xC25457: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:1799 STA @VIRTUAL00
    case 0xC25459: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1800 STA __BSS_START__,X
    case 0xC2545B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1801 REP #PROC_FLAGS::ACCUM8
    case 0xC2545E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1805 LDA @LOCAL0F
    case 0xC25460: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1807 TAX
    case 0xC25462: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1808 LDA __BSS_START__,X
    case 0xC25463: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    case 0xC25466: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000F5, 2); else cpu.execute_instruction<0xC9>(0x0000F5, 3); return true;
    // src/battle/main_battle_routine.asm:1809 CMP #BATTLE_ACTIONS::ENEMY_EXTENDER
    // Overlapping static entry reached from 0xC25466.
    case 0xC25468: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1810 BNE @UNKNOWN127
    case 0xC25469: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1815 LDX @VIRTUAL02
    case 0xC2546B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1816 LDA a:battler::ally_or_enemy,X
    case 0xC2546D: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    case 0xC25470: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1818 AND #$00FF
    // Overlapping static entry reached from 0xC25470.
    case 0xC25472: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1819 BNE @UNKNOWN126
    case 0xC25473: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/main_battle_routine.asm:1823 LDX @VIRTUAL02
    case 0xC25475: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1824 LDA a:battler::id,X
    case 0xC25477: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    case 0xC2547A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1826 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2547A.
    case 0xC2547C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1827 BNE @UNKNOWN126
    case 0xC2547D: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:1828 LDA @VIRTUAL00
    case 0xC2547F: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    case 0xC25481: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1829 AND #$00FF
    // Overlapping static entry reached from 0xC25481.
    case 0xC25483: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:1830 STA MIRROR_ENEMY
    case 0xC25484: cpu.execute_instruction<0x8D>(0x00AA12, 3); return true;
    // src/battle/main_battle_routine.asm:1831 JMP @UNKNOWN114
    case 0xC25487: cpu.execute_instruction<0x4C>(0x00530D, 3); return true;
    // src/battle/main_battle_routine.asm:1837 LDX @VIRTUAL02
    case 0xC2548A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1838 LDA a:battler::current_action_argument,X
    case 0xC2548C: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    case 0xC2548F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1840 AND #$00FF
    // Overlapping static entry reached from 0xC2548F.
    case 0xC25491: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:1844 LDX @VIRTUAL02
    case 0xC25492: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1845 STA a:battler::id,X
    case 0xC25494: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1847 JMP @UNKNOWN114
    case 0xC25497: cpu.execute_instruction<0x4C>(0x00530D, 3); return true;
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    case 0xC2549A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000042, 2); else cpu.execute_instruction<0xC9>(0x000042, 3); return true;
    // src/battle/main_battle_routine.asm:1849 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC2549A.
    case 0xC2549C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1850 BNE @UNKNOWN128
    case 0xC2549D: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:1851 JSL SELECT_STEALABLE_ITEM
    case 0xC2549F: cpu.execute_instruction<0x22>(0xC24316, 4); return true;
    // src/battle/main_battle_routine.asm:1852 SEP #PROC_FLAGS::ACCUM8
    case 0xC254A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1853 LDX @LOCAL10
    case 0xC254A5: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:1854 STA __BSS_START__,X
    case 0xC254A7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1858 LDX @VIRTUAL02
    case 0xC254AA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1860 REP #PROC_FLAGS::ACCUM8
    case 0xC254AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1861 STZ a:battler::initiative,X
    case 0xC254AE: cpu.execute_instruction<0x9E>(0x000046, 3); return true;
    // src/battle/main_battle_routine.asm:1867 LDX @VIRTUAL02
    case 0xC254B1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1868 LDA a:battler::current_action,X
    case 0xC254B3: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    case 0xC254B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000067, 2); else cpu.execute_instruction<0xC9>(0x000067, 3); return true;
    // src/battle/main_battle_routine.asm:1870 CMP #BATTLE_ACTIONS::ON_GUARD
    // Overlapping static entry reached from 0xC254B6.
    case 0xC254B8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1871 BNE @NOT_DEFENDING
    case 0xC254B9: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:1872 SEP #PROC_FLAGS::ACCUM8
    case 0xC254BB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1873 LDA #1
    case 0xC254BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/main_battle_routine.asm:1878 LDX @VIRTUAL02
    case 0xC254BF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1878 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC254BD.
    case 0xC254C0: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/main_battle_routine.asm:1879 STA a:battler::guarding,X
    case 0xC254C1: cpu.execute_instruction<0x9D>(0x000024, 3); return true;
    // src/battle/main_battle_routine.asm:1881 BRA @UNKNOWN130
    case 0xC254C4: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:1886 LDX @VIRTUAL02
    case 0xC254C6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1888 SEP #PROC_FLAGS::ACCUM8
    case 0xC254C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1889 STZ a:battler::guarding,X
    case 0xC254CA: cpu.execute_instruction<0x9E>(0x000024, 3); return true;
    // src/battle/main_battle_routine.asm:1891 REP #PROC_FLAGS::ACCUM8
    case 0xC254CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:1895 LDA @VIRTUAL02
    case 0xC254CF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1897 JSL CHOOSE_TARGET
    case 0xC254D1: cpu.execute_instruction<0x22>(0xC24477, 4); return true;
    // src/battle/main_battle_routine.asm:1902 LDA @VIRTUAL02
    case 0xC254D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1904 CLC
    case 0xC254D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    case 0xC254D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:1905 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC254D8.
    case 0xC254DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1907 STA @VIRTUAL02
    case 0xC254DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1909 STA @LOCAL04
    case 0xC254DD: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:1915 LDY @LOCAL07
    case 0xC254DF: cpu.execute_instruction<0xA4>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1916 INY
    case 0xC254E1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1917 STY @LOCAL07
    case 0xC254E2: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    case 0xC254E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:1920 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC254E4.
    case 0xC254E6: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC254E7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC254E9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1921 BCCL @UNKNOWN108
    case 0xC254EB: cpu.execute_instruction<0x4C>(0x00529B, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC254EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC254EE.
    case 0xC254F0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/main_battle_routine.asm:1922 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC254F1: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // src/battle/main_battle_routine.asm:1926 LDA @LOCAL06
    case 0xC254F5: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC254F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1928 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC254F7.
    case 0xC254F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1929 BNE @UNKNOWN134
    case 0xC254FA: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC254FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F7, 2); else cpu.execute_instruction<0xA9>(0x0078F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC254FC.
    case 0xC254FE: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC254FF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    // Overlapping static entry reached from 0xC25501.
    case 0xC25503: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25504: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:1930 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SENSEI_MON
    case 0xC25506: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:1935 LDA @LOCAL0B
    case 0xC2550A: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2550C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1937 BEQL @UNKNOWN144
    case 0xC2550E: cpu.execute_instruction<0x4C>(0x005614, 3); return true;
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC25511: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AC, 2); else cpu.execute_instruction<0xA0>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:1938 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25511.
    case 0xC25513: cpu.execute_instruction<0x9F>(0x642F84, 4); return true;
    // src/battle/main_battle_routine.asm:1942 STY @LOCAL0F
    case 0xC25514: cpu.execute_instruction<0x84>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    case 0xC25516: cpu.execute_instruction<0x64>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:1944 STZ @LOCAL05
    // Overlapping static entry reached from 0xC25513.
    case 0xC25517: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1945 LDA #0
    case 0xC25518: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1945 LDA #0
    // Overlapping static entry reached from 0xC25518.
    case 0xC2551A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:1946 STA @VIRTUAL04
    case 0xC2551B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1947 STA @LOCAL08
    case 0xC2551D: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1948 STA @VIRTUAL02
    case 0xC2551F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:1949 JMP @UNKNOWN140
    case 0xC25521: cpu.execute_instruction<0x4C>(0x0055AC, 3); return true;
    // src/battle/main_battle_routine.asm:1951 LDA a:battler::consciousness,Y
    case 0xC25524: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    case 0xC25527: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1952 AND #$00FF
    // Overlapping static entry reached from 0xC25527.
    case 0xC25529: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1953 BEQ @UNKNOWN139
    case 0xC2552A: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/battle/main_battle_routine.asm:1954 LDA a:battler::npc_id,Y
    case 0xC2552C: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    case 0xC2552F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1955 AND #$00FF
    // Overlapping static entry reached from 0xC2552F.
    case 0xC25531: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1956 BNE @UNKNOWN139
    case 0xC25532: cpu.execute_instruction<0xD0>(0x00006E, 2); return true;
    // src/battle/main_battle_routine.asm:1957 LDA a:battler::ally_or_enemy,Y
    case 0xC25534: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    case 0xC25537: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1958 AND #$00FF
    // Overlapping static entry reached from 0xC25537.
    case 0xC25539: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:1959 CMP #1
    case 0xC2553A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1959 CMP #1
    // Overlapping static entry reached from 0xC2553A.
    case 0xC2553C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:1960 BNE @UNKNOWN138
    case 0xC2553D: cpu.execute_instruction<0xD0>(0x000058, 2); return true;
    // src/battle/main_battle_routine.asm:1961 LDA a:battler::id,Y
    case 0xC2553F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    case 0xC25542: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/main_battle_routine.asm:1962 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC25542.
    case 0xC25544: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:1963 JSL MULT168
    case 0xC25545: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:1964 CLC
    case 0xC25549: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    case 0xC2554A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x000056, 3); return true;
    // src/battle/main_battle_routine.asm:1965 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC2554A.
    case 0xC2554C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1966 TAX
    case 0xC2554D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1967 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2554E: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    case 0xC25552: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1968 AND #$00FF
    // Overlapping static entry reached from 0xC25552.
    case 0xC25554: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25555: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:1969 BNEL @UNKNOWN143
    case 0xC25557: cpu.execute_instruction<0x4C>(0x005604, 3); return true;
    // src/battle/main_battle_routine.asm:1973 LDY @LOCAL0F
    case 0xC2555A: cpu.execute_instruction<0xA4>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:1975 LDA a:battler::afflictions,Y
    case 0xC2555C: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    case 0xC2555F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1976 AND #$00FF
    // Overlapping static entry reached from 0xC2555F.
    case 0xC25561: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1977 TAX
    case 0xC25562: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1978 CPX #1
    case 0xC25563: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1978 CPX #1
    // Overlapping static entry reached from 0xC25563.
    case 0xC25565: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1979 BEQ @UNKNOWN139
    case 0xC25566: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/main_battle_routine.asm:1980 CPX #2
    case 0xC25568: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:1980 CPX #2
    // Overlapping static entry reached from 0xC25568.
    case 0xC2556A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1981 BEQ @UNKNOWN139
    case 0xC2556B: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:1982 CPX #3
    case 0xC2556D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1982 CPX #3
    // Overlapping static entry reached from 0xC2556D.
    case 0xC2556F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1983 BEQ @UNKNOWN139
    case 0xC25570: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/main_battle_routine.asm:1984 LDA a:battler::afflictions+2,Y
    case 0xC25572: cpu.execute_instruction<0xB9>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    case 0xC25575: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:1985 AND #$00FF
    // Overlapping static entry reached from 0xC25575.
    case 0xC25577: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:1986 TAX
    case 0xC25578: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:1987 CPX #1
    case 0xC25579: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:1987 CPX #1
    // Overlapping static entry reached from 0xC25579.
    case 0xC2557B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1988 BEQ @UNKNOWN139
    case 0xC2557C: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/main_battle_routine.asm:1989 CPX #3
    case 0xC2557E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:1989 CPX #3
    // Overlapping static entry reached from 0xC2557E.
    case 0xC25580: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1990 BEQ @UNKNOWN139
    case 0xC25581: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:1991 CPX #4
    case 0xC25583: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:1991 CPX #4
    // Overlapping static entry reached from 0xC25583.
    case 0xC25585: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:1992 BEQ @UNKNOWN139
    case 0xC25586: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:1993 LDA a:battler::speed,Y
    case 0xC25588: cpu.execute_instruction<0xB9>(0x00002A, 3); return true;
    // src/battle/main_battle_routine.asm:1994 CMP @VIRTUAL04
    case 0xC2558B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC2558D: cpu.execute_instruction<0x90>(0x000013, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:1995 BLTEQ @UNKNOWN139
    case 0xC2558F: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:1996 STA @VIRTUAL04
    case 0xC25591: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:1997 STA @LOCAL08
    case 0xC25593: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:1998 BRA @UNKNOWN139
    case 0xC25595: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:2000 LDA a:battler::speed,Y
    case 0xC25597: cpu.execute_instruction<0xB9>(0x00002A, 3); return true;
    // src/battle/main_battle_routine.asm:2001 CMP @LOCAL05
    case 0xC2559A: cpu.execute_instruction<0xC5>(0x00001B, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC2559C: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2002 BLTEQ @UNKNOWN139
    case 0xC2559E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2003 STA @LOCAL05
    case 0xC255A0: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2005 TYA
    case 0xC255A2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2006 CLC
    case 0xC255A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    case 0xC255A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2007 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC255A4.
    case 0xC255A6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:2008 TAY
    case 0xC255A7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2012 STY @LOCAL0F
    case 0xC255A8: cpu.execute_instruction<0x84>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2014 INC @VIRTUAL02
    case 0xC255AA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2016 LDA @VIRTUAL02
    case 0xC255AC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    case 0xC255AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2017 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC255AE.
    case 0xC255B0: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC255B1: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC255B3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2018 BCCL @UNKNOWN136
    case 0xC255B5: cpu.execute_instruction<0x4C>(0x005524, 3); return true;
    // src/battle/main_battle_routine.asm:2019 LDA @VIRTUAL04
    case 0xC255B8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2020 BEQ @UNKNOWN142
    case 0xC255BA: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:2024 LDA @LOCAL06
    case 0xC255BC: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:2026 CMP #4
    case 0xC255BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2026 CMP #4
    // Overlapping static entry reached from 0xC255BE.
    case 0xC255C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2027 BEQ @UNKNOWN142
    case 0xC255C1: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/battle/main_battle_routine.asm:2031 LDA @LOCAL0A
    case 0xC255C3: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255C9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2033 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC255CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2034 CLC
    case 0xC255CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2035 ADC @LOCAL05
    case 0xC255CD: cpu.execute_instruction<0x65>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2036 TAX
    case 0xC255CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2040 STX @LOCAL0F
    case 0xC255D0: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2042 LDA @LOCAL08
    case 0xC255D2: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:2043 STA @VIRTUAL04
    case 0xC255D4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2044 TXA
    case 0xC255D6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2045 CMP @VIRTUAL04
    case 0xC255D7: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2046 BCC @UNKNOWN143
    case 0xC255D9: cpu.execute_instruction<0x90>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:2047 LDA #100
    case 0xC255DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/main_battle_routine.asm:2047 LDA #100
    // Overlapping static entry reached from 0xC255DB.
    case 0xC255DD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2048 JSR RAND_LIMIT
    case 0xC255DE: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/main_battle_routine.asm:2053 STA @LOCAL0B
    case 0xC255E1: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:2054 LDX @LOCAL0F
    case 0xC255E3: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2056 TXA
    case 0xC255E5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2057 SEC
    case 0xC255E6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2058 SBC @VIRTUAL04
    case 0xC255E7: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2059 STA @VIRTUAL02
    case 0xC255E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2063 LDA @LOCAL0B
    case 0xC255EB: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/battle/main_battle_routine.asm:2065 CMP @VIRTUAL02
    case 0xC255ED: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2066 BCS @UNKNOWN143
    case 0xC255EF: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x0084F3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC255F1.
    case 0xC255F3: cpu.execute_instruction<0x84>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC255F3.
    case 0xC255F5: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    // Overlapping static entry reached from 0xC255F6.
    case 0xC255F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2068 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE
    case 0xC255FB: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2069 STZ @LOCAL03
    case 0xC255FF: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:2070 JMP @UNKNOWN237
    case 0xC25601: cpu.execute_instruction<0x4C>(0x006093, 3); return true;
    // src/battle/main_battle_routine.asm:2075 STZ @LOCAL0B
    case 0xC25604: cpu.execute_instruction<0x64>(0x000027, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25606: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008511, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC25606.
    case 0xC25608: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25609: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC25608.
    case 0xC2560A: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2560B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    // Overlapping static entry reached from 0xC2560B.
    case 0xC2560D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC2560E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2077 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PLAYER_FLEE_NG
    case 0xC25610: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2082 STZ @LOCAL06
    case 0xC25614: cpu.execute_instruction<0x64>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:2084 JMP @UNKNOWN234
    case 0xC25616: cpu.execute_instruction<0x4C>(0x006081, 3); return true;
    // src/battle/main_battle_routine.asm:2086 JSL CHECK_DEAD_PLAYERS
    case 0xC25619: cpu.execute_instruction<0x22>(0xC2BB18, 4); return true;
    // src/battle/main_battle_routine.asm:2087 LDA #0
    case 0xC2561D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2087 LDA #0
    // Overlapping static entry reached from 0xC2561D.
    case 0xC2561F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2088 JSL COUNT_CHARS
    case 0xC25620: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:2089 CMP #0
    case 0xC25624: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2089 CMP #0
    // Overlapping static entry reached from 0xC25624.
    case 0xC25626: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25627: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2090 BEQL @UNKNOWN225
    case 0xC25629: cpu.execute_instruction<0x4C>(0x005EF7, 3); return true;
    // src/battle/main_battle_routine.asm:2091 LDA #1
    case 0xC2562C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2091 LDA #1
    // Overlapping static entry reached from 0xC2562C.
    case 0xC2562E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2092 JSL COUNT_CHARS
    case 0xC2562F: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:2093 CMP #0
    case 0xC25633: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2093 CMP #0
    // Overlapping static entry reached from 0xC25633.
    case 0xC25635: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25636: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2094 BEQL @UNKNOWN225
    case 0xC25638: cpu.execute_instruction<0x4C>(0x005EF7, 3); return true;
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    case 0xC2563B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:2095 LDA #$FFFF
    // Overlapping static entry reached from 0xC2563B.
    case 0xC2563D: cpu.execute_instruction<0xFF>(0x850485, 4); return true;
    // src/battle/main_battle_routine.asm:2096 STA @VIRTUAL04
    case 0xC2563E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    case 0xC25640: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:2097 STA @LOCAL08
    // Overlapping static entry reached from 0xC2563D.
    case 0xC25641: cpu.execute_instruction<0x21>(0x0000A2, 2); return true;
    // src/battle/main_battle_routine.asm:2103 LDX #0
    case 0xC25642: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2103 LDX #0
    // Overlapping static entry reached from 0xC25641.
    case 0xC25643: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:2103 LDX #0
    // Overlapping static entry reached from 0xC25642.
    case 0xC25644: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/main_battle_routine.asm:2104 TXA
    case 0xC25645: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2106 STA @LOCAL10
    case 0xC25646: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2107 BRA @UNKNOWN150
    case 0xC25648: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    case 0xC2564A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2109 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2564A.
    case 0xC2564C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2110 JSL MULT168
    case 0xC2564D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:2110 JSL MULT168
    // Overlapping static entry reached from 0xC256A5.
    case 0xC25650: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A8, 2); else cpu.execute_instruction<0xC0>(0x00B9A8, 3); return true;
    // src/battle/main_battle_routine.asm:2125 TAY
    case 0xC25651: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2126 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC25652: cpu.execute_instruction<0xB9>(0x009FB8, 3); return true;
    // src/battle/main_battle_routine.asm:2126 LDA BATTLERS_TABLE+battler::consciousness,Y
    // Overlapping static entry reached from 0xC25650.
    case 0xC25653: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2126 LDA BATTLERS_TABLE+battler::consciousness,Y
    // Overlapping static entry reached from 0xC25653.
    case 0xC25654: cpu.execute_instruction<0x9F>(0x00FF29, 4); return true;
    // src/battle/main_battle_routine.asm:2127 AND #$00FF
    case 0xC25655: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2127 AND #$00FF
    // Overlapping static entry reached from 0xC25655.
    case 0xC25657: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2128 BEQ @UNKNOWN149
    case 0xC25658: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:2129 LDA BATTLERS_TABLE+13,Y
    case 0xC2565A: cpu.execute_instruction<0xB9>(0x009FB9, 3); return true;
    // src/battle/main_battle_routine.asm:2130 AND #$00FF
    case 0xC2565D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2130 AND #$00FF
    // Overlapping static entry reached from 0xC2565D.
    case 0xC2565F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2131 BNE @UNKNOWN149
    case 0xC25660: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:2132 LDA BATTLERS_TABLE+70,Y
    case 0xC25662: cpu.execute_instruction<0xB9>(0x009FF2, 3); return true;
    // src/battle/main_battle_routine.asm:2133 TAY
    case 0xC25665: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2134 STX @VIRTUAL02
    case 0xC25666: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2135 TYA
    case 0xC25668: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2137 CMP @VIRTUAL02
    case 0xC25669: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2138 BCC @UNKNOWN149
    case 0xC2566B: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:2139 LDA @LOCAL10
    case 0xC2566D: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2140 STA @VIRTUAL04
    case 0xC2566F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2141 STA @LOCAL08
    case 0xC25671: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:2146 TYX
    case 0xC25673: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2149 LDA @LOCAL10
    case 0xC25674: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2150 INC
    case 0xC25676: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2151 STA @LOCAL10
    case 0xC25677: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    case 0xC25679: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2153 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25679.
    case 0xC2567B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2154 BCC @UNKNOWN148
    case 0xC2567C: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // src/battle/main_battle_routine.asm:2155 LDA @VIRTUAL04
    case 0xC2567E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    case 0xC25680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/main_battle_routine.asm:2156 CMP #$FFFF
    // Overlapping static entry reached from 0xC25680.
    case 0xC25682: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC25683: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    case 0xC25685: cpu.execute_instruction<0x4C>(0x006088, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    // Overlapping static entry reached from 0xC25682.
    case 0xC25686: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2157 BEQL @UNKNOWN235
    // Overlapping static entry reached from 0xC25686.
    case 0xC25687: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2158 JSL REDIRECT_C10FA3
    case 0xC25688: cpu.execute_instruction<0x22>(0xC1DD53, 4); return true;
    // src/battle/main_battle_routine.asm:2159 LDA @VIRTUAL04
    case 0xC2568C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    case 0xC2568E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2160 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2568E.
    case 0xC25690: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2161 JSL MULT168
    case 0xC25691: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:2162 CLC
    case 0xC25695: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC25696: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:2163 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25696.
    case 0xC25698: cpu.execute_instruction<0x9F>(0x708EAA, 4); return true;
    // src/battle/main_battle_routine.asm:2164 TAX
    case 0xC25699: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2165 STX CURRENT_ATTACKER
    case 0xC2569A: cpu.execute_instruction<0x8E>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2165 STX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25698.
    case 0xC2569C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x0020E2, 3); return true;
    // src/battle/main_battle_routine.asm:2166 SEP #PROC_FLAGS::ACCUM8
    case 0xC2569D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2166 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2569C.
    case 0xC2569E: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/battle/main_battle_routine.asm:2167 LDA #1
    case 0xC2569F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    case 0xC256A1: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/main_battle_routine.asm:2168 STA a:battler::has_taken_turn,X
    // Overlapping static entry reached from 0xC2569F.
    case 0xC256A2: cpu.execute_instruction<0x0D>(0x00AE00, 3); return true;
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    case 0xC256A4: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2169 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC256A2.
    case 0xC256A5: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:2170 REP #PROC_FLAGS::ACCUM8
    case 0xC256A7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2171 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC256A9: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    case 0xC256AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2172 AND #$00FF
    // Overlapping static entry reached from 0xC256AC.
    case 0xC256AE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:2173 TAX
    case 0xC256AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    case 0xC256B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2174 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC256B0.
    case 0xC256B2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC256B3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2175 BEQL @UNKNOWN234
    case 0xC256B5: cpu.execute_instruction<0x4C>(0x006081, 3); return true;
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    case 0xC256B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2176 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC256B8.
    case 0xC256BA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC256BB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2177 BEQL @UNKNOWN234
    case 0xC256BD: cpu.execute_instruction<0x4C>(0x006081, 3); return true;
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    case 0xC256C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2178 CPX #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC256C0.
    case 0xC256C2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2179 BEQ @UNKNOWN154
    case 0xC256C3: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:2180 LDX CURRENT_ATTACKER
    case 0xC256C5: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2181 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC256C8: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    case 0xC256CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2182 AND #$00FF
    // Overlapping static entry reached from 0xC256CB.
    case 0xC256CD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    case 0xC256CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2183 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC256CE.
    case 0xC256D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC256D1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2184 BNEL @UNKNOWN157
    case 0xC256D3: cpu.execute_instruction<0x4C>(0x005765, 3); return true;
    // src/battle/main_battle_routine.asm:2186 LDX CURRENT_ATTACKER
    case 0xC256D6: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2187 INX
    case 0xC256D9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2188 INX
    case 0xC256DA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2189 INX
    case 0xC256DB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2190 INX
    case 0xC256DC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2194 STX @LOCAL0F
    case 0xC256DD: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2196 LDA __BSS_START__,X
    case 0xC256DF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2197 STA @LOCAL10
    case 0xC256E2: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2198 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC256EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2199 TAX
    case 0xC256EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2200 INX
    case 0xC256EC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2201 INX
    case 0xC256ED: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2202 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC256EE: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    case 0xC256F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2203 AND #$00FF
    // Overlapping static entry reached from 0xC256F2.
    case 0xC256F4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    case 0xC256F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2204 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC256F5.
    case 0xC256F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2205 BEQ @UNKNOWN157
    case 0xC256F8: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/battle/main_battle_routine.asm:2206 LDA @LOCAL10
    case 0xC256FA: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    case 0xC256FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2207 CMP #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC256FC.
    case 0xC256FE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2208 BEQ @UNKNOWN157
    case 0xC256FF: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC25701: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000123, 3); return true;
    // src/battle/main_battle_routine.asm:2209 CMP #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC25701.
    case 0xC25703: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    case 0xC25704: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/battle/main_battle_routine.asm:2210 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25703.
    case 0xC25705: cpu.execute_instruction<0x5F>(0x0124C9, 4); return true;
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC25706: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000124, 3); return true;
    // src/battle/main_battle_routine.asm:2211 CMP #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC25706.
    case 0xC25708: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    case 0xC25709: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/battle/main_battle_routine.asm:2212 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25708.
    case 0xC2570A: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC2570B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000025, 2); else cpu.execute_instruction<0xC9>(0x000125, 3); return true;
    // src/battle/main_battle_routine.asm:2213 CMP #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC2570B.
    case 0xC2570D: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    case 0xC2570E: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/battle/main_battle_routine.asm:2214 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2570D.
    case 0xC2570F: cpu.execute_instruction<0x55>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC25710: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000026, 2); else cpu.execute_instruction<0xC9>(0x000126, 3); return true;
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC2570F.
    case 0xC25711: cpu.execute_instruction<0x26>(0x000001, 2); return true;
    // src/battle/main_battle_routine.asm:2215 CMP #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC25710.
    case 0xC25712: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    case 0xC25713: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/battle/main_battle_routine.asm:2216 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25712.
    case 0xC25714: cpu.execute_instruction<0x50>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC25715: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000027, 2); else cpu.execute_instruction<0xC9>(0x000127, 3); return true;
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC25714.
    case 0xC25716: cpu.execute_instruction<0x27>(0x000001, 2); return true;
    // src/battle/main_battle_routine.asm:2217 CMP #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC25715.
    case 0xC25717: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    case 0xC25718: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/battle/main_battle_routine.asm:2218 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25717.
    case 0xC25719: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC2571A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000128, 3); return true;
    // src/battle/main_battle_routine.asm:2219 CMP #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC2571A.
    case 0xC2571C: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    case 0xC2571D: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/main_battle_routine.asm:2220 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2571C.
    case 0xC2571E: cpu.execute_instruction<0x46>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC2571F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000029, 2); else cpu.execute_instruction<0xC9>(0x000129, 3); return true;
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC2571E.
    case 0xC25720: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x00F001, 3); return true;
    // src/battle/main_battle_routine.asm:2221 CMP #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC2571F.
    case 0xC25721: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    case 0xC25722: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/battle/main_battle_routine.asm:2222 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25721.
    case 0xC25723: cpu.execute_instruction<0x41>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC25724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002A, 2); else cpu.execute_instruction<0xC9>(0x00012A, 3); return true;
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25723.
    case 0xC25725: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2223 CMP #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC25724.
    case 0xC25726: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    case 0xC25727: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/battle/main_battle_routine.asm:2224 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25726.
    case 0xC25728: cpu.execute_instruction<0x3C>(0x002BC9, 3); return true;
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC25729: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002B, 2); else cpu.execute_instruction<0xC9>(0x00012B, 3); return true;
    // src/battle/main_battle_routine.asm:2225 CMP #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC25729.
    case 0xC2572B: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    case 0xC2572C: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/battle/main_battle_routine.asm:2226 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC2572B.
    case 0xC2572D: cpu.execute_instruction<0x37>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    case 0xC2572E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC2572D.
    case 0xC2572F: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:2227 CMP #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC2572E.
    case 0xC25730: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2228 BEQ @UNKNOWN157
    case 0xC25731: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    case 0xC25733: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000118, 3); return true;
    // src/battle/main_battle_routine.asm:2229 CMP #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC25733.
    case 0xC25735: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    case 0xC25736: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:2230 BEQ @UNKNOWN157
    // Overlapping static entry reached from 0xC25735.
    case 0xC25737: cpu.execute_instruction<0x2D>(0x0000C9, 3); return true;
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    case 0xC25738: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2231 CMP #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC25738.
    case 0xC2573A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2232 BEQ @UNKNOWN157
    case 0xC2573B: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:2233 LDX CURRENT_ATTACKER
    case 0xC2573D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2234 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25740: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    case 0xC25743: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2235 AND #$00FF
    // Overlapping static entry reached from 0xC25743.
    case 0xC25745: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    case 0xC25746: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2236 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC25746.
    case 0xC25748: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2237 BNE @UNKNOWN155
    case 0xC25749: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    case 0xC2574B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0000FC, 3); return true;
    // src/battle/main_battle_routine.asm:2238 LDA #BATTLE_ACTIONS::ACTION_252
    // Overlapping static entry reached from 0xC2574B.
    case 0xC2574D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:2242 LDX @LOCAL0F
    case 0xC2574E: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2244 STA __BSS_START__,X ;battler::current_action
    case 0xC25750: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2245 BRA @UNKNOWN156
    case 0xC25753: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    case 0xC25755: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0000FE, 3); return true;
    // src/battle/main_battle_routine.asm:2247 LDA #BATTLE_ACTIONS::ACTION_254
    // Overlapping static entry reached from 0xC25755.
    case 0xC25757: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:2251 LDX @LOCAL0F
    case 0xC25758: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2253 STA __BSS_START__,X ;battler::current_action
    case 0xC2575A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2255 LDX CURRENT_ATTACKER
    case 0xC2575D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2256 SEP #PROC_FLAGS::ACCUM8
    case 0xC25760: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2257 STZ a:battler::action_item_slot,X
    case 0xC25762: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2259 LDX CURRENT_ATTACKER
    case 0xC25765: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2260 REP #PROC_FLAGS::ACCUM8
    case 0xC25768: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2261 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC2576A: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    case 0xC2576D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2262 AND #$00FF
    // Overlapping static entry reached from 0xC2576D.
    case 0xC2576F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    case 0xC25770: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2263 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25770.
    case 0xC25772: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2264 BNE @UNKNOWN158
    case 0xC25773: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:2265 LDX CURRENT_ATTACKER
    case 0xC25775: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2266 INX
    case 0xC25778: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2267 INX
    case 0xC25779: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2268 INX
    case 0xC2577A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2269 INX
    case 0xC2577B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2270 LDA __BSS_START__,X ;battler::current_action
    case 0xC2577C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2271 BEQ @UNKNOWN158
    case 0xC2577F: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    case 0xC25781: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0000FD, 3); return true;
    // src/battle/main_battle_routine.asm:2272 LDA #BATTLE_ACTIONS::ACTION_253
    // Overlapping static entry reached from 0xC25781.
    case 0xC25783: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/main_battle_routine.asm:2273 STA __BSS_START__,X ;battler::current_action
    case 0xC25784: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2274 LDX CURRENT_ATTACKER
    case 0xC25787: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2275 SEP #PROC_FLAGS::ACCUM8
    case 0xC2578A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2276 STZ a:battler::action_item_slot,X
    case 0xC2578C: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2278 LDX CURRENT_ATTACKER
    case 0xC2578F: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2279 REP #PROC_FLAGS::ACCUM8
    case 0xC25792: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2280 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC25794: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    case 0xC25797: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2281 AND #$00FF
    // Overlapping static entry reached from 0xC25797.
    case 0xC25799: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    case 0xC2579A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2282 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2579A.
    case 0xC2579C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2283 BNE @UNKNOWN159
    case 0xC2579D: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2284 LDX CURRENT_ATTACKER
    case 0xC2579F: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2285 INX
    case 0xC257A2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2286 INX
    case 0xC257A3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2287 INX
    case 0xC257A4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2288 INX
    case 0xC257A5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2289 LDA __BSS_START__,X ;battler::current_action
    case 0xC257A6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2290 BEQ @UNKNOWN159
    case 0xC257A9: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    case 0xC257AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2291 LDA #BATTLE_ACTIONS::ACTION_255
    // Overlapping static entry reached from 0xC257AB.
    case 0xC257AD: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/main_battle_routine.asm:2292 STA __BSS_START__,X ;battler::current_action
    case 0xC257AE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2293 LDX CURRENT_ATTACKER
    case 0xC257B1: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2294 SEP #PROC_FLAGS::ACCUM8
    case 0xC257B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2295 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC257B6: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2296 LDX CURRENT_ATTACKER
    case 0xC257B9: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2297 STZ a:battler::action_item_slot,X
    case 0xC257BC: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2299 LDX CURRENT_ATTACKER
    case 0xC257BF: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2300 REP #PROC_FLAGS::ACCUM8
    case 0xC257C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2301 LDA a:battler::afflictions+STATUS_GROUP::CONCENTRATION,X
    case 0xC257C4: cpu.execute_instruction<0xBD>(0x000021, 3); return true;
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    case 0xC257C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2302 AND #$00FF
    // Overlapping static entry reached from 0xC257C7.
    case 0xC257C9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2303 BEQ @UNKNOWN160
    case 0xC257CA: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/main_battle_routine.asm:2304 LDX CURRENT_ATTACKER
    case 0xC257CC: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2305 INX
    case 0xC257CF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2306 INX
    case 0xC257D0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2307 INX
    case 0xC257D1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2308 INX
    case 0xC257D2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2312 STX @LOCAL0F
    case 0xC257D3: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2314 LDA __BSS_START__,X ;battler::current_action
    case 0xC257D5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2315 STA @LOCAL10
    case 0xC257D8: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2316 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC257E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2317 TAX
    case 0xC257E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2318 INX
    case 0xC257E2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2319 INX
    case 0xC257E3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2320 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC257E4: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    case 0xC257E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2321 AND #$00FF
    // Overlapping static entry reached from 0xC257E8.
    case 0xC257EA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    case 0xC257EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2322 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC257EB.
    case 0xC257ED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2323 BNE @UNKNOWN160
    case 0xC257EE: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2324 LDA @LOCAL10
    case 0xC257F0: cpu.execute_instruction<0xA5>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2325 BEQ @UNKNOWN160
    case 0xC257F2: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    case 0xC257F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/battle/main_battle_routine.asm:2326 LDA #BATTLE_ACTIONS::ACTION_256
    // Overlapping static entry reached from 0xC257F4.
    case 0xC257F6: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:2330 LDX @LOCAL0F
    case 0xC257F7: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2330 LDX @LOCAL0F
    // Overlapping static entry reached from 0xC257F6.
    case 0xC257F8: cpu.execute_instruction<0x2F>(0x00009D, 4); return true;
    // src/battle/main_battle_routine.asm:2332 STA __BSS_START__,X ;battler::current_action
    case 0xC257F9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2334 LDX CURRENT_ATTACKER
    case 0xC257FC: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2335 LDA a:battler::afflictions+STATUS_GROUP::HOMESICKNESS,X
    case 0xC257FF: cpu.execute_instruction<0xBD>(0x000022, 3); return true;
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    case 0xC25802: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2336 AND #$00FF
    // Overlapping static entry reached from 0xC25802.
    case 0xC25804: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    case 0xC25805: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2337 CMP #STATUS_5::HOMESICK
    // Overlapping static entry reached from 0xC25805.
    case 0xC25807: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2338 BNE @UNKNOWN161
    case 0xC25808: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2339 LDX CURRENT_ATTACKER
    case 0xC2580A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2340 LDA a:battler::current_action,X
    case 0xC2580D: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2341 BEQ @UNKNOWN161
    case 0xC25810: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:2342 JSL RAND
    case 0xC25812: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    case 0xC25816: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2343 AND #$0007
    // Overlapping static entry reached from 0xC25816.
    case 0xC25818: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2344 BNE @UNKNOWN161
    case 0xC25819: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    case 0xC2581B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0000FB, 3); return true;
    // src/battle/main_battle_routine.asm:2345 LDA #BATTLE_ACTIONS::ACTION_251
    // Overlapping static entry reached from 0xC2581B.
    case 0xC2581D: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/battle/main_battle_routine.asm:2346 LDX CURRENT_ATTACKER
    case 0xC2581E: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2347 STA a:battler::current_action,X
    case 0xC25821: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2348 LDX CURRENT_ATTACKER
    case 0xC25824: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2349 SEP #PROC_FLAGS::ACCUM8
    case 0xC25827: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2349 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2587D.
    case 0xC25828: cpu.execute_instruction<0x20>(0x00079E, 3); return true;
    // src/battle/main_battle_routine.asm:2350 STZ a:battler::action_item_slot,X
    case 0xC25829: cpu.execute_instruction<0x9E>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2350 STZ a:battler::action_item_slot,X
    // Overlapping static entry reached from 0xC25828.
    case 0xC2582B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:2352 REP #PROC_FLAGS::ACCUM8
    case 0xC2582C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC2582E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2582E.
    case 0xC25830: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25831: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC25833.
    case 0xC25835: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2353 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC25836: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2354 LDX CURRENT_ATTACKER
    case 0xC25838: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2355 LDA a:battler::current_action,X
    case 0xC2583B: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2583E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25840: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25841: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25843: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2356 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25844: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2360 STA @LOCAL0F
    case 0xC25845: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25847: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC25849: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2584B: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2362 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2584D: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2363 CLC
    case 0xC2584F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2364 ADC @VIRTUAL0A
    case 0xC25850: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2365 STA @VIRTUAL0A
    case 0xC25852: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2366 LDA [@VIRTUAL0A]
    case 0xC25854: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    case 0xC25856: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2367 AND #$00FF
    // Overlapping static entry reached from 0xC25856.
    case 0xC25858: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2368 CMP #1
    case 0xC25859: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2368 CMP #1
    // Overlapping static entry reached from 0xC25859.
    case 0xC2585B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2369 BNE @UNKNOWN163
    case 0xC2585C: cpu.execute_instruction<0xD0>(0x000061, 2); return true;
    // src/battle/main_battle_routine.asm:2373 LDA @LOCAL0F
    case 0xC2585E: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2375 INC
    case 0xC25860: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2376 CLC
    case 0xC25861: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2377 ADC @VIRTUAL06
    case 0xC25862: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2378 STA @VIRTUAL06
    case 0xC25864: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2379 LDA [@VIRTUAL06]
    case 0xC25866: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    case 0xC25868: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2380 AND #$00FF
    // Overlapping static entry reached from 0xC25868.
    case 0xC2586A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2381 BNE @UNKNOWN163
    case 0xC2586B: cpu.execute_instruction<0xD0>(0x000052, 2); return true;
    // src/battle/main_battle_routine.asm:2382 LDX CURRENT_ATTACKER
    case 0xC2586D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2383 LDA a:battler::ally_or_enemy,X
    case 0xC25870: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    case 0xC25873: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2384 AND #$00FF
    // Overlapping static entry reached from 0xC25873.
    case 0xC25875: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2385 BNE @UNKNOWN162
    case 0xC25876: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:2386 SEP #PROC_FLAGS::ACCUM8
    case 0xC25878: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2387 LDA #1
    case 0xC2587A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    case 0xC2587C: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2388 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2587A.
    case 0xC2587D: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:2389 STA a:battler::action_targetting,X
    case 0xC2587F: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    case 0xC25882: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2390 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25882.
    case 0xC25884: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:2391 REP #PROC_FLAGS::ACCUM8
    case 0xC25885: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2392 LDA CURRENT_ATTACKER
    case 0xC25887: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2393 SEC
    case 0xC2588A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC2588B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AC, 2); else cpu.execute_instruction<0xE9>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:2394 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2588B.
    case 0xC2588D: cpu.execute_instruction<0x9F>(0x915B22, 4); return true;
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2588E: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/battle/main_battle_routine.asm:2395 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC2588D.
    case 0xC25891: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/battle/main_battle_routine.asm:2396 SEP #PROC_FLAGS::ACCUM8
    case 0xC25892: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2396 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC25891.
    case 0xC25893: cpu.execute_instruction<0x20>(0x00AE1A, 3); return true;
    // src/battle/main_battle_routine.asm:2397 INC
    case 0xC25894: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2398 LDX CURRENT_ATTACKER
    case 0xC25895: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2398 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25893.
    case 0xC25896: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:2399 STA a:battler::current_target,X
    case 0xC25898: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/main_battle_routine.asm:2400 BRA @UNKNOWN163
    case 0xC2589B: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2402 SEP #PROC_FLAGS::ACCUM8
    case 0xC2589D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2403 LDA #17
    case 0xC2589F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00AE11, 3); return true;
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    case 0xC258A1: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2404 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2589F.
    case 0xC258A2: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:2405 STA a:battler::action_targetting,X
    case 0xC258A4: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    case 0xC258A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2406 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC258A7.
    case 0xC258A9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/main_battle_routine.asm:2407 REP #PROC_FLAGS::ACCUM8
    case 0xC258AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2408 LDA CURRENT_ATTACKER
    case 0xC258AC: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2409 SEC
    case 0xC258AF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC258B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AC, 2); else cpu.execute_instruction<0xE9>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:2410 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC258B0.
    case 0xC258B2: cpu.execute_instruction<0x9F>(0x915B22, 4); return true;
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC258B3: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/battle/main_battle_routine.asm:2411 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC258B2.
    case 0xC258B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AA, 2); else cpu.execute_instruction<0xC0>(0x00ADAA, 3); return true;
    // src/battle/main_battle_routine.asm:2412 TAX
    case 0xC258B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2413 LDA CURRENT_ATTACKER
    case 0xC258B8: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2413 LDA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC258B6.
    case 0xC258B9: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:2414 JSL UNKNOWN_C4A228
    case 0xC258BB: cpu.execute_instruction<0x22>(0xC4A228, 4); return true;
    // src/battle/main_battle_routine.asm:2416 LDX #0
    case 0xC258BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2416 LDX #0
    // Overlapping static entry reached from 0xC258BF.
    case 0xC258C1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:2420 STX @LOCAL0F
    case 0xC258C2: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2422 REP #PROC_FLAGS::ACCUM8
    case 0xC258C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2423 LDA CURRENT_ATTACKER
    case 0xC258C6: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2424 STA CURRENT_TARGET
    case 0xC258C9: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:2425 TXA
    case 0xC258CC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2426 JSL FIX_ATTACKER_NAME
    case 0xC258CD: cpu.execute_instruction<0x22>(0xC23BCF, 4); return true;
    // src/battle/main_battle_routine.asm:2427 JSL FIX_TARGET_NAME
    case 0xC258D1: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/main_battle_routine.asm:2428 LDX CURRENT_ATTACKER
    case 0xC258D5: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2429 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC258D8: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    case 0xC258DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2430 AND #$00FF
    // Overlapping static entry reached from 0xC258DB.
    case 0xC258DD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    case 0xC258DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2431 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC258DE.
    case 0xC258E0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2432 BEQ @UNKNOWN164
    case 0xC258E1: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    case 0xC258E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:2433 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC258E3.
    case 0xC258E5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2434 BEQ @UNKNOWN165
    case 0xC258E6: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    case 0xC258E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:2435 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC258E8.
    case 0xC258EA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2436 BEQ @UNKNOWN166
    case 0xC258EB: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    case 0xC258ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/main_battle_routine.asm:2437 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC258ED.
    case 0xC258EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2438 BEQ @UNKNOWN167
    case 0xC258F0: cpu.execute_instruction<0xF0>(0x000075, 2); return true;
    // src/battle/main_battle_routine.asm:2439 JMP @UNKNOWN168
    case 0xC258F2: cpu.execute_instruction<0x4C>(0x00598B, 3); return true;
    // src/battle/main_battle_routine.asm:2441 LDA #20
    case 0xC258F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/main_battle_routine.asm:2441 LDA #20
    // Overlapping static entry reached from 0xC258F5.
    case 0xC258F7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2442 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC258F8: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/main_battle_routine.asm:2443 TAX
    case 0xC258FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2447 STX @LOCAL0F
    case 0xC258FC: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC258FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007768, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC258FE.
    case 0xC25900: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25901: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25900.
    case 0xC25902: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25903: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25903.
    case 0xC25905: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2449 LOADPTR MSG_BTL_KIMOCHI_DAMAGE, @LOCAL00
    case 0xC25906: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2450 TXA
    case 0xC25908: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC25909: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2451 STORE_INT1632 @VIRTUAL06
    case 0xC2590B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2590D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2590F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25911: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2452 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25913: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2453 JSL DISPLAY_TEXT_WAIT
    case 0xC25915: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/main_battle_routine.asm:2454 BRA @UNKNOWN168
    case 0xC25919: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/battle/main_battle_routine.asm:2456 LDA #20
    case 0xC2591B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/main_battle_routine.asm:2456 LDA #20
    // Overlapping static entry reached from 0xC2591B.
    case 0xC2591D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2457 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2591E: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/main_battle_routine.asm:2458 TAX
    case 0xC25921: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2462 STX @LOCAL0F
    case 0xC25922: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25924: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000087, 2); else cpu.execute_instruction<0xA9>(0x007787, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25924.
    case 0xC25926: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25927: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25926.
    case 0xC25928: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC25929: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25929.
    case 0xC2592B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2464 LOADPTR MSG_BTL_MODOKU_DAMAGE, @LOCAL00
    case 0xC2592C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2465 TXA
    case 0xC2592E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC2592F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2466 STORE_INT1632 @VIRTUAL06
    case 0xC25931: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25933: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25935: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25937: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2467 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25939: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2468 JSL DISPLAY_TEXT_WAIT
    case 0xC2593B: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/main_battle_routine.asm:2469 BRA @UNKNOWN168
    case 0xC2593F: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/battle/main_battle_routine.asm:2471 LDA #4
    case 0xC25941: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2471 LDA #4
    // Overlapping static entry reached from 0xC25941.
    case 0xC25943: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2472 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC25944: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/main_battle_routine.asm:2473 TAX
    case 0xC25947: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2477 STX @LOCAL0F
    case 0xC25948: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2594A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B1, 2); else cpu.execute_instruction<0xA9>(0x0077B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2594A.
    case 0xC2594C: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2594D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2594C.
    case 0xC2594E: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC2594F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC2594F.
    case 0xC25951: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2479 LOADPTR MSG_BTL_NISSHA_DAMAGE, @LOCAL00
    case 0xC25952: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2480 TXA
    case 0xC25954: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC25955: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2481 STORE_INT1632 @VIRTUAL06
    case 0xC25957: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25959: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2595B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2595D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2482 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2595F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2483 JSL DISPLAY_TEXT_WAIT
    case 0xC25961: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/main_battle_routine.asm:2484 BRA @UNKNOWN168
    case 0xC25965: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/battle/main_battle_routine.asm:2486 LDA #4
    case 0xC25967: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2486 LDA #4
    // Overlapping static entry reached from 0xC25967.
    case 0xC25969: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2487 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2596A: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/main_battle_routine.asm:2488 TAX
    case 0xC2596D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2492 STX @LOCAL0F
    case 0xC2596E: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25970: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DB, 2); else cpu.execute_instruction<0xA9>(0x0077DB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25970.
    case 0xC25972: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25973: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25972.
    case 0xC25974: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25975: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC25975.
    case 0xC25977: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2494 LOADPTR MSG_BTL_KAZE_DAMAGE, @LOCAL00
    case 0xC25978: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2495 TXA
    case 0xC2597A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC2597B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2496 STORE_INT1632 @VIRTUAL06
    case 0xC2597D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2597F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25981: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25983: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2497 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25985: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2498 JSL DISPLAY_TEXT_WAIT
    case 0xC25987: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/main_battle_routine.asm:2503 LDX @LOCAL0F
    case 0xC2598B: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2505 LDA CURRENT_ATTACKER
    case 0xC2598D: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2506 JSL LOSE_HP_STATUS
    case 0xC25990: cpu.execute_instruction<0x22>(0xC2BCE6, 4); return true;
    // src/battle/main_battle_routine.asm:2507 LDX CURRENT_ATTACKER
    case 0xC25994: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2508 LDA a:battler::hp,X
    case 0xC25997: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/main_battle_routine.asm:2509 BNE @UNKNOWN171
    case 0xC2599A: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:2510 LDA CURRENT_ATTACKER
    case 0xC2599C: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2511 JSL KO_TARGET
    case 0xC2599F: cpu.execute_instruction<0x22>(0xC27550, 4); return true;
    // src/battle/main_battle_routine.asm:2512 LDA #0
    case 0xC259A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2512 LDA #0
    // Overlapping static entry reached from 0xC259A3.
    case 0xC259A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2513 JSL COUNT_CHARS
    case 0xC259A6: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:2514 CMP #0
    case 0xC259AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2514 CMP #0
    // Overlapping static entry reached from 0xC259AA.
    case 0xC259AC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC259AD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2515 BEQL @UNKNOWN225
    case 0xC259AF: cpu.execute_instruction<0x4C>(0x005EF7, 3); return true;
    // src/battle/main_battle_routine.asm:2516 LDA #1
    case 0xC259B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2516 LDA #1
    // Overlapping static entry reached from 0xC259B2.
    case 0xC259B4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2517 JSL COUNT_CHARS
    case 0xC259B5: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:2518 CMP #0
    case 0xC259B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2518 CMP #0
    // Overlapping static entry reached from 0xC259B9.
    case 0xC259BB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC259BC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2519 BNEL @UNKNOWN234
    case 0xC259BE: cpu.execute_instruction<0x4C>(0x006081, 3); return true;
    // src/battle/main_battle_routine.asm:2520 JMP @UNKNOWN225
    case 0xC259C1: cpu.execute_instruction<0x4C>(0x005EF7, 3); return true;
    // src/battle/main_battle_routine.asm:2522 LDX CURRENT_ATTACKER
    case 0xC259C4: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2523 LDA a:battler::ally_or_enemy,X
    case 0xC259C7: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    case 0xC259CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2524 AND #$00FF
    // Overlapping static entry reached from 0xC259CA.
    case 0xC259CC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2525 CMP #1
    case 0xC259CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2525 CMP #1
    // Overlapping static entry reached from 0xC259CD.
    case 0xC259CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2526 BNE @UNKNOWN172
    case 0xC259D0: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/battle/main_battle_routine.asm:2527 LDA CURRENT_ATTACKER
    case 0xC259D2: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2528 JSL CHOOSE_TARGET
    case 0xC259D5: cpu.execute_instruction<0x22>(0xC24477, 4); return true;
    // src/battle/main_battle_routine.asm:2529 LDX CURRENT_ATTACKER
    case 0xC259D9: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2530 LDA a:battler::current_action,X
    case 0xC259DC: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    case 0xC259DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000042, 2); else cpu.execute_instruction<0xC9>(0x000042, 3); return true;
    // src/battle/main_battle_routine.asm:2531 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC259DF.
    case 0xC259E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2532 BNE @UNKNOWN172
    case 0xC259E2: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2533 JSL SELECT_STEALABLE_ITEM
    case 0xC259E4: cpu.execute_instruction<0x22>(0xC24316, 4); return true;
    // src/battle/main_battle_routine.asm:2534 SEP #PROC_FLAGS::ACCUM8
    case 0xC259E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2535 LDX CURRENT_ATTACKER
    case 0xC259EA: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2536 STA a:battler::current_action_argument,X
    case 0xC259ED: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2538 REP #PROC_FLAGS::ACCUM8
    case 0xC259F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2539 LDA CURRENT_ATTACKER
    case 0xC259F2: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2540 JSL UNKNOWN_C24703
    case 0xC259F5: cpu.execute_instruction<0x22>(0xC24703, 4); return true;
    // src/battle/main_battle_routine.asm:2541 LDX CURRENT_ATTACKER
    case 0xC259F9: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2542 LDA a:battler::ally_or_enemy,X
    case 0xC259FC: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    case 0xC259FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2543 AND #$00FF
    // Overlapping static entry reached from 0xC259FF.
    case 0xC25A01: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2544 BNE @UNKNOWN174
    case 0xC25A02: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/battle/main_battle_routine.asm:2545 LDX CURRENT_ATTACKER
    case 0xC25A04: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2546 LDA a:battler::current_action,X
    case 0xC25A07: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2547 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2548 TAX
    case 0xC25A11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2549 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25A12: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    case 0xC25A16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2550 AND #$00FF
    // Overlapping static entry reached from 0xC25A16.
    case 0xC25A18: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2551 BNE @UNKNOWN174
    case 0xC25A19: cpu.execute_instruction<0xD0>(0x000034, 2); return true;
    // src/battle/main_battle_routine.asm:2552 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25A1B: cpu.execute_instruction<0x22>(0xC2416F, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25A1F.
    case 0xC25A21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A22: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25A24.
    case 0xC25A26: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2553 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A27: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A29: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A2C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A2E: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2554 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25A31: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2555 CMP @VIRTUAL0A+2
    case 0xC25A33: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2556 BNE @UNKNOWN173
    case 0xC25A35: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2557 LDA @VIRTUAL06
    case 0xC25A37: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2558 CMP @VIRTUAL0A
    case 0xC25A39: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2560 BNE @UNKNOWN174
    case 0xC25A3B: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/main_battle_routine.asm:2561 LDA CURRENT_ATTACKER
    case 0xC25A3D: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2562 JSL CHOOSE_TARGET
    case 0xC25A40: cpu.execute_instruction<0x22>(0xC24477, 4); return true;
    // src/battle/main_battle_routine.asm:2563 LDA CURRENT_ATTACKER
    case 0xC25A44: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2564 JSL UNKNOWN_C24703
    case 0xC25A47: cpu.execute_instruction<0x22>(0xC24703, 4); return true;
    // src/battle/main_battle_routine.asm:2565 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25A4B: cpu.execute_instruction<0x22>(0xC2416F, 4); return true;
    // src/battle/main_battle_routine.asm:2567 LDY #0
    case 0xC25A4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2567 LDY #0
    // Overlapping static entry reached from 0xC25A4F.
    case 0xC25A51: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:2568 STY @LOCAL10
    case 0xC25A52: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2569 LDX CURRENT_ATTACKER
    case 0xC25A54: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2570 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC25A57: cpu.execute_instruction<0xBD>(0x00001E, 3); return true;
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    case 0xC25A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2571 AND #$00FF
    // Overlapping static entry reached from 0xC25A5A.
    case 0xC25A5C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25A5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2572 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25A5D.
    case 0xC25A5F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2573 BNE @UNKNOWN175
    case 0xC25A60: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/main_battle_routine.asm:2574 LDA #100
    case 0xC25A62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/main_battle_routine.asm:2574 LDA #100
    // Overlapping static entry reached from 0xC25A62.
    case 0xC25A64: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2575 JSR RAND_LIMIT
    case 0xC25A65: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    case 0xC25A68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/battle/main_battle_routine.asm:2576 CMP #MUSHROOMIZED_TARGET_CHANGE_CHANCE
    // Overlapping static entry reached from 0xC25A68.
    case 0xC25A6A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2577 BCC @UNKNOWN176
    case 0xC25A6B: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:2579 LDX CURRENT_ATTACKER
    case 0xC25A6D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2580 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25A70: cpu.execute_instruction<0xBD>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    case 0xC25A73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2581 AND #$00FF
    // Overlapping static entry reached from 0xC25A73.
    case 0xC25A75: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    case 0xC25A76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2582 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC25A76.
    case 0xC25A78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2583 BNE @UNKNOWN179
    case 0xC25A79: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/battle/main_battle_routine.asm:2585 LDX CURRENT_ATTACKER
    case 0xC25A7B: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2586 LDA a:battler::current_action,X
    case 0xC25A7E: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A81: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A84: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2587 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25A87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2588 TAX
    case 0xC25A88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2589 INX
    case 0xC25A89: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2590 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25A8A: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    case 0xC25A8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2591 AND #$00FF
    // Overlapping static entry reached from 0xC25A8E.
    case 0xC25A90: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2592 BEQ @UNKNOWN179
    case 0xC25A91: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/main_battle_routine.asm:2593 LDY #1
    case 0xC25A93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2593 LDY #1
    // Overlapping static entry reached from 0xC25A93.
    case 0xC25A95: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:2594 STY @LOCAL10
    case 0xC25A96: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2596 JSR FEELING_STRANGE_RETARGETTING
    case 0xC25A98: cpu.execute_instruction<0x20>(0x004009, 3); return true;
    // src/battle/main_battle_routine.asm:2597 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC25A9B: cpu.execute_instruction<0x22>(0xC2416F, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25A9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25A9F.
    case 0xC25AA1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25AA2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25AA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25AA4.
    case 0xC25AA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2598 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25AA7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AA9: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AAE: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2599 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC25AB1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2600 CMP @VIRTUAL0A+2
    case 0xC25AB3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2601 BNE @UNKNOWN178
    case 0xC25AB5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2602 LDA @VIRTUAL06
    case 0xC25AB7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/battle/main_battle_routine.asm:2603 CMP @VIRTUAL0A
    case 0xC25AB9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2605 BEQ @UNKNOWN177
    case 0xC25ABB: cpu.execute_instruction<0xF0>(0x0000DB, 2); return true;
    // src/battle/main_battle_routine.asm:2607 LDX CURRENT_ATTACKER
    case 0xC25ABD: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2608 LDA a:battler::current_action,X
    case 0xC25AC0: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    case 0xC25AC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000042, 2); else cpu.execute_instruction<0xC9>(0x000042, 3); return true;
    // src/battle/main_battle_routine.asm:2609 CMP #BATTLE_ACTIONS::STEAL
    // Overlapping static entry reached from 0xC25AC3.
    case 0xC25AC5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2610 BNE @UNKNOWN180
    case 0xC25AC6: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/main_battle_routine.asm:2611 LDX CURRENT_ATTACKER
    case 0xC25AC8: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2612 LDA a:battler::current_action_argument,X
    case 0xC25ACB: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    case 0xC25ACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2613 AND #$00FF
    // Overlapping static entry reached from 0xC25ACE.
    case 0xC25AD0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2614 JSL UNKNOWN_C24348
    case 0xC25AD1: cpu.execute_instruction<0x22>(0xC24348, 4); return true;
    // src/battle/main_battle_routine.asm:2615 CMP #0
    case 0xC25AD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2615 CMP #0
    // Overlapping static entry reached from 0xC25AD5.
    case 0xC25AD7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2616 BNE @UNKNOWN180
    case 0xC25AD8: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2617 LDX CURRENT_ATTACKER
    case 0xC25ADA: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2618 SEP #PROC_FLAGS::ACCUM8
    case 0xC25ADD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2619 STZ a:battler::current_action_argument,X
    case 0xC25ADF: cpu.execute_instruction<0x9E>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2621 REP #PROC_FLAGS::ACCUM8
    case 0xC25AE2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2622 LDA #0
    case 0xC25AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2622 LDA #0
    // Overlapping static entry reached from 0xC25AE4.
    case 0xC25AE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2623 JSL FIX_ATTACKER_NAME
    case 0xC25AE7: cpu.execute_instruction<0x22>(0xC23BCF, 4); return true;
    // src/battle/main_battle_routine.asm:2624 LDX CURRENT_ATTACKER
    case 0xC25AEB: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2625 SEP #PROC_FLAGS::ACCUM8
    case 0xC25AEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2626 LDA a:battler::current_action_argument,X
    case 0xC25AF0: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2627 JSL REDIRECT_C1ACF8
    case 0xC25AF3: cpu.execute_instruction<0x22>(0xC1DD7C, 4); return true;
    // src/battle/main_battle_routine.asm:2628 JSL UNKNOWN_C23E32
    case 0xC25AF7: cpu.execute_instruction<0x22>(0xC23E32, 4); return true;
    // src/battle/main_battle_routine.asm:2630 LDX CURRENT_ATTACKER
    case 0xC25AFB: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2631 LDA a:battler::ally_or_enemy,X
    case 0xC25AFE: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    case 0xC25B01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2632 AND #$00FF
    // Overlapping static entry reached from 0xC25B01.
    case 0xC25B03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2633 BNE @UNKNOWN185
    case 0xC25B04: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/battle/main_battle_routine.asm:2634 LDX CURRENT_ATTACKER
    case 0xC25B06: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2635 LDA a:battler::id,X
    case 0xC25B09: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    case 0xC25B0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2636 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC25B0C.
    case 0xC25B0E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25B0F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/main_battle_routine.asm:2637 BGT @UNKNOWN185
    case 0xC25B11: cpu.execute_instruction<0xB0>(0x00002A, 2); return true;
    // src/battle/main_battle_routine.asm:2642 LDX #0
    case 0xC25B13: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2642 LDX #0
    // Overlapping static entry reached from 0xC25B13.
    case 0xC25B15: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:2643 STX @LOCAL0F
    case 0xC25B16: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2645 BRA @UNKNOWN184
    case 0xC25B18: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/battle/main_battle_routine.asm:2647 LDX CURRENT_ATTACKER
    case 0xC25B1A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2648 LDA a:battler::id,X
    case 0xC25B1D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2649 STA @VIRTUAL02
    case 0xC25B20: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2657 LDX @LOCAL0F
    case 0xC25B22: cpu.execute_instruction<0xA6>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2658 LDA GAME_STATE + game_state::party_members,X
    case 0xC25B24: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    case 0xC25B27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2660 AND #$00FF
    // Overlapping static entry reached from 0xC25B27.
    case 0xC25B29: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/main_battle_routine.asm:2661 CMP @VIRTUAL02
    case 0xC25B2A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:2662 BNE @UNKNOWN183
    case 0xC25B2C: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:2666 TXA
    case 0xC25B2E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2668 JSL REDIRECT_C43573
    case 0xC25B2F: cpu.execute_instruction<0x22>(0xC1DDCC, 4); return true;
    // src/battle/main_battle_routine.asm:2669 BRA @UNKNOWN185
    case 0xC25B33: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:2676 INX
    case 0xC25B35: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2677 STX @LOCAL0F
    case 0xC25B36: cpu.execute_instruction<0x86>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2683 CPX #6
    case 0xC25B38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/battle/main_battle_routine.asm:2683 CPX #6
    // Overlapping static entry reached from 0xC25B38.
    case 0xC25B3A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2685 BCC @UNKNOWN182
    case 0xC25B3B: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/battle/main_battle_routine.asm:2688 LDX CURRENT_ATTACKER
    case 0xC25B3D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2689 LDA a:battler::current_action,X
    case 0xC25B40: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B43: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B46: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2690 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2691 TAX
    case 0xC25B4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2692 INX
    case 0xC25B4B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2693 INX
    case 0xC25B4C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2694 INX
    case 0xC25B4D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2695 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC25B4E: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    case 0xC25B52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2696 AND #$00FF
    // Overlapping static entry reached from 0xC25B52.
    case 0xC25B54: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2697 BEQ @UNKNOWN187
    case 0xC25B55: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    case 0xC25B57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2698 AND #$00FF
    // Overlapping static entry reached from 0xC25B57.
    case 0xC25B59: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/battle/main_battle_routine.asm:2699 LDX CURRENT_ATTACKER
    case 0xC25B5A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2700 CMP a:battler::pp_target,X
    case 0xC25B5D: cpu.execute_instruction<0xDD>(0x000019, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25B60: cpu.execute_instruction<0x90>(0x000013, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/main_battle_routine.asm:2701 BLTEQ @UNKNOWN186
    case 0xC25B62: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x00FAB8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25B64.
    case 0xC25B66: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B67: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    // Overlapping static entry reached from 0xC25B69.
    case 0xC25B6B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B6C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2702 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSI_CANNOT
    case 0xC25B6E: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2703 JMP @UNKNOWN215
    case 0xC25B72: cpu.execute_instruction<0x4C>(0x005DA9, 3); return true;
    // src/battle/main_battle_routine.asm:2705 TAX
    case 0xC25B75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2706 LDA CURRENT_ATTACKER
    case 0xC25B76: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2707 JSL UNKNOWN_C2BCB9
    case 0xC25B79: cpu.execute_instruction<0x22>(0xC2BCB9, 4); return true;
    // src/battle/main_battle_routine.asm:2709 LDX CURRENT_ATTACKER
    case 0xC25B7D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2710 LDA a:battler::ally_or_enemy,X
    case 0xC25B80: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    case 0xC25B83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2711 AND #$00FF
    // Overlapping static entry reached from 0xC25B83.
    case 0xC25B85: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2712 CMP #1
    case 0xC25B86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2712 CMP #1
    // Overlapping static entry reached from 0xC25B86.
    case 0xC25B88: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2713 BNE @UNKNOWN194
    case 0xC25B89: cpu.execute_instruction<0xD0>(0x000067, 2); return true;
    // src/battle/main_battle_routine.asm:2714 LDX CURRENT_ATTACKER
    case 0xC25B8B: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2715 LDA a:battler::current_action,X
    case 0xC25B8E: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2716 BEQ @UNKNOWN194
    case 0xC25B91: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B93: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B96: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2717 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25B99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2718 TAX
    case 0xC25B9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2719 INX
    case 0xC25B9B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2720 INX
    case 0xC25B9C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2721 LDA f:BATTLE_ACTION_TABLE,X ;battle_action::type
    case 0xC25B9D: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    case 0xC25BA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2722 AND #$00FF
    // Overlapping static entry reached from 0xC25BA1.
    case 0xC25BA3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    case 0xC25BA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2723 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC25BA4.
    case 0xC25BA6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2724 BEQ @UNKNOWN188
    case 0xC25BA7: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    case 0xC25BA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2725 CMP #ACTION_TYPE::PIERCING_PHYSICAL
    // Overlapping static entry reached from 0xC25BA9.
    case 0xC25BAB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2726 BEQ @UNKNOWN188
    case 0xC25BAC: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    case 0xC25BAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2727 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC25BAE.
    case 0xC25BB0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2728 BEQ @UNKNOWN189
    case 0xC25BB1: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    case 0xC25BB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/main_battle_routine.asm:2729 CMP #ACTION_TYPE::OTHER
    // Overlapping static entry reached from 0xC25BB3.
    case 0xC25BB5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2730 BEQ @UNKNOWN190
    case 0xC25BB6: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2731 BRA @UNKNOWN191
    case 0xC25BB8: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/battle/main_battle_routine.asm:2733 LDA #1
    case 0xC25BBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2733 LDA #1
    // Overlapping static entry reached from 0xC25BBA.
    case 0xC25BBC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2734 JSL UNKNOWN_C2FEF9
    case 0xC25BBD: cpu.execute_instruction<0x22>(0xC2FEF9, 4); return true;
    // src/battle/main_battle_routine.asm:2735 BRA @UNKNOWN191
    case 0xC25BC1: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2737 LDA #2
    case 0xC25BC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2737 LDA #2
    // Overlapping static entry reached from 0xC25BC3.
    case 0xC25BC5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2738 JSL UNKNOWN_C2FEF9
    case 0xC25BC6: cpu.execute_instruction<0x22>(0xC2FEF9, 4); return true;
    // src/battle/main_battle_routine.asm:2739 BRA @UNKNOWN191
    case 0xC25BCA: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:2741 LDA #3
    case 0xC25BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2741 LDA #3
    // Overlapping static entry reached from 0xC25BCC.
    case 0xC25BCE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2742 JSL UNKNOWN_C2FEF9
    case 0xC25BCF: cpu.execute_instruction<0x22>(0xC2FEF9, 4); return true;
    // src/battle/main_battle_routine.asm:2744 SEP #PROC_FLAGS::ACCUM8
    case 0xC25BD3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2745 LDA #12
    case 0xC25BD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00AE0C, 3); return true;
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    case 0xC25BD7: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2746 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC25BD5.
    case 0xC25BD8: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/main_battle_routine.asm:2747 STA a:battler::unknown73,X
    case 0xC25BDA: cpu.execute_instruction<0x9D>(0x000049, 3); return true;
    // src/battle/main_battle_routine.asm:2748 LDX #0
    case 0xC25BDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2748 LDX #0
    // Overlapping static entry reached from 0xC25BDD.
    case 0xC25BDF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:2749 STX @LOCAL07
    case 0xC25BE0: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2750 BRA @UNKNOWN193
    case 0xC25BE2: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:2752 JSL WINDOW_TICK
    case 0xC25BE4: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/main_battle_routine.asm:2753 LDX @LOCAL07
    case 0xC25BE8: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2754 INX
    case 0xC25BEA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2755 STX @LOCAL07
    case 0xC25BEB: cpu.execute_instruction<0x86>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2757 CPX #12
    case 0xC25BED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:2757 CPX #12
    // Overlapping static entry reached from 0xC25BED.
    case 0xC25BEF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:2758 BCC @UNKNOWN192
    case 0xC25BF0: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/battle/main_battle_routine.asm:2760 LDY @LOCAL10
    case 0xC25BF2: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:2761 BEQ @UNKNOWN196
    case 0xC25BF4: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/main_battle_routine.asm:2762 LDX CURRENT_ATTACKER
    case 0xC25BF6: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2763 REP #PROC_FLAGS::ACCUM8
    case 0xC25BF9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2764 LDA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC25BFB: cpu.execute_instruction<0xBD>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    case 0xC25BFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2765 AND #$00FF
    // Overlapping static entry reached from 0xC25BFE.
    case 0xC25C00: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    case 0xC25C01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2766 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC25C01.
    case 0xC25C03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2767 BNE @UNKNOWN195
    case 0xC25C04: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00845D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25C06.
    case 0xC25C08: cpu.execute_instruction<0x84>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C09: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25C08.
    case 0xC25C0A: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    // Overlapping static entry reached from 0xC25C0B.
    case 0xC25C0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C0E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2768 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_HEN
    case 0xC25C10: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2770 LDX CURRENT_ATTACKER
    case 0xC25C14: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2771 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC25C17: cpu.execute_instruction<0xBD>(0x00001E, 3); return true;
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    case 0xC25C1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2772 AND #$00FF
    // Overlapping static entry reached from 0xC25C1A.
    case 0xC25C1C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    case 0xC25C1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2773 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC25C1D.
    case 0xC25C1F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2774 BNE @UNKNOWN196
    case 0xC25C20: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x008477, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25C22.
    case 0xC25C24: cpu.execute_instruction<0x84>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C25: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25C24.
    case 0xC25C26: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    // Overlapping static entry reached from 0xC25C27.
    case 0xC25C29: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C2A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2775 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_RND_ACT_KINOKO
    case 0xC25C2C: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2777 REP #PROC_FLAGS::ACCUM8
    case 0xC25C30: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C32.
    case 0xC25C34: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C35: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25C37.
    case 0xC25C39: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2778 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25C3A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2779 LDX CURRENT_ATTACKER
    case 0xC25C3C: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2780 LDA a:battler::current_action,X
    case 0xC25C3F: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C42: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C45: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2781 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25C48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2782 INC
    case 0xC25C49: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2783 INC
    case 0xC25C4A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2784 INC
    case 0xC25C4B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2785 INC
    case 0xC25C4C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2786 CLC
    case 0xC25C4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2787 ADC @VIRTUAL0A
    case 0xC25C4E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2788 STA @VIRTUAL0A
    case 0xC25C50: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25C52.
    case 0xC25C54: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C55: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C57: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C58: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C5A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2789 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25C5C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C5E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C60: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C62: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2790 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25C64: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:2791 JSL UNKNOWN_C1DD9F
    case 0xC25C66: cpu.execute_instruction<0x22>(0xC1DD9F, 4); return true;
    // src/battle/main_battle_routine.asm:2792 LDX CURRENT_ATTACKER
    case 0xC25C6A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2793 LDA a:battler::current_action,X
    case 0xC25C6D: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25C70: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2794 BEQL @UNKNOWN215
    case 0xC25C72: cpu.execute_instruction<0x4C>(0x005DA9, 3); return true;
    // src/battle/main_battle_routine.asm:2795 BRA @UNKNOWN199
    case 0xC25C75: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:2797 JSL WINDOW_TICK
    case 0xC25C77: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/main_battle_routine.asm:2799 JSL UNKNOWN_C2EACF
    case 0xC25C7B: cpu.execute_instruction<0x22>(0xC2EACF, 4); return true;
    // src/battle/main_battle_routine.asm:2800 CMP #0
    case 0xC25C7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2800 CMP #0
    // Overlapping static entry reached from 0xC25C7F.
    case 0xC25C81: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2801 BNE @UNKNOWN198
    case 0xC25C82: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/battle/main_battle_routine.asm:2802 LDY #0
    case 0xC25C84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2802 LDY #0
    // Overlapping static entry reached from 0xC25C84.
    case 0xC25C86: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/main_battle_routine.asm:2803 STY @LOCAL05
    case 0xC25C87: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2804 JMP @UNKNOWN214
    case 0xC25C89: cpu.execute_instruction<0x4C>(0x005D9F, 3); return true;
    // src/battle/main_battle_routine.asm:2806 TYA
    case 0xC25C8C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2807 JSL IS_CHAR_TARGETTED
    case 0xC25C8D: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/battle/main_battle_routine.asm:2808 CMP #0
    case 0xC25C91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2808 CMP #0
    // Overlapping static entry reached from 0xC25C91.
    case 0xC25C93: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25C94: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2809 BEQL @UNKNOWN213
    case 0xC25C96: cpu.execute_instruction<0x4C>(0x005D9A, 3); return true;
    // src/battle/main_battle_routine.asm:2810 LDY @LOCAL05
    case 0xC25C99: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2811 TYA
    case 0xC25C9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    case 0xC25C9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:2812 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25C9C.
    case 0xC25C9E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2813 JSL MULT168
    case 0xC25C9F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/main_battle_routine.asm:2814 CLC
    case 0xC25CA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC25CA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:2815 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25CA4.
    case 0xC25CA6: cpu.execute_instruction<0x9F>(0xA9728D, 4); return true;
    // src/battle/main_battle_routine.asm:2816 STA CURRENT_TARGET
    case 0xC25CA7: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:2817 JSL FIX_TARGET_NAME
    case 0xC25CAA: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/main_battle_routine.asm:2818 LDX CURRENT_TARGET
    case 0xC25CAE: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:2819 LDA a:battler::afflictions+STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC25CB1: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    case 0xC25CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2820 AND #$00FF
    // Overlapping static entry reached from 0xC25CB4.
    case 0xC25CB6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    case 0xC25CB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2821 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC25CB7.
    case 0xC25CB9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2822 BNE @UNKNOWN204
    case 0xC25CBA: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2827 LDA #0
    case 0xC25CBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2827 LDA #0
    // Overlapping static entry reached from 0xC25CBC.
    case 0xC25CBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:2828 STA @LOCAL0F
    case 0xC25CBF: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2830 BRA @UNKNOWN203
    case 0xC25CC1: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:2833 TXA
    case 0xC25CC3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2835 LDX CURRENT_ATTACKER
    case 0xC25CC4: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2836 CMP a:battler::current_action,X
    case 0xC25CC7: cpu.execute_instruction<0xDD>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2837 BEQ @UNKNOWN204
    case 0xC25CCA: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/main_battle_routine.asm:2843 LDA @LOCAL0F
    case 0xC25CCC: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2844 INC
    case 0xC25CCE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2845 STA @LOCAL0F
    case 0xC25CCF: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:2854 ASL
    case 0xC25CD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2855 TAX
    case 0xC25CD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2856 LDA f:DEAD_TARGETTABLE_ACTIONS,X
    case 0xC25CD3: cpu.execute_instruction<0xBF>(0xC4A08D, 4); return true;
    // src/battle/main_battle_routine.asm:2857 TAX
    case 0xC25CD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2859 BNE @UNKNOWN202
    case 0xC25CD8: cpu.execute_instruction<0xD0>(0x0000E9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0076FD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25CDA.
    case 0xC25CDC: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CDD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25CDC.
    case 0xC25CDE: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    // Overlapping static entry reached from 0xC25CDF.
    case 0xC25CE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CE2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2860 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NOT_EXIST
    case 0xC25CE4: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2861 JMP @UNKNOWN213
    case 0xC25CE8: cpu.execute_instruction<0x4C>(0x005D9A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25CEB.
    case 0xC25CED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CEE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25CF0.
    case 0xC25CF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2863 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC25CF3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2864 LDX CURRENT_ATTACKER
    case 0xC25CF5: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2865 LDA a:battler::current_action,X
    case 0xC25CF8: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25CFB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25CFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25CFE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25D00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/main_battle_routine.asm:2866 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC25D01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2867 CLC
    case 0xC25D02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2868 ADC #8
    case 0xC25D03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/main_battle_routine.asm:2868 ADC #8
    // Overlapping static entry reached from 0xC25D03.
    case 0xC25D05: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:2869 CLC
    case 0xC25D06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2870 ADC @VIRTUAL0A
    case 0xC25D07: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2871 STA @VIRTUAL0A
    case 0xC25D09: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC25D0B.
    case 0xC25D0D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D0E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D10: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D11: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2872 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC25D15: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25D17.
    case 0xC25D19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D1A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC25D1C.
    case 0xC25D1E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2873 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC25D1F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D21: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D23: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D25: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D27: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2874 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC25D29: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/main_battle_routine.asm:2875 BEQ @UNKNOWN213
    case 0xC25D2B: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/battle/main_battle_routine.asm:2876 PHA
    case 0xC25D2D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D2E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D30: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D33: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2877 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC25D35: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/battle/main_battle_routine.asm:2878 PLA
    case 0xC25D38: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2879 JSL UNKNOWN_C09279
    case 0xC25D39: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/battle/main_battle_routine.asm:2880 JSL CHECK_DEAD_PLAYERS
    case 0xC25D3D: cpu.execute_instruction<0x22>(0xC2BB18, 4); return true;
    // src/battle/main_battle_routine.asm:2881 SEP #PROC_FLAGS::ACCUM8
    case 0xC25D41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2882 LDA #1
    case 0xC25D43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    case 0xC25D45: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/battle/main_battle_routine.asm:2883 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC25D43.
    case 0xC25D46: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/battle/main_battle_routine.asm:2884 REP #PROC_FLAGS::ACCUM8
    case 0xC25D48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2885 LDA #0
    case 0xC25D4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2885 LDA #0
    // Overlapping static entry reached from 0xC25D4A.
    case 0xC25D4C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2886 JSL COUNT_CHARS
    case 0xC25D4D: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:2887 CMP #0
    case 0xC25D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2887 CMP #0
    // Overlapping static entry reached from 0xC25D51.
    case 0xC25D53: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2888 BEQ @UNKNOWN206
    case 0xC25D54: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2889 LDA #1
    case 0xC25D56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2889 LDA #1
    // Overlapping static entry reached from 0xC25D56.
    case 0xC25D58: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:2890 JSL COUNT_CHARS
    case 0xC25D59: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:2891 CMP #0
    case 0xC25D5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2891 CMP #0
    // Overlapping static entry reached from 0xC25D5D.
    case 0xC25D5F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2892 BNE @UNKNOWN207
    case 0xC25D60: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/main_battle_routine.asm:2894 JSL UNKNOWN_C2437E
    case 0xC25D62: cpu.execute_instruction<0x22>(0xC2437E, 4); return true;
    // src/battle/main_battle_routine.asm:2895 JMP @UNKNOWN225
    case 0xC25D66: cpu.execute_instruction<0x4C>(0x005EF7, 3); return true;
    // src/battle/main_battle_routine.asm:2897 LDA SPECIAL_DEFEAT
    case 0xC25D69: cpu.execute_instruction<0xAD>(0x00AA0E, 3); return true;
    // src/battle/main_battle_routine.asm:2898 CMP #3
    case 0xC25D6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2898 CMP #3
    // Overlapping static entry reached from 0xC25D6C.
    case 0xC25D6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2899 BEQ @UNKNOWN208
    case 0xC25D6F: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2900 CMP #2
    case 0xC25D71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2900 CMP #2
    // Overlapping static entry reached from 0xC25D71.
    case 0xC25D73: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2901 BEQ @UNKNOWN209
    case 0xC25D74: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2902 CMP #1
    case 0xC25D76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2902 CMP #1
    // Overlapping static entry reached from 0xC25D76.
    case 0xC25D78: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2903 BEQ @UNKNOWN210
    case 0xC25D79: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/main_battle_routine.asm:2904 BRA @UNKNOWN212
    case 0xC25D7B: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:2906 STZ @LOCAL03
    case 0xC25D7D: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:2907 JMP @UNKNOWN237
    case 0xC25D7F: cpu.execute_instruction<0x4C>(0x006093, 3); return true;
    // src/battle/main_battle_routine.asm:2909 JSL UNKNOWN_C2437E
    case 0xC25D82: cpu.execute_instruction<0x22>(0xC2437E, 4); return true;
    // src/battle/main_battle_routine.asm:2910 JMP @ENEMIES_ARE_DEAD
    case 0xC25D86: cpu.execute_instruction<0x4C>(0x005F2E, 3); return true;
    // src/battle/main_battle_routine.asm:2912 LDA #2
    case 0xC25D89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:2912 LDA #2
    // Overlapping static entry reached from 0xC25D89.
    case 0xC25D8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:2913 STA @LOCAL03
    case 0xC25D8C: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:2914 JMP @UNKNOWN237
    case 0xC25D8E: cpu.execute_instruction<0x4C>(0x006093, 3); return true;
    // src/battle/main_battle_routine.asm:2916 JSL WINDOW_TICK
    case 0xC25D91: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/main_battle_routine.asm:2918 LDA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC25D95: cpu.execute_instruction<0xAD>(0x00AD90, 3); return true;
    // src/battle/main_battle_routine.asm:2919 BNE @UNKNOWN211
    case 0xC25D98: cpu.execute_instruction<0xD0>(0x0000F7, 2); return true;
    // src/battle/main_battle_routine.asm:2921 LDY @LOCAL05
    case 0xC25D9A: cpu.execute_instruction<0xA4>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2922 INY
    case 0xC25D9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2923 STY @LOCAL05
    case 0xC25D9D: cpu.execute_instruction<0x84>(0x00001B, 2); return true;
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    case 0xC25D9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:2925 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25D9F.
    case 0xC25DA1: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25DA2: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25DA4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:2926 BCCL @UNKNOWN200
    case 0xC25DA6: cpu.execute_instruction<0x4C>(0x005C8C, 3); return true;
    // src/battle/main_battle_routine.asm:2928 LDX CURRENT_ATTACKER
    case 0xC25DA9: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2929 LDA a:battler::ally_or_enemy,X
    case 0xC25DAC: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    case 0xC25DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2930 AND #$00FF
    // Overlapping static entry reached from 0xC25DAF.
    case 0xC25DB1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2931 BNE @UNKNOWN217
    case 0xC25DB2: cpu.execute_instruction<0xD0>(0x000064, 2); return true;
    // src/battle/main_battle_routine.asm:2932 JSL UNKNOWN_C2437E
    case 0xC25DB4: cpu.execute_instruction<0x22>(0xC2437E, 4); return true;
    // src/battle/main_battle_routine.asm:2933 LDA MIRROR_ENEMY
    case 0xC25DB8: cpu.execute_instruction<0xAD>(0x00AA12, 3); return true;
    // src/battle/main_battle_routine.asm:2934 BEQ @UNKNOWN216
    case 0xC25DBB: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/battle/main_battle_routine.asm:2935 LDX CURRENT_ATTACKER
    case 0xC25DBD: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2936 LDA a:battler::id,X
    case 0xC25DC0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    case 0xC25DC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2937 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC25DC3.
    case 0xC25DC5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2938 BNE @UNKNOWN216
    case 0xC25DC6: cpu.execute_instruction<0xD0>(0x00004C, 2); return true;
    // src/battle/main_battle_routine.asm:2939 LDX MIRROR_TURN_TIMER
    case 0xC25DC8: cpu.execute_instruction<0xAE>(0x00AA62, 3); return true;
    // src/battle/main_battle_routine.asm:2940 DEX
    case 0xC25DCB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:2941 STX MIRROR_TURN_TIMER
    case 0xC25DCC: cpu.execute_instruction<0x8E>(0x00AA62, 3); return true;
    // src/battle/main_battle_routine.asm:2942 BNE @UNKNOWN216
    case 0xC25DCF: cpu.execute_instruction<0xD0>(0x000043, 2); return true;
    // src/battle/main_battle_routine.asm:2943 STZ MIRROR_ENEMY
    case 0xC25DD1: cpu.execute_instruction<0x9C>(0x00AA12, 3); return true;
    // src/battle/main_battle_routine.asm:2944 LDA CURRENT_ATTACKER
    case 0xC25DD4: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DD9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2945 PROMOTENEARPTRA @VIRTUAL06
    case 0xC25DDF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:2946 REP #PROC_FLAGS::ACCUM8
    case 0xC25DE1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2947 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25DE9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x00AA14, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC25DEB.
    case 0xC25DED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:2948 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC25DF6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:2949 REP #PROC_FLAGS::ACCUM8
    case 0xC25DF8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25DFA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25DFC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25DFE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:2950 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25E00: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:2951 JSL COPY_MIRROR_DATA
    case 0xC25E02: cpu.execute_instruction<0x22>(0xC2AF1F, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x007142, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25E06.
    case 0xC25E08: cpu.execute_instruction<0x71>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E09: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25E08.
    case 0xC25E0A: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    // Overlapping static entry reached from 0xC25E0B.
    case 0xC25E0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E0E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2952 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEUTRALIZE_METAMORPH
    case 0xC25E10: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2954 JSL REDIRECT_C3E6F8
    case 0xC25E14: cpu.execute_instruction<0x22>(0xC1DDD3, 4); return true;
    // src/battle/main_battle_routine.asm:2956 JSL CHECK_DEAD_PLAYERS
    case 0xC25E18: cpu.execute_instruction<0x22>(0xC2BB18, 4); return true;
    // src/battle/main_battle_routine.asm:2957 LDA CURRENT_ATTACKER
    case 0xC25E1C: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2958 STA CURRENT_TARGET
    case 0xC25E1F: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/main_battle_routine.asm:2959 JSL FIX_TARGET_NAME
    case 0xC25E22: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/main_battle_routine.asm:2960 LDX CURRENT_ATTACKER
    case 0xC25E26: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2961 LDA a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E29: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    case 0xC25E2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:2962 AND #$00FF
    // Overlapping static entry reached from 0xC25E2C.
    case 0xC25E2E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    case 0xC25E2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:2963 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC25E2F.
    case 0xC25E31: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2964 BEQ @UNKNOWN218
    case 0xC25E32: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    case 0xC25E34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2965 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC25E34.
    case 0xC25E36: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2966 BEQ @UNKNOWN219
    case 0xC25E37: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    case 0xC25E39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:2967 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC25E39.
    case 0xC25E3B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:2968 BEQ @UNKNOWN220
    case 0xC25E3C: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/main_battle_routine.asm:2969 BRA @UNKNOWN221
    case 0xC25E3E: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/battle/main_battle_routine.asm:2971 JSL RAND
    case 0xC25E40: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    case 0xC25E44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/main_battle_routine.asm:2972 AND #$0003
    // Overlapping static entry reached from 0xC25E44.
    case 0xC25E46: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:2973 BNE @UNKNOWN221
    case 0xC25E47: cpu.execute_instruction<0xD0>(0x000051, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x006F54, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25E49.
    case 0xC25E4B: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E4C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25E4B.
    case 0xC25E4F: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC25E4E.
    case 0xC25E50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E51: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2974 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC25E53: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2975 LDX CURRENT_ATTACKER
    case 0xC25E57: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2976 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E5A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2977 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E5C: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2978 BRA @UNKNOWN221
    case 0xC25E5F: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/battle/main_battle_routine.asm:2981 LDA #100
    case 0xC25E61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/main_battle_routine.asm:2981 LDA #100
    // Overlapping static entry reached from 0xC25E61.
    case 0xC25E63: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2982 JSR RAND_LIMIT
    case 0xC25E64: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    case 0xC25E67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000055, 2); else cpu.execute_instruction<0xC9>(0x000055, 3); return true;
    // src/battle/main_battle_routine.asm:2983 CMP #100-CHANCE_OF_BODY_MOVING_AGAIN
    // Overlapping static entry reached from 0xC25E67.
    case 0xC25E69: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/main_battle_routine.asm:2984 BCS @UNKNOWN221
    case 0xC25E6A: cpu.execute_instruction<0xB0>(0x00002E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x006EED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25E6C.
    case 0xC25E6E: cpu.execute_instruction<0x6E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E6F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    // Overlapping static entry reached from 0xC25E71.
    case 0xC25E73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E74: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2985 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBARA_OFF
    case 0xC25E76: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2986 LDX CURRENT_ATTACKER
    case 0xC25E7A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2987 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2988 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E7F: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2989 BRA @UNKNOWN221
    case 0xC25E82: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x006F0B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25E84.
    case 0xC25E86: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E87: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25E86.
    case 0xC25E8A: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    // Overlapping static entry reached from 0xC25E89.
    case 0xC25E8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E8C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:2992 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_STAT
    case 0xC25E8E: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:2993 LDX CURRENT_ATTACKER
    case 0xC25E92: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2994 SEP #PROC_FLAGS::ACCUM8
    case 0xC25E95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2995 STZ a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC25E97: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/main_battle_routine.asm:2997 REP #PROC_FLAGS::ACCUM8
    case 0xC25E9A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:2998 LDA CURRENT_ATTACKER
    case 0xC25E9C: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/main_battle_routine.asm:2999 CLC
    case 0xC25E9F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    case 0xC25EA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/battle/main_battle_routine.asm:3000 ADC #battler::afflictions+STATUS_GROUP::CONCENTRATION
    // Overlapping static entry reached from 0xC25EA0.
    case 0xC25EA2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:3001 TAX
    case 0xC25EA3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3002 SEP #PROC_FLAGS::ACCUM8
    case 0xC25EA4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3003 LDA __BSS_START__,X
    case 0xC25EA6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3004 STA @LOCAL02
    case 0xC25EA9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:3005 REP #PROC_FLAGS::ACCUM8
    case 0xC25EAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    case 0xC25EAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3006 AND #$00FF
    // Overlapping static entry reached from 0xC25EAD.
    case 0xC25EAF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3007 BEQ @UNKNOWN222
    case 0xC25EB0: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/main_battle_routine.asm:3008 SEP #PROC_FLAGS::ACCUM8
    case 0xC25EB2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3009 LDA @LOCAL02
    case 0xC25EB4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/main_battle_routine.asm:3010 DEC
    case 0xC25EB6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3011 STA __BSS_START__,X
    case 0xC25EB7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3012 REP #PROC_FLAGS::ACCUM8
    case 0xC25EBA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    case 0xC25EBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3013 AND #$00FF
    // Overlapping static entry reached from 0xC25EBC.
    case 0xC25EBE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3014 BNE @UNKNOWN222
    case 0xC25EBF: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x006F64, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25EC1.
    case 0xC25EC3: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25EC3.
    case 0xC25EC7: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    // Overlapping static entry reached from 0xC25EC6.
    case 0xC25EC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25EC9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3015 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_OFF
    case 0xC25ECB: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC25ECF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:3017 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC25ECF.
    case 0xC25ED1: cpu.execute_instruction<0x9F>(0x0000A2, 4); return true;
    // src/battle/main_battle_routine.asm:3018 LDX #0
    case 0xC25ED2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3018 LDX #0
    // Overlapping static entry reached from 0xC25ED2.
    case 0xC25ED4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:3019 STX @LOCAL10
    case 0xC25ED5: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3020 BRA @UNKNOWN224
    case 0xC25ED7: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/main_battle_routine.asm:3022 TAX
    case 0xC25ED9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3023 SEP #PROC_FLAGS::ACCUM8
    case 0xC25EDA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3024 STZ a:battler::use_alt_spritemap,X
    case 0xC25EDC: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/main_battle_routine.asm:3025 CLC
    case 0xC25EDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3026 REP #PROC_FLAGS::ACCUM8
    case 0xC25EE0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    case 0xC25EE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:3027 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC25EE2.
    case 0xC25EE4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/main_battle_routine.asm:3028 LDX @LOCAL10
    case 0xC25EE5: cpu.execute_instruction<0xA6>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3029 INX
    case 0xC25EE7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3030 STX @LOCAL10
    case 0xC25EE8: cpu.execute_instruction<0x86>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    case 0xC25EEA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:3032 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC25EEA.
    case 0xC25EEC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:3033 BCC @UNKNOWN223
    case 0xC25EED: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/battle/main_battle_routine.asm:3034 JSL CHECK_DEAD_PLAYERS
    case 0xC25EEF: cpu.execute_instruction<0x22>(0xC2BB18, 4); return true;
    // src/battle/main_battle_routine.asm:3035 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC25EF3: cpu.execute_instruction<0x22>(0xC1DD3B, 4); return true;
    // src/battle/main_battle_routine.asm:3037 LDA #0
    case 0xC25EF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3037 LDA #0
    // Overlapping static entry reached from 0xC25EF7.
    case 0xC25EF9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3038 JSL COUNT_CHARS
    case 0xC25EFA: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:3039 CMP #0
    case 0xC25EFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3039 CMP #0
    // Overlapping static entry reached from 0xC25EFE.
    case 0xC25F00: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3040 BNE @ALLIES_ARE_ALIVE
    case 0xC25F01: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/battle/main_battle_routine.asm:3041 LDA #1
    case 0xC25F03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3041 LDA #1
    // Overlapping static entry reached from 0xC25F03.
    case 0xC25F05: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3042 STA @LOCAL03
    case 0xC25F06: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3043 JSL RESET_HPPP_ROLLING
    case 0xC25F08: cpu.execute_instruction<0x22>(0xC20F9A, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004D, 2); else cpu.execute_instruction<0xA9>(0x007A4D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25F0C.
    case 0xC25F0E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F0F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    // Overlapping static entry reached from 0xC25F11.
    case 0xC25F13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F14: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3044 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MONSTER_WIN
    case 0xC25F16: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:3045 LDA #1
    case 0xC25F1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3045 LDA #1
    // Overlapping static entry reached from 0xC25F1A.
    case 0xC25F1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3049 STA @LOCAL09
    case 0xC25F1D: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:3052 LDA #1
    case 0xC25F1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3052 LDA #1
    // Overlapping static entry reached from 0xC25F1F.
    case 0xC25F21: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3053 JSL COUNT_CHARS
    case 0xC25F22: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:3054 CMP #0
    case 0xC25F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3054 CMP #0
    // Overlapping static entry reached from 0xC25F26.
    case 0xC25F28: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25F29: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3055 BNEL @UNKNOWN234
    case 0xC25F2B: cpu.execute_instruction<0x4C>(0x006081, 3); return true;
    // src/battle/main_battle_routine.asm:3057 STZ @LOCAL03
    case 0xC25F2E: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3058 JSL RESET_HPPP_ROLLING
    case 0xC25F30: cpu.execute_instruction<0x22>(0xC20F9A, 4); return true;
    // src/battle/main_battle_routine.asm:3059 LDA #1
    case 0xC25F34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3059 LDA #1
    // Overlapping static entry reached from 0xC25F34.
    case 0xC25F36: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/main_battle_routine.asm:3060 STA LETTERBOX_EFFECT_ENDING
    case 0xC25F37: cpu.execute_instruction<0x8D>(0x00ADB6, 3); return true;
    // src/battle/main_battle_routine.asm:3061 STA ENABLE_BACKGROUND_DARKENING
    case 0xC25F3A: cpu.execute_instruction<0x8D>(0x00ADD0, 3); return true;
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC25F3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B9, 2); else cpu.execute_instruction<0xA0>(0x0098B9, 3); return true;
    // src/battle/main_battle_routine.asm:3062 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC25F3D.
    case 0xC25F3F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3066 STY @LOCAL0F
    case 0xC25F40: cpu.execute_instruction<0x84>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:3068 LDA BATTLE_MONEY_SCRATCH
    case 0xC25F42: cpu.execute_instruction<0xAD>(0x00A978, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25F45: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3069 STORE_INT1632 @VIRTUAL06
    case 0xC25F47: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F49: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F4B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F4D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3070 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC25F4F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:3071 JSL DEPOSIT_INTO_ATM
    case 0xC25F51: cpu.execute_instruction<0x22>(0xC2281D, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F55: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F57: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F59: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3072 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC25F5B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:3076 LDY @LOCAL0F
    case 0xC25F5D: cpu.execute_instruction<0xA4>(0x00002F, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F5F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F62: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F64: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3078 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC25F67: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:3079 CLC
    case 0xC25F69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F6A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F6C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F6E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F70: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F72: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3080 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F74: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F76: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F78: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F7B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/main_battle_routine.asm:3081 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC25F7D: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:3082 LDA #0
    case 0xC25F80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3082 LDA #0
    // Overlapping static entry reached from 0xC25F80.
    case 0xC25F82: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3083 JSL COUNT_CHARS
    case 0xC25F83: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/main_battle_routine.asm:3084 DEC
    case 0xC25F87: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25F88: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3085 STORE_INT1632 @VIRTUAL0A
    case 0xC25F8A: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F8C: cpu.execute_instruction<0xAD>(0x00A974, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F8F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F91: cpu.execute_instruction<0xAD>(0x00A976, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3086 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC25F94: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:3087 CLC
    case 0xC25F96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F97: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F99: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F9D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25F9F: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3088 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC25FA1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FA3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FA5: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FA8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3089 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FAA: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // src/battle/main_battle_routine.asm:3090 LDA #0
    case 0xC25FAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3090 LDA #0
    // Overlapping static entry reached from 0xC25FAD.
    case 0xC25FAF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/main_battle_routine.asm:3091 JSL COUNT_CHARS
    case 0xC25FB0: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25FB4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3092 STORE_INT1632 @VIRTUAL0A
    case 0xC25FB6: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/battle/main_battle_routine.asm:3093 JSL DIVISION32
    case 0xC25FB8: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FBC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FBE: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FC1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3094 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC25FC3: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // src/battle/main_battle_routine.asm:3095 LDA CURRENT_BATTLE_GROUP
    case 0xC25FC6: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    case 0xC25FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0001C0, 3); return true;
    // src/battle/main_battle_routine.asm:3096 CMP #$01C0
    // Overlapping static entry reached from 0xC25FC9.
    case 0xC25FCB: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    case 0xC25FCC: cpu.execute_instruction<0x90>(0x000018, 2); return true;
    // src/battle/main_battle_routine.asm:3097 BCC @NOT_BOSS_BATTLE
    // Overlapping static entry reached from 0xC25FCB.
    case 0xC25FCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x007A14, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25FCE.
    case 0xC25FD0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FD1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    // Overlapping static entry reached from 0xC25FD3.
    case 0xC25FD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3098 LOADPTR MSG_BTL_PLAYER_WIN_BOSS, @LOCAL00
    case 0xC25FD6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FD8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FDA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FDC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3099 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FDE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:3100 JSL DISPLAY_TEXT_WAIT
    case 0xC25FE0: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/main_battle_routine.asm:3101 BRA @SKIP_NOT_BOSS_BATTLE
    case 0xC25FE4: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0079D7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25FE6.
    case 0xC25FE8: cpu.execute_instruction<0x79>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    // Overlapping static entry reached from 0xC25FEB.
    case 0xC25FED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3103 LOADPTR MSG_BTL_PLAYER_WIN, @LOCAL00
    case 0xC25FEE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3104 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC25FF6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:3105 JSL DISPLAY_TEXT_WAIT
    case 0xC25FF8: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/main_battle_routine.asm:3107 LDA ITEM_DROPPED
    case 0xC25FFC: cpu.execute_instruction<0xAD>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:3108 BEQ @UNKNOWN230
    case 0xC25FFF: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3109 SEP #PROC_FLAGS::ACCUM8
    case 0xC26001: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3110 LDA ITEM_DROPPED
    case 0xC26003: cpu.execute_instruction<0xAD>(0x00AA10, 3); return true;
    // src/battle/main_battle_routine.asm:3111 JSL REDIRECT_C1ACF8
    case 0xC26006: cpu.execute_instruction<0x22>(0xC1DD7C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2600A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DF, 2); else cpu.execute_instruction<0xA9>(0x007BDF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC2600A.
    case 0xC2600C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2600D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2600F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC2600F.
    case 0xC26011: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26012: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/main_battle_routine.asm:3113 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26014: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC26018: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AC, 2); else cpu.execute_instruction<0xA0>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:3115 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26018.
    case 0xC2601A: cpu.execute_instruction<0x9F>(0xA93184, 4); return true;
    // src/battle/main_battle_routine.asm:3116 STY @LOCAL10
    case 0xC2601B: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3117 LDA #0
    case 0xC2601D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC2601A.
    case 0xC2601E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:3117 LDA #0
    // Overlapping static entry reached from 0xC2601D.
    case 0xC2601F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3118 STA @VIRTUAL02
    case 0xC26020: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:3119 BRA @UNKNOWN233
    case 0xC26022: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/battle/main_battle_routine.asm:3121 LDA a:battler::consciousness,Y
    case 0xC26024: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    case 0xC26027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3122 AND #$00FF
    // Overlapping static entry reached from 0xC26027.
    case 0xC26029: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3123 BEQ @UNKNOWN232
    case 0xC2602A: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/battle/main_battle_routine.asm:3123 BEQ @UNKNOWN232
    // Overlapping static entry reached from 0xC20D86.
    case 0xC2602B: cpu.execute_instruction<0x3D>(0x000EB9, 3); return true;
    // src/battle/main_battle_routine.asm:3124 LDA a:battler::ally_or_enemy,Y
    case 0xC2602C: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:3124 LDA a:battler::ally_or_enemy,Y
    // Overlapping static entry reached from 0xC2602B.
    case 0xC2602E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    case 0xC2602F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3125 AND #$00FF
    // Overlapping static entry reached from 0xC2602F.
    case 0xC26031: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3126 BNE @UNKNOWN232
    case 0xC26032: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/battle/main_battle_routine.asm:3127 LDA a:battler::npc_id,Y
    case 0xC26034: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    case 0xC26037: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3128 AND #$00FF
    // Overlapping static entry reached from 0xC26037.
    case 0xC26039: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3129 BNE @UNKNOWN232
    case 0xC2603A: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/battle/main_battle_routine.asm:3130 LDA a:battler::afflictions,Y
    case 0xC2603C: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    case 0xC2603F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3131 AND #$00FF
    // Overlapping static entry reached from 0xC2603F.
    case 0xC26041: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:3132 TAX
    case 0xC26042: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    case 0xC26043: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3133 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC26043.
    case 0xC26045: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3134 BEQ @UNKNOWN232
    case 0xC26046: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    case 0xC26048: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/main_battle_routine.asm:3135 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC26048.
    case 0xC2604A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3136 BEQ @UNKNOWN232
    case 0xC2604B: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2604D: cpu.execute_instruction<0xAD>(0x00A974, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26050: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26052: cpu.execute_instruction<0xAD>(0x00A976, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3137 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26055: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26057: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26059: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2605B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3138 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2605D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/main_battle_routine.asm:3139 LDX #1
    case 0xC2605F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3139 LDX #1
    // Overlapping static entry reached from 0xC2605F.
    case 0xC26061: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/battle/main_battle_routine.asm:3140 LDA a:battler::id,Y
    case 0xC26062: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3141 JSL GAIN_EXP
    case 0xC26065: cpu.execute_instruction<0x22>(0xC1D9E9, 4); return true;
    // src/battle/main_battle_routine.asm:3143 LDY @LOCAL10
    case 0xC26069: cpu.execute_instruction<0xA4>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3144 TYA
    case 0xC2606B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3145 CLC
    case 0xC2606C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    case 0xC2606D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:3146 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2606D.
    case 0xC2606F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:3147 TAY
    case 0xC26070: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3148 STY @LOCAL10
    case 0xC26071: cpu.execute_instruction<0x84>(0x000031, 2); return true;
    // src/battle/main_battle_routine.asm:3149 INC @VIRTUAL02
    case 0xC26073: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:3151 LDA @VIRTUAL02
    case 0xC26075: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    case 0xC26077: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:3152 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26077.
    case 0xC26079: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/main_battle_routine.asm:3153 BCC @UNKNOWN231
    case 0xC2607A: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/battle/main_battle_routine.asm:3154 LDA #1
    case 0xC2607C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3154 LDA #1
    // Overlapping static entry reached from 0xC2607C.
    case 0xC2607E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3158 STA @LOCAL09
    case 0xC2607F: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/main_battle_routine.asm:3164 LDA @LOCAL09
    case 0xC26081: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC26083: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3166 BEQL @UNKNOWN145
    case 0xC26085: cpu.execute_instruction<0x4C>(0x005619, 3); return true;
    // src/battle/main_battle_routine.asm:3168 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC26088: cpu.execute_instruction<0x22>(0xC1DD59, 4); return true;
    // src/battle/main_battle_routine.asm:3173 LDA @LOCAL09
    case 0xC2608C: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC2608E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3175 BEQL @UNKNOWN71
    case 0xC26090: cpu.execute_instruction<0x4C>(0x004FCF, 3); return true;
    // src/battle/main_battle_routine.asm:3177 JSL RESET_HPPP_ROLLING
    case 0xC26093: cpu.execute_instruction<0x22>(0xC20F9A, 4); return true;
    // src/battle/main_battle_routine.asm:3179 JSL WINDOW_TICK
    case 0xC26097: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/main_battle_routine.asm:3180 JSL UNKNOWN_C2108C
    case 0xC2609B: cpu.execute_instruction<0x22>(0xC2108C, 4); return true;
    // src/battle/main_battle_routine.asm:3181 CMP #0
    case 0xC2609F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3181 CMP #0
    // Overlapping static entry reached from 0xC2609F.
    case 0xC260A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3182 BEQ @UNKNOWN238
    case 0xC260A2: cpu.execute_instruction<0xF0>(0x0000F3, 2); return true;
    // src/battle/main_battle_routine.asm:3183 LDA MIRROR_ENEMY
    case 0xC260A4: cpu.execute_instruction<0xAD>(0x00AA12, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC260A7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3184 BEQL @UNKNOWN243
    case 0xC260A9: cpu.execute_instruction<0x4C>(0x006145, 3); return true;
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC260AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/battle/main_battle_routine.asm:3185 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC260AC.
    case 0xC260AE: cpu.execute_instruction<0x9F>(0xA22F85, 4); return true;
    // src/battle/main_battle_routine.asm:3191 STA @LOCAL0F
    case 0xC260AF: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:3192 LDX #0
    case 0xC260B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3192 LDX #0
    // Overlapping static entry reached from 0xC260AE.
    case 0xC260B2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/main_battle_routine.asm:3192 LDX #0
    // Overlapping static entry reached from 0xC260B1.
    case 0xC260B3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/main_battle_routine.asm:3193 STX @LOCAL0A
    case 0xC260B4: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:3195 JMP @UNKNOWN242
    case 0xC260B6: cpu.execute_instruction<0x4C>(0x00613B, 3); return true;
    // src/battle/main_battle_routine.asm:3197 TAX
    case 0xC260B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3198 LDA a:battler::consciousness,X
    case 0xC260BA: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    case 0xC260BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3199 AND #$00FF
    // Overlapping static entry reached from 0xC260BD.
    case 0xC260BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3200 BEQ @UNKNOWN241
    case 0xC260C0: cpu.execute_instruction<0xF0>(0x00006C, 2); return true;
    // src/battle/main_battle_routine.asm:3204 LDA @LOCAL0F
    case 0xC260C2: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:3206 TAX
    case 0xC260C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3207 LDA a:battler::ally_or_enemy,X
    case 0xC260C5: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    case 0xC260C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3208 AND #$00FF
    // Overlapping static entry reached from 0xC260C8.
    case 0xC260CA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3209 BNE @UNKNOWN241
    case 0xC260CB: cpu.execute_instruction<0xD0>(0x000061, 2); return true;
    // src/battle/main_battle_routine.asm:3213 LDA @LOCAL0F
    case 0xC260CD: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:3215 TAX
    case 0xC260CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3216 LDA a:battler::id,X
    case 0xC260D0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    case 0xC260D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/main_battle_routine.asm:3217 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC260D3.
    case 0xC260D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3218 BNE @UNKNOWN241
    case 0xC260D6: cpu.execute_instruction<0xD0>(0x000056, 2); return true;
    // src/battle/main_battle_routine.asm:3219 STZ MIRROR_ENEMY
    case 0xC260D8: cpu.execute_instruction<0x9C>(0x00AA12, 3); return true;
    // src/battle/main_battle_routine.asm:3223 LDA @LOCAL0F
    case 0xC260DB: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:3225 CLC
    case 0xC260DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    case 0xC260DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/battle/main_battle_routine.asm:3226 ADC #battler::afflictions
    // Overlapping static entry reached from 0xC260DE.
    case 0xC260E0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/main_battle_routine.asm:3227 TAX
    case 0xC260E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3231 STX @LOCAL0A
    case 0xC260E2: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:3233 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC260E4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    case 0xC260E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3234 AND #$00FF
    // Overlapping static entry reached from 0xC260E7.
    case 0xC260E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3235 STA @VIRTUAL04
    case 0xC260EA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:3236 STA @LOCAL08
    case 0xC260EC: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/main_battle_routine.asm:3240 LDA @LOCAL0F
    case 0xC260EE: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F2: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3242 PROMOTENEARPTRA @VIRTUAL06
    case 0xC260F8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:3243 REP #PROC_FLAGS::ACCUM8
    case 0xC260FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC260FC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC260FE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26100: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3244 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26102: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26104: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x00AA14, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC26104.
    case 0xC26106: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26107: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC26109: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/main_battle_routine.asm:3245 PROMOTENEARPTR MIRROR_BATTLER_BACKUP, @VIRTUAL06
    case 0xC2610F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/main_battle_routine.asm:3246 REP #PROC_FLAGS::ACCUM8
    case 0xC26111: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26113: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26115: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26117: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/main_battle_routine.asm:3247 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26119: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/main_battle_routine.asm:3248 JSL COPY_MIRROR_DATA
    case 0xC2611B: cpu.execute_instruction<0x22>(0xC2AF1F, 4); return true;
    // src/battle/main_battle_routine.asm:3249 LDA @VIRTUAL04
    case 0xC2611F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/main_battle_routine.asm:3250 SEP #PROC_FLAGS::ACCUM8
    case 0xC26121: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3254 LDX @LOCAL0A
    case 0xC26123: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:3256 STA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC26125: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/main_battle_routine.asm:3257 JSL CHECK_DEAD_PLAYERS
    case 0xC26128: cpu.execute_instruction<0x22>(0xC2BB18, 4); return true;
    // src/battle/main_battle_routine.asm:3258 BRA @UNKNOWN243
    case 0xC2612C: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/main_battle_routine.asm:3264 LDA @LOCAL0F
    case 0xC2612E: cpu.execute_instruction<0xA5>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:3266 CLC
    case 0xC26130: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    case 0xC26131: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/main_battle_routine.asm:3267 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26131.
    case 0xC26133: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/main_battle_routine.asm:3274 STA @LOCAL0F
    case 0xC26134: cpu.execute_instruction<0x85>(0x00002F, 2); return true;
    // src/battle/main_battle_routine.asm:3275 LDX @LOCAL0A
    case 0xC26136: cpu.execute_instruction<0xA6>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:3276 INX
    case 0xC26138: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3277 STX @LOCAL0A
    case 0xC26139: cpu.execute_instruction<0x86>(0x000025, 2); return true;
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    case 0xC2613B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/main_battle_routine.asm:3280 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2613B.
    case 0xC2613D: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC2613E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC26140: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3281 BCCL @UNKNOWN240
    case 0xC26142: cpu.execute_instruction<0x4C>(0x0060B9, 3); return true;
    // src/battle/main_battle_routine.asm:3283 JSL RESET_POST_BATTLE_STATS
    case 0xC26145: cpu.execute_instruction<0x22>(0xC2BC5C, 4); return true;
    // src/battle/main_battle_routine.asm:3284 SEP #PROC_FLAGS::ACCUM8
    case 0xC26149: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3285 STZ GAME_STATE+game_state::auto_fight_enable
    case 0xC2614B: cpu.execute_instruction<0x9C>(0x0098B1, 3); return true;
    // src/battle/main_battle_routine.asm:3286 REP #PROC_FLAGS::ACCUM8
    case 0xC2614E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/main_battle_routine.asm:3287 STZ BATTLE_MODE_FLAG
    case 0xC26150: cpu.execute_instruction<0x9C>(0x009643, 3); return true;
    // src/battle/main_battle_routine.asm:3288 LDA BATTLE_MODE
    case 0xC26153: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26156: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/main_battle_routine.asm:3289 BEQL @UNKNOWN2
    case 0xC26158: cpu.execute_instruction<0x4C>(0x0048E0, 3); return true;
    // src/battle/main_battle_routine.asm:3290 LDX #1
    case 0xC2615B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/main_battle_routine.asm:3290 LDX #1
    // Overlapping static entry reached from 0xC2615B.
    case 0xC2615D: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/main_battle_routine.asm:3291 TXA
    case 0xC2615E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/main_battle_routine.asm:3292 JSL FADE_OUT
    case 0xC2615F: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/battle/main_battle_routine.asm:3293 BRA @UNKNOWN246
    case 0xC26163: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/main_battle_routine.asm:3295 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC26165: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/battle/main_battle_routine.asm:3296 JSL UNKNOWN_C2DB3F
    case 0xC26169: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // src/battle/main_battle_routine.asm:3298 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC2616D: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    case 0xC26170: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/main_battle_routine.asm:3299 AND #$00FF
    // Overlapping static entry reached from 0xC26170.
    case 0xC26172: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/main_battle_routine.asm:3300 BNE @UNKNOWN245
    case 0xC26173: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // src/battle/main_battle_routine.asm:3301 JSL UNKNOWN_C20293
    case 0xC26175: cpu.execute_instruction<0x22>(0xC20293, 4); return true;
    // src/battle/main_battle_routine.asm:3302 JSL UNKNOWN_C08726
    case 0xC26179: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/battle/main_battle_routine.asm:3303 JSL UNKNOWN_C1DD5F
    case 0xC2617D: cpu.execute_instruction<0x22>(0xC1DD5F, 4); return true;
    // src/battle/main_battle_routine.asm:3304 JSL UNKNOWN_C2E0E7
    case 0xC26181: cpu.execute_instruction<0x22>(0xC2E0E7, 4); return true;
    // src/battle/main_battle_routine.asm:3305 LDA @LOCAL03
    case 0xC26185: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC26187: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/main_battle_routine.asm:3306 END_C_FUNCTION
    case 0xC26188: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/menu_handler.asm (source_named).
bool execute_battle_menu_handler_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/menu_handler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2311B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC2311D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC2311E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC2311F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC23120: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC23120.
    case 0xC23122: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC23123: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC23124: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:18 STX @VIRTUAL04
    case 0xC23125: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:18 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC23122.
    case 0xC23126: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:19 STA @LOCAL09
    case 0xC23127: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:19 STA @LOCAL09
    // Overlapping static entry reached from 0xC23126.
    case 0xC23128: cpu.execute_instruction<0x26>(0x000064, 2); return true;
    // src/battle/menu_handler.asm:20 STZ @LOCAL08
    case 0xC23129: cpu.execute_instruction<0x64>(0x000024, 2); return true;
    // src/battle/menu_handler.asm:20 STZ @LOCAL08
    // Overlapping static entry reached from 0xC23128.
    case 0xC2312A: cpu.execute_instruction<0x24>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:21 LDA #0
    case 0xC2312B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:21 LDA #0
    // Overlapping static entry reached from 0xC2312A.
    case 0xC2312C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/menu_handler.asm:21 LDA #0
    // Overlapping static entry reached from 0xC2312B.
    case 0xC2312D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:22 JSL UNKNOWN_C2FEF9
    case 0xC2312E: cpu.execute_instruction<0x22>(0xC2FEF9, 4); return true;
    // src/battle/menu_handler.asm:23 LDA @LOCAL09
    case 0xC23132: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:24 DEC
    case 0xC23134: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC23135: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23135.
    case 0xC23137: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/menu_handler.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC23138: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/menu_handler.asm:26 CLC
    case 0xC2313C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2313D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/battle/menu_handler.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2313D.
    case 0xC2313F: cpu.execute_instruction<0x99>(0x002285, 3); return true;
    // src/battle/menu_handler.asm:28 STA @LOCAL07
    case 0xC23140: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:29 LDY #char_struct::afflictions
    case 0xC23142: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/battle/menu_handler.asm:29 LDY #char_struct::afflictions
    // Overlapping static entry reached from 0xC23142.
    case 0xC23144: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/menu_handler.asm:30 LDA (@LOCAL07),Y
    case 0xC23145: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:31 AND #$00FF
    case 0xC23147: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC23147.
    case 0xC23149: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler.asm:32 CMP #STATUS_0::PARALYZED
    case 0xC2314A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:32 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC2314A.
    case 0xC2314C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:33 BEQ @UNKNOWN0
    case 0xC2314D: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/menu_handler.asm:34 LDY #char_struct::afflictions+2
    case 0xC2314F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/battle/menu_handler.asm:34 LDY #char_struct::afflictions+2
    // Overlapping static entry reached from 0xC2314F.
    case 0xC23151: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/menu_handler.asm:35 LDA (@LOCAL07),Y
    case 0xC23152: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:36 AND #$00FF
    case 0xC23154: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC23154.
    case 0xC23156: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler.asm:37 CMP #STATUS_2::IMMOBILIZED
    case 0xC23157: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:37 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC23157.
    case 0xC23159: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:38 BNE @UNKNOWN1
    case 0xC2315A: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:40 LDA #2
    case 0xC2315C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:40 LDA #2
    // Overlapping static entry reached from 0xC2315C.
    case 0xC2315E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:41 STA @LOCAL06
    case 0xC2315F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:42 BRA @UNKNOWN4
    case 0xC23161: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/battle/menu_handler.asm:44 LDY #char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC23163: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000031, 2); else cpu.execute_instruction<0xA0>(0x000031, 3); return true;
    // src/battle/menu_handler.asm:44 LDY #char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC23163.
    case 0xC23165: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/menu_handler.asm:45 LDA (@LOCAL07),Y
    case 0xC23166: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:46 AND #$00FF
    case 0xC23168: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC23168.
    case 0xC2316A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:47 BEQ @UNKNOWN2
    case 0xC2316B: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/menu_handler.asm:48 DEC
    case 0xC2316D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:49 CLC
    case 0xC2316E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:50 ADC @LOCAL07
    case 0xC2316F: cpu.execute_instruction<0x65>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:51 TAX
    case 0xC23171: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:52 LDA __BSS_START__ + char_struct::items,X
    case 0xC23172: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/menu_handler.asm:53 AND #$00FF
    case 0xC23175: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC23175.
    case 0xC23177: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler.asm:55 CMP #0
    case 0xC23178: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:55 CMP #0
    // Overlapping static entry reached from 0xC23178.
    case 0xC2317A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:56 BEQ @UNKNOWN3
    case 0xC2317B: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:57 LDY #.SIZEOF(item)
    case 0xC2317D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/battle/menu_handler.asm:57 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC2317D.
    case 0xC2317F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:58 JSL MULT168
    case 0xC23180: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/menu_handler.asm:59 CLC
    case 0xC23184: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:60 ADC #item::type
    case 0xC23185: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/battle/menu_handler.asm:60 ADC #item::type
    // Overlapping static entry reached from 0xC23185.
    case 0xC23187: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/menu_handler.asm:61 TAX
    case 0xC23188: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:62 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC23189: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/menu_handler.asm:63 AND #$00FF
    case 0xC2318D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC2318D.
    case 0xC2318F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/menu_handler.asm:64 AND #$0003
    case 0xC23190: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:64 AND #$0003
    // Overlapping static entry reached from 0xC23190.
    case 0xC23192: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler.asm:65 CMP #1
    case 0xC23193: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:65 CMP #1
    // Overlapping static entry reached from 0xC23193.
    case 0xC23195: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:66 BNE @UNKNOWN3
    case 0xC23196: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:67 LDA #1
    case 0xC23198: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:67 LDA #1
    // Overlapping static entry reached from 0xC23198.
    case 0xC2319A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:68 STA @LOCAL06
    case 0xC2319B: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:69 BRA @UNKNOWN4
    case 0xC2319D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:71 STZ @LOCAL06
    case 0xC2319F: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:73 LDA GAME_STATE+game_state::auto_fight_enable
    case 0xC231A1: cpu.execute_instruction<0xAD>(0x0098B1, 3); return true;
    // src/battle/menu_handler.asm:74 AND #$00FF
    case 0xC231A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC231A4.
    case 0xC231A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:75 BEQL @UNKNOWN43
    case 0xC231A7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:75 BEQL @UNKNOWN43
    case 0xC231A9: cpu.execute_instruction<0x4C>(0x00356E, 3); return true;
    // src/battle/menu_handler.asm:76 LDY #char_struct::afflictions+4
    case 0xC231AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/menu_handler.asm:76 LDY #char_struct::afflictions+4
    // Overlapping static entry reached from 0xC231AC.
    case 0xC231AE: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/menu_handler.asm:77 LDA (@LOCAL07),Y
    case 0xC231AF: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:78 AND #$00FF
    case 0xC231B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC231B1.
    case 0xC231B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:79 BNEL @UNKNOWN38
    case 0xC231B4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:79 BNEL @UNKNOWN38
    case 0xC231B6: cpu.execute_instruction<0x4C>(0x003519, 3); return true;
    // src/battle/menu_handler.asm:80 LDY #char_struct::afflictions+3
    case 0xC231B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000011, 2); else cpu.execute_instruction<0xA0>(0x000011, 3); return true;
    // src/battle/menu_handler.asm:80 LDY #char_struct::afflictions+3
    // Overlapping static entry reached from 0xC231B9.
    case 0xC231BB: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/menu_handler.asm:81 LDA (@LOCAL07),Y
    case 0xC231BC: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:82 AND #$00FF
    case 0xC231BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC231BE.
    case 0xC231C0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler.asm:83 CMP #STATUS_3::STRANGE
    case 0xC231C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:83 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC231C1.
    case 0xC231C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:84 BEQL @UNKNOWN38
    case 0xC231C4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:84 BEQL @UNKNOWN38
    case 0xC231C6: cpu.execute_instruction<0x4C>(0x003519, 3); return true;
    // src/battle/menu_handler.asm:85 LDY #char_struct::afflictions+1
    case 0xC231C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/battle/menu_handler.asm:85 LDY #char_struct::afflictions+1
    // Overlapping static entry reached from 0xC231C9.
    case 0xC231CB: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/menu_handler.asm:86 LDA (@LOCAL07),Y
    case 0xC231CC: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:87 AND #$00FF
    case 0xC231CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC231CE.
    case 0xC231D0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/menu_handler.asm:88 CMP #STATUS_1::MUSHROOMIZED
    case 0xC231D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:88 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC231D1.
    case 0xC231D3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:89 BEQL @UNKNOWN38
    case 0xC231D4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:89 BEQL @UNKNOWN38
    case 0xC231D6: cpu.execute_instruction<0x4C>(0x003519, 3); return true;
    // src/battle/menu_handler.asm:90 LDA @LOCAL09
    case 0xC231D9: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:91 CMP #PARTY_MEMBER::NESS
    case 0xC231DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:91 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC231DB.
    case 0xC231DD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:92 BEQ @UNKNOWN9
    case 0xC231DE: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/menu_handler.asm:93 LDA @LOCAL09
    case 0xC231E0: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:94 CMP #PARTY_MEMBER::POO
    case 0xC231E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:94 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC231E2.
    case 0xC231E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:95 BNEL @UNKNOWN38
    case 0xC231E5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:95 BNEL @UNKNOWN38
    case 0xC231E7: cpu.execute_instruction<0x4C>(0x003519, 3); return true;
    // src/battle/menu_handler.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC231EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:98 LDA #1
    case 0xC231EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/menu_handler.asm:99 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC231EE: cpu.execute_instruction<0x8D>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:99 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC231EC.
    case 0xC231EF: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:100 LDA #26
    case 0xC231F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x008D1A, 3); return true;
    // src/battle/menu_handler.asm:101 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC231F3: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:101 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC231F1.
    case 0xC231F4: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:102 REP #PROC_FLAGS::ACCUM8
    case 0xC231F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:102 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC231F4.
    case 0xC231F7: cpu.execute_instruction<0x20>(0x0023A9, 3); return true;
    // src/battle/menu_handler.asm:103 LDA #35
    case 0xC231F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000023, 3); return true;
    // src/battle/menu_handler.asm:103 LDA #35
    // Overlapping static entry reached from 0xC231F8.
    case 0xC231FA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:104 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC231FB: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:105 LDX #26
    case 0xC231FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001A, 2); else cpu.execute_instruction<0xA2>(0x00001A, 3); return true;
    // src/battle/menu_handler.asm:105 LDX #26
    // Overlapping static entry reached from 0xC231FE.
    case 0xC23200: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:106 LDA @LOCAL09
    case 0xC23201: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:107 JSL CHECK_IF_PSI_KNOWN
    case 0xC23203: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:108 CMP #0
    case 0xC23207: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:108 CMP #0
    // Overlapping static entry reached from 0xC23207.
    case 0xC23209: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:109 BEQ @UNKNOWN15
    case 0xC2320A: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/battle/menu_handler.asm:110 LDY #char_struct::current_pp_target
    case 0xC2320C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:110 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC2320C.
    case 0xC2320E: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:111 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_OMEGA) + battle_action::pp_cost
    case 0xC2320F: cpu.execute_instruction<0xAF>(0xD57D0F, 4); return true;
    // src/battle/menu_handler.asm:112 AND #$00FF
    case 0xC23213: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC23213.
    case 0xC23215: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:113 CMP (@LOCAL07),Y
    case 0xC23216: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:114 BGT @UNKNOWN15
    case 0xC23218: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:114 BGT @UNKNOWN15
    case 0xC2321A: cpu.execute_instruction<0xB0>(0x000050, 2); return true;
    // src/battle/menu_handler.asm:115 LDA #0
    case 0xC2321C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:115 LDA #0
    // Overlapping static entry reached from 0xC2321C.
    case 0xC2321E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:116 JSL COUNT_CHARS
    case 0xC2321F: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/menu_handler.asm:117 CMP #2
    case 0xC23223: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:117 CMP #2
    // Overlapping static entry reached from 0xC23223.
    case 0xC23225: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler.asm:118 BCC @UNKNOWN15
    case 0xC23226: cpu.execute_instruction<0x90>(0x000044, 2); return true;
    // src/battle/menu_handler.asm:119 LDY #0
    case 0xC23228: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:119 LDY #0
    // Overlapping static entry reached from 0xC23228.
    case 0xC2322A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/menu_handler.asm:120 STY @LOCAL05
    case 0xC2322B: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:121 BRA @UNKNOWN14
    case 0xC2322D: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/battle/menu_handler.asm:123 LDA GAME_STATE + game_state::party_members,Y
    case 0xC2322F: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/battle/menu_handler.asm:124 AND #$00FF
    case 0xC23232: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC23232.
    case 0xC23234: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/menu_handler.asm:125 TAX
    case 0xC23235: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:126 CPX #1
    case 0xC23236: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:126 CPX #1
    // Overlapping static entry reached from 0xC23236.
    case 0xC23238: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler.asm:127 BCC @UNKNOWN13
    case 0xC23239: cpu.execute_instruction<0x90>(0x00001D, 2); return true;
    // src/battle/menu_handler.asm:128 CPX #4
    case 0xC2323B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:128 CPX #4
    // Overlapping static entry reached from 0xC2323B.
    case 0xC2323D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:129 BGT @UNKNOWN13
    case 0xC2323E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:129 BGT @UNKNOWN13
    case 0xC23240: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/menu_handler.asm:130 TXA
    case 0xC23242: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:131 DEC
    case 0xC23243: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:132 LDY #.SIZEOF(char_struct)
    case 0xC23244: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/menu_handler.asm:132 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23244.
    case 0xC23246: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:133 JSL MULT168
    case 0xC23247: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/menu_handler.asm:134 TAX
    case 0xC2324B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:135 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC2324C: cpu.execute_instruction<0xBD>(0x0099D8, 3); return true;
    // src/battle/menu_handler.asm:136 LSR
    case 0xC2324F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:137 LSR
    case 0xC23250: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:138 CMP PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC23251: cpu.execute_instruction<0xDD>(0x009A15, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/menu_handler.asm:139 BLTEQ @UNKNOWN15
    case 0xC23254: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/menu_handler.asm:139 BLTEQ @UNKNOWN15
    case 0xC23256: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:141 LDY @LOCAL05
    case 0xC23258: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:142 INY
    case 0xC2325A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:143 STY @LOCAL05
    case 0xC2325B: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:145 CPY #6
    case 0xC2325D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:145 CPY #6
    // Overlapping static entry reached from 0xC2325D.
    case 0xC2325F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler.asm:146 BCC @UNKNOWN11
    case 0xC23260: cpu.execute_instruction<0x90>(0x0000CD, 2); return true;
    // src/battle/menu_handler.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC23262: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:148 LDA #4
    case 0xC23264: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/battle/menu_handler.asm:149 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23266: cpu.execute_instruction<0x8D>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:149 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23264.
    case 0xC23267: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:150 JMP @UNKNOWN21
    case 0xC23269: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:152 SEP #PROC_FLAGS::ACCUM8
    case 0xC2326C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:153 LDA #25
    case 0xC2326E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x008D19, 3); return true;
    // src/battle/menu_handler.asm:154 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23270: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:154 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2326E.
    case 0xC23271: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC23273: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:155 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23271.
    case 0xC23274: cpu.execute_instruction<0x20>(0x0022A9, 3); return true;
    // src/battle/menu_handler.asm:156 LDA #34
    case 0xC23275: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x000022, 3); return true;
    // src/battle/menu_handler.asm:156 LDA #34
    // Overlapping static entry reached from 0xC23275.
    case 0xC23277: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:157 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23278: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:158 LDX #25
    case 0xC2327B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/battle/menu_handler.asm:158 LDX #25
    // Overlapping static entry reached from 0xC2327B.
    case 0xC2327D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:159 LDA @LOCAL09
    case 0xC2327E: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:160 JSL CHECK_IF_PSI_KNOWN
    case 0xC23280: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:161 CMP #0
    case 0xC23284: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:161 CMP #0
    // Overlapping static entry reached from 0xC23284.
    case 0xC23286: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:162 BEQ @UNKNOWN17
    case 0xC23287: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/menu_handler.asm:163 LDY #char_struct::current_pp_target
    case 0xC23289: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:163 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23289.
    case 0xC2328B: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:164 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_GAMMA) + battle_action::pp_cost
    case 0xC2328C: cpu.execute_instruction<0xAF>(0xD57D03, 4); return true;
    // src/battle/menu_handler.asm:165 AND #$00FF
    case 0xC23290: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:165 AND #$00FF
    // Overlapping static entry reached from 0xC23290.
    case 0xC23292: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:166 CMP (@LOCAL07),Y
    case 0xC23293: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:167 BGT @UNKNOWN17
    case 0xC23295: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:167 BGT @UNKNOWN17
    case 0xC23297: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/battle/menu_handler.asm:168 JSL AUTOLIFEUP
    case 0xC23299: cpu.execute_instruction<0x22>(0xC4A15D, 4); return true;
    // src/battle/menu_handler.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2329D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:170 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2329F: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC232A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:172 AND #$00FF
    case 0xC232A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC232A4.
    case 0xC232A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:173 BNEL @UNKNOWN21
    case 0xC232A7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:173 BNEL @UNKNOWN21
    case 0xC232A9: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC232AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:176 LDA #24
    case 0xC232AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/battle/menu_handler.asm:177 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC232B0: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:177 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC232AE.
    case 0xC232B1: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC232B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:178 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC232B1.
    case 0xC232B4: cpu.execute_instruction<0x20>(0x0021A9, 3); return true;
    // src/battle/menu_handler.asm:179 LDA #33
    case 0xC232B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/battle/menu_handler.asm:179 LDA #33
    // Overlapping static entry reached from 0xC232B5.
    case 0xC232B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:180 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC232B8: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:181 LDX #24
    case 0xC232BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/battle/menu_handler.asm:181 LDX #24
    // Overlapping static entry reached from 0xC232BB.
    case 0xC232BD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:182 LDA @LOCAL09
    case 0xC232BE: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:183 JSL CHECK_IF_PSI_KNOWN
    case 0xC232C0: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:184 CMP #0
    case 0xC232C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:184 CMP #0
    // Overlapping static entry reached from 0xC232C4.
    case 0xC232C6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:185 BEQ @UNKNOWN19
    case 0xC232C7: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:186 LDY #char_struct::current_pp_target
    case 0xC232C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:186 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC232C9.
    case 0xC232CB: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:187 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_BETA) + battle_action::pp_cost
    case 0xC232CC: cpu.execute_instruction<0xAF>(0xD57CF7, 4); return true;
    // src/battle/menu_handler.asm:188 AND #$00FF
    case 0xC232D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:188 AND #$00FF
    // Overlapping static entry reached from 0xC232D0.
    case 0xC232D2: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:189 CMP (@LOCAL07),Y
    case 0xC232D3: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:190 BGT @UNKNOWN19
    case 0xC232D5: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:190 BGT @UNKNOWN19
    case 0xC232D7: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/battle/menu_handler.asm:191 JSL AUTOLIFEUP
    case 0xC232D9: cpu.execute_instruction<0x22>(0xC4A15D, 4); return true;
    // src/battle/menu_handler.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC232DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:193 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC232DF: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:194 REP #PROC_FLAGS::ACCUM8
    case 0xC232E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:195 AND #$00FF
    case 0xC232E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC232E4.
    case 0xC232E6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:196 BNE @UNKNOWN21
    case 0xC232E7: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/battle/menu_handler.asm:198 SEP #PROC_FLAGS::ACCUM8
    case 0xC232E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:199 LDA #23
    case 0xC232EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/battle/menu_handler.asm:200 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC232ED: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:200 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC232EB.
    case 0xC232EE: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:201 REP #PROC_FLAGS::ACCUM8
    case 0xC232F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:201 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC232EE.
    case 0xC232F1: cpu.execute_instruction<0x20>(0x0020A9, 3); return true;
    // src/battle/menu_handler.asm:202 LDA #32
    case 0xC232F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/battle/menu_handler.asm:202 LDA #32
    // Overlapping static entry reached from 0xC232F2.
    case 0xC232F4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:203 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC232F5: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:204 LDX #23
    case 0xC232F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000017, 2); else cpu.execute_instruction<0xA2>(0x000017, 3); return true;
    // src/battle/menu_handler.asm:204 LDX #23
    // Overlapping static entry reached from 0xC232F8.
    case 0xC232FA: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:205 LDA @LOCAL09
    case 0xC232FB: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:206 JSL CHECK_IF_PSI_KNOWN
    case 0xC232FD: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:207 CMP #0
    case 0xC23301: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:207 CMP #0
    // Overlapping static entry reached from 0xC23301.
    case 0xC23303: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:208 BEQ @UNKNOWN22
    case 0xC23304: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/battle/menu_handler.asm:209 LDY #char_struct::current_pp_target
    case 0xC23306: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:209 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23306.
    case 0xC23308: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:210 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_ALPHA) + battle_action::pp_cost
    case 0xC23309: cpu.execute_instruction<0xAF>(0xD57CEB, 4); return true;
    // src/battle/menu_handler.asm:211 AND #$00FF
    case 0xC2330D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:211 AND #$00FF
    // Overlapping static entry reached from 0xC2330D.
    case 0xC2330F: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:212 CMP (@LOCAL07),Y
    case 0xC23310: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:213 BGT @UNKNOWN22
    case 0xC23312: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:213 BGT @UNKNOWN22
    case 0xC23314: cpu.execute_instruction<0xB0>(0x000021, 2); return true;
    // src/battle/menu_handler.asm:214 JSL AUTOLIFEUP
    case 0xC23316: cpu.execute_instruction<0x22>(0xC4A15D, 4); return true;
    // src/battle/menu_handler.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC2331A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:216 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2331C: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC2331F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:218 AND #$00FF
    case 0xC23321: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC23321.
    case 0xC23323: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:219 BEQ @UNKNOWN22
    case 0xC23324: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/menu_handler.asm:221 REP #PROC_FLAGS::ACCUM8
    case 0xC23326: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:222 LDA @LOCAL09
    case 0xC23328: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:223 SEP #PROC_FLAGS::ACCUM8
    case 0xC2332A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:224 STA BATTLE_MENU_SELECTION
    case 0xC2332C: cpu.execute_instruction<0x8D>(0x00A97D, 3); return true;
    // src/battle/menu_handler.asm:225 REP #PROC_FLAGS::ACCUM8
    case 0xC2332F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:226 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23331: cpu.execute_instruction<0xAD>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:227 JMP @UNKNOWN113
    case 0xC23334: cpu.execute_instruction<0x4C>(0x003B64, 3); return true;
    // src/battle/menu_handler.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC23337: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:230 LDA #30
    case 0xC23339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008D1E, 3); return true;
    // src/battle/menu_handler.asm:231 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2333B: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:231 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC23339.
    case 0xC2333C: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:232 REP #PROC_FLAGS::ACCUM8
    case 0xC2333E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:232 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2333C.
    case 0xC2333F: cpu.execute_instruction<0x20>(0x0027A9, 3); return true;
    // src/battle/menu_handler.asm:233 LDA #39
    case 0xC23340: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/battle/menu_handler.asm:233 LDA #39
    // Overlapping static entry reached from 0xC23340.
    case 0xC23342: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:234 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23343: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:235 LDX #30
    case 0xC23346: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00001E, 3); return true;
    // src/battle/menu_handler.asm:235 LDX #30
    // Overlapping static entry reached from 0xC23346.
    case 0xC23348: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:236 LDA @LOCAL09
    case 0xC23349: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:237 JSL CHECK_IF_PSI_KNOWN
    case 0xC2334B: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:238 CMP #0
    case 0xC2334F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:238 CMP #0
    // Overlapping static entry reached from 0xC2334F.
    case 0xC23351: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:239 BEQ @UNKNOWN24
    case 0xC23352: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:240 LDY #char_struct::current_pp_target
    case 0xC23354: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:240 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23354.
    case 0xC23356: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:241 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_OMEGA) + battle_action::pp_cost
    case 0xC23357: cpu.execute_instruction<0xAF>(0xD57D3F, 4); return true;
    // src/battle/menu_handler.asm:242 AND #$00FF
    case 0xC2335B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:242 AND #$00FF
    // Overlapping static entry reached from 0xC2335B.
    case 0xC2335D: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:243 CMP (@LOCAL07),Y
    case 0xC2335E: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:244 BGT @UNKNOWN24
    case 0xC23360: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:244 BGT @UNKNOWN24
    case 0xC23362: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/battle/menu_handler.asm:245 LDX #1
    case 0xC23364: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:245 LDX #1
    // Overlapping static entry reached from 0xC23364.
    case 0xC23366: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:246 LDA #0
    case 0xC23367: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:246 LDA #0
    // Overlapping static entry reached from 0xC23367.
    case 0xC23369: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:247 JSL AUTOHEALING
    case 0xC2336A: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC2336E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:249 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23370: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC23373: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:251 AND #$00FF
    case 0xC23375: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:251 AND #$00FF
    // Overlapping static entry reached from 0xC23375.
    case 0xC23377: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:252 BNE @UNKNOWN21
    case 0xC23378: cpu.execute_instruction<0xD0>(0x0000AC, 2); return true;
    // src/battle/menu_handler.asm:254 SEP #PROC_FLAGS::ACCUM8
    case 0xC2337A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:255 LDA #29
    case 0xC2337C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x008D1D, 3); return true;
    // src/battle/menu_handler.asm:256 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2337E: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:256 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2337C.
    case 0xC2337F: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:257 REP #PROC_FLAGS::ACCUM8
    case 0xC23381: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:257 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2337F.
    case 0xC23382: cpu.execute_instruction<0x20>(0x0026A9, 3); return true;
    // src/battle/menu_handler.asm:258 LDA #38
    case 0xC23383: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // src/battle/menu_handler.asm:258 LDA #38
    // Overlapping static entry reached from 0xC23383.
    case 0xC23385: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:259 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23386: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:260 LDX #29
    case 0xC23389: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001D, 2); else cpu.execute_instruction<0xA2>(0x00001D, 3); return true;
    // src/battle/menu_handler.asm:260 LDX #29
    // Overlapping static entry reached from 0xC23389.
    case 0xC2338B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:261 LDA @LOCAL09
    case 0xC2338C: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:262 JSL CHECK_IF_PSI_KNOWN
    case 0xC2338E: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:263 CMP #0
    case 0xC23392: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:263 CMP #0
    // Overlapping static entry reached from 0xC23392.
    case 0xC23394: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:264 BEQ @UNKNOWN28
    case 0xC23395: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/menu_handler.asm:265 LDY #char_struct::current_pp_target
    case 0xC23397: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:265 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23397.
    case 0xC23399: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:266 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_GAMMA) + battle_action::pp_cost
    case 0xC2339A: cpu.execute_instruction<0xAF>(0xD57D33, 4); return true;
    // src/battle/menu_handler.asm:267 AND #$00FF
    case 0xC2339E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC2339E.
    case 0xC233A0: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:268 CMP (@LOCAL07),Y
    case 0xC233A1: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:269 BGT @UNKNOWN28
    case 0xC233A3: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:269 BGT @UNKNOWN28
    case 0xC233A5: cpu.execute_instruction<0xB0>(0x000054, 2); return true;
    // src/battle/menu_handler.asm:270 LDX #3
    case 0xC233A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:270 LDX #3
    // Overlapping static entry reached from 0xC233A7.
    case 0xC233A9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:271 LDA #0
    case 0xC233AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:271 LDA #0
    // Overlapping static entry reached from 0xC233AA.
    case 0xC233AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:272 JSL AUTOHEALING
    case 0xC233AD: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:273 SEP #PROC_FLAGS::ACCUM8
    case 0xC233B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:274 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC233B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000082, 2); else cpu.execute_instruction<0xA0>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:274 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC233B3.
    case 0xC233B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x001E84, 3); return true;
    // src/battle/menu_handler.asm:275 STY @LOCAL05
    case 0xC233B6: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:275 STY @LOCAL05
    // Overlapping static entry reached from 0xC233B5.
    case 0xC233B7: cpu.execute_instruction<0x1E>(0x000099, 3); return true;
    // src/battle/menu_handler.asm:276 STA __BSS_START__,Y
    case 0xC233B8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:276 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC233B7.
    case 0xC233BA: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/menu_handler.asm:277 REP #PROC_FLAGS::ACCUM8
    case 0xC233BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:278 AND #$00FF
    case 0xC233BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC233BD.
    case 0xC233BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:279 BNEL @UNKNOWN21
    case 0xC233C0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:279 BNEL @UNKNOWN21
    case 0xC233C2: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:280 LDX #2
    case 0xC233C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:280 LDX #2
    // Overlapping static entry reached from 0xC233C5.
    case 0xC233C7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:281 LDA #0
    case 0xC233C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:281 LDA #0
    // Overlapping static entry reached from 0xC233C8.
    case 0xC233CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:282 JSL AUTOHEALING
    case 0xC233CB: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:283 SEP #PROC_FLAGS::ACCUM8
    case 0xC233CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:284 LDY @LOCAL05
    case 0xC233D1: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:285 STA __BSS_START__,Y
    case 0xC233D3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:286 REP #PROC_FLAGS::ACCUM8
    case 0xC233D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:287 AND #$00FF
    case 0xC233D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:287 AND #$00FF
    // Overlapping static entry reached from 0xC233D8.
    case 0xC233DA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:288 BNEL @UNKNOWN21
    case 0xC233DB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:288 BNEL @UNKNOWN21
    case 0xC233DD: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:289 LDX #1
    case 0xC233E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:289 LDX #1
    // Overlapping static entry reached from 0xC233E0.
    case 0xC233E2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:290 LDA #0
    case 0xC233E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:290 LDA #0
    // Overlapping static entry reached from 0xC233E3.
    case 0xC233E5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:291 JSL AUTOHEALING
    case 0xC233E6: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:292 SEP #PROC_FLAGS::ACCUM8
    case 0xC233EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:293 LDY @LOCAL05
    case 0xC233EC: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:294 STA __BSS_START__,Y
    case 0xC233EE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:295 REP #PROC_FLAGS::ACCUM8
    case 0xC233F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:296 AND #$00FF
    case 0xC233F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:296 AND #$00FF
    // Overlapping static entry reached from 0xC233F3.
    case 0xC233F5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:297 BNEL @UNKNOWN21
    case 0xC233F6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:297 BNEL @UNKNOWN21
    case 0xC233F8: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:299 SEP #PROC_FLAGS::ACCUM8
    case 0xC233FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:300 LDA #28
    case 0xC233FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x008D1C, 3); return true;
    // src/battle/menu_handler.asm:301 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC233FF: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:301 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC233FD.
    case 0xC23400: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:302 REP #PROC_FLAGS::ACCUM8
    case 0xC23402: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:302 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23400.
    case 0xC23403: cpu.execute_instruction<0x20>(0x0025A9, 3); return true;
    // src/battle/menu_handler.asm:303 LDA #37
    case 0xC23404: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000025, 3); return true;
    // src/battle/menu_handler.asm:303 LDA #37
    // Overlapping static entry reached from 0xC23404.
    case 0xC23406: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:304 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23407: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:305 LDX #28
    case 0xC2340A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00001C, 3); return true;
    // src/battle/menu_handler.asm:305 LDX #28
    // Overlapping static entry reached from 0xC2340A.
    case 0xC2340C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:306 LDA @LOCAL09
    case 0xC2340D: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:307 JSL CHECK_IF_PSI_KNOWN
    case 0xC2340F: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:308 CMP #0
    case 0xC23413: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:308 CMP #0
    // Overlapping static entry reached from 0xC23413.
    case 0xC23415: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:309 BEQL @UNKNOWN34
    case 0xC23416: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:309 BEQL @UNKNOWN34
    case 0xC23418: cpu.execute_instruction<0x4C>(0x003498, 3); return true;
    // src/battle/menu_handler.asm:310 LDY #char_struct::current_pp_target
    case 0xC2341B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:310 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC2341B.
    case 0xC2341D: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:311 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_BETA) + battle_action::pp_cost
    case 0xC2341E: cpu.execute_instruction<0xAF>(0xD57D27, 4); return true;
    // src/battle/menu_handler.asm:312 AND #$00FF
    case 0xC23422: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:312 AND #$00FF
    // Overlapping static entry reached from 0xC23422.
    case 0xC23424: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:313 CMP (@LOCAL07),Y
    case 0xC23425: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:314 BGT @UNKNOWN34
    case 0xC23427: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:314 BGT @UNKNOWN34
    case 0xC23429: cpu.execute_instruction<0xB0>(0x00006D, 2); return true;
    // src/battle/menu_handler.asm:315 LDX #5
    case 0xC2342B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/battle/menu_handler.asm:315 LDX #5
    // Overlapping static entry reached from 0xC2342B.
    case 0xC2342D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:316 LDA #0
    case 0xC2342E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:316 LDA #0
    // Overlapping static entry reached from 0xC2342E.
    case 0xC23430: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:317 JSL AUTOHEALING
    case 0xC23431: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:318 SEP #PROC_FLAGS::ACCUM8
    case 0xC23435: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:319 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23437: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000082, 2); else cpu.execute_instruction<0xA0>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:319 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23437.
    case 0xC23439: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x001C84, 3); return true;
    // src/battle/menu_handler.asm:320 STY @LOCAL04
    case 0xC2343A: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:320 STY @LOCAL04
    // Overlapping static entry reached from 0xC23439.
    case 0xC2343B: cpu.execute_instruction<0x1C>(0x000099, 3); return true;
    // src/battle/menu_handler.asm:321 STA __BSS_START__,Y
    case 0xC2343C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:321 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2343B.
    case 0xC2343E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/menu_handler.asm:322 REP #PROC_FLAGS::ACCUM8
    case 0xC2343F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:323 AND #$00FF
    case 0xC23441: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC23441.
    case 0xC23443: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:324 BNEL @UNKNOWN21
    case 0xC23444: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:324 BNEL @UNKNOWN21
    case 0xC23446: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:325 LDX #4
    case 0xC23449: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:325 LDX #4
    // Overlapping static entry reached from 0xC23449.
    case 0xC2344B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:326 LDA #0
    case 0xC2344C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:326 LDA #0
    // Overlapping static entry reached from 0xC2344C.
    case 0xC2344E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:327 JSL AUTOHEALING
    case 0xC2344F: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:328 SEP #PROC_FLAGS::ACCUM8
    case 0xC23453: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:329 LDY @LOCAL04
    case 0xC23455: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:330 STA __BSS_START__,Y
    case 0xC23457: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:331 REP #PROC_FLAGS::ACCUM8
    case 0xC2345A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:332 AND #$00FF
    case 0xC2345C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:332 AND #$00FF
    // Overlapping static entry reached from 0xC2345C.
    case 0xC2345E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:333 BNEL @UNKNOWN21
    case 0xC2345F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:333 BNEL @UNKNOWN21
    case 0xC23461: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:334 LDX #2
    case 0xC23464: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:334 LDX #2
    // Overlapping static entry reached from 0xC23464.
    case 0xC23466: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/menu_handler.asm:335 TXA
    case 0xC23467: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:336 JSL AUTOHEALING
    case 0xC23468: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:337 SEP #PROC_FLAGS::ACCUM8
    case 0xC2346C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:338 LDY @LOCAL04
    case 0xC2346E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:339 STA __BSS_START__,Y
    case 0xC23470: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:340 REP #PROC_FLAGS::ACCUM8
    case 0xC23473: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:341 AND #$00FF
    case 0xC23475: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC23475.
    case 0xC23477: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:342 BNEL @UNKNOWN21
    case 0xC23478: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:342 BNEL @UNKNOWN21
    case 0xC2347A: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:343 LDX #1
    case 0xC2347D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:343 LDX #1
    // Overlapping static entry reached from 0xC2347D.
    case 0xC2347F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:344 LDA #3
    case 0xC23480: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:344 LDA #3
    // Overlapping static entry reached from 0xC23480.
    case 0xC23482: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:345 JSL AUTOHEALING
    case 0xC23483: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:346 SEP #PROC_FLAGS::ACCUM8
    case 0xC23487: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:347 LDY @LOCAL04
    case 0xC23489: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:348 STA __BSS_START__,Y
    case 0xC2348B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:349 REP #PROC_FLAGS::ACCUM8
    case 0xC2348E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:350 AND #$00FF
    case 0xC23490: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:350 AND #$00FF
    // Overlapping static entry reached from 0xC23490.
    case 0xC23492: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:351 BNEL @UNKNOWN21
    case 0xC23493: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:351 BNEL @UNKNOWN21
    case 0xC23495: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:353 SEP #PROC_FLAGS::ACCUM8
    case 0xC23498: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:354 LDA #27
    case 0xC2349A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x008D1B, 3); return true;
    // src/battle/menu_handler.asm:355 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2349C: cpu.execute_instruction<0x8D>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:355 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2349A.
    case 0xC2349D: cpu.execute_instruction<0x7E>(0x00C2A9, 3); return true;
    // src/battle/menu_handler.asm:356 REP #PROC_FLAGS::ACCUM8
    case 0xC2349F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:356 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2349D.
    case 0xC234A0: cpu.execute_instruction<0x20>(0x0024A9, 3); return true;
    // src/battle/menu_handler.asm:357 LDA #36
    case 0xC234A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/battle/menu_handler.asm:357 LDA #36
    // Overlapping static entry reached from 0xC234A1.
    case 0xC234A3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/menu_handler.asm:358 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC234A4: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:359 LDX #27
    case 0xC234A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00001B, 3); return true;
    // src/battle/menu_handler.asm:359 LDX #27
    // Overlapping static entry reached from 0xC234A7.
    case 0xC234A9: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:360 LDA @LOCAL09
    case 0xC234AA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:361 JSL CHECK_IF_PSI_KNOWN
    case 0xC234AC: cpu.execute_instruction<0x22>(0xC45ECE, 4); return true;
    // src/battle/menu_handler.asm:362 CMP #0
    case 0xC234B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:362 CMP #0
    // Overlapping static entry reached from 0xC234B0.
    case 0xC234B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:363 BEQ @UNKNOWN38
    case 0xC234B3: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/menu_handler.asm:364 LDY #char_struct::current_pp_target
    case 0xC234B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/menu_handler.asm:364 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC234B5.
    case 0xC234B7: cpu.execute_instruction<0x00>(0x0000AF, 2); return true;
    // src/battle/menu_handler.asm:365 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_ALPHA) + battle_action::pp_cost
    case 0xC234B8: cpu.execute_instruction<0xAF>(0xD57D1B, 4); return true;
    // src/battle/menu_handler.asm:366 AND #$00FF
    case 0xC234BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC234BC.
    case 0xC234BE: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/battle/menu_handler.asm:367 CMP (@LOCAL07),Y
    case 0xC234BF: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:368 BGT @UNKNOWN38
    case 0xC234C1: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:368 BGT @UNKNOWN38
    case 0xC234C3: cpu.execute_instruction<0xB0>(0x000054, 2); return true;
    // src/battle/menu_handler.asm:369 LDX #7
    case 0xC234C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/battle/menu_handler.asm:369 LDX #7
    // Overlapping static entry reached from 0xC234C5.
    case 0xC234C7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:370 LDA #0
    case 0xC234C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:370 LDA #0
    // Overlapping static entry reached from 0xC234C8.
    case 0xC234CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:371 JSL AUTOHEALING
    case 0xC234CB: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC234CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:373 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC234D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000082, 2); else cpu.execute_instruction<0xA0>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:373 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC234D1.
    case 0xC234D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x001E84, 3); return true;
    // src/battle/menu_handler.asm:374 STY @LOCAL05
    case 0xC234D4: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:374 STY @LOCAL05
    // Overlapping static entry reached from 0xC234D3.
    case 0xC234D5: cpu.execute_instruction<0x1E>(0x000099, 3); return true;
    // src/battle/menu_handler.asm:375 STA __BSS_START__,Y
    case 0xC234D6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:375 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC234D5.
    case 0xC234D8: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/menu_handler.asm:376 REP #PROC_FLAGS::ACCUM8
    case 0xC234D9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:377 AND #$00FF
    case 0xC234DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:377 AND #$00FF
    // Overlapping static entry reached from 0xC234DB.
    case 0xC234DD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:378 BNEL @UNKNOWN21
    case 0xC234DE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:378 BNEL @UNKNOWN21
    case 0xC234E0: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:379 LDX #6
    case 0xC234E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:379 LDX #6
    // Overlapping static entry reached from 0xC234E3.
    case 0xC234E5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:380 LDA #0
    case 0xC234E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:380 LDA #0
    // Overlapping static entry reached from 0xC234E6.
    case 0xC234E8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:381 JSL AUTOHEALING
    case 0xC234E9: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:382 SEP #PROC_FLAGS::ACCUM8
    case 0xC234ED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:383 LDY @LOCAL05
    case 0xC234EF: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:384 STA __BSS_START__,Y
    case 0xC234F1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:385 REP #PROC_FLAGS::ACCUM8
    case 0xC234F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:386 AND #$00FF
    case 0xC234F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:386 AND #$00FF
    // Overlapping static entry reached from 0xC234F6.
    case 0xC234F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:387 BNEL @UNKNOWN21
    case 0xC234F9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:387 BNEL @UNKNOWN21
    case 0xC234FB: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:388 LDX #1
    case 0xC234FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:388 LDX #1
    // Overlapping static entry reached from 0xC234FE.
    case 0xC23500: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:389 LDA #2
    case 0xC23501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:389 LDA #2
    // Overlapping static entry reached from 0xC23501.
    case 0xC23503: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:390 JSL AUTOHEALING
    case 0xC23504: cpu.execute_instruction<0x22>(0xC4A0CF, 4); return true;
    // src/battle/menu_handler.asm:391 SEP #PROC_FLAGS::ACCUM8
    case 0xC23508: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:392 LDY @LOCAL05
    case 0xC2350A: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:393 STA __BSS_START__,Y
    case 0xC2350C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:394 REP #PROC_FLAGS::ACCUM8
    case 0xC2350F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:395 AND #$00FF
    case 0xC23511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:395 AND #$00FF
    // Overlapping static entry reached from 0xC23511.
    case 0xC23513: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:396 BNEL @UNKNOWN21
    case 0xC23514: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:396 BNEL @UNKNOWN21
    case 0xC23516: cpu.execute_instruction<0x4C>(0x003326, 3); return true;
    // src/battle/menu_handler.asm:398 LDA @LOCAL06
    case 0xC23519: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:399 BEQ @UNKNOWN39
    case 0xC2351B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/menu_handler.asm:400 CMP #1
    case 0xC2351D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:400 CMP #1
    // Overlapping static entry reached from 0xC2351D.
    case 0xC2351F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:401 BEQ @UNKNOWN40
    case 0xC23520: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/menu_handler.asm:402 CMP #2
    case 0xC23522: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:402 CMP #2
    // Overlapping static entry reached from 0xC23522.
    case 0xC23524: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:403 BEQ @UNKNOWN41
    case 0xC23525: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/menu_handler.asm:404 BRA @UNKNOWN42
    case 0xC23527: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:406 LDA #4
    case 0xC23529: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:406 LDA #4
    // Overlapping static entry reached from 0xC23529.
    case 0xC2352B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:407 STA @LOCAL03
    case 0xC2352C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:408 BRA @UNKNOWN42
    case 0xC2352E: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/menu_handler.asm:410 LDA #5
    case 0xC23530: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/battle/menu_handler.asm:410 LDA #5
    // Overlapping static entry reached from 0xC23530.
    case 0xC23532: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:411 STA @LOCAL03
    case 0xC23533: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:412 BRA @UNKNOWN42
    case 0xC23535: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:414 LDA #1
    case 0xC23537: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:414 LDA #1
    // Overlapping static entry reached from 0xC23537.
    case 0xC23539: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/menu_handler.asm:415 JMP @UNKNOWN113
    case 0xC2353A: cpu.execute_instruction<0x4C>(0x003B64, 3); return true;
    // src/battle/menu_handler.asm:417 LDA @LOCAL09
    case 0xC2353D: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC2353F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:419 STA BATTLE_MENU_SELECTION
    case 0xC23541: cpu.execute_instruction<0x8D>(0x00A97D, 3); return true;
    // src/battle/menu_handler.asm:420 STZ BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23544: cpu.execute_instruction<0x9C>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:421 REP #PROC_FLAGS::ACCUM8
    case 0xC23547: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:422 LDA @LOCAL03
    case 0xC23549: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:423 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2354B: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:424 SEP #PROC_FLAGS::ACCUM8
    case 0xC2354E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:425 LDA #17
    case 0xC23550: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/battle/menu_handler.asm:426 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23552: cpu.execute_instruction<0x8D>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:426 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23550.
    case 0xC23553: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:427 REP #PROC_FLAGS::ACCUM8
    case 0xC23555: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:428 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC23557: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/battle/menu_handler.asm:429 CLC
    case 0xC2355A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:430 ADC NUM_BATTLERS_IN_BACK_ROW
    case 0xC2355B: cpu.execute_instruction<0x6D>(0x00AD58, 3); return true;
    // src/battle/menu_handler.asm:431 JSR RAND_LIMIT
    case 0xC2355E: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/menu_handler.asm:432 SEP #PROC_FLAGS::ACCUM8
    case 0xC23561: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:433 INC
    case 0xC23563: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:434 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23564: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:435 REP #PROC_FLAGS::ACCUM8
    case 0xC23567: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:436 LDA @LOCAL03
    case 0xC23569: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:437 JMP @UNKNOWN113
    case 0xC2356B: cpu.execute_instruction<0x4C>(0x003B64, 3); return true;
    // src/battle/menu_handler.asm:439 JSL UNKNOWN_EF0262
    case 0xC2356E: cpu.execute_instruction<0x22>(0xEF0262, 4); return true;
    // src/battle/menu_handler.asm:440 LDA @LOCAL09
    case 0xC23572: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:441 CMP #PARTY_MEMBER::PAULA
    case 0xC23574: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:441 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC23574.
    case 0xC23576: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:442 BEQ @UNKNOWN44
    case 0xC23577: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:443 LDA @LOCAL09
    case 0xC23579: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:444 CMP #PARTY_MEMBER::POO
    case 0xC2357B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:444 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2357B.
    case 0xC2357D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:445 BNE @UNKNOWN45
    case 0xC2357E: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:447 LDA #1
    case 0xC23580: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:447 LDA #1
    // Overlapping static entry reached from 0xC23580.
    case 0xC23582: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:448 STA @LOCAL03
    case 0xC23583: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:449 BRA @UNKNOWN46
    case 0xC23585: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:451 STZ @LOCAL03
    case 0xC23587: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:453 LDA @VIRTUAL04
    case 0xC23589: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:454 BNE @UNKNOWN47
    case 0xC2358B: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:455 INC @LOCAL03
    case 0xC2358D: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC2358F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x00A1F2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2358F.
    case 0xC23591: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC23592: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC23591.
    case 0xC23593: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC23594: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC23593.
    case 0xC23595: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC23594.
    case 0xC23596: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC23597: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:458 LDA @LOCAL03
    case 0xC23599: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:459 CLC
    case 0xC2359B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:460 ADC @VIRTUAL06
    case 0xC2359C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:461 STA @VIRTUAL06
    case 0xC2359E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:462 STA @LOCAL02
    case 0xC235A0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/menu_handler.asm:463 LDA @VIRTUAL06+2
    case 0xC235A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:464 STA @LOCAL02+2
    case 0xC235A4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/menu_handler.asm:465 LDA [@VIRTUAL06]
    case 0xC235A6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:466 AND #$00FF
    case 0xC235A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:466 AND #$00FF
    // Overlapping static entry reached from 0xC235A8.
    case 0xC235AA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:467 JSL REDIRECT_CREATE_WINDOW
    case 0xC235AB: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // src/battle/menu_handler.asm:468 LDA @LOCAL09
    case 0xC235AF: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:469 DEC
    case 0xC235B1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:470 LDY #.SIZEOF(char_struct)
    case 0xC235B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/menu_handler.asm:470 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC235B2.
    case 0xC235B4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:471 JSL MULT168
    case 0xC235B5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/menu_handler.asm:472 CLC
    case 0xC235B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:473 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC235BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/battle/menu_handler.asm:473 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC235BA.
    case 0xC235BC: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235BF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/menu_handler.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC235C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235C9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/menu_handler.asm:477 LDX #5
    case 0xC235D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/battle/menu_handler.asm:477 LDX #5
    // Overlapping static entry reached from 0xC235D1.
    case 0xC235D3: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235D4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235D6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235D8: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235DA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:479 LDA [@VIRTUAL06]
    case 0xC235DC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:480 AND #$00FF
    case 0xC235DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:480 AND #$00FF
    // Overlapping static entry reached from 0xC235DE.
    case 0xC235E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:481 JSL SET_WINDOW_TITLE
    case 0xC235E1: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/battle/menu_handler.asm:482 LDA @LOCAL06
    case 0xC235E5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:483 BEQ @UNKNOWN48
    case 0xC235E7: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/menu_handler.asm:484 CMP #1
    case 0xC235E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:484 CMP #1
    // Overlapping static entry reached from 0xC235E9.
    case 0xC235EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:485 BEQ @UNKNOWN49
    case 0xC235EC: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/menu_handler.asm:486 CMP #2
    case 0xC235EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:486 CMP #2
    // Overlapping static entry reached from 0xC235EE.
    case 0xC235F0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:487 BEQ @UNKNOWN50
    case 0xC235F1: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/battle/menu_handler.asm:488 BRA @UNKNOWN51
    case 0xC235F3: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x009FE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC235F5.
    case 0xC235F7: cpu.execute_instruction<0x9F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC235F7.
    case 0xC235FB: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC235FA.
    case 0xC235FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235FD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC235FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC235FF.
    case 0xC23601: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23602: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23604: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23604.
    case 0xC23606: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23607: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:492 LDY #0
    case 0xC23609: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:492 LDY #0
    // Overlapping static entry reached from 0xC23609.
    case 0xC2360B: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/menu_handler.asm:493 TYX
    case 0xC2360C: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:494 LDA #1
    case 0xC2360D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:494 LDA #1
    // Overlapping static entry reached from 0xC2360D.
    case 0xC2360F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:495 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23610: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:496 BRA @UNKNOWN51
    case 0xC23614: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23616: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x00A041, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC23616.
    case 0xC23618: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23619: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC23618.
    case 0xC2361A: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2361B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC2361B.
    case 0xC2361D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2361E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23620: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23620.
    case 0xC23622: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23623: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23625.
    case 0xC23627: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23628: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:500 LDY #0
    case 0xC2362A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:500 LDY #0
    // Overlapping static entry reached from 0xC2362A.
    case 0xC2362C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/menu_handler.asm:501 TYX
    case 0xC2362D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:502 LDA #1
    case 0xC2362E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:502 LDA #1
    // Overlapping static entry reached from 0xC2362E.
    case 0xC23630: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:503 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23631: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:504 BRA @UNKNOWN51
    case 0xC23635: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC23637: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x00A081, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC23637.
    case 0xC23639: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2363A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC23639.
    case 0xC2363B: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2363C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC2363C.
    case 0xC2363E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2363F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23641: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23641.
    case 0xC23643: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23644: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23646: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23646.
    case 0xC23648: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23649: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:508 LDY #0
    case 0xC2364B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:508 LDY #0
    // Overlapping static entry reached from 0xC2364B.
    case 0xC2364D: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/menu_handler.asm:509 TYX
    case 0xC2364E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:510 LDA #1
    case 0xC2364F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:510 LDA #1
    // Overlapping static entry reached from 0xC2364F.
    case 0xC23651: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:511 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23652: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:513 LDA @LOCAL06
    case 0xC23656: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:514 CMP #2
    case 0xC23658: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:514 CMP #2
    // Overlapping static entry reached from 0xC23658.
    case 0xC2365A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:515 BEQL @UNKNOWN53
    case 0xC2365B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:515 BEQL @UNKNOWN53
    case 0xC2365D: cpu.execute_instruction<0x4C>(0x0036E2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23660: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x009FE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23660.
    case 0xC23662: cpu.execute_instruction<0x9F>(0xA90A85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23663: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23662.
    case 0xC23666: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23665.
    case 0xC23667: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23668: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2366A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC2366A.
    case 0xC2366C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2366D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2366F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC2366F.
    case 0xC23671: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC23672: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23674: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23676: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23678: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2367A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/menu_handler.asm:519 LDA #16
    case 0xC2367C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/menu_handler.asm:519 LDA #16
    // Overlapping static entry reached from 0xC2367C.
    case 0xC2367E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2367F: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC23681: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC23683: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC23685: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:521 CLC
    case 0xC23687: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:522 ADC @VIRTUAL06
    case 0xC23688: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:523 STA @VIRTUAL06
    case 0xC2368A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:524 STA @LOCAL00
    case 0xC2368C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler.asm:525 LDA @VIRTUAL06+2
    case 0xC2368E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:526 STA @LOCAL00+2
    case 0xC23690: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23692: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23694: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23696: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23698: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2369A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2369C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2369E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236A0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:529 LDY #0
    case 0xC236A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:529 LDY #0
    // Overlapping static entry reached from 0xC236A2.
    case 0xC236A4: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler.asm:530 LDX #6
    case 0xC236A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:530 LDX #6
    // Overlapping static entry reached from 0xC236A5.
    case 0xC236A7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:531 LDA #2
    case 0xC236A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:531 LDA #2
    // Overlapping static entry reached from 0xC236A8.
    case 0xC236AA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:532 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236AB: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:533 LDA #64
    case 0xC236AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/battle/menu_handler.asm:533 LDA #64
    // Overlapping static entry reached from 0xC236AF.
    case 0xC236B1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B2: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B4: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B6: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B8: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:535 CLC
    case 0xC236BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:536 ADC @VIRTUAL06
    case 0xC236BB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:537 STA @VIRTUAL06
    case 0xC236BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:538 STA @LOCAL00
    case 0xC236BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler.asm:539 LDA @VIRTUAL06+2
    case 0xC236C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:540 STA @LOCAL00+2
    case 0xC236C3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236C5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236C9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236CB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236CF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236D3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:543 LDY #1
    case 0xC236D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:543 LDY #1
    // Overlapping static entry reached from 0xC236D5.
    case 0xC236D7: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler.asm:544 LDX #6
    case 0xC236D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:544 LDX #6
    // Overlapping static entry reached from 0xC236D8.
    case 0xC236DA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:545 LDA #5
    case 0xC236DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/battle/menu_handler.asm:545 LDA #5
    // Overlapping static entry reached from 0xC236DB.
    case 0xC236DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:546 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236DE: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:548 LDA @VIRTUAL04
    case 0xC236E2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:549 BNEL @UNKNOWN59
    case 0xC236E4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:549 BNEL @UNKNOWN59
    case 0xC236E6: cpu.execute_instruction<0x4C>(0x003784, 3); return true;
    // src/battle/menu_handler.asm:550 LDA @LOCAL03
    case 0xC236E9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:551 CMP #2
    case 0xC236EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:551 CMP #2
    // Overlapping static entry reached from 0xC236EB.
    case 0xC236ED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:552 BNE @UNKNOWN55
    case 0xC236EE: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/menu_handler.asm:553 LDX #16
    case 0xC236F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/battle/menu_handler.asm:553 LDX #16
    // Overlapping static entry reached from 0xC236F0.
    case 0xC236F2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/menu_handler.asm:554 BRA @UNKNOWN56
    case 0xC236F3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/menu_handler.asm:556 LDX #11
    case 0xC236F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000B, 2); else cpu.execute_instruction<0xA2>(0x00000B, 3); return true;
    // src/battle/menu_handler.asm:556 LDX #11
    // Overlapping static entry reached from 0xC236F5.
    case 0xC236F7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/menu_handler.asm:558 STX @VIRTUAL04
    case 0xC236F8: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:559 LDA @LOCAL09
    case 0xC236FA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:560 CMP #PARTY_MEMBER::PAULA
    case 0xC236FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:560 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC236FC.
    case 0xC236FE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:561 BEQ @UNKNOWN57
    case 0xC236FF: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:562 LDA @LOCAL09
    case 0xC23701: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:563 CMP #PARTY_MEMBER::POO
    case 0xC23703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:563 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23703.
    case 0xC23705: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:564 BNE @UNKNOWN58
    case 0xC23706: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:566 INC @VIRTUAL04
    case 0xC23708: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:567 INC @VIRTUAL04
    case 0xC2370A: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2370C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x009FE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2370C.
    case 0xC2370E: cpu.execute_instruction<0x9F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2370F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23711: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2370E.
    case 0xC23712: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23711.
    case 0xC23713: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23714: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23716: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23718: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2371A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2371C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2371E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2371E.
    case 0xC23720: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23721: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23723: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23723.
    case 0xC23725: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23726: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/menu_handler.asm:572 LDA #32
    case 0xC23728: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/battle/menu_handler.asm:572 LDA #32
    // Overlapping static entry reached from 0xC23728.
    case 0xC2372A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/menu_handler.asm:573 CLC
    case 0xC2372B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:574 ADC @VIRTUAL06
    case 0xC2372C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:575 STA @VIRTUAL06
    case 0xC2372E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:576 STA @LOCAL00
    case 0xC23730: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler.asm:577 LDA @VIRTUAL06+2
    case 0xC23732: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:578 STA @LOCAL00+2
    case 0xC23734: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC23736: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC23738: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2373A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2373C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2373E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23740: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23742: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23744: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:581 LDY #0
    case 0xC23746: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:581 LDY #0
    // Overlapping static entry reached from 0xC23746.
    case 0xC23748: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/menu_handler.asm:582 LDX @VIRTUAL04
    case 0xC23749: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:583 LDA #3
    case 0xC2374B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:583 LDA #3
    // Overlapping static entry reached from 0xC2374B.
    case 0xC2374D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:584 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2374E: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:585 LDA #128
    case 0xC23752: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/menu_handler.asm:585 LDA #128
    // Overlapping static entry reached from 0xC23752.
    case 0xC23754: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23755: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23757: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23759: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC2375B: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:587 CLC
    case 0xC2375D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:588 ADC @VIRTUAL06
    case 0xC2375E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:589 STA @VIRTUAL06
    case 0xC23760: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:590 STA @LOCAL00
    case 0xC23762: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/menu_handler.asm:591 LDA @VIRTUAL06+2
    case 0xC23764: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/menu_handler.asm:592 STA @LOCAL00+2
    case 0xC23766: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC23768: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2376A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2376C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2376E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23770: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23772: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23774: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23776: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:595 LDY #1
    case 0xC23778: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:595 LDY #1
    // Overlapping static entry reached from 0xC23778.
    case 0xC2377A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/menu_handler.asm:596 LDX @VIRTUAL04
    case 0xC2377B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:597 LDA #6
    case 0xC2377D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:597 LDA #6
    // Overlapping static entry reached from 0xC2377D.
    case 0xC2377F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:598 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23780: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:600 LDA @LOCAL09
    case 0xC23784: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:601 CMP #PARTY_MEMBER::JEFF
    case 0xC23786: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:601 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC23786.
    case 0xC23788: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:602 BNE @UNKNOWN60
    case 0xC23789: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC2378B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x00A051, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC2378B.
    case 0xC2378D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC2378E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC2378D.
    case 0xC2378F: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23790: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23790.
    case 0xC23792: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23793: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23795: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23795.
    case 0xC23797: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23798: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2379A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2379A.
    case 0xC2379C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2379D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:605 LDY #1
    case 0xC2379F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:605 LDY #1
    // Overlapping static entry reached from 0xC2379F.
    case 0xC237A1: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler.asm:606 LDX #0
    case 0xC237A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:606 LDX #0
    // Overlapping static entry reached from 0xC237A2.
    case 0xC237A4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:607 LDA #4
    case 0xC237A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:607 LDA #4
    // Overlapping static entry reached from 0xC237A5.
    case 0xC237A7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:608 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC237A8: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:609 BRA @UNKNOWN61
    case 0xC237AC: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/battle/menu_handler.asm:611 LDY #char_struct::afflictions+4
    case 0xC237AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/menu_handler.asm:611 LDY #char_struct::afflictions+4
    // Overlapping static entry reached from 0xC237AE.
    case 0xC237B0: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/battle/menu_handler.asm:612 LDA (@LOCAL07),Y
    case 0xC237B1: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:613 AND #$00FF
    case 0xC237B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:613 AND #$00FF
    // Overlapping static entry reached from 0xC237B3.
    case 0xC237B5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:614 BNE @UNKNOWN61
    case 0xC237B6: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00A011, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC237B8.
    case 0xC237BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC237BA.
    case 0xC237BC: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC237BD.
    case 0xC237BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237C2.
    case 0xC237C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237C5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237C7.
    case 0xC237C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237CA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:617 LDY #1
    case 0xC237CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:617 LDY #1
    // Overlapping static entry reached from 0xC237CC.
    case 0xC237CE: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler.asm:618 LDX #0
    case 0xC237CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:618 LDX #0
    // Overlapping static entry reached from 0xC237CF.
    case 0xC237D1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:619 LDA #4
    case 0xC237D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:619 LDA #4
    // Overlapping static entry reached from 0xC237D2.
    case 0xC237D4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:620 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC237D5: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:622 LDA @LOCAL09
    case 0xC237D9: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:623 CMP #PARTY_MEMBER::PAULA
    case 0xC237DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:623 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC237DB.
    case 0xC237DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:624 BNE @UNKNOWN62
    case 0xC237DE: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x00A031, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC237E0.
    case 0xC237E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC237E2.
    case 0xC237E4: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC237E5.
    case 0xC237E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237EA.
    case 0xC237EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237ED: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237EF.
    case 0xC237F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237F2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:627 LDY #0
    case 0xC237F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:627 LDY #0
    // Overlapping static entry reached from 0xC237F4.
    case 0xC237F6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler.asm:628 LDX #11
    case 0xC237F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000B, 2); else cpu.execute_instruction<0xA2>(0x00000B, 3); return true;
    // src/battle/menu_handler.asm:628 LDX #11
    // Overlapping static entry reached from 0xC237F7.
    case 0xC237F9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:629 LDA #7
    case 0xC237FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/menu_handler.asm:629 LDA #7
    // Overlapping static entry reached from 0xC237FA.
    case 0xC237FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:630 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC237FD: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:632 LDA @LOCAL09
    case 0xC23801: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:633 CMP #PARTY_MEMBER::POO
    case 0xC23803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:633 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23803.
    case 0xC23805: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:634 BNE @UNKNOWN63
    case 0xC23806: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC23808: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000071, 2); else cpu.execute_instruction<0xA9>(0x00A071, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC23808.
    case 0xC2380A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC2380B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC2380A.
    case 0xC2380C: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC2380D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC2380D.
    case 0xC2380F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC23810: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23812: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23812.
    case 0xC23814: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23815: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23817: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23817.
    case 0xC23819: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2381A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:637 LDY #0
    case 0xC2381C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:637 LDY #0
    // Overlapping static entry reached from 0xC2381C.
    case 0xC2381E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/menu_handler.asm:638 LDX #13
    case 0xC2381F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000D, 2); else cpu.execute_instruction<0xA2>(0x00000D, 3); return true;
    // src/battle/menu_handler.asm:638 LDX #13
    // Overlapping static entry reached from 0xC2381F.
    case 0xC23821: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:639 LDA #7
    case 0xC23822: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/menu_handler.asm:639 LDA #7
    // Overlapping static entry reached from 0xC23822.
    case 0xC23824: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:640 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23825: cpu.execute_instruction<0x22>(0xC1DDDA, 4); return true;
    // src/battle/menu_handler.asm:642 LDX @LOCAL03
    case 0xC23829: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:643 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC2382B: cpu.execute_instruction<0xBF>(0xC4A1F2, 4); return true;
    // src/battle/menu_handler.asm:643 LDA f:BATTLE_WINDOW_SIZES,X
    // Overlapping static entry reached from 0xC2385C.
    case 0xC2382E: cpu.execute_instruction<0xC4>(0x000029, 2); return true;
    // src/battle/menu_handler.asm:644 AND #$00FF
    case 0xC2382F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:644 AND #$00FF
    // Overlapping static entry reached from 0xC2382E.
    case 0xC23830: cpu.execute_instruction<0xFF>(0x4D2200, 4); return true;
    // src/battle/menu_handler.asm:644 AND #$00FF
    // Overlapping static entry reached from 0xC2382F.
    case 0xC23831: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:645 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC23832: cpu.execute_instruction<0x22>(0xC1DD4D, 4); return true;
    // src/battle/menu_handler.asm:645 JSL REDIRECT_SET_WINDOW_FOCUS
    // Overlapping static entry reached from 0xC23830.
    case 0xC23834: cpu.execute_instruction<0xDD>(0x00A5C1, 3); return true;
    // src/battle/menu_handler.asm:646 LDA @LOCAL08
    case 0xC23836: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/menu_handler.asm:646 LDA @LOCAL08
    // Overlapping static entry reached from 0xC23834.
    case 0xC23837: cpu.execute_instruction<0x24>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:647 BNE @UNKNOWN64
    case 0xC23838: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:647 BNE @UNKNOWN64
    // Overlapping static entry reached from 0xC23837.
    case 0xC23839: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:648 JSL REDIRECT_PRINT_MENU_ITEMS
    case 0xC2383A: cpu.execute_instruction<0x22>(0xC1DE25, 4); return true;
    // src/battle/menu_handler.asm:648 JSL REDIRECT_PRINT_MENU_ITEMS
    // Overlapping static entry reached from 0xC23839.
    case 0xC2383B: cpu.execute_instruction<0x25>(0x0000DE, 2); return true;
    // src/battle/menu_handler.asm:648 JSL REDIRECT_PRINT_MENU_ITEMS
    // Overlapping static entry reached from 0xC2383B.
    case 0xC2383D: cpu.execute_instruction<0xC1>(0x0000E6, 2); return true;
    // src/battle/menu_handler.asm:650 INC @LOCAL08
    case 0xC2383E: cpu.execute_instruction<0xE6>(0x000024, 2); return true;
    // src/battle/menu_handler.asm:650 INC @LOCAL08
    // Overlapping static entry reached from 0xC2383D.
    case 0xC2383F: cpu.execute_instruction<0x24>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:651 LDA #1
    case 0xC23840: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:651 LDA #1
    // Overlapping static entry reached from 0xC2383F.
    case 0xC23841: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/menu_handler.asm:651 LDA #1
    // Overlapping static entry reached from 0xC23840.
    case 0xC23842: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:652 JSL REDIRECT_SELECTION_MENU
    case 0xC23843: cpu.execute_instruction<0x22>(0xC1DE2B, 4); return true;
    // src/battle/menu_handler.asm:653 CMP #0
    case 0xC23847: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:653 CMP #0
    // Overlapping static entry reached from 0xC23847.
    case 0xC23849: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:654 BNEL @UNKNOWN74
    case 0xC2384A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:654 BNEL @UNKNOWN74
    case 0xC2384C: cpu.execute_instruction<0x4C>(0x0038D9, 3); return true;
    // src/battle/menu_handler.asm:655 LDA DEBUG
    case 0xC2384F: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/battle/menu_handler.asm:656 BEQ @UNKNOWN67
    case 0xC23852: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/menu_handler.asm:657 LDA PAD_STATE
    case 0xC23854: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler.asm:658 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC23857: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x003000, 3); return true;
    // src/battle/menu_handler.asm:658 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC23857.
    case 0xC23859: cpu.execute_instruction<0x30>(0x0000C9, 2); return true;
    // src/battle/menu_handler.asm:659 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC2385A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003000, 3); return true;
    // src/battle/menu_handler.asm:659 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC23859.
    case 0xC2385B: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/battle/menu_handler.asm:659 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2385A.
    case 0xC2385C: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:660 BNE @UNKNOWN66
    case 0xC2385D: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/menu_handler.asm:660 BNE @UNKNOWN66
    // Overlapping static entry reached from 0xC2385C.
    case 0xC2385E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:661 JSL RESUME_MUSIC
    case 0xC2385F: cpu.execute_instruction<0x22>(0xEF026E, 4); return true;
    // src/battle/menu_handler.asm:662 LDA #$FFFF
    case 0xC23863: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/menu_handler.asm:662 LDA #$FFFF
    // Overlapping static entry reached from 0xC23863.
    case 0xC23865: cpu.execute_instruction<0xFF>(0x3B644C, 4); return true;
    // src/battle/menu_handler.asm:663 JMP @UNKNOWN113
    case 0xC23866: cpu.execute_instruction<0x4C>(0x003B64, 3); return true;
    // src/battle/menu_handler.asm:665 LDA PAD_STATE
    case 0xC23869: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler.asm:666 AND #PAD::R_BUTTON
    case 0xC2386C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/battle/menu_handler.asm:666 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC2386C.
    case 0xC2386E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:667 BEQ @UNKNOWN67
    case 0xC2386F: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/menu_handler.asm:668 JSL UNKNOWN_E14DE8
    case 0xC23871: cpu.execute_instruction<0x22>(0xE14DE8, 4); return true;
    // src/battle/menu_handler.asm:669 BRA @UNKNOWN63
    case 0xC23875: cpu.execute_instruction<0x80>(0x0000B2, 2); return true;
    // src/battle/menu_handler.asm:671 LDA BATTLE_MODE
    case 0xC23877: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/battle/menu_handler.asm:672 BNE @UNKNOWN73
    case 0xC2387A: cpu.execute_instruction<0xD0>(0x000053, 2); return true;
    // src/battle/menu_handler.asm:673 LDA PAD_STATE
    case 0xC2387C: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler.asm:674 AND #PAD::L_BUTTON
    case 0xC2387F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/battle/menu_handler.asm:674 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC2387F.
    case 0xC23881: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:675 BEQ @UNKNOWN72
    case 0xC23882: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/battle/menu_handler.asm:676 JSL DEBUG_SET_CHAR_LEVEL
    case 0xC23884: cpu.execute_instruction<0x22>(0xC13E7A, 4); return true;
    // src/battle/menu_handler.asm:677 LDY #0
    case 0xC23888: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:677 LDY #0
    // Overlapping static entry reached from 0xC23888.
    case 0xC2388A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/menu_handler.asm:678 STY @LOCAL07
    case 0xC2388B: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:679 BRA @UNKNOWN71
    case 0xC2388D: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/menu_handler.asm:681 LDA GAME_STATE + game_state::party_members,Y
    case 0xC2388F: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/battle/menu_handler.asm:682 AND #$00FF
    case 0xC23892: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:682 AND #$00FF
    // Overlapping static entry reached from 0xC23892.
    case 0xC23894: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:683 STA @LOCAL04
    case 0xC23895: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:684 BEQ @UNKNOWN70
    case 0xC23897: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:685 CMP #4
    case 0xC23899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:685 CMP #4
    // Overlapping static entry reached from 0xC23899.
    case 0xC2389B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:686 BGT @UNKNOWN70
    case 0xC2389C: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:686 BGT @UNKNOWN70
    case 0xC2389E: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/battle/menu_handler.asm:687 TYA
    case 0xC238A0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:688 LDY #.SIZEOF(battler)
    case 0xC238A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/menu_handler.asm:688 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC238A1.
    case 0xC238A3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:689 JSL MULT168
    case 0xC238A4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/menu_handler.asm:690 CLC
    case 0xC238A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:691 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC238A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/menu_handler.asm:691 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC238A9.
    case 0xC238AB: cpu.execute_instruction<0x9F>(0x1CA5AA, 4); return true;
    // src/battle/menu_handler.asm:692 TAX
    case 0xC238AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:693 LDA @LOCAL04
    case 0xC238AD: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:694 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC238AF: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // src/battle/menu_handler.asm:696 LDY @LOCAL07
    case 0xC238B3: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:697 INY
    case 0xC238B5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:698 STY @LOCAL07
    case 0xC238B6: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:700 CPY #6
    case 0xC238B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:700 CPY #6
    // Overlapping static entry reached from 0xC238B8.
    case 0xC238BA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/menu_handler.asm:701 BCC @UNKNOWN68
    case 0xC238BB: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // src/battle/menu_handler.asm:702 JMP @UNKNOWN63
    case 0xC238BD: cpu.execute_instruction<0x4C>(0x003829, 3); return true;
    // src/battle/menu_handler.asm:704 LDA PAD_STATE
    case 0xC238C0: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/battle/menu_handler.asm:705 AND #PAD::SELECT_BUTTON
    case 0xC238C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/battle/menu_handler.asm:705 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC238C3.
    case 0xC238C5: cpu.execute_instruction<0x20>(0x0007F0, 3); return true;
    // src/battle/menu_handler.asm:706 BEQ @UNKNOWN73
    case 0xC238C6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:707 JSL DEBUG_Y_BUTTON_GOODS
    case 0xC238C8: cpu.execute_instruction<0x22>(0xC13EE7, 4); return true;
    // src/battle/menu_handler.asm:708 JMP @UNKNOWN63
    case 0xC238CC: cpu.execute_instruction<0x4C>(0x003829, 3); return true;
    // src/battle/menu_handler.asm:710 JSL RESUME_MUSIC
    case 0xC238CF: cpu.execute_instruction<0x22>(0xEF026E, 4); return true;
    // src/battle/menu_handler.asm:711 LDA #0
    case 0xC238D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:711 LDA #0
    // Overlapping static entry reached from 0xC238D3.
    case 0xC238D5: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/menu_handler.asm:712 JMP @UNKNOWN113
    case 0xC238D6: cpu.execute_instruction<0x4C>(0x003B64, 3); return true;
    // src/battle/menu_handler.asm:714 SEP #PROC_FLAGS::ACCUM8
    case 0xC238D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:715 STZ BATTLE_ITEM_USED
    case 0xC238DB: cpu.execute_instruction<0x9C>(0x00A97C, 3); return true;
    // src/battle/menu_handler.asm:716 REP #PROC_FLAGS::ACCUM8
    case 0xC238DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:717 CMP #1
    case 0xC238E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:717 CMP #1
    // Overlapping static entry reached from 0xC238E0.
    case 0xC238E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:718 BEQ @UNKNOWN81
    case 0xC238E3: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/battle/menu_handler.asm:719 CMP #2
    case 0xC238E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:719 CMP #2
    // Overlapping static entry reached from 0xC238E5.
    case 0xC238E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:720 BEQL @UNKNOWN88
    case 0xC238E8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:720 BEQL @UNKNOWN88
    case 0xC238EA: cpu.execute_instruction<0x4C>(0x003979, 3); return true;
    // src/battle/menu_handler.asm:721 CMP #3
    case 0xC238ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:721 CMP #3
    // Overlapping static entry reached from 0xC238ED.
    case 0xC238EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:722 BEQL @UNKNOWN90
    case 0xC238F0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:722 BEQL @UNKNOWN90
    case 0xC238F2: cpu.execute_instruction<0x4C>(0x0039AD, 3); return true;
    // src/battle/menu_handler.asm:723 CMP #4
    case 0xC238F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:723 CMP #4
    // Overlapping static entry reached from 0xC238F5.
    case 0xC238F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:724 BEQL @UNKNOWN91
    case 0xC238F8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:724 BEQL @UNKNOWN91
    case 0xC238FA: cpu.execute_instruction<0x4C>(0x0039C2, 3); return true;
    // src/battle/menu_handler.asm:725 CMP #5
    case 0xC238FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/menu_handler.asm:725 CMP #5
    // Overlapping static entry reached from 0xC238FD.
    case 0xC238FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:726 BEQL @UNKNOWN95
    case 0xC23900: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:726 BEQL @UNKNOWN95
    case 0xC23902: cpu.execute_instruction<0x4C>(0x003A23, 3); return true;
    // src/battle/menu_handler.asm:727 CMP #6
    case 0xC23905: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:727 CMP #6
    // Overlapping static entry reached from 0xC23905.
    case 0xC23907: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:728 BEQL @UNKNOWN96
    case 0xC23908: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:728 BEQL @UNKNOWN96
    case 0xC2390A: cpu.execute_instruction<0x4C>(0x003A37, 3); return true;
    // src/battle/menu_handler.asm:729 CMP #7
    case 0xC2390D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/menu_handler.asm:729 CMP #7
    // Overlapping static entry reached from 0xC2390D.
    case 0xC2390F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:730 BEQL @UNKNOWN97
    case 0xC23910: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:730 BEQL @UNKNOWN97
    case 0xC23912: cpu.execute_instruction<0x4C>(0x003A58, 3); return true;
    // src/battle/menu_handler.asm:731 JMP @UNKNOWN112
    case 0xC23915: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:733 LDA @LOCAL06
    case 0xC23918: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:734 BEQ @UNKNOWN82
    case 0xC2391A: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/menu_handler.asm:735 CMP #1
    case 0xC2391C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:735 CMP #1
    // Overlapping static entry reached from 0xC2391C.
    case 0xC2391E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:736 BEQ @UNKNOWN83
    case 0xC2391F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/menu_handler.asm:737 CMP #2
    case 0xC23921: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:737 CMP #2
    // Overlapping static entry reached from 0xC23921.
    case 0xC23923: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:738 BEQ @UNKNOWN84
    case 0xC23924: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/menu_handler.asm:739 BRA @UNKNOWN85
    case 0xC23926: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/battle/menu_handler.asm:741 LDA #BATTLE_ACTIONS::BASH
    case 0xC23928: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:741 LDA #BATTLE_ACTIONS::BASH
    // Overlapping static entry reached from 0xC23928.
    case 0xC2392A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:742 STA @VIRTUAL02
    case 0xC2392B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:743 STA @LOCAL05
    case 0xC2392D: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:744 BRA @UNKNOWN85
    case 0xC2392F: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/menu_handler.asm:746 LDA #BATTLE_ACTIONS::SHOOT
    case 0xC23931: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/battle/menu_handler.asm:746 LDA #BATTLE_ACTIONS::SHOOT
    // Overlapping static entry reached from 0xC23931.
    case 0xC23933: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:747 STA @VIRTUAL02
    case 0xC23934: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:748 STA @LOCAL05
    case 0xC23936: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:749 BRA @UNKNOWN85
    case 0xC23938: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:751 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC2393A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:751 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC2393A.
    case 0xC2393C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:752 STA @VIRTUAL02
    case 0xC2393D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:753 STA @LOCAL05
    case 0xC2393F: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:755 LDA @LOCAL05
    case 0xC23941: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:756 STA @VIRTUAL02
    case 0xC23943: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:757 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23945: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:758 SEP #PROC_FLAGS::ACCUM8
    case 0xC23948: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:759 LDA #17
    case 0xC2394A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/battle/menu_handler.asm:760 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC2394C: cpu.execute_instruction<0x8D>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:760 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC2394A.
    case 0xC2394D: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:761 REP #PROC_FLAGS::ACCUM8
    case 0xC2394F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:762 LDA @LOCAL06
    case 0xC23951: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:763 CMP #2
    case 0xC23953: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:763 CMP #2
    // Overlapping static entry reached from 0xC23953.
    case 0xC23955: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:764 BEQL @UNKNOWN112
    case 0xC23956: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:764 BEQL @UNKNOWN112
    case 0xC23958: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:765 LDY @VIRTUAL02
    case 0xC2395B: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:766 LDX #1
    case 0xC2395D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:766 LDX #1
    // Overlapping static entry reached from 0xC2395D.
    case 0xC2395F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:767 LDA #0
    case 0xC23960: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:767 LDA #0
    // Overlapping static entry reached from 0xC23960.
    case 0xC23962: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:768 JSL REDIRECT_C1242E
    case 0xC23963: cpu.execute_instruction<0x22>(0xC1DE37, 4); return true;
    // src/battle/menu_handler.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC23967: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:770 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23969: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:771 REP #PROC_FLAGS::ACCUM8
    case 0xC2396C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:772 AND #$00FF
    case 0xC2396E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:772 AND #$00FF
    // Overlapping static entry reached from 0xC2396E.
    case 0xC23970: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:773 BEQL @UNKNOWN63
    case 0xC23971: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:773 BEQL @UNKNOWN63
    case 0xC23973: cpu.execute_instruction<0x4C>(0x003829, 3); return true;
    // src/battle/menu_handler.asm:774 JMP @UNKNOWN112
    case 0xC23976: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:776 LDA @LOCAL09
    case 0xC23979: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:777 SEP #PROC_FLAGS::ACCUM8
    case 0xC2397B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:778 STA BATTLE_MENU_SELECTION
    case 0xC2397D: cpu.execute_instruction<0x8D>(0x00A97D, 3); return true;
    // src/battle/menu_handler.asm:779 REP #PROC_FLAGS::ACCUM8
    case 0xC23980: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:780 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC23982: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00A97D, 3); return true;
    // src/battle/menu_handler.asm:780 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC23982.
    case 0xC23984: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x003122, 3); return true;
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    case 0xC23985: cpu.execute_instruction<0x22>(0xC1DE31, 4); return true;
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    // Overlapping static entry reached from 0xC23984.
    case 0xC23986: cpu.execute_instruction<0x31>(0x0000DE, 2); return true;
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    // Overlapping static entry reached from 0xC23984.
    case 0xC23987: cpu.execute_instruction<0xDE>(0x00AAC1, 3); return true;
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    // Overlapping static entry reached from 0xC23986.
    case 0xC23988: cpu.execute_instruction<0xC1>(0x0000AA, 2); return true;
    // src/battle/menu_handler.asm:782 TAX
    case 0xC23989: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:783 BEQL @UNKNOWN63
    case 0xC2398A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:783 BEQL @UNKNOWN63
    case 0xC2398C: cpu.execute_instruction<0x4C>(0x003829, 3); return true;
    // src/battle/menu_handler.asm:784 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2398F: cpu.execute_instruction<0xAD>(0x00A97E, 3); return true;
    // src/battle/menu_handler.asm:785 AND #$00FF
    case 0xC23992: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:785 AND #$00FF
    // Overlapping static entry reached from 0xC23992.
    case 0xC23994: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/menu_handler.asm:786 TAX
    case 0xC23995: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/menu_handler.asm:787 LDA @LOCAL09
    case 0xC23996: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:788 JSL GET_CHARACTER_ITEM
    case 0xC23998: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/battle/menu_handler.asm:789 SEP #PROC_FLAGS::ACCUM8
    case 0xC2399C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:790 STA BATTLE_ITEM_USED
    case 0xC2399E: cpu.execute_instruction<0x8D>(0x00A97C, 3); return true;
    // src/battle/menu_handler.asm:791 REP #PROC_FLAGS::ACCUM8
    case 0xC239A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:792 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC239A3: cpu.execute_instruction<0xAD>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:793 STA @VIRTUAL02
    case 0xC239A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:794 STA @LOCAL05
    case 0xC239A8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:795 JMP @UNKNOWN112
    case 0xC239AA: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:797 SEP #PROC_FLAGS::ACCUM8
    case 0xC239AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:798 LDA #1
    case 0xC239AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/menu_handler.asm:799 STA GAME_STATE+game_state::auto_fight_enable
    case 0xC239B1: cpu.execute_instruction<0x8D>(0x0098B1, 3); return true;
    // src/battle/menu_handler.asm:799 STA GAME_STATE+game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC239AF.
    case 0xC239B2: cpu.execute_instruction<0xB1>(0x000098, 2); return true;
    // src/battle/menu_handler.asm:800 JSL UNKNOWN_C20266
    case 0xC239B4: cpu.execute_instruction<0x22>(0xC20266, 4); return true;
    // src/battle/menu_handler.asm:802 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC239B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:802 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC239B8.
    case 0xC239BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:803 STA @VIRTUAL02
    case 0xC239BB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:804 STA @LOCAL05
    case 0xC239BD: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:805 JMP @UNKNOWN112
    case 0xC239BF: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:807 LDA @LOCAL09
    case 0xC239C2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:808 CMP #PARTY_MEMBER::JEFF
    case 0xC239C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/menu_handler.asm:808 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC239C4.
    case 0xC239C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/menu_handler.asm:809 BNE @UNKNOWN93
    case 0xC239C7: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // src/battle/menu_handler.asm:810 LDA #BATTLE_ACTIONS::SPY
    case 0xC239C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:810 LDA #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC239C9.
    case 0xC239CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:811 STA @VIRTUAL02
    case 0xC239CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:812 STA @LOCAL05
    case 0xC239CE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:813 LDA @VIRTUAL02
    case 0xC239D0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:814 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC239D2: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:815 SEP #PROC_FLAGS::ACCUM8
    case 0xC239D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:816 LDA #17
    case 0xC239D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/battle/menu_handler.asm:817 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC239D9: cpu.execute_instruction<0x8D>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:817 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC239D7.
    case 0xC239DA: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:818 LDY @VIRTUAL02
    case 0xC239DC: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:819 LDX #1
    case 0xC239DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:819 LDX #1
    // Overlapping static entry reached from 0xC239DE.
    case 0xC239E0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/menu_handler.asm:820 REP #PROC_FLAGS::ACCUM8
    case 0xC239E1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:821 LDA #0
    case 0xC239E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:821 LDA #0
    // Overlapping static entry reached from 0xC239E3.
    case 0xC239E5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:822 JSL REDIRECT_C1242E
    case 0xC239E6: cpu.execute_instruction<0x22>(0xC1DE37, 4); return true;
    // src/battle/menu_handler.asm:823 SEP #PROC_FLAGS::ACCUM8
    case 0xC239EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:824 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC239EC: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:825 REP #PROC_FLAGS::ACCUM8
    case 0xC239EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:826 AND #$00FF
    case 0xC239F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:826 AND #$00FF
    // Overlapping static entry reached from 0xC239F1.
    case 0xC239F3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:827 BEQL @UNKNOWN63
    case 0xC239F4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:827 BEQL @UNKNOWN63
    case 0xC239F6: cpu.execute_instruction<0x4C>(0x003829, 3); return true;
    // src/battle/menu_handler.asm:828 JMP @UNKNOWN112
    case 0xC239F9: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:830 LDA @LOCAL09
    case 0xC239FC: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:831 SEP #PROC_FLAGS::ACCUM8
    case 0xC239FE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:832 STA BATTLE_MENU_SELECTION
    case 0xC23A00: cpu.execute_instruction<0x8D>(0x00A97D, 3); return true;
    // src/battle/menu_handler.asm:833 REP #PROC_FLAGS::ACCUM8
    case 0xC23A03: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:834 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC23A05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00A97D, 3); return true;
    // src/battle/menu_handler.asm:834 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC23A05.
    case 0xC23A07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x003D22, 3); return true;
    // src/battle/menu_handler.asm:835 JSL REDIRECT_BATTLE_PSI_MENU
    case 0xC23A08: cpu.execute_instruction<0x22>(0xC1DE3D, 4); return true;
    // src/battle/menu_handler.asm:835 JSL REDIRECT_BATTLE_PSI_MENU
    // Overlapping static entry reached from 0xC23A07.
    case 0xC23A09: cpu.execute_instruction<0x3D>(0x00C1DE, 3); return true;
    // src/battle/menu_handler.asm:835 JSL REDIRECT_BATTLE_PSI_MENU
    // Overlapping static entry reached from 0xC23A07.
    case 0xC23A0A: cpu.execute_instruction<0xDE>(0x00AAC1, 3); return true;
    // src/battle/menu_handler.asm:836 TAX
    case 0xC23A0C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:837 BEQL @UNKNOWN63
    case 0xC23A0D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:837 BEQL @UNKNOWN63
    case 0xC23A0F: cpu.execute_instruction<0x4C>(0x003829, 3); return true;
    // src/battle/menu_handler.asm:838 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A12: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:839 STZ BATTLE_ITEM_USED
    case 0xC23A14: cpu.execute_instruction<0x9C>(0x00A97C, 3); return true;
    // src/battle/menu_handler.asm:840 REP #PROC_FLAGS::ACCUM8
    case 0xC23A17: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:841 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A19: cpu.execute_instruction<0xAD>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:842 STA @VIRTUAL02
    case 0xC23A1C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:843 STA @LOCAL05
    case 0xC23A1E: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:844 JMP @UNKNOWN112
    case 0xC23A20: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:846 LDA #BATTLE_ACTIONS::GUARD
    case 0xC23A23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/menu_handler.asm:846 LDA #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC23A23.
    case 0xC23A25: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:847 STA @VIRTUAL02
    case 0xC23A26: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:848 STA @LOCAL05
    case 0xC23A28: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:849 LDA @VIRTUAL02
    case 0xC23A2A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:850 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A2C: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:851 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:852 STZ BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23A31: cpu.execute_instruction<0x9C>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:853 JMP @UNKNOWN112
    case 0xC23A34: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:855 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A37: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:856 LDA #1
    case 0xC23A39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/menu_handler.asm:857 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23A3B: cpu.execute_instruction<0x8D>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:857 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23A39.
    case 0xC23A3C: cpu.execute_instruction<0x81>(0x0000A9, 2); return true;
    // src/battle/menu_handler.asm:858 REP #PROC_FLAGS::ACCUM8
    case 0xC23A3E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:859 LDA @LOCAL09
    case 0xC23A40: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:860 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A42: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:861 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23A44: cpu.execute_instruction<0x8D>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:862 REP #PROC_FLAGS::ACCUM8
    case 0xC23A47: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:863 LDA #BATTLE_ACTIONS::RUN_AWAY
    case 0xC23A49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000117, 3); return true;
    // src/battle/menu_handler.asm:863 LDA #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC23A49.
    case 0xC23A4B: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:864 STA @VIRTUAL02
    case 0xC23A4C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:864 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23A4B.
    case 0xC23A4D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:865 STA @LOCAL05
    case 0xC23A4E: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:866 LDA @VIRTUAL02
    case 0xC23A50: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:867 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A52: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:868 JMP @UNKNOWN112
    case 0xC23A55: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:870 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC23A58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000081, 2); else cpu.execute_instruction<0xA2>(0x00A981, 3); return true;
    // src/battle/menu_handler.asm:870 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23A58.
    case 0xC23A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x001C86, 3); return true;
    // src/battle/menu_handler.asm:871 STX @LOCAL04
    case 0xC23A5B: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:871 STX @LOCAL04
    // Overlapping static entry reached from 0xC23A5A.
    case 0xC23A5C: cpu.execute_instruction<0x1C>(0x0020E2, 3); return true;
    // src/battle/menu_handler.asm:872 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A5D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:873 LDA #1
    case 0xC23A5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/menu_handler.asm:874 STA __BSS_START__,X
    case 0xC23A61: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:874 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23A5F.
    case 0xC23A62: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/menu_handler.asm:875 REP #PROC_FLAGS::ACCUM8
    case 0xC23A64: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:876 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23A66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x00A982, 3); return true;
    // src/battle/menu_handler.asm:876 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23A66.
    case 0xC23A68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x000485, 3); return true;
    // src/battle/menu_handler.asm:877 STA @VIRTUAL04
    case 0xC23A69: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:877 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC23A68.
    case 0xC23A6A: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/battle/menu_handler.asm:878 LDA @LOCAL09
    case 0xC23A6B: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:878 LDA @LOCAL09
    // Overlapping static entry reached from 0xC23A6A.
    case 0xC23A6C: cpu.execute_instruction<0x26>(0x0000E2, 2); return true;
    // src/battle/menu_handler.asm:879 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:879 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23A6C.
    case 0xC23A6E: cpu.execute_instruction<0x20>(0x0004A6, 3); return true;
    // src/battle/menu_handler.asm:880 LDX @VIRTUAL04
    case 0xC23A6F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:881 STA __BSS_START__,X
    case 0xC23A71: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:882 REP #PROC_FLAGS::ACCUM8
    case 0xC23A74: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:883 LDA @LOCAL09
    case 0xC23A76: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/menu_handler.asm:884 CMP #PARTY_MEMBER::PAULA
    case 0xC23A78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/menu_handler.asm:884 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC23A78.
    case 0xC23A7A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:885 BEQ @UNKNOWN99
    case 0xC23A7B: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/menu_handler.asm:886 CMP #PARTY_MEMBER::POO
    case 0xC23A7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:886 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23A7D.
    case 0xC23A7F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:887 BEQL @UNKNOWN111
    case 0xC23A80: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:887 BEQL @UNKNOWN111
    case 0xC23A82: cpu.execute_instruction<0x4C>(0x003B19, 3); return true;
    // src/battle/menu_handler.asm:888 JMP @UNKNOWN112
    case 0xC23A85: cpu.execute_instruction<0x4C>(0x003B4D, 3); return true;
    // src/battle/menu_handler.asm:890 LDA GIYGAS_PHASE
    case 0xC23A88: cpu.execute_instruction<0xAD>(0x00A97A, 3); return true;
    // src/battle/menu_handler.asm:891 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC23A8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/menu_handler.asm:891 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC23A8B.
    case 0xC23A8D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:892 BEQ @UNKNOWN100
    case 0xC23A8E: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/menu_handler.asm:893 CMP #GIYGAS_PHASES::PRAYER_1_USED
    case 0xC23A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/menu_handler.asm:893 CMP #GIYGAS_PHASES::PRAYER_1_USED
    // Overlapping static entry reached from 0xC23A90.
    case 0xC23A92: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:894 BEQ @UNKNOWN101
    case 0xC23A93: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/battle/menu_handler.asm:895 CMP #GIYGAS_PHASES::PRAYER_2_USED
    case 0xC23A95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/menu_handler.asm:895 CMP #GIYGAS_PHASES::PRAYER_2_USED
    // Overlapping static entry reached from 0xC23A95.
    case 0xC23A97: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:896 BEQ @UNKNOWN102
    case 0xC23A98: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/menu_handler.asm:897 CMP #GIYGAS_PHASES::PRAYER_3_USED
    case 0xC23A9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/menu_handler.asm:897 CMP #GIYGAS_PHASES::PRAYER_3_USED
    // Overlapping static entry reached from 0xC23A9A.
    case 0xC23A9C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:898 BEQ @UNKNOWN103
    case 0xC23A9D: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/menu_handler.asm:899 CMP #GIYGAS_PHASES::PRAYER_4_USED
    case 0xC23A9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/menu_handler.asm:899 CMP #GIYGAS_PHASES::PRAYER_4_USED
    // Overlapping static entry reached from 0xC23A9F.
    case 0xC23AA1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:900 BEQ @UNKNOWN104
    case 0xC23AA2: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/menu_handler.asm:901 CMP #GIYGAS_PHASES::PRAYER_5_USED
    case 0xC23AA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/battle/menu_handler.asm:901 CMP #GIYGAS_PHASES::PRAYER_5_USED
    // Overlapping static entry reached from 0xC23AA4.
    case 0xC23AA6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:902 BEQ @UNKNOWN105
    case 0xC23AA7: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/battle/menu_handler.asm:903 CMP #GIYGAS_PHASES::PRAYER_6_USED
    case 0xC23AA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/battle/menu_handler.asm:903 CMP #GIYGAS_PHASES::PRAYER_6_USED
    // Overlapping static entry reached from 0xC23AA9.
    case 0xC23AAB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:904 BEQ @UNKNOWN106
    case 0xC23AAC: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/battle/menu_handler.asm:905 CMP #GIYGAS_PHASES::PRAYER_7_USED
    case 0xC23AAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/battle/menu_handler.asm:905 CMP #GIYGAS_PHASES::PRAYER_7_USED
    // Overlapping static entry reached from 0xC23AAE.
    case 0xC23AB0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:906 BEQ @UNKNOWN107
    case 0xC23AB1: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/menu_handler.asm:907 CMP #GIYGAS_PHASES::PRAYER_8_USED
    case 0xC23AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/battle/menu_handler.asm:907 CMP #GIYGAS_PHASES::PRAYER_8_USED
    // Overlapping static entry reached from 0xC23AB3.
    case 0xC23AB5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/menu_handler.asm:908 BEQ @UNKNOWN108
    case 0xC23AB6: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/battle/menu_handler.asm:909 BRA @UNKNOWN109
    case 0xC23AB8: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/battle/menu_handler.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC23ABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000123, 3); return true;
    // src/battle/menu_handler.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC23ABA.
    case 0xC23ABC: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:912 STA @VIRTUAL02
    case 0xC23ABD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:912 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23ABC.
    case 0xC23ABE: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:913 STA @LOCAL05
    case 0xC23ABF: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:914 BRA @UNKNOWN110
    case 0xC23AC1: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/battle/menu_handler.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC23AC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000124, 3); return true;
    // src/battle/menu_handler.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC23AC3.
    case 0xC23AC5: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:917 STA @VIRTUAL02
    case 0xC23AC6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:917 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AC5.
    case 0xC23AC7: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:918 STA @LOCAL05
    case 0xC23AC8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:919 BRA @UNKNOWN110
    case 0xC23ACA: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/battle/menu_handler.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC23ACC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000125, 3); return true;
    // src/battle/menu_handler.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC23ACC.
    case 0xC23ACE: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:922 STA @VIRTUAL02
    case 0xC23ACF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:922 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23ACE.
    case 0xC23AD0: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:923 STA @LOCAL05
    case 0xC23AD1: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:924 BRA @UNKNOWN110
    case 0xC23AD3: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/battle/menu_handler.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC23AD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000126, 3); return true;
    // src/battle/menu_handler.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC23AD5.
    case 0xC23AD7: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:927 STA @VIRTUAL02
    case 0xC23AD8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:927 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AD7.
    case 0xC23AD9: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:928 STA @LOCAL05
    case 0xC23ADA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:929 BRA @UNKNOWN110
    case 0xC23ADC: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/battle/menu_handler.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC23ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000127, 3); return true;
    // src/battle/menu_handler.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC23ADE.
    case 0xC23AE0: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:932 STA @VIRTUAL02
    case 0xC23AE1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:932 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AE0.
    case 0xC23AE2: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:933 STA @LOCAL05
    case 0xC23AE3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:934 BRA @UNKNOWN110
    case 0xC23AE5: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/battle/menu_handler.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC23AE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000128, 3); return true;
    // src/battle/menu_handler.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC23AE7.
    case 0xC23AE9: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:937 STA @VIRTUAL02
    case 0xC23AEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:937 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AE9.
    case 0xC23AEB: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:938 STA @LOCAL05
    case 0xC23AEC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:939 BRA @UNKNOWN110
    case 0xC23AEE: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC23AF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x000129, 3); return true;
    // src/battle/menu_handler.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC23AF0.
    case 0xC23AF2: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:942 STA @VIRTUAL02
    case 0xC23AF3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:942 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AF2.
    case 0xC23AF4: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:943 STA @LOCAL05
    case 0xC23AF5: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:944 BRA @UNKNOWN110
    case 0xC23AF7: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/battle/menu_handler.asm:946 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC23AF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00012A, 3); return true;
    // src/battle/menu_handler.asm:946 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC23AF9.
    case 0xC23AFB: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:947 STA @VIRTUAL02
    case 0xC23AFC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:947 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AFB.
    case 0xC23AFD: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:948 STA @LOCAL05
    case 0xC23AFE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:949 BRA @UNKNOWN110
    case 0xC23B00: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/menu_handler.asm:951 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC23B02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00012B, 3); return true;
    // src/battle/menu_handler.asm:951 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC23B02.
    case 0xC23B04: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:952 STA @VIRTUAL02
    case 0xC23B05: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:952 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23B04.
    case 0xC23B06: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:953 STA @LOCAL05
    case 0xC23B07: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:954 BRA @UNKNOWN110
    case 0xC23B09: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/menu_handler.asm:956 LDA #BATTLE_ACTIONS::PRAY
    case 0xC23B0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/menu_handler.asm:956 LDA #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC23B0B.
    case 0xC23B0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:957 STA @VIRTUAL02
    case 0xC23B0E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:958 STA @LOCAL05
    case 0xC23B10: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:960 LDA @VIRTUAL02
    case 0xC23B12: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:961 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23B14: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:962 BRA @UNKNOWN112
    case 0xC23B17: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/battle/menu_handler.asm:964 LDA #BATTLE_ACTIONS::MIRROR
    case 0xC23B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000118, 3); return true;
    // src/battle/menu_handler.asm:964 LDA #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC23B19.
    case 0xC23B1B: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:965 STA @VIRTUAL02
    case 0xC23B1C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:965 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23B1B.
    case 0xC23B1D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/menu_handler.asm:966 STA @LOCAL05
    case 0xC23B1E: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:967 LDA @VIRTUAL02
    case 0xC23B20: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:968 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23B22: cpu.execute_instruction<0x8D>(0x00A97F, 3); return true;
    // src/battle/menu_handler.asm:969 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:970 LDA #17
    case 0xC23B27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00A611, 3); return true;
    // src/battle/menu_handler.asm:971 LDX @LOCAL04
    case 0xC23B29: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/menu_handler.asm:971 LDX @LOCAL04
    // Overlapping static entry reached from 0xC23B27.
    case 0xC23B2A: cpu.execute_instruction<0x1C>(0x00009D, 3); return true;
    // src/battle/menu_handler.asm:972 STA __BSS_START__,X
    case 0xC23B2B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:972 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B2A.
    case 0xC23B2D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/menu_handler.asm:973 LDY @VIRTUAL02
    case 0xC23B2E: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/menu_handler.asm:974 LDX #1
    case 0xC23B30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/menu_handler.asm:974 LDX #1
    // Overlapping static entry reached from 0xC23B30.
    case 0xC23B32: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/menu_handler.asm:975 REP #PROC_FLAGS::ACCUM8
    case 0xC23B33: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:976 LDA #0
    case 0xC23B35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:976 LDA #0
    // Overlapping static entry reached from 0xC23B35.
    case 0xC23B37: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:977 JSL REDIRECT_C1242E
    case 0xC23B38: cpu.execute_instruction<0x22>(0xC1DE37, 4); return true;
    // src/battle/menu_handler.asm:978 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:979 LDX @VIRTUAL04
    case 0xC23B3E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/menu_handler.asm:980 STA __BSS_START__,X
    case 0xC23B40: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/menu_handler.asm:981 REP #PROC_FLAGS::ACCUM8
    case 0xC23B43: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:982 AND #$00FF
    case 0xC23B45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:982 AND #$00FF
    // Overlapping static entry reached from 0xC23B45.
    case 0xC23B47: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:983 BEQL @UNKNOWN63
    case 0xC23B48: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:983 BEQL @UNKNOWN63
    case 0xC23B4A: cpu.execute_instruction<0x4C>(0x003829, 3); return true;
    // src/battle/menu_handler.asm:985 LDX @LOCAL03
    case 0xC23B4D: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/menu_handler.asm:986 REP #PROC_FLAGS::ACCUM8
    case 0xC23B4F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/menu_handler.asm:987 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC23B51: cpu.execute_instruction<0xBF>(0xC4A1F2, 4); return true;
    // src/battle/menu_handler.asm:988 AND #$00FF
    case 0xC23B55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/menu_handler.asm:988 AND #$00FF
    // Overlapping static entry reached from 0xC23B55.
    case 0xC23B57: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/menu_handler.asm:989 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC23B58: cpu.execute_instruction<0x22>(0xC1DD4D, 4); return true;
    // src/battle/menu_handler.asm:990 JSL RESUME_MUSIC
    case 0xC23B5C: cpu.execute_instruction<0x22>(0xEF026E, 4); return true;
    // src/battle/menu_handler.asm:991 LDA @LOCAL05
    case 0xC23B60: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/menu_handler.asm:992 STA @VIRTUAL02
    case 0xC23B62: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/menu_handler.asm:994 END_C_FUNCTION
    case 0xC23B64: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/menu_handler.asm:994 END_C_FUNCTION
    case 0xC23B65: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/miss_calc.asm (source_named).
bool execute_battle_miss_calc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/miss_calc.asm:3 BEGIN_C_FUNCTION
    case 0xC282F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282FB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC282FD.
    case 0xC282FF: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC28300: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC28301: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:11 TAY
    case 0xC28302: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:12 STY @MISS_MESSAGE
    case 0xC28303: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/battle/miss_calc.asm:13 LDX CURRENT_ATTACKER
    case 0xC28305: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/miss_calc.asm:14 LDA __BSS_START__+14,X
    case 0xC28308: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/miss_calc.asm:15 AND #$00FF
    case 0xC2830B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2830B.
    case 0xC2830D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/miss_calc.asm:16 BNEL @UNKNOWN5
    case 0xC2830E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/miss_calc.asm:16 BNEL @UNKNOWN5
    case 0xC28310: cpu.execute_instruction<0x4C>(0x00839C, 3); return true;
    // src/battle/miss_calc.asm:17 LDX CURRENT_ATTACKER
    case 0xC28313: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/miss_calc.asm:18 LDA __BSS_START__+15,X
    case 0xC28316: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/miss_calc.asm:19 AND #$00FF
    case 0xC28319: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC28319.
    case 0xC2831B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/miss_calc.asm:20 BNEL @UNKNOWN5
    case 0xC2831C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/miss_calc.asm:20 BNEL @UNKNOWN5
    case 0xC2831E: cpu.execute_instruction<0x4C>(0x00839C, 3); return true;
    // src/battle/miss_calc.asm:21 LDX CURRENT_ATTACKER
    case 0xC28321: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/miss_calc.asm:22 LDA __BSS_START__+16,X
    case 0xC28324: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/miss_calc.asm:23 AND #$00FF
    case 0xC28327: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC28327.
    case 0xC28329: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/miss_calc.asm:24 LDY #.SIZEOF(char_struct)
    case 0xC2832A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/miss_calc.asm:24 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2832A.
    case 0xC2832C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/miss_calc.asm:25 JSL MULT168
    case 0xC2832D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/miss_calc.asm:26 TAX
    case 0xC28331: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:27 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC28332: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/battle/miss_calc.asm:28 AND #$00FF
    case 0xC28335: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC28335.
    case 0xC28337: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/miss_calc.asm:29 BEQ @UNKNOWN2
    case 0xC28338: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/battle/miss_calc.asm:30 DEC
    case 0xC2833A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:31 STA @VIRTUAL02
    case 0xC2833B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:32 TXA
    case 0xC2833D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:33 CLC
    case 0xC2833E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:34 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC2833F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/miss_calc.asm:34 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC2833F.
    case 0xC28341: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/miss_calc.asm:35 CLC
    case 0xC28342: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:36 ADC @VIRTUAL02
    case 0xC28343: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:36 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC28341.
    case 0xC28344: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:37 TAX
    case 0xC28345: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:38 LDA __BSS_START__,X
    case 0xC28346: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/miss_calc.asm:39 AND #$00FF
    case 0xC28349: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC28349.
    case 0xC2834B: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2834C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2834C.
    case 0xC2834E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2834F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/miss_calc.asm:41 CLC
    case 0xC28353: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:42 ADC #item::params + item_parameters::special
    case 0xC28354: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/miss_calc.asm:42 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC28354.
    case 0xC28356: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:43 TAX
    case 0xC28357: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC28358: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/miss_calc.asm:45 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2835A: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/miss_calc.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC2835E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/miss_calc.asm:47 SEC
    case 0xC28360: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:48 AND #$00FF
    case 0xC28361: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC28361.
    case 0xC28363: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/miss_calc.asm:49 SBC #$0080
    case 0xC28364: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/miss_calc.asm:49 SBC #$0080
    // Overlapping static entry reached from 0xC28364.
    case 0xC28366: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/miss_calc.asm:50 EOR #$FF80
    case 0xC28367: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/miss_calc.asm:50 EOR #$FF80
    // Overlapping static entry reached from 0xC28367.
    case 0xC28369: cpu.execute_instruction<0xFF>(0x1286AA, 4); return true;
    // src/battle/miss_calc.asm:51 TAX
    case 0xC2836A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:52 STX @MISS_CHANCE
    case 0xC2836B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:53 BRA @UNKNOWN3
    case 0xC2836D: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/miss_calc.asm:55 LDX #1
    case 0xC2836F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/miss_calc.asm:55 LDX #1
    // Overlapping static entry reached from 0xC2836F.
    case 0xC28371: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/miss_calc.asm:56 STX @MISS_CHANCE
    case 0xC28372: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:58 LDX CURRENT_ATTACKER
    case 0xC28374: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/miss_calc.asm:59 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC28377: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/miss_calc.asm:60 AND #$00FF
    case 0xC2837A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC2837A.
    case 0xC2837C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/miss_calc.asm:61 CMP #STATUS_2::CRYING
    case 0xC2837D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/miss_calc.asm:61 CMP #STATUS_2::CRYING
    // Overlapping static entry reached from 0xC2837D.
    case 0xC2837F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/miss_calc.asm:62 BEQ @UNKNOWN4
    case 0xC28380: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/miss_calc.asm:63 LDX CURRENT_ATTACKER
    case 0xC28382: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/miss_calc.asm:64 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC28385: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/miss_calc.asm:65 AND #$00FF
    case 0xC28388: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC28388.
    case 0xC2838A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/miss_calc.asm:66 CMP #STATUS_0::NAUSEOUS
    case 0xC2838B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/miss_calc.asm:66 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC2838B.
    case 0xC2838D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/miss_calc.asm:67 BNE @UNKNOWN6
    case 0xC2838E: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/battle/miss_calc.asm:69 LDX @MISS_CHANCE
    case 0xC28390: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:70 TXA
    case 0xC28392: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:71 CLC
    case 0xC28393: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:72 ADC #8 ;miss chance + 1/2
    case 0xC28394: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/miss_calc.asm:72 ADC #8 ;miss chance + 1/2
    // Overlapping static entry reached from 0xC28394.
    case 0xC28396: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:73 TAX
    case 0xC28397: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:74 STX @MISS_CHANCE
    case 0xC28398: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:75 BRA @UNKNOWN6
    case 0xC2839A: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/battle/miss_calc.asm:77 LDX CURRENT_ATTACKER
    case 0xC2839C: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/miss_calc.asm:78 LDA __BSS_START__,X
    case 0xC2839F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/miss_calc.asm:79 LDY #.SIZEOF(enemy_data)
    case 0xC283A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/miss_calc.asm:79 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC283A2.
    case 0xC283A4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/miss_calc.asm:80 JSL MULT168
    case 0xC283A5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/miss_calc.asm:81 CLC
    case 0xC283A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:82 ADC #enemy_data::miss_rate
    case 0xC283AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000044, 2); else cpu.execute_instruction<0x69>(0x000044, 3); return true;
    // src/battle/miss_calc.asm:82 ADC #enemy_data::miss_rate
    // Overlapping static entry reached from 0xC283AA.
    case 0xC283AC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:83 TAX
    case 0xC283AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:84 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC283AE: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/miss_calc.asm:85 AND #$00FF
    case 0xC283B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/miss_calc.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC283B2.
    case 0xC283B4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/miss_calc.asm:86 TAX
    case 0xC283B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:87 STX @MISS_CHANCE
    case 0xC283B6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:89 LDX @MISS_CHANCE
    case 0xC283B8: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:90 BEQ @UNKNOWN9
    case 0xC283BA: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/battle/miss_calc.asm:91 LDA #16
    case 0xC283BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/miss_calc.asm:91 LDA #16
    // Overlapping static entry reached from 0xC283BC.
    case 0xC283BE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/miss_calc.asm:92 JSR RAND_LIMIT
    case 0xC283BF: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/miss_calc.asm:93 STA @VIRTUAL02
    case 0xC283C2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:94 LDX @MISS_CHANCE
    case 0xC283C4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/miss_calc.asm:95 TXA
    case 0xC283C6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:96 DEC
    case 0xC283C7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/miss_calc.asm:97 CMP @VIRTUAL02
    case 0xC283C8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/miss_calc.asm:98 BCC @UNKNOWN9
    case 0xC283CA: cpu.execute_instruction<0x90>(0x000027, 2); return true;
    // src/battle/miss_calc.asm:99 LDY @MISS_MESSAGE
    case 0xC283CC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/battle/miss_calc.asm:100 BEQ @UNKNOWN7
    case 0xC283CE: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC283D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0076D8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    // Overlapping static entry reached from 0xC283D0.
    case 0xC283D2: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC283D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    // Overlapping static entry reached from 0xC283D2.
    case 0xC283D4: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC283D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    // Overlapping static entry reached from 0xC283D5.
    case 0xC283D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC283D8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC283DA: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/miss_calc.asm:102 BRA @UNKNOWN8
    case 0xC283DE: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC283E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0076C7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    // Overlapping static entry reached from 0xC283E0.
    case 0xC283E2: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC283E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    // Overlapping static entry reached from 0xC283E2.
    case 0xC283E4: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC283E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    // Overlapping static entry reached from 0xC283E5.
    case 0xC283E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC283E8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC283EA: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/miss_calc.asm:106 LDA #1
    case 0xC283EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/miss_calc.asm:106 LDA #1
    // Overlapping static entry reached from 0xC283EE.
    case 0xC283F0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/miss_calc.asm:107 BRA @UNKNOWN10
    case 0xC283F1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/miss_calc.asm:109 LDA #0
    case 0xC283F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/miss_calc.asm:109 LDA #0
    // Overlapping static entry reached from 0xC283F3.
    case 0xC283F5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/miss_calc.asm:111 END_C_FUNCTION
    case 0xC283F6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/miss_calc.asm:111 END_C_FUNCTION
    case 0xC283F7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
